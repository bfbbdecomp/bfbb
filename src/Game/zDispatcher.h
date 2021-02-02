#ifndef ZDISPATCHER_H
#define ZDISPATCHER_H

#include "../Core/x/xBase.h"

struct st_ZDISPATCH_DATA : xBase
{
    xBaseAsset* rawass;
    int32 placeholder;
};

struct zScene;

void zDispatcher_scenePrepare();
void zDispatcher_sceneFinish();
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt);
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx);
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata, zScene*);
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s);

#endif