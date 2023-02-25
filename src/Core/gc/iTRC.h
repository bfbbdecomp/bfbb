#ifndef ITRC_H
#define ITRC_H

#include "../x/xPad.h"

struct _tagiTRCPadInfo
{
    _tagPadInit pad_init;
};

// Yes, this is a namespace, not a class.
namespace iTRCDisk
{
    void CheckDVDAndResetState();
    void Init();
} // namespace iTRCDisk

namespace ResetButton
{
    void EnableReset();
    void DisableReset();
    void SetSndKillFunction(void (*func)());
    void CheckResetButton();
} // namespace ResetButton

#endif