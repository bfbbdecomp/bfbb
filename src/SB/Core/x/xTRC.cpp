#include "xTRC.h"
#include "xSnd.h"

#include "zGame.h"
#include "zGlobals.h"
#include "xMath2.h"
#include "xFont.h"
#include "zVar.h"

#include <string.h>
#include <types.h>

_tagTRCPadInfo gTrcPad[4];
_tagTRCState gTrcDisk[2];

static const char* __deadstripped_xTRC()
{
    return "The Controller in Controller Socket 1 has been removed. Reconnect the Controller to continue with the game.\0"
           "The Controller in Controller Socket 1 is an unknown type. Connect a standard Controller to continue with the game.\0"
           "Please wait... Checking for the 'SpongeBob SquarePants: Battle for Bikini Bottom' Game Disc.\0"
           "The Disc Cover is open. If you want to continue the game, please close the Disc Cover.\0"
           "Please insert the 'SpongeBob SquarePants: Battle for Bikini Bottom' Game Disc.\0"
           "This is not the 'SpongeBob SquarePants: Battle for Bikini Bottom' Game Disc. Please insert the 'SpongeBob SquarePants: Battle for Bikini Bottom' Game Disc.\0"
           "The Game Disc could not be read. Please read the Nintendo GameCube\x99 Instruction Booklet for more information.\0"
           "An error has occurred. Turn the power off and refer to the Nintendo GameCube\x99 Instruction Booklet for further instructions.";
}

static const char* message_text;

static const basic_rect<F32> screen_bounds = { 0.0f, 0.0f, 1.0f, 1.0f };
static S32 yellow = 0xFFE600FF;

void xTRCInit()
{
    memset(gTrcPad, 0, sizeof(gTrcPad));
    gTrcPad[0].id = 0;
    gTrcPad[1].id = 1;
    gTrcPad[2].id = 2;
    gTrcPad[3].id = 3;
    memset(gTrcDisk, 0, 8);
}

static void render_message(const char* s)
{
    static xtextbox tb = xtextbox::create(xfont::create(1, NSCREENX(19.0f), NSCREENY(22.0f), 0.0f,
                                                        *(iColor_tag*)&yellow, screen_bounds),
                                          screen_bounds, 0x2, 0.0f, 0.0f, 0.0f, 0.0f);

    tb.set_text(s);
    tb.bounds = screen_bounds;
    tb.bounds.contract(0.1f);

    F32 yextent = (F64)tb.yextent(true);
    tb.bounds.h = yextent;
    tb.bounds.y = -(0.5f * yextent + 0.5f);

    render_fill_rect(tb.font.clip, xColorFromRGBA(0, 0, 0, 0xC8));

    tb.render(true);
}

void xTRCRender()
{
    if (message_text != NULL)
    {
        render_message(message_text);
    }
}

void xTRCReset()
{
    message_text = NULL;
    globals.dontShowPadMessageDuringLoadingOrCutScene = false;

    eGameMode mode = gGameMode;
    bool isStall = mode == eGameMode_Stall;

    if (isStall)
    {
        zGameModeSwitch(eGameMode_Game);
        xSndResume();
    }
}

void xTRCPad(S32, _tagTRCState)
{   
}

// SDA relocation shenanigans
void xTRCDisk(_tagTRCState state)
{
    if (state != TRC_DiskNotIdentified)
    {
        gTrcDisk[0] = state;
        gTrcDisk[1] = TRC_DiskIdentified;
    }
    else
    {
        gTrcDisk[1] = TRC_DiskNotIdentified;
    }
}

void render_mem_card_no_space(S32 needed, S32 available, S32 neededFiles, bool enabled)
{
    if (available < 0 && neededFiles != -1 && needed != -1)
    {
        available = 0;
    }

    bad_card_needed = needed;
    bad_card_available = available;

    char* error_text = "{i:text_mem_card_no_space}";
    if (neededFiles == 0 && needed > available)
    {
        error_text = "{i:text_mem_card_no_space_overwrite}";
    }
    else if ((neededFiles > 0 && needed > available) || neededFiles == -1 || needed > available)
    {
        error_text = "{i:text_mem_card_no_space_no_save}";
    }

    RenderText(error_text, enabled);
}

void RenderText(const char* text, bool enabled)
{
    static xtextbox tb =
        xtextbox::create(xfont::create(1, NSCREENX(19.0f), NSCREENY(22.0f), 0.0f,
                                       xColorFromRGBA(0xFF, 0xE6, 0x00, 0xFF), screen_bounds),
                         screen_bounds, 0x2, 0.0f, 0.0f, 0.0f, 0.0f);
    
    tb.set_text(enabled ? text : "");
    tb.bounds = screen_bounds;
    tb.bounds.contract(0.1f);

    F32 yextent = (F64)tb.yextent(true);
    tb.bounds.h = yextent;
    tb.bounds.y = -(0.5f * yextent - 0.5f);        
    tb.render(true);

    if (!enabled)
    {
        render_fill_rect(tb.font.clip, xColorFromRGBA(0, 0, 0, 0xC8));
    }
}
