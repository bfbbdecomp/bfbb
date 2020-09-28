#ifndef ZPAREMITTER_H
#define ZPAREMITTER_H

#include "../dolphin/include/dolphin/types.h"
#include "../Core/x/xParEmitter.h"

#include "zGlobals.h"

extern zGlobals globals;

struct zParEmitter : xParEmitter
{
};

extern unsigned int xStrHash(const char* str);

zParEmitter* zParEmitterFind(unsigned int asset_id);
zParEmitter* zParEmitterFind(char* asset_name);

#endif