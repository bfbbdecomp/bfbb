#ifndef ZNPCTYPES_H
#define ZNPCTYPES_H

#include <../Core/x/xPad.h>
#include <../Core/x/xModel.h>

typedef struct UVAModelInfo;

struct UVAModelInfo
{
    void Hemorrage();
	void Clear();
	void UVVelSet(float, float);
	xVec2 offset_vel;
	uint32 flg_uvam;
	RpAtomic* model;
	RwTexCoords* uv;
	int32 uvsize;
	xVec2 offset;
};

void zNPCTypes_StartupTypes();
void zNPCTypes_ShutdownTypes();

#endif