#include "zNPCGlyph.h"
#include "../Core/x/xMath3.h"

#include <types.h>

extern char* g_strz_glyphmodel[10];
extern int32 g_cnt_activeGlyphs[10];
extern float32 lbl_803CF948;


void zNPCGlyph_Startup()
{
}

void zNPCGlyph_Shutdown()
{
}








void zNPCGlyph_SceneReset()
{
}


void zNPCGlyph_ScenePostInit()
{
}




















#ifdef NON_MATCHING
// Usual float memes
void NPCGlyph::Reset()

{
    flg_glyph = 0;
    pos_glyph = g_O3;
    vel_glyph = g_O3;
    tmr_glyph = lbl_803CF948;
}
#endif
