#include "zEntSimpleObj.h"

#include <types.h>

static xSphere* sMgrList;
static S32 sMgrCount;
static u32 sSimpleCustomCount;
static xEnt** sSimpleCustomList;

void zEntSimpleObj_MgrInit(zEntSimpleObj** entList, U32 entCount)
{
    f32 sp14;
    RpClump* sp10;
    s32 spC;
    s32 sp8;
    RpAtomic* temp_r24;
    RwMatrixTag* temp_r4_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r10;
    s32 temp_r11;
    xEnt* temp_r28;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r6_4;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 var_ctr_2;
    s32 var_r3;
    s32 var_r6;
    u32 temp_r31;
    u32 temp_r6_3;
    u32 var_ctr;
    u32 var_r25;
    u32 var_r26;
    u32 var_r28;
    u32 var_r30_2;
    u32 var_r4;
    u8 temp_r4;
    void* temp_r3_3;
    xSphere* var_r25_2;
    zEntSimpleObj** temp_r27;
    zEntSimpleObj** var_r29;
    zEntSimpleObj** var_r29_2;
    zEntSimpleObj** var_r30;
    zEntSimpleObj* temp_r3;
    zEntSimpleObj* temp_r3_2;
    zEntSimpleObj* temp_r6_2;

    sMgrCount = 0;
    sMgrList = NULL;
    sSimpleCustomCount = 0;
    sSimpleCustomList = NULL;
    if (entCount != 0)
    {
        var_r26 = 0;
        temp_r27 = (zEntSimpleObj**)RwMalloc(entCount * 4);
        var_r25 = 0;
        temp_r31 = xStrHash("trailer_hitch\0xEntAutoEventSimple");
        var_r30 = entList;
        var_r29 = temp_r27;
        var_r28 = 0U;
        while (var_r28 < entCount)
        {
            temp_r3 = *var_r30;
            temp_r6 = temp_r3->sflags;
            if (!(temp_r6 & 0x10))
            {
                if ((temp_r3->update != (xEntUpdateCallback)zEntSimpleObj_Update) ||
                    (temp_r3->render != zEntSimpleObj_Render) ||
                    (temp_r3->eventFunc != (xBaseEventCB)zEntSimpleObjEventCB) ||
                    (temp_r3->move != NULL) ||
                    (temp_r4 = temp_r3->moreFlags, (((temp_r4 & 8) == 0) == 0)) ||
                    (temp_r4 & 0x20) || (temp_r3->miscflags & 1) || (temp_r3->atbl != NULL) ||
                    (temp_r6 & 4) || (temp_r6 & 8) || (temp_r31 == temp_r3->asset->modelInfoID) ||
                    (temp_r3->baseType == eBaseTypeTrackPhysics) || (temp_r3->driver != NULL))
                {
                    temp_r0 = (entCount - 1) - var_r25;
                    var_r25 += 1;
                    *(temp_r27 + (temp_r0 * 4)) = temp_r3;
                    temp_r6_2 = *var_r30;
                    if ((temp_r6_2->driver != NULL) && (temp_r6_2->move == NULL))
                    {
                        temp_r6_2->move = zEntSimpleObj_Move;
                        temp_r3_2 = *var_r30;
                        temp_r3_2->pflags |= 1;
                        (*var_r30)->frame = (xEntFrame*)xMemAlloc(gActiveHeap, 0xE4U, 0);
                    }
                }
                else
                {
                    var_r26 += 1;
                    temp_r3->baseFlags |= 0x80;
                    *var_r29 = *var_r30;
                    var_r29 += 4;
                }
            }
            var_r30 += 4;
            var_r28 += 1;
        }

        if (var_r25 != 0)
        {
            sSimpleCustomCount = var_r25;
            sSimpleCustomList = (xEnt**)xMemAlloc(gActiveHeap, var_r25 * 4, 0);
            var_r4 = 0;
            if (var_r25 > 0U)
            {
                temp_r6_3 = var_r25 - 8;
                if (var_r25 > 8U)
                {
                    var_r3 = 0;
                    temp_r0_2 = entCount - 1;
                    var_ctr = (u32)(temp_r6_3 + 7) >> 3U;
                    if (temp_r6_3 > 0U)
                    {
                        do
                        {
                            *(sSimpleCustomList + var_r3) =
                                *(temp_r27 + ((temp_r0_2 - var_r4) * 4));
                            *(sSimpleCustomList + (var_r3 + 4)) =
                                *(temp_r27 + ((temp_r0_2 - (var_r4 + 1)) * 4));
                            *(sSimpleCustomList + (var_r3 + 8)) =
                                *(temp_r27 + ((temp_r0_2 - (var_r4 + 2)) * 4));
                            temp_r10 = (temp_r0_2 - (var_r4 + 5)) * 4;
                            temp_r8 = (temp_r0_2 - (var_r4 + 6)) * 4;
                            temp_r11 = var_r3 + 0x10;
                            temp_r9 = var_r3 + 0x14;
                            *(sSimpleCustomList + (var_r3 + 0xC)) =
                                *(temp_r27 + ((temp_r0_2 - (var_r4 + 3)) * 4));
                            temp_r7 = var_r3 + 0x18;
                            temp_r5 = var_r3 + 0x1C;
                            temp_r6_4 = (temp_r0_2 - (var_r4 + 7)) * 4;
                            temp_r28 = *(temp_r27 + ((temp_r0_2 - (var_r4 + 4)) * 4));
                            var_r3 += 0x20;
                            var_r4 += 8;
                            *(sSimpleCustomList + temp_r11) = temp_r28;
                            *(sSimpleCustomList + temp_r9) = *(temp_r27 + temp_r10);
                            *(sSimpleCustomList + temp_r7) = *(temp_r27 + temp_r8);
                            *(sSimpleCustomList + temp_r5) = *(temp_r27 + temp_r6_4);
                            var_ctr -= 1;
                        } while (var_ctr != 0);
                    }
                }
                var_r6 = var_r4 * 4;
                var_ctr_2 = var_r25 - var_r4;
                if (var_r4 < var_r25)
                {
                    do
                    {
                        temp_r0_3 = ((entCount - 1) - var_r4) * 4;
                        var_r4 += 1;
                        *(sSimpleCustomList + var_r6) = *(temp_r27 + temp_r0_3);
                        var_r6 += 4;
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
            }
        }
        else
        {
            sSimpleCustomCount = 0;
            sSimpleCustomList = NULL;
        }
        if (var_r26 == 0)
        {
            RwFree(temp_r27);
            return;
        }
        sMgrCount = var_r26;
        sMgrList = (xSphere*)xMemAlloc(gActiveHeap, var_r26 << 6, 0x40);
        var_r29_2 = temp_r27;
        var_r30_2 = 0U;
        var_r25_2 = sMgrList;
        // while (var_r30_2 < var_r26)
        // {
        //     temp_r24 = (*var_r29_2)->model->Data;
        //     sp8 = temp_r24->boundingSphere.center.x;
        //     spC = temp_r24->worldBoundingSphere.center.x;
        //     sp10 = temp_r24->clump;
        //     sp14 = temp_r24->inClumpLink;
        //     temp_r24->unk28 *= 1.1f;
        //     iModelCull(temp_r24, (*var_r29_2)->model->Mat);
        //     RwSphereAssign(&temp_r24->boundingSphere, (RwSphere*)&sp8);
        //     var_r25_2->unk0 = temp_r24->worldBoundingSphere.center.x;
        //     var_r25_2->unk4 = temp_r24->worldBoundingSphere.center.y;
        //     var_r25_2->unk8 = temp_r24->worldBoundingSphere.center.z;
        //     var_r25_2->unkC = temp_r24->worldBoundingSphere.radius;
        //     temp_r3_3 = zLOD_Get(*var_r29_2);
        //     if (temp_r3_3 != NULL)
        //     {
        //         temp_r4_2 = (*var_r29_2)->model->Mat;
        //         temp_f2 = temp_r4_2->right.x;
        //         temp_f1 = temp_r4_2->right.y;
        //         temp_f3 = temp_r4_2->right.z;
        //         var_f2 = (temp_f3 * temp_f3) + ((temp_f2 * temp_f2) + (temp_f1 * temp_f1));
        //         if (var_f2 < 0.0001f)
        //         {
        //             var_f2 = 1.0f;
        //         }
        //         temp_f1_2 = temp_r3_3->unk14;
        //         if (temp_f1_2 != 0.0f)
        //         {
        //             var_f0 = temp_f1_2 * var_f2;
        //         }
        //         else
        //         {
        //             var_f0 = 1e38f;
        //         }
        //         var_r25_2->unk10 = var_f0;
        //         temp_f1_3 = temp_r3_3->unk18;
        //         if (temp_f1_3 != 0.0f)
        //         {
        //             var_f0_2 = temp_f1_3 * var_f2;
        //         }
        //         else
        //         {
        //             var_f0_2 = 1e38f;
        //         }
        //         var_r25_2->unk14 = var_f0_2;
        //         temp_f1_4 = temp_r3_3->unk1C;
        //         if (temp_f1_4 != 0.0f)
        //         {
        //             var_f0_3 = temp_f1_4 * var_f2;
        //         }
        //         else
        //         {
        //             var_f0_3 = 1e38f;
        //         }
        //         var_r25_2->unk18 = var_f0_3;
        //         temp_f1_5 = temp_r3_3->unk4;
        //         if (temp_f1_5 != 0.0f)
        //         {
        //             var_f0_4 = temp_f1_5 * var_f2;
        //         }
        //         else
        //         {
        //             var_f0_4 = 1e38f;
        //         }
        //         var_r25_2->unk1C = var_f0_4;
        //         var_r25_2->unk24 = temp_r3_3->unk0;
        //         var_r25_2->unk28 = temp_r3_3->unk8;
        //         var_r25_2->unk2C = temp_r3_3->unkC;
        //         var_r25_2->unk30 = temp_r3_3->unk10;
        //         if ((u32)var_r25_2->unk28 == 0U)
        //         {
        //             var_r25_2->unk10 = 1e38f;
        //         }
        //         if ((u32)var_r25_2->unk2C == 0U)
        //         {
        //             var_r25_2->unk14 = 1e38f;
        //         }
        //         if ((u32)var_r25_2->unk30 == 0U)
        //         {
        //             var_r25_2->unk18 = 1e38f;
        //         }
        //     }
        //     else
        //     {
        //         var_r25_2->unk10 = 1e38f;
        //         var_r25_2->unk14 = 1e38f;
        //         var_r25_2->unk18 = 1e38f;
        //         var_r25_2->unk1C = 1e38f;
        //         var_r25_2->unk24 = (*var_r29_2)->unk24->unk34;
        //         var_r25_2->unk28 = 0U;
        //         var_r25_2->unk2C = 0U;
        //         var_r25_2->unk30 = 0U;
        //     }
        //     var_r25_2->unk20 = (s16)(*var_r29_2)->unk18;
        //     var_r25_2->unk34 = (*var_r29_2)->unk24->unk4C;
        //     var_r25_2->unk38 = *var_r29_2;
        //     var_r25_2->unk22 = 0xFF;
        //     xEntUpdate(*var_r29_2, globals.sceneCur, 0.0f);
        //     var_r25_2 += 0x40;
        //     var_r29_2 += 4;
        //     var_r30_2 += 1;
        // }
        RwFree(temp_r27);
    }
}

void zEntSimpleObj_MgrUpdateRender(RpWorld* world, F32 dt)
{
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    f32 spC;
    xVec3 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f3;
    f32 temp_f4;
    u32 var_r30;
    u8 var_r27;
    xModelInstance* var_r3;
    xModelInstance* var_r3_2;
    xEnt* temp_r28;
    xModelInstance* temp_r3;
    xModelInstance* temp_r5;
    xQuat* temp_r26;
    xSphere* var_r29;
    xVec3* temp_r25;

    var_r29 = sMgrList;
    for (var_r30 = 0; var_r30 < (u32)sMgrCount; var_r30++)
    {
        temp_r28 = (xEnt*)&var_r29[3].center.z;
        if (xEntIsVisible(temp_r28) != 0U)
        {
            temp_f2 = globals.camera.mat.at.x - *((F32*)var_r29 + 0x0);
            temp_f4 = globals.camera.mat.at.y - *((F32*)var_r29 + 0x1);
            temp_f3 = globals.camera.mat.at.z - *((F32*)var_r29 + 0x2);
            temp_f30 = (temp_f3 * temp_f3) + ((temp_f2 * temp_f2) + (temp_f4 * temp_f4));
            if (!(temp_f30 > *((F32*)var_r29 + 0x7)) && (iModelSphereCull((xSphere*)var_r29) == 0))
            {
                var_r27 = 0;
                if (temp_f30 > *((F32*)var_r29 + 0x4))
                {
                    var_r27 = 1;
                    if (temp_f30 > *((F32*)var_r29 + 0x5))
                    {
                        var_r27 = 2;
                        if (temp_f30 > *((F32*)var_r29 + 0x6))
                        {
                            var_r27 = 3;
                        }
                    }
                }
                temp_r5 = temp_r28->model;
                temp_r5->Flags &= 0xFBFF;
                *((U8*)var_r29 + 0x22) = var_r27;
                temp_r5->Bucket = (xModelBucket**)var_r29 + (((var_r27 * 4) & 0x3FC) + 0x24);
                temp_r5->Data = (*temp_r5->Bucket)->OriginalData;
                if (var_r27 == 0)
                {
                    var_r3 = temp_r5->Next;
                    while (var_r3 != NULL)
                    {
                        var_r3->Flags = (u16)(var_r3->Flags & 0xFBFF);
                        var_r3 = var_r3->Next;
                    }
                }
                else
                {
                    var_r3_2 = temp_r5->Next;
                    while (var_r3_2 != NULL)
                    {
                        var_r3_2->Flags = (u16)(var_r3_2->Flags | 0x400);
                        var_r3_2 = var_r3_2->Next;
                    }
                }
                if ((((zEntSimpleObj*)temp_r28)->anim != NULL) && (zGameIsPaused() == 0))
                {
                    temp_f1 = iAnimDuration(((zEntSimpleObj*)temp_r28));
                    ((zEntSimpleObj*)temp_r28)->animTime += dt;
                    temp_f0 = ((zEntSimpleObj*)temp_r28)->animTime;
                    if (temp_f0 >= temp_f1)
                    {
                        ((zEntSimpleObj*)temp_r28)->animTime = temp_f0 - temp_f1;
                    }
                    temp_r26 = (xQuat*)giAnimScratch;
                    temp_r25 = (xVec3*)temp_r26 + 0x410;
                    iAnimEval(((zEntSimpleObj*)temp_r28)->anim,
                              ((zEntSimpleObj*)temp_r28)->animTime, 0U, temp_r25, temp_r26);
                    temp_r3 = temp_r28->model;
                    iModelAnimMatrices(temp_r3->Data, temp_r26, temp_r25,
                                       (RwMatrixTag*)&temp_r3->Mat);
                }
                xLightKit_Enable(temp_r28->lightKit, globals.currWorld);
                zEntSimpleObj_Render(temp_r28);
                if ((var_r27 == 0) && (xrand() < 0x55U))
                {
                    xVec3Copy(&sp8, (xVec3*)&temp_r28->model->Mat->pos);
                    spC += (0.25f * xurand()) + 0.25f;
                    zFX_SpawnBubbleTrail(&sp8, (xrand() & 7) + 1, &temp_r28->asset->pos, NULL);
                }
            }
        }
        var_r29 += 0x40;
    }
}

void zEntSimpleObj_MgrCustomUpdate(zScene* s, F32 dt)
{
    s32 var_r31;
    u32 var_r30;
    xEnt* temp_r3;

    var_r31 = 0;
    var_r30 = 0U;

    while (var_r30 < (u32)sSimpleCustomCount)
    {
        temp_r3 = sSimpleCustomList[var_r31];
        if (!(temp_r3->baseFlags & 0x40))
        {
            temp_r3->update(temp_r3, s, dt);
        }
        var_r31 += 1;
        var_r30 += 1;
    }
}

void zEntSimpleObj_MgrCustomRender()
{
    s32 var_r30;
    u32 var_r29;
    xEnt* temp_r3;

    var_r30 = 0;
    var_r29 = 0U;

    while (var_r29 < (u32)sSimpleCustomCount)
    {
        xLightKit_Enable(sSimpleCustomList[var_r30]->lightKit, globals.currWorld);
        temp_r3 = sSimpleCustomList[var_r30];
        temp_r3->render(temp_r3);
        var_r30 += 1;
        var_r29 += 1;
    }
}

void zEntTrackPhysics_Init(void* ent, void* asset)
{
    zEntSimpleObj_Init((zEntSimpleObj*)ent, (xEntAsset*)asset, 1);
}

void zEntSimpleObj_Init(void* ent, void* asset)
{
    zEntSimpleObj_Init((zEntSimpleObj*)ent, (xEntAsset*)asset, 0);
}

void zEntSimpleObj_Render(xEnt* ent)
{
    if (ent->model == NULL || xEntIsVisible(ent) == FALSE)
    {
        return;
    }

    xModelRender(ent->model);
}

void zEntSimpleObj_Init(zEntSimpleObj* ent, xEntAsset* asset, bool arg2)
{
    U32 sp8;
    RpAtomic* temp_r28;
    void* temp_r3_5;
    void* var_r31;
    U32 temp_r3_4;
    U32 temp_r3_6;
    xModelInstance* temp_r3;
    xAnimPlay* temp_r3_2;
    xAnimPlay* temp_r3_3;
    xAnimTable* temp_r4;
    xSimpleObjAsset* temp_r0;

    zEntInit((zEnt*)ent, asset, 0x53494D50U);

    if (arg2 != 0)
    {
        ent->baseType = 0x3F;
    }

    if (arg2 != 0)
    {
        temp_r0 = (xSimpleObjAsset*)(asset + 1);
    }
    else
    {
        temp_r0 = (xSimpleObjAsset*)(asset + 1);
    }

    ent->sasset = temp_r0;
    ent->sflags = 0;
    ent->pflags = 0;
    ent->penby |= 0x10;
    if (ent->sasset->collType & XENT_COLLTYPE_STAT)
    {
        ent->chkby = 0x18;
    }
    else
    {
        ent->chkby = 0;
    }
    ent->move = NULL;
    ent->update = (xEntUpdateCallback)zEntSimpleObj_Update;
    ent->eventFunc = (xBaseEventCB)zEntSimpleObjEventCB;
    ent->render = zEntSimpleObj_Render;
    if ((u8)ent->linkCount != 0)
    {
        if (arg2 != 0)
        {
            ent->link = (xLinkAsset*)((char*)ent->asset + 0x9C);
        }
        else
        {
            ent->link = (xLinkAsset*)((char*)ent->asset + 0x60);
        }
    }
    else
    {
        ent->link = NULL;
    }
    ent->eventFunc = (xBaseEventCB)zEntSimpleObjEventCB;
    temp_r28 = (RpAtomic*)xSTFindAsset(asset->modelInfoID, &sp8);
    var_r31 = NULL;
    if (!(ent->miscflags & 1) && (ent->asset->modelInfoID != 0U) &&
        (temp_r3 = ent->model, ((temp_r3 == NULL) == 0)) &&
        (temp_r3_2 = temp_r3->Anim, ((temp_r3_2 == NULL) == 0)) &&
        (temp_r4 = temp_r3_2->Table, ((temp_r4 == NULL) == 0)) &&
        (strcmp(&"trailer_hitch\0xEntAutoEventSimple"[0xE], temp_r4->Name) == 0))
    {
        temp_r3_3 = ent->model->Anim;
        xAnimPlaySetState(temp_r3_3->Single, temp_r3_3->Table->StateList, 0.0f);
        ent->miscflags |= 1;
    }
    else
    {
        temp_r3_4 = asset->animListID;
        if ((temp_r3_4 != 0) && (ent->atbl == NULL))
        {
            temp_r3_5 = xSTFindAsset(temp_r3_4, &sp8);
            var_r31 = temp_r3_5;
            if ((var_r31 != NULL) &&
                ((temp_r3_6 = iAnimBoneCount(temp_r3_5), ((temp_r3_6 == 0U) != 0)) ||
                 (temp_r3_6 != iModelNumBones(temp_r28))))
            {
                var_r31 = NULL;
            }
        }
    }
    ent->anim = var_r31;
    ent->animTime = 0.0f;
    zEntReset((zEnt*)ent);
}

void zEntSimpleObj_Move(xEnt*, xScene*, F32, xEntFrame*)
{
}

void zEntSimpleObj_Setup(zEntSimpleObj* arg0)
{
    zEntSetup((zEnt*)arg0);
}

void zEntSimpleObj_Save(zEntSimpleObj* arg0, xSerial* arg1)
{
    zEntSave((zEnt*)arg0, arg1);
}

void zEntSimpleObj_Load(zEntSimpleObj* arg0, xSerial* arg1)
{
    zEntLoad((zEnt*)arg0, arg1);
}

void zEntSimpleObj_Update(zEntSimpleObj* ent, xScene* scene, float dt)
{
    void* temp_r3;
    f32 temp_f0;
    f32 temp_f1;
    xModelInstance* temp_r3_2;
    xModelInstance* temp_r4;
    xQuat* temp_r31;
    xVec3* temp_r30;

    xEntUpdate((xEnt*)ent, scene, dt);
    temp_r3 = ent->anim;
    if (temp_r3 != NULL)
    {
        temp_r4 = ent->model;
        if ((temp_r4 != NULL) && !(temp_r4->Flags & 0x400))
        {
            temp_f1 = iAnimDuration(temp_r3);
            ent->animTime += dt;
            temp_f0 = ent->animTime;
            if (temp_f0 >= temp_f1)
            {
                ent->animTime = temp_f0 - temp_f1;
            }
            temp_r31 = (xQuat*)giAnimScratch;
            temp_r30 = (xVec3*)((char*)temp_r31 + 0x410);
            iAnimEval(ent->anim, ent->animTime, 0U, temp_r30, temp_r31);
            temp_r3_2 = ent->model;
            iModelAnimMatrices(temp_r3_2->Data, temp_r31, temp_r30, temp_r3_2->Mat + 0x1);
        }
    }
}

void zEntSimpleObj_Reset(zEntSimpleObj* ent, xScene* scene)
{
    xEntBoundUpdateCallback temp_r12;

    zEntReset((zEnt*)ent);
    ent->animTime = 0.0f;
    ent->chkby &= 0xE3;
    if (ent->sasset->collType & 2)
    {
        ent->chkby |= 0x18;
    }
    temp_r12 = ent->bupdate;
    if (temp_r12 != NULL)
    {
        temp_r12(ent, (xVec3*)&ent->model->Mat->pos);
        return;
    }
    xEntDefaultBoundUpdate((xEnt*)ent, (xVec3*)&ent->model->Mat->pos);
}

s32 zEntSimpleObjEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* base3)
{
    zEntSimpleObj* toSimpleObj = (zEntSimpleObj*)to;

    switch (toEvent)
    {
    case eEventFastVisible:
    case eEventVisible:
        xEntShow((xEnt*)to);
        if ((toParam != NULL) && ((S32)(0.5f + toParam[0]) == 0x4D))
        {
            zFXPopOn((xEnt&)*to, toParam[1], toParam[2]);
        }
        break;
    case eEventFastInvisible:
    case eEventInvisible:
        xEntHide((xEnt*)to);
        if ((toParam != NULL) && ((S32)(0.5f + toParam[0]) == 0x4D))
        {
            zFXPopOff((xEnt&)*to, toParam[1], toParam[2]);
        }
        break;
    case eEventCollision_Visible_On:
        xEntShow((xEnt*)to);
        if ((toParam != NULL) && ((S32)(0.5f + toParam[0]) == 0x4D))
        {
            zFXPopOn((xEnt&)*to, toParam[1], toParam[2]);
        }
        /* fallthrough */
    case eEventCollisionOn:
        toSimpleObj->chkby = 0x18;
        if (toSimpleObj->bupdate != NULL)
        {
            toSimpleObj->bupdate((xEnt*)to, (xVec3*)&toSimpleObj->model->Mat->pos);
        }
        else
        {
            xEntDefaultBoundUpdate((xEnt*)to, (xVec3*)&toSimpleObj->model->Mat->pos);
        }
        break;
    case eEventCollision_Visible_Off:
        xEntHide((xEnt*)to);
        if ((toParam != NULL) && ((S32)(0.5f + toParam[0]) == 0x4D))
        {
            zFXPopOff((xEnt&)*to, toParam[1], toParam[2]);
        }
        /* fallthrough */
    case eEventCollisionOff:
        toSimpleObj->chkby = 0;
        if (toSimpleObj->bupdate != NULL)
        {
            toSimpleObj->bupdate((xEnt*)to, (xVec3*)&toSimpleObj->model->Mat->pos);
        }
        else
        {
            xEntDefaultBoundUpdate((xEnt*)to, (xVec3*)&toSimpleObj->model->Mat->pos);
        }
        break;
    case eEventCameraCollideOn:
        zCollGeom_CamEnable((xEnt*)to);
        break;
    case eEventCameraCollideOff:
        zCollGeom_CamDisable((xEnt*)to);
        break;
    case eEventReset:
        zEntSimpleObj_Reset((zEntSimpleObj*)to, globals.sceneCur);
        break;
    case eEventAnimPlay:
    case eEventAnimPlayLoop:
    case eEventAnimStop:
    case eEventAnimPause:
    case eEventAnimResume:
    case eEventAnimTogglePause:
    case eEventAnimPlayRandom:
    case eEventAnimPlayMaybe:
        zEntAnimEvent((zEnt*)to, toEvent, toParam);
        break;
    case eEventSetSkyDome:
        xSkyDome_AddEntity((xEnt*)to, (s32)toParam[0], (s32)toParam[1]);
        break;
    case eEventSetGoo:
        zGooAdd((xEnt*)to, toParam[0], (s32)toParam[1]);
        break;
    case eEventGooSetWarb:
        zFXGooEventSetWarb((xEnt*)to, toParam);
        break;
    case eEventGooSetFreezeDuration:
        zFXGooEventSetFreezeDuration((xEnt*)to, toParam[0]);
        break;
    case eEventGooMelt:
        zFXGooEventMelt((xEnt*)to);
        break;
    case eEventLaunchShrapnel:
        zShrapnelAsset* shrapnel = (zShrapnelAsset*)base3;
        if (shrapnel != NULL && shrapnel->initCB != NULL)
        {
            shrapnel->initCB(shrapnel, toSimpleObj->model, NULL, NULL);
        }
        break;
    case eEventDestroy:
        xEntHide((xEnt*)to);
        break;
    }
    return 1;
}
