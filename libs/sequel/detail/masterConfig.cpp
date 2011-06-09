
/* Copyright (c) 2011, Stefan Eilemann <eile@eyescale.ch> 
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License version 2.1 as published
 * by the Free Software Foundation.
 *  
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "masterConfig.h"

#include "objectMap.h"
#include <eq/sequel/application.h>

namespace seq
{
namespace detail
{
MasterConfig::MasterConfig( eq::ServerPtr parent )
        : Config( parent )
{}

MasterConfig::~MasterConfig()
{}

bool MasterConfig::init()
{
    EQASSERT( !_objects );
    _objects = new ObjectMap( *getApplication( ));

    co::Object* initData = getInitData();
    if( initData )
        EQCHECK( _objects->register_( initData, OBJECTTYPE_INITDATA ));
    _objects->setInitData( initData );

    EQCHECK( registerObject( _objects ));

    if( !eq::Config::init( _objects->getID( )))
    {
        EQWARN << "Error during initialization: " << getError() << std::endl;
        exit();
        return false;
    }
    if( getError( ))
        EQWARN << "Error during initialization: " << getError() << std::endl;

    return true;
}

bool MasterConfig::exit()
{
    const bool retVal = eq::Config::exit();

    if( _objects )
        deregisterObject( _objects );
    delete _objects;
    _objects = 0;
    
    return retVal;
}

bool MasterConfig::run( co::Object* frameData )
{
    EQASSERT( _objects );
    if( frameData )
        EQCHECK( _objects->register_( frameData, OBJECTTYPE_FRAMEDATA ));
    _objects->setFrameData( frameData );

    seq::Application* const app = getApplication();
    while( isRunning( ))
    {
        startFrame();
        if( getError( ))
            EQWARN << "Error during frame start: " << getError() << std::endl;
        finishFrame();

        while( !needRedraw( )) // wait for an event requiring redraw
        {
            if( app->hasCommands( )) // execute non-critical pending commands
            {
                app->processCommand();
                handleEvents(); // non-blocking
            }
            else  // no pending commands, block on user event
            {
                const eq::ConfigEvent* event = nextEvent();
                if( !handleEvent( event ))
                    EQVERB << "Unhandled " << event << std::endl;
            }
        }
        handleEvents(); // process all pending events
    }
    finishAllFrames();
    return true;
}

uint32_t MasterConfig::startFrame()
{
    return eq::Config::startFrame( _objects->commit( ));
}

}
}