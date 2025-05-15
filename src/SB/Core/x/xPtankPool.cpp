#include "xPtankPool.h"

#include <rpptank.h>
#include <stdlib.h>
#include <string.h>
#include <types.h>

extern RwInt32 _rpPTankAtomicDataOffset;

namespace
{

#define NUM_GROUPS 2
#define MAX_PARTICLES 64

struct group_data
{
    U32 max_size;
    U32 create_flags;
    ptank_context* ptanks;
    ptank_context** buckets;
    U32 size;
    U32 used;
    U32 buckets_used;
};

static group_data groups[NUM_GROUPS] = {
    {
        4, 
        rpPTANKDFLAGVTX2TEXCOORDS | rpPTANKDFLAGMATRIX | rpPTANKDFLAGCOLOR,
        NULL,
        NULL,
        0,
        0,
        0
    },
    {   
        24,
        rpPTANKDFLAGVTX2TEXCOORDS | rpPTANKDFLAGSIZE | rpPTANKDFLAGCOLOR | rpPTANKDFLAGPOSITION,
        NULL,
        NULL,
        0,
        0,
        0
    },
};

void sort_buckets(group_data& group)
{
    memset(group.buckets, 0, group.buckets_used * sizeof(ptank_context*));
    group.buckets_used = 2;

    ptank_context* it = group.ptanks;
    ptank_context* endp = it + group.size;
    while (it != endp)
    {
        ptank_context** bucket = group.buckets;

        RwTexture* texture = it->ptank->geometry->matList.materials[0]->texture;
        if (texture == NULL)
        {
            if ((it->flags & 0x1) != 0)
            {
                bucket++;
            }
        }
        else
        {
            bucket += 2;
            ptank_context** end = bucket + group.buckets_used - 2;

            while (bucket < end)
            {
                ptank_context* front = *bucket;
                if (texture == front->ptank->geometry->matList.materials[0]->texture)
                {
                    if (
                        it->dst_blend == front->dst_blend 
                        && it->src_blend == front->src_blend
                        && ((it->flags ^ front->flags) & 0x1) == 0
                    )
                    {
                        break;
                    }
                }

                bucket++;
            }

            if (bucket == end)
            {
                group.buckets_used++;
            }
        }

        it->next = *bucket;
        *bucket = it;
        it++;
    }
}

RpAtomic* create_ptank(U32 flags)
{
    U32 dataFlags = flags | rpPTANKDFLAGSTRUCTURE;
    RpAtomic* ptank = RpPTankAtomicCreate(MAX_PARTICLES, dataFlags, rpPTANKDFLAGNONE);
    if (ptank == NULL)
    {
        return NULL;
    }

    RwFrame* frame = RwFrameCreate();
    if (frame == NULL)
    {
        RpPTankAtomicDestroy(ptank);
        return NULL;
    }

    const F32 f1 = 1.0f;
    frame->modelling.at.z = f1;
    frame->modelling.up.y = f1;
    frame->modelling.right.x = f1;

    const F32 f0 = 0.0f;
    frame->modelling.up.x = f0;
    frame->modelling.right.z = f0;
    frame->modelling.right.y = f0;

    frame->modelling.at.y = f0;
    frame->modelling.at.x = f0;
    frame->modelling.up.z = f0;

    frame->modelling.pos.z = f0;
    frame->modelling.pos.y = f0;
    frame->modelling.pos.x = f0;

    frame->modelling.flags = frame->modelling.flags | rpPTANKDFLAGCNS2DROTATE | rpPTANKDFLAGCOLOR | rpPTANKDFLAGPOSITION;

    RpAtomicSetFrame(ptank, frame);

    RpPTankAtomicExtPrv* ext = RPATOMICPTANKPLUGINDATA(ptank);
    ext->publicData.vertexAlphaBlend = 1;

    return ptank;
}

void destroy_ptank(RpAtomic *ptank)
{
    if (ptank != NULL)
    {
        RwFrame* frame = (RwFrame*) ptank->object.object.parent;
        RpAtomicSetFrame(ptank, NULL);
        if (frame != NULL)
        {
            RwFrameDestroy(frame);
        }

        RpPTankAtomicDestroy(ptank);
    }
    
    return;
}

void render_ptank(const ptank_context& context)
{
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*) !(context.flags & 1));
    RpAtomic* ptank = context.ptank;
    ptank->renderCallBack(ptank);
}

int compare_ptanks(const void* e1, const void* e2)
{
    ptank_context* p1 = (ptank_context*) e1;
    ptank_context* p2 = (ptank_context*) e2;

    if (p1->dst_blend < p2->dst_blend)
    {
        return 1;
    }
    else if (p1->dst_blend > p2->dst_blend)
    {
        return -1;
    }

    if (p1->src_blend < p2->src_blend)
    {
        return -1;
    }
    else if (p1->src_blend > p2->src_blend)
    {
        return 1;
    }

    RwTexture *tex1 = p1->ptank->geometry->matList.materials[0]->texture;
    RwTexture *tex2 = p2->ptank->geometry->matList.materials[0]->texture;

    if (tex1 < tex2)
    {
        return -1;
    }

    if (tex1 > tex2)
    {
        return 1;
    }

    return 0;
}

}

void xPTankPoolRender()
{
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void *) true);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void *) false);

    group_data* g = groups;
    group_data* endg = groups + NUM_GROUPS;
    while (g != endg)
    {
        if (g->used != 0)
        {
            qsort((void *)g->ptanks, g->size, sizeof(struct ptank_context), compare_ptanks);
            
            ptank_context* p = (ptank_context*) g->ptanks;
            ptank_context* endp = p + g->size;
            while (p != endp)
            {
                if (p->flags & rpPTANKDFLAGCNSNORMAL)
                {
                    render_ptank(*p);
                    p->flags &= ~rpPTANKDFLAGCNSNORMAL;
                }
                else if ((p->flags & rpPTANKDFLAGCNS2DROTATE) == 0)
                {

                    RpMaterialSetTexture(p->ptank->geometry->matList.materials[0], NULL);
                    p->flags |= rpPTANKDFLAGCNS2DROTATE;
                }

                p++;
            }

            g->used = 0;
            sort_buckets(*g);
            
        }
        g++;
    }
}
