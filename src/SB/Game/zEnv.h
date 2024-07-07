#ifndef ZENV_H
#define ZENV_H

#include "xBase.h"
#include "xEnv.h"

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
S32 zEnvEventCB(xBase*, xBase* to, U32 toEvent, const F32* toParam, xBase*);

#endif
