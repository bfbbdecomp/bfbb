#ifndef ZANIMLIST_H
#define ZANIMLIST_H

#include <types.h>

struct zAnimListAsset
{
    U32 ids[10];
};

U32 AlwaysConditional(xAnimTransition*, xAnimSingle*, void*);
void zAnimListInit();
void zAnimListExit();
xAnimTable* zAnimListGetTable(U32 id);
S32 zAnimListGetNumUsed(U32 id);

#endif
