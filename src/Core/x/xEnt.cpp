#include "xEnt.h"

#include "xEvent.h"
#include "xString.h"
#include "xGroup.h"
#include "xstransvc.h"
#include "xFX.h"
#include "xShadow.h"
#include "xMathInlines.h"

#include "../../Game/zBase.h"
#include "../../Game/zPlatform.h"
#include "../../Game/zEntDestructObj.h"
#include "../../Game/zCollGeom.h"
#include "../../Game/zSurface.h"
#include "../../Game/zLight.h"
#include "../../Game/zGrid.h"

#include "../p2/iMath3.h"
#include "../p2/iCollide.h"
#include "../p2/iModel.h"
#include "../p2/iMath.h"

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

extern float32 sEntityTimePassed;
extern xBox all_ents_box;
extern int32 all_ents_box_init;
extern int32 setMaterialTextureRestore;
extern int32 sSetPipeline;
extern RxPipeline* oldPipe;

namespace
{
    namespace anim_coll
    {
        void reset(xEnt& ent)
        {
            if (!ent.anim_coll)
            {
                ent.anim_coll = (xEnt::anim_coll_data*)xMemAlloc(sizeof(xEnt::anim_coll_data));
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
// func_8001830C
void hack_receive_shadow(xEnt* ent);
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "hack_receive_shadow__FP4xEnt")
#else
static void hack_receive_shadow(xEnt* ent)
{
    extern signed char init_856; // todo: static
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
// func_8001853C
void xEntAddShadowRecFlag(xEnt* ent);
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAddShadowRecFlag__FP4xEnt")
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

#ifndef NON_MATCHING
// func_800185B0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInit__FP4xEntP9xEntAsset")
#else
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

#ifndef NON_MATCHING
// func_800186D0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInitForType__FP4xEnt")
#else
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
        ent->frame = (xEntFrame*)xMemAlloc(sizeof(xEntFrame));

        memset(ent->frame, 0, sizeof(xEntFrame));

        ent->pflags &= 0xFD; // not sure why ~0x2 doesn't work
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
        ent->frame = (xEntFrame*)xMemAlloc(sizeof(xEntFrame));

        memset(ent->frame, 0, sizeof(xEntFrame));

        ent->pflags |= 0x2;
        ent->chkby = 0;
        ent->penby = 0;

        ent->collis = (xEntCollis*)xMemAlloc(sizeof(xEntCollis));
        ent->collis->chk = 0x2F;
        ent->collis->pen = 0x2E;
        ent->collis->post = 0;
        ent->collis->depenq = 0;
    }

    if ((ent->moreFlags & 0x20 || ent->flags & 0x2) && !ent->frame)
    {
        ent->frame = (xEntFrame*)xMemAlloc(sizeof(xEntFrame));

        memset(ent->frame, 0, sizeof(xEntFrame));
    }

    xBase* base = (xBase*)ent;

    base->baseFlags |= 0x20;

    // non-matching: instruction order in epilogue :|
    // no idea how to fix that
}
#endif

namespace
{
    float32 get_lower_extent(const xBound& bound)
    {
        // I might be accessing the wrong members from bound here.
        // We won't really know for sure which members are correct
        // until the values for bound.type are known.

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
        case XBOUND_TYPE_BOXLOCAL:
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
        case XBOUND_TYPE_3:
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
        else if (ent->bound.type == XBOUND_TYPE_BOXLOCAL)
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

#ifndef NON_MATCHING
// func_80018F50
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntReset__FP4xEnt")
#else
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

#ifndef NON_MATCHING
// func_800194CC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntRender__FP4xEnt")
#else
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

#ifndef NON_MATCHING
// func_80019E88
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollide__FP4xEntP6xScenef")
#else
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

// func_8001A0A4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntBeginCollide__FP4xEntP6xScenef")

// func_8001A21C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntEndCollide__FP4xEntP6xScenef")

// func_8001A250
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckEnv__FP4xEntP6xScene")

// func_8001A2E0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s",                                                            \
                   "xEntCollCheckOneGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEntP5xGrid")

// func_8001A530
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s",                                                            \
                   "xEntCollCheckByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A5C4
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s",                                                            \
                   "xEntCollCheckNPCsByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A610
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s",                                                            \
                   "xEntCollCheckStats__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A664
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s",                                                            \
                   "xEntCollCheckDyns__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A6B8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s",                                                            \
                   "xEntCollCheckNPCs__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt")

// func_8001A70C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollCheckOneEntNoDepen__FP4xEntP6xScenePv")

// func_8001AB80
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideFloor__FP4xEntP6xScenef")

// func_8001AE78
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideCeiling__FP4xEntP6xScenef")

// func_8001B018
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntCollideWalls__FP4xEntP6xScenef")

// func_8001B30C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntSetNostepNormAngle__Ff")

// func_8001B314
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetAllEntsBox__Fv")

// func_8001B320
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntAnimateCollision__FR4xEntb")

// func_8001B3BC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntValidType__FUc")

// func_8001B664
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntReposition__FR4xEntRC7xMat4x3")

// func_8001B70C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntInitShadow__FR4xEntR10xEntShadow")

// func_8001B788
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "__ami__5xVec3Ff")

// func_8001B7B0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "__apl__5xVec3Ff")

// func_8001B7D8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xBoundCenter__FP6xBound")

// func_8001B7E0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xBoundCenter__FPC6xBound")

// func_8001B7E8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntHide__FP4xEnt")

// func_8001B7F8
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntShow__FP4xEnt")

// func_8001B808
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetPos__FPC4xEnt")

// func_8001B830
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xEntGetCenter__FPC4xEnt")

// func_8001B854
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xRotCopy__FP4xRotPC4xRot")

// func_8001B878
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_8001B8DC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xMat3x3Rot__FP7xMat3x3PC5xVec3f")

// func_8001B90C
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xModelSetFrame__FP14xModelInstancePC7xMat4x3")

// func_8001B930
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xModelGetFrame__FP14xModelInstance")

// func_8001B938
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xVec3SMulBy__FP5xVec3f")

// func_8001B960
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xVec3SubFrom__FP5xVec3PC5xVec3")

// func_8001B994
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterFirstCell__FPP10xGridBoundR13xGridIterator")

// func_8001B9CC
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterFirstCell__FP5xGridiiR13xGridIterator")

// func_8001BA40
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterNextCell__FR13xGridIterator")

// func_8001BAB0
#pragma GLOBAL_ASM("asm/Core/x/xEnt.s", "xGridIterClose__FR13xGridIterator")
