/*-------------------------------------------------------------------------*\
-----------------------------------------------------------------------------
Ptex Shaders
http://www.mankua.com/Ptex/Ptex.php

Author : Diego A. Casta�o
Copyright : (c) 2004-2011 Mankua Software Inc.

Licence : ZLib licence :

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any
damages arising from the use of this software.

Permission is granted to anyone to use this software for any
purpose, including commercial applications, and to alter it and
redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must
not claim that you wrote the original software. If you use this
software in a product, an acknowledgment in the product documentation
would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and
must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.
-----------------------------------------------------------------------------
\*-------------------------------------------------------------------------*/

#include "max.h"
#include "debug.h"

#define FNAME "c:\\Debug\\PtexMax.txt"

#ifdef DODEBUG

void Debug(int a, int b)
{
	FILE *file = fopen( FNAME, "w" );
	fprintf(file, "\n");
	fclose(file);
}

void Debug( TSTR str )
{
	FILE *file = fopen( FNAME, "a+" );
	fprintf(file, "%s",str);
	fclose(file);
}

void Debug( TSTR str, TSTR v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s%s", str, v );
	fclose( file );
}

void DebugTime( char * text )
{
	SYSTEMTIME time;
	GetSystemTime( &time );

	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s : %02d:%02d:%02d:%04d\n", text, time.wHour, time.wMinute, time.wSecond, time.wMilliseconds );
	fclose( file );
}

void Debug( TSTR str, int v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s%d", str, v );
	if ( nl ) fprintf( file, "\n" );
	fclose( file );
}

void Debug( TSTR str, unsigned int v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s%d", str, v );
	if ( nl ) fprintf( file, "\n" );
	fclose( file );
}

void Debug( TSTR str, float v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s%f", str, v );
	if ( nl ) fprintf( file, "\n" );
	fclose( file );
}

void Debug( TSTR str, IPoint2 v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s[%d,%d]", str, v.x, v.y );
	if ( nl ) fprintf( file, "\n" );
	fclose(file);
} 

void Debug( TSTR str, IPoint3 v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s[%d,%d,%d]", str, v.x, v.y, v.z );
	if ( nl ) fprintf( file, "\n" );
	fclose(file);
} 

void Debug( TSTR str, Point2 v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s[%f,%f]", str, v.x, v.y );
	if ( nl ) fprintf( file, "\n" );
	fclose(file);
} 

void Debug( TSTR str, Point3 v, bool nl )
{
	FILE * file = fopen( FNAME, "a+" );
	fprintf( file, "%s[%f,%f,%f]", str, v.x, v.y, v.z );
	if ( nl ) fprintf( file, "\n" );
	fclose(file);
} 

#endif
