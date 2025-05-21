#include "xPtankPool.h"

#include "xMemMgr.h"

#include <rpptank.h>
#include <stdlib.h>
#include <string.h>
#include <types.h>

extern RwInt32 _rpPTankAtomicDataOffset;

namespace
{

#define MAX_PARTICLES 64

static U8 inited;

struct ptank_context
{
    ptank_context* next;
    class RpAtomic* ptank;
    U32 flags;
    U32 src_blend;
    U32 dst_blend;
};

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

static group_data groups[MAX_PGT] = {
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

static void sort_buckets(group_data& group)
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

static void init_groups()
{
    U32 total = 0;

    {
        group_data* it = groups;
        group_data* end = groups + MAX_PGT;
        while (it != end)
        {
            total += it->max_size;
            it++;
        }
    }

    total = total * sizeof(ptank_context) + (total + 4) * sizeof (ptank_context*);
    U8* mem = (U8*) xMemAlloc(gActiveHeap, total, 0);

    {
        group_data* it = groups;
        group_data* end = groups + MAX_PGT;
        while (it != end)
        {
            it->buckets_used = 0;
            it->used = 0;
            it->size = 0;
            it->ptanks = (ptank_context*) mem;

            mem += it->max_size * sizeof(ptank_context);
            it->buckets = (ptank_context**) mem;

            it->buckets_used = it->max_size + 2;
            mem += it->buckets_used * sizeof(ptank_context**);
            sort_buckets(*it);
            
            it++;
        }
    }
}

static RpAtomic* create_ptank(U32 flags)
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

static S32 compare_ptanks(const void* e1, const void* e2)
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

U32 create_ptanks(group_data& group, unsigned long count)
{
    U32 initial_size = group.size;
    if (initial_size + count > group.max_size)
    {
        count = group.max_size - initial_size;
    }

    ptank_context* end = group.ptanks + initial_size + count;
    ptank_context* it = group.ptanks + initial_size;
    while (it < end)
    {
        RpAtomic* ptank = create_ptank(group.create_flags);
        it->ptank = ptank;

        if (it->ptank == NULL)
        {
            break;
        }

        it->flags = rpPTANKDFLAGPOSITION;
        it->next = *group.buckets;
        *group.buckets = it;
        it++;
        group.size++;
    }

    return group.size - initial_size;
}

}

void xPTankPoolSceneEnter()
{
    inited = 1;
    init_groups();

    group_data* it = groups;
    group_data* end = groups + MAX_PGT;
    while (it != end)
    {
        double f = it->max_size - 0.f;
        float scaled = float(f) * 0.25f + 0.5f;
        create_ptanks(*it, (unsigned long) scaled);

        it++;
    }
}

void xPTankPoolSceneExit()
{
    inited = 0;
    group_data* g = groups;
    group_data* endg = g + MAX_PGT;
    while (g != endg)
    {
        ptank_context* p = g->ptanks;
        ptank_context* endp = p + g->size;
        while (p != endp)
        {
            destroy_ptank(p->ptank);
            p++;
        }
        g++;
    }
}

void xPTankPoolRender()
{
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void *) true);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void *) false);

    group_data* g = groups;
    group_data* endg = groups + MAX_PGT;
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

void ptank_pool::grab_block(ptank_group_type type)
{
    this->ptank = NULL;
    group_data& group = groups[type];
    if (group.used < group.size || create_ptanks(group, 1) >= 1)
    {
        ptank_context** end = group.buckets + group.buckets_used;

        {
            ptank_context** it = group.buckets + 2;
            while (it < end)
            {
                if (*it != NULL) {
                    if (
                        (*it)->ptank->geometry->matList.materials[0]->texture == this->rs.texture
                        && (*it)->dst_blend == this->rs.dst_blend
                        && (*it)->src_blend == this->rs.src_blend
                        && !(((*it)->flags ^ this->rs.flags) & 0x1))
                    {
                        this->ptank = (*it)->ptank;
                        (*it)->flags |= rpPTANKDFLAGCNSNORMAL;
                        *it = (*it)->next;
                        group.used++;
                        return;
                    }
                }
                it++;
            }
        }
        
        {
            ptank_context** it = group.buckets;
            while (it < end)
            {
                if (*it != NULL) {
                    if ((this->rs.flags & rpPTANKDFLAGPOSITION) && !((*it)->flags & rpPTANKDFLAGPOSITION)) {
                        destroy_ptank((*it)->ptank);
                        (*it)->ptank = create_ptank(group.create_flags);
                    }
                    this->ptank = (*it)->ptank;
                    RpMaterialSetTexture(*this->ptank->geometry->matList.materials, this->rs.texture);
                    RPATOMICPTANKPLUGINDATA(this->ptank)->publicData.srcBlend = this->rs.src_blend;
                    RPATOMICPTANKPLUGINDATA(this->ptank)->publicData.dstBlend = this->rs.dst_blend;
                    RPATOMICPTANKPLUGINDATA(this->ptank)->instFlags |= rpPTANKDFLAGARRAY;

                    (*it)->src_blend = this->rs.src_blend;
                    (*it)->dst_blend = this->rs.dst_blend;
                    (*it)->flags = this->rs.flags | rpPTANKDFLAGCNSNORMAL;
                    *it = (*it)->next;
                    group.used++;
                    return;
                }

                it++;
            }
        }
    }
}

void ptank_pool::flush()
{
    if (this->valid() != 0) {
        RpPTankAtomicUnlock(this->ptank);

        S32 oldused = RPATOMICPTANKPLUGINDATA(this->ptank)->actPCount;
        S32 expand =  ((S32) this->used < oldused) ? oldused - this->used : 0;
        expand += 0xA;
        
        if ((S32) (expand + this->used) > 0x40) {
            expand = 0x40 - this->used;
        }
        
        S32 total = this->used + expand;
    
        U8* it = this->hide.data;
        U8* end = it + this->hide.stride * expand;
        while (it != end) {
            memset(it, 0, this->hide.size);
            it = (U8*) it + this->hide.stride;
        }

        RPATOMICPTANKPLUGINDATA(this->ptank)->instFlags |= 0x800000;
        RPATOMICPTANKPLUGINDATA(this->ptank)->actPCount = total;
        this->used = 0;
    }
}
