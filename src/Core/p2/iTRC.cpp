#include "iTRC.h"

#include <types.h>

// ROMFont::Init()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "Init__7ROMFontFv")

// ROMFont::InitDisplay(_GXRenderModeObj*)
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "InitDisplay__7ROMFontFP16_GXRenderModeObj")

// ROMFont::InitGX()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "InitGX__7ROMFontFv")

// ROMFont::InitVI()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "InitVI__7ROMFontFv")

// ROMFont::RenderBegin()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "RenderBegin__7ROMFontFv")

// ROMFont::RenderEnd()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "RenderEnd__7ROMFontFv")

// ROMFont::SwapBuffers()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SwapBuffers__7ROMFontFv")

// ROMFont::DrawCell(int,int,int,int)
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "DrawCell__7ROMFontFiiii")

#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "GXEnd")

#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "GXTexCoord2s16")

#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "GXPosition3s16")

// ROMFont::LoadSheet(void*)
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "LoadSheet__7ROMFontFPv")

#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "GXSetTexCoordGen")

// ROMFont::DrawString(int,int,char*)
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "DrawString__7ROMFontFiiPc")

// ROMFont::GetWidth(char*)
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "GetWidth__7ROMFontFPc")

// ROMFont::DrawTextBox(int,int,int,int,char*)
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "DrawTextBox__7ROMFontFiiiiPc")

// ResetButton::EnableReset()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "EnableReset__11ResetButtonFv")

// ResetButton::DisableReset()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "DisableReset__11ResetButtonFv")

// ResetButton::SetSndKillFunction(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetSndKillFunction__11ResetButtonFPFv_v")

// ResetButton::CheckResetButton()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "CheckResetButton__11ResetButtonFv")

// iTRCDisk::Init()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "Init__8iTRCDiskFv")

// iTRCDisk::SetErrorMessage(const char*)
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetErrorMessage__8iTRCDiskFPCc")

// iTRCDisk::ResetMessage()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "ResetMessage__8iTRCDiskFv")

// iTRCDisk::SetPadStopRumblingFunction(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetPadStopRumblingFunction__8iTRCDiskFPFv_v")

// iTRCDisk::SetSndSuspendFunction(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetSndSuspendFunction__8iTRCDiskFPFv_v")

// iTRCDisk::SetSndResumeFunction(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetSndResumeFunction__8iTRCDiskFPFv_v")

// iTRCDisk::SetSndKillFunction(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetSndKillFunction__8iTRCDiskFPFv_v")

// iTRCDisk::SetMovieSuspendFunction(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetMovieSuspendFunction__8iTRCDiskFPFv_v")

// iTRCDisk::SetMovieResumeFunction(void (*)(void))
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetMovieResumeFunction__8iTRCDiskFPFv_v")

// iTRCDisk::IsDiskIDed()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "IsDiskIDed__8iTRCDiskFv")

// iTRCDisk::DisplayErrorMessage()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "DisplayErrorMessage__8iTRCDiskFv")

// iTRCDisk::SetDVDState()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "SetDVDState__8iTRCDiskFv")

// iTRCDisk::CheckDVDAndResetState()
#pragma GLOBAL_ASM("asm/Core/p2/iTRC.s", "CheckDVDAndResetState__8iTRCDiskFv")
