#include "xHud.h"
#include "xDebug.h"
#include "xEvent.h"
#include "xMath.h"

#include <types.h>

xhud::block_allocator* xhud::block_allocator::_head_alloc;

namespace xhud
{
static bool inited;
}

void xhud::block_allocator::flush_all()
{
    for (block_allocator* allocator = _head_alloc; allocator != NULL; allocator = allocator->_next_alloc)
    {
        allocator->flush();
    }
}

xhud::block_allocator::block_allocator(U32 a0, U32 a1)
{
    _block_size = ALIGN(a0, 4) + 4;
    _top = NULL;
    _next_alloc = _head_alloc;
    _head_alloc = this;
    set_increment(a1);
}

void xhud::block_allocator::set_increment(U32 a0)
{
    _alloc_size = _block_size * a0;
}

void xhud::block_allocator::size_reserve(U32 size)
{
    void** ppvVar1 = (void**)xMemAllocSize(size);
    void** ppvVar2 = (void**)((U32)ppvVar1 + size);
    for (; ppvVar1 < ppvVar2; ppvVar1 = (void**)((U32)ppvVar1 + _block_size))
    {
        *ppvVar1 = _top;
        _top = ppvVar1;
    }
}

void* xhud::block_allocator::alloc()
{
    if (_top == NULL)
    {
        size_reserve(_alloc_size);
    }

    void** ptr = (void**)_top;
    _top = *ptr;
    return ptr + 1;
}

void xhud::block_allocator::free(void* ptr)
{
    *(void**)((U32)ptr - 4) = _top;
    _top = (void*)((U32)ptr - 4);
}

void xhud::block_allocator::flush()
{
    _top = NULL;
}

xhud::block_allocator* xhud::widget::motive_allocator()
{
    static block_allocator ba(40, 16);
    return &ba;
}

void xhud::init()
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

void xhud::setup()
{
    widget::setup_all();
}

void xhud::destroy()
{
    xDebugRemoveTweak("HUD");
    widget::disable_all(true);
    block_allocator::flush_all();
}

void xhud::update(F32 dt)
{
    widget::update_all(dt);
}

void xhud::render()
{
    if (inited)
    {
        widget::render_all();
    }
}

xhud::widget::widget(const asset& asset)
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

void xhud::widget::init_base(xBase& b, const xBaseAsset& asset, unsigned long a2)
{
    xBaseInit(&b, (xBaseAsset*)&asset);
    b.eventFunc = cb_dispatch;
    if (b.linkCount != 0)
    {
        b.link = (xLinkAsset*)((U32)&asset + a2);
    }
}

void xhud::widget::destruct()
{
    disable();
}

void xhud::widget::presetup()
{
    activity = ACT_NONE;
    add_tweaks();
}

void xhud::widget::updater(F32 dt)
{
    _motive_temp_tail = &_motive_temp;
    motive_node** ppmVar2 = &_motive_top;
    motive_node* top = _motive_top;
    while (top != NULL)
    {
        U8 unk = top->m.update(*this, dt);
        if (unk == 0)
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

void xhud::widget::dispatcher(xBase*, U32 event, const F32* toParam, xBase*)
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
U32 xhud::widget::type() const
{
    static U32 myid = xStrHash(a->type_name());
    return myid;
}

bool xhud::widget::is(U32 id) const
{
    return id == widget::type();
}
