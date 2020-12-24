#ifndef ZNPCTYPEROBOT_H
#define ZNPCTYPEROBOT_H

#include <../Core/x/xPad.h>
#include <../Core/x/xModel.h>

typedef struct UVAModelInfo;

struct UVAModelInfo
{
	void Clear();
	void UVVelSet(float, float);
	xVec2 offset_vel;
	uint32 flg_uvam;
	RpAtomic* model;
	RwTexCoords* uv;
	int32 uvsize;
	xVec2 offset;
};

void ZNPC_Robot_Startup();
void ZNPC_Robot_Shutdown();
void zNPCRobot_ScenePrepare();

#endif