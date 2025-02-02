#include "zEntSimpleObj.h"

#include <types.h>

void zEntSimpleObj_Move(xEnt*, xScene*, F32, xEntFrame*)
{
}

void zEntSimpleObj_Setup(zEntSimpleObj *arg0) 
{
    zEntSetup((zEnt *) arg0);
}

void zEntSimpleObj_Save(zEntSimpleObj *arg0, xSerial *arg1) 
{
    zEntSave((zEnt *) arg0, arg1);
}

void zEntSimpleObj_Load(zEntSimpleObj *arg0, xSerial *arg1) 
{
    zEntLoad((zEnt *) arg0, arg1);
}
