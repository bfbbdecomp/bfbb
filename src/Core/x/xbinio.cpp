#include "xbinio.h"

#include <types.h>

// func_80009564
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "xBinioLoadCreate__FPCc")

// func_80009778
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "LoadDestroy__FP15st_FILELOADINFO")

// func_800097E4
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "SkipBytes__FP15st_FILELOADINFOi")

// func_800098A0
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadSeek__FP15st_FILELOADINFOi")

// func_80009944
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "SetBuffer__FP15st_FILELOADINFOPci")

// func_8000996C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "DiscardBuffer__FP15st_FILELOADINFO")

// func_80009994
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadRaw__FP15st_FILELOADINFOPvii")

// func_80009A54
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadBytes__FP15st_FILELOADINFOPci")

// func_80009A7C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadMShorts__FP15st_FILELOADINFOPsi")

// func_80009AA4
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadMLongs__FP15st_FILELOADINFOPii")

// func_80009ACC
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadMFloats__FP15st_FILELOADINFOPfi")

// func_80009AF4
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadMDoubles__FP15st_FILELOADINFOPdi")

// func_80009B1C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadIShorts__FP15st_FILELOADINFOPsi")

// func_80009B68
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadILongs__FP15st_FILELOADINFOPii")

// func_80009BB4
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadIFloats__FP15st_FILELOADINFOPfi")

// func_80009C00
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadIDoubles__FP15st_FILELOADINFOPdi")

// func_80009C4C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "AsyncMRead__FP15st_FILELOADINFOiPcii")

// func_80009C70
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "AsyncIRead__FP15st_FILELOADINFOiPcii")

// func_80009C94
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "AsyncReadStatus__FP15st_FILELOADINFO")

// func_80009CB4
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "Swap2__FPci")

// func_80009D78
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "Swap4__FPci")

// func_80009E4C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "Swap8__FPci")

// func_80009F40
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_open__FPCcPCcUiiPv")

// func_8000A034
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_close__FP9tag_xFilePv")

// func_8000A07C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_read__FPviiP9tag_xFilePv")

// func_8000A254
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_seek__FP9tag_xFileiiPv")

// func_8000A29C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_getLength__FP9tag_xFilePv")

// func_8000A2BC
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_startSector__FPCc")

// func_8000A344
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_cb_GCP2_readasync__FP9tag_xFile")

// func_8000A348
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_AsyncRead__FP15st_FILELOADINFOiPviii")

// func_8000A42C
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_AsyncReadStatus__FP15st_FILELOADINFO")

// func_8000A500
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "xFileSetUserData__FP9tag_xFilePv")

// func_8000A508
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "xFileReadAsyncStatus__FiPi")
