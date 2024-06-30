#include "zUI.h"

#include "zAnimList.h"
#include "zGlobals.h"
#include "zUIFont.h"
#include "zRenderState.h"
#include "zGame.h"
#include "zGameState.h"

#include "xCounter.h"
#include "xDebug.h"
#include "xEvent.h"
#include "xGroup.h"
#include "xMath2.h"
#include "xScrFx.h"
#include "xSnd.h"
#include "xstransvc.h"
#include "xString.h"
#include "xTRC.h"

#include "iMath.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define TASK_COUNT 8
#define TASK_COUNT_BOSS 2
#define TASK_COUNT_SMALLBOSS 1

struct menuTask
{
    _zUI* uiSelected;
    _zUI* uiSpatOutline;
    _zUI* uiSpatGray;
    _zUI* uiSpatGold;
    _zUI* uiTaskDesc;
    _xCounter* counter;
    char levelSuffix[2];
    _zPortal portal;
    xPortalAsset portalAsset;
};

struct menuWorld
{
    _zUI* uiSelected;
    char worldPrefix[2];
    uint32 numTasks;
    menuTask task[TASK_COUNT];
};

struct menuTaskInfo
{
    float32 ang;
    _CurrentPlayer player;
};

struct menuWorldInfo
{
    menuTaskInfo taskInfo[TASK_COUNT];
};

static const basic_rect<float32> _1261_0 = { 0, 0, 0, 0 };

static const char _stringBase0_54[] = ".minf\0"
                                      ".dff\0"
                                      "idle\0"
                                      "KEY OFF 1 UI\0"
                                      "KEY OFF 2 UI\0"
                                      "KEY OFF 3 UI\0"
                                      "KEY OFF 4 UI\0"
                                      "KEY ON 1 UI\0"
                                      "KEY ON 2 UI\0"
                                      "KEY ON 3 UI\0"
                                      "KEY ON 4 UI\0"
                                      "MNU3 PRESS START UIF\0"
                                      "MNU3 PRESS START 02 UIF\0"
                                      "MNU4 CONTROL MUSIC GC/XB UIF\0"
                                      "Menu00\0"
                                      " \0"
                                      "UI_LEVEL_PATSOCK\0"
                                      "UIF_LEVEL_PATSOCK\0"
                                      "00_SPAT_MARKER_00\0"
                                      "STARTCAM\0"
                                      "00_TASK_COUNTER_00\0"
                                      "LEVEL ON UI 00\0"
                                      "TASK NONE UI 00\0"
                                      "TASK UI 00\0"
                                      "TASK GOLDEN UI 00\0"
                                      "TASK GLOW UI 00\0"
                                      "TASK GLOW UI BOSS 00\0"
                                      "TASK GLOW UI SMALLBOSS 00\0"
                                      "PAUSE TASK UIF 0000\0"
                                      "PAUSE TAKE BUS UIF\0"
                                      "PAUSE TASK NONE UIF\0"
                                      "PAUSE MGR UIF\0"
                                      "TAXI CONFIRM UIF\0"
                                      "TAXI CONFIRM GROUP\0"
                                      "%d/%d\0"
                                      "KS_SPAT_MARKER_01\0"
                                      "All tasks had NULL UIs\0"
                                      "All worlds had NULL UIs";

static uint32 sSortedCount = 0;
extern _zUI* sSorted[768];

static RwIm2DVertex Vertex[4];
static RwImVertexIndex Index[6] = { 0, 1, 2, 0, 2, 3 };

static uint32 cKeyUIid1off;
static uint32 cKeyUIid2off;
static uint32 cKeyUIid3off;
static uint32 cKeyUIid4off;
static uint32 cKeyUIid1on;
static uint32 cKeyUIid2on;
static uint32 cKeyUIid3on;
static uint32 cKeyUIid4on;

static char patsock_text_buffer[] = "##/##";
static _zUI* patsock_ui;
static zUIFont* patsock_uif;
static uint32 patsock_prev_world = -1;
static uint32 patsock_prev_count = -1;

extern zUIMgr gUIMgr;

static float32 ushift;

namespace
{
    void refresh_model(_zUI& ui)
    {
        if (ui.model)
        {
            zUIAsset* sasset;
            xMat3x3* mat;
            xMat3x3 pmat, smat;

            ui.bound.mat = (xMat4x3*)ui.model->Mat;
            ui.bound.mat->pos = 0.0f;

            sasset = ui.sasset;
            mat = (xMat3x3*)ui.model->Mat;

            xMat3x3Euler(&pmat, &sasset->ang);
            xMat3x3Scale(&smat, &sasset->scale);
            xMat3x3Mul(mat, &pmat, &smat);
        }
    }

    void init_tweaks()
    {
    }

    void debug_update(zScene&, float32)
    {
    }

    void debug_render()
    {
    }
} // namespace

void zUIMgr::PreUpdate(zScene* s, float32 dt)
{
    if (s->baseCount[eBaseTypeUI])
    {
        _zUI* ui = (_zUI*)s->baseList[eBaseTypeUI];

        for (uint32 i = 0; i < s->baseCount[eBaseTypeUI]; i++)
        {
            ui->uiButton = 0;
            ui++;
        }
    }

    if (s->baseCount[eBaseTypeUI])
    {
        _zUI* ui = (_zUI*)s->baseList[eBaseTypeUI];

        for (uint32 i = 0; i < s->baseCount[eBaseTypeUI]; i++)
        {
            zUI_PreUpdate(ui, s, dt);
            ui++;
        }
    }
}

void zUIMgr::Update(zScene* s, float32 dt)
{
    for (uint32 i = 0; i < m_updateMax; i++)
    {
        if (xBaseIsEnabled(m_update[i]))
        {
            m_update[i]->update(m_update[i], s, dt);
        }
    }

    debug_update(*s, dt);
}

void zUIMgr::Setup(zScene* s)
{
    const uint32 count = s->baseCount[eBaseTypeUI];
    const uint32 arraySize = count * sizeof(_zUI*);

    m_preUpdateStart = 0;
    m_preUpdateEnd = count - 1;
    m_preUpdateMax = count;
    m_preUpdate = (_zUI**)xMemAllocSize(arraySize);

    m_updateStart = 0;
    m_updateEnd = count - 1;
    m_updateMax = count;
    m_update = (_zUI**)xMemAllocSize(arraySize);

    // non-matching: incorrect registers

    _zUI* ui = (_zUI*)s->baseList[eBaseTypeUI];

    for (uint32 i = 0; i < s->baseCount[eBaseTypeUI]; i++)
    {
        Add(ui);
        ui++;
    }
}

void zUIMgr::Touch(_zUI* ui)
{
    if (ui->baseType == eBaseTypeUI)
    {
        Remove(ui);
        Add(ui);
    }
}

void zUIMgr::Remove(_zUI* ui)
{
    Remove_PreUpdate(ui);
    Remove_Update(ui);
}

void zUIMgr::Remove_PreUpdate(_zUI* ui)
{
    if (ui->preUpdateIndex < m_preUpdateStart)
    {
        if (ui->preUpdateIndex != m_preUpdateStart - 1)
        {
            _zUI* r5 = m_preUpdate[m_preUpdateStart - 1];

            m_preUpdate[ui->preUpdateIndex] = r5;
            r5->preUpdateIndex = ui->preUpdateIndex;
        }

        m_preUpdateStart--;
    }
    else
    {
        if (ui->preUpdateIndex != m_preUpdateEnd + 1)
        {
            _zUI* r5 = m_preUpdate[m_preUpdateEnd + 1];

            m_preUpdate[ui->preUpdateIndex] = r5;
            r5->preUpdateIndex = ui->preUpdateIndex;
        }

        m_preUpdateEnd++;
    }
}

void zUIMgr::Remove_Update(_zUI* ui)
{
    if (ui->updateIndex < m_updateStart)
    {
        if (ui->updateIndex != m_updateStart - 1)
        {
            _zUI* r5 = m_update[m_updateStart - 1];

            m_update[ui->updateIndex] = r5;
            r5->updateIndex = ui->updateIndex;
        }

        m_updateStart--;
    }
    else
    {
        if (ui->updateIndex != m_updateEnd + 1)
        {
            _zUI* r5 = m_update[m_updateEnd + 1];

            m_update[ui->updateIndex] = r5;
            r5->updateIndex = ui->updateIndex;
        }

        m_updateEnd++;
    }
}

void zUIMgr::Add(_zUI* ui)
{
    Add_PreUpdate(ui);
    Add_Update(ui);
}

void zUIMgr::Add_PreUpdate(_zUI* ui)
{
    if (ui->uiFlags & 0x8 && (ui->uiFlags & 0x2 || ui->uiFlags & 0x1))
    {
        ui->preUpdateIndex = m_preUpdateStart;
        m_preUpdate[m_preUpdateStart++] = ui;
    }
    else
    {
        ui->preUpdateIndex = m_preUpdateEnd;
        m_preUpdate[m_preUpdateEnd--] = ui;
    }
}

void zUIMgr::Add_Update(_zUI* ui)
{
    if (xEntIsVisible(ui))
    {
        ui->updateIndex = m_updateStart;
        m_update[m_updateStart++] = ui;
    }
    else
    {
        ui->updateIndex = m_updateEnd;
        m_update[m_updateEnd--] = ui;
    }
}

void zUI_Init()
{
    init_tweaks();
}

void zUI_Init(void* ent, void* asset)
{
    zUI_Init((_zUI*)ent, (xEntAsset*)asset);
}

namespace
{
    xModelInstance* load_model(uint32 id)
    {
        uint32 size;
        void* data;

        data = xSTFindAsset(xStrHashCat(id, _stringBase0_54), &size);

        if (data)
        {
            return zEntRecurseModelInfo(data, NULL);
        }

        data = xSTFindAsset(id, &size);

        if (!data)
        {
            data = xSTFindAsset(xStrHashCat(id, _stringBase0_54 + 6), &size);
        }

        if (!data)
        {
            return NULL;
        }

        return xModelInstanceAlloc((RpAtomic*)data, NULL, 0, 0, NULL);
    }

    void load_anim_list(_zUI& ui)
    {
        if (ui.model)
        {
            zUIAsset& a = *ui.sasset;

            if (a.animListID)
            {
                ui.atbl = NULL;

                int32 used = zAnimListGetNumUsed(a.animListID);

                if (used > 0)
                {
                    ui.atbl = zAnimListGetTable(a.animListID);

                    xAnimPoolAlloc(&globals.sceneCur->mempool, &ui, ui.atbl, ui.model);

                    xAnimState* ast = xAnimTableGetState(ui.atbl, _stringBase0_54 + 11);

                    if (ast)
                    {
                        xAnimSingle* single = ui.model->Anim->Single;

                        single->State = ast;
                        single->Time = 0.0f;
                        single->CurrentSpeed = 1.0f;
                    }
                }
            }
        }
    }
} // namespace

void zUI_Init(_zUI* ent, xEntAsset* asset)
{
    zUIAsset* sasset = (zUIAsset*)asset;

    xEntInit(ent, asset);

    ent->collType = XENT_COLLTYPE_NONE;
    ent->bound.type = XBOUND_TYPE_NA;
    ent->sasset = sasset;
    ent->pflags = 0;

    if (ent->baseType == eBaseTypeUI && sasset->modelInfoID)
    {
        ent->model = load_model(sasset->modelInfoID);
        load_anim_list(*ent);
    }

    ent->penby = XENT_COLLTYPE_NONE;
    ent->chkby = XENT_COLLTYPE_NONE;
    ent->update = (xEntUpdateCallback)zUI_Update;
    ent->move = NULL;
    ent->eventFunc = zUIEventCB;

    if (ent->linkCount)
    {
        ent->link = (xLinkAsset*)(sasset + 1);
    }

    ent->eventFunc = zUIEventCB;
    ent->uiFlags = sasset->uiFlags;

    if (ent->uiFlags & 0x4)
    {
        ent->render = NULL;
    }

    zEntReset(ent);
    refresh_model(*ent);

    sSortedCount = 0;

    if (ent->asset->surfaceID)
    {
        xSurface* surf = (xSurface*)xSceneResolvID(g_xSceneCur, ent->asset->surfaceID);

        if (surf)
        {
            surf->type = XSURFACE_TYPE_3;
            surf->ent = ent;

            xModelInstance* minst = ent->model;

            while (minst)
            {
                minst->Surf = surf;
                minst = minst->Next;
            }
        }
    }

    cKeyUIid1off = xStrHash(_stringBase0_54 + 16);
    cKeyUIid2off = xStrHash(_stringBase0_54 + 29);
    cKeyUIid3off = xStrHash(_stringBase0_54 + 42);
    cKeyUIid4off = xStrHash(_stringBase0_54 + 55);
    cKeyUIid1on = xStrHash(_stringBase0_54 + 68);
    cKeyUIid2on = xStrHash(_stringBase0_54 + 80);
    cKeyUIid3on = xStrHash(_stringBase0_54 + 92);
    cKeyUIid4on = xStrHash(_stringBase0_54 + 104);
}

void zUI_Save(_zUI* ent, xSerial* s)
{
    zEntSave(ent, s);
}

void zUI_Load(_zUI* ent, xSerial* s)
{
    zEntLoad(ent, s);
}

void zUI_Reset(_zUI* ent)
{
    zEntReset(ent);
    refresh_model(*ent);

    ent->pflags = 0;
    ent->penby |= XENT_COLLTYPE_PLYR; // interesting...
    ent->chkby = XENT_COLLTYPE_NONE;
    ent->uiFlags = ent->sasset->uiFlags;

    sSortedCount = 0;

    // non-matching: epilogue
}

void zUI_PreUpdate(_zUI* ent, xScene*, float32)
{
    _zUI* ui = ent;

    for (int32 i = 0; i < 1; i++)
    {
        if (globals.firstStartPressed)
        {
        }

        _tagxPad* pad;

        switch (i)
        {
        case 0:
        {
            pad = globals.pad0;
            break;
        }
        case 1:
        {
            pad = globals.pad1;
            break;
        }
        case 2:
        {
            pad = globals.pad2;
            break;
        }
        case 3:
        default:
        {
            pad = globals.pad3;
            break;
        }
        }

        if (pad && pad->pressed && ui->uiFlags & 0x4 && (ui->uiFlags & 0x2 || ui->uiFlags & 0x1))
        {
            if (gTrcPad[0].state == TRC_PadInserted)
            {
                if (pad->pressed & XPAD_BUTTON_UP)
                {
                    ui->uiButton |= XPAD_BUTTON_UP;
                }
                else if (pad->pressed & XPAD_BUTTON_DOWN)
                {
                    ui->uiButton |= XPAD_BUTTON_DOWN;
                }
                else if (pad->pressed & XPAD_BUTTON_LEFT)
                {
                    ui->uiButton |= XPAD_BUTTON_LEFT;
                }
                else if (pad->pressed & XPAD_BUTTON_RIGHT)
                {
                    ui->uiButton |= XPAD_BUTTON_RIGHT;
                }

                if (pad->pressed & XPAD_BUTTON_START)
                {
                    ui->uiButton |= XPAD_BUTTON_START;
                }

                if (pad->pressed & XPAD_BUTTON_SELECT)
                {
                    ui->uiButton |= XPAD_BUTTON_SELECT;
                }

                if (pad->pressed & XPAD_BUTTON_R1)
                {
                    ui->uiButton |= XPAD_BUTTON_R1;
                }

                if (pad->pressed & XPAD_BUTTON_R2)
                {
                    ui->uiButton |= XPAD_BUTTON_R2;
                }

                if (pad->pressed & XPAD_BUTTON_L1)
                {
                    ui->uiButton |= XPAD_BUTTON_L1;
                }

                if (pad->pressed & XPAD_BUTTON_L2)
                {
                    ui->uiButton |= XPAD_BUTTON_L2;
                }

                if (pad->pressed & XPAD_BUTTON_X)
                {
                    ui->uiButton |= XPAD_BUTTON_X;
                }

                if (pad->pressed & XPAD_BUTTON_O)
                {
                    ui->uiButton |= XPAD_BUTTON_O;
                }

                if (pad->pressed & XPAD_BUTTON_SQUARE)
                {
                    ui->uiButton |= XPAD_BUTTON_SQUARE;
                }

                if (pad->pressed & XPAD_BUTTON_TRIANGLE)
                {
                    ui->uiButton |= XPAD_BUTTON_TRIANGLE;
                }

                if (ui->uiButton)
                {
                    ui->uiFlags |= 0x40;
                }
            }
            else if (globals.firstStartPressed)
            {
                if (pad->pressed & 0x1)
                {
                    pad->pressed &= ~XPAD_BUTTON_START;
                    gTrcPad[0].state = TRC_PadInserted;

                    xTRCReset();
                }
            }
            else if (pad->pressed & 0x1 && (ui->asset->id == xStrHash(_stringBase0_54 + 116) ||
                                            ui->asset->id == xStrHash(_stringBase0_54 + 137)))
            {
                globals.currentActivePad = i;

                gTrcPad[0].state = TRC_PadInserted;
                gTrcPad[0].id = i;

                _tagxPad* p = iPadEnable(&mPad[i], i);

                xPadRumbleEnable(i, 1);

                globals.pad0 = p;

                ui->uiButton |= XPAD_BUTTON_START;

                globals.firstStartPressed = 1;
            }
        }
    }
}

void zUI_Update(_zUI* ent, xScene*, float32 dt)
{
    if (xEntIsVisible(ent) && ent->model && (!(ent->uiFlags & 0x4) || !ent->sasset->textureID))
    {
        xModelUpdate(ent->model, dt);
        xModelEval(ent->model);
    }

    if (ent->uiButton && gTrcPad[0].state == TRC_PadInserted)
    {
        if (ent->uiButton & XPAD_BUTTON_UP)
        {
            zEntEvent(ent, ent, eEventPadPressUp);
        }
        else if (ent->uiButton & XPAD_BUTTON_DOWN)
        {
            zEntEvent(ent, ent, eEventPadPressDown);
        }
        else if (ent->uiButton & XPAD_BUTTON_LEFT)
        {
            zEntEvent(ent, ent, eEventPadPressLeft);
        }
        else if (ent->uiButton & XPAD_BUTTON_RIGHT)
        {
            zEntEvent(ent, ent, eEventPadPressRight);
        }
        else if (ent->uiButton & XPAD_BUTTON_START)
        {
            zEntEvent(ent, ent, eEventPadPressStart);
        }
        else if (ent->uiButton & XPAD_BUTTON_SELECT)
        {
            zEntEvent(ent, ent, eEventPadPressSelect);
        }
        else if (ent->uiButton & XPAD_BUTTON_R1)
        {
            zEntEvent(ent, ent, eEventPadPressR1);
            ent->uiButton = XPAD_BUTTON_R1;
        }
        else if (ent->uiButton & XPAD_BUTTON_R2)
        {
            zEntEvent(ent, ent, eEventPadPressR2);
            ent->uiButton = XPAD_BUTTON_R2;
        }
        else if (ent->uiButton & XPAD_BUTTON_L1)
        {
            zEntEvent(ent, ent, eEventPadPressL1);
        }
        else if (ent->uiButton & XPAD_BUTTON_L2)
        {
            zEntEvent(ent, ent, eEventPadPressL2);
        }
        else if (ent->uiButton & XPAD_BUTTON_X)
        {
            zEntEvent(ent, ent, eEventPadPressX);
        }
        else if (ent->uiButton & XPAD_BUTTON_O)
        {
            zEntEvent(ent, ent, eEventPadPressO);
        }
        else if (ent->uiButton & XPAD_BUTTON_TRIANGLE)
        {
            zEntEvent(ent, ent, eEventPadPressTriangle);
        }
        else if (ent->uiButton & XPAD_BUTTON_SQUARE)
        {
            zEntEvent(ent, ent, eEventPadPressSquare);
        }

        ent->uiFlags &= ~0x40;
    }
}

static xBase* zUIRenderIteratorInsert(xBase* b, zScene*, void*)
{
    sSorted[sSortedCount++] = (_zUI*)b;
    return b;
}

int32 iRenderQSort_Face(const void* arg1, const void* arg2)
{
    _zUI* f1 = *(_zUI**)arg1;
    _zUI* f2 = *(_zUI**)arg2;

    bool font1, font2;

    font1 = (f1->baseType == eBaseTypeUIFont);
    font2 = (f2->baseType == eBaseTypeUIFont);

    if (font1 && !font2)
    {
        return 1;
    }

    if (font2 && !font1)
    {
        return -1;
    }

    font1 = (f1->baseType == eBaseTypeUI && f1->sasset->textureID == 0);
    font2 = (f2->baseType == eBaseTypeUI && f2->sasset->textureID == 0);

    if (font1 && !font2)
    {
        return 1;
    }

    if (!font1 && font2)
    {
        return -1;
    }

    if (f1->sasset->pos.z < f2->sasset->pos.z)
    {
        return 1;
    }

    if (f1->sasset->pos.z > f2->sasset->pos.z)
    {
        return -1;
    }

    return 0;
}

void zUIRenderAll()
{
    // non-matching: floats are epic

    ushift += 0.05f;

    if (ushift >= 2.0f)
    {
        ushift -= 2.0f;
    }

    if (!sSortedCount)
    {
        zSceneForAllBase(zUIRenderIteratorInsert, eBaseTypeUI, NULL);
        zSceneForAllBase(zUIRenderIteratorInsert, eBaseTypeUIFont, NULL);

        if (sSortedCount > 1)
        {
            qsort(sSorted, sSortedCount, sizeof(_zUI*), iRenderQSort_Face);
        }
    }

    bool rendering_models = false;

    for (int32 i = 0; i < sSortedCount; i++)
    {
        if (xEntIsVisible(sSorted[i]))
        {
            if (sSorted[i]->baseType == eBaseTypeUI)
            {
                if (!rendering_models && !sSorted[i]->sasset->textureID)
                {
                    zRenderState(SDRS_AlphaModels);
                    rendering_models = true;
                }

                zUI_Render(sSorted[i]);
            }
            else
            {
                if (zGameIsPaused())
                {
                    if (!(((zUIFontAsset*)sSorted[i]->sasset)->uiFontFlags & 0x100))
                    {
                        zUIFont_Render(sSorted[i]);
                    }
                }
                else
                {
                    zUIFont_Render(sSorted[i]);
                }
            }
        }
    }

    debug_render();
}

void zUI_Render(xEnt* ent)
{
    static xVec3 from = { 0.0f, 0.0f, -1.0f };
    static xVec3 to = { 0.0f, 0.0f, 0.0f };

    _zUI* ui = (_zUI*)ent;
    if (xScrFxIsLetterbox())
    {
        if (ent->id == cKeyUIid1off || ent->id == cKeyUIid2off || ent->id == cKeyUIid3off ||
            ent->id == cKeyUIid4off || ent->id == cKeyUIid1on || ent->id == cKeyUIid2on ||
            ent->id == cKeyUIid3on || ent->id == cKeyUIid4on)
        {
            return;
        }
    }

    if (ui->uiFlags & 4)
    {
        if (xEntIsVisible(ent))
        {
            if (ui->sasset->textureID)
            {
                RwTexture* texture = (RwTexture*)xSTFindAsset(ui->sasset->textureID, 0);

                if (texture != NULL && texture->raster != NULL)
                {
                    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, texture->raster);
                }

                RwRaster* raster = texture->raster;
                uint8 r = 0xFF;
                uint8 g = 0xFF;
                uint8 b = 0xFF;
                uint8 a = 0xFF;
                float32 w = 640.0f;
                float32 h = 480.0f;

                float32 u1 = ui->sasset->uva[0];
                float32 v1 = ui->sasset->uva[1];
                float32 u2 = ui->sasset->uvb[0];
                float32 v2 = ui->sasset->uvb[1];
                float32 u3 = ui->sasset->uvc[0];
                float32 v3 = ui->sasset->uvc[1];
                float32 u4 = ui->sasset->uvd[0];
                float32 v4 = ui->sasset->uvd[1];
                float32 x1 = w * ui->sasset->pos.x / w;
                float32 y1 = h * ui->sasset->pos.y / h;
                float32 x2 = w * (ui->sasset->pos.x + ui->sasset->dim[0]) / w;
                float32 y2 = h * (ui->sasset->pos.y + ui->sasset->dim[1]) / h;

                float32 z = RwIm2DGetNearScreenZ();
                float32 cz = z;

                if ((float)iabs(z) <= 0.00001f)
                {
                    cz = z >= 0.0f ? 0.00001f : -0.00001f;
                }

                RwIm2DVertexSetIntRGBA(&Vertex[0], 0xFF, 0xFF, 0xFF, 0xFF);
                RwIm2DVertexSetIntRGBA(&Vertex[1], 0xFF, 0xFF, 0xFF, 0xFF);
                RwIm2DVertexSetIntRGBA(&Vertex[2], 0xFF, 0xFF, 0xFF, 0xFF);
                RwIm2DVertexSetIntRGBA(&Vertex[3], 0xFF, 0xFF, 0xFF, 0xFF);

                RwIm2DVertexSetScreenX(&Vertex[0], x1);
                RwIm2DVertexSetScreenY(&Vertex[0], y1);
                RwIm2DVertexSetScreenZ(&Vertex[0], cz);
                RwIm2DVertexSetU(&Vertex[0], u1, 0);
                RwIm2DVertexSetV(&Vertex[0], v1, 0);

                RwIm2DVertexSetScreenX(&Vertex[1], x1);
                RwIm2DVertexSetScreenY(&Vertex[1], y2);
                RwIm2DVertexSetScreenZ(&Vertex[1], cz);
                RwIm2DVertexSetU(&Vertex[1], u4, 0);
                RwIm2DVertexSetV(&Vertex[1], v4, 0);

                RwIm2DVertexSetScreenX(&Vertex[2], x2);
                RwIm2DVertexSetScreenY(&Vertex[2], y2);
                RwIm2DVertexSetScreenZ(&Vertex[2], cz);
                RwIm2DVertexSetU(&Vertex[2], u3, 0);
                RwIm2DVertexSetV(&Vertex[2], v3, 0);

                RwIm2DVertexSetScreenX(&Vertex[3], x2);
                RwIm2DVertexSetScreenY(&Vertex[3], y1);
                RwIm2DVertexSetScreenZ(&Vertex[3], cz);
                RwIm2DVertexSetU(&Vertex[3], u2, 0);
                RwIm2DVertexSetV(&Vertex[3], v2, 0);

                // For some reason this is done twice.
                RwIm2DVertexSetIntRGBA(&Vertex[0], 0xFF, 0xFF, 0xFF, 0xFF);
                RwIm2DVertexSetIntRGBA(&Vertex[1], 0xFF, 0xFF, 0xFF, 0xFF);
                RwIm2DVertexSetIntRGBA(&Vertex[2], 0xFF, 0xFF, 0xFF, 0xFF);
                RwIm2DVertexSetIntRGBA(&Vertex[3], 0xFF, 0xFF, 0xFF, 0xFF);

                zRenderState(SDRS_Default);
                RwRenderStateSet(rwRENDERSTATEFOGENABLE, 0);
                RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
                RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);
                RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)1);
                RwRenderStateSet(rwRENDERSTATESHADEMODE, (void*)rwSHADEMODEFLAT);
                RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
                RwIm2DRenderIndexedPrimitive(rwPRIMTYPETRILIST, Vertex, 4, Index, 6);
            }
            else if (ui->model != NULL)
            {
                // zUIAsset & a;
                basic_rect<float32> r;
                r.x = ui->sasset->pos.x / 640.0f;
                r.y = ui->sasset->pos.y / 480.0f;
                r.w = ui->sasset->dim[0] / 640.0f;
                r.h = ui->sasset->dim[1] / 480.0f;

                if (r.w <= 0.0f || r.h <= 0.0f)
                {
                    return;
                }

                uint32 srcblend = XMODELINSTANCE_GET_SRCBLEND(ent->model);
                uint32 destblend = XMODELINSTANCE_GET_DSTBLEND(ent->model);
                RwRenderStateSet(rwRENDERSTATESRCBLEND,
                                 (void*)(srcblend ? srcblend : rwBLENDSRCALPHA));
                RwRenderStateSet(rwRENDERSTATEDESTBLEND,
                                 (void*)(destblend ? destblend : rwBLENDINVSRCALPHA));

                if ((ent->model->PipeFlags & 0b1100) == rwBLENDINVSRCCOLOR)
                {
                    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, 0);
                    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, 0);
                }

                xEntSetupPipeline(ent->model);

                ent->model->Scale.assign(1.0f, 1.0f, 1.0f);
                xModelRender2D(*ent->model, r, from, to);
                xEntRestorePipeline(ent->model);

                if ((ent->model->PipeFlags & 0b1100) == rwBLENDINVSRCCOLOR)
                {
                    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)1);
                    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)1);
                }
            }
        }
    }
    else
    {
        xEntRender(ent);
    }
}

int32 zUIEventCB(xBase*, xBase* to, uint32 toEvent, const float32* toParam, xBase*)
{
    _zUI* s = (_zUI*)to;

    switch (toEvent)
    {
    case eEventVisible:
    {
        xEntShow(s);
        gUIMgr.Touch(s);
        break;
    }
    case eEventInvisible:
    {
        xEntHide(s);
        gUIMgr.Touch(s);
        break;
    }
    case eEventReset:
    {
        zUI_Reset(s);
        break;
    }
    case eEventUISelect:
    {
        if (s->id == xStrHash(_stringBase0_54 + 161))
        {
            xSndPauseCategory(SND_CAT_UI, 0);
        }

        s->uiFlags |= 0x2;

        gUIMgr.Touch(s);

        break;
    }
    case eEventUIUnselect:
    {
        if (s->uiFlags & 0x2)
        {
            s->uiFlags ^= 0x2;
        }

        if (s->id == xStrHash(_stringBase0_54 + 161))
        {
            xSndPauseCategory(SND_CAT_UI, 1);
        }

        gUIMgr.Touch(s);

        break;
    }
    case eEventUIFocusOn:
    {
        s->uiFlags |= 0x8;

        gUIMgr.Touch(s);

        if (s->uiFlags & 0x10)
        {
            zEntEvent(s, s, eEventVisible);
        }

        break;
    }
    case eEventUIFocusOff:
    {
        if (s->uiFlags & 0x8)
        {
            s->uiFlags ^= 0x8;
        }

        gUIMgr.Touch(s);

        if (s->uiFlags & 0x20)
        {
            zEntEvent(s, s, eEventInvisible);
        }

        break;
    }
    case eEventUIFocusOn_Select:
    {
        zEntEvent(s, s, eEventUIFocusOn);
        zEntEvent(s, s, eEventUISelect);
        break;
    }
    case eEventUIFocusOff_Unselect:
    {
        zEntEvent(s, s, eEventUIFocusOff);
        zEntEvent(s, s, eEventUIUnselect);
        break;
    }
    case eEventUIChangeTexture:
    {
        if (s->sasset)
        {
            uint32 theTextureID = *(uint32*)&toParam[0];

            if (theTextureID)
            {
                RwTexture* texture = (RwTexture*)xSTFindAsset(theTextureID, NULL);

                if (texture)
                {
                    s->sasset->textureID = theTextureID;
                }
                else
                {
                    s->sasset->textureID = 0;
                }
            }
            else
            {
                s->sasset->textureID = 0;
            }
        }

        break;
    }
    }

    return 1;
}

// clang-format off

/**************************    PAUSE MENU   *********************************
 * This array defines the angle and character that the player will start with
 * for each "task" in the game.
 * 
 * Each entry has the following format:
 * 
 *   ang, player
 * 
 * ang - the starting angle in degrees
 * player - the starting character, can be one of the following values:
 *   eCurrentPlayerSpongeBob (SpongeBob)
 *   eCurrentPlayerPatrick   (Patrick)
 *   eCurrentPlayerSandy     (Sandy)
 */
static menuWorldInfo sWorldInfo[] =
{
    // Bikini Bottom
    322, eCurrentPlayerSpongeBob, // On Top of the Pineapple
    322, eCurrentPlayerSpongeBob, // On Top of Shady Shoals
    322, eCurrentPlayerSpongeBob, // On Top of the Chum Bucket
    200, eCurrentPlayerSpongeBob, // SpongeBob's Closet
    45,  eCurrentPlayerSpongeBob, // Annoy Squidward
    315, eCurrentPlayerSpongeBob, // Ambush at the Tree Dome
    190, eCurrentPlayerSpongeBob, // Infestation at the Krusty Krab
    270, eCurrentPlayerSpongeBob, // A Wall Jump in the Bucket

    // Jellyfish Fields
    180, eCurrentPlayerSpongeBob, // Top of the Hill
    55,  eCurrentPlayerSpongeBob, // Cowa-Bungee!
    210, eCurrentPlayerPatrick,   // Spelunking
    180, eCurrentPlayerSpongeBob, // Patrick's Dilemma
    180, eCurrentPlayerPatrick,   // Navigate the Canyons and Mesas
    50,  eCurrentPlayerPatrick,   // Drain the Lake
    345, eCurrentPlayerSpongeBob, // Slide Leap
    105, eCurrentPlayerSpongeBob, // Defeat King Jellyfish

    // Downtown Bikini Bottom
    90,  eCurrentPlayerSpongeBob, // End of the Road
    180, eCurrentPlayerSandy,     // Learn Sandy's Moves
    338, eCurrentPlayerSpongeBob, // Tikis Go Boom
    180, eCurrentPlayerSandy,     // Across the Rooftops
    180, eCurrentPlayerSandy,     // Swingin' Sandy
    180, eCurrentPlayerSpongeBob, // Ambush in the Lighthouse
    180, eCurrentPlayerSpongeBob, // Extreme Bungee
    270, eCurrentPlayerSpongeBob, // Come Back with the Cruise Bubble

    // Goo Lagoon
    225, eCurrentPlayerSpongeBob, // King of the Castle
    300, eCurrentPlayerSpongeBob, // Connect the Towers
    260, eCurrentPlayerSpongeBob, // Save the Children
    225, eCurrentPlayerPatrick,   // Over the Moat
    270, eCurrentPlayerSpongeBob, // Through the Sea Caves
    1,   eCurrentPlayerPatrick,   // Clean Out the Bumper Boats
    335, eCurrentPlayerPatrick,   // Slip and Slide Under the Pier
    350, eCurrentPlayerSpongeBob, // Tower Bungee

    // Poseidome
    -1000000000, eCurrentPlayerSpongeBob, // Rumble at the Poseidome
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,

    // Rock Bottom
    90,  eCurrentPlayerSpongeBob, // Get to the Museum
    90,  eCurrentPlayerSpongeBob, // Slip Sliding Away
    90,  eCurrentPlayerSpongeBob, // Return the Museum's Art
    345, eCurrentPlayerSandy,     // Swingalong Spatula
    180, eCurrentPlayerSpongeBob, // Plundering Robots in the Museum
    280, eCurrentPlayerSpongeBob, // Across the Trench of Darkness
    1,   eCurrentPlayerSandy,     // Lasers are Fun and Good for You
    305, eCurrentPlayerSandy,     // How in Tarnation Do You Get There?

    // Mermalair
    90,  eCurrentPlayerSpongeBob, // Top of the Entrance Area
    225, eCurrentPlayerSpongeBob, // Top of the Computer Area
    30,  eCurrentPlayerSpongeBob, // Shut Down the Security System
    210, eCurrentPlayerPatrick,   // The Funnel Machines
    180, eCurrentPlayerPatrick,   // The Spinning Towers of Power
    45,  eCurrentPlayerSpongeBob, // Top of the Security Tunnel
    45,  eCurrentPlayerSpongeBob, // Complete the Rolling Ball Room
    -1000000000, eCurrentPlayerSpongeBob, // Defeat Prawn

    // Sand Mountain
    270, eCurrentPlayerSpongeBob, // Frosty Bungee
    270, eCurrentPlayerSandy,     // Top of the Lodge
    120, eCurrentPlayerSpongeBob, // Defeat Robots on Guppy Mound
    120, eCurrentPlayerSpongeBob, // Beat Mrs. Puff's Time
    130, eCurrentPlayerSpongeBob, // Defeat Robots on Flounder Hill
    130, eCurrentPlayerSpongeBob, // Beat Bubble Buddy's Time
    180, eCurrentPlayerSpongeBob, // Defeat Robots on Sand Mountain
    180, eCurrentPlayerSpongeBob, // Beat Larry's Time

    // Industrial Park
    -1000000000, eCurrentPlayerSpongeBob, // Robo-Patrick Ahoy!
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,

    // Kelp Forest
    1,   eCurrentPlayerSpongeBob, // Through the Woods
    90,  eCurrentPlayerSpongeBob, // Find all the Lost Campers
    180, eCurrentPlayerPatrick,   // Tiki Roundup
    138, eCurrentPlayerPatrick,   // Down in the Swamp
    160, eCurrentPlayerSpongeBob, // Through the Kelp Caves
    160, eCurrentPlayerSpongeBob, // Power Crystal Crisis
    200, eCurrentPlayerSpongeBob, // Kelp Vine Slide
    200, eCurrentPlayerSpongeBob, // Beat Mermaid Man's Time

    // Flying Dutchman's Graveyard
    225, eCurrentPlayerSpongeBob, // Top of the Entrance Area
    50,  eCurrentPlayerSpongeBob, // A Path through the Goo
    180, eCurrentPlayerSpongeBob, // Goo Tanker Ahoy!
    225, eCurrentPlayerSpongeBob, // Top of the Stack of Ships
    60,  eCurrentPlayerSpongeBob, // Shipwreck Bungee
    250, eCurrentPlayerSpongeBob, // Destroy the Robot Ship
    250, eCurrentPlayerSpongeBob, // Get Aloft There, Matey!
    130, eCurrentPlayerSandy,     // Defeat the Flying Dutchman

    // SpongeBob's Dream
    315, eCurrentPlayerSpongeBob, // Across the Dreamscape
    315, eCurrentPlayerSpongeBob, // Follow the Bouncing Ball
    180, eCurrentPlayerSandy,     // Slidin' Texas Style
    70,  eCurrentPlayerSandy,     // Swingers Ahoy
    135, eCurrentPlayerSpongeBob, // Music is in the Ear of the Beholder
    180, eCurrentPlayerSpongeBob, // Krabby Patty Platforms
    1,   eCurrentPlayerSpongeBob, // Super Bounce
    90,  eCurrentPlayerSpongeBob, // Here You Go

    // Chum Bucket Lab
    -1000000000, eCurrentPlayerSpongeBob, // Kah - Rah - Tae!
    -1000000000, eCurrentPlayerSpongeBob, // The Small Shall Rule... or Not
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,
    -1000000000, eCurrentPlayerSpongeBob,

    // Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick
    180, eCurrentPlayerSpongeBob, // Return 10 Socks to Patrick

    // Mr. Krabs
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 3,000 Shiny Objects
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 3,500 Shiny Objects
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 4,000 Shiny Objects
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 4,500 Shiny Objects
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 5,000 Shiny Objects
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 5,500 Shiny Objects
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 6,500 Shiny Objects
    150, eCurrentPlayerSpongeBob, // Pay Mr. Krabs 7,500 Shiny Objects
};
// clang-format on

#define WORLD_COUNT (sizeof(sWorldInfo) / sizeof(sWorldInfo[0]))

#define WORLD_HB 0 // Bikini Bottom
#define WORLD_JF 1 // Jellyfish Fields
#define WORLD_BB 2 // Downtown Bikini Bottom
#define WORLD_GL 3 // Goo Lagoon
#define WORLD_B1 4 // Poseidome
#define WORLD_RB 5 // Rock Bottom
#define WORLD_BC 6 // Mermalair
#define WORLD_SM 7 // Sand Mountain
#define WORLD_B2 8 // Industrial Park
#define WORLD_KF 9 // Kelp Forest
#define WORLD_GY 10 // Flying Dutchman's Graveyard
#define WORLD_DB 11 // SpongeBob's Dream
#define WORLD_B3 12 // Chum Bucket Lab
#define WORLD_PAT 13 // Patrick
#define WORLD_KRABS 14 // Mr. Krabs

static menuWorld sWorld[WORLD_COUNT];

_zUI* sTakeTaxi;
_zUI* sNoneTaskDesc;
_zUI* sCurrTaskDesc;
uint32 sCurrWorld;
uint32 sCurrTask;
_zUI* sPauseManager;
_zUI* sConfirmation;
xGroup* sTaxiConfirmGrp;

// This function only matches when using string literals for some reason.
// Need to wait until all strings are decompiled.
void zUI_ParseINI(xIniFile* ini)
{
    char itemName[16];
    char *value, *tok, *ltok;

    strcpy(itemName, "Menu00");

    for (uint32 i = 0; i < WORLD_COUNT; i++)
    {
        uint32 j;

        if (++itemName[5] > '9')
        {
            itemName[5] = '0';
            itemName[4]++;
        }

        value = xIniGetString(ini, itemName, NULL);

        if (!value)
        {
            sWorld[i].worldPrefix[0] = 'H';
            sWorld[i].worldPrefix[1] = 'B';

            j = 0;
        }
        else
        {
            tok = xStrTok(value, " ", &ltok);

            sWorld[i].worldPrefix[0] = tok[0];
            sWorld[i].worldPrefix[1] = tok[1];

            j = 0;

            tok = xStrTok(NULL, " ", &ltok);

            while (tok)
            {
                sWorld[i].task[j].levelSuffix[0] = tok[0];
                sWorld[i].task[j].levelSuffix[1] = tok[1];

                tok = xStrTok(NULL, " ", &ltok);

                j++;
            }
        }

        while (j < sWorld[i].numTasks)
        {
            sWorld[i].task[j].levelSuffix[0] = '0';
            sWorld[i].task[j].levelSuffix[1] = '0';

            j++;
        }
    }
}

static _zUI* findUI(zScene* s, uint32 id)
{
    int32 i;
    _zUI* ui = (_zUI*)s->baseList[eBaseTypeUI];

    for (i = 0; i < s->baseCount[eBaseTypeUI]; i++)
    {
        if (xBaseIsValid(ui) && ui->sasset->id == id)
        {
            break;
        }

        ui++;
    }

    if (i == s->baseCount[eBaseTypeUI])
    {
        return NULL;
    }

    return ui;
}

static zUIFont* findUIFont(zScene* zsc, uint32 id)
{
    int32 i;
    zUIFont* ui = (zUIFont*)zsc->baseList[eBaseTypeUIFont];

    for (i = 0; i < zsc->baseCount[eBaseTypeUIFont]; i++)
    {
        if (xBaseIsValid(ui) && ui->sasset->id == id)
        {
            break;
        }

        ui++;
    }

    if (i == zsc->baseCount[eBaseTypeUIFont])
    {
        return NULL;
    }

    return ui;
}

int32 zUIPortalEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                       xBase* toParamWidget)
{
    int32 result;

    result = zUIFontEventCB(from, to, toEvent, toParam, toParamWidget);

    if (toEvent == eEventUISelect)
    {
        zEntEvent(to, toEvent, sWorld[sCurrWorld].uiSelected, eEventUIFocusOn_Select, NULL, NULL,
                  0);
        zEntEvent(to, toEvent, sWorld[sCurrWorld].task[sCurrTask].uiSelected,
                  eEventUIFocusOn_Select, NULL, NULL, 0);
    }

    return result;
}

void zUI_ScenePortalSetToCurrentLevel(zScene* zsc)
{
    sCurrTaskDesc = NULL;

    for (uint32 i = 0; i < sizeof(sWorld) / sizeof(sWorld[0]); i++)
    {
        uint32 curPrefix = (sWorld[i].worldPrefix[0] << 24) | (sWorld[i].worldPrefix[1] << 16);
        uint32 scnPrefix = zsc->sceneID & ~0xffff;

        if (curPrefix == scnPrefix)
        {
            sCurrWorld = i;
            break;
        }
    }

    sCurrTask = 0;
}

static void init_patsocks(zScene* zsc)
{
    patsock_ui = findUI(zsc, xStrHash(_stringBase0_54 + 199));
    patsock_uif = findUIFont(zsc, xStrHash(_stringBase0_54 + 216));

    // non-matching: instruction order and registers
    patsock_text_buffer[0] = '\0';
    patsock_prev_world = -1;
    patsock_prev_count = -1;
}

void zUI_ScenePortalInit(zScene* zsc)
{
    uint32 i, j;
    char c, c2;
    char tempString[32];
    uint32 uiID;
    _zUI* ui;
    uint32 id;

    init_patsocks(zsc);

    if (zsc->baseCount[eBaseTypeUI] == 0)
    {
        return;
    }

    sWorld[WORLD_HB].numTasks = 8;
    sWorld[WORLD_JF].numTasks = 8;
    sWorld[WORLD_BB].numTasks = 8;
    sWorld[WORLD_GL].numTasks = 8;
    sWorld[WORLD_B1].numTasks = 1;
    sWorld[WORLD_RB].numTasks = 8;
    sWorld[WORLD_BC].numTasks = 8;
    sWorld[WORLD_SM].numTasks = 8;
    sWorld[WORLD_B2].numTasks = 1;
    sWorld[WORLD_KF].numTasks = 8;
    sWorld[WORLD_GY].numTasks = 8;
    sWorld[WORLD_DB].numTasks = 8;
    sWorld[WORLD_B3].numTasks = 2;
    sWorld[WORLD_PAT].numTasks = 8;
    sWorld[WORLD_KRABS].numTasks = 8;

    for (i = 0; i < WORLD_COUNT; i++)
    {
        strcpy(tempString, _stringBase0_54 + 234);

        tempString[0] = sWorld[i].worldPrefix[0];
        tempString[1] = sWorld[i].worldPrefix[1];

        c = '1';

        for (j = 0; j < sWorld[i].numTasks; i++)
        {
            if (c > '9')
            {
                c = '0';
                tempString[15]++;
            }

            tempString[16] = c++;

            if (sWorld[i].task[j].levelSuffix[0] == '0' && sWorld[i].task[j].levelSuffix[1] == '0')
            {
                sWorld[i].task[j].portal.passet = NULL;
            }
            else
            {
                sWorld[i].task[j].portalAsset.assetCameraID = xStrHash(_stringBase0_54 + 252);
                sWorld[i].task[j].portalAsset.assetMarkerID = xStrHash(tempString);
                sWorld[i].task[j].portalAsset.ang = sWorldInfo[i].taskInfo[j].ang;

                if (i == WORLD_PAT || i == WORLD_KRABS)
                {
                    sWorld[i].task[j].portalAsset.sceneID =
                        (sWorld[i].task[j].levelSuffix[1] << 24) |
                        (sWorld[i].task[j].levelSuffix[0] << 16) | 'BH';
                }
                else
                {
                    sWorld[i].task[j].portalAsset.sceneID =
                        (sWorld[i].task[j].levelSuffix[1] << 24) |
                        (sWorld[i].task[j].levelSuffix[0] << 16) | (sWorld[i].worldPrefix[1] << 8) |
                        sWorld[i].worldPrefix[0];
                }

                sWorld[i].task[j].portal.passet = &sWorld[i].task[j].portalAsset;
            }
        }
    }

    for (i = 0; i < WORLD_COUNT; i++)
    {
        strcpy(tempString, _stringBase0_54 + 261);

        tempString[0] = sWorld[i].worldPrefix[0];
        tempString[1] = sWorld[i].worldPrefix[1];

        c = '1';

        for (j = 0; j < sWorld[i].numTasks; j++)
        {
            if (c > '9')
            {
                c = '0';
                tempString[16]++;
            }

            tempString[17] = c;
            c++;

            id = xStrHash(tempString);

            sWorld[i].task[j].counter = (_xCounter*)zSceneFindObject(id);
            sWorld[i].task[j].counter->counterFlags |= XCOUNTER_ISSPATULA;
        }
    }

    strcpy(tempString, _stringBase0_54 + 280);

    c = '1';

    for (i = 0; i < WORLD_COUNT; i++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[12]++;
        }

        tempString[13] = c;
        id = xStrHash(tempString);

        c++;

        sWorld[i].uiSelected = findUI(zsc, id);
    }

    strcpy(tempString, _stringBase0_54 + 295);

    c = '1';

    for (j = 0; j < TASK_COUNT; j++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[13]++;
        }

        tempString[14] = c;
        id = xStrHash(tempString);

        c++;

        ui = findUI(zsc, id);

        for (i = 0; i < WORLD_COUNT; i++)
        {
            sWorld[i].task[j].uiSpatOutline = ui;
        }
    }

    strcpy(tempString, _stringBase0_54 + 311);

    c = '1';

    for (j = 0; j < TASK_COUNT; j++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[8]++;
        }

        tempString[9] = c;
        id = xStrHash(tempString);

        c++;

        ui = findUI(zsc, id);

        for (i = 0; i < WORLD_COUNT; i++)
        {
            sWorld[i].task[j].uiSpatGray = ui;
        }
    }

    strcpy(tempString, _stringBase0_54 + 322);

    c = '1';

    for (j = 0; j < TASK_COUNT; j++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[15]++;
        }

        tempString[16] = c;
        id = xStrHash(tempString);

        c++;

        ui = findUI(zsc, id);

        for (i = 0; i < WORLD_COUNT; i++)
        {
            sWorld[i].task[j].uiSpatGold = ui;
        }
    }

    strcpy(tempString, _stringBase0_54 + 340);

    c = '1';

    for (j = 0; j < TASK_COUNT; j++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[13]++;
        }

        tempString[14] = c;
        id = xStrHash(tempString);

        c++;

        ui = findUI(zsc, id);

        for (i = 0; i < WORLD_COUNT; i++)
        {
            if (sWorld[i].numTasks == TASK_COUNT)
            {
                sWorld[i].task[j].uiSelected = ui;
            }
        }
    }

    strcpy(tempString, _stringBase0_54 + 356);

    c = '1';

    for (j = 0; j < TASK_COUNT; j++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[18]++;
        }

        tempString[19] = c;
        id = xStrHash(tempString);

        c++;

        ui = findUI(zsc, id);

        for (i = 0; i < WORLD_COUNT; i++)
        {
            if (sWorld[i].numTasks == TASK_COUNT_BOSS)
            {
                sWorld[i].task[j].uiSelected = ui;
            }
        }
    }

    strcpy(tempString, _stringBase0_54 + 377);

    c = '1';

    for (j = 0; j < TASK_COUNT; j++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[23]++;
        }

        tempString[24] = c;
        id = xStrHash(tempString);

        c++;

        ui = findUI(zsc, id);

        for (i = 0; i < WORLD_COUNT; i++)
        {
            if (sWorld[i].numTasks == TASK_COUNT_SMALLBOSS)
            {
                sWorld[i].task[j].uiSelected = ui;
            }
        }
    }

    strcpy(tempString, _stringBase0_54 + 403);

    c = '1';

    for (i = 0; i < WORLD_COUNT; i++)
    {
        if (c > '9')
        {
            c = '0';
            tempString[15]++;
        }

        tempString[16] = c;
        c++;

        for (j = 0; j < sWorld[i].numTasks; j++)
        {
            if (c > '9')
            {
                c = '0';
                tempString[17]++;
            }

            tempString[18] = c;
            c++;

            id = xStrHash(tempString);

            sWorld[i].task[j].uiTaskDesc = findUIFont(zsc, id);
        }
    }

    id = xStrHash(_stringBase0_54 + 423);
    sTakeTaxi = findUIFont(zsc, id);

    id = xStrHash(_stringBase0_54 + 442);
    sNoneTaskDesc = findUIFont(zsc, id);

    id = xStrHash(_stringBase0_54 + 462);
    sPauseManager = findUIFont(zsc, id);
    sPauseManager->eventFunc = zUIPortalEventCB;

    id = xStrHash(_stringBase0_54 + 476);
    sConfirmation = findUIFont(zsc, id);

    id = xStrHash(_stringBase0_54 + 493);
    sTaxiConfirmGrp = (xGroup*)zSceneFindObject(id);

    zUI_ScenePortalSetToCurrentLevel(zsc);
}

static void hideWorld()
{
    for (uint32 i = 0; i < TASK_COUNT; i++)
    {
        xEntHide(sWorld[0].task[i].uiSpatOutline);
        xEntHide(sWorld[0].task[i].uiSpatGray);
        xEntHide(sWorld[0].task[i].uiSpatGold);
    }
}

static void showWorld(uint32 world)
{
    for (uint32 i = 0; i < sWorld[world].numTasks; i++)
    {
        switch (sWorld[world].task[i].counter->count)
        {
        case 0:
        {
            xEntShow(sWorld[world].task[i].uiSpatOutline);
            break;
        }
        case 1:
        case 3:
        {
            xEntShow(sWorld[world].task[i].uiSpatGray);
            break;
        }
        case 2:
        {
            xEntShow(sWorld[world].task[i].uiSpatGold);
            break;
        }
        }
    }
}

static void disable_ui(_zUI* ui)
{
    if (ui)
    {
        ui->baseFlags &= ~0x1;
        ui->flags &= ~0x1;
    }
}

static void enable_ui(_zUI* ui)
{
    if (ui)
    {
        ui->baseFlags |= 0x1;
        ui->flags |= 0x1;
    }
}

static void refresh_patsocks(uint32 world)
{
    uint32 count = globals.player.Inv_PatsSock[world];
    uint32 max = globals.player.Inv_PatsSock_Max[world];

    if (world != patsock_prev_world || count != patsock_prev_count)
    {
        // non-matching: instruction order

        patsock_prev_world = world;
        patsock_prev_count = count;

        if (max == 0)
        {
            disable_ui(patsock_ui);
            disable_ui(patsock_uif);

            patsock_text_buffer[0] = '\0';
        }
        else
        {
            if (count > 99)
            {
                count = 99;
            }

            if (max > 99)
            {
                max = 99;
            }

            sprintf(patsock_text_buffer, _stringBase0_54 + 512, count, max);

            enable_ui(patsock_ui);
            enable_ui(patsock_uif);

            if (patsock_uif)
            {
                patsock_uif->text = patsock_text_buffer;
            }
        }
    }
}

void zUI_PortalToKrabs(uint32 taskNum)
{
    xPortalAsset* passet = &sWorld[WORLD_KRABS].task[taskNum].portalAsset;
    int32 c1 = sWorld[WORLD_B1].task[0].counter->count;
    int32 c2 = sWorld[WORLD_B2].task[0].counter->count;
    char tempString[32];

    strcpy(tempString, _stringBase0_54 + 518);

    if (c1 != 2 && c2 != 2)
    {
        // Player has not beaten Poseidome
        // Send them to Area 1 Krabs
        tempString[16] = '1';
    }
    else if (c1 == 2 && c2 != 2)
    {
        // Player has not beaten Industrial Park
        // Send them to Area 2 Krabs
        tempString[16] = '2';
    }
    else if (c1 == 2 && c2 == 2)
    {
        // Player has beaten Poseidome and Industrial Park
        // Send them to Area 3 Krabs
        tempString[16] = '3';
    }

    passet->assetMarkerID = xStrHash(tempString);
}

void zUI_ScenePortalUpdate()
{
    for (uint32 i = 0; i < WORLD_COUNT; i++)
    {
        if (sWorld[i].uiSelected && xEntIsVisible(sWorld[i].uiSelected))
        {
            refresh_patsocks(i);
            hideWorld();
            showWorld(i);

            sCurrWorld = i;

            for (uint32 j = 0; j < sWorld[i].numTasks; j++)
            {
                _zUI* select = sWorld[i].task[j].uiSelected;

                if (select && xEntIsVisible(select))
                {
                    sCurrTask = j;

                    if (sCurrTaskDesc)
                    {
                        xEntHide(sCurrTaskDesc);
                    }

                    sCurrTaskDesc = sWorld[i].task[j].uiTaskDesc;

                    if (sCurrTaskDesc)
                    {
                        xEntShow(sCurrTaskDesc);
                    }

                    if (sWorld[i].task[j].counter->count != 0 || globals.player.g.CheatAlwaysPortal)
                    {
                        xEntHide(sNoneTaskDesc);
                        xEntShow(sTakeTaxi);
                    }
                    else
                    {
                        if (sCurrTaskDesc)
                        {
                            xEntHide(sCurrTaskDesc);
                        }

                        xEntShow(sNoneTaskDesc);
                        xEntHide(sTakeTaxi);
                    }

                    if (select->uiButton & XPAD_BUTTON_X && xEntIsVisible(sConfirmation) &&
                        sWorld[i].task[j].portal.passet &&
                        (sWorld[i].uiSelected->idx > 0 || globals.player.g.CheatAlwaysPortal))
                    {
                        if (i == WORLD_KRABS)
                        {
                            zUI_PortalToKrabs(j);
                        }

                        zSceneSwitch(&sWorld[i].task[j].portal, 1);
                        zGameStateSwitchEvent(eEventDispatcher_SetGameState_SceneSwitch);

                        gPendingPlayer = sWorldInfo[i].taskInfo[j].player;
                    }
                    else if (select->uiButton & XPAD_BUTTON_X && !xEntIsVisible(sConfirmation) &&
                             sWorld[i].task[j].portal.passet &&
                             (sWorld[i].uiSelected->idx > 0 || globals.player.g.CheatAlwaysPortal))
                    {
                        zEntEvent(sTaxiConfirmGrp, eEventUIFocusOn);
                    }

                    return;
                }
            }

            xprintf(_stringBase0_54 + 536);
            return;
        }
    }

    xprintf(_stringBase0_54 + 559);
}

void zUI_ScenePortalSave(xSerial* s)
{
    for (uint32 i = 0; i < WORLD_COUNT; i++)
    {
        for (uint32 j = 0; j < sWorld[i].numTasks; j++)
        {
            s->Write(sWorld[i].task[j].counter->count);
        }
    }
}

void zUI_ScenePortalLoad(xSerial* s)
{
    for (uint32 i = 0; i < WORLD_COUNT; i++)
    {
        for (uint32 j = 0; j < sWorld[i].numTasks; j++)
        {
            s->Read(&sWorld[i].task[j].counter->count);
        }
    }
}

extern "C" {
static void __sinit_zUI_cpp()
{
    cKeyUIid1off = xStrHash(_stringBase0_54 + 16);
    cKeyUIid2off = xStrHash(_stringBase0_54 + 29);
    cKeyUIid3off = xStrHash(_stringBase0_54 + 42);
    cKeyUIid4off = xStrHash(_stringBase0_54 + 55);
    cKeyUIid1on = xStrHash(_stringBase0_54 + 68);
    cKeyUIid2on = xStrHash(_stringBase0_54 + 80);
    cKeyUIid3on = xStrHash(_stringBase0_54 + 92);
    cKeyUIid4on = xStrHash(_stringBase0_54 + 104);
}
}

void xMat3x3Scale(xMat3x3* m, const xVec3* s)
{
    xMat3x3ScaleC(m, s->x, s->y, s->z);
}
