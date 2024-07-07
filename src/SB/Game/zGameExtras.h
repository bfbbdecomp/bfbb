#ifndef ZGAMEEXTRAS_H
#define ZGAMEEXTRAS_H

#include "xserializer.h"

struct EGGItem;

struct EGGMisc
{
    S32 other;
};

struct EGGData
{
    union
    {
        S32 placeholder;
        EGGMisc misc;
    };
};

struct EGGItemFuncs
{
    void (*fun_update)(F32, EGGItem*);
    void (*fun_init)(EGGItem*);
    void (*fun_reset)(EGGItem*);
    void (*fun_done)(EGGItem*);
};

struct EGGItem
{
    S32 (*fun_check)(EGGItem*);
    EGGItemFuncs* funcs;
    S32 enabled;
    EGGData eggdata;
};

struct GECheat
{
    U32* key_code;
    void (*fun_cheat)();
    S32 flg_keep;
    S32 flg_mode;
};

S32 zGameExtras_ExtrasFlags();
void zGameExtras_MoDay(S32* month, S32* day);
void zGameExtras_SceneReset();
void zGameExtras_SceneInit();
void zGameExtras_SceneExit();
void zGameExtras_SceneUpdate(F32 dt);
S32 zGameExtras_CheatFlags();
void zGameExtras_NewGameReset();
void zGameExtras_Save(xSerial* xser);
void zGameExtras_Load(xSerial* xser);
S32 TestCheat(U32* cheat);
S32 EGG_check_ExtrasFlags(EGGItem* egg);
void AddToCheatPressed(U32 param_1);
void GEC_CheatFlagAdd(S32 bit);
void GEC_CheatFlagToggle(S32 bit);
void GEC_dfltSound();
void GEC_cb_AddShiny();
void GEC_cb_AddSpatulas();
void GEC_cb_BubbleBowl();
void GEC_cb_CruiseBubble();
void GEC_cb_MonsterGallery();
void GEC_cb_UnlockArtTheatre();
void GEC_cb_ChaChing();
void GEC_cb_RestoreHealth();
void GEC_cb_ExpertMode();
void GEC_cb_ShrapBobMode();
void GEC_cb_NoPantsMode();
void GEC_cb_CruiseControl();
void GEC_cb_SwapCCLR();
void GEC_cb_SwapCCUD();
void GEC_villSound();
void GEC_cb_BigPlank();
void GEC_cb_Medics();
void GEC_cb_DogTrix();
void GEC_cb_SmallPeep();
void GEC_cb_SmallCostars();
void GEC_cb_RichPeep();
void GEC_cb_PanHandle();
void zGame_HackGalleryInit();
U32 zGame_HackIsGallery();

template <class T> T xUtil_choose(T const* list, S32 size, F32 const* c);

#endif
