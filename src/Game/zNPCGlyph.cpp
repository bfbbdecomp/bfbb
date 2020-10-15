#include "zNPCGlyph.h"

#include <types.h>

// zNPCGlyph_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_Startup__Fv")

// zNPCGlyph_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_Shutdown__Fv")

// zNPCGlyph_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_ScenePrepare__Fv")

// zNPCGlyph_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_SceneFinish__Fv")

// zNPCGlyph_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_SceneReset__Fv")

// zNPCGlyph_ScenePostInit()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_ScenePostInit__Fv")

// zNPCGlyph_Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_Timestep__Ff")

// zNPCGlyph_TypeIsOpaque(en_npcglyph)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_TypeIsOpaque__F11en_npcglyph")

// zNPCGlyph_TypeNeedsLightKit(en_npcglyph)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_TypeNeedsLightKit__F11en_npcglyph")

// zNPCGlyph_TypeToList(en_npcglyph,NPCGlyph**)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCGlyph_TypeToList__F11en_npcglyphPP8NPCGlyph")

// zNPCCommon_Glyphs_RenderAll(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "zNPCCommon_Glyphs_RenderAll__Fi")

// GLYF_Acquire(en_npcglyph)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "GLYF_Acquire__F11en_npcglyph")

// NPCGlyph::Reset()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Reset__8NPCGlyphFv")

// NPCGlyph::Init(en_npcglyph,RpAtomic*)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Init__8NPCGlyphF11en_npcglyphP8RpAtomic")

// NPCGlyph::Kill()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Kill__8NPCGlyphFv")

// NPCGlyph::Render()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Render__8NPCGlyphFv")

// NPCGlyph::Enable(int)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Enable__8NPCGlyphFi")

// NPCGlyph::Discard()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Discard__8NPCGlyphFv")

// NPCGlyph::PosSet(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "PosSet__8NPCGlyphFP5xVec3")

// NPCGlyph::VelSet(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "VelSet__8NPCGlyphFP5xVec3")

// NPCGlyph::ScaleSet(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "ScaleSet__8NPCGlyphFP5xVec3")

// NPCGlyph::RotSet(xVec3*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "RotSet__8NPCGlyphFP5xVec3i")

// NPCGlyph::RotSet(xMat3x3*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "RotSet__8NPCGlyphFP7xMat3x3i")

// NPCGlyph::VelSet_Shiny()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "VelSet_Shiny__8NPCGlyphFv")

// NPCGlyph::RotAddDelta(xMat3x3*)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "RotAddDelta__8NPCGlyphFP7xMat3x3")

// NPCGlyph::Timestep(float)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "Timestep__8NPCGlyphFf")

// NPCGlyph::NPCGlyph()
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "__ct__8NPCGlyphFv")

// NPCGlyph::NPCGlyph(en_npcglyph)
#pragma GLOBAL_ASM("asm/Game/zNPCGlyph.s", "__ct__8NPCGlyphF11en_npcglyph")
