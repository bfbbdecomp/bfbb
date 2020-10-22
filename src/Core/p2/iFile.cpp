#include "iFile.h"

#include <types.h>

// iFileInit()
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileInit__Fv")

// iFileExit()
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileExit__Fv")

// iFileLoad(char*,unsigned int*,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileLoad__FPcPUiPUi")

// iFileOpen(const char*,int,tag_xFile*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileOpen__FPCciP9tag_xFile")

// iFileSeek(tag_xFile*,int,int)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileSeek__FP9tag_xFileii")

// iFileRead(tag_xFile*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileRead__FP9tag_xFilePvUi")

// iFileReadAsync(tag_xFile*,void*,unsigned int,void (*)(tag_xFile*),int)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileReadAsync__FP9tag_xFilePvUiPFP9tag_xFile_vi")

// iFileReadAsyncStatus(int,int*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileReadAsyncStatus__FiPi")

// iFileClose(tag_xFile*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileClose__FP9tag_xFile")

// iFileGetSize(tag_xFile*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileGetSize__FP9tag_xFile")

// iFileReadStop()
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileReadStop__Fv")

// iFileFullPath(const char*,char*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileFullPath__FPCcPc")

// iFileSetPath(char*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileSetPath__FPc")

// iFileFind(const char*,tag_xFile*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileFind__FPCcP9tag_xFile")

// iFileGetInfo(tag_xFile*,unsigned int*,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/p2/iFile.s", "iFileGetInfo__FP9tag_xFilePUiPUi")
