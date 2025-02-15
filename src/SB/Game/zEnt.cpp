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
#include <cstring>
#include <stdio.h>

void zEntInit(zEnt* ent, xEntAsset* asset, U32 type)
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
        S32 num_used = zAnimListGetNumUsed(asset->animListID);
        if (num_used > 0)
        {
            ent->atbl = zAnimListGetTable(asset->animListID);
            xAnimPoolAlloc(&globals.sceneCur->mempool, ent, ent->atbl, ent->model);
            xAnimState* ast = xAnimTableGetState(ent->atbl, "idle");
            if (ast != NULL)
            {
                xAnimSingle* single = ent->model->Anim->Single;
                single->State = ast;
                single->Time = 0.0f;
                single->CurrentSpeed = 1.0f;
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

// Equivalent
// This function needs to be declared inline to generate the correct mangled name for model_id
inline void checkpoint_collision_hack(zEnt* ent)
{
    // instruction swap involving the guard for this static initializer.
    // Might be due to the sda reloc access for model_id getting moved down
    static U32 model_id = xStrHash("checkpoint_bind");
    if (ent->asset->modelInfoID == model_id)
    {
        ent->bound.type = 0x2;
        xVec3* lower = &ent->bound.box.box.lower;
        xVec3* upper = &ent->bound.box.box.upper;
        *lower = *upper = xEntGetFrame(ent)->pos;

        lower->x += -0.5f;
        lower->z += -0.5f;

        upper->x += 0.5f;
        upper->y += 5.0f;
        upper->z += 0.5f;

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
        xAnimState* ast = xAnimTableGetState(ent->atbl, "idle");
        if (ast != NULL)
        {
            xAnimSingle* single = ent->model->Anim->Single;
            single->State = ast;
            single->Time = 0.0f;
            single->CurrentSpeed = 1.0f;
            xModelEval(ent->model);
        }
    }

    if (!(ent->miscflags & 1) && ent->asset->modelInfoID != 0 && ent->model != NULL &&
        ent->model->Anim != NULL && ent->model->Anim->Table != NULL &&
        strcmp("xEntAutoEventSimple", ent->model->Anim->Table->Name) == 0)
    {
        ent->model->Anim = ent->model->Anim;
        xAnimPlaySetState(ent->model->Anim->Single, ent->model->Anim->Table->StateList, 0.0f);
        ent->miscflags = ent->miscflags | 1;
    }
    checkpoint_collision_hack(ent);
}

void zEntUpdate(zEnt* ent, zScene* scene, F32 elapsedSec)
{
    xEntUpdate(ent, scene, elapsedSec);
}

void zEntEventAll(xBase* from, U32 fromEvent, U32 toEvent, F32* toParam)
{
    zScene* s = globals.sceneCur;
    for (U16 i = 0; i < s->num_base; i++)
    {
        zEntEvent(from, fromEvent, s->base[i], toEvent, toParam, NULL, 0);
    }
}

void zEntEventAllOfType(xBase* from, U32 fromEvent, U32 toEvent, F32* toParam, U32 type)
{
    zScene* s = globals.sceneCur;
    if (s == NULL)
    {
        return;
    }

    for (U16 i = 0; i < s->num_base; i++)
    {
        xBase* base = s->base[i];
        if (type == base->baseType)
        {
            zEntEvent(from, fromEvent, base, toEvent, toParam, NULL, 0);
        }
    }
}

void zEntEventAllOfType(U32 toEvent, U32 type)
{
    zEntEventAllOfType(NULL, 0, toEvent, NULL, type);
}

xModelInstance* zEntRecurseModelInfo(void* info, xEnt* ent)
{
    xModelAssetInfo* zinfo = (xModelAssetInfo*)info;
    xModelAssetInst* zinst = (xModelAssetInst*)(zinfo + 1);
    U32 bufsize;
    xModelInstance* tempInst[64];

    for (U32 i = 0; i < zinfo->NumModelInst; i++)
    {
        RpAtomic* imodel = (RpAtomic*)xSTFindAsset(zinst[i].ModelID, &bufsize);
        if (*(U32*)&imodel->object.object == 0x464e494d)
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
                tempInst[i] = xModelInstanceAlloc(imodel, ent, 0, 0, 0);
                tempInst[i]->modelID = zinst[i].ModelID;
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

void zEntParseModelInfo(xEnt* ent, U32 assetID)
{
    U32 bufsize[4];
    void* info = xSTFindAsset(assetID, bufsize);
    if (*(U32*)info == 0x464e494d)
    {
        ent->model = zEntRecurseModelInfo(info, ent);
    }
    else
    {
        xEntLoadModel(ent, (RpAtomic*)info);
        ent->model->modelID = assetID;
    }
}

// This function suffers from a couple floating point memes
// Additionally it has a jumptable that needs to be generated in the correct place.
void zEntAnimEvent(zEnt* ent, U32 animEvent, const F32* animParam)
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

            S32 anum = (int)*animParam - 1;
            if (anum < 0 || anum >= 10 || ent->atbl == NULL)
            {
                break;
            }

            char name[12];
            if (animEvent == 0xc4)
            {
                sprintf(name, "loop%d", anum);
            }
            else
            {
                sprintf(name, "stop%d", anum);
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

            if (ent->asset->modelInfoID != 0x8D398D0C /*is this an address???*/ ||
                animEvent != 0xc3)
            {
                break;
            }

            xSndPlay3D(xStrHash("Check1"), 0.77f, 0.0f, 0x80, 0, (xVec3*)&ent->model->Mat->pos,
                       0.0f, SND_CAT_GAME, 0.0f);

            break;
        case 0xc5:
            if (strcmp(single->State->Name, "idle") == 0)
            {
                break;
            }
            char name2[12];
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
            if (single->CurrentSpeed)
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

            S32 anum2 = (int)animParam[0] - 1;
            S32 anum3 = (int)animParam[1] - 1;
            if (anum2 < 0 || anum2 > anum3 || anum3 >= 10 || ent->atbl == NULL)
            {
                break;
            }

            S32 anum4 = xrand();
            anum3 = anum3 - anum2 + 1;
            anum4 %= anum3;

            char name3[12];
            sprintf(name3, "stop%d", anum2 + anum4);

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

            S32 anum5 = (int)*animParam - 1;
            F32 prob = 0.01f * animParam[1];
            if (anum5 < 0 || anum5 >= 10)
            {
                break;
            }

            // Inverting this if screws up the float comparison
            if (xurand() < prob && ent->atbl != NULL)
            {
                char name4[12];
                sprintf(name4, "stop%d", anum5);
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

U32 g_hash_xentanim[5] = { 0 };
char* g_strz_xentanim[5] = {
    "Idle01", "Anim02", "Anim03", "Anim04", "Anim05",
};
// Thank you floating point memes. Very cool.
xAnimTable* xEnt_AnimTable_AutoEventSmall()
{
    char** names = g_strz_xentanim;
    U32* hash = g_hash_xentanim;
    xAnimTransition* deftran = NULL;
    if (*hash == 0)
    {
        for (S32 i = 0; i < 5; i++)
        {
            hash[i] = xStrHash(names[i]);
        }
    }

    xAnimTable* table = xAnimTableNew("xEntAutoEventSimple", NULL, 0);

    for (S32 i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            xAnimTableNewState(table, names[i], 0x10, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                               xAnimDefaultBeforeEnter, NULL, NULL);
        }
        else
        {
            xAnimTableNewState(table, names[i], 0x20, 1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                               xAnimDefaultBeforeEnter, NULL, NULL);
        }
        if (deftran != NULL)
        {
            xAnimTableAddTransition(table, deftran, names[i]);
        }
        else
        {
            if (i != 0)
            {
                deftran = xAnimTableNewTransition(table, names[i], names[0], 0, 0, 0x10, 0, 0.0f,
                                                  0.0f, 1, 0, 0.25f, 0);
            }
        }
    }
    return table;
}

// This function needs the floats to be replaced with literals
// and the jumptable to be generated in the right spot.
void zEntAnimEvent_AutoAnim(zEnt* ent, U32 animEvent, const F32* animParam)
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

        S32 anum = (int)*animParam + -1;
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
        xAnimPlaySetState(single, ast, 0.0f);
        single->CurrentSpeed = 1.0f;
        xAnimPlayUpdate(play, 0.0f);
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
            xAnimPlaySetState(single, ast2, 0.0f);
            single->CurrentSpeed = 0.0f;
            xAnimPlayUpdate(play, 0.0f);
            xAnimPlayEval(play);
        }
        break;
    case 0xc6:
        single->CurrentSpeed = 0.0f;
        break;
    case 199:
        single->CurrentSpeed = 1.0f;
        break;
    case 200:
        if (single->CurrentSpeed > 0.0f)
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

        S32 anum1 = (int)animParam[0] - 1;
        S32 anum2 = (int)animParam[1] - 1;
        if (anum1 < 0 || anum2 < 0 || anum1 > anum2 || anum2 >= 5)
        {
            break;
        }

        S32 anum3 = xrand();
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
        xAnimPlaySetState(single, ast3, 0.0f);
        single->CurrentSpeed = 1.0f;
        xAnimPlayUpdate(play, 0.0f);
        xAnimPlayEval(play);
        break;
    case 0xca:
        if (xUtil_yesno(0.01f * animParam[1]) != 0)
        {
            zEntAnimEvent_AutoAnim(ent, 0xc3, animParam);
        }
        break;
    }
}

xModelAssetParam* zEntGetModelParams(U32 assetID, U32* size)
{
    U32 bufsize;
    void* info = xSTFindAsset(assetID, &bufsize);
    xModelAssetInfo* minf = (xModelAssetInfo*)info;

    if (minf->Magic == 0x464e494d)
    {
        *size = bufsize - (minf->NumModelInst * 0x38 + 0x14);
        if (*size != 0)
        {
            return (xModelAssetParam*)((char*)minf + minf->NumModelInst * 0x38 + 0x14);
        }
    }
    else
    {
        *size = 0;
    }

    return NULL;
}

char* zParamGetString(xModelAssetParam* param, U32 size, char* tok, char* def)
{
    U32 hash = xStrHash(tok);

    while (param != NULL && size != 0)
    {
        if (param->HashID == hash)
        {
            return (char*)param->String;
        }

        // S32 i = param->WordLength * 4;
        size -= param->WordLength * 4 + 8;
        param = (xModelAssetParam*)((char*)param + (param->WordLength * 4 + 8));
    }
    return def;
}

S32 zParamGetInt(xModelAssetParam* param, U32 size, const char* tok, S32 def)
{
    return zParamGetInt(param, size, (char*)tok, def);
}

S32 zParamGetInt(xModelAssetParam* param, U32 size, char* tok, S32 def)
{
    char* str = zParamGetString(param, size, tok, NULL);
    if (str != NULL)
    {
        return atoi(str);
    }
    return def;
}

F32 zParamGetFloat(xModelAssetParam* param, U32 size, const char* tok, F32 def)
{
    return zParamGetFloat(param, size, (char*)tok, def);
}

F32 zParamGetFloat(xModelAssetParam* param, U32 size, char* tok, F32 def)
{
    char* str = zParamGetString(param, size, tok, NULL);
    if (str != NULL)
    {
        return xatof(str);
    }
    return def;
}

S32 zParamGetFloatList(xModelAssetParam* param, U32 size, const char* tok, S32 count, F32* def,
                       F32* result)
{
    return zParamGetFloatList(param, size, (char*)tok, count, def, result);
}

S32 zParamGetFloatList(xModelAssetParam* param, U32 size, char* tok, S32 count, F32* def,
                       F32* result)
{
    char* str = zParamGetString(param, size, tok, NULL);
    S32 act = 0;

    if (def != NULL)
    {
        for (S32 i = 0; i < count; i++)
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

S32 zParamGetVector(xModelAssetParam* param, U32 size, const char* tok, xVec3 vec1, xVec3* vec2)
{
    return zParamGetVector(param, size, (char*)tok, vec1, vec2);
}

S32 zParamGetVector(xModelAssetParam* param, U32 size, char* tok, xVec3 vec1, xVec3* vec2)
{
    char* str = zParamGetString(param, size, tok, NULL);
    S32 list = 0;

    xVec3 vec = { 0 };

    xVec3Copy(vec2, &vec1);
    if (str != NULL)
    {
        list = xStrParseFloatList((F32*)&vec, str, 3);
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

// clang-format off
_ShadowParams gShadowParams[] = {
    {'NTR0', 0.33f, 2.0f},
    {'NTR3', 0.0f, 1.25f},
    {'NTFA', -0.25f, 0.75f},
    {'NTR5', 0.5f, 1.0f},
    {'NTB0', 1.0f, 2.0f},
};
// clang-format on

void zEntGetShadowParams(xEnt* ent, xVec3* center, F32* radius, xEntShadow::radius_enum rtype)
{
    *center = *xBoundCenter(&ent->bound);
    F32 r;
    if (ent->entShadow != NULL)
    {
        r = ent->entShadow->radius[rtype];
        if (r > 0.0f)
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
        r = 0.167f * (upper->x + upper->y + upper->z - lower->x - lower->y - lower->z);
    }

    *radius = r < 0.01f ? 2.0f : 2.4f * r;

    if (ent == &globals.player.ent)
    {
        *radius *= 1.5f;
    }
    else if (ent->baseType == 0x2b)
    {
        zNPCCommon* zp = (zNPCCommon*)ent;
        _ShadowParams* sp = gShadowParams;
        for (U32 i = 0; i < 5; i++)
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

void xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, const xVec3* pos, F32 radius,
                sound_category category, F32 delay)
{
    xSndPlay3D(id, vol, pitch, priority, flags, pos, radius / 4.0f, radius, category, delay);
}

S32 xNPCBasic::SelfType() const
{
    return myNPCType;
};
