#ifndef ZSCRIPT_H
#define ZSCRIPT_H

#include <types.h>
#include "../Core/x/xBase.h"
#include "../Core/x/xDynAsset.h"

struct xScriptAsset : xDynAsset
{
    // There is definitely more here, but idk what.
};

struct zScript : xBase
{
    xScriptAsset* asset;
    // I'm 90% sure there is more here, but idk what.
};

void zScriptInit(void* data, void* asset);
void zScriptInit(xBase* data, xScriptAsset* asset);
void zScriptReset(zScript* script);
void zScript_Save(zScript* script, xSerial* s);
void zScript_Load(zScript* script, xSerial* s);

#endif