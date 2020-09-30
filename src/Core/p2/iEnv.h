#ifndef IENV_H
#define IENV_H

extern struct RpWorld;
extern struct xJSPHeader;
extern struct RpLight;
extern struct RwFrame;

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	RpLight* light[2];
	RwFrame* light_frame[2];
	int memlvl;
};

void iEnvFree(iEnv* param_1);
void iEnvRender(iEnv* param_1);
void iEnvDefaultLighting(iEnv* param_1);
//void iEnvLoad(iEnv* env, void* data, int dataType);
void iEnvLoad(iEnv* env, void const* data, unsigned int dataSize, int dataType);

#endif