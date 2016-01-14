#ifndef __PROGRAMLOADER_H__
#define __PROGRAMLOADER_H__



#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>
#include <stdio.h>
#include <bgfx/bgfxplatform.h>

#include <bx/handlealloc.h>
#include <bx/readerwriter.h>
#include <bx/string.h>


#include <bgfx/bgfx.h>
#include <bx/uint32_t.h>

#include "engine/memory.h"


class ProgramLoader
{
public:
	bgfx::ShaderHandle loadShader(bx::FileReaderI* reader, const char* name);
	bgfx::ProgramHandle loadProgram(const char* vsName, const char* fsName);
protected:
	bx::CrtFileReader m_reader;
};

#endif