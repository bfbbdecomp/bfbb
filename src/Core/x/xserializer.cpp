#include "xserializer.h"

#include <types.h>

// xSerialStartup(int,st_SERIAL_PERCID_SIZE*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialStartup__FiP21st_SERIAL_PERCID_SIZE")

// xSerialShutdown()
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialShutdown__Fv")

// xSerialTraverse(int (*)(unsigned int, xSerial*))
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialTraverse__FPFUiP7xSerial_i")

// xSerial::xSerial()
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "__ct__7xSerialFv")

// xSerial::~xSerial()
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "__dt__7xSerialFv")

// xSerial::operator delete(void*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "__dl__7xSerialFPv")

// xSerial::setClient(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "setClient__7xSerialFUi")

// xSerial::Write(char*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFPcii")

// xSerial::Write_b1(int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write_b1__7xSerialFi")

// xSerial::Write_b7(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write_b7__7xSerialFUi")

// xSerial::Write(unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFUc")

// xSerial::Write(short)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFs")

// xSerial::Write(int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFi")

// xSerial::Write(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFUi")

// xSerial::Write(float)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Write__7xSerialFf")

// xSerial::Read(char*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPcii")

// xSerial::Read_b1(int*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read_b1__7xSerialFPi")

// xSerial::Read_b7(unsigned int*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read_b7__7xSerialFPUi")

// xSerial::Read(unsigned char*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPUc")

// xSerial::Read(short*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPs")

// xSerial::Read(int*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPi")

// xSerial::Read(unsigned int*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPUi")

// xSerial::Read(float*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "Read__7xSerialFPf")

// xSerial::wrbit(int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "wrbit__7xSerialFi")

// xSerial::rdbit()
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "rdbit__7xSerialFv")

// xSerial::prepare(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "prepare__7xSerialFUi")

// xSerialWipeMainBuffer()
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerialWipeMainBuffer__Fv")

// xSER_init_tables()
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_init_tables__Fv")

// xSER_init_buffers(int,st_SERIAL_PERCID_SIZE*)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSER_init_buffers__FiP21st_SERIAL_PERCID_SIZE")

// XSER_get_client(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "XSER_get_client__FUi")

// xSerial_svgame_register(st_XSAVEGAME_DATA*,en_SAVEGAME_MODE)
#pragma GLOBAL_ASM("asm/Core/x/xserializer.s", "xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE")
