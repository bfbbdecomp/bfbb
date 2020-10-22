#include "zEntSimpleObj.h"

#include <types.h>

// zEntSimpleObj_MgrInit(zEntSimpleObj**,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_MgrInit__FPP13zEntSimpleObjUi")

// RwSphere::operator =(const RwSphere&)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "__as__8RwSphereFRC8RwSphere")

// zEntSimpleObj_MgrUpdateRender(RpWorld*,float)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_MgrUpdateRender__FP7RpWorldf")

// zEntSimpleObj_MgrCustomUpdate(zScene*,float)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_MgrCustomUpdate__FP6zScenef")

// zEntSimpleObj_MgrCustomRender()
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_MgrCustomRender__Fv")

// zEntSimpleObj_Render(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_Render__FP4xEnt")

// zEntSimpleObj_Init(zEntSimpleObj*,xEntAsset*,bool)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_Init__FP13zEntSimpleObjP9xEntAssetb")

// zEntSimpleObj_Setup(zEntSimpleObj*)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_Setup__FP13zEntSimpleObj")

// zEntSimpleObj_Save(zEntSimpleObj*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_Save__FP13zEntSimpleObjP7xSerial")

// zEntSimpleObj_Load(zEntSimpleObj*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_Load__FP13zEntSimpleObjP7xSerial")

// zEntSimpleObj_Reset(zEntSimpleObj*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zEntSimpleObj.s", "zEntSimpleObj_Reset__FP13zEntSimpleObjP6xScene")
