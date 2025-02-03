#include "zEntSimpleObj.h"

#include <types.h>

static xShadowMgr* sMgrList;
static S32 sMgrCount;
static u32 sSimpleCustomCount;
static xSphere *sSimpleCustomList;

void zEntSimpleObj_MgrInit(zEntSimpleObj** entList, U32 entCount)
{
}

/* zEntTrackPhysics_Init (void *, void *) */
void zEntTrackPhysics_Init(void *arg0, void *arg1) {
    zEntSimpleObj_Init((zEntSimpleObj *) arg0, (xEntAsset *) arg1, 1);
}

/* zEntSimpleObj_Init (void *, void *) */
void zEntSimpleObj_Init(void *arg0, void *arg1) {
    zEntSimpleObj_Init((zEntSimpleObj *) arg0, (xEntAsset *) arg1, 0);
}

void zEntSimpleObj_Render(xEnt*)
{

}

void zEntSimpleObj_Init(zEntSimpleObj *ent, xEntAsset *asset, s8 arg2) {
    U32 sp8;
    RpAtomic *temp_r28;
    void *temp_r3_5;
    void *var_r31;
    U32 temp_r3_4;
    U32 temp_r3_6;
    void *temp_r3;
    void *temp_r3_2;
    xAnimPlay *temp_r3_3;
    void *temp_r4;

    zEntInit((zEnt *) ent, asset, 0x53494D50U);
    if (arg2 != 0) {
        ent->baseType = 0x3F;
    }
    if (arg2 != 0) {

    }
    ent->sasset = (xSimpleObjAsset*) (asset + 0x54);
    ent->sflags = 0;
    ent->pflags = 0;
    ent->penby |= 0x10;
    if (ent->sasset->collType & XENT_COLLTYPE_STAT) {
        ent->chkby = 0x18;
    } else {
        ent->chkby = 0;
    }
    ent->move = NULL;
    ent->update = (xEntUpdateCallback) zEntSimpleObj_Update;
    ent->eventFunc = (xBaseEventCB) zEntSimpleObjEventCB;
    ent->render = zEntSimpleObj_Render;
    if ((u8) ent->linkCount != 0) {
        if (arg2 != 0) {
            ent->link = (xLinkAsset*) ent->asset + 0x9C;
        } else {
            ent->link = (xLinkAsset*) ent->asset + 0x60;
        }
    } else {
        ent->link = NULL;
    }
    ent->eventFunc = (xBaseEventCB) zEntSimpleObjEventCB;
    temp_r28 = (RpAtomic*) xSTFindAsset(asset->animListID, &sp8);
    var_r31 = NULL;
    if (!(ent->miscflags & 1) && ((u32) ent->asset->animListID != 0U) && (temp_r3 = ent->model, ((temp_r3 == NULL) == 0)) && (temp_r3_2 = temp_r3->unkC, ((temp_r3_2 == NULL) == 0)) && (temp_r4 = temp_r3_2->unk10, ((temp_r4 == NULL) == 0)) && (strcmp("xEntAutoEventSimple", temp_r4->unk4) == 0)) {
        temp_r3_3 = ent->model->Anim;
        xAnimPlaySetState(temp_r3_3->Single, temp_r3_3->Table->StateList, 0.0f);
        ent->miscflags |= 1;
    } else {
        temp_r3_4 = asset->animListID;
        if ((temp_r3_4 != 0) && (ent->atbl == NULL)) {
            temp_r3_5 = xSTFindAsset(temp_r3_4, &sp8);
            var_r31 = temp_r3_5;
            if ((var_r31 != NULL) && ((temp_r3_6 = iAnimBoneCount(temp_r3_5), ((temp_r3_6 == 0U) != 0)) || (temp_r3_6 != iModelNumBones(temp_r28)))) {
                var_r31 = NULL;
            }
        }
    }
    ent->anim = var_r31;
    ent->animTime = 0.0f;
    zEntReset((zEnt *) ent);
}

void zEntSimpleObj_Move(xEnt*, xScene*, F32, xEntFrame*)
{
}

void zEntSimpleObj_Setup(zEntSimpleObj *arg0) 
{
    zEntSetup((zEnt *) arg0);
}

void zEntSimpleObj_Save(zEntSimpleObj *arg0, xSerial *arg1) 
{
    zEntSave((zEnt *) arg0, arg1);
}

void zEntSimpleObj_Load(zEntSimpleObj *arg0, xSerial *arg1) 
{
    zEntLoad((zEnt *) arg0, arg1);
}

void zEntSimpleObj_Update(zEntSimpleObj* ent, xScene* scene, float dt)
{
    void *temp_r3;
    f32 temp_f0;
    f32 temp_f1;
    xModelInstance *temp_r3_2;
    xModelInstance *temp_r4;
    xQuat *temp_r31;
    xVec3 *temp_r30;

    xEntUpdate((xEnt *) ent, scene, dt);
    temp_r3 = ent->anim;
    if (temp_r3 != NULL) {
        temp_r4 = ent->model;
        if ((temp_r4 != NULL) && !(temp_r4->Flags & 0x400)) {
            temp_f1 = iAnimDuration(temp_r3);
            ent->animTime += dt;
            temp_f0 = ent->animTime;
            if (temp_f0 >= temp_f1) {
                ent->animTime = temp_f0 - temp_f1;
            }
            temp_r31 = (xQuat*) giAnimScratch;
            temp_r30 = (xVec3*) ((char*) temp_r31 + 0x410);
            iAnimEval(ent->anim, ent->animTime, 0U, temp_r30, temp_r31);
            temp_r3_2 = ent->model;
            iModelAnimMatrices(temp_r3_2->Data, temp_r31, temp_r30, temp_r3_2->Mat + 0x1);
        }
    }
}

void zEntSimpleObj_Save(zEntSimpleObj* ent, xSerial* s)
{
    zEntSave((zEnt*) ent, s);
}

void zEntSimpleObj_Load(zEntSimpleObj* ent, xSerial* s)
{
    zEntLoad((zEnt*) ent, s);
}

void zEntSimpleObj_Reset(zEntSimpleObj* ent, xScene* scene)
{
    xEntBoundUpdateCallback temp_r12;

    zEntReset((zEnt *) ent);
    ent->animTime = 0.0f;
    ent->chkby &= 0xE3;
    if (ent->sasset->collType & 2) {
        ent->chkby |= 0x18;
    }
    temp_r12 = ent->bupdate;
    if (temp_r12 != NULL) {
        temp_r12(ent, (xVec3*) &ent->model->Mat->pos);
        return;
    }
    xEntDefaultBoundUpdate((xEnt *) ent, (xVec3*) &ent->model->Mat->pos);
}

void zEntSimpleObj_Setup(zEntSimpleObj* ent)
{
    zEntSetup((zEnt*) ent);
}
