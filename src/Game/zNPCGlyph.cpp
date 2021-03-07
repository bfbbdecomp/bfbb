#include "zNPCGlyph.h"
#include "../Core/x/xMath3.h"

#include <types.h>

extern char* g_strz_glyphmodel[10];
extern int32 g_cnt_activeGlyphs[10];
extern float32 lbl_803CF948;

// func_8018626C
void zNPCGlyph_Startup()
{
}

void zNPCGlyph_Shutdown()
{
}

// func_80186274
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_ScenePrepare__Fv")

// func_80186370
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_SceneFinish__Fv")

// func_80186410
void zNPCGlyph_SceneReset()
{
}

// func_80186414
void zNPCGlyph_ScenePostInit()
{
}

// func_80186418
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_Timestep__Ff")

// func_80186558
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_TypeIsOpaque__F11en_npcglyph")

// func_80186588
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_TypeNeedsLightKit__F11en_npcglyph")

// func_801865C0
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_TypeToList__F11en_npcglyphPP8NPCGlyph")

// func_80186688
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCCommon_Glyphs_RenderAll__Fi")

// func_801867E4
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "GLYF_Acquire__F11en_npcglyph")

// func_801868A0
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Reset__8NPCGlyphFv")
// Usual float memes
#else
void NPCGlyph::Reset()

{
  flg_glyph = 0;
  pos_glyph = g_O3;
  vel_glyph = g_O3;
  tmr_glyph = lbl_803CF948;
}
#endif


// func_801868F8
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Init__8NPCGlyphF11en_npcglyphP8RpAtomic")

// func_801869AC
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Kill__8NPCGlyphFv")

// func_80186A18
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Render__8NPCGlyphFv")

// func_80186A88
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Enable__8NPCGlyphFi")

// func_80186AB0
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Discard__8NPCGlyphFv")

// func_80186B00
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "PosSet__8NPCGlyphFP5xVec3")

// func_80186B68
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "VelSet__8NPCGlyphFP5xVec3")

// func_80186C04
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "ScaleSet__8NPCGlyphFP5xVec3")

// func_80186C84
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "RotSet__8NPCGlyphFP5xVec3i")

// func_80186D30
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "RotSet__8NPCGlyphFP7xMat3x3i")

// func_80186D90
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "VelSet_Shiny__8NPCGlyphFv")

// func_80186ED0
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "RotAddDelta__8NPCGlyphFP7xMat3x3")

// func_80186F30
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Timestep__8NPCGlyphFf")

// func_8018710C
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "__sinit_zNPCGlyph_cpp")

// func_80187624
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "__ct__8NPCGlyphFv")

// func_80187628
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "__ct__8NPCGlyphF11en_npcglyph")
