#include "xordarray.h"

#include <types.h>

// XOrdInit(st_XORDEREDARRAY*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdInit__FP16st_XORDEREDARRAYii")

// XOrdReset(st_XORDEREDARRAY*)
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdReset__FP16st_XORDEREDARRAY")

// XOrdDone(st_XORDEREDARRAY*,int)
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdDone__FP16st_XORDEREDARRAYi")

// XOrdAppend(st_XORDEREDARRAY*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdAppend__FP16st_XORDEREDARRAYPv")

// XOrdInsert(st_XORDEREDARRAY*,void*,int (*)(void*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdInsert__FP16st_XORDEREDARRAYPvPFPvPv_i")

// XOrdRemove(st_XORDEREDARRAY*,void*,int)
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdRemove__FP16st_XORDEREDARRAYPvi")

// XOrdLookup(st_XORDEREDARRAY*,const void*,int (*)(const void*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdLookup__FP16st_XORDEREDARRAYPCvPFPCvPv_i")

// XOrdSort(st_XORDEREDARRAY*,int (*)(void*, void*))
#pragma GLOBAL_ASM("asm/Core/x/xordarray.s", "XOrdSort__FP16st_XORDEREDARRAYPFPvPv_i")
