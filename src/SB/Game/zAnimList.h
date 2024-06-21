#ifndef ZANIMLIST_H
#define ZANIMLIST_H

#include <types.h>

struct zAnimListAsset
{
    uint32 ids[10];
};

uint32 AlwaysConditional(xAnimTransition*, xAnimSingle*, void*);
void zAnimListInit();
void zAnimListExit();
xAnimTable* zAnimListGetTable(uint32 id);
int32 zAnimListGetNumUsed(uint32 id);

#endif