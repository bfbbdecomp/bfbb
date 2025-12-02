#include "xScrFx.h"

#include "zGame.h"
#include "zMenu.h"
#include "xDebug.h"
#include "zGlobals.h"
#include "xstransvc.h"

struct _xFadeData
{
    S32 active;
    S32 hold;
    iColor_tag src;
    iColor_tag dest;
    F32 time_passed;
    F32 time_total;
    void(*cb)();
};

bool g_debugRenderSafeArea = false;

static _xFadeData mFade;

static F32 mLetterboxO = 0.0f;
static F32 mLetterboxTO = 0.0f;
static F32 sLetterBoxSize = 0.0f;
static U8 sLetterBoxAlpha = 255;

DistortionParticle gDistortionParticles[100];
S32 gNumDistortionParticles = 0;

static F32 sNoGlobalTime = 0.0f;

xVec3 ddir = { 0.0f, -0.5f, 0.0f };

xGlare sGlare[10];

xVec3 sFullScreenGlareDir = { -0.3f, 1.0f, 0.4f };
F32 sFullScreenGlareIntensity = 0.5f;
RwRGBA sFullScreenGlareColor = { 255, 255, 255, 64 };
S32 sFullScreenGlareEnabled = 0;
U32 sFullScreenGlareTextureID = xStrHash("fx_streak2");
RwTexture* sFullScreenGlareTexturePtr = NULL;

static void xScrFxDistortionUpdate(F32 dt);
static void xScrFxDistortionRender(RwCamera*);

void xScrFxInit()
{
    xScrFxFadeInit();
    xScrFxLetterBoxInit();
    xScrFXGlareInit();
    iScrFxInit();
}

void xScrFxReset()
{
    xScrFXGlareReset();
}

void xScrFxUpdate(RwCamera* cam, F32 dt)
{
    iScrFxBegin();
    xScrFxUpdateFade(cam, dt);
    xScrFxUpdateLetterBox(cam, dt);
    xScrFXGlareUpdate(dt);
    xScrFxDistortionUpdate(dt);
}

void xScrFxRender(RwCamera* cam)
{
    iScrFxBegin();
    xScrFxDistortionRender(RwCameraGetCurrentCamera());

    if (g_debugRenderSafeArea)
    {
        xScrFxDrawSafeArea();
    }

    iScrFxEnd();
}

void xScrFxDrawScreenSizeRectangle()
{
    RwVideoMode video_mode;
    RwEngineGetVideoModeInfo(&video_mode, RwEngineGetCurrentVideoMode());
    iScrFxDrawBox(0.0f, 0.0f, video_mode.width, video_mode.height, 0, 0, 0, 255);
}

void xScrFxFadeInit()
{
    memset(&mFade, 0, sizeof(mFade));
}

static U8 InterpCol(F32 t, U8 s, U8 d)
{
    U8 uval;
    F32 val = d - s;
    val *= t;
    val += s;
    uval = (U8)val;
    return uval;
}

void xScrFxFade(iColor_tag* base, iColor_tag* dest, F32 seconds, void (*callback)(), S32 hold)
{
    mFade.active = 1;
    mFade.src = *base;
    mFade.dest = *dest;
    mFade.time_passed = 0.0f;
    mFade.time_total = seconds;
    mFade.cb = callback;

    if (!hold)
    {
        mFade.hold = 0;
    }
    else
    {
        mFade.hold = 1;
    }
}

void xScrFxStopFade()
{
    mFade.active = 0;
}

S32 xScrFxIsFading()
{
    return mFade.active;
}

void xScrFxUpdateFade(RwCamera*, F32 seconds)
{
    if (zGameIsPaused()) return;
    if (!mFade.active) return;

    F32 t;
    if (mFade.hold == 2)
    {
        t = 1.0f;
    }
    else
    {
        if (!mFade.time_passed)
        {
            t = 0.0f;
        }
        else
        {
            mFade.time_total = MAX(0.00001f, mFade.time_total);
            t = mFade.time_passed / mFade.time_total;
        }

        mFade.time_passed += seconds;

        if (t >= 1.0f)
        {
            t = 1.0f;

            if (mFade.hold == 1)
            {
                mFade.hold = 2;
            }
            else
            {
                mFade.active = 0;
            }

            if (mFade.cb)
            {
                mFade.cb();
            }
        }
    }

    iColor_tag c;
    c.r = InterpCol(t, mFade.src.r, mFade.dest.r);
    c.g = InterpCol(t, mFade.src.g, mFade.dest.g);
    c.b = InterpCol(t, mFade.src.b, mFade.dest.b);
    c.a = InterpCol(t, mFade.src.a, mFade.dest.a);
    
    RwVideoMode video_mode;
    RwEngineGetVideoModeInfo(&video_mode, RwEngineGetCurrentVideoMode());
    iScrFxDrawBox(0.0f, 0.0f, video_mode.width, video_mode.height, c.r, c.g, c.b, c.a);
}

void xScrFxLetterBoxInit()
{
    mLetterboxO = 0.0f;
    mLetterboxTO = 0.0f;
}

void xScrFxLetterboxReset()
{
    mLetterboxO = 0.0f;
    mLetterboxTO = 0.0f;
}

void xScrFxLetterBoxSetSize(F32 size)
{
    sLetterBoxSize = size;
}

void xScrFxLetterBoxSetAlpha(U8 alpha)
{
    sLetterBoxAlpha = alpha;
}

void xScrFxLetterbox(S32 enable)
{
    if (zMenuRunning())
    {
        enable = 0;
    }

    if (enable)
    {
        mLetterboxTO = sLetterBoxSize;
    }
    else
    {
        mLetterboxTO = 0.0f;
    }
}

void xScrFxUpdateLetterBox(RwCamera*, F32 seconds)
{
    if (!zGameIsPaused())
    {
        if (mLetterboxO < mLetterboxTO)
        {
            mLetterboxO += 100.0f * seconds;
            if (mLetterboxO > mLetterboxTO)
            {
                mLetterboxO = mLetterboxTO;
            }
        }
        else if (mLetterboxO > mLetterboxTO)
        {
            mLetterboxO -= 100.0f * seconds;
            if (mLetterboxO < mLetterboxTO)
            {
                mLetterboxO = mLetterboxTO;
            }
        }
    }

    F32 o = mLetterboxO;

    if (o > 0.0f)
    {
        RwVideoMode video_mode;
        RwEngineGetVideoModeInfo(&video_mode, RwEngineGetCurrentVideoMode());
        iScrFxDrawBox(0.0f, 0.0f, video_mode.width, o, 0, 0, 0, sLetterBoxAlpha);
        iScrFxDrawBox(0.0f, video_mode.height - o, video_mode.width, video_mode.height, 0, 0, 0, sLetterBoxAlpha);
    }
    
}

S32 xScrFxIsLetterbox()
{
    return mLetterboxTO > 0.0f;
}

void xScrFxDrawSafeArea()
{
    RwVideoMode videoMode;
    RwEngineGetVideoModeInfo(&videoMode, RwEngineGetCurrentVideoMode());

    U32 screenWidth = videoMode.width;
    U32 screenHeight = videoMode.height;
    U32 safeX = screenWidth * 0.85f;
    U32 safeY = screenHeight * 0.85f;
    U32 xMargin = (screenWidth - safeX) / 2;
    U32 yMargin = (screenHeight - safeY) / 2;
    S32 top = yMargin;
    S32 bottom = screenHeight - yMargin;
    S32 left = xMargin;
    S32 right = screenWidth - xMargin;
    F32 width = 2.0f;

    iScrFxDrawBox(left - width, top - width, right + width, top, 255, 0, 0, 255);
    iScrFxDrawBox(left - width, bottom, right + width, bottom + width, 255, 0, 0, 255);
    iScrFxDrawBox(left - width, top, left, bottom, 255, 0, 0, 255);
    iScrFxDrawBox(right, top, right + width, bottom, 255, 0, 0, 255);
}

void xScrFxDistortionAdd(xVec3*, xVec3*, S32)
{
}

static void xScrFxDistortionUpdate(F32 dt)
{
    DistortionParticle* dp = &gDistortionParticles[0];

    if (zGameIsPaused())
    {
        return;
    }

    sNoGlobalTime += dt;

    for (S32 i = 0; i < gNumDistortionParticles; i++, dp++)
    {
        if (dp->death != 0.0f)
        {
            dp->life += dt;
            if (dp->life >= dp->death)
            {
                *dp = gDistortionParticles[gNumDistortionParticles - 1];
                gDistortionParticles[gNumDistortionParticles - 1].death = 0.0f;
                i--;
                dp--;
                gNumDistortionParticles--;
            }
        }
    }

    if (gFrameCount % 2 == 0)
    {
        xVec3 pos = *xEntGetPos(&globals.player.ent);
        pos.y += 0.5f;
        xScrFxDistortionAdd(&pos, &ddir, 1);
    }
}

static void xScrFxDistortionRender(RwCamera*)
{
}

void xScrFXGlareInit()
{
    sGlare->flags = 0;
    for (S32 i = 1; i < 10; i++)
    {
        sGlare[i].flags = 0;
    }
}

void xScrFXGlareReset()
{
    xScrFXGlareInit();
}

S32 xScrFXGlareAdd(xVec3* pos, F32 life, F32 intensity, F32 size, F32 r, F32 g, F32 b, F32 a, RwRaster* raster)
{
    for (S32 i = 0; i < 10; i++)
    {
        if (sGlare[i].flags == 0)
        {
            sGlare[i].lifetime = life;
            sGlare[i].intensity = intensity;
            sGlare[i].pos = *pos;
            sGlare[i].flags = 0x1;
            sGlare[i].col.alpha = a;
            sGlare[i].col.red = r;
            sGlare[i].col.green = g;
            sGlare[i].col.blue = b;
            sGlare[i].size = size;
            sGlare[i].intensityFadeRate = sGlare[i].intensity / sGlare[i].lifetime;

            if (!raster)
            {
                RwTexture* texturePtr = (RwTexture*)xSTFindAsset(xStrHash("fx_radialgradient"), NULL);
                if (texturePtr)
                {
                    sGlare[i].raster = RwTextureGetRaster(texturePtr);
                }
                else
                {
                    sGlare[i].raster = NULL;
                }
            }
            else
            {
                sGlare[i].raster = raster;
            }

            return i;
        }
    }

    return -1;
}

void xScrFXGlareUpdate(F32 dt)
{
    for (S32 i = 0; i < 10; i++)
    {
        if (sGlare[i].flags != 0)
        {
            sGlare[i].lifetime -= dt;
            sGlare[i].intensity -= dt * sGlare[i].intensityFadeRate;
            if (sGlare[i].lifetime <= 0.0f)
            {
                sGlare[i].flags = 0;
            }
        }
    }
}

void xScrFXFullScreenGlareRender()
{
    if (!sFullScreenGlareEnabled)
    {
        return;
    }

    xMat4x3 mat;
    iCamGetViewMatrix(xglobals->camera.lo_cam, &mat);

    xVec3 v;
    xVec3Copy(&v, &mat.at);
    xVec3Normalize(&v, &v);

    xVec3 glareDir;
    xVec3Normalize(&glareDir, &sFullScreenGlareDir);
    
    F32 dp = glareDir.dot(v);

    F32 d = dp;
    d = 0.5f + d;
    d *= d * d * d;
    d *= sFullScreenGlareIntensity;
    if (d == 0.0f)
    {
        return;
    }

    RwRGBA color;
    color.red = sFullScreenGlareColor.red;
    color.green = sFullScreenGlareColor.green;
    color.blue = sFullScreenGlareColor.blue;

    F32 alpha = sFullScreenGlareColor.alpha * d;
    if (alpha > 255.0f)
    {
        alpha = 255.0f;
    }
    color.alpha = alpha;

    if (!sFullScreenGlareTexturePtr)
    {
        sFullScreenGlareTexturePtr = (RwTexture*)xSTFindAsset(sFullScreenGlareTextureID, NULL);
    }
    if (sFullScreenGlareTexturePtr)
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)RwTextureGetRaster(sFullScreenGlareTexturePtr));
    }
    else
    {
        RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)NULL);
    }

    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDONE);

    xScrFxDrawBox(0.0f, 0.0f, 640.0f, 480.0f, color.red, color.green, color.blue, color.alpha, dp, 0.0f);
}

void xScrFXGlareRender(xCamera* cam)
{
    if (!cam)
    {
        return;
    }

    for (S32 i = 0; i < 10; i++)
    {
        xGlare* g = &sGlare[i];
        if (g->flags == 0)
        {
            continue;
        }

        xVec3 w, h;
        h = cam->mat.right;
        w = cam->mat.up;
        xVec3Normalize(&h, &h);
        xVec3Normalize(&w, &w);
        h *= 0.5f * g->size;
        w *= 0.5f * g->size;

        xVec3 v;
        xVec3Copy(&v, &cam->mat.at);
        xVec3Normalize(&v, &v);

        xVec3 glareDir;
        glareDir.x = g->pos.x - cam->mat.pos.x;
        glareDir.y = g->pos.y - cam->mat.pos.y;
        glareDir.z = g->pos.z - cam->mat.pos.z;
        xVec3Normalize(&glareDir, &glareDir);

        F32 dot = glareDir.dot(v);

        F32 val = (1.0f + dot) * 0.5f;
        val *= val * val * val;

        F32 glareDirLen = xVec3Length(&glareDir);

        val *= g->intensity / glareDirLen;
        if (val != 0.0f)
        {
            static RwIm3DVertex sStripVert[4];

            RwIm3DVertex* vert = &sStripVert[0];
            RwIm3DVertexSetPos(vert, g->pos.x - w.x - h.x, g->pos.y - w.y - h.y, g->pos.z - w.z - h.z);
            RwIm3DVertexSetUV(vert, 0.0f, 0.0f);
            RwIm3DVertexSetRGBA(vert, 255.0f * g->col.red, 255.0f * g->col.green, 255.0f * g->col.blue, 255.0f * g->col.alpha * val);
            vert++;
            RwIm3DVertexSetPos(vert, g->pos.x - w.x + h.x, g->pos.y - w.y + h.y, g->pos.z - w.z + h.z);
            RwIm3DVertexSetUV(vert, 0.0f, 1.0f);
            RwIm3DVertexSetRGBA(vert, 255.0f * g->col.red, 255.0f * g->col.green, 255.0f * g->col.blue, 255.0f * g->col.alpha * val);
            vert++;
            RwIm3DVertexSetPos(vert, g->pos.x + w.x - h.x, g->pos.y + w.y - h.y, g->pos.z + w.z - h.z);
            RwIm3DVertexSetUV(vert, 1.0f, 0.0f);
            RwIm3DVertexSetRGBA(vert, 255.0f * g->col.red, 255.0f * g->col.green, 255.0f * g->col.blue, 255.0f * g->col.alpha * val);
            vert++;
            RwIm3DVertexSetPos(vert, g->pos.x + w.x + h.x, g->pos.y + w.y + h.y, g->pos.z + w.z + h.z);
            RwIm3DVertexSetUV(vert, 1.0f, 1.0f);
            RwIm3DVertexSetRGBA(vert, 255.0f * g->col.red, 255.0f * g->col.green, 255.0f * g->col.blue, 255.0f * g->col.alpha * val);

            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)g->raster);
            
            if (RwIm3DTransform(sStripVert, 4, NULL, rwIM3D_VERTEXXYZ | rwIM3D_VERTEXUV | rwIM3D_VERTEXRGBA))
            {
                RwIm3DRenderPrimitive(rwPRIMTYPETRISTRIP);
                RwIm3DEnd();
            }
        }
    }
}

void xScrFxDrawBox(F32 x1, F32 y1, F32 x2, F32 y2, U8 red, U8 green, U8 blue, U8 alpha, F32 ushift, F32 vshift)
{
    F32 oocameraNearClipPlane = RwIm2DGetNearScreenZ();

    if (alpha == 0)
    {
        return;
    }
    
    static RwImVertexIndex indices[4] = { 0, 1, 2, 3 };
    static RwIm2DVertex v[4];
    
    RwIm2DVertexSetScreenX(&v[0], x1);
    RwIm2DVertexSetScreenY(&v[0], y1);
    RwIm2DVertexSetScreenX(&v[1], x2);
    RwIm2DVertexSetScreenY(&v[1], y1);
    RwIm2DVertexSetScreenX(&v[2], x1);
    RwIm2DVertexSetScreenY(&v[2], y2);
    RwIm2DVertexSetScreenX(&v[3], x2);
    RwIm2DVertexSetScreenY(&v[3], y2);

    RwIm2DVertexSetScreenZ(&v[0], oocameraNearClipPlane);
    RwIm2DVertexSetScreenZ(&v[1], oocameraNearClipPlane);
    RwIm2DVertexSetScreenZ(&v[2], oocameraNearClipPlane);
    RwIm2DVertexSetScreenZ(&v[3], oocameraNearClipPlane);

    RwIm2DVertexSetIntRGBA(&v[0], red, green, blue, alpha);
    RwIm2DVertexSetIntRGBA(&v[1], red, green, blue, alpha);
    RwIm2DVertexSetIntRGBA(&v[2], red, green, blue, alpha);
    RwIm2DVertexSetIntRGBA(&v[3], red, green, blue, alpha);

    RwIm2DVertexSetU(&v[0], ushift, 0);
    RwIm2DVertexSetV(&v[0], vshift, 0);
    RwIm2DVertexSetU(&v[1], 1.0f + ushift, 0);
    RwIm2DVertexSetV(&v[1], vshift, 0);
    RwIm2DVertexSetU(&v[2], ushift, 0);
    RwIm2DVertexSetV(&v[2], 1.0f + vshift, 0);
    RwIm2DVertexSetU(&v[3], 1.0f + ushift, 0);
    RwIm2DVertexSetV(&v[3], 1.0f + vshift, 0);

    RwIm2DRenderIndexedPrimitive(rwPRIMTYPETRISTRIP, v, 4, indices, 4);
}
