#include "iTRC.h"

#include <PowerPC_EABI_Support/MSL_C/MSL_Common/strtoul.h>
#include <string.h>
#include <dolphin/gx/GXCull.h>
#include <dolphin/gx/GXFrameBuffer.h>
#include <dolphin/gx/GXGeometry.h>
#include <dolphin/gx/GXManage.h>
#include <dolphin/gx/GXPixel.h>
#include <dolphin/gx/GXTexture.h>
#include <dolphin/gx/GXTransform.h>
#include <dolphin/gx/GXLighting.h>
#include <dolphin/gx/GXTev.h>
#include <dolphin/mtx.h>
#include <dolphin/vi/vifuncs.h>
#include <dolphin/os.h>

#define FONT_MATRIX_ID 0x1E
#define TEXTBOX_MAX_TEXT_LENGTH 256

// FIXME: These should be in a RW header somewhere
extern GXRenderModeObj* _RwDlRenderMode;
extern "C" {
void RwGameCubeGetXFBs(void*, void*);
}

namespace ROMFont
{
    OSFontHeader* mFontData;
    void* mXFBs[2];
    void* mCurrentFrameBuffer;
    GXRenderModeObj* mRenderMode;
    bool mFirstFrame = true;
} // namespace ROMFont

namespace ResetButton
{
    bool mResetEnabled = 1;
    BOOL mWasResetButtonPressed;
    void (*mSndKill)();
} // namespace ResetButton

namespace iTRCDisk
{
    char mMessage[256];

    void (*mSndSuspend)();
    void (*mSndResume)();
    void (*mPadStopRumbling)();
    void (*mSndKill)();
    void (*mMovieSuspendFunction)();
    void (*mMovieResumeFunction)();
} // namespace iTRCDisk

BOOL ROMFont::Init()
{
    if (OSGetFontEncode() == 1)
    {
        ROMFont::mFontData = (OSFontHeader*)OSAllocFromHeap(__OSCurrHeap, 0x120F00);
    }
    else
    {
        ROMFont::mFontData = (OSFontHeader*)OSAllocFromHeap(__OSCurrHeap, 0x20120);
    }

    OSFontHeader* volatile& hack = ROMFont::mFontData;
    return OSInitFont(hack);
}

void ROMFont::InitDisplay(_GXRenderModeObj* InRenderMode)
{
    GXColor clr = { 0 };
    Mtx44 mtx;
    Mtx idt;

    mRenderMode = InRenderMode;
    void** xfb = &mXFBs[1];
    RwGameCubeGetXFBs(&mXFBs[0], &mXFBs[1]);
    mCurrentFrameBuffer = *xfb;

    ROMFont::InitGX();
    ROMFont::InitVI();

    GXSetCopyClear(clr, 0xffffff);
    C_MTXOrtho(mtx, 0.0f, mRenderMode->efbHeight, 0.0f, mRenderMode->fbWidth, 0.0f, -100.0f);
    GXSetProjection(mtx, GX_ORTHOGRAPHIC);
    PSMTXIdentity(idt);
    GXLoadPosMtxImm(idt, 0);
    GXSetCurrentMtx(0);
    GXSetZMode(TRUE, GX_ALWAYS, TRUE);
    GXSetNumChans(0);
    GXSetNumTevStages(1);
    GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);
    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_NRM_NBT, GX_RGBA4, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_NRM_NBT, GX_RGBA4, 0);
    return;
}

void ROMFont::InitGX()
{
    U16 scaledHeight;
    GXSetViewport(0.0f, 0.0f, mRenderMode->fbWidth, mRenderMode->efbHeight, 0.0f, 1.0f);
    GXSetScissor(0, 0, mRenderMode->fbWidth, mRenderMode->efbHeight);

    scaledHeight =
        GXSetDispCopyYScale(GXGetYScaleFactor(mRenderMode->efbHeight, mRenderMode->xfbHeight));
    GXSetDispCopySrc(0, 0, mRenderMode->fbWidth, mRenderMode->efbHeight);
    GXSetDispCopyDst(mRenderMode->fbWidth, scaledHeight);

    GXSetCopyFilter(mRenderMode->aa, mRenderMode->sample_pattern, TRUE, mRenderMode->vfilter);

    if (mRenderMode->aa != FALSE)
    {
        GXSetPixelFmt(GX_PF_RGB565_Z16, GX_ZC_LINEAR);
    }
    else
    {
        GXSetPixelFmt(GX_PF_RGB8_Z24, GX_ZC_LINEAR);
    }

    GXCopyDisp(mCurrentFrameBuffer, 1);
    GXSetDispCopyGamma(GX_GM_1_0);
    GXSetCullMode(GX_CULL_NONE);
}

void ROMFont::InitVI()
{
    VISetNextFrameBuffer(mXFBs[0]);
    mCurrentFrameBuffer = mXFBs[1];
    VIFlush();
    VIWaitForRetrace();
    if (mRenderMode->viTVmode & 1)
    {
        VIWaitForRetrace();
    }
}

void ROMFont::RenderBegin()
{
    if (mRenderMode->field_rendering != FALSE)
    {
        GXSetViewportJitter(0.0f, 0.0f, mRenderMode->fbWidth, mRenderMode->efbHeight, 0.0f, 1.0f,
                            VIGetNextField());
    }
    else
    {
        GXSetViewport(0.0f, 0.0f, mRenderMode->fbWidth, mRenderMode->efbHeight, 0.0f, 1.0f);
    }

    GXInvalidateVtxCache();
    GXInvalidateTexAll();
}

void ROMFont::RenderEnd()
{
    GXSetZMode(TRUE, GX_LEQUAL, TRUE);
    GXSetColorUpdate(TRUE);
    GXCopyDisp(mCurrentFrameBuffer, TRUE);
    GXDrawDone();
    SwapBuffers();
}

void ROMFont::SwapBuffers()
{
    void* buffer;

    VISetNextFrameBuffer(mCurrentFrameBuffer);

    if (mFirstFrame != false)
    {
        VISetBlack(TRUE);
        mFirstFrame = false;
    }
    else
    {
        VISetBlack(FALSE);
    }

    VIFlush();
    VIWaitForRetrace();

    mCurrentFrameBuffer = mCurrentFrameBuffer == mXFBs[0] ? mXFBs[1] : mXFBs[0];
}

void ROMFont::DrawCell(S32 x, S32 y, S32 u, S32 v)
{
    u16 cellWidth;
    u16 cellHeight;

    s16 tex_bottom;
    s16 tex_right;
    s16 tex_left;
    s16 tex_top;

    s16 left;
    s16 right;
    s16 bottom;
    s16 top;

    left = x;
    bottom = y;
    cellWidth = mFontData->cellWidth;
    cellHeight = mFontData->cellHeight;
    right = left + cellWidth;
    top = bottom + cellHeight;

    GXBegin(GX_QUADS, GX_VTXFMT0, 4);

    GXPosition3s16(left, bottom, 0);
    tex_left = u;
    tex_bottom = v;
    GXTexCoord2s16(tex_left, tex_bottom);

    GXPosition3s16(right, bottom, 0);
    tex_right = u + cellWidth;
    GXTexCoord2s16(tex_right, tex_bottom);

    GXPosition3s16(right, top, 0);
    tex_top = v + cellHeight;
    GXTexCoord2s16(tex_right, tex_top);

    GXPosition3s16(left, top, 0);
    GXTexCoord2s16(tex_left, tex_top);

    GXEnd();
}

void ROMFont::LoadSheet(void* image_ptr)
{
    GXAnisotropy max_aniso;
    GXTexObj GStack_68;
    F32 afStack_48[3][4];
    U32 uStack_14;
    U32 uStack_c;

    max_aniso = GX_ANISO_1;
    GXInitTexObj(&GStack_68, image_ptr, mFontData->sheetWidth, mFontData->sheetHeight,
                 (GXTexFmt)mFontData->sheetFormat, GX_CLAMP, GX_CLAMP, NULL);
    GXInitTexObjLOD(&GStack_68, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, FALSE, FALSE, max_aniso);
    GXLoadTexObj(&GStack_68, GX_TEXMAP0);
    uStack_14 = mFontData->sheetWidth;
    uStack_c = mFontData->sheetHeight;
    PSMTXScale(afStack_48, 1.0f / uStack_14, 1.0f / uStack_c, 1.0f);
    GXLoadTexMtxImm(afStack_48, FONT_MATRIX_ID, GX_MTX2x4);
    GXSetNumTexGens(1);
    GXSetTexCoordGen(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, FONT_MATRIX_ID);
}

S32 ROMFont::DrawString(S32 param_1, S32 param_2, char* string)
{
    S32 iVar1;
    S32 x;
    S32 y;
    S32 width;
    void* image[3];

    iVar1 = 0;
    while (*string != '\0')
    {
        string = OSGetFontTexture(string, image, (s32*)&x, (s32*)&y, (s32*)&width);
        ROMFont::LoadSheet(image[0]);
        ROMFont::DrawCell(param_1 + iVar1, param_2, x, y);
        iVar1 = iVar1 + width;
    }
    return iVar1;
}

S32 ROMFont::GetWidth(char* string)
{
    S32 iVar1;
    void* image[1];
    S32 x;
    S32 y;
    S32 width;

    iVar1 = 0;
    while (*string != '\0')
    {
        string = OSGetFontTexture(string, image, (s32*)&x, (s32*)&y, (s32*)&width);
        iVar1 = iVar1 + width;
    }
    return iVar1;
}

void ROMFont::DrawTextBox(S32 x, S32 y, S32 width, S32 height, char* str)
{
    char* word;
    S32 tokWidth;
    S32 baseWidth;
    S32 cursor_x;
    S32 cursor_y;

    char buf[TEXTBOX_MAX_TEXT_LENGTH];

    if (str != NULL)
    {
        RenderBegin();
        cursor_x = x;
        cursor_y = y;
        strcpy(buf, str);
        word = strtok(buf, " ");
        baseWidth = GetWidth(" ");
        while (word != NULL && y + height > cursor_y)
        {
            tokWidth = GetWidth(word);
            if (cursor_x + tokWidth > x + width)
            {
                cursor_y += mFontData->cellHeight;
                cursor_x = x;
            }
            DrawString(cursor_x, cursor_y, word);
            word = strtok(NULL, " ");
            cursor_x += tokWidth + baseWidth;
        }
        RenderEnd();
    }
}

void ResetButton::EnableReset()
{
    ResetButton::mResetEnabled = 1;
}

void ResetButton::DisableReset()
{
    ResetButton::mResetEnabled = 0;
}

void ResetButton::SetSndKillFunction(void (*Func)())
{
    ResetButton::mSndKill = Func;
}

void ResetButton::CheckResetButton()
{
    BOOL reset_button_state = OSGetResetButtonState();
    if (!reset_button_state && mWasResetButtonPressed)
    {
        if (mResetEnabled)
        {
            OSDisableInterrupts();
            if (mSndKill)
            {
                mSndKill();
            }

            PADRecalibrate(0xf0000000);
            VISetBlack(TRUE);
            VIFlush();
            VIWaitForRetrace();
            OSEnableInterrupts();

            if (DVDGetDriveStatus() == DVD_STATE_WRONG_DISK ||
                DVDGetDriveStatus() == DVD_STATE_COVER_OPEN ||
                DVDCheckDisk() == FALSE && DVDGetDriveStatus() == DVD_STATE_END)
            {
                OSResetSystem(TRUE, 0, FALSE);
            }
            else
            {
                OSResetSystem(FALSE, 0, FALSE);
            }
        }
    }
    else
    {
        mWasResetButtonPressed = reset_button_state;
    }
}

void iTRCDisk::Init()
{
    ROMFont::Init();
}

void iTRCDisk::SetErrorMessage(const char* message)
{
    strcpy(mMessage, message);
}

void iTRCDisk::ResetMessage()
{
    memset(mMessage, 0, 0x100);
}

void iTRCDisk::SetPadStopRumblingFunction(void (*Func)())
{
    mPadStopRumbling = Func;
}

void iTRCDisk::SetSndSuspendFunction(void (*Func)())
{
    mSndSuspend = Func;
}

void iTRCDisk::SetSndResumeFunction(void (*Func)())
{
    mSndResume = Func;
}

void iTRCDisk::SetSndKillFunction(void (*Func)())
{
    mSndKill = Func;
}

void iTRCDisk::SetMovieSuspendFunction(void (*Func)())
{
    mMovieSuspendFunction = Func;
}

void iTRCDisk::SetMovieResumeFunction(void (*Func)())
{
    mMovieResumeFunction = Func;
}

bool iTRCDisk::IsDiskIDed()
{
    S32 diskChk;
    bool diskIDed;

    diskIDed = false;
    diskChk = DVDCheckDisk();

    if ((diskChk != FALSE) && (diskChk = DVDGetDriveStatus(), diskChk == FALSE))
    {
        diskIDed = true;
    }
    return diskIDed;
}

void iTRCDisk::DisplayErrorMessage()
{
    GXCullMode cullMode;

    if (strcmp(mMessage, "") != 0)
    {
        GXGetCullMode(&cullMode);
        ROMFont::InitDisplay(_RwDlRenderMode);
        S32 dvd_state = SetDVDState();
        while (dvd_state != 0)
        {
            ROMFont::DrawTextBox(0x32, 0xaa, 0x244, 100, mMessage);
            if (dvd_state != DVD_STATE_FATAL_ERROR)
            {
                ResetButton::CheckResetButton();
            }
            dvd_state = SetDVDState();
        }
        ResetMessage();
        GXSetCullMode(cullMode);
    }
}

S32 iTRCDisk::SetDVDState()
{
    S32 dvd_state = DVDGetDriveStatus();
    switch (dvd_state)
    {
    case DVD_STATE_END:
        break;
    case DVD_STATE_NO_DISK:
        SetErrorMessage(
            "Please insert the \'SpongeBob SquarePants: Battle for Bikini Bottom\' Game Disc.");
        break;
    case DVD_STATE_WRONG_DISK:
        SetErrorMessage(
            "This is not the \'SpongeBob SquarePants: Battle for Bikini Bottom\' Game Disc. Please insert the \'SpongeBob SquarePants: Battle for Bikini Bottom\' Game Disc.");
        break;
    case DVD_STATE_COVER_OPEN:
        SetErrorMessage(
            "The Disc Cover is open. If you want to continue the game, please close the Disc Cover.");
        break;
    case DVD_STATE_RETRY:
        SetErrorMessage(
            "The Game Disc could not be read. Please read the Nintendo GameCube\x99 Instruction Booklet for more information.");
        break;
    case DVD_STATE_FATAL_ERROR:
        SetErrorMessage(
            "An error has occurred. Turn the power off and refer to the Nintendo GameCube\x99 Instruction Booklet for further instructions.");
        break;
    default:
        if (!DVDCheckDisk())
        {
            SetErrorMessage(
                "Please wait... Checking for the \'SpongeBob SquarePants: Battle for Bikini Bottom\' Game Disc.");
            dvd_state = DVD_STATE_COVER_OPEN;
        }
        break;
    }
    return dvd_state;
}

bool iTRCDisk::CheckDVDAndResetState()
{
    S32 dvd_state = SetDVDState();
    DVDCheckDisk();
    bool ret = false;

    if (dvd_state != DVD_STATE_FATAL_ERROR)
    {
        ResetButton::CheckResetButton();
    }
    if (dvd_state != DVD_STATE_END && dvd_state != DVD_STATE_BUSY)
    {
        if (mSndSuspend)
        {
            mSndSuspend();
        }
        if (mPadStopRumbling)
        {
            mPadStopRumbling();
        }
        if (mMovieSuspendFunction)
        {
            mMovieSuspendFunction();
        }
        DisplayErrorMessage();
        if (mMovieResumeFunction)
        {
            mMovieResumeFunction();
        }
        if (mSndResume)
        {
            mSndResume();
        }
        ret = true;
    }
    return ret;
}
