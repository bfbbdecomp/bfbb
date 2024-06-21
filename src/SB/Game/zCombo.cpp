#include "zCombo.h"

#include <types.h>

#include "xBase.h"
#include "xHudText.h"
#include "xstransvc.h"
#include "xTextAsset.h"
#include "zGlobals.h"
#include "zTextBox.h"

extern const int8 zCombo_Strings[];
extern const float32 zCombo_float_zero;
extern const float32 zCombo_float_minusone;

struct zComboReward
{
    int32 reward;
    int8* textName;
    uint32 rewardList[10];
    uint32 rewardNum;
    xTextAsset* textAsset;
};

// TODO: Something is wrong with this struct. It looks like the debug symbols
// for the xhud header files may be somewhat wrong in some places.
struct widget_chunk : xBase
{
    xhud::text_widget w;
};

extern widget_chunk* comboHUD;

extern zComboReward comboReward[16];

extern int32 zCombo_int32_1; // probably comboPending
extern int32 zCombo_int32_2; // probably comboLastCounter
extern int32 zCombo_int32_3; // probably comboCounter

extern float32 zCombo_float32_1; // probably comboMaxTime
extern float32 zCombo_float32_3; // probably comboTimer

extern xBase* sHideText[5];
extern xBase* sHideUIF[1];


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


#if 0
// Can't get the floating point instructions to go in the right order
// the zCombo_float32_3 = zCombo_float_minusone always gets lifted to the
// start regardless of what order the code is in, despite it remaining
// after the other assignments in the original assembly.
void zCombo_Setup()
{
    zCombo_int32_3 = 0;
    zCombo_int32_2 = 0;
    zCombo_int32_1 = 0;
    zCombo_float32_3 = zCombo_float_minusone;

    // "HUD_TEXT_COMBOMESSAGE"
    uint32 id = xStrHash(zCombo_Strings + 0xc1);
    comboHUD = (widget_chunk*)zSceneFindObject(id);

    // Junk to make the size match temporarily, REMOVE THIS
    zCombo_int32_3 = 6;

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
    zCombo_float32_1 = globals.player.g.ComboTimer;

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


#if 0
/* Can't figure out how to get the assignments to happen in the right order */
void zCombo_Add(int32 points)
{
    if (zCombo_float32_3 < zCombo_float_zero)
    {
        zCombo_float32_3 = zCombo_float32_1;
        zCombo_int32_1 = points - 1;
    }
    else
    {
        zCombo_float32_3 = zCombo_float32_1;
        zCombo_int32_3 += points;
        if (zCombo_int32_1 != 0)
        {
            zCombo_int32_3 += zCombo_int32_1;
            zCombo_int32_1 = 0;
        }
    }
}
#endif


void zComboHideMessage(xhud::widget& w, xhud::motive& motive)
{
    w.hide();
}


void zCombo_HideImmediately()
{
    if (comboHUD != NULL)
    {
        comboHUD->w.text[0] = '\0';
    }
}





bool ztextbox::visible()
{
    return this->flag.visible;
}
