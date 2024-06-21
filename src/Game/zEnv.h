#ifndef ZENV_H
#define ZENV_H

#include "../Core/x/xBase.h"
#include "../Core/x/xEnv.h"

struct _zEnv : xBase
{
    xEnvAsset* easset;
};

void zEnvInit(void* env, void* easset);
void zEnvInit(_zEnv* env, xEnvAsset* easset);
void zEnvSetup(_zEnv* env);
void zEnvStartingCamera(_zEnv* env);
void zEnvRender(xEnv* env);
void zEnvSave(_zEnv* ent, xSerial* s);
void zEnvLoad(_zEnv* ent, xSerial* s);
void zEnvReset(_zEnv* env);
int32 zEnvEventCB(xBase*, xBase* to, uint32 toEvent, const float32* toParam, xBase*);

#endif