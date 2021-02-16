#ifndef ZGAMEEXTRAS_H
#define ZGAMEEXTRAS_H

#include "../Core/x/xserializer.h"

struct EGGItem;

struct EGGMisc
{
    int32 other;
};

struct EGGData
{
    union
    {
        int32 placeholder;
        EGGMisc misc;
    };
};

struct EGGItemFuncs
{
    void (*fun_update)(float32, EGGItem*);
    void (*fun_init)(EGGItem*);
    void (*fun_reset)(EGGItem*);
    void (*fun_done)(EGGItem*);
};

struct EGGItem
{
    int32 (*fun_check)(EGGItem*);
    EGGItemFuncs* funcs;
    int32 enabled;
    EGGData eggdata;
};

int32 zGameExtras_ExtrasFlags();
void zGameExtras_MoDay(int32* month, int32* day);
void zGameExtras_SceneReset();
void zGameExtras_SceneExit();
void zGameExtras_SceneUpdate(float32 dt);
int32 zGameExtras_CheatFlags();
void zGameExtras_NewGameReset();
void zGameExtras_Save(xSerial* xser);
void zGameExtras_Load(xSerial* xser);
uint32 TestCheat(uint32* cheat);
int32 EGG_check_ExtrasFlags(EGGItem* egg);
void AddToCheatPressed(uint32 param_1);
void GEC_CheatFlagAdd(int32 bit);
void GEC_CheatFlagToggle(int32 bit);
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
uint32 zGame_HackIsGallery();

template <class T> T xUtil_choose(T const* list, int32 size, float32 const* c);

#endif