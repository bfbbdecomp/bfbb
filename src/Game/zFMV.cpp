#include "zFMV.h"

#include <types.h>

// zFMVPlay(char*,unsigned int,float,bool,bool)
#pragma GLOBAL_ASM("asm/Game/zFMV.s", "zFMVPlay__FPcUifbb")

// zFMVFileGetName(eFMVFile)
#pragma GLOBAL_ASM("asm/Game/zFMV.s", "zFMVFileGetName__F8eFMVFile")
