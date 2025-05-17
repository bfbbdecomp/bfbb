#ifndef ITRC_H
#define ITRC_H

#include <types.h>
#include <dolphin/types.h>
#include <dolphin/os.h>
#include <dolphin/os/OSAlloc.h>
#include <dolphin/os/OSFont.h>
#include <dolphin/os/OSReset.h>
#include <dolphin/gx/GXStruct.h>
#include <dolphin/gx/GXGet.h>
#include <dolphin/dvd.h>
#include <dolphin/pad.h>


#include "xPad.h"


struct _tagiTRCPadInfo
{
    _tagPadInit pad_init;
};

namespace ROMFont
{
    extern OSFontHeader* mFontData;
    extern void* mXFBs[2];
    extern void* mCurrentFrameBuffer;
    extern GXRenderModeObj* mRenderMode;
    extern bool mFirstFrame;

    BOOL Init();
    void InitDisplay(_GXRenderModeObj* gxRender);
    void InitGX();
    void InitVI();
    void RenderBegin();
    void RenderEnd();
    void SwapBuffers();
    void DrawCell(S32 param_1, S32 param_2, S32 param_3, S32 param_4);
    void LoadSheet(void* image_ptr);
    S32 DrawString(S32 param_1, S32 param_2, char* string);
    S32 GetWidth(char* string);
    void DrawTextBox(S32 param_1, S32 param_2, S32 param_3, S32 param_4, char* str);
} // namespace ROMFont

// Yes, this is a namespace, not a class.
namespace iTRCDisk
{
    extern char mMessage[256];
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
    void Init();
    void ResetMessage();
    void DisplayErrorMessage();
    void SetDVDState();
    void SetErrorMessage(const char*);
    bool IsDiskIDed();
} // namespace iTRCDisk

namespace ResetButton
{
    extern bool mResetEnabled;
    extern BOOL mWasResetButtonPressed;
    extern void (*mSndKill)();

    void EnableReset();
    void DisableReset();
    void SetSndKillFunction(void (*func)());
    void CheckResetButton();

} // namespace ResetButton

#endif
