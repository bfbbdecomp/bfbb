#include "xbinio.h"

#include <types.h>

// xBinioLoadCreate(const char*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "xBinioLoadCreate__FPCc")

// LoadDestroy(st_FILELOADINFO*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "LoadDestroy__FP15st_FILELOADINFO")

// SetBuffer(st_FILELOADINFO*,char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "SetBuffer__FP15st_FILELOADINFOPci")

// ReadRaw(st_FILELOADINFO*,void*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "ReadRaw__FP15st_FILELOADINFOPvii")

// Swap2(char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "Swap2__FPci")

// Swap4(char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "Swap4__FPci")

// Swap8(char*,int)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "Swap8__FPci")

// BFD_open(const char*,const char*,unsigned int,int,void*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_open__FPCcPCcUiiPv")

// BFD_close(tag_xFile*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_close__FP9tag_xFilePv")

// BFD_read(void*,int,int,tag_xFile*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_read__FPviiP9tag_xFilePv")

// BFD_seek(tag_xFile*,int,int,void*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_seek__FP9tag_xFileiiPv")

// BFD_getLength(tag_xFile*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_getLength__FP9tag_xFilePv")

// BFD_startSector(const char*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_startSector__FPCc")

// BFD_AsyncRead(st_FILELOADINFO*,int,void*,int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_AsyncRead__FP15st_FILELOADINFOiPviii")

// BFD_AsyncReadStatus(st_FILELOADINFO*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "BFD_AsyncReadStatus__FP15st_FILELOADINFO")

// xFileSetUserData(tag_xFile*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "xFileSetUserData__FP9tag_xFilePv")

// xFileReadAsyncStatus(int,int*)
#pragma GLOBAL_ASM("asm/Core/x/xbinio.s", "xFileReadAsyncStatus__FiPi")
