#include "zVar.h"

#include <types.h>
#include <stdio.h>

#include "../Core/x/xString.h"
#include "../Core/x/xFont.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xsavegame.h"

#include "zGlobals.h"
#include "zUI.h"

extern var_type vars[39];
/*
vars = {
    {"ActivePad", 9, &var_text_ActivePad},
    {"BadCard", 7, &var_text_BadCard},
    ...
}

Full `vars` Array Contents
Notes:
* Looking up the address in the callback column will yield the first
  instruction of a call in zVar.s, that's the function in question.
* This means the function signature of the callbacks is `int8* Callback();`.

NameStr  | NameLen  | Callback
------------------------------
8025FDEF | 00000009 | "ActivePad" -> var_text_ActivePad__Fv
8025FDF9 | 00000007 | "BadCard" -> var_text_BadCard__Fv
8025FE01 | 00000010 | 800BD26C -> TODO: Translate these if you need them
8025FE12 | 0000000D | 800BD2AC
8025FE20 | 0000000F | 800BD2EC
8025FE30 | 0000000B | 800BD380
8025FE3C | 0000000B | 800BD3B0
8025FE48 | 00000017 | 800BD3E0
8025FE60 | 00000015 | 800BD428
8025FE76 | 0000000C | 800BD470
8025FE83 | 0000000B | 800BD4CC
8025FE8F | 00000009 | 800BD7B8
8025FE99 | 00000009 | 800BD7E8
8025FEA3 | 00000009 | 800BD818
8025FEAD | 00000009 | 800BD848
8025FEB7 | 00000009 | 800BD878
8025FEC1 | 00000009 | 800BD8A8
8025FECB | 00000009 | 800BD8D8
8025FED5 | 00000009 | 800BD908
8025FEDF | 0000000C | 800BD938
8025FEEC | 0000000E | 800BD968
8025FEFB | 00000006 | 800BDE68
8025FF02 | 0000000D | 800BD9B4
8025FF10 | 0000000D | 800BD9F4
8025FF1E | 0000000E | 800BDA34
8025FF2D | 0000000E | 800BDA80
8025FF3C | 0000000B | 800BDAC8
8025FF48 | 0000000A | 800BDAE0
8025FF53 | 0000000E | 800BDAF8
8025FF62 | 0000000C | 800BDB74
8025FF6F | 0000000A | 800BDB98
8025FF7A | 0000000E | 800BDBE0
8025FF89 | 0000000D | 800BDC74
8025FF97 | 00000010 | 800BDCBC
8025FFA8 | 0000000E | 800BDD04
8025FFB7 | 00000014 | 800BDD48
8025FFCC | 0000000B | 800BDDDC
8025FFCC | 0000000B | 800BDDDC
8025FFD8 | 0000000E | 800BDE20
8025FFE7 | 00000003 | 800BDF80
*/

var_type* find_var(const substr& str);

// func_800BD1B0
// TODO: Why is the format "%d,%d,%d" even though only one int is being passed?
// Maybe this is a copy-paste error in the original code that worked anyways?
extern const int8 zVar_fmt_number[]; // "%d,%d,%d"
int8* var_text_ActivePad()
{
    extern int8 zVar_printf_buffer1[];
    sprintf(zVar_printf_buffer1, zVar_fmt_number, globals.currentActivePad + 1);
    return zVar_printf_buffer1;
}

// func_800BD1FC
#pragma GLOBAL_ASM("asm/Game/zVar.s", "var_text_BadCard__Fv")

// func_800BD26C
int8* var_text_BadCardAvailable()
{
    extern int8 zVar_printf_buffer3[];
    sprintf(zVar_printf_buffer3, zVar_fmt_number, bad_card_available);
    return zVar_printf_buffer3;
}

// func_800BD2AC
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_BadCardNeeded__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD2EC
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_CorruptFileName__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD380
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_CurrentArea__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD3B0
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_CurrentDate__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD3E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zVar.s",                                                                             \
    "var_text_CurrentLevelCollectable__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD428
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_CurrentLevelPatsSocks__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD470
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_CurrentScene__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD4CC
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_CurrentTime__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD4FC
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "zVarGameSlotInfo__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_FiPcUl")

// func_800BD7B8
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot0__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD7E8
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot1__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD818
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot2__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD848
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot3__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD878
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot4__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD8A8
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot5__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD8D8
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot6__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD908
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_GameSlot7__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD938
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_MCAccessType__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD968
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_MCAutoSaveCard__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD9B4
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_MCPS2MaxSpace__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BD9F4
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_MCPS2MinSpace__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDA34
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_MCSelectedCard__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDA80
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_MCSelectedGame__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDAC8
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_PlayerHeShe__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDAE0
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_PlayerName__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDAF8
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_PlayerPosition__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDB74
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_SelectedArea__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDB98
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_ShinyCount__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDBE0
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_ShinyCountText__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDC74
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_SoundFXVolume__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDCBC
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_SoundMusicVolume__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDD04
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_SpaceAvailable__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDD48
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_SpaceAvailableString__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDDDC
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_SpaceNeeded__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDE20
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_TotalPatsSocks__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDE68
#pragma GLOBAL_ASM("asm/Game/zVar.s",                                                              \
                   "var_text_MCName__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_Fv")

// func_800BDEF8
var_type* find_var(const substr& str)
{
    uint32 start = 0;
    uint32 end = 0x27;
    while (start != end)
    {
        int32 c = (start + end) / 2;
        var_type* t = &vars[c];
        int i = icompare(str, t->name);
        if (i < 0)
        {
            end = c;
        }
        else if (i > 0)
        {
            start = c + 1;
        }
        else
        {
            return t;
        }
    }

    return NULL;
}

// func_800BDF80
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zVar.s",                                                                             \
    "parse_tag_var__18_esc__2_unnamed_esc__2_zVar_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800BE020
void var_init()
{
    extern xtextbox::tag_type var_tag[];
    xtextbox::register_tags(var_tag, 1);
}

// func_800BE04C
int8* var_text(const substr& str)
{
    var_type* entry = find_var(str);
    if (entry == NULL)
        return NULL;

    return entry->get_text();
}

// func_800BE088
void zVarInit(zVarEntry* table)
{
    for (int32 i = 0; i < 18; ++i)
    {
        table[i].varNameID = xStrHash(table[i].varName);
    }
}

// func_800BE0D8
void zVarNewGame()
{
}

// func_800BE0DC
uint32 zVarEntryCB_SndMode(void* arg)
{
    return gSnd.stereo;
}

#if 1
// func_800BE0EC
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_SndMusicVol__FPv")

// func_800BE128
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_SndFXVol__FPv")
#else
// Can't get the fp register assignment right for these regardless of what
// order I put the three expressions in.
extern float64 volumeMod1;
extern float64 volumeMod2;

uint32 zVarEntryCB_SndMusicVol(void* arg)
{
    return volumeMod2 + gSnd.categoryVolFader[2] * volumeMod1;
}

uint32 zVarEntryCB_SndFXVol(void* arg)
{
    return volumeMod2 + gSnd.categoryVolFader[0] * volumeMod1;
}
#endif

// func_800BE164
#if 1
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_MCAvailable__FPv")
#else
// The branching in this function is totally stupid, no idea how to untangle
// what they originally wrote here because the code makes no sense. I think
// that it might be trying to return the number of save games which aren't
// empty, but is had a bug where one of the calls is xSGGameIsEmpty(NULL, 0)
// instead of xSGGameIsEmpty(NULL, 2) thanks to a copy-paste error.
uint32 zVarEntryCB_MCAvailable(void* arg)
{
    if (xSGGameIsEmpty(NULL, 0) == 1)
    {
        if (xSGGameIsEmpty(NULL, 1) == 1)
        {
            return 0;
        }
        else if (xSGGameIsEmpty(NULL, 1) == 0)
        {
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if (xSGGameIsEmpty(NULL, 0))
    {
        return 0;
    }
    else if (xSGGameIsEmpty(NULL, 1))
    {
        return 1;
    }
    else if (xSGGameIsEmpty(NULL, 1))
    {
        return 0;
    }
    else
    {
        return 3;
    }
}
#endif

// func_800BE21C
uint32 zVarEntryCB_VibrationOn(void* arg)
{
    // I'm pretty sure they actually and'd with a bit mask here, I couldn't find
    // another way (such as casting to bool) to get the right instructions.
    return globals.option_vibration & 0x1;
}

// func_800BE230
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_CurrentSceneLetter__FPv")

// func_800BE2AC
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_CurrentRoom__FPv")

// func_800BE348
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_CurrentLevelPickup__FPv")

// func_800BE358
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_CurrentLevelPSocks__FPv")

// func_800BE368
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_TotalPSocks__FPv")

// func_800BE378
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_Shinies__FPv")

// func_800BE388
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_Spatulas__FPv")

// func_800BE398
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_Date__FPv")

// func_800BE3CC
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_Hour__FPv")

// func_800BE3EC
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_Minute__FPv")

// func_800BE40C
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_CounterValue__FPv")

// func_800BE414
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_IsEnabled__FPv")

// func_800BE444
#pragma GLOBAL_ASM("asm/Game/zVar.s", "zVarEntryCB_IsVisible__FPv")
