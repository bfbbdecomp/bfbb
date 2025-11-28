#include "iFMV.h"

#include "iCamera.h"
#include "iFile.h"
#include "iPad.h"
#include "iSystem.h"
#include "iTRC.h"

#include "xFile.h"
#include "xPar.h"
#include <dolphin/gx.h>

#include "zGlobals.h"

#include <types.h>
#include <dolphin.h>

// FIXME: These should be in a RW header somewhere
extern GXRenderModeObj* _RwDlRenderMode;
extern "C" {
void RwGameCubeGetXFBs(void*, void*);
}

// .bss
static U32 Bink_surface_type[5];

// .sbss
static S32 frame_num;
U32 fuckingSurfaceType;
static HBINK Bink;
static HRAD3DIMAGE Image;
static S32 Paused;
static void* pixels;
static volatile F32 vol;
S32 ip;
s32 oof;
void* iFMV::mXFBs[2];
void* iFMV::mCurrentFrameBuffer;
GXRenderModeObj* iFMV::mRenderMode;

// .sdata
static float Width_scale = 1.0f;
static float Height_scale = 1.0f;
U8 iFMV::mFirstFrame = 1;

void* iFMVmalloc(size_t size)
{
    return RwMalloc(size);
}

void iFMVfree(void* mem)
{
    RwFree(mem);
}

static void PlayFMV(char* filename, size_t buttons, F32 time);
U32 iFMVPlay(char* filename, U32 buttons, F32 time, bool skippable, bool lockController)
{
    if (filename == NULL)
    {
        return 1;
    }

    frame_num = 0;
    while (frame_num >= 0)
    {
        PlayFMV(filename, buttons, time);
    }
    return 0;
}

static void Setup_surface_array()
{
    Bink_surface_type[0] = BINKSURFACE32;
    Bink_surface_type[1] = BINKSURFACE32A;
    Bink_surface_type[2] = BINKSURFACE565;
    Bink_surface_type[3] = BINKSURFACE4444;
    Bink_surface_type[4] = BINKSURFACEYUY2;
}

// WIP.
void Decompress_frame(HBINK bnk, HRAD3DIMAGE rad_image, long flags)
{
    struct Result
    {
        S32 unk_0;
        S32 unk_4;
        U32 unk_8;
        U32 unk_c;
    };
    Result result;
    result.unk_4 = BinkDoFrame(bnk);
    if (Lock_RAD_3D_image(rad_image, &pixels, &result.unk_c, &result.unk_8) != 0)
    {
        S32 mask = flags * -1;
        mask = mask | flags;
        mask = mask >> 0x1f;
        mask = mask & 0x80000000;
        mask |= Bink_surface_type[result.unk_8];
        result.unk_0 = BinkCopyToBuffer(bnk, pixels, result.unk_c, bnk->Height, NULL, NULL, mask);
        Unlock_RAD_3D_image(rad_image);
    }
}

static void DrawFrame(float arg0, float arg1, float arg2, float arg3)
{
    GXRenderModeObj* rm = _RwDlRenderMode;
    Mtx idt;
    Mtx44 mtx;

    GXSetViewport(0.0f, 0.0f, rm->fbWidth, rm->efbHeight, 0.0f, 1.0f);
    GXSetScissor(0, 0, rm->fbWidth, rm->efbHeight);
    GXSetDispCopySrc(0, 0, rm->fbWidth, rm->efbHeight);
    GXSetDispCopyDst(rm->fbWidth, rm->xfbHeight);
    GXSetDispCopyYScale((float)rm->xfbHeight / rm->efbHeight);
    GXSetCopyFilter(rm->aa, rm->sample_pattern, GX_TRUE, rm->vfilter);

    if (rm->aa)
    {
        GXSetPixelFmt(GX_PF_RGB565_Z16, GX_ZC_LINEAR);
    }
    else
    {
        GXSetPixelFmt(GX_PF_RGB8_Z24, GX_ZC_LINEAR);
    }

    GXSetDispCopyGamma(GX_GM_1_0);
    C_MTXOrtho(mtx, 0.0f, 480.0f, 0.0f, 640.0f, 0.0f, 10000.0f);
    GXSetProjection(mtx, GX_ORTHOGRAPHIC);
    PSMTXIdentity(idt);
    GXLoadPosMtxImm(idt, 0);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_NRM_NBT, GX_S16, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_NRM_NBT, GX_RGBA8, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_NRM_NBT, GX_RGBA6, 0);

    GXSetNumTexGens(1);
    GXSetNumChans(1);
    GXSetNumTevStages(1);
    GXSetTexCoordGen(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, 0x3c);
    GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);

    if (rm->field_rendering)
    {
        u32 field = VIGetNextField();
        GXSetViewportJitter(0.0f, 0.0f, rm->fbWidth, rm->efbHeight, 0.0f, 1.0f, field);
    }
    else
    {
        GXSetViewport(0.0f, 0.0f, rm->fbWidth, rm->efbHeight, 0.0f, 1.0f);
    }

    GXInvalidateVtxCache();
    GXInvalidateTexAll();
    Blit_RAD_3D_image(Image, arg0, arg1, arg2, arg3, 1.0f);
}

static void xDrawLine2D_LocaliFMVVersion(float, float, float, float);
static void Show_frame()
{
    RwRGBA color = { 0 };
    RwCamera* cam = iCameraCreate(640, 480, FALSE);
    RwCameraClear(cam, &color, rwCAMERACLEARIMAGE);

    RwCameraBeginUpdate(cam);
    Width_scale = 640 / Bink->Width;
    Height_scale = 480 / Bink->Height;
    xDrawLine2D_LocaliFMVVersion(0.0f, 0.0f, 0.0f, 0.0f);
    DrawFrame(0.0f, 0.0f, Width_scale, Height_scale);
    RwCameraEndUpdate(cam);
    RwCameraShowRaster(cam, NULL, 0);

    iCameraDestroy(cam);
}

static void* arammalloc(size_t size)
{
    return (void*)ARAlloc(size);
}

// Something weird is going on here...
static void aramfree(void* mem)
{
    u32 vol;
    ARFree(&vol);
}

static void PlayFMV(char* fname, u32 buttons, F32 time)
{
    GXCullMode cull_mode;
    GXGetCullMode(&cull_mode);
    iFMV::InitDisplay(_RwDlRenderMode);
    iPadStopRumble(globals.pad0);
    RADSetAudioMemory(arammalloc, aramfree);
    RADSetMemory(iFMVmalloc, iFMVfree);
    Setup_surface_array();

    for (char* c = fname; *c != NULL; c++)
    {
        if (*c == '\\')
        {
            *c = '/';
        }
    }

    tag_xFile file;
    DVDFileInfo* pfinfo = &file.ps.fileInfo;
    do
    {
        if (iTRCDisk::IsDiskIDed())
        {
            Bink = BinkOpen(fname, NULL);
            if (Bink == NULL)
            {
                BinkGetError();
            }
        }
        if (iTRCDisk::CheckDVDAndResetState() != 0)
        {
            break;
        }
        if (Bink == NULL)
        {
            iFileOpen(fname, 0, &file);
            DVDSeekAsyncPrio(pfinfo, 0, NULL, 2);
            if (iTRCDisk::CheckDVDAndResetState())
            {
                DVDCancel(&pfinfo->cb);
                break;
            }
            else
            {
                DVDCancel(&pfinfo->cb);
            }
        }
    } while (Bink == NULL);

    if (Bink != NULL)
    {
        if (Bink->Width != 0)
        {
            for (ip = 0; ip <= Bink->Width; ++ip)
            {
                vol = gSnd.categoryVolFader[SND_CAT_CUTSCENE];
                vol = vol * vol;
                vol = vol * 32768.0f;
                BinkSetVolume(Bink, ip, vol);
            }
        }

        Image = Open_RAD_3D_image(NULL, Bink->Width, Bink->Height, fuckingSurfaceType);
        if (Image != NULL)
        {
            if (frame_num != 0)
            {
                BinkGoto(Bink, frame_num, 0);
            }
            oof = 0;

            do
            {
                if (iTRCDisk::CheckDVDAndResetState())
                {
                    goto superbreak;
                }
                if (BinkWait(Bink) == 0)
                {
                    Decompress_frame(Bink, Image, 1);
                    Show_frame();
                    BinkNextFrame(Bink);
                }
                else if (Paused)
                {
                    Show_frame();
                }
                xPadUpdate(globals.currentActivePad, 0.0f);

                F32 t = (float)Bink->FrameNum / (Bink->FrameRate / Bink->FrameRateDiv);
                if (buttons && t >= time && globals.pad0->pressed & buttons)
                {
                    frame_num = -1;
                    goto superbreak;
                }
            } while (Bink->FrameNum < Bink->Frames - 1);
            frame_num = -1;
        }
    superbreak:
        if (frame_num != -1)
        {
            frame_num = Bink->FrameNum;
        }
        Close_RAD_3D_image(Image);
        Image = NULL;
        BinkClose(Bink);
        Bink = NULL;
    }

    GXSetCullMode(cull_mode);
    iVSync();
    xPadUpdate(globals.currentActivePad, 0.0f);
}

void iFMV::InitDisplay(GXRenderModeObj* InRenderMode)
{
    GXColor clr = { 0 };
    Mtx44 mtx;
    Mtx idt;
    mRenderMode = InRenderMode;
    void** xfb = &mXFBs[1];
    RwGameCubeGetXFBs(&mXFBs[0], &mXFBs[1]);
    mCurrentFrameBuffer = *xfb;

    InitGX();
    InitVI();

    GXSetCopyClear(clr, GX_MAX_Z24);
    C_MTXOrtho(mtx, 0.0f, mRenderMode->efbHeight, 0.0f, mRenderMode->fbWidth, 0.0f, -100.0f);
    GXSetProjection(mtx, GX_ORTHOGRAPHIC);
    PSMTXIdentity(idt);
    GXLoadPosMtxImm(idt, 0);
    GXSetCurrentMtx(0);

    GXSetZMode(GX_TRUE, GX_ALWAYS, GX_TRUE);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_NRM_NBT, GX_S16, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_NRM_NBT, GX_RGBA8, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_NRM_NBT, GX_RGBA6, 0);

    GXSetNumTexGens(1);
    GXSetNumChans(1);
    GXSetNumTevStages(1);
    GXSetTexCoordGen(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, 0x3c);
    GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    mFirstFrame = 1;
}

void iFMV::InitGX()
{
    GXSetViewport(0, 0, mRenderMode->fbWidth, mRenderMode->efbHeight, 0.0f, 1.0f);
    GXSetScissor(0, 0, mRenderMode->fbWidth, mRenderMode->efbHeight);
    f32 yScaleFactor = GXGetYScaleFactor(mRenderMode->efbHeight, mRenderMode->xfbHeight);
    u16 r = GXSetDispCopyYScale(yScaleFactor);

    GXSetDispCopySrc(0, 0, mRenderMode->fbWidth, mRenderMode->efbHeight);
    GXSetDispCopyDst(mRenderMode->fbWidth, r);
    GXSetCopyFilter(mRenderMode->aa, mRenderMode->sample_pattern, GX_TRUE, mRenderMode->vfilter);

    if (mRenderMode->aa)
    {
        GXSetPixelFmt(GX_PF_RGB565_Z16, GX_ZC_LINEAR);
    }
    else
    {
        GXSetPixelFmt(GX_PF_RGB8_Z24, GX_ZC_LINEAR);
    }

    GXCopyDisp(mCurrentFrameBuffer, GX_TRUE);
    GXSetDispCopyGamma(GX_GM_1_0);
    GXSetCullMode(GX_CULL_NONE);
}

void iFMV::InitVI()
{
    VISetNextFrameBuffer(iFMV::mXFBs[0]);
    mCurrentFrameBuffer = mXFBs[1];
    VIFlush();
    VIWaitForRetrace();
    if (mRenderMode->viTVmode & 1)
    {
        VIWaitForRetrace();
    }
}

void iFMV::Suspend()
{
}

void iFMV::Resume()
{
}

static void xDrawLine2D_LocaliFMVVersion(F32 arg0, F32 arg1, F32 arg2, F32 arg3)
{
    RwRGBA color = { -1, -1, -1, -1 };

    F32 nearz = RwIm2DGetNearScreenZ();
    void* texraster_state;
    RwRenderStateGet(rwRENDERSTATETEXTURERASTER, &texraster_state);
    void* vtx_alpha_state;
    RwRenderStateGet(rwRENDERSTATEVERTEXALPHAENABLE, &vtx_alpha_state);
    RwIm2DVertex verts[2];

    // RwIm2DVertexSetRealRGBA

    RwIm2DVertexSetScreenX(&verts[0], arg0);
    RwIm2DVertexSetScreenY(&verts[0], arg1);
    RwIm2DVertexSetScreenZ(&verts[0], nearz);
    RwIm2DVertexSetIntRGBA(&verts[0], color.red, color.green, color.blue, color.alpha);

    RwIm2DVertexSetScreenX(&verts[1], arg2);
    RwIm2DVertexSetScreenY(&verts[1], arg3);
    RwIm2DVertexSetScreenZ(&verts[1], nearz);
    RwIm2DVertexSetIntRGBA(&verts[1], color.red, color.green, color.blue, color.alpha);

    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, NULL);

    // { arg2, arg3, nearz, -1 };
    RwIm2DRenderLine(verts, 2, 0, 1);
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, texraster_state);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, vtx_alpha_state);
}
