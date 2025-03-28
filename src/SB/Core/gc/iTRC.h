#ifndef ITRC_H
#define ITRC_H

#include <types.h>

#include "xPad.h"

struct _tagiTRCPadInfo
{
    _tagPadInit pad_init;
};

namespace ROMFont
{
    bool Init();
    void InitGX();
    void InitVI();
    void RenderBegin();
    void RenderEnd();
    void SwapBuffers();
    void DrawCell(int, int, int, int);
    void LoadSheet(void*);
    void DrawString(int, int, char*);
    void GetWidth(char*);
    void DrawTextBox(int, int, int, int, char*);
} // namespace ROMFont

// Yes, this is a namespace, not a class.
namespace iTRCDisk
{
    char mMessage[];
    extern void (*mSndSuspend)();
    extern void (*mSndResume)();
    extern void (*mPadStopRumbling)();
    extern void (*mSndKill)();
    extern void (*mMovieSuspendFunction)();
    extern void (*mMovieResumeFunction)();

    void SetPadStopRumblingFunction(void (*)(void));
    void SetSndSuspendFunction(void (*)(void));
    void SetSndResumeFunction(void (*)(void));
    void SetSndKillFunction(void (*)(void));
    void SetMovieSuspendFunction(void (*)(void));
    void SetMovieResumeFunction(void (*)(void));
    bool CheckDVDAndResetState();
    bool Init();
    void ResetMessage();
    void DisplayErrorMessage();
    void SetDVDState();
    void SetErrorMessage(const char*);
    bool IsDiskIDed();
} // namespace iTRCDisk

namespace ResetButton
{
    extern void (*mSndKill)();

    void EnableReset();
    void DisableReset();
    void SetSndKillFunction(void (*func)());
    void CheckResetButton();

} // namespace ResetButton

#endif
