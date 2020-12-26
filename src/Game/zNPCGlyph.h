#ifndef ZNPCGLYPH_H
#define ZNPCGLYPH_H

#include "../Core/x/xModel.h"

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
	int32 flg_glyph;
	xModelInstance* mdl_glyph;
	xVec3 pos_glyph;
	xVec3 vel_glyph;
	xMat3x3 rot_glyph;
	xVec3 scl_glyph;
	float32 tmr_glyph;

	void Timestep(float32 dt);
	void RotAddDelta(xMat3x3* mat_rot);
	void VelSet_Shiny();
	void RotSet(xVec3* ang, int32 doautospin);
	void ScaleSet(xVec3* scale);
	void PosSet(xVec3* pos);
	void Discard();
	void Enable(int32 ison);
};

#endif