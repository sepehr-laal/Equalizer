
.PHONY: subdirs $(SUBDIRS) $(DEPENDENCIES) install
.SUFFIXES: .d

all: $(TARGETS)

ifdef BUILD_FAT
install: all
	@mkdir -p $(INSTALL_DIR)/include
	@cp -vr $(BUILD_DIR)/include $(INSTALL_DIR)

	@mkdir -p $(INSTALL_LIBDIR)
	@cp -v $(INSTALL_LIBS) $(INSTALL_LIBDIR)

else # BUILD_FAT

ifndef VARIANT
install: all
	@mkdir -p $(INSTALL_DIR)/include
	@cp -vr $(BUILD_DIR)/include $(INSTALL_DIR)
	@for variant in $(VARIANTS); do \
		$(MAKE) TOP=$(TOP) VARIANT=$$variant install ;\
	done
else  # VARIANT
install:
	@mkdir -p $(INSTALL_LIBDIR)
	@cp -v $(INSTALL_LIBS) $(INSTALL_LIBDIR)
endif # VARIANT

endif # BUILD_FAT

# top level precompile command(s)
precompile: $(CXX_DEFINES_FILE)

$(CXX_DEFINES_FILE)::
	@echo "/* Generated from CXXFLAGS during build */" > $@.tmp
	@echo "#ifndef EQ_DEFINES_H" >> $@.tmp
	@echo "#define EQ_DEFINES_H" >> $@.tmp
	@for line in $(CXX_DEFINES_TXT); do  \
		echo "#ifndef $$line" >> $@.tmp ;\
		echo "#  define $$line" >> $@.tmp ;\
		echo "#endif" >> $@.tmp ;\
	done
	@echo "#endif // EQ_DEFINES_H" >> $@.tmp
	@cmp -s $@ $@.tmp || cp $@.tmp $@
	@rm $@.tmp

# recursive subdir rules
subdirs: $(SUBDIRS) 

$(SUBDIRS):
	@echo "$(DEPTH) $@"
	@$(MAKE) TOP=$(SUBDIRTOP) VARIANT=$(VARIANT) SUBDIR=$(SUBDIR)/$@ -C $@


# headers
$(HEADER_DIR)/%: %
	@mkdir -p $(@D)
	@echo 'Header file $@'
	@cp $< $@

# generated source code: defunct
%Dist.cpp %Packets.h: %.h $(TOP)/make/codegen.pl
	$(TOP)/make/codegen.pl $<

ifdef HEADER_GEN
  SOURCES_GEN  = $(HEADER_GEN:%.h=%Dist.cpp)
  SOURCES     += $(SOURCES_GEN)
endif

# libraries
$(FAT_DYNAMIC_LIB): $(THIN_DYNAMIC_LIBS)
ifndef VARIANT
	@mkdir -p $(@D)
	lipo -create $(THIN_DYNAMIC_LIBS) -output $@
endif

$(THIN_DYNAMIC_LIBS): $(PCHEADERS) $(OBJECTS)
ifdef VARIANT
	@mkdir -p $(@D)
	$(CXX) $(DSO_LDFLAGS) $(OBJECTS) $(LDFLAGS) -o $@
else
	@$(MAKE) VARIANT=$(@:$(BUILD_DIR)/%/lib/libeq$(MODULE).$(DSO_SUFFIX)=%) TOP=$(TOP) $@
endif

$(FAT_STATIC_LIB): $(THIN_STATIC_LIBS)
ifndef VARIANT
	@mkdir -p $(@D)
	lipo -create $(THIN_STATIC_LIBS) -output $@
endif

$(THIN_STATIC_LIBS): $(PCHEADERS) $(OBJECTS)
ifdef VARIANT
	@mkdir -p $(@D)
	@rm -f $@
	$(AR) $(ARFLAGS) $(OBJECTS) $(LDFLAGS) -o $@
else
	@$(MAKE) VARIANT=$(@:$(BUILD_DIR)/%/lib/libeq$(MODULE).a=%) TOP=$(TOP) $@
endif

OBJECT_DIR_ESCAPED = $(subst /,\/,$(OBJECT_DIR))

$(OBJECT_DIR)/%.h.gch: %.h
	@mkdir -p $(@D)
	$(CXX) -x c++-header $(INCLUDEFLAGS) $(CXXFLAGS) -DSUBDIR=\"$(SUBDIR)\" -c $< -o $@

$(OBJECT_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@echo -n "$(@D)/" > $(OBJECT_DIR)/$*.d
	@($(DEP_CXX) $(INCLUDEFLAGS) $(CXXFLAGS) -M -E $< >> \
		$(OBJECT_DIR)/$*.d ) || rm $(OBJECT_DIR)/$*.d
	$(CXX) $(INCLUDEFLAGS) $(CXXFLAGS) -DSUBDIR=\"$(SUBDIR)\" -c $< -o $@

%.cpp: $(OBJECT_DIR)/%d


# executables
$(FAT_PROGRAM): $(THIN_PROGRAMS)
ifndef VARIANT
	lipo -create $(THIN_PROGRAMS) -output $@
endif

$(THIN_PROGRAMS): $(PCHEADERS) $(OBJECTS)
ifdef VARIANT
	$(CXX) $(INCLUDEFLAGS) $(CXXFLAGS) $(SA_LDFLAGS) $(OBJECTS) $(LDFLAGS) -o $@
else
	@$(MAKE) VARIANT=$(subst .,,$(suffix $@)) TOP=$(TOP) $@
endif

ifndef PROGRAM
ifdef VARIANT
%.$(VARIANT): %.cpp
	$(CXX) $< $(INCLUDEFLAGS) $(CXXFLAGS) $(LDFLAGS) -DSUBDIR=\"$(SUBDIR)\" $(SA_LDFLAGS) $(SA_CXXFLAGS) -o $@ 

else # VARIANT

$(FAT_SIMPLE_PROGRAMS): $(THIN_SIMPLE_PROGRAMS)
	lipo -create $(foreach V,$(VARIANTS),$@.$(V)) -output $@

$(THIN_SIMPLE_PROGRAMS): $(CXXFILES)
	@$(MAKE) VARIANT=$(subst .,,$(suffix $@)) TOP=$(TOP) $@
endif # VARIANT
endif # PROGRAMS

# cleaning targets
clean:
ifdef VARIANT
	rm -f *~ .*~ $(TARGETS) $(CLEAN_EXTRA)
	rm -rf $(OBJECT_DIR) $(BUILD_DIR)
ifdef SUBDIRS
	@for dir in $(SUBDIRS); do \
		echo "$(DEPTH) $$dir clean"; \
		$(MAKE) TOP=$(SUBDIRTOP) VARIANT=$(VARIANT) -C $$dir $@ ;\
	done
endif
else # VARIANT
	@for variant in $(VARIANTS); do \
		$(MAKE) VARIANT=$$variant clean; \
	done
endif

# dependencies
-include dummy $(DEPENDENCIES)
