#ifndef ZUIFONT_H
#define ZUIFONT_H

#include "zUI.h"

struct zUIFontAsset : zUIAsset
{
    U16 uiFontFlags;
    U8 mode;
    U8 fontID;
    U32 textAssetID;
    U8 bcolor[4];
    U8 color[4];
    U16 inset[4];
    U16 space[2];
    U16 cdim[2];
    U32 max_height;
};

struct zUIFont : _zUI
{
    zUIFontAsset* fasset;
    U16 uiFontFlags;
    U16 uiFontHackFlags;
    U32 text_id;
    F32 yscroll;
    U32 text_index;
    char* text;
};

#define ZUIFONT_MODE_1 1
#define ZUIFONT_MODE_2 2
#define ZUIFONT_MODE_3 3
#define ZUIFONT_MODE_4 4
#define ZUIFONT_MODE_5 5
#define ZUIFONT_MODE_6 6

void zUIFontInit();
void zUIFont_Init(void* ent, void* asset);
void zUIFont_Init(zUIFont* ent, xEntAsset* asset);
void zUIFont_Save(zUIFont* ent, xSerial* s);
void zUIFont_Load(zUIFont* ent, xSerial* s);
void zUIFont_Reset(zUIFont* ent);
void zUIFont_PreUpdate(zUIFont* ent, xScene* sc, F32 dt);
void zUIFont_Update(zUIFont* ent, xScene*, F32);
S32 zUIFontEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                     xBase* toParamWidget);
void zUIFont_Render(xEnt* e);

#endif
