#include "iModel.h"

#include <types.h>
#include <rpskin.h>
#include <rpmatfx.h>

#include "zAssetTypes.h"
#include "xMathInlines.h"

extern RwGlobals* RwEngineInstance;
static RpAtomic* sLastMaterial;
static U32 sMaterialFlags;
static U32 sMaterialIdx;
static RwTexture* sMaterialTexture[16];
static U32 gLastAtomicCount;
static RpAtomic* gLastAtomicList[256];

static RpLight* sEmptyDirectionalLight[4];
static RpLight* sEmptyAmbientLight;

int iModelHack_DisablePrelight;

RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
    RpHAnimHierarchy* hierarchy = RpHAnimFrameGetHierarchy(frame);
    if (hierarchy == 0)
    {
        RwFrameForAllChildren(frame, &GetChildFrameHierarchy, data);
		return frame;
    }
    else
    {
        *(RpHAnimHierarchy**)data = hierarchy;
        frame = 0;
    }
    return frame;
}

void* GetHierarchy(RpAtomic* frame)
{
    void* unk_0[2];
    unk_0[0] = 0;
    GetChildFrameHierarchy((RwFrame*)frame->object.object.parent, unk_0);
    return unk_0[0];
}

void iModelInit()
{
    RwRGBAReal black = { 0.0f, 0.0f, 0.0f, 0.0f };
    if (sEmptyDirectionalLight[0] == 0)
    {
		for (int i = 0; i < (int)(sizeof(sEmptyDirectionalLight) / sizeof(RpLight*)); i++)
		{
			sEmptyDirectionalLight[i] = RpLightCreate(rpLIGHTDIRECTIONAL);
            RpLightSetColor(sEmptyDirectionalLight[i], &black);
			RwFrame* frame = RwFrameCreate();
            _rwObjectHasFrameSetFrame(sEmptyDirectionalLight[i], frame);
		}
        sEmptyAmbientLight = RpLightCreate(rpLIGHTAMBIENT);
        RpLightSetColor(sEmptyAmbientLight, &black); // Redundant sEmptyAmbientLight load here.
    }
}

RpAtomic* FindAndInstanceAtomicCallback(RpAtomic* model, void* data)
{
    RpHAnimHierarchy* hierarchy = (RpHAnimHierarchy *)GetHierarchy(model);
    RpGeometry* geom = model->geometry;
    RpSkin* skin = RpSkinGeometryGetSkin(geom);

    if ((skin != NULL) && (hierarchy == NULL))
    {
        hierarchy = (RpHAnimHierarchy *)RpHAnimHierarchyCreate(RpSkinGetNumBones(skin), 0, 0, rpHANIMHIERARCHYLOCALSPACEMATRICES, 0x24);
        RpHAnimFrameSetHierarchy((RwFrame*)(model->object).object.parent, hierarchy);
    }
    if ((hierarchy != NULL) && (skin != NULL))
    {
        RpSkinAtomicSetHAnimHierarchy(model,hierarchy);
    }
    if (hierarchy != NULL)
    {
        hierarchy->flags = 0x4000;
    }
    if (gLastAtomicCount < 0x100)
    {
        gLastAtomicList[gLastAtomicCount] = model;
		gLastAtomicCount++;
    }

    RwFrame* root = RwFrameGetRoot((RwFrame*)(model->object).object.parent);
	RpMaterialList* matList = &geom->matList;
	int numMats = matList->numMaterials;

	for (int i = 0; i < numMats; i++)
	{
		RpMaterial *pRVar4 = (RpMaterial *)_rpMaterialListGetMaterial(matList, i);
        if ((pRVar4 != NULL) && (RpMatFXMaterialGetEffects(pRVar4) != 0))
        {
            RpMatFXAtomicEnableEffects(model);
            model->pipeline = (RxPipeline *)RpMatFXGetGameCubePipeline(rpMATFXGAMECUBEATOMICPIPELINE);
            if (RpSkinGeometryGetSkin(geom) != 0)
            {
                RpSkinAtomicSetType(model, rpSKINTYPEMATFX);
            }
			break;
        }
	}

    if (gLastAtomicCount < 0x100)
    {
        gLastAtomicList[gLastAtomicCount] = model;
		gLastAtomicCount++;
    }

    return model;
}

RpAtomic* iModelFileNew(void* buffer, U32 size)
{
    RwMemory rwmem;
    rwmem.start = (U8*)buffer;
    rwmem.length = size;

    return iModelStreamRead(RwStreamOpen(rwSTREAMMEMORY, rwSTREAMREAD, &rwmem));
}

void iModelUnload(RpAtomic* userdata)
{
    RpClump* clump;
    RwFrame* root;
    RwFrame* frame;

    clump = userdata->clump;
    frame = (RwFrame*)(clump->object).parent;
    if (frame != 0)
    {
        root = (RwFrame*)RwFrameGetRoot(frame);
        if (root != 0)
        {
            frame = root;
        }
        RwFrameDestroyHierarchy(frame);
        clump->object.parent = 0;
    }
    if (clump != 0)
    {
        RpClumpDestroy(clump);
    }
}

static RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
    if (*(U32*)data == (U32)atomic)
    {
        *(U32*)data = 0;
    }
    else if (*(U32*)data == 0)
    {
        *(RpAtomic **)data = atomic;
    }
    return atomic;
}

RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
	RpClump* clump;
    RpAtomic* nextModel;

    if (model == 0)
    {
        return 0;
    }
    else
    {
		clump = model->clump;
        nextModel = model;
        RpClumpForAllAtomics(clump, NextAtomicCallback, &nextModel);
		return nextModel;
    }
}

U32 iModelNumBones(RpAtomic* model)
{
    RpHAnimHierarchy* obj = (RpHAnimHierarchy*)GetHierarchy(model);
    return obj != 0 ? (U32)obj->numNodes : 0;
}

void iModelQuatToMat(xQuat* q, xVec3* a, RwMatrixTag* t)
{
    q->s = -q->s;
    xQuatToMat(q, (xMat3x3*)t);
    q->s = -q->s;
    t->pos.x = a->x;
    t->pos.y = a->y;
    t->pos.z = a->z;
}

// WIP
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat)
{
    RwMatrixTag* pMatrixArray;
    RpHAnimNodeInfo* iVar1;
    RwMatrixTag matrixStack [33];
    U32 pCurrentFrameFlags;
    RpHAnimNodeInfo* pCurrentFrame;
    int numFrames;
    RwMatrixTag* pMatrixStackTop;

    pCurrentFrame = (RpHAnimNodeInfo *)GetHierarchy(model);

    if (pCurrentFrame != NULL)
    {
	    pMatrixStackTop = &matrixStack[0];
        pMatrixStackTop->at.z = 1.0;

        matrixStack[0].up.y = 1.0;
        matrixStack[0].right.x = 1.0;
        matrixStack[0].up.x = 0.0;
        matrixStack[0].right.z = 0.0;
        matrixStack[0].right.y = 0.0;
        matrixStack[0].at.y = 0.0;
        matrixStack[0].at.x = 0.0;
        matrixStack[0].up.z = 0.0;
        matrixStack[0].pos.z = 0.0;
        matrixStack[0].pos.y = 0.0;
        matrixStack[0].pos.x = 0.0;
        matrixStack[0].flags |= 0x20003;

		matrixStack[1] = matrixStack[0];
        numFrames = pCurrentFrame->nodeIndex;
        pMatrixArray = (&matrixStack[1]);
        iVar1 = (RpHAnimNodeInfo *)pCurrentFrame[1].nodeID;

		pMatrixArray++;
		for (int i = 0; i < numFrames; i++)
		{
			pCurrentFrameFlags = iVar1->flags;
            if ((pCurrentFrameFlags & 2) != 0)
            {
				*pMatrixArray++ = matrixStack[0];
            }

			RwMatrixTag afStack_8e8;
            iModelQuatToMat(quat, tran, &afStack_8e8);

			RwMatrixTag auStack_8a8;
            xMat4x3Mul((xMat4x3*)&auStack_8a8,(xMat4x3*)&afStack_8e8, (xMat4x3*)&matrixStack[0]);

			*mat = auStack_8a8;
            if ((pCurrentFrameFlags & 1) != 0)
            {
				pMatrixArray = &pMatrixArray[-1];
                pMatrixStackTop = pMatrixArray;
            }
            else
            {
                pMatrixStackTop = (RwMatrixTag *)&auStack_8a8;
            }
            matrixStack[0] = *pMatrixStackTop;
            mat++;
            quat++;
            tran++;
            iVar1++;
		}
    }
}

RpAtomic* iModelCacheAtomic(RpAtomic* model)
{
	return model;
}

void iModelRender(RpAtomic* model, RwMatrixTag* mat)
{
    RpHAnimHierarchy* hierarchy;
    RpGeometry* geom;
    RwMatrixTag* pAnimOldMatrix;
    RwFrame* frame;

    hierarchy = (RpHAnimHierarchy*)GetHierarchy(model);

	static S32 draw_all = 1;

    if (hierarchy != NULL)
    {
        pAnimOldMatrix = hierarchy->pMatrixArray;
        hierarchy->pMatrixArray = mat + 1;
    }
    frame = (RwFrame*)model->object.object.parent;
    frame->ltm = *mat;
    RwMatrixUpdate(&frame->ltm);
    if (iModelHack_DisablePrelight != 0)
    {
        model->geometry->flags &= 0xfffffff7;
    }
    iModelCacheAtomic(model)->renderCallBack(iModelCacheAtomic(model));
    if ((iModelHack_DisablePrelight != 0) && (model->geometry->preLitLum != NULL))
    {
        model->geometry->flags |= 8;
    }
    if (hierarchy != NULL)
    {
        hierarchy->pMatrixArray = pAnimOldMatrix;
    }
}

S32 iModelSphereCull(const xSphere* sphere)
{
    return RwCameraFrustumTestSphere((const RwCamera*)RwEngineInstance->curCamera, (const RwSphere*)sphere) == 0;
}

U32 iModelVertCount(RpAtomic *model)
{
    return model->geometry->numVertices;
}

void iModelResetMaterial(RpAtomic* model)
{
    RpAtomic* material = sLastMaterial; // r2
    RpGeometry* geom; // r21

    if (model != material)
    {
        sMaterialFlags = 0;
    }

	geom = model->geometry;

    sMaterialIdx = 0;
    RpGeometryForAllMaterials(geom, iModelResetMaterialCB, 0);
    sMaterialFlags = 0;
}

RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data)
{
    int i = sMaterialIdx;
	RwTexture* texture = material->texture;
    sMaterialIdx++;
    sMaterialTexture[i] = texture;
    RpMaterialSetTexture(material, (RwTexture*)data);
    return material;
}

void iModelSetMaterialTexture(RpAtomic* model, void* texture)
{
	RpGeometry* geom;
    if (model != sLastMaterial)
    {
        sMaterialFlags = 0;
    }
	geom = model->geometry;
    sMaterialIdx = 0;
    RpGeometryForAllMaterials(geom, iModelSetMaterialTextureCB, texture);
    sMaterialFlags |= 4;
    sLastMaterial = model;
}