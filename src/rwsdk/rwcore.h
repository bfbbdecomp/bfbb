#ifndef RWCORE_H
#define RWCORE_H

typedef struct RwRaster;
typedef struct RwTexDictionary;

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	char name[32];
	char mask[32];
	unsigned int filterAddressing;
	int refCount;
};

enum RwFogType
{
    rwFOGTYPENAFOGTYPE,
    rwFOGTYPELINEAR,
    rwFOGTYPEEXPONENTIAL,
    rwFOGTYPEEXPONENTIAL2,
    rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
};

struct RwCamera
{
};

extern "C"{
    extern void RwRenderStateSet(int a, void* b);
}

#endif