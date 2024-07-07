#ifndef ZNPCGLYPH_H
#define ZNPCGLYPH_H

#include "xModel.h"

enum en_npcglyph
{
    NPC_GLYPH_UNKNOWN,
    NPC_GLYPH_SHINYONE,
    NPC_GLYPH_SHINYFIVE,
    NPC_GLYPH_SHINYTEN,
    NPC_GLYPH_SHINYFIFTY,
    NPC_GLYPH_SHINYHUNDRED,
    NPC_GLYPH_TALK,
    NPC_GLYPH_TALKOTHER,
    NPC_GLYPH_FRIEND,
    NPC_GLYPH_DAZED,
    NPC_GLYPH_NOMORE,
    NPC_GLYPH_FORCE = 0x7fffffff
};

struct NPCGlyph
{
    en_npcglyph typ_glyph;
    S32 flg_glyph;
    xModelInstance* mdl_glyph;
    xVec3 pos_glyph;
    xVec3 vel_glyph;
    xMat3x3 rot_glyph;
    xVec3 scl_glyph;
    F32 tmr_glyph;

    void Timestep(F32 dt);
    void RotAddDelta(xMat3x3* mat_rot);
    void VelSet_Shiny();
    void RotSet(xVec3* ang, S32 doautospin);
    void ScaleSet(xVec3* scale);
    void PosSet(xVec3* pos);
    void Discard();
    void Enable(S32 ison);
    void Reset();
};

void zNPCCommon_Glyphs_RenderAll(S32 doOpaqueStuff);
void zNPCGlyph_Startup();
void zNPCGlyph_Shutdown();
void zNPCGlyph_SceneReset();
void zNPCGlyph_ScenePostInit();

#endif
