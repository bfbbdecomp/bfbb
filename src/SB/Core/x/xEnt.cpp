#include "xEnt.h"

#include "xEvent.h"
#include "xString.h"
#include "xGroup.h"
#include "xstransvc.h"
#include "xFX.h"
#include "xShadow.h"
#include "xMathInlines.h"
#include "xMath.h"

#include "zBase.h"
#include "zPlatform.h"
#include "zEntDestructObj.h"
#include "zCollGeom.h"
#include "zSurface.h"
#include "zLight.h"
#include "zGrid.h"

#include "iMath3.h"
#include "iCollide.h"
#include "iModel.h"
#include "iMath.h"

#include <string.h>

extern float32 _780; // 1.0f
extern float32 _781_0; // 3.0f
extern float32 _942; // 0.0f
extern float32 _950; // -1.0f
extern float32 _951; // 9.9999997e37f
extern float32 _1095; // 255.0f
extern float64 _1097; // 4.503599627370496e15f
extern float32 _1187; // 0.0017683882f
extern float32 _1229; // 10.0f
extern float32 _1300; // 0.69999999f
extern float32 _1435; // 0.5f
extern float32 _1436; // 0.63f
extern float32 _1437; // 30.0f
extern float32 _1438; // 0.0000099999997f
extern float32 _1541; // 0.78539819f
extern float64 _1593; // 4.503601774854144e15f
extern float32 _1724; // 0.167f
extern float32 _1725; // -0.86602497f
extern float32 _1818; // 1.0471976f
extern float32 _1819; // 0.001f
extern float32 _1820; // 0.64999998f
extern float32 _1821; // 1.5f

extern xVec3 _1405_0; // { 0, 0, 0 }

extern const char _stringBase0_4[];

extern float32 nsn_angle;
extern float32 sEntityTimePassed;
extern xBox all_ents_box;
extern int32 all_ents_box_init;
extern int32 setMaterialTextureRestore;
extern int32 sSetPipeline;
extern RxPipeline* oldPipe;
extern int32 xent_entent;

namespace
{
    namespace anim_coll
    {
        void reset(xEnt& ent)
        {
            if (!ent.anim_coll)
            {
                ent.anim_coll = (xEnt::anim_coll_data*)xMemAllocSize(sizeof(xEnt::anim_coll_data));
                ent.anim_coll->flags = 0;
                ent.anim_coll->verts = NULL;
            }

            xModelInstance& model = *ent.model;
            xMat4x3& mat = *(xMat4x3*)model.Mat;
            xEnt::anim_coll_data& ac = *ent.anim_coll;

            if (!(ac.flags & 0x8))
            {
                switch (model.BoneCount)
                {
                case 1:
                {
                    ac.flags |= 0x1;
                    ac.old_mat = mat;
                    ac.new_mat = g_I3;
                    break;
                }
                case 0:
                {
                    break;
                }
                default:
                {
                    ac.flags |= 0x2;
                    ac.old_mat = mat;
                    ac.new_mat = g_I3;

                    xModelAnimCollStart(model);

                    xBox& box = ent.bound.box.box;
                    xVec3 size = box.upper - box.lower;
                    float32 max_size = size.x;

                    if (max_size < size.y)
                    {
                        max_size = size.y;
                    }

                    if (max_size < size.z)
                    {
                        max_size = size.z;
                    }

                    max_size += _780;

                    box.upper += max_size;
                    box.lower -= max_size;

                    model.Data->boundingSphere.radius *= _781_0;
                }
                }
            }
        }

        void refresh(xEnt& ent)
        {
            xEnt::anim_coll_data& ac = *ent.anim_coll;
            xMat4x3& bone_mat = *(xMat4x3*)(ent.model->Mat + 1);

            xMat4x3Mul((xMat4x3*)ent.model->Mat, &bone_mat, &ac.old_mat);

            ac.new_mat = bone_mat;
            bone_mat = g_I3;
        }

        void pre_move(xEnt& ent);
        void post_move(xEnt& ent);
    } // namespace anim_coll
} // namespace

void xEntSetTimePassed(float32 sec)
{
    sEntityTimePassed = sec;
}

void xEntSceneInit()
{
    all_ents_box_init = 1;
}

void xEntSceneExit()
{
}

void xEntAddHittableFlag(xEnt* ent)
{
    if (ent->baseType == eBaseTypeNPC || ent->baseType == eBaseTypeDestructObj ||
        ent->baseType == eBaseTypeButton || ent->baseType == eBaseTypeBoulder ||
        (ent->baseType == eBaseTypePlatform && ent->subType == ZPLATFROM_SUBTYPE_PADDLE))
    {
        ent->moreFlags |= 0x10;
    }
    else
    {
        for (uint32 i = 0; i < ent->linkCount; i++)
        {
            if (ent->link[i].srcEvent == eEventHit || ent->link[i].srcEvent == eEventHit_Cruise ||
                ent->link[i].srcEvent == eEventHit_Melee ||
                ent->link[i].srcEvent == eEventHit_BubbleBounce ||
                ent->link[i].srcEvent == eEventHit_BubbleBash ||
                ent->link[i].srcEvent == eEventHit_BubbleBowl ||
                ent->link[i].srcEvent == eEventHit_PatrickSlam ||
                ent->link[i].srcEvent == eEventHit_Throw ||
                ent->link[i].srcEvent == eEventHit_PaddleLeft ||
                ent->link[i].srcEvent == eEventHit_PaddleRight)
            {
                ent->moreFlags |= 0x10;
                break;
            }
        }
    }
}

#ifndef NON_MATCHING
void hack_receive_shadow(xEnt* ent);
#else
static void hack_receive_shadow(xEnt* ent)
{
    extern volatile signed char init_856; // todo: static
    extern uint32 receive_models_855[15]; // todo: static

    if (!init_856)
    {
        receive_models_855[0] = xStrHash(&_stringBase0_4[0x1]);
        receive_models_855[1] = xStrHash(&_stringBase0_4[0xD]);
        receive_models_855[2] = xStrHash(&_stringBase0_4[0x19]);
        receive_models_855[3] = xStrHash(&_stringBase0_4[0x25]);
        receive_models_855[4] = xStrHash(&_stringBase0_4[0x31]);
        receive_models_855[5] = xStrHash(&_stringBase0_4[0x3D]);
        receive_models_855[6] = xStrHash(&_stringBase0_4[0x49]);
        receive_models_855[7] = xStrHash(&_stringBase0_4[0x55]);
        receive_models_855[8] = xStrHash(&_stringBase0_4[0x61]);
        receive_models_855[9] = xStrHash(&_stringBase0_4[0x6D]);
        receive_models_855[10] = xStrHash(&_stringBase0_4[0x79]);
        receive_models_855[11] = xStrHash(&_stringBase0_4[0x85]);
        receive_models_855[12] = xStrHash(&_stringBase0_4[0x91]);
        receive_models_855[13] = xStrHash(&_stringBase0_4[0x9D]);
        receive_models_855[14] = xStrHash(&_stringBase0_4[0xA9]);

        // non-matching: init_856 is assigned too early
        init_856 = 1;
    }

    uint32* end = receive_models_855 + sizeof(receive_models_855) / sizeof(uint32);
    uint32* cur = receive_models_855;

    while (cur != end)
    {
        if (ent->asset->modelInfoID == *cur)
        {
            ent->baseFlags |= 0x10;
            ent->asset->baseFlags |= 0x10;
            break;
        }

        cur++;
    }
}
#endif

#ifndef NON_MATCHING
void xEntAddShadowRecFlag(xEnt* ent);
#else
static void xEntAddShadowRecFlag(xEnt* ent)
{
    // non-matching: asm jumptable needs to be removed.
    // also some other things are wrong, not sure why

    switch (ent->baseType)
    {
    case eBaseTypeTrigger:
    case eBaseTypeVillain:
    case eBaseTypePlayer:
    case eBaseTypePickup:
    case eBaseTypePlatform:
    case eBaseTypeCamera:
    case eBaseTypeDoor:
    case eBaseTypeSavePoint:
    case eBaseTypeItem:
    case eBaseTypeStatic:
    case eBaseTypeDynamic:
    case eBaseTypeMovePoint:
    case eBaseTypeTimer:
    case eBaseTypeBubble:
    case eBaseTypePortal:
    case eBaseTypeGroup:
    case eBaseTypeSFX:
    case eBaseTypeFFX:
    case eBaseTypeCounter:
    case eBaseTypeHangable:
    case eBaseTypeButton:
    case eBaseTypeProjectile:
    case eBaseTypeSurface:
    case eBaseTypeDestructObj:
    case eBaseTypeGust:
    case eBaseTypeVolume:
    case eBaseTypeDispatcher:
    case eBaseTypeCond:
    case eBaseTypeUI:
    case eBaseTypeUIFont:
    case eBaseTypeProjectileType:
    case eBaseTypeLobMaster:
    case eBaseTypeFog:
    case eBaseTypeParticleEmitter:
    case eBaseTypeParticleSystem:
    case eBaseTypeCutsceneMgr:
    default:
    {
        ent->baseFlags &= ~0x10;
        break;
    }
    case eBaseTypeUnknown:
    case eBaseTypeEnv:
    case eBaseTypePendulum:
    case eBaseTypeVFX:
    case eBaseTypeLight:
    case eBaseTypeEGenerator:
    {
        if (ent->model->PipeFlags & 0x0000ff00)
        {
            ent->baseFlags &= ~0x10;
        }

        break;
    }
    }

    hack_receive_shadow(ent);
}
#endif

#ifdef NON_MATCHING
void xEntInit(xEnt* ent, xEntAsset* asset)
{
    xBaseInit(ent, asset);

    // non-matching: instruction order

    ent->asset = asset;
    ent->update = xEntUpdate;
    ent->bupdate = xEntDefaultBoundUpdate;
    ent->render = xEntRender;
    ent->move = NULL;
    ent->transl = xEntDefaultTranslate;
    ent->flags = asset->flags;
    ent->miscflags = 0;
    ent->moreFlags = asset->moreFlags;
    ent->subType = asset->subtype;
    ent->pflags = asset->pflags;
    ent->ffx = NULL;
    ent->num_ffx = 0;
    ent->driver = NULL;
    ent->model = NULL;
    ent->collModel = NULL;
    ent->camcollModel = NULL;
    ent->frame = NULL;
    ent->collis = NULL;
    ent->lightKit = NULL;
    ent->simpShadow = NULL;
    ent->entShadow = NULL;
    ent->baseFlags |= 0x20;

    xGridBoundInit(&ent->gridb, ent);

    ent->anim_coll = NULL;

    if (all_ents_box_init)
    {
        iBoxInitBoundVec(&all_ents_box, &asset->pos);
        all_ents_box_init = 0;
    }
    else
    {
        iBoxBoundVec(&all_ents_box, &all_ents_box, &asset->pos);
    }
}
#endif

#ifdef NON_MATCHING
void xEntInitForType(xEnt* ent)
{
    ent->update = xEntUpdate;
    ent->render = xEntRender;

    if (ent->collType == XENT_COLLTYPE_TRIG)
    {
        ent->pflags &= ~0x3;
        ent->chkby = XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR;
        ent->penby = 0;
    }
    else if (ent->collType == XENT_COLLTYPE_STAT)
    {
        ent->pflags &= ~0x3;
        ent->chkby = XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR;
        ent->penby = XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR;
    }
    else if (ent->collType == XENT_COLLTYPE_DYN)
    {
        ent->pflags |= 0x1;
        ent->move = NULL;
        ent->frame = (xEntFrame*)xMemAllocSize(sizeof(xEntFrame));

        memset(ent->frame, 0, sizeof(xEntFrame));

        ent->pflags &= (uint8)~0x2;
        ent->chkby = XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR;
        ent->penby = XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR;
    }
    else if (ent->collType == XENT_COLLTYPE_NPC)
    {
        ent->pflags |= 0x1;
        ent->move = NULL;
        ent->pflags |= 0x2;
        ent->chkby = XENT_COLLTYPE_PLYR;
        ent->penby = XENT_COLLTYPE_PLYR;
    }
    else if (ent->collType == XENT_COLLTYPE_PLYR)
    {
        ent->pflags |= 0x1;
        ent->move = NULL;
        ent->frame = (xEntFrame*)xMemAllocSize(sizeof(xEntFrame));

        memset(ent->frame, 0, sizeof(xEntFrame));

        ent->pflags |= 0x2;
        ent->chkby = 0;
        ent->penby = 0;

        ent->collis = (xEntCollis*)xMemAllocSize(sizeof(xEntCollis));
        ent->collis->chk = 0x2F;
        ent->collis->pen = 0x2E;
        ent->collis->post = 0;
        ent->collis->depenq = 0;
    }

    if ((ent->moreFlags & 0x20 || ent->flags & 0x2) && !ent->frame)
    {
        ent->frame = (xEntFrame*)xMemAllocSize(sizeof(xEntFrame));

        memset(ent->frame, 0, sizeof(xEntFrame));
    }

    ent->baseFlags |= 0x20;

    // non-matching: instruction order in epilogue :|
    // no idea how to fix that
}
#endif

namespace
{
    float32 get_lower_extent(const xBound& bound)
    {
        switch (bound.type)
        {
        case XBOUND_TYPE_SPHERE:
        {
            return bound.sph.r;
        }
        case XBOUND_TYPE_BOX:
        {
            return bound.box.center.y - bound.box.box.lower.y;
        }
        case XBOUND_TYPE_OBB:
        {
            if (_942 == bound.mat->up.x && _942 == bound.mat->up.z)
            {
                return bound.box.center.y -
                       (bound.mat->up.y * bound.box.box.lower.y + bound.mat->pos.y);
            }
            else
            {
                xBox box;
                xBoundGetBox(box, bound);

                return bound.box.center.y - box.lower.y;
            }
        }
        case XBOUND_TYPE_CYL:
        default:
        {
            return _942;
        }
        }
    }

    bool collide_downward(xVec3& loc, xEnt*& hit, xScene& s, xEnt& ent, float32 max_dist)
    {
        xRay3 ray;
        uint8 old_bound_type;
        float32 old_bound_radius;
        xCollis coll;

        float32 f31 = get_lower_extent(ent.bound);
        xVec3* r30 = xBoundCenter(&ent.bound);

        ray.origin = *r30;
        ray.dir.assign(_942, _950, _942);
        ray.min_t = _942;
        ray.max_t = max_dist + f31;
        ray.flags = 0xC00;

        old_bound_type = ent.bound.type;
        old_bound_radius = ent.bound.sph.r;

        ent.bound.type = XBOUND_TYPE_SPHERE;
        ent.bound.sph.r = _942;

        r30->y = _951;

        coll.flags = 0x100;

        xRayHitsSceneFlags(&s, &ray, &coll, XENT_COLLTYPE_PLYR, 0x26);

        ent.bound.type = old_bound_type;
        ent.bound.sph.r = old_bound_radius;

        r30->y = ray.origin.y;

        if (!(coll.flags & 0x1))
        {
            return false;
        }

        loc = *(xVec3*)&ent.model->Mat->pos;
        loc.y -= coll.dist - f31;

        hit = (xEnt*)coll.optr;

        return true;
    }

    void drop_stacked_entity(xEnt&);

    void stacked_owner_destroyed(zEntDestructObj&, void* context)
    {
        drop_stacked_entity(*(xEnt*)context);
    }

    void mount_stacked_entity(xEnt& ent, xEnt& driver)
    {
        if (driver.collType == XENT_COLLTYPE_DYN)
        {
            if (ent.driver)
            {
                ent.driver->driving_count--;
            }

            ent.driver = &driver;

            driver.driving_count++;

            if (driver.baseType == eBaseTypeDestructObj)
            {
                zEntDestructObj* d = (zEntDestructObj*)&driver;
                d->destroy_notify = stacked_owner_destroyed;
                d->notify_context = &ent;
            }
        }
    }

    void dismount_stacked_entity(xEnt& ent)
    {
        if (ent.driver)
        {
            if (ent.driver->baseType == eBaseTypeDestructObj)
            {
                zEntDestructObj* d = (zEntDestructObj*)ent.driver;
                d->destroy_notify = NULL;
                d->notify_context = NULL;
            }

            ent.driver = NULL;
        }
    }

    void setup_stacked_entity(xEnt& ent)
    {
        ent.pflags = 0x4;
    }

    void drop_stacked_entity(xEnt& ent)
    {
        ent.pflags = 0x4;

        dismount_stacked_entity(ent);
    }

    void stop_stacked_entity(xEnt& ent)
    {
        ent.pflags = 0;
    }

    void update_stacked_entity(xScene& sc, xEnt& ent, float32 dt)
    {
        xEntApplyPhysics(&ent, &sc, dt);
        xEntMove(&ent, &sc, dt);

        float32 dist = ent.model->Mat->pos.y - ent.frame->mat.pos.y;
        xVec3 loc;
        xEnt* hit;

        if (!(dist <= _942) && collide_downward(loc, hit, sc, ent, dist))
        {
            ent.frame->mat.pos.y = loc.y;
            stop_stacked_entity(ent);

            if (hit)
            {
                mount_stacked_entity(ent, *hit);
            }
        }
    }
} // namespace

void xEntSetup(xEnt* ent)
{
    xSurface* surf;
    xModelInstance* minst;
    int32 i;
    xLinkAsset* la;
    xEnt* dent;

    xBaseSetup(ent);

    ent->baseFlags |= 0x20;

    if (ent->asset->surfaceID)
    {
        surf = (xSurface*)xSceneResolvID(g_xSceneCur, ent->asset->surfaceID);

        if (surf)
        {
            surf->type = XSURFACE_TYPE_1;
            surf->ent = ent;

            minst = ent->model;

            while (minst)
            {
                minst->Surf = surf;
                minst = minst->Next;
            }
        }
    }

    for (i = 0; i < ent->linkCount; i++)
    {
        la = &ent->link[i];

        if (la->dstEvent == eEventDrivenby)
        {
            dent = (xEnt*)xSceneResolvID(g_xSceneCur, la->dstAssetID);

            if (dent)
            {
                ent->driver = dent;
                ent->driveMode = (int32)la->param[0];

                dent->driving_count++;
            }
        }
    }

    ent->model->RedMultiplier = ent->asset->redMult;
    ent->model->GreenMultiplier = ent->asset->greenMult;
    ent->model->BlueMultiplier = ent->asset->blueMult;
    ent->model->Alpha = ent->asset->seeThru;

    xEntAddHittableFlag(ent);
    xEntAddShadowRecFlag(ent);

    zCollGeom_EntSetup(ent);

    if (ent->model)
    {
        if (ent->bound.type == XBOUND_TYPE_BOX)
        {
            iBoxForModel(&ent->bound.box.box, (ent->collModel) ? ent->collModel : ent->model);
        }
        else if (ent->bound.type == XBOUND_TYPE_OBB)
        {
            iBoxForModelLocal(&ent->bound.box.box, (ent->collModel) ? ent->collModel : ent->model);
        }
    }

    if (ent->moreFlags & 0x20)
    {
        anim_coll::reset(*ent);
    }

    if (ent->flags & 0x2)
    {
        setup_stacked_entity(*ent);
    }
}

void xEntSave(xEnt* ent, xSerial* s)
{
    xBaseSave(ent, s);

    if (xEntIsVisible(ent))
    {
        s->Write_b1(1);
    }
    else
    {
        s->Write_b1(0);
    }
}

void xEntLoad(xEnt* ent, xSerial* s)
{
    int32 b;

    xBaseLoad(ent, s);

    b = 0;
    s->Read_b1(&b);

    if (b)
    {
        xEntShow(ent);
    }
    else
    {
        xEntHide(ent);
    }
}

#ifdef NON_MATCHING
void xEntReset(xEnt* ent)
{
    xMat4x3 frame;
    xModelInstance* minst;

    xBaseReset(ent, ent->asset);

    ent->baseFlags |= 0x20;
    ent->flags = ent->asset->flags;
    ent->miscflags = 0;
    ent->moreFlags = ent->asset->moreFlags;

    xEntAddHittableFlag(ent);
    xEntAddShadowRecFlag(ent);

    xMat3x3Euler(&frame, ent->asset->ang.x, ent->asset->ang.y, ent->asset->ang.z);

    xVec3SMulBy(&frame.right, ent->asset->scale.x);
    xVec3SMulBy(&frame.up, ent->asset->scale.y);
    xVec3SMulBy(&frame.at, ent->asset->scale.z);
    xVec3Copy(&frame.pos, &ent->asset->pos);

    frame.flags = 0;

    if (ent->model)
    {
        xModelSetFrame(ent->model, &frame);

        if (ent->collModel)
        {
            xModelSetFrame(ent->collModel, &frame);
        }

        if (ent->moreFlags & 0x20)
        {
            anim_coll::reset(*ent);
        }

        minst = ent->model;

        while (minst)
        {
            minst->RedMultiplier = ent->asset->redMult;
            minst->GreenMultiplier = ent->asset->greenMult;
            minst->BlueMultiplier = ent->asset->blueMult;

            // non-matching: int-to-float conversion pattern, can't do much about this atm
            minst->Alpha = minst->Data->geometry->matList.materials[0]->color.alpha / 255.0f;
            minst->Scale.x = _942;
            minst->Scale.y = _942;
            minst->Scale.z = _942;

            minst = minst->Next;
        }
    }

    if (ent->frame)
    {
        xMat4x3Copy(&ent->frame->mat, &frame);

        ent->frame->oldmat = ent->frame->mat;

        xVec3Copy(&ent->frame->dpos, &g_O3);
        xVec3Copy(&ent->frame->dvel, &g_O3);
        xVec3Copy(&ent->frame->vel, &g_O3);
        xVec3Copy(&ent->frame->oldvel, &g_O3);
        xVec3Copy(&ent->frame->rot.axis, &ent->asset->ang);

        ent->frame->rot.angle = _942;

        xRotCopy(&ent->frame->oldrot, &ent->frame->rot);
    }

    if (ent->bupdate && ent->model)
    {
        ent->bupdate(ent, (xVec3*)&ent->model->Mat->pos);
    }

    ent->num_updates = xrand() & 127;

    if (ent->flags & 0x2)
    {
        setup_stacked_entity(*ent);
    }
}
#endif

xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel)
{
    xModelInstance* model;

    model = xModelInstanceAlloc(imodel, ent, 0, 0, NULL);

    while (imodel = iModelFile_RWMultiAtomic(imodel))
    {
        xModelInstanceAttach(xModelInstanceAlloc(imodel, ent, 0x8, 0, NULL), model);
    }

    if (ent)
    {
        ent->model = model;
    }

    return model;
}

void xEntAddToPos(xEnt* ent, const xVec3* v)
{
    xVec3AddTo(&ent->frame->mat.pos, v);
}

void xEntSetupPipeline(xModelInstance* model)
{
    xEntSetupPipeline(model->Surf, model->Data);
}

void xEntSetupPipeline(xSurface* surf, RpAtomic* model)
{
    setMaterialTextureRestore = 0;
    sSetPipeline = 0;

    if (surf)
    {
        zSurfaceProps* pp = (zSurfaceProps*)surf->moprops;

        if (pp)
        {
            if (pp->texanim_flags & 0x1)
            {
                xGroup* g = (xGroup*)zSceneFindObject(pp->texanim[0].group);

                if (g)
                {
                    uint32 texid = xGroupGetItem(g, pp->texanim[0].group_idx);
                    RwTexture* texptr = (RwTexture*)xSTFindAsset(texid, NULL);

                    if (texptr)
                    {
                        iModelSetMaterialTexture(model, texptr);
                        setMaterialTextureRestore = 1;
                    }
                }
            }

            if (pp->texanim_flags & 0x2)
            {
                xGroup* g = (xGroup*)zSceneFindObject(pp->texanim[1].group);

                if (g)
                {
                    uint32 texid = xGroupGetItem(g, pp->texanim[1].group_idx);
                    RwTexture* texptr = (RwTexture*)xSTFindAsset(texid, NULL);

                    if (texptr)
                    {
                        xFXanimUV2PSetTexture(texptr);
                        sSetPipeline = 1;
                    }
                }
            }
            else if (pp->uvfx_flags & 0x2)
            {
                RwTexture* texptr = (RwTexture*)xSTFindAsset(pp->asset->matfx.dualmapID, NULL);

                if (texptr)
                {
                    xFXanimUV2PSetTexture(texptr);
                    sSetPipeline = 1;
                }
            }
            else
            {
                xFXanimUV2PSetTexture(NULL);
            }

            if (pp->uvfx_flags & 0x3)
            {
                sSetPipeline = 1;

                xFXanimUVSetTranslation(&pp->uvfx[0].trans);
                xFXanimUV2PSetTranslation(&pp->uvfx[1].trans);
                xFXanimUVSetScale(&pp->uvfx[0].scale);
                xFXanimUV2PSetScale(&pp->uvfx[1].scale);
                xFXanimUVSetAngle(_1187 * pp->uvfx[0].rot);
                xFXanimUV2PSetAngle(_1187 * pp->uvfx[1].rot);
            }

            if (sSetPipeline)
            {
                oldPipe = model->pipeline;
                xFXanimUVAtomicSetup(model);
            }
        }
    }
}

void xEntRestorePipeline(xModelInstance* model)
{
    xEntRestorePipeline(model->Surf, model->Data);
}

void xEntRestorePipeline(xSurface*, RpAtomic* model)
{
    if (setMaterialTextureRestore)
    {
        iModelResetMaterial(model);
        setMaterialTextureRestore = 0;
    }

    if (sSetPipeline)
    {
        model->pipeline = oldPipe;
        sSetPipeline = 0;
    }
}

#ifdef NON_MATCHING
void xEntRender(xEnt* ent)
{
    int32 shadowOutside;
    xVec3 shadVec;

    if (ent->model && xEntIsVisible(ent))
    {
        if (ent->model->Flags & 0x400)
        {
            // non-matching: can't seem to get the compiler to generate this extra branch.
            return;
        }

        ent->isCulled = 0;

        if (ent->baseType == eBaseTypePlayer ||
            (ent->baseType == eBaseTypeNPC && !(ent->flags & 0x40)))
        {
            // non-matching: _1229 is loaded too early

            shadVec.x = ent->model->Mat->pos.x;
            shadVec.y = ent->model->Mat->pos.y - _1229;
            shadVec.z = ent->model->Mat->pos.z;

            if (iModelCullPlusShadow(ent->model->Data, ent->model->Mat, &shadVec, &shadowOutside))
            {
                if (shadowOutside)
                {
                    ent->isCulled = 1;
                    return;
                }
                else
                {
                    goto postrender;
                }
            }
        }
        else
        {
            if (iModelCull(ent->model->Data, ent->model->Mat))
            {
                ent->isCulled = 1;
                return;
            }
        }

        xModelRender(ent->model);

    postrender:

        if ((ent->baseType == eBaseTypeNPC && !(ent->flags & 0x40)) ||
            ent->baseType == eBaseTypePlayer)
        {
            zLightAddLocal(ent);
            xShadow_ListAdd(ent);
        }
    }
}
#endif

void xEntUpdate(xEnt* ent, xScene* sc, float32 dt)
{
    xEntBeginUpdate(ent, sc, dt);

    if (ent->pflags & 0x2)
    {
        xEntApplyPhysics(ent, sc, dt);
    }

    if (ent->pflags & 0x1)
    {
        xEntMove(ent, sc, dt);
    }

    xFFXApply(ent, sc, dt);

    if (ent->collis)
    {
        xEntCollide(ent, sc, dt);
    }

    if (ent->flags & 0x2 && ent->pflags & 0x4)
    {
        update_stacked_entity(*sc, *ent, dt);
    }

    xEntEndUpdate(ent, sc, dt);
}

void xEntBeginUpdate(xEnt* ent, xScene* sc, float32 dt)
{
    if (ent->model)
    {
        xModelUpdate(ent->model, dt);

        if (ent->frame)
        {
            xVec3Copy(&ent->frame->oldvel, &ent->frame->vel);

            ent->frame->oldmat = ent->frame->mat;

            xRotCopy(&ent->frame->oldrot, &ent->frame->rot);
            xMat4x3Copy(&ent->frame->mat, xModelGetFrame(ent->model));

            ent->frame->mode = 0;
        }
    }
}

void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt)
{
    ent->num_updates++;

    if (ent->model)
    {
        if (ent->frame)
        {
            if (!(ent->frame->mode & 0x20000))
            {
                xMat3x3Copy((xMat4x3*)ent->model->Mat, &ent->frame->mat);
            }

            if (!(ent->frame->mode & 0x10000))
            {
                xVec3* mpos = (xVec3*)&ent->model->Mat->pos;
                xVec3Copy(mpos, &ent->frame->mat.pos);
            }
        }

        if (ent->bupdate)
        {
            xVec3* upos = (xVec3*)&ent->model->Mat->pos;
            ent->bupdate(ent, upos);
        }

        xModelEval(ent->model);

        if (ent->moreFlags & 0x20)
        {
            anim_coll::refresh(*ent);
        }

        if (ent->endUpdate)
        {
            ent->endUpdate(ent, sc, dt);
        }
    }
}

void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos)
{
    xBound* bound = &ent->bound;

    if (bound->type == XBOUND_TYPE_SPHERE)
    {
        xVec3Copy(&bound->sph.center, pos);

        bound->sph.center.y += _1300;
        bound->sph.r = _1300;
    }

    xBoundUpdate(bound);
    zGridUpdateEnt(ent);
}

void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat)
{
    if (dmat)
    {
        if (ent->model)
        {
            xMat4x3Mul((xMat4x3*)ent->model->Mat, (xMat4x3*)ent->model->Mat, dmat);
        }

        if (ent->frame)
        {
            xMat4x3Mul(&ent->frame->mat, &ent->frame->mat, dmat);
        }

        xMat4x3Toworld(xEntGetCenter(ent), dmat, xEntGetCenter(ent));
    }
    else
    {
        if (ent->model)
        {
            xVec3AddTo(xEntGetPos(ent), dpos);
        }

        if (ent->frame)
        {
            xVec3AddTo(&ent->frame->mat.pos, dpos);
        }

        xVec3AddTo(xEntGetCenter(ent), dpos);
    }
}

static void xEntRotationToMatrix(xEntFrame* frame)
{
    if (frame->mode & 0x20)
    {
        if (frame->mode & 0x400)
        {
            xVec3AddTo(&frame->rot.axis, &frame->drot.axis);
            xMat3x3Euler(&frame->mat, frame->rot.axis.x, frame->rot.axis.y, frame->rot.axis.z);
        }
        else
        {
            frame->rot.angle = xAngleClamp(frame->rot.angle + frame->drot.angle);

            xMat3x3Rot(&frame->mat, &frame->rot.axis, frame->rot.angle);
        }
    }
}

void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame)
{
    if (frame->mode & 0x1000)
    {
        xEntRotationToMatrix(frame);
    }

    if (frame->mode & 0x2)
    {
        if (frame->mode & 0x800)
        {
            xMat3x3RMulVec(&frame->dpos, &frame->mat, &frame->dpos);
        }

        xEntAddToPos(ent, &frame->dpos);
    }

    if (frame->mode & 0x8)
    {
        if (frame->mode & 0x800)
        {
            xMat3x3RMulVec(&frame->dvel, &frame->mat, &frame->dvel);
        }

        xVec3AddTo(&frame->vel, &frame->dvel);
    }

    if (!(frame->mode & 0x1000))
    {
        xEntRotationToMatrix(frame);
    }
}

void xEntMove(xEnt* ent, xScene* sc, float32 dt)
{
    if (ent->moreFlags & 0x20)
    {
        anim_coll::pre_move(*ent);
    }

    ent->move(ent, sc, dt, ent->frame);

    xEntMotionToMatrix(ent, ent->frame);

    if (ent->driver)
    {
        xEntFrame* dframe = ent->driver->frame;

        if (ent->driveMode == 0)
        {
            xVec3 dpos;
            xVec3Sub(&dpos, &dframe->mat.pos, &dframe->oldmat.pos);

            ent->transl(ent, &dpos, NULL);
        }
        else if (ent->driveMode == 1)
        {
            RwMatrixUpdate((RwMatrix*)&dframe->oldmat);

            xMat4x3 invOldmat;
            RwMatrixInvert((RwMatrix*)&invOldmat, (RwMatrix*)&dframe->oldmat);

            xMat4x3 deltaMat;
            xMat4x3Mul(&deltaMat, &invOldmat, &dframe->mat);

            ent->transl(ent, NULL, &deltaMat);
        }
    }

    if (ent->moreFlags & 0x20)
    {
        anim_coll::post_move(*ent);
    }
}

namespace
{
    namespace anim_coll
    {
        void post_move(xEnt& ent)
        {
            xMat4x3& mat = *(xMat4x3*)ent.model->Mat;
            xEnt::anim_coll_data& ac = *ent.anim_coll;

            ac.old_mat = ent.frame->mat;

            xMat4x3Mul(&mat, &ac.new_mat, &ac.old_mat);

            ent.frame->mat = mat;
        }

        void pre_move(xEnt& ent)
        {
            xMat4x3& mat = *(xMat4x3*)ent.model->Mat;
            xEnt::anim_coll_data& ac = *ent.anim_coll;

            ent.frame->mat = mat = ac.old_mat;
        }
    } // namespace anim_coll
} // namespace

void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt)
{
    // i'm surprised this function matches lol
    // this beginning part eventually needs to be replaced with:
    // xVec3 dposvel = { 0, 0, 0 };

    xVec3 dposvel;
    uint32* temp1 = (uint32*)&dposvel;
    uint32* temp2 = (uint32*)&_1405_0;

    temp1[0] = temp2[0];
    temp1[1] = temp2[1];
    temp1[2] = temp2[2];

    if (ent->pflags & 0x4 && sc->flags & 0x1)
    {
        ent->frame->vel.y += sc->gravity * dt;
    }

    if (ent->pflags & 0x10 && sc->flags & 0x2)
    {
        float32 tfric = -(sc->friction * dt - _780);
        xVec3SMulBy(&ent->frame->vel, tfric);
    }

    if (ent->pflags & 0x8 && sc->flags & 0x4)
    {
        float32 tdrag = -(sc->drag * dt - _780);
        xVec3SMulBy(&ent->frame->vel, tdrag);
    }

    xVec3Add(&dposvel, &ent->frame->vel, &ent->frame->oldvel);
    xVec3SMulBy(&dposvel, _1435 * dt);

    if (dposvel.y < _942)
    {
        float32 dposXZ = xsqrt(SQR(dposvel.x) + SQR(dposvel.z));
        float32 scaleXZ = (dposXZ > _1438) ? ((_1436 * (_1437 * dt)) / dposXZ) : _942;
        float32 scaleY = (_1436 * (_1437 * dt)) / (float32)iabs(dposvel.y);

        if (scaleXZ < _780)
        {
            dposvel.x *= scaleXZ;
            dposvel.z *= scaleXZ;
        }

        if (scaleY < *(const float32*)&_780) // this forces _780 to be reloaded
        {
            dposvel.y *= scaleY;
        }
    }

    xEntAddToPos(ent, &dposvel);
}

#ifdef NON_MATCHING
void xEntCollide(xEnt* ent, xScene* sc, float32 dt)
{
    if (ent->model)
    {
        if (ent->collis->chk & 0x2E)
        {
            xEntBeginCollide(ent, sc, dt);
        }

        if (ent->collis->chk & 0x8)
        {
            xEntCollCheckNPCsByGrid(ent, sc, xEntCollCheckOneEntNoDepen);
        }

        if (ent->collis->chk & 0x6)
        {
            xEntCollCheckByGrid(ent, sc, xEntCollCheckOneEntNoDepen);
        }

        if (ent->collis->chk & 0x20)
        {
            xEntCollCheckEnv(ent, sc);
        }

        xCollis* coll = &ent->collis->colls[0];

        if (ent->collis->chk & 0x2E)
        {
            float32 h_dot_n;

            if (ent->bound.type == XBOUND_TYPE_SPHERE)
            {
                h_dot_n = ent->bound.sph.r;
            }
            else
            {
                h_dot_n = _1300;
            }

            if (ent->pflags & 0x80 && coll->flags & 0x1)
            {
                float32 depen_len = xVec3Dot(&coll->hdng, &coll->norm);

                if (depen_len > _942)
                {
                    xVec3Inv(&coll->norm, &coll->norm);
                    depen_len = -depen_len;
                }

                depen_len = depen_len * coll->dist + h_dot_n;

                if (depen_len < _942 || depen_len > h_dot_n)
                {
                    // non-matching: _942 is not reloaded
                    depen_len = CLAMP(depen_len, _942, h_dot_n);
                }

                xVec3SMul(&coll->depen, &coll->norm, depen_len);
            }

            if (ent->frame->vel.y <= _942)
            {
                xEntCollideFloor(ent, sc, dt);
            }
            else
            {
                xEntCollideCeiling(ent, sc, dt);
            }

            xEntCollideWalls(ent, sc, dt);
            xEntEndCollide(ent, sc, dt);
        }
    }
}
#endif

void xEntBeginCollide(xEnt* ent, xScene*, float32)
{
    uint8 idx;
    xCollis* coll;

    if (ent->bupdate)
    {
        ent->bupdate(ent, &ent->frame->mat.pos);
    }

    for (idx = 0; idx < 18; idx++)
    {
        coll = &ent->collis->colls[idx];

        coll->flags = 0x1F00;
        coll->optr = NULL;
        coll->mptr = NULL;
        coll->dist = _951;
    }

    ent->collis->idx = 6;
    ent->collis->stat_sidx = 6;
    ent->collis->stat_eidx = 6;
    ent->collis->dyn_sidx = 6;
    ent->collis->dyn_eidx = 6;
    ent->collis->npc_sidx = 6;
    ent->collis->npc_eidx = 6;
    ent->collis->env_sidx = 6;
    ent->collis->env_eidx = 6;
}

void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt)
{
    if (ent->collis->post)
    {
        ent->collis->post(ent, sc, dt, ent->collis);
    }
}

void xEntCollCheckEnv(xEnt* p, xScene* sc)
{
    xCollis* coll;
    uint8 ncolls;

    p->collis->env_sidx = p->collis->idx;

    coll = &p->collis->colls[p->collis->idx];
    coll->flags = 0x1F00;

    ncolls = 18 - p->collis->idx;

    p->collis->idx += (uint8)iSphereHitsEnv3(&p->bound.sph, sc->env, coll, ncolls, _1541);
    p->collis->env_eidx = p->collis->idx;
}

#ifndef NON_MATCHING
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*), xGrid* grid);
#else
static void xEntCollCheckOneGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*),
                                 xGrid* grid)
{
    xVec3* r26 = xEntGetCenter(p);
    xGridIterator it;
    int32 px, pz;

    xGridBound* cell = xGridIterFirstCell(grid, r26->x, r26->y, r26->z, px, pz, it);

    while (cell)
    {
        if (xQuickCullIsects(&p->bound.qcd, (xQCData*)(cell + 1)))
        {
            hitIt((xEnt*)cell->data, sc, p);
        }

        cell = xGridIterNextCell(it);
    }

    // non-matching: int to float conversion

    float32 clcenterx = (_1435 * grid->csizex) + (grid->csizex * px + grid->minx);
    float32 clcenterz = (_1435 * grid->csizez) + (grid->csizez * pz + grid->minz);

    extern int32 k_1552;

    if (r26->x < clcenterx)
    {
        if (r26->z < clcenterz)
        {
            k_1552 = 0;
        }
        else
        {
            k_1552 = 1;
        }
    }
    else
    {
        if (r26->z < clcenterz)
        {
            k_1552 = 3;
        }
        else
        {
            k_1552 = 2;
        }
    }

    extern int32 offs_1551[4][3][2];

    for (int32 i = 0; i < 3; i++)
    {
        int32 _x = px + offs_1551[k_1552][i][0];
        int32 _z = pz + offs_1551[k_1552][i][1];

        cell = xGridIterFirstCell(grid, _x, _z, it);

        while (cell)
        {
            if (xQuickCullIsects(&p->bound.qcd, (xQCData*)(cell + 1)))
            {
                hitIt((xEnt*)cell->data, sc, p);
            }

            cell = xGridIterNextCell(it);
        }
    }

    cell = xGridIterFirstCell(&grid->other, it);

    while (cell)
    {
        if (xQuickCullIsects(&p->bound.qcd, (xQCData*)(cell + 1)))
        {
            hitIt((xEnt*)cell->data, sc, p);
        }

        cell = xGridIterNextCell(it);
    }
}
#endif

void xEntCollCheckByGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*))
{
    p->collis->stat_sidx = p->collis->idx;
    p->collis->dyn_sidx = p->collis->idx;

    xEntCollCheckOneGrid(p, sc, hitIt, &colls_grid);
    xEntCollCheckOneGrid(p, sc, hitIt, &colls_oso_grid);

    p->collis->stat_eidx = p->collis->idx;
    p->collis->dyn_eidx = p->collis->idx;
}

void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*))
{
    p->collis->npc_sidx = p->collis->idx;

    xEntCollCheckOneGrid(p, sc, hitIt, &npcs_grid);

    p->collis->npc_eidx = p->collis->idx;
}

void xEntCollCheckStats(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*))
{
    p->collis->stat_sidx = p->collis->idx;

    xSceneForAllStatics(sc, hitIt, p);

    p->collis->stat_eidx = p->collis->idx;
}

void xEntCollCheckDyns(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*))
{
    p->collis->dyn_sidx = p->collis->idx;

    xSceneForAllDynamics(sc, hitIt, p);

    p->collis->dyn_eidx = p->collis->idx;
}

void xEntCollCheckNPCs(xEnt* p, xScene* sc, xEnt* (*hitIt)(xEnt*, xScene*, void*))
{
    p->collis->npc_sidx = p->collis->idx;

    xSceneForAllNPCs(sc, hitIt, p);

    p->collis->npc_eidx = p->collis->idx;
}

#ifdef NON_MATCHING
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, xScene* sc, void* data)
{
    xent_entent = 1;

    xEnt* p = (xEnt*)data;
    xCollis* coll;
    uint32 modl_coll = 0;

    if (p->collis->idx >= 15)
    {
        xent_entent = 0;
        return NULL;
    }

    if ((ent->chkby & p->collType) == 0)
    {
        xent_entent = 0;
        return ent;
    }

    if (ent->id == p->id && (ent == p || ent->baseType != eBaseTypeBoulder))
    {
        xent_entent = 0;
        return ent;
    }

    coll = &p->collis->colls[p->collis->idx];

    if (ent->collLev == 5 && p->collType & (XENT_COLLTYPE_NPC | XENT_COLLTYPE_PLYR))
    {
        modl_coll = 1;
    }

    if (modl_coll)
    {
        coll->flags = 0;
    }
    else
    {
        coll->flags = 0x1F00;
    }

    xBoundHitsBound(&p->bound, &ent->bound, coll);

    if (coll->flags & 0x1)
    {
        if (modl_coll)
        {
            xBound tmp;
            xBound* bptr; // unused
            uint8 ncolls;
            xVec3 *upper, *lower;
            uint8 idx;

            coll->flags = 0x1F00;

            if (p->bound.type == XBOUND_TYPE_SPHERE)
            {
                xModelInstance* r4 = (ent->collModel) ? ent->collModel : ent->model;
                ncolls = 15 - p->collis->idx;
                idx = iSphereHitsModel3(&p->bound.sph, r4, coll, ncolls, _1541);
            }
            else if (p->bound.type == XBOUND_TYPE_BOX)
            {
                upper = &p->bound.box.box.upper;
                lower = &p->bound.box.box.lower;

                tmp.type = XBOUND_TYPE_SPHERE;

                xVec3Add(&tmp.sph.center, upper, lower);
                xVec3SMulBy(&tmp.sph.center, _1435);

                float32 rsum = upper->x + upper->y + upper->z - lower->x - lower->y - lower->z;

                tmp.sph.r = _1724 * rsum;

                // none of the code above is used for anything... maybe debug stuff

                xModelInstance* r4 = (ent->collModel) ? ent->collModel : ent->model;
                ncolls = 15 - p->collis->idx;
                idx = iSphereHitsModel3(&p->bound.sph, r4, coll, ncolls, _1541);
            }

            // idx might be undefined here...!

            for (uint8 i = 0; i < idx; i++)
            {
                coll[i].optr = ent;
                coll[i].mptr = ent->model;

                p->collis->idx++;
            }

            xent_entent = 0;
            return ent;
        }
        else
        {
            coll->oid = ent->id;
            coll->optr = ent;
            coll->mptr = ent->model;

            p->collis->idx++;

            if (ent->pflags & 0x20 && ent->bound.type == XBOUND_TYPE_SPHERE &&
                p->bound.type == XBOUND_TYPE_SPHERE && coll->hdng.y < _1725)
            {
                float32 dx = p->bound.sph.center.x - ent->bound.sph.center.x;
                float32 dy = p->bound.sph.center.y - ent->bound.sph.center.y;
                float32 dz = p->bound.sph.center.z - ent->bound.sph.center.z;

                // non-matching: can't seem to generate a fmsubs here
                float32 hsqr = SQR(p->bound.sph.r + ent->bound.sph.r) - (SQR(dx) + SQR(dz));

                if (hsqr >= _942)
                {
                    coll->depen.x = _942;
                    coll->depen.y = xsqrt(hsqr) - dy;
                    coll->depen.z = _942;
                    coll->dist = _1300 - coll->depen.y;
                    coll->hdng.x = _942;
                    coll->hdng.y = _950;
                    coll->hdng.z = _942;
                }
            }
        }
    }

    xent_entent = 0;
    return ent;
}
#endif

void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt)
{
    xCollis* coll = &p->collis->colls[0];
    uint8 idx;
    xCollis* ml = coll;
    xVec3 motion;
    float32 mlen;
    int32 stepping = 0;
    float32 sbr;

    if (p->bound.type == XBOUND_TYPE_SPHERE)
    {
        sbr = p->bound.sph.r;
    }
    else
    {
        sbr = _1300;
    }

    xVec3Copy(&motion, &p->frame->mat.pos);
    xVec3SubFrom(&motion, &p->frame->oldmat.pos);

    motion.y = _942;
    mlen = xVec3Length(&motion);

    for (idx = 6; idx < p->collis->idx; idx++)
    {
        xCollis* mf = &p->collis->colls[idx];

        if (mf->flags & 0x1)
        {
            xEnt* fent = (xEnt*)mf->optr;

            if (fent)
            {
                if ((fent->collType == XENT_COLLTYPE_DYN || fent->collType == XENT_COLLTYPE_STAT) ||
                    (fent->pflags & 0x20 && _942 == mf->hdng.x && _942 == mf->hdng.z))
                {
                    if (!((p->collis->depenq) ?
                              p->collis->depenq(p, fent, sc, dt, mf) :
                              (fent->collType & p->collis->pen && fent->penby & p->collType)))
                    {
                        continue;
                    }
                }
                else
                {
                    continue;
                }
            }
            else if (!(p->collis->pen & 0x20))
            {
                continue;
            }

            if (mf->dist < ml->dist)
            {
                if (mf->hdng.y < -icos(_1818) &&
                    (mf->norm.y > icos(nsn_angle) ||
                     p->frame->oldmat.pos.y > dt * (sc->gravity * dt) + p->frame->mat.pos.y))
                {
                    ml = mf;
                    stepping = 0;
                }
                else if (mlen > _1819 && mf->hdng.y < _1820 / sbr - _780 &&
                         mf->norm.y > icos(nsn_angle))
                {
                    stepping = 1;
                    ml = mf;
                }
            }
        }
    }

    if (ml != coll)
    {
        float32 flr_dist = ml->dist * (float32)iabs(ml->hdng.y);
        xEnt* fent; // unused

        *coll = *ml;

        if (flr_dist < sbr)
        {
            ml->flags |= 0x6;

            if (stepping)
            {
                p->frame->mat.pos.y += _1821 * dt;
                p->frame->mat.pos.x += ml->depen.x;
                p->frame->mat.pos.z += ml->depen.z;
            }
            else
            {
                p->frame->mat.pos.y += ml->depen.y;
            }

            p->frame->vel.y = _942;
        }
    }
}

void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt)
{
    xCollis* coll = &p->collis->colls[1];
    uint8 idx;
    xCollis* ml = coll;
    float32 sbr;

    if (p->bound.type == XBOUND_TYPE_SPHERE)
    {
        sbr = p->bound.sph.r;
    }
    else
    {
        sbr = _1300;
    }

    for (idx = 6; idx < p->collis->idx; idx++)
    {
        xCollis* mf = &p->collis->colls[idx];
        xEnt* fent = (xEnt*)mf->optr;

        if (fent)
        {
            if (!((p->collis->depenq) ?
                      p->collis->depenq(p, fent, sc, dt, mf) :
                      (fent->collType & p->collis->pen && fent->penby & p->collType)))
            {
                continue;
            }
        }
        else if (!(p->collis->pen & 0x20))
        {
            continue;
        }

        if (mf->hdng.y > icos(_1541) && mf->dist < ml->dist)
        {
            ml = mf;
        }
    }

    if (ml != coll)
    {
        float32 ceil_dist = ml->dist * (float32)iabs(ml->hdng.y);

        *coll = *ml;

        ml->flags |= 0xA;

        if (ceil_dist < sbr)
        {
            p->frame->mat.pos.y -= sbr - ceil_dist;
            p->frame->vel.y = _942;
        }
    }
}

void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt)
{
    xCollis* coll;
    xEnt* cent;
    uint8 idx, sidx;
    float32 sbr;

    if (p->bound.type == XBOUND_TYPE_SPHERE)
    {
        sbr = p->bound.sph.r;
    }
    else
    {
        sbr = _1300;
    }

    if (p->collis->pen & 0x8)
    {
        idx = p->collis->npc_eidx;
        sidx = p->collis->npc_sidx;

        while (sidx < idx)
        {
            coll = &p->collis->colls[sidx];
            cent = (xEnt*)coll->optr;

            if (!(coll->flags & 0x2) && coll->dist < sbr &&
                ((p->collis->depenq) ? p->collis->depenq(p, cent, sc, dt, coll) :
                                       cent->penby & p->collType))
            {
                if (_942 != coll->depen.x || _942 != coll->depen.z)
                {
                    coll->depen.y = *(const float32*)&_942;
                }

                xEntAddToPos(p, &coll->depen);
            }

            sidx++;
        }
    }

    if (p->collis->pen & 0x4)
    {
        idx = p->collis->dyn_eidx;
        sidx = p->collis->dyn_sidx;

        while (sidx < idx)
        {
            coll = &p->collis->colls[sidx];
            cent = (xEnt*)coll->optr;

            if (!(coll->flags & 0x2) && coll->dist < sbr &&
                ((p->collis->depenq) ? p->collis->depenq(p, cent, sc, dt, coll) :
                                       cent->penby & p->collType))
            {
                coll->depen.y = _942;

                xEntAddToPos(p, &coll->depen);
            }

            sidx++;
        }
    }

    if (p->collis->pen & 0x2)
    {
        idx = p->collis->stat_eidx;
        sidx = p->collis->stat_sidx;

        while (sidx < idx)
        {
            coll = &p->collis->colls[sidx];
            cent = (xEnt*)coll->optr;

            if (!(coll->flags & 0x2) && coll->dist < sbr &&
                ((p->collis->depenq) ? p->collis->depenq(p, cent, sc, dt, coll) :
                                       cent->penby & p->collType))
            {
                coll->depen.y = _942;

                xEntAddToPos(p, &coll->depen);
            }

            sidx++;
        }
    }

    if (p->collis->pen & 0x20)
    {
        idx = p->collis->env_eidx;
        sidx = p->collis->env_sidx;

        while (sidx < idx)
        {
            coll = &p->collis->colls[sidx];
            cent = (xEnt*)coll->optr;

            if (!(coll->flags & 0x2) && coll->dist < sbr)
            {
                coll->depen.y = _942;

                xEntAddToPos(p, &coll->depen);
            }

            sidx++;
        }
    }
}

void xEntSetNostepNormAngle(float32 angle)
{
    nsn_angle = angle;
}

xBox* xEntGetAllEntsBox()
{
    return &all_ents_box;
}

void xEntAnimateCollision(xEnt& ent, bool on)
{
    if (on && !(ent.moreFlags & 0x20))
    {
        ent.moreFlags |= 0x20;

        if (!ent.frame)
        {
            ent.frame = (xEntFrame*)xMemAllocSize(sizeof(xEntFrame));

            memset(ent.frame, 0, sizeof(xEntFrame));
        }

        anim_coll::reset(ent);
    }
    else if (!on && ent.moreFlags & 0x20)
    {
        ent.moreFlags &= (uint8)~0x20;
    }
}

#ifdef NON_MATCHING
bool xEntValidType(uint8 type)
{
    // I have no idea how to match this lol

    return (type == eBaseTypeTrigger || type == eBaseTypePlayer || type == eBaseTypePickup ||
            type == eBaseTypePlatform || type == eBaseTypeDoor || type == eBaseTypeSavePoint ||
            type == eBaseTypeItem || type == eBaseTypeStatic || type == eBaseTypeDynamic ||
            type == eBaseTypeBubble || type == eBaseTypePendulum || type == eBaseTypeHangable ||
            type == eBaseTypeButton || type == eBaseTypeProjectile ||
            type == eBaseTypeDestructObj || type == eBaseTypeUI || type == eBaseTypeUIFont ||
            type == eBaseTypeProjectileType || type == eBaseTypeEGenerator ||
            type == eBaseTypeNPC || type == eBaseTypeBoulder || type == eBaseTypeTeleportBox ||
            type == eBaseTypeZipLine);
}
#endif

void xEntReposition(xEnt& ent, const xMat4x3& mat)
{
    *(xMat4x3*)ent.model->Mat = mat;

    if (ent.collModel && ent.collModel != ent.model)
    {
        *(xMat4x3*)ent.collModel->Mat = mat;
    }

    if (ent.frame)
    {
        ent.frame->mat = mat;
    }

    if (ent.bound.mat)
    {
        *ent.bound.mat = mat;
    }

    ent.bound.sph.center = mat.pos;

    xBoundUpdate(&ent.bound);
    zGridUpdateEnt(&ent);
}

void xEntInitShadow(xEnt& ent, xEntShadow& shadow)
{
    ent.entShadow = &shadow;

    shadow.vec.assign(_942, _780, _942);
    shadow.pos = ent.asset->pos;
    shadow.shadowModel = NULL;
    shadow.dst_cast = _950;
    shadow.radius[0] = _950;
    shadow.radius[1] = _950;
}

xVec3& xVec3::operator-=(float32 f)
{
    this->x -= f;
    this->y -= f;
    this->z -= f;

    return *this;
}

xVec3& xVec3::operator+=(float32 f)
{
    this->x += f;
    this->y += f;
    this->z += f;

    return *this;
}

xVec3* xBoundCenter(xBound* bound)
{
    return &bound->sph.center;
}

const xVec3* xBoundCenter(const xBound* bound)
{
    return &bound->sph.center;
}

void xEntHide(xEnt* ent)
{
    ent->flags &= ~0x1;
}

void xEntShow(xEnt* ent)
{
    ent->flags |= 0x1;
}

xVec3* xEntGetPos(const xEnt* ent)
{
    return &xModelGetFrame(ent->model)->pos;
}

xVec3* xEntGetCenter(const xEnt* ent)
{
    return (xVec3*)xBoundCenter(&ent->bound);
}

void xRotCopy(xRot* o, const xRot* r)
{
    o->axis.x = r->axis.x;
    o->axis.y = r->axis.y;
    o->axis.z = r->axis.z;
    o->angle = r->angle;
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

void xMat3x3Rot(xMat3x3* m, const xVec3* a, float32 t)
{
    xMat3x3RotC(m, a->x, a->y, a->z, t);
}

void xModelSetFrame(xModelInstance* modelInst, const xMat4x3* frame)
{
    xMat4x3Copy((xMat4x3*)modelInst->Mat, frame);
}

xMat4x3* xModelGetFrame(xModelInstance* modelInst)
{
    return (xMat4x3*)modelInst->Mat;
}

void xVec3SMulBy(xVec3* v, float32 s)
{
    v->x *= s;
    v->y *= s;
    v->z *= s;
}

void xVec3SubFrom(xVec3* o, const xVec3* v)
{
    o->x -= v->x;
    o->y -= v->y;
    o->z -= v->z;
}

xGridBound* xGridIterFirstCell(xGridBound** head, xGridIterator& it)
{
    xGridBound* cell = *head;

    if (!cell)
    {
        return NULL;
    }

    it.delfound = 0;
    it.listhead = head;
    it.curcell = cell;

    gGridIterActive++;

    return cell;
}

xGridBound* xGridIterFirstCell(xGrid* grid, int32 grx, int32 grz, xGridIterator& iter)
{
    if (grx < 0 || grx >= grid->nx)
    {
        return NULL;
    }

    if (grz < 0 || grz >= grid->nz)
    {
        return NULL;
    }

    return xGridIterFirstCell(grid->cells + grz * grid->nx + grx, iter);
}

xGridBound* xGridIterNextCell(xGridIterator& it)
{
    if (it.curcell)
    {
        it.curcell = it.curcell->next;
    }

    while (it.curcell)
    {
        if (!it.curcell->deleted)
        {
            return it.curcell;
        }

        it.delfound = 1;
        it.curcell = it.curcell->next;
    }

    xGridIterClose(it);
    return NULL;
}

void xGridIterClose(xGridIterator& it)
{
    if (it.listhead)
    {
        gGridIterActive--;

        if (it.delfound && !gGridIterActive)
        {
            xGridBound* cell = *it.listhead;
            xGridBound** head = it.listhead;

            while (cell)
            {
                if (cell->deleted)
                {
                    *head = cell->next;

                    cell->next = NULL;
                    cell->head = NULL;
                    cell->ingrid = 0;
                    cell->deleted = 0;
                    cell->gx = 0xFFFF;
                    cell->gz = 0xFFFF;

                    cell = *head;
                }
                else
                {
                    head = &cell->next;
                    cell = cell->next;
                }
            }
        }

        it.listhead = NULL;
        it.curcell = NULL;
        it.delfound = 0;
    }
}
