#include "xHud.h"
#include "xDebug.h"
#include "xEvent.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "xstransvc.h"

#include "zEnt.h"

#include <new>
#include <types.h>

namespace xhud
{

    block_allocator* block_allocator::_head_alloc;
    static bool inited;

    void block_allocator::flush_all()
    {
        for (block_allocator* allocator = _head_alloc; allocator != NULL;
             allocator = allocator->_next_alloc)
        {
            allocator->flush();
        }
    }

    block_allocator::block_allocator(U32 a0, U32 a1)
    {
        _block_size = ALIGN(a0, 4) + 4;
        _top = NULL;
        _next_alloc = _head_alloc;
        _head_alloc = this;
        set_increment(a1);
    }

    void block_allocator::set_increment(U32 a0)
    {
        _alloc_size = _block_size * a0;
    }

    void block_allocator::size_reserve(U32 size)
    {
        void** ppvVar1 = (void**)xMemAllocSize(size);
        void** ppvVar2 = (void**)((U32)ppvVar1 + size);
        for (; ppvVar1 < ppvVar2; ppvVar1 = (void**)((U32)ppvVar1 + _block_size))
        {
            *ppvVar1 = _top;
            _top = ppvVar1;
        }
    }

    void* block_allocator::alloc()
    {
        if (_top == NULL)
        {
            size_reserve(_alloc_size);
        }

        void** ptr = (void**)_top;
        _top = *ptr;
        return ptr + 1;
    }

    void block_allocator::free(void* ptr)
    {
        *(void**)((U32)ptr - 4) = _top;
        _top = (void*)((U32)ptr - 4);
    }

    void block_allocator::flush()
    {
        _top = NULL;
    }

    block_allocator* widget::motive_allocator()
    {
        static block_allocator ba(40, 16);
        return &ba;
    }

    void init()
    {
        if (!inited)
        {
            inited = true;
        }
        else
        {
            widget::disable_all(true);
        }
    }

    void setup()
    {
        widget::setup_all();
    }

    void destroy()
    {
        xDebugRemoveTweak("HUD");
        widget::disable_all(true);
        block_allocator::flush_all();
    }

    void update(F32 dt)
    {
        widget::update_all(dt);
    }

    void render()
    {
        if (inited)
        {
            widget::render_all();
        }
    }

    widget::widget(const asset& asset)
    {
        a = &asset;
        _motive_top = NULL;
        _motive_temp = NULL;
        _motive_temp_tail = NULL;
        flag.visible = 1;
        flag.enabled = 0;
        rc.loc = asset.loc;
        rc.size = asset.size;
        rc.r = rc.g = rc.b = rc.a = 1.0f;
        start_rc = rc;
    }

    void widget::init_base(xBase& b, const xBaseAsset& asset, unsigned long a2)
    {
        xBaseInit(&b, (xBaseAsset*)&asset);
        b.eventFunc = cb_dispatch;
        if (b.linkCount != 0)
        {
            b.link = (xLinkAsset*)((U32)&asset + a2);
        }
    }

    void widget::destruct()
    {
        disable();
    }

    void widget::presetup()
    {
        activity = ACT_NONE;
        add_tweaks();
    }

    void widget::updater(F32 dt)
    {
        _motive_temp_tail = &_motive_temp;
        motive_node** ppmVar2 = &_motive_top;
        motive_node* top = _motive_top;
        while (top != NULL)
        {
            bool unk = top->m.update(*this, dt);
            if (!unk)
            {
                *ppmVar2 = top->next;
                motive_allocator()->free(top);
            }
            else
            {
                ppmVar2 = &top->next;
            }
            top = *ppmVar2;
        }

        if (_motive_temp != NULL)
        {
            *_motive_temp_tail = _motive_top;
            _motive_top = _motive_temp;
            _motive_temp = NULL;
        }

        _motive_temp_tail = NULL;
        if (_motive_top == NULL)
        {
            activity = ACT_NONE;
        }
    }

    void widget::dispatcher(xBase*, U32 event, const F32* toParam, xBase*)
    {
        switch (event)
        {
        case eEventEnable:
            enable();
            break;
        case eEventDisable:
            disable();
            break;
        case eEventVisible:
        case eEventFastVisible:
            flag.visible = 1;
            break;
        case eEventInvisible:
        case eEventFastInvisible:
            flag.visible = 0;
            break;
        case eEventDispatcher_ShowHud:
            show();
            break;
        case eEventDispatcher_HideHud:
            hide();
            break;
        }
    }

    // Equivalent: scheduling
    U32 widget::type() const
    {
        static U32 myid = xStrHash(a->type_name());
        return myid;
    }

    bool widget::is(U32 id) const
    {
        return id == widget::type();
    }

    void widget::show()
    {
        clear_motives();

        activity = ACT_SHOW;

        F32 dVar8 = start_rc.loc.x - rc.loc.x;
        F32 dVar7 = start_rc.loc.y - rc.loc.y;
        F32 fVar1 = dVar8 * dVar8 + dVar7 * dVar7;
        if (fVar1 <= 0.000000009999999f)
        {
            rc.loc = start_rc.loc;
            rc.a = start_rc.a;
        }
        else
        {
            F32 dVar4 = xsqrt(fVar1);
            F32 dVar6 = 10.0f * dVar7;
            fVar1 = 10.0f * dVar8;
            F32 dVar5 = (-(fVar1 * fVar1 + (dVar6 * dVar6)) / (2.0f * dVar4));

            add_motive(motive(&rc.loc.x, fVar1, dVar8, (dVar5 * dVar8) / dVar4,
                              accelerate_motive_update, NULL));

            add_motive(motive(&rc.loc.y, dVar6, dVar7, (dVar5 * dVar7) / dVar4,
                              accelerate_motive_update, NULL));

            fVar1 = start_rc.a - rc.a;
            add_motive(motive(&rc.a, 3.0f * fVar1, fVar1, 0.0f, linear_motive_update, NULL));
        }
    }

    // Nonmatching: not finished
    void widget::hide()
    {
        activity = ACT_HIDE;

        F32 fVar1 = start_rc.size.x;
        F32 fVar3 = start_rc.size.y;
        F32 fVar7 = (start_rc.loc.x - 0.5f) + 0.5f * fVar1;
        F32 fVar8 = (start_rc.loc.y - 0.5f) + 0.5f * fVar3;
        if (iabs(iabs(fVar7) + iabs(fVar8)) <= 0.0001f)
        {
            rc.a = 0.0f;
        }
        else
        {
            F32 fVar5;
            F32 fVar6;
            if (iabs(fVar7) > iabs(fVar8))
            {
                if (fVar8 >= 0.0f)
                {
                    fVar6 = 0.5f + fVar3;
                }
                else
                {
                    fVar6 = -0.5f - fVar3;
                }
                fVar5 = (fVar6 * fVar7) / fVar8;
            }
            else
            {
                if (fVar7 >= 0.5f)
                {
                    fVar5 = 0.5f + fVar1;
                }
                else
                {
                    fVar5 = -0.5f - fVar1;
                }
                fVar6 = (fVar5 * fVar8) / fVar7;
            }

            F32 dVar11 = 255.0f + (fVar6 - 0.5f * fVar3) - rc.loc.y;
            F32 dVar12 = 255.0f + (fVar5 - 0.5f * fVar1) - rc.loc.x;
            F32 dVar10 = xsqrt(dVar12 * dVar12 + dVar11 * dVar11);

            add_motive(
                motive(&rc.loc.x, 0.0f, dVar12, dVar12 * dVar10, accelerate_motive_update, NULL));

            add_motive(
                motive(&rc.loc.y, 0.0f, dVar11, dVar11 * dVar10, accelerate_motive_update, NULL));

            fVar1 = -rc.a;
            add_motive(motive(&rc.a, 0.4f * fVar1, dVar11, 0.0f, linear_motive_update, NULL));
        }
    }

    namespace
    {

        void fp_setup(widget& w)
        {
            w.setup();
        }

        void fp_render(widget& w)
        {
            if (w.visible())
            {
                w.render();
            }
        }

    } // namespace

    void widget::add_motive(const motive& m)
    {
        motive_node* node = (motive_node*)motive_allocator()->alloc();
        new (node) motive(m);

        if (_motive_temp_tail == NULL)
        {
            node->next = _motive_top;
            _motive_top = node;
        }
        else
        {
            if (_motive_temp == NULL)
            {
                _motive_temp_tail = &node->next;
            }
            node->next = _motive_temp;
            _motive_temp = node;
        }
    }

    void widget::clear_motives()
    {
        activity = ACT_NONE;
        motive_node* node = _motive_top;
        while (node != NULL)
        {
            node->m.finish();
            _motive_top = node->next;
            motive_allocator()->free(node);
            node = _motive_top;
        }
    }

    void widget::clear_motives(bool (*fp_update)(widget&, motive&, F32), void* context)
    {
        motive_node** ppmVar2 = &_motive_top;
        motive_node* node = _motive_top;

        while (node != NULL)
        {
            if (node->m.fp_update == fp_update && node->m.context == context)
            {
                *ppmVar2 = node->next;
                motive_allocator()->free(node);
            }
            else
            {
                ppmVar2 = &node->next;
            }
            node = *ppmVar2;
        }

        if (_motive_top == NULL)
        {
            activity = ACT_NONE;
        }
    }

    bool linear_motive_update(widget& w, motive& m, F32 dt)
    {
        F32 fVar1 = dt * m.delta;
        F32 fVar2 = m.max_offset - m.offset;
        if ((fVar1 >= 0.0f && fVar1 >= fVar2) || (fVar1 < 0.0f && fVar1 <= fVar2))
        {
            *m.value += fVar2;
            m.offset = m.max_offset;
            return false;
        }
        else
        {
            *m.value += fVar1;
            m.offset += fVar1;
            return true;
        }
    }

    // Equivalent: regalloc
    bool accelerate_motive_update(widget& w, motive& m, F32 dt)
    {
        F32 fVar2;
        F32 fVar1;
        F32 delta;

        fVar1 = 0.5f * m.accel;
        delta = m.delta;
        m.delta = dt * m.accel + delta;
        delta *= dt;
        fVar1 *= dt;
        fVar1 = dt * fVar1 + delta;

        fVar2 = m.max_offset - m.offset;

        if ((fVar1 >= 0.0f && fVar1 >= fVar2) || (fVar1 < 0.0f && fVar1 <= fVar2))
        {
            *m.value += fVar2;
            m.offset = m.max_offset;
            return false;
        }
        else
        {
            *m.value += fVar1;
            m.offset += fVar1;
            return true;
        }
    }

    void __deadstripped_xHud()
    {
        // "%d" was used in a deadstripped function. This function forces it to be used.
        xStrHash("%d");
    }

    xModelInstance* load_model(U32 modelID)
    {
        U32 size;
        void* info = xSTFindAsset(xStrHashCat(modelID, ".minf"), &size); // xModelAssetInfo*
        if (info != NULL)
        {
            return zEntRecurseModelInfo(info, NULL);
        }

        info = xSTFindAsset(modelID, &size); // RpAtomic*
        if (info == NULL)
        {
            info = xSTFindAsset(xStrHashCat(modelID, ".dff"), &size); // RpAtomic*
        }
        if (info == NULL)
        {
            return NULL;
        }

        return xModelInstanceAlloc((RpAtomic*)info, NULL, 0, 0, NULL);
    }

} // namespace xhud
