#ifndef XTRC_H
#define XTRC_H

#include "iTRC.h"

enum _tagTRCState
{
    TRC_Unknown,
    TRC_PadMissing,
    TRC_PadInserted,
    TRC_PadInvalidNoAnalog,
    TRC_PadInvalidType,
    TRC_DiskNotIdentified,
    TRC_DiskIdentified,
    TRC_DiskTrayOpen,
    TRC_DiskTrayClosed,
    TRC_DiskNoDisk,
    TRC_DiskInvalid,
    TRC_DiskRetry,
    TRC_DiskFatal,
    TRC_Total
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
    S32 id;
    _tagTRCState state;
};

_tagTRCPadInfo gTrcPad[];
_tagTRCState gTrcDisk[];

void xTRCInit();
void xTRCPad(S32 pad_id, _tagTRCState state);
void xTRCRender();
void xTRCReset();
void xTRCDisk(_tagTRCState state);
void render_mem_card_no_space(S32 needed, S32 available, S32 neededFiles, bool enabled);
void RenderText(const char* text, bool enabled);

#endif
