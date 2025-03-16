#include "zCombo.h"

#include <types.h>

#include "xBase.h"
#include "xHudText.h"
#include "xstransvc.h"
#include "xTextAsset.h"
#include "zGlobals.h"
#include "zTextBox.h"
#include "zUIFont.h"

extern const char zCombo_Strings[];
extern const F32 zCombo_float_zero;
extern const F32 zCombo_float_minusone;

struct zComboReward
{
    S32 reward;
    char* textName;
    U32 rewardList[10];
    U32 rewardNum;
    xTextAsset* textAsset;
};

// TODO: Something is wrong with this struct. It looks like the debug symbols
// for the xhud header files may be somewhat wrong in some places.
struct widget_chunk : xBase
{
    xhud::text_widget w;
};

/* .bss */
static xVec3 sUnderCamPos;
static ztextbox* sHideText[5];

/* .sbss */
static widget_chunk* comboHUD;
static zUIFont* sHideUIF;
static S32 comboPending;
static S32 comboLastCounter;
static S32 comboCounter;
static F32 comboTimer;

/* .sdata */
static F32 comboMaxTime = 1.0f;
static F32 comboDisplayTime = 2.0f;

static zComboReward comboReward[16] = {
    { 0, "", {}, 0, NULL },   { 0, "", {}, 0, NULL },  { 2, "", {}, 0, NULL },
    { 3, "", {}, 0, NULL },   { 3, "", {}, 0, NULL },  { 5, "", {}, 0, NULL },
    { 10, "", {}, 0, NULL },  { 15, "", {}, 0, NULL }, { 20, "", {}, 0, NULL },
    { 25, "", {}, 0, NULL },  { 30, "", {}, 0, NULL }, { 40, "", {}, 0, NULL },
    { 50, "", {}, 0, NULL },  { 60, "", {}, 0, NULL }, { 75, "", {}, 0, NULL },
    { 100, "", {}, 0, NULL },
};

void fillCombo(zComboReward* reward)
{
    S32 rewardLeft = reward->reward;
    S32 j = 0;

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

void zCombo_Add(S32 arg0)
{
    if (comboTimer < 0.0f)
    {
        comboTimer = comboMaxTime;
        comboPending = arg0 - 1;
        return;
    }
    comboTimer = comboMaxTime;
    comboCounter += arg0;
    if ((S32)comboPending != 0)
    {
        comboCounter += comboPending;
        comboPending = 0;
    }
}

// Can't get the floating point instructions to go in the right order
// the zCombo_float32_3 = zCombo_float_minusone always gets lifted to the
// start regardless of what order the code is in, despite it remaining
// after the other assignments in the original assembly.
void zCombo_Setup()
{
    // FIXME: define values
    // zCombo_int32_3 = 0;
    // zCombo_int32_2 = 0;
    // zCombo_int32_1 = 0;
    // zCombo_float32_3 = zCombo_float_minusone;

    // "HUD_TEXT_COMBOMESSAGE"
    U32 id = xStrHash(zCombo_Strings + 0xc1);
    comboHUD = (widget_chunk*)zSceneFindObject(id);

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
    // FIXME: zCombo_float32_1
    // zCombo_float32_1 = globals.player.g.ComboTimer;

    for (int i = 0; i < 16; ++i)
    {
        fillCombo(&comboReward[i]);
    }

    // "TEXTBOX_BUNGEE_HELP"
    id = xStrHash(zCombo_Strings + 0xd7);
    sHideText[0] = (ztextbox*)zSceneFindObject(id);

    // "DIALOG_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0xeb);
    sHideText[1] = (ztextbox*)zSceneFindObject(id);

    // "MESSAGE_02_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0xfa);
    sHideText[2] = (ztextbox*)zSceneFindObject(id);

    // "PROMPT_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0x10d);
    sHideText[3] = (ztextbox*)zSceneFindObject(id);

    // "QUIT_TEXTBOX"
    id = xStrHash(zCombo_Strings + 0x11c);
    sHideText[4] = (ztextbox*)zSceneFindObject(id);

    // "MNU4 NPCTALK"
    id = xStrHash(zCombo_Strings + 0x129);
    sHideUIF = (zUIFont*)zSceneFindObject(id);
}

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

void zCombo_Update(F32 dt)
{
    F32 temp_f0;
    S32 var_r31;
    S32 var_r28;
    zComboReward* temp_r5;
    zComboReward* temp_r3;
    zComboReward* temp_r0;

    xVec3Copy(&sUnderCamPos, &globals.camera.mat.pos);

    xVec3AddScaled(&sUnderCamPos, &globals.camera.mat.up, -3.0f);

    var_r31 = comboCounter;
    if (comboCounter >= 0x10)
    {
        var_r31 = 0xf;
    }

    temp_r3 = comboReward;
    temp_r5 = &temp_r3[var_r31];
    if (comboLastCounter != comboCounter && temp_r5->reward != 0)
    {
        if (comboHUD != NULL)
        {
            strcpy(comboHUD->w.text, xTextAssetGetText(temp_r5->textAsset));
            comboHUD->w.show();
        }
        comboLastCounter = comboCounter;
    }

    var_r28 = 0;
    do
    {
        if (sHideText[var_r28] != NULL && sHideText[var_r28]->visible())
        {
            // null-terminating character
            comboHUD->w.text[0] = '\x00';
            break;
        }

        var_r28 += 1;
    } while (var_r28 < 5);

    if (sHideUIF != NULL && xEntIsVisible(sHideUIF))
    {
        // null-terminating character
        comboHUD->w.text[0] = '\x00';
    }

    if (comboTimer >= 0.0f)
    {
        temp_f0 = comboTimer - dt;
        comboTimer = temp_f0;

        temp_r0 = &comboReward[0];

        if (comboTimer < 0.0f && temp_r0->reward > 0)
        {
            zEntPickup_SpawnNRewards(comboReward->rewardList, comboReward->rewardNum,
                                     &sUnderCamPos);

            switch (var_r31)
            {
            case 5:
                zEntPlayer_SNDPlayStreamRandom(0, 1, ePlayerStreamSnd_Combo1,
                                               ePlayerStreamSnd_Combo2, 0.1f);
                break;
            case 6:
            case 7:
                zEntPlayer_SNDPlayStreamRandom(0, 2, ePlayerStreamSnd_Combo1,
                                               ePlayerStreamSnd_Combo2, 0.1f);
                break;
            case 8:
            case 9:
                zEntPlayer_SNDPlayStreamRandom(0, 3, ePlayerStreamSnd_Combo1,
                                               ePlayerStreamSnd_Combo2, 0.1f);
                break;
            case 10:
                zEntPlayer_SNDPlayStreamRandom(0, 4, ePlayerStreamSnd_Combo1,
                                               ePlayerStreamSnd_Combo2, 0.1f);
                break;
            case 11:
            case 12:
                zEntPlayer_SNDPlayStreamRandom(0, 5, ePlayerStreamSnd_Combo1,
                                               ePlayerStreamSnd_Combo2, 0.1f);
                zEntPlayer_SNDPlayStreamRandom(6, 50, ePlayerStreamSnd_Combo1,
                                               ePlayerStreamSnd_Combo5, 0.1f);
                break;
            case 13:
                zEntPlayer_SNDPlayStreamRandom(0, 10, ePlayerStreamSnd_BigCombo1,
                                               ePlayerStreamSnd_BigCombo2, 0.1f);
                zEntPlayer_SNDPlayStream(11, 100, ePlayerStreamSnd_BigCombo1, 0x0);
                break;
            case 14:
                zEntPlayer_SNDPlayStreamRandom(0, 10, ePlayerStreamSnd_BigCombo1,
                                               ePlayerStreamSnd_BigCombo2, 0.1f);
                zEntPlayer_SNDPlayStream(21, 100, ePlayerStreamSnd_BigCombo1, 0x0);
                break;
            case 15:
                zEntPlayer_SNDPlayStream(0, 100, ePlayerStreamSnd_BigCombo2, 0x0);
                break;
            }

            if (comboHUD != NULL)
            {
                comboHUD->w.add_motive(xhud::motive(NULL, comboDisplayTime, (F32)0.0f, (F32)0.0f,
                                                    xhud::delay_motive_update,
                                                    (void*)zComboHideMessage));
            }

            comboTimer = -1.0f;
            comboCounter = 0;
            comboLastCounter = 0;
        }
    }
}

bool ztextbox::visible()
{
    return this->flag.visible;
}
