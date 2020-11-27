#include "zCombo.h"

#include <types.h>

#include "../Core/x/xBase.h"
#include "../Core/x/xHudText.h"
#include "../Core/x/xstransvc.h"
#include "zGlobals.h"
#include "zTextBox.h"

struct zComboReward
{
	int32 reward;
	int8* textName;
	uint32 rewardList[10];
	uint32 rewardNum;
	xTextAsset* textAsset;
};

// TODO: Something is wrong with this struct
struct widget_chunk : xBase
{
    xhud::text_widget w;
};

extern widget_chunk* comboHUD;

extern zComboReward comboReward[16];

extern int32 comboCounter;
extern int32 comboLastCounter;
extern int32 comboPending;

extern float comboMaxTime;
extern float lbl_803CFBE4;
extern float comboTimer;

extern float32 someComboFloatConstant;
extern int8 zCombo_Strings[];

extern xBase* sHideText[5];
extern xBase* sHideUIF[1];

// func_8019590C
void fillCombo(zComboReward* reward)
{
    int32 rewardLeft = reward->reward;
    int32 j = 0;

    while (rewardLeft > 0)
    {
        if (rewardLeft >= globals.player.g.ShinyValuePurple)
        {
            reward->rewardList[j++] = 0;
            rewardLeft -= globals.player.g.ShinyValuePurple;
        }
        else if (rewardLeft >= globals.player.g.ShinyValueBlue)
        {
            reward->rewardList[j++] = 1;
            rewardLeft -= globals.player.g.ShinyValueBlue;
        }
        else if (rewardLeft >= globals.player.g.ShinyValueGreen)
        {
            reward->rewardList[j++] = 2;
            rewardLeft -= globals.player.g.ShinyValueGreen;
        }
        else if (rewardLeft >= globals.player.g.ShinyValueYellow)
        {
            reward->rewardList[j++] = 3;
            rewardLeft -= globals.player.g.ShinyValueYellow;
        }
        else
        {
            reward->rewardList[j++] = 4;
            rewardLeft -= globals.player.g.ShinyValueRed;
        }
    }

    reward->rewardNum = j;
}

// func_80195A00
#if 1
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "zCombo_Setup__Fv")
#else
// Can't get the floating point instructions to go in the right order
// the comboTimer = someComboFloatConstant always gets lifted to the
// start regardless of what order the code is in, despite it remaining
// after the other assignments in the original assembly.
void zCombo_Setup()
{
    comboCounter = 0;
    comboLastCounter = 0;
    comboPending = 0;
    comboTimer = someComboFloatConstant;

    // "HUD_TEXT_COMBOMESSAGE"
    uint32 id = xStrHash(zCombo_Strings + 0xc1);
    comboHUD = (widget_chunk*)zSceneFindObject(id);

    // Junk to make the size match temporarily, REMOVE THIS
    comboCounter = 6;

    if (comboHUD != NULL)
    {
        comboHUD->w.enable();
        comboHUD->w.hide();
    }

    for (int i = 0; i < 16; ++i)
    {
        id = xStrHash(comboReward[i].textName);
        comboReward[i].textAsset = (xTextAsset*)xSTFindAsset(id, 0);
    }

    comboReward[0].reward = globals.player.g.ShinyValueCombo0;
    comboReward[1].reward = globals.player.g.ShinyValueCombo1;
    comboReward[2].reward = globals.player.g.ShinyValueCombo2;
    comboReward[3].reward = globals.player.g.ShinyValueCombo3;
    comboReward[4].reward = globals.player.g.ShinyValueCombo4;
    comboReward[5].reward = globals.player.g.ShinyValueCombo5;
    comboReward[6].reward = globals.player.g.ShinyValueCombo6;
    comboReward[6].reward = globals.player.g.ShinyValueCombo6;
    comboReward[8].reward = globals.player.g.ShinyValueCombo8;
    comboReward[9].reward = globals.player.g.ShinyValueCombo9;
    comboReward[10].reward = globals.player.g.ShinyValueCombo10;
    comboReward[11].reward = globals.player.g.ShinyValueCombo11;
    comboReward[12].reward = globals.player.g.ShinyValueCombo12;
    comboReward[13].reward = globals.player.g.ShinyValueCombo13;
    comboReward[14].reward = globals.player.g.ShinyValueCombo14;
    comboReward[15].reward = globals.player.g.ShinyValueCombo15;
    comboMaxTime = globals.player.g.ComboTimer;

    for (int i = 0; i < 16; ++i)
    {
        fillCombo(&comboReward[i]);
    }

    // "TEXTBOX_BUNGEE_HELP"
    id = xStrHash(zCombo_Strings + 0xd7);
    sHideText[0] = zSceneFindObject(id);

    // "DIALOG_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0xeb);
    sHideText[1] = zSceneFindObject(id);

    // "MESSAGE_02_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0xfa);
    sHideText[2] = zSceneFindObject(id);

    // "PROMPT_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0x10d);
    sHideText[3] = zSceneFindObject(id);

    // "QUIT_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0x11c);
    sHideText[4] = zSceneFindObject(id);

    // "MNU4 NPCTALK"
    id = xStrHash(zCombo_Strings + 0x129);
    sHideUIF[0] = zSceneFindObject(id);
}
#endif

// func_80195C10
#if 1
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "zCombo_Add__Fi")
#else
/* Can't figure out how to get the assignments to happen in the right order */
void zCombo_Add(int32 points)
{
    if (comboTimer < lbl_803CFBE4) {
        comboTimer = comboMaxTime;
        comboPending = points - 1;
    } else {
        comboTimer = comboMaxTime;
        comboCounter += points;
        if (comboPending != 0) {
            comboCounter += comboPending;
            comboPending = 0;
        }
    }
}
#endif

// func_80195C6C
void zComboHideMessage(xhud::widget& w, xhud::motive& motive)
{
    w.hide();
}

// func_80195C8C
void zCombo_HideImmediately()
{
    if (comboHUD != NULL) {
        // This is probably wrong, but generates the right code
        // Something is likely not correct with widget_chunk
        comboHUD->w.text[4] = '\0';
    }
}

// func_80195CA4
#pragma GLOBAL_ASM("asm/Game/zCombo.s", "zCombo_Update__Ff")

// func_80195FDC
bool ztextbox::visible()
{
    return this->flag.visible;
}