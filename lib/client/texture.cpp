
/* Copyright (c) 2009, Stefan Eilemann <eile@equalizergraphics.com>
   All rights reserved. */

#include "texture.h"

#include "image.h"
#include "window.h"

namespace eq
{
Texture::Texture( GLEWContext* const glewContext )
        : _id( 0 )
        , _internalFormat( 0 )
        , _format( 0 )
        , _type( 0 )
        , _width( 0 )
        , _height( 0 )
        , _defined( false ) 
        , _glewContext( glewContext )
{
}

Texture::~Texture()
{
    if( _id != 0 )
        EQWARN << "OpenGL texture was not freed" << std::endl;

    _id      = 0;
    _defined = false;
}

bool Texture::isValid() const
{ 
    return ( _id != 0 && _defined );
}

void Texture::flush()
{
    if( _id == 0 )
        return;

    CHECK_THREAD( _thread );
    glDeleteTextures( 1, &_id );
    _id = 0;
    _defined = false;
}

void Texture::setFormat( const GLuint format )
{
    if( _internalFormat == format )
        return;

    _defined = false;

    _internalFormat  = format;
    switch( format )
    {
        case GL_RGBA8:
        case GL_RGBA16:
                _format = GL_BGRA;
                _type   = GL_UNSIGNED_BYTE;
            break;

        case GL_RGBA16F:
        case GL_RGBA32F:
                _format = GL_RGBA;
                _type   = GL_FLOAT;
            break;

        case GL_ALPHA32F_ARB:
                _format = GL_ALPHA;
                _type   = GL_FLOAT;
            break;

        case GL_RGBA32UI:
                _format = GL_RGBA_INTEGER_EXT;
                _type   = GL_UNSIGNED_INT;
            break;

        default:
                _format = _internalFormat;
                _type   = GL_INT;
    }
}

void Texture::_generate()
{
    CHECK_THREAD( _thread );
    if( _id != 0 )
        return;

    _defined = false;
    glGenTextures( 1, &_id );
}

void Texture::_resize( const int32_t width, const int32_t height )
{
    if( _width < width )
    {
        _width   = width;
        _defined = false;
    }

    if( _height < height )
    {
        _height  = height;
        _defined = false;
    }
}

void Texture::copyFromFrameBuffer( const PixelViewport& pvp )
{
    CHECK_THREAD( _thread );
    EQASSERT( _internalFormat != 0 );

    _generate();
    _resize( pvp.w, pvp.h );
    glBindTexture( GL_TEXTURE_RECTANGLE_ARB, _id );

    if( _defined )
    {
        EQ_GL_CALL( glCopyTexSubImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, 0, 0,
                                         pvp.x, pvp.y, pvp.w, pvp.h ));
    }
    else
    {
        EQ_GL_CALL( glCopyTexImage2D( GL_TEXTURE_RECTANGLE_ARB, 0,
                                      _internalFormat,
                                      pvp.x, pvp.y, pvp.w, pvp.h, 0 ));
        _defined = true;
    }
}

void Texture::upload( const Image* image, const Frame::Buffer which )
{
    CHECK_THREAD( _thread );
    EQASSERT( _internalFormat != 0 );

    const eq::PixelViewport& pvp = image->getPixelViewport();

    _generate();
    _resize( pvp.w, pvp.h );
    glBindTexture( GL_TEXTURE_RECTANGLE_ARB, _id );

    if( _defined )
    {
        EQ_GL_CALL( glTexSubImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, 0, 0,
                                     pvp.w, pvp.h,
                                     image->getFormat( which ),
                                     image->getType( which ),
                                     image->getPixelPointer( which )));
    }
    else
    {
        EQ_GL_CALL( glTexImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, 
                                  _internalFormat, pvp.w, pvp.h, 0,
                                  image->getFormat( which ),
                                  image->getType( which ),
                                  image->getPixelPointer( which )));
        _defined = true;
    }
}

void Texture::download( void* buffer, const uint32_t format,
                        const uint32_t type ) const
{
    CHECK_THREAD( _thread );
    EQASSERT( _defined );
    glBindTexture( GL_TEXTURE_RECTANGLE_ARB, _id );
    glGetTexImage( GL_TEXTURE_RECTANGLE_ARB, 0, format, type, buffer );
}

void Texture::download( void* buffer ) const
{
    CHECK_THREAD( _thread );
    EQASSERT( _defined );
    glBindTexture( GL_TEXTURE_RECTANGLE_ARB, _id );
    glGetTexImage( GL_TEXTURE_RECTANGLE_ARB, 0, _format, _type, buffer );
}

void Texture::bindToFBO( const GLenum target, const int width, 
                         const int height )
{
    CHECK_THREAD( _thread );
    EQASSERT( _internalFormat );
    EQASSERT( _glewContext );

    _generate();

    glBindTexture( GL_TEXTURE_RECTANGLE_ARB, _id );

    glTexImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, _internalFormat, width, height,
                    0, _format, _type, 0 );

    glFramebufferTexture2DEXT( GL_FRAMEBUFFER, target, GL_TEXTURE_RECTANGLE_ARB,
                               _id, 0 );

    _width = width;
    _height = height;
    _defined = true;
}

void Texture::resize( const int width, const int height )
{
    CHECK_THREAD( _thread );
    EQASSERT( _id );
    EQASSERT( _internalFormat );

    if( _width == width && _height == height && _defined )
        return;

    glBindTexture( GL_TEXTURE_RECTANGLE_ARB, _id );

    glTexImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, _internalFormat, width, height,
                  0, _format, _type, 0 );

    _width  = width;
    _height = height;
    _defined = true;
}

}
