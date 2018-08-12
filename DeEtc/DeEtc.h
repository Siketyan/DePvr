#pragma once

#define _WINDLL_IMPORT
#define DLLEXPORT __declspec(dllexport)

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include "PVRTString.h"
#include "PVRTexture.h"
#include "PVRTextureUtilities.h"

extern "C"
{
	DLLEXPORT pvrtexture::CPVRTexture* LoadFromFile(char* path);
    DLLEXPORT pvrtexture::CPVRTexture* LoadFromMemory(void* pointer);
    DLLEXPORT bool Decode(pvrtexture::CPVRTexture* pointer);
    DLLEXPORT bool FlipVertical(pvrtexture::CPVRTexture* pvr);
    DLLEXPORT bool FlipHorizontal(pvrtexture::CPVRTexture* pvr);
    DLLEXPORT unsigned int GetWidth(pvrtexture::CPVRTexture* pvr);
    DLLEXPORT unsigned int GetHeight(pvrtexture::CPVRTexture* pvr);
    DLLEXPORT unsigned int GetDataSize(pvrtexture::CPVRTexture* pvr);
    DLLEXPORT void* GetDataPointer(pvrtexture::CPVRTexture* pvr);
}
