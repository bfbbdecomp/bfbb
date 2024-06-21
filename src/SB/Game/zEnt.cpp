#include "zEnt.h"

#include <types.h>

#include "zGlobals.h"
#include "zAnimList.h"
#include "zNPCTypeCommon.h"
#include "xNPCBasic.h"
#include "xstransvc.h"
#include "xString.h"
#include "xMath.h"
#include "xutil.h"
#include "iModel.h"
#include "xSnd.h"
#include "xCollide.h"
#include "CodeWarrior/cstring"
#include "CodeWarrior/stdio.h"

extern _ShadowParams gShadowParams[5];
extern uint32 g_hash_xentanim[5];
extern int8* g_strz_xentanim[5];

extern xVec3 _1228;
extern int8 zEnt_strings[];

extern float32 _839_zEnt;
extern float32 _840_zEnt;
extern float32 _852_zEnt;
extern float32 _853_zEnt;
extern float32 _854_zEnt;
extern float32 _1032_zEnt;
extern float32 _1033_zEnt;
extern float32 _1039_zEnt;
extern float32 _1267_zEnt;
extern float32 _1268_zEnt;
extern float32 _1269_zEnt;
extern float32 _1270_zEnt;


void zEntInit(zEnt* ent, xEntAsset* asset, uint32 type)
{
    xEntInit(ent, asset);
    ent->update = (xEntUpdateCallback)zEntUpdate;

    // Surprisingly, this is not a switch statement.
    if (type == 0x504c5952)
    {
        ent->collType = 0x10;
        ent->collLev = 0x4;
        ent->bound.type = 0x1;
        zEntParseModelInfo(ent, asset->modelInfoID);
    }
    else if (type == 0x56494c20)
    {
        ent->collType = 0x8;
        ent->collLev = 0x4;
        ent->bound.type = 0x1;
        ent->moreFlags = ent->moreFlags | 0x10;
        zEntParseModelInfo(ent, asset->modelInfoID);
    }
    else if (type == 0x4954454d)
    {
        ent->collType = 0x2;
        ent->collLev = 0x4;
        ent->bound.type = 0x1;
        ent->eventFunc = NULL;
        zEntParseModelInfo(ent, asset->modelInfoID);
    }
    else if (type == 0x504b5550)
    {
        ent->collType = 0;
        ent->bound.type = 0;
    }
    else if (type == 0x504c4154)
    {
        ent->collType = 0x4;
        if (asset->moreFlags & 2)
        {
            ent->collLev = 0x5;
        }
        else
        {
            ent->collLev = 0x4;
        }
        zEntParseModelInfo(ent, asset->modelInfoID);
        ent->bound.type = 0x4;
        ent->bound.mat = (xMat4x3*)ent->model->Mat;
    }
    else if (type == 0x50454e44)
    {
        ent->collType = 0x4;
        if (asset->moreFlags & 2)
        {
            ent->collLev = 0x5;
        }
        else
        {
            ent->collLev = 0x4;
        }
        zEntParseModelInfo(ent, asset->modelInfoID);
        ent->bound.type = 0x4;
        ent->bound.mat = (xMat4x3*)ent->model->Mat;
    }
    else if (type == 0x54524947)
    {
        ent->collType = 0x1;
        ent->bound.type = 0;
    }
    else if (type == 0x48414e47)
    {
        ent->collType = 0x4;
        ent->collLev = 0x4;
        ent->bound.type = 0x1;
        zEntParseModelInfo(ent, asset->modelInfoID);
    }
    else if (type == 0x53494d50)
    {
        ent->collType = 0x2;
        if (asset->moreFlags & 2)
        {
            ent->collLev = 0x5;
        }
        else
        {
            ent->collLev = 0x4;
        }
        ent->bound.type = 0x4;
        zEntParseModelInfo(ent, asset->modelInfoID);
        ent->bound.mat = (xMat4x3*)ent->model->Mat;
    }
    else if (type == 0x55492020)
    {
    }
    else if (type == 0x4255544e)
    {
        ent->collType = 0x4;
        if (asset->moreFlags & 2)
        {
            ent->collLev = 0x5;
        }
        else
        {
            ent->collLev = 0x4;
        }
        ent->bound.type = 0x4;
        ent->moreFlags = ent->moreFlags | 0x10;
        zEntParseModelInfo(ent, asset->modelInfoID);
        ent->bound.mat = (xMat4x3*)ent->model->Mat;
    }
    else if (type == 0x44535452)
    {
        ent->collType = 0x4;
        if (asset->moreFlags & 2)
        {
            ent->collLev = 0x5;
        }
        else
        {
            ent->collLev = 0x4;
        }
        ent->bound.type = 0x4;
        ent->moreFlags = ent->moreFlags | 0x10;
        zEntParseModelInfo(ent, asset->modelInfoID);
        ent->bound.mat = (xMat4x3*)ent->model->Mat;
    }
    else if (type == 0x4547454e)
    {
        ent->collType = 0x4;
        if (asset->moreFlags & 2)
        {
            ent->collLev = 0x5;
        }
        else
        {
            ent->collLev = 0x4;
        }
        ent->bound.type = 0x4;
        zEntParseModelInfo(ent, asset->modelInfoID);
        ent->bound.mat = (xMat4x3*)ent->model->Mat;
    }
    else if (type == 0x54424f58)
    {
        ent->collType = 0x2;
        ent->collLev = 0x5;
        ent->bound.type = 0x4;
        zEntParseModelInfo(ent, asset->modelInfoID);
        ent->bound.mat = (xMat4x3*)ent->model->Mat;
    }

    if (asset->animListID != 0)
    {
        int32 num_used = zAnimListGetNumUsed(asset->animListID);
        if (num_used > 0)
        {
            ent->atbl = zAnimListGetTable(asset->animListID);
            xAnimPoolAlloc(&globals.sceneCur->mempool, ent, ent->atbl, ent->model);
            xAnimState* ast = xAnimTableGetState(ent->atbl, zEnt_strings);
            if (ast != NULL)
            {
                xAnimSingle* single = ent->model->Anim->Single;
                single->State = ast;
                single->Time = _839_zEnt;
                single->CurrentSpeed = _840_zEnt;
                xModelEval(ent->model);
            }
        }
        else
        {
            ent->atbl = NULL;
        }
    }
    else
    {
        ent->atbl = NULL;
    }

    xEntInitForType(ent);
}


void zEntSetup(zEnt* ent)
{
    xEntSetup(ent);
    checkpoint_collision_hack(ent);
}


#ifdef NON_MATCHING
// This can't OK right now because it has static locals that are in zDispatcher.s
void checkpoint_collision_hack(zEnt* ent)
{
    static signed char init;
    static uint32 model_id;

    if (init == 0)
    {
        model_id = xStrHash(zEnt_strings + 5);
        init = 1;
    }
    if (ent->asset->modelInfoID == model_id)
    {
        ent->bound.type = 0x2;
        xVec3* lower = &ent->bound.box.box.lower;
        xVec3* upper = &ent->bound.box.box.upper;
        *lower = *upper = xEntGetFrame(ent)->pos;

        lower->x = lower->x + _852_zEnt;
        lower->z = lower->z + _852_zEnt;

        upper->x = upper->x + _853_zEnt;
        upper->y = upper->y + _854_zEnt;
        upper->z = upper->z + _853_zEnt;

        xEntDefaultBoundUpdate(ent, &xEntGetFrame(ent)->pos);

        ent->miscflags = ent->miscflags | 8;

        xEntAnimateCollision(*ent, 0);
        xModelAnimCollStop(*(ent->collModel != NULL ? ent->collModel : ent->model));

        ent->moreFlags = ent->moreFlags & 0xdd;
        ent->asset->moreFlags = ent->asset->moreFlags & 0xdd;
        ent->baseFlags = ent->baseFlags & 0xffef;
        ent->asset->baseFlags = ent->asset->baseFlags & 0xffef;
    }
}
#endif


void zEntSave(zEnt* ent, xSerial* s)
{
    xEntSave(ent, s);
}


void zEntLoad(zEnt* ent, xSerial* s)
{
    xEntLoad(ent, s);
}


void zEntReset(zEnt* ent)
{
    xEntReset(ent);

    if (ent->asset->animListID != 0 && ent->atbl != NULL)
    {
        xAnimState* ast = xAnimTableGetState(ent->atbl, zEnt_strings);
        if (ast != NULL)
        {
            xAnimSingle* single = ent->model->Anim->Single;
            single->State = ast;
            single->Time = _839_zEnt;
            single->CurrentSpeed = _840_zEnt;
            xModelEval(ent->model);
        }
    }

    if (!(ent->miscflags & 1) && ent->asset->modelInfoID != 0 && ent->model != NULL &&
        ent->model->Anim != NULL && ent->model->Anim->Table != NULL &&
        strcmp(zEnt_strings + 21, ent->model->Anim->Table->Name) == 0)
    {
        ent->model->Anim = ent->model->Anim;
        xAnimPlaySetState(ent->model->Anim->Single, ent->model->Anim->Table->StateList, _839_zEnt);
        ent->miscflags = ent->miscflags | 1;
    }
    checkpoint_collision_hack(ent);
}


void zEntUpdate(zEnt* ent, zScene* scene, float32 elapsedSec)
{
    xEntUpdate(ent, scene, elapsedSec);
}


void zEntEventAll(xBase* from, uint32 fromEvent, uint32 toEvent, float32* toParam)
{
    zScene* s = globals.sceneCur;
    for (uint16 i = 0; i < s->num_base; i++)
    {
        zEntEvent(from, fromEvent, s->base[i], toEvent, toParam, NULL, 0);
    }
}


void zEntEventAllOfType(xBase* from, uint32 fromEvent, uint32 toEvent, float32* toParam,
                        uint32 type)
{
    zScene* s = globals.sceneCur;
    if (s == NULL)
    {
        return;
    }

    for (uint16 i = 0; i < s->num_base; i++)
    {
        xBase* base = s->base[i];
        if (type == base->baseType)
        {
            zEntEvent(from, fromEvent, base, toEvent, toParam, NULL, 0);
        }
    }
}


void zEntEventAllOfType(uint32 toEvent, uint32 type)
{
    zEntEventAllOfType(NULL, 0, toEvent, NULL, type);
}

#ifdef NON_MATCHING
// regalloc
xModelInstance* zEntRecurseModelInfo(void* info, xEnt* ent)
{
    xModelAssetInfo* zinfo = (xModelAssetInfo*)info;
    xModelAssetInst* zinst = (xModelAssetInst*)(zinfo + 1);
    uint32 bufsize;
    xModelInstance* tempInst[64];

    for (uint32 i = 0; i < zinfo->NumModelInst; i++)
    {
        RpAtomic* imodel = (RpAtomic*)xSTFindAsset(zinst[i].ModelID, &bufsize);
        if (*(uint32*)&imodel->object.object == 0x464e494d)
        {
            tempInst[i] = zEntRecurseModelInfo(imodel, ent);
            if (i != 0)
            {
                tempInst[i]->Flags |= zinst[i].Flags;
                tempInst[i]->BoneIndex = zinst[i].Bone;
                xModelInstanceAttach(tempInst[i], tempInst[zinst[i].Parent]);
            }
        }
        else
        {
            if (i == 0)
            {
                // tempInst[i] (r30) gets stored in r4 here temporarily instead of being accessed directly.
                tempInst[i]->Next = xModelInstanceAlloc(imodel, ent, 0, 0, 0);
                tempInst[i]->Next->modelID = zinst[i].ModelID;
                while (imodel = iModelFile_RWMultiAtomic(imodel), imodel != NULL)
                {
                    xModelInstanceAttach(xModelInstanceAlloc(imodel, ent, 0x2000, 0, NULL),
                                         tempInst[i]);
                }
            }
            else
            {
                tempInst[i] = xModelInstanceAlloc(imodel, ent, zinst[i].Flags, zinst[i].Bone, NULL);
                xModelInstanceAttach(tempInst[i], tempInst[zinst[i].Parent]);

                while (imodel = iModelFile_RWMultiAtomic(imodel), imodel != NULL)
                {
                    xModelInstanceAttach(xModelInstanceAlloc(imodel, ent, 0x2000, 0, NULL),
                                         tempInst[i]);
                }
            }
        }
    }
    if (zinfo->AnimTableID != 0)
    {
        xAnimTable* table = (xAnimTable*)xSTFindAsset(zinfo->AnimTableID, &bufsize);
        tempInst[0]->Anim = xAnimPoolAlloc(&globals.sceneCur->mempool, ent, table, tempInst[0]);
    }
    return tempInst[0];
}
#endif


void zEntParseModelInfo(xEnt* ent, uint32 assetID)
{
    uint32 bufsize[4];
    void* info = xSTFindAsset(assetID, bufsize);
    if (*(uint32*)info == 0x464e494d)
    {
        ent->model = zEntRecurseModelInfo(info, ent);
    }
    else
    {
        xEntLoadModel(ent, (RpAtomic*)info);
        ent->model->modelID = assetID;
    }
}

#ifdef NON_MATCHING
// This function suffers from a couple floating point memes
// Additionally it has a jumptable that needs to be generated in the correct place.
void zEntAnimEvent(zEnt* ent, uint32 animEvent, const float32* animParam)
{
    xAnimPlay* play = ent->model->Anim;
    if (play == NULL)
    {
        return;
    }

    xAnimSingle* single = play->Single;
    if (single == NULL)
    {
        return;
    }

    if (ent->miscflags & 1)
    {
        zEntAnimEvent_AutoAnim(ent, animEvent, animParam);
    }
    else
    {
        switch (animEvent)
        {
        case 0xc3:
        case 0xc4:
            if (animParam == NULL)
            {
                break;
            }

            int32 anum = (int)*animParam - 1;
            if (anum < 0 || anum >= 10 || ent->atbl == NULL)
            {
                break;
            }

            int8 name[12];
            if (animEvent == 0xc4)
            {
                sprintf(name, zEnt_strings + 41, anum);
            }
            else
            {
                sprintf(name, zEnt_strings + 48, anum);
            }

            xAnimState* ast = xAnimTableGetState(ent->atbl, name);
            if (ast == NULL)
            {
                break;
            }

            xAnimPlaySetState(single, ast, 0.0f);
            single->CurrentSpeed = 1.0f;
            xAnimPlayUpdate(play, 0.0f);
            xAnimPlayEval(play);

            if (ent->asset->modelInfoID != 0x8d398d0 || animEvent != 0xc3)
            {
                break;
            }

            xSndPlay3D(xStrHash(zEnt_strings + 55), 0.77f, 0.0f, 0x80, 0,
                       (xVec3*)&ent->model->Mat->pos, 0.0f, SND_CAT_GAME, 0.0f);

            break;
        case 0xc5:
            if (strcmp(single->State->Name, zEnt_strings) == 0)
            {
                break;
            }
            int8 name2[12];
            strcpy(name2, single->State->Name);
            name2[0] = 's';
            name2[1] = 't';

            single->State = xAnimTableGetState(ent->atbl, name2);
            break;
        case 0xc6:
            single->CurrentSpeed = 0.0f;
            break;
        case 199:
            single->CurrentSpeed = 1.0f;
            break;
        case 200:
            if (single->CurrentSpeed != 0.0f)
            {
                single->CurrentSpeed = 0.0f;
            }
            else
            {
                single->CurrentSpeed = 1.0f;
            }
            break;
        case 0xc9:
            if (animParam == NULL)
            {
                break;
            }

            int32 anum2 = (int)animParam[0] - 1;
            int32 anum3 = (int)animParam[1] - 1;
            if (anum2 < 0 || anum2 > anum3 || anum3 >= 10 || ent->atbl == NULL)
            {
                break;
            }

            int32 anum4 = xrand();
            anum3 = anum3 - anum2 + 1;
            anum4 %= anum3;

            int8 name3[12];
            sprintf(name3, zEnt_strings + 48, anum2 + anum4);

            xAnimState* ast2 = xAnimTableGetState(ent->atbl, name3);
            if (ast2 == NULL)
            {
                break;
            }

            xAnimPlaySetState(single, ast2, 0.0f);
            single->CurrentSpeed = 1.0f;
            xAnimPlayUpdate(play, 0.0f);
            xAnimPlayEval(play);
            break;
        case 0xca:
            if (animParam == NULL)
            {
                break;
            }

            int32 anum5 = (int)*animParam - 1;
            float32 prob = _1033_zEnt * animParam[1];
            if (anum5 < 0 || anum5 >= 10)
            {
                break;
            }

            // Inverting this if screws up the float comparison
            if (xurand() < prob && ent->atbl != NULL)
            {
                int8 name4[12];
                sprintf(name4, zEnt_strings + 41, anum5);
                xAnimState* ast3 = xAnimTableGetState(ent->atbl, name4);
                if (ast3 == NULL)
                {
                    break;
                }

                single->CurrentSpeed = 1.0f;
                xAnimPlaySetState(single, ast3, 0.0f);
                xAnimPlayUpdate(play, 0.0f);
                xAnimPlayEval(play);
            }
            break;
        }
    }
}
#endif

#ifdef NON_MATCHING
// Thank you floating point memes. Very cool.
xAnimTable* xEnt_AnimTable_AutoEventSmall()
{
    int8** names = g_strz_xentanim;
    uint32* hash = g_hash_xentanim;
    xAnimTransition* deftran = NULL;
    if (*hash == 0)
    {
        for (int32 i = 0; i < 5; i++)
        {
            hash[i] = xStrHash(names[i]);
        }
    }

    xAnimTable* table = xAnimTableNew(zEnt_strings + 0x15, NULL, 0);

    for (int32 i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            xAnimTableNewState(table, names[i], 0x10, 1, _840_zEnt, NULL, NULL, _839_zEnt, NULL,
                               NULL, xAnimDefaultBeforeEnter, NULL, NULL);
        }
        else
        {
            xAnimTableNewState(table, names[i], 0x20, 1, _840_zEnt, NULL, NULL, _839_zEnt, NULL,
                               NULL, xAnimDefaultBeforeEnter, NULL, NULL);
        }
        if (deftran != NULL)
        {
            xAnimTableAddTransition(table, deftran, names[i]);
        }
        else
        {
            if (i != 0)
            {
                deftran = xAnimTableNewTransition(table, names[i], names[0], 0, 0, 0x10, 0,
                                                  _839_zEnt, _839_zEnt, 1, 0, _1039_zEnt, 0);
            }
        }
    }
    return table;
}
#endif

#ifdef NON_MATCHING
// This function needs the floats to be replaced with literals
// and the jumptable to be generated in the right spot.
void zEntAnimEvent_AutoAnim(zEnt* ent, uint32 animEvent, const float32* animParam)
{
    xAnimPlay* play = ent->model->Anim;
    xAnimSingle* single = play->Single;

    switch (animEvent)
    {
    case 0xc3:
    case 0xc4:
        if (animParam == NULL)
        {
            break;
        }

        int32 anum = (int)*animParam + -1;
        if (anum < 0 || anum >= 5)
        {
            break;
        }

        xAnimTable* tab1 = ent->model->Anim->Table;
        if (tab1 == NULL)
        {
            break;
        }

        xAnimState* ast = xAnimTableGetStateID(tab1, g_hash_xentanim[anum]);
        if (ast == NULL)
        {
            break;
        }

        if (anum != 0)
        {
            if (animEvent == 0xc4)
            {
                ast->Flags = ast->Flags & 0xffffffdf;
                ast->Flags = ast->Flags | 0x10;
            }
            else
            {
                ast->Flags = ast->Flags | 0x20;
                ast->Flags = ast->Flags & 0xffffffef;
            }
        }
        xAnimPlaySetState(single, ast, _839_zEnt);
        single->CurrentSpeed = _840_zEnt;
        xAnimPlayUpdate(play, _839_zEnt);
        xAnimPlayEval(play);
        break;
    case 0xc5:
        xAnimTable* tab2 = ent->model->Anim->Table;
        if (tab2 == NULL)
        {
            break;
        }

        xAnimState* ast2 = xAnimTableGetStateID(tab2, g_hash_xentanim[0]);
        if (ast2 != 0)
        {
            xAnimPlaySetState(single, ast2, _839_zEnt);
            single->CurrentSpeed = _839_zEnt;
            xAnimPlayUpdate(play, _839_zEnt);
            xAnimPlayEval(play);
        }
        break;
    case 0xc6:
        single->CurrentSpeed = _839_zEnt;
        break;
    case 199:
        single->CurrentSpeed = _840_zEnt;
        break;
    case 200:
        if (single->CurrentSpeed > _839_zEnt)
        {
            single->CurrentSpeed = _839_zEnt;
        }
        else
        {
            single->CurrentSpeed = _840_zEnt;
        }
        break;
    case 0xc9:
        if (animParam == NULL)
        {
            break;
        }

        int32 anum1 = (int)animParam[0] - 1;
        int32 anum2 = (int)animParam[1] - 1;
        if (anum1 < 0 || anum2 < 0 || anum1 > anum2 || anum2 >= 5)
        {
            break;
        }

        int32 anum3 = xrand();
        anum2 = anum2 - anum1 + 1;
        anum3 %= anum2;
        anum1 += anum3;

        xAnimTable* tab3 = ent->model->Anim->Table;
        if (tab3 == NULL)
        {
            break;
        }

        xAnimState* ast3 = xAnimTableGetStateID(tab3, g_hash_xentanim[anum1]);
        if (ast3 == NULL)
        {
            break;
        }

        if (anum1 != 0)
        {
            ast3->Flags = ast3->Flags | 0x20;
            ast3->Flags = ast3->Flags & 0xffffffef;
        }
        xAnimPlaySetState(single, ast3, _839_zEnt);
        single->CurrentSpeed = _840_zEnt;
        xAnimPlayUpdate(play, _839_zEnt);
        xAnimPlayEval(play);
        break;
    case 0xca:
        if (xUtil_yesno(_1033_zEnt * animParam[1]) != 0)
        {
            zEntAnimEvent_AutoAnim(ent, 0xc3, animParam);
        }
        break;
    }
}
#endif


xModelAssetParam* zEntGetModelParams(uint32 assetID, uint32* size)
{
    uint32 bufsize;
    void* info = xSTFindAsset(assetID, &bufsize);
    xModelAssetInfo* minf = (xModelAssetInfo*)info;

    if (minf->Magic == 0x464e494d)
    {
        *size = bufsize - (minf->NumModelInst * 0x38 + 0x14);
        if (*size != 0)
        {
            return (xModelAssetParam*)((int8*)minf + minf->NumModelInst * 0x38 + 0x14);
        }
    }
    else
    {
        *size = 0;
    }

    return NULL;
}


int8* zParamGetString(xModelAssetParam* param, uint32 size, int8* tok, int8* def)
{
    uint32 hash = xStrHash(tok);

    while (param != NULL && size != 0)
    {
        if (param->HashID == hash)
        {
            return (int8*)param->String;
        }

        // int32 i = param->WordLength * 4;
        size -= param->WordLength * 4 + 8;
        param = (xModelAssetParam*)((int8*)param + (param->WordLength * 4 + 8));
    }
    return def;
}


int32 zParamGetInt(xModelAssetParam* param, uint32 size, const int8* tok, int32 def)
{
    return zParamGetInt(param, size, (int8*)tok, def);
}


int32 zParamGetInt(xModelAssetParam* param, uint32 size, int8* tok, int32 def)
{
    int8* str = zParamGetString(param, size, tok, NULL);
    if (str != NULL)
    {
        return atoi(str);
    }
    return def;
}


float32 zParamGetFloat(xModelAssetParam* param, uint32 size, const int8* tok, float32 def)
{
    return zParamGetFloat(param, size, (int8*)tok, def);
}


float32 zParamGetFloat(xModelAssetParam* param, uint32 size, int8* tok, float32 def)
{
    int8* str = zParamGetString(param, size, tok, NULL);
    if (str != NULL)
    {
        return xatof(str);
    }
    return def;
}


int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, const int8* tok, int32 count,
                         float32* def, float32* result)
{
    return zParamGetFloatList(param, size, (int8*)tok, count, def, result);
}


int32 zParamGetFloatList(xModelAssetParam* param, uint32 size, int8* tok, int32 count, float32* def,
                         float32* result)
{
    int8* str = zParamGetString(param, size, tok, NULL);
    int32 act = 0;

    if (def != NULL)
    {
        for (int32 i = 0; i < count; i++)
        {
            result[i] = def[i];
        }
    }

    if (str != NULL)
    {
        act = xStrParseFloatList(result, str, count);
    }
    return act;
}


int32 zParamGetVector(xModelAssetParam* param, uint32 size, const int8* tok, xVec3 vec1,
                      xVec3* vec2)
{
    return zParamGetVector(param, size, (int8*)tok, vec1, vec2);
}


int32 zParamGetVector(xModelAssetParam* param, uint32 size, int8* tok, xVec3 vec1, xVec3* vec2)
{
    int8* str = zParamGetString(param, size, tok, NULL);
    int32 list = 0;

    xVec3 vec;
    *(int32*)&vec.x = *(int32*)&_1228.x;
    *(int32*)&vec.y = *(int32*)&_1228.y;
    *(int32*)&vec.z = *(int32*)&_1228.z;

    xVec3Copy(vec2, &vec1);
    if (str != NULL)
    {
        list = xStrParseFloatList((float32*)&vec, str, 3);
        if (list > 0)
        {
            vec2->x = vec.x;
        }

        if (list > 1)
        {
            vec2->y = vec.y;
        }

        if (list > 2)
        {
            vec2->z = vec.z;
        }
    }
    return list;
}


void zEntGetShadowParams(xEnt* ent, xVec3* center, float32* radius, xEntShadow::radius_enum rtype)
{
    *center = *xBoundCenter(&ent->bound);
    float32 r;
    if (ent->entShadow != NULL)
    {
        r = ent->entShadow->radius[rtype];
        if (r > _839_zEnt)
        {
            *radius = r;
            return;
        }
    }

    if (ent->bound.type == 0x1)
    {
        r = ent->bound.sph.r;
    }
    else
    {
        xVec3* lower = &ent->bound.box.box.lower;
        xVec3* upper = &ent->bound.box.box.upper;
        r = _1267_zEnt * (upper->x + upper->y + upper->z - lower->x - lower->y - lower->z);
    }

    *radius = r < _1033_zEnt ? _1268_zEnt : _1269_zEnt * r;

    if (ent == &globals.player.ent)
    {
        *radius = *radius * _1270_zEnt;
    }
    else if (ent->baseType == 0x2b)
    {
        zNPCCommon* zp = (zNPCCommon*)ent;
        _ShadowParams* sp = gShadowParams;
        for (uint32 i = 0; i < 5; i++)
        {
            if (sp->type == zp->SelfType())
            {
                xVec3* at = (xVec3*)&ent->model->Mat->at;
                xVec3AddScaled(center, at, sp->at);
                *radius *= sp->rad;
                return;
            }
            sp++;
        }
    }
}


void xModelAnimCollStop(xModelInstance& m)
{
    m.Flags = m.Flags & 0xe7ff;
}


xMat4x3* xEntGetFrame(const xEnt* ent)
{
    return xModelGetFrame(ent->model);
}


void xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                const xVec3* pos, float32 radius, sound_category category, float32 delay)
{
    xSndPlay3D(id, vol, pitch, priority, flags, pos, radius * _1039_zEnt, radius, category, delay);
}


int32 xNPCBasic::SelfType() const
{
    return myNPCType;
};
