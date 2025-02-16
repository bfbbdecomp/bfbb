#ifndef ITRC_H
#define ITRC_H

#include <types.h>

#include "xPad.h"

struct _tagiTRCPadInfo
{
    _tagPadInit pad_init;
};

// Yes, this is a namespace, not a class.
namespace iTRCDisk
{
    bool CheckDVDAndResetState();
    void Init();
    bool IsDiskIDed();
} // namespace iTRCDisk

namespace ResetButton
{
    void EnableReset();
    void DisableReset();
    void SetSndKillFunction(void (*func)());
    void CheckResetButton();
} // namespace ResetButton

#endif
