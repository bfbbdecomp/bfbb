#include "xMath3.h"
#include "xVec3.h"
#include "zEntHangable.h"

#include <types.h>

void zEntHangable_Save(zEntHangable* ent, xSerial* s)
{
    zEntSave(ent, s);
}

void zEntHangable_Load(zEntHangable* ent, xSerial* s)
{
    zEntLoad(ent, s);
}
