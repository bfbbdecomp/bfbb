#include "xTRC.h"
#include "xSnd.h"

#include "zGame.h"
#include "zGlobals.h"

#include <string.h>
#include <types.h>

_tagTRCPadInfo gTrcPad[4];
_tagTRCState gTrcDisk[2];

const char* message_text;

void xTRCInit()
{
    memset(gTrcPad, 0, sizeof(gTrcPad));
    gTrcPad[0].id = 0;
    gTrcPad[1].id = 1;
    gTrcPad[2].id = 2;
    gTrcPad[3].id = 3;
    memset(gTrcDisk, 0, 8);
}

void render_message(const char*);

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

void xTRCPad(S32, _tagTRCState)
{
}
