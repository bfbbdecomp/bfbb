#include "zEntDestructObj.h"

#include <types.h>

static zParEmitter* sEmitDust;
static zParEmitter* sEmitXplo;
static zParEmitter* sEmitWeb;
static zParEmitter* sEmitFire;
static zParEmitter* sEmitSmoke;
static zParEmitter* sShrapDefault;

namespace
{
    static void SwapModel(zEntDestructObj* ent, xModelInstance* modelInst)
    {
        xSFXAsset* sfxDestroy;
        xModelInstance* collModel;
        xModelInstance* camcollModel;
        xModelInstance* entModel;

        entModel = ent->model;
        if (entModel != modelInst)
        {
            collModel = ent->collModel;
            if ((collModel != NULL) && (collModel != entModel))
            {
                xModelInstanceFree(collModel);
                ent->collModel = NULL;
            }

            camcollModel = ent->camcollModel;
            if ((camcollModel != NULL) && (camcollModel != (xModelInstance*)ent->model))
            {
                xModelInstanceFree(camcollModel);
                ent->camcollModel = NULL;
            }

            RwMatrixCopyMacro(modelInst->Mat, ent->model->Mat);

            modelInst->Flags &= 0xBBFC;
            modelInst->Flags |= (u16)(ent->model->Flags & 0x4403);
            ent->model = modelInst;
            iBoxForModelLocal(&ent->bound.box.box, modelInst);
            zCollGeom_EntSetup((xEnt*)ent);

            sfxDestroy = ent->sfx_destroy;
            if (sfxDestroy != NULL)
            {
                xSndPlay3D(sfxDestroy->soundAssetID, (f32)sfxDestroy->volume, 0.0f, 0x80U, 0U,
                           &sfxDestroy->pos, 0.0f, (sound_category)SND_CAT_GAME, 0.0f);
            }
        }
    }
} // namespace

void zEntDestructObj_FindFX()
{
    sEmitDust = zParEmitterFind("PAREMIT_DOBJ_DUST");
    sEmitXplo = zParEmitterFind("PAREMIT_DOBJ_XPLO");
    sEmitWeb = zParEmitterFind("PzREMIT_DOBJ_WEB");
    sEmitFire = zParEmitterFind("PAREMIT_FIRE");
    sEmitSmoke = zParEmitterFind("PAREMIT_FIRESMOKE");
    sShrapDefault = (zParEmitter*)xSTFindAsset(xStrHash("destruct_obj_shrapnel"), NULL);
}

void zEntDestructObj_Init(void* ent, void* asset)
{
    zEntDestructObj_Init((zEntDestructObj*)ent, (xEntAsset*)asset);
}

void zEntDestructObj_Init(zEntDestructObj* ent, xEntAsset* asset)
{
    zEntDestructObjAsset* dObjAsset;
    xModelInstance* hitModelInst;
    xModelInstance* destroyModelInst;
    u32 shrapnelDestroyId;
    u32 shrapnelHitId;
    u32 sfxDestroyId;
    u32 sfxHitId;
    u32 hitModelId;
    u32 destroyModelId;
    U8 boundType;
    xModelInstance* destroyModel;
    xModelInstance* hitModel;

    zEntInit((zEnt*)ent, asset, 0x44535452U);

    dObjAsset = (zEntDestructObjAsset*)(asset + 0x1);

    ent->dasset = dObjAsset;
    ent->healthCnt = dObjAsset->health;
    shrapnelDestroyId = dObjAsset->shrapnelID_destroy;

    if (shrapnelDestroyId != NULL)
    {
        ent->shrapnel_destroy = (zShrapnelAsset*)xSTFindAsset(shrapnelDestroyId, NULL);
    }
    else
    {
        ent->shrapnel_destroy = NULL;
    }

    if ((zShrapnelAsset*)ent->shrapnel_destroy == NULL)
    {
        ent->shrapnel_destroy =
            (zShrapnelAsset*)xSTFindAsset(xStrHash("destruct_obj_shrapnel"), NULL);
    }

    shrapnelHitId = dObjAsset->shrapnelID_hit;
    if (shrapnelHitId != NULL)
    {
        ent->shrapnel_hit = (zShrapnelAsset*)xSTFindAsset(shrapnelHitId, NULL);
    }
    else
    {
        ent->shrapnel_hit = NULL;
    }

    if (ent->shrapnel_hit == NULL)
    {
        ent->shrapnel_hit = (zShrapnelAsset*)xSTFindAsset(xStrHash("destruct_obj_shrapnel"), NULL);
    }

    sfxDestroyId = dObjAsset->sfx_destroy;
    if (sfxDestroyId != NULL)
    {
        ent->sfx_destroy = (xSFXAsset*)xSTFindAsset(sfxDestroyId, NULL);
    }
    else
    {
        ent->sfx_destroy = NULL;
    }

    sfxHitId = dObjAsset->sfx_hit;
    if (sfxHitId != 0)
    {
        ent->sfx_hit = (xSFXAsset*)xSTFindAsset(sfxHitId, NULL);
    }
    else
    {
        ent->sfx_hit = NULL;
    }

    ent->penby |= 0x10;
    ent->state = DOBJ_STATE_INIT;
    if (ent->dasset->collType & XENT_COLLTYPE_STAT)
    {
        ent->chkby |= 0x18;
    }
    else
    {
        ent->chkby = 0;
    }

    ent->chkby |= XENT_COLLTYPE_DYN;
    ent->move = (xEntMoveCallback)zEntDestructObj_Move;
    ent->eventFunc = (xBaseEventCB)zEntDestructObjEventCB;
    ent->update = (xEntUpdateCallback)zEntDestructObj_Update;

    if (ent->linkCount != NULL)
    {
        // TODO: This compiles correctly but must be some other data structure, char* as a placeholder to make it work
        ent->link = (xLinkAsset*)((char*)ent->asset + 0x8c);
    }
    else
    {
        ent->link = NULL;
    }

    ent->eventFunc = (xBaseEventCB)zEntDestructObjEventCB;
    ent->throw_target = FALSE;
    boundType = ent->bound.type;
    if (boundType == XBOUND_TYPE_SPHERE)
    {
        if (ent->bound.sph.r <= 2.0f)
        {
            ent->throw_target = TRUE;
        }
    }
    else if (boundType == XBOUND_TYPE_CYL)
    {
        if (ent->bound.cyl.r <= 2.0f)
        {
            ent->throw_target = TRUE;
        }
    }
    else
    {
        if (ent->bound.box.box.upper.x - ent->bound.box.box.lower.x <= 4.0f)
        {
            if (ent->bound.box.box.upper.z - ent->bound.box.box.lower.z <= 4.0f)
            {
                ent->throw_target = TRUE;
            }
        }
    }

    if (!(ent->dasset->dflags & 0x800))
    {
        ent->throw_target = FALSE;
    }

    ent->base_model = ent->model;
    ent->hit_model = NULL;
    hitModelId = dObjAsset->hitModelId;
    if (hitModelId != NULL)
    {
        hitModelInst = (xModelInstance*)xSTFindAsset(hitModelId, NULL);
        if (hitModelInst != NULL)
        {
            ent->hit_model = xEntLoadModel(NULL, (RpAtomic*)hitModelInst);
            RwMatrixCopyMacro(ent->hit_model->Mat, ent->model->Mat);
            hitModel = ent->hit_model;
            hitModel->Flags = (U16)hitModel->Flags & 0xFBFF;
        }
    }

    ent->destroy_model = NULL;
    destroyModelId = dObjAsset->destroyModelId;
    if (destroyModelId != NULL)
    {
        destroyModelInst = (xModelInstance*)xSTFindAsset(destroyModelId, NULL);
        if (destroyModelInst != NULL)
        {
            ent->destroy_model = xEntLoadModel(NULL, (RpAtomic*)destroyModelInst);
            RwMatrixCopyMacro(ent->destroy_model->Mat, ent->model->Mat);
            destroyModel = ent->destroy_model;
            destroyModel->Flags = (U16)destroyModel->Flags & 0xFBFF;
        }
    }

    xEntReset((xEnt*)ent);
    ent->destroy_notify = NULL;
    ent->notify_context = NULL;
}

void zEntDestructObj_Move(zEntDestructObj* ent, xScene* scene, F32 unk, xEntFrame* frame)
{
}

void zEntDestructObj_Update(zEntDestructObj* ent, xScene* scene, F32 dt)
{
    s32 parEmitterCustomFlags;
    xParEmitterCustomSettings emitterCustomSettings;
    f32 fxTimer;
    f32 respawnTimer;

    xEntUpdate((xEnt*)ent, scene, dt);
    if ((u32)ent->healthCnt > 1U)
    {
        ent->state = DOBJ_STATE_INIT;
    }

    if ((xParEmitter*)ent->fx_emitter != NULL)
    {
        fxTimer = ent->fx_timer;
        if (fxTimer > 0.0f)
        {
            ent->fx_timer = fxTimer - dt;

            parEmitterCustomFlags = 0x100;
            emitterCustomSettings.custom_flags = parEmitterCustomFlags;

            emitterCustomSettings.pos = *xEntGetCenter((xEnt*)ent);

            xParEmitterEmitCustom(ent->fx_emitter, dt, &emitterCustomSettings);
        }
    }

    respawnTimer = ent->respawn_timer;
    if (respawnTimer)
    {
        ent->respawn_timer = respawnTimer - dt;
        if (ent->respawn_timer < 0.0f)
        {
            zEntDestructObj_Reset(ent, globals.sceneCur);
        }
    }
}

void zEntDestructObj_Hit(zEntDestructObj* ent, unsigned int mask)
{
    if (ent->dasset->dflags & mask)
    {
        if (mask & 0x8000)
        {
            zEntPlayer_SNDPlayStreamRandom(0U, 0x10U, (_tagePlayerStreamSnd)0x1A,
                                           (_tagePlayerStreamSnd)0x1C, 0.1f);
            zEntPlayer_SNDPlayStreamRandom(0x10U, 0x23U, (_tagePlayerStreamSnd)0x1A,
                                           (_tagePlayerStreamSnd)0x1D, 0.1f);
            zEntPlayer_SNDPlayStreamRandom(0x24U, 0x64U, (_tagePlayerStreamSnd)0x1A,
                                           (_tagePlayerStreamSnd)0x1E, 0.1f);
        }
        zEntEvent((xBase*)ent, 0x3AU);
    }
}

U32 zEntDestructObj_GetHit(zEntDestructObj* ent, unsigned int mask)
{
    s32 hitMask;

    hitMask = ent->dasset->dflags & mask;
    return (u32)(-hitMask | hitMask) >> 0x1FU;
}

void zEntDestructObj_Save(zEntDestructObj* ent, xSerial* s)
{
    zEntSave((zEnt*)ent, s);
    s->Write(ent->state);
}

void zEntDestructObj_Load(zEntDestructObj* ent, xSerial* s)
{
    zEntLoad((zEnt*)ent, s);
    s->Read(&ent->state);
}

void zEntDestructObj_Setup(zEntDestructObj* ent)
{
    zEntSetup((zEnt*)ent);
}

void zEntDestructObj_Reset(zEntDestructObj* ent, xScene* scene)
{
    xEntReset((xEnt*)ent);

    if (ent->flags & 2)
    {
        ent->pflags &= 4;
    }
    else
    {
        ent->pflags = 0;
    }

    ent->healthCnt = ent->dasset->health;
    ent->penby |= 0x18;

    if (ent->dasset->collType & 2)
    {
        ent->chkby |= 0x18;
    }
    else
    {
        ent->chkby = 0;
    }

    ent->bupdate(ent, (xVec3*)&ent->model->Mat->pos);
    ent->chkby = ent->chkby | 4;
    ent->fx_timer = 0.0f;
    ent->respawn_timer = 0.0f;
    ent->fx_emitter = NULL;
    ent->state = DOBJ_STATE_RESET;
    SwapModel(ent, ent->base_model);
    ent->destroy_notify = NULL;
    ent->notify_context = NULL;
}

U32 zEntDestructObj_isDestroyed(zEntDestructObj* ent)
{
    return ent->state == 2 ? TRUE : FALSE;
}

void zEntDestructObj_DestroyFX(zEntDestructObj* ent)
{
    xVec3 entDistanceFromPlayer;
    xSFXAsset* sfxAsset;
    _tagSDRumbleType sdrRumbleType;
    u8 fxType;

    sfxAsset = ent->sfx_destroy;
    if (sfxAsset != NULL)
    {
        xSndPlay3D(sfxAsset->soundAssetID, (F32)sfxAsset->volume, (F32)0.0f, (U32)0x80, (U32)0x0,
                   &sfxAsset->pos, (F32)0.0f, (sound_category)0, (F32)0.0f);
    }

    sdrRumbleType = SDR_Total;
    ent->fx_timer = 0.33f;
    fxType = ent->dasset->fxType;
    switch (fxType)
    {
    case 0:
        ent->fx_emitter = NULL;
        break;
    case 1:
        sdrRumbleType = SDR_DustDestroyedObj;
        ent->fx_emitter = sEmitDust;
        break;
    case 2:
        sdrRumbleType = SDR_XploDestroyedObj;
        ent->fx_emitter = sEmitXplo;
        break;
    case 3:
        sdrRumbleType = SDR_WebDestroyed;
        ent->fx_emitter = sEmitWeb;
        break;
    }

    if (sdrRumbleType != SDR_Total)
    {
        xVec3Sub(&entDistanceFromPlayer, xEntGetPos((xEnt*)ent), xEntGetPos(&globals.player.ent));

        if (xVec3Dot(&entDistanceFromPlayer, &entDistanceFromPlayer) <= 25.0f)
        {
            zRumbleStart((S32)globals.currentActivePad, sdrRumbleType);
        }
    }
}

S32 zEntDestructObjEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* toParamWidget)
{
    zEntDestructObj* s = (zEntDestructObj*)to;

    switch (toEvent) {
    case eEventVisible:
    case eEventFastVisible:
        xEntShow(s);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOn(*s, toParam[1], toParam[2]);
        }
        break;
    case eEventInvisible:
    case eEventFastInvisible:
        xEntHide(s);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOff(*s, toParam[1], toParam[2]);
        }
        break;
    case eEventCollisionOn:
        s->chkby |= (XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC);
        s->bupdate(s, (xVec3*)&s->model->Mat->pos);
        break;
    case eEventCollisionOff:
        s->chkby &= (U8)~(XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC);
        break;
    case eEventCollision_Visible_On:
        s->chkby |= (XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC);
        xEntShow(s);
        s->bupdate(s, (xVec3*)&s->model->Mat->pos);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOn(*s, toParam[1], toParam[2]);
        }
        break;
    case eEventCollision_Visible_Off:
        s->chkby &= (U8)~(XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC);
        xEntHide(s);
        if (toParam && (S32)(0.5f + toParam[0]) == 77) {
            zFXPopOff(*s, toParam[1], toParam[2]);
        }
        break;
    case eEventCameraCollideOn:
        zCollGeom_CamEnable(s);
        break;
    case eEventCameraCollideOff:
        zCollGeom_CamDisable(s);
        break;
    case eEventDestroy:
        if (s->destroy_model) {
            SwapModel(s, s->destroy_model);
        } else {
            s->chkby &= (U8)~(XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC);
            xEntHide(s);
        }
        zEntDestructObj_DestroyFX(s);
        s->state = 2;
        if (s->shrapnel_destroy && s->shrapnel_destroy->initCB) {
            s->shrapnel_destroy->initCB(s->shrapnel_destroy, s->model, NULL, NULL);
        }
        if (s->destroy_notify) {
            s->destroy_notify(*s, s->notify_context);
        }
        if (s->driver) {
            s->driver->driving_count--;
            s->driver = NULL;
        }
        break;
    case eEventReset:
        zEntDestructObj_Reset(s, globals.sceneCur);
        break;
    case eEventAnimPlay:
    case eEventAnimPlayLoop:
    case eEventAnimStop:
    case eEventAnimPause:
    case eEventAnimResume:
    case eEventAnimTogglePause:
    case eEventAnimPlayRandom:
    case eEventAnimPlayMaybe:
        zEntAnimEvent(s, toEvent, toParam);
        break;
    case eEventHit:
        if (s->healthCnt) {
            s->healthCnt--;
            if (s->healthCnt && s->hit_model) {
                SwapModel(s, s->hit_model);
            }
            if (s->healthCnt == 0) {
                zEntEvent(s, s, eEventDestroy);
            }
        }
        break;
    case eEventSetUpdateDistance:
        if (globals.updateMgr) {
            if (toParam[0] <= 0.0f) {
                xUpdateCull_SetCB(globals.updateMgr, s, xUpdateCull_AlwaysTrueCB, NULL);
            } else {
                FloatAndVoid dist;
                dist.f = SQR(toParam[0]);
                xUpdateCull_SetCB(globals.updateMgr, s, xUpdateCull_DistanceSquaredCB, dist.v);
            }
        }
        break;
    case eEventHit_BubbleBounce:
        zEntDestructObj_Hit(s, 0x2000);
        break;
    case eEventHit_BubbleBash:
        zEntDestructObj_Hit(s, 0x4000);
        break;
    case eEventHit_PatrickSlam:
        zEntDestructObj_Hit(s, 0x400);
        break;
    case eEventHit_Throw:
        zEntDestructObj_Hit(s, 0x800);
        break;
    case eEventLaunchShrapnel:
        if (toParamWidget) {
            zShrapnelAsset* shrap = (zShrapnelAsset*)toParamWidget;
            if (shrap->initCB) {
                shrap->initCB(shrap, s->model, NULL, NULL);
            }
        }
        break;
    }

    return 1;
}
