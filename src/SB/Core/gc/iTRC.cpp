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

extern void GXPosition3s16(S32, S32, S32);
extern void GXTexCoord2s16(S32, S32);

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
        ROMFont::mFontData = (OSFontHeader*)OSAllocFromHeap(__OSCurrHeap, 0xF00 + 0x12);
    }
    else
    {
        ROMFont::mFontData = (OSFontHeader*)OSAllocFromHeap(__OSCurrHeap, 0x2 + 0x120);
    }

    return OSInitFont(ROMFont::mFontData);
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
    C_MTXOrtho(mtx, 0.0f, mRenderMode->efbHeight, 0.0f, mRenderMode->fbWidth, 0.0f, 10000.0f);
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

// FIXME: Revisit after GXTexCoord2s16 and GXPosition3s16 have been decompiled, looks like they were inlined
void ROMFont::DrawCell(S32 param_1, S32 param_2, S32 param_3, S32 param_4)
{
    U16 uVar1;
    U16 uVar2;
    S16 sVar3 = 0;
    S32 iVar4 = 0;
    S32 iVar5 = 0;
    S16 iVar6 = 0;

    uVar1 = mFontData->cellWidth;
    uVar2 = mFontData->cellHeight;
    iVar5 = (int)(short)(param_1 + uVar1);
    iVar4 = (int)(short)(param_2 + uVar2);

    GXBegin(GX_LINESTRIP, GX_VTXFMT0, 4);

    GXPosition3s16((int)param_1, (int)param_2, 0);
    GXTexCoord2s16((int)param_3, param_4);

    GXPosition3s16(iVar5, (int)param_2, 0);

    iVar6 = (int)(short)(param_3 + uVar1);

    GXTexCoord2s16(iVar6, sVar3);
    GXPosition3s16(iVar5, iVar4, 0);

    sVar3 = param_4 + uVar2;

    GXTexCoord2s16(iVar6, sVar3);
    GXPosition3s16((int)param_1, iVar4, 0);
    GXTexCoord2s16(iVar6, sVar3);

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

void ROMFont::DrawTextBox(S32 param_1, S32 param_2, S32 param_3, S32 param_4, char* str)
{
    char* tokenizedString;
    S32 baseWidth;
    S32 tokWidth;
    S32 iVar4;
    S32 iVar5;
    char acStack_128[TEXTBOX_MAX_TEXT_LENGTH];

    if (str != NULL)
    {
        RenderBegin();
        strcpy(acStack_128, str);
        tokenizedString = strtok(acStack_128, " ");
        baseWidth = GetWidth(" ");
        iVar4 = param_2 + param_4;
        iVar5 = param_1;
        while ((tokenizedString != NULL && (param_2 < iVar4)))
        {
            tokWidth = GetWidth(tokenizedString);
            if (param_1 + param_3 < iVar5 + tokWidth)
            {
                param_2 = param_2 + mFontData->cellHeight;
                iVar5 = param_1;
            }
            DrawString(iVar5, param_2, tokenizedString);
            tokenizedString = strtok(NULL, " ");
            iVar5 = tokWidth + baseWidth + iVar5;
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
    // TODO

    OSGetResetButtonState();
    PADRecalibrate(0xf0000000);
    VISetBlack(TRUE);
    VIFlush();
    VIWaitForRetrace();
    OSEnableInterrupts();
    DVDGetDriveStatus();
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
    S32 tempVar;
    GXCullMode* getMode = 0;
    GXCullMode setMode = GX_CULL_ALL;
    _GXRenderModeObj* gxRender = 0;

    tempVar = strcmp(mMessage, "");

    if (tempVar != 0)
    {
        GXGetCullMode(getMode); // (local_18)
        ROMFont::InitDisplay(gxRender);
        iTRCDisk::SetDVDState();
        while (tempVar != 0)
        {
            ROMFont::DrawTextBox(0x32, 0xaa, 0x244, 100, mMessage);
            if (tempVar != -1)
            {
                ResetButton::CheckResetButton();
            }
            iTRCDisk::SetDVDState();
        }
        iTRCDisk::ResetMessage();
        GXSetCullMode(setMode);
    }
}

void iTRCDisk::SetDVDState()
{
}

bool iTRCDisk::CheckDVDAndResetState()
{
    return false;
}
