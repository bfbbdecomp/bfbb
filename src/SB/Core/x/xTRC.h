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
    int32 id;
    _tagTRCState state;
};

extern _tagTRCPadInfo gTrcPad[4];

void xTRCPad(int32 pad_id, _tagTRCState state);
void xTRCRender();
void xTRCReset();
void xTRCDisk(_tagTRCState state);
void render_mem_card_no_space(int32 needed, int32 available, int32 neededFiles, bool enabled);

#endif
