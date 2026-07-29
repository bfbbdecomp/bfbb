#include "PowerPC_EABI_Support/MSL_C/MSL_Common/alloc.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"
#include <string.h>

#define Block_link msl_alloc_Block_link
#define Block_report msl_alloc_Block_report
#define SubBlock_report msl_alloc_SubBlock_report
#define link msl_alloc_link
#define __init_pool_obj msl_alloc___init_pool_obj
#define __report_on_pool_heap msl_alloc___report_on_pool_heap
#define __report_on_heap msl_alloc___report_on_heap
#define __msize msl_alloc___msize
#define __pool_alloc_clear msl_alloc___pool_alloc_clear
#define malloc msl_alloc_malloc
#define free msl_alloc_free
#define calloc msl_alloc_calloc
#define __pool_free_all msl_alloc___pool_free_all
#define __malloc_free_all msl_alloc___malloc_free_all

typedef struct Block
{
    struct Block* prev;
    struct Block* next;
    unsigned long max_size;
    unsigned long size;
} Block;

typedef struct SubBlock
{
    unsigned long size;
    Block* block;
    struct SubBlock* prev;
    struct SubBlock* next;
} SubBlock;

struct FixSubBlock;

typedef struct FixBlock
{
    struct FixBlock* prev_;
    struct FixBlock* next_;
    unsigned long client_size_;
    struct FixSubBlock* start_;
    unsigned long n_allocated_;
} FixBlock;

typedef struct FixSubBlock
{
    FixBlock* block_;
    struct FixSubBlock* next_;
} FixSubBlock;

typedef struct FixStart
{
    FixBlock* tail_;
    FixBlock* head_;
} FixStart;

typedef struct __mem_pool_obj
{
    Block* start_;
    FixStart fix_start[6];
} __mem_pool_obj;

typedef struct __mem_pool
{
    void* reserved[14];
} __mem_pool;

typedef signed long tag_word;

typedef struct block_header
{
    tag_word tag;
    struct block_header* prev;
    struct block_header* next;
} block_header;

typedef struct list_header
{
    block_header* rover;
    block_header header;
} list_header;

typedef struct heap_header
{
    struct heap_header* prev;
    struct heap_header* next;
} heap_header;

struct mem_pool_obj;
typedef void* (*sys_alloc_ptr)(unsigned long, struct mem_pool_obj*);
typedef void (*sys_free_ptr)(void*, struct mem_pool_obj*);

typedef struct pool_options
{
    sys_alloc_ptr sys_alloc_func;
    sys_free_ptr sys_free_func;
    unsigned long min_heap_size;
    int always_search_first;
} pool_options;

typedef struct mem_pool_obj
{
    list_header free_list;
    pool_options options;
    heap_header* heap_list;
    void* userData;

} mem_pool_obj;

static SubBlock* SubBlock_merge_prev(SubBlock*, SubBlock**);
static void SubBlock_merge_next(SubBlock*, SubBlock**);
static void SubBlock_construct(SubBlock*, unsigned long, Block*, int, int);
static SubBlock* SubBlock_split(SubBlock*, unsigned long);
static void FixBlock_construct(FixBlock*, FixBlock*, FixBlock*, unsigned long, FixSubBlock*, unsigned long);
static void Block_unlink(Block*, SubBlock*);
void Block_link(Block*, SubBlock*);

static const unsigned long fix_pool_sizes[] = { 4, 12, 20, 36, 52, 68 };

#define SubBlock_size(ths) ((ths)->size & 0xFFFFFFF8)
#define SubBlock_block(ths) ((Block*)((unsigned long)((ths)->block) & ~0x1))
#define Block_size(ths) ((ths)->size & 0xFFFFFFF8)
#define Block_start(ths) (*(SubBlock**)((char*)(ths) + Block_size((ths)) - sizeof(unsigned long)))

#define SubBlock_set_free(ths)                                                                     \
    unsigned long this_size = SubBlock_size((ths));                                                \
    (ths)->size &= ~0x2;                                                                           \
    *(unsigned long*)((char*)(ths) + this_size) &= ~0x4;                                           \
    *(unsigned long*)((char*)(ths) + this_size - sizeof(unsigned long)) = this_size

#define SubBlock_is_free(ths) !((ths)->size & 2)
#define SubBlock_set_size(ths, sz)                                                                 \
    (ths)->size &= ~0xFFFFFFF8;                                                                    \
    (ths)->size |= (sz)&0xFFFFFFF8;                                                                \
    if (SubBlock_is_free((ths)))                                                                   \
    *(unsigned long*)((char*)(ths) + (sz) - sizeof(unsigned long)) = (sz)

#define SubBlock_from_pointer(ptr) ((SubBlock*)((char*)(ptr)-8))
#define FixSubBlock_from_pointer(ptr) ((FixSubBlock*)((char*)(ptr)-4))

#define FixBlock_client_size(ths) ((ths)->client_size_)
#define FixSubBlock_size(ths) (FixBlock_client_size((ths)->block_))

#define classify(ptr) (*(unsigned long*)((char*)(ptr) - sizeof(unsigned long)) & 1)
#define __msize_inline(ptr)                                                                        \
    (!classify(ptr) ? FixSubBlock_size(FixSubBlock_from_pointer(ptr)) :                            \
                      SubBlock_size(SubBlock_from_pointer(ptr)) - 8)

#define Block_empty(ths)                                                                           \
    (_sb = (SubBlock*)((char*)(ths) + 16)),                                                        \
        SubBlock_is_free(_sb) && SubBlock_size(_sb) == Block_size((ths)) - 24

#define FORCE_DONT_INLINE                                                                          \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0;                                                                                      \
    (void*)0

void Block_construct(Block* ths, unsigned long size)
{
    SubBlock* sb = (SubBlock*)((char*)ths + sizeof(Block));

    ths->size = size | 3;
    *(unsigned long*)((char*)ths + size - 8) = ths->size;
    sb->block = (Block*)((unsigned long)ths | 1);
    sb->size = size - 24;
    *(unsigned long*)((char*)sb + (size - 24) - sizeof(unsigned long)) = size - 24;
    ths->max_size = size - 24;
    Block_start(ths) = 0;

    Block_link(ths, sb);
}

static void Block_unlink(Block* block, SubBlock* sb)
{
    SubBlock** st;
    unsigned long tag;
    unsigned long tag_size;

    tag = sb->size;
    sb->size = tag | 2;
    tag_size = tag & ~7;
    *(unsigned long*)((char*)sb + tag_size) |= 4;

    st = &Block_start(block);
    if (*st == sb)
    {
        *st = sb->next;
    }
    if (*st == sb)
    {
        *st = 0;
        block->max_size = 0;
    }
    else
    {
        sb->next->prev = sb->prev;
        sb->prev->next = sb->next;
    }
}

SubBlock* Block_subBlock(Block* ths, unsigned long size)
{
    SubBlock* sb;
    SubBlock* start;
    unsigned long sb_size;
    unsigned long max_size;

    start = Block_start(ths);
    if (start == 0)
    {
        ths->max_size = 0;
        return 0;
    }

    sb = start;
    sb_size = SubBlock_size(sb);
    max_size = sb_size;

    while (sb_size < size)
    {
        sb = sb->next;
        sb_size = SubBlock_size(sb);
        if (max_size < sb_size)
        {
            max_size = sb_size;
        }
        if (sb == start)
        {
            ths->max_size = max_size;
            return 0;
        }
    }

    if (sb_size - size >= 0x50)
    {
        SubBlock_split(sb, size);
    }

    Block_start(ths) = sb->next;
    Block_unlink(ths, sb);

    return sb;
}

void Block_link(Block* ths, SubBlock* sb)
{
    SubBlock** st;
    SubBlock_set_free(sb);
    st = &Block_start(ths);

    if (*st != 0)
    {
        sb->prev = (*st)->prev;
        sb->prev->next = sb;
        sb->next = *st;
        (*st)->prev = sb;
        *st = sb;
        *st = SubBlock_merge_prev(*st, st);
        SubBlock_merge_next(*st, st);
    }
    else
    {
        *st = sb;
        sb->prev = sb;
        sb->next = sb;
    }
    if (ths->max_size < SubBlock_size(*st))
        ths->max_size = SubBlock_size(*st);
}

void Block_report(void)
{
    // UNUSED FUNCTION
}

static void SubBlock_construct(SubBlock* ths, unsigned long size, Block* bp, int prev_alloc, int this_alloc)
{
    ths->block = (Block*)((unsigned long)bp | 0x1);
    ths->size = size;
    if (prev_alloc)
    {
        ths->size |= 0x4;
    }
    if (this_alloc)
    {
        ths->size |= 0x2;
        *(unsigned long*)((char*)ths + size) |= 0x4;
    }
    else
    {
        *(unsigned long*)((char*)ths + size - sizeof(unsigned long)) = size;
    }
}

static SubBlock* SubBlock_split(SubBlock* ths, unsigned long sz)
{
    unsigned long origsize;
    int isfree;
    int isprevalloc;
    SubBlock* np;
    Block* bp;

    origsize = SubBlock_size(ths);
    isfree = SubBlock_is_free(ths);
    isprevalloc = ths->size & 0x04;
    np = (SubBlock*)((char*)ths + sz);
    bp = SubBlock_block(ths);

    SubBlock_construct(ths, sz, bp, isprevalloc, !isfree);
    SubBlock_construct(np, origsize - sz, bp, !isfree, !isfree);
    if (isfree)
    {
        np->next = ths->next;
        np->next->prev = np;
        np->prev = ths;
        ths->next = np;
    }
    return np;
}

static SubBlock* SubBlock_merge_prev(SubBlock* ths, SubBlock** start)
{
    unsigned long prevsz;
    SubBlock* p;

    if (!(ths->size & 0x04))
    {
        prevsz = *(unsigned long*)((char*)ths - sizeof(unsigned long));
        if (prevsz & 0x2)
            return ths;
        p = (SubBlock*)((char*)ths - prevsz);
        SubBlock_set_size(p, prevsz + SubBlock_size(ths));

        if (*start == ths)
            *start = (*start)->next;
        ths->next->prev = ths->prev;
        ths->next->prev->next = ths->next;
        return p;
    }
    return ths;
}

static void SubBlock_merge_next(SubBlock* pBlock, SubBlock** pStart)
{
    SubBlock* next_sub_block;
    unsigned long this_cur_size;

    next_sub_block = (SubBlock*)((char*)pBlock + (pBlock->size & 0xFFFFFFF8));

    if (!(next_sub_block->size & 2))
    {
        this_cur_size = (pBlock->size & 0xFFFFFFF8) + (next_sub_block->size & 0xFFFFFFF8);

        pBlock->size &= ~0xFFFFFFF8;
        pBlock->size |= this_cur_size & 0xFFFFFFF8;

        if (!(pBlock->size & 2))
        {
            *(unsigned long*)((char*)(pBlock) + (this_cur_size)-4) = (this_cur_size);
        }

        if (!(pBlock->size & 2))
        {
            *(unsigned long*)((char*)pBlock + this_cur_size) &= ~4;
        }
        else
        {
            *(unsigned long*)((char*)pBlock + this_cur_size) |= 4;
        }

        if (*pStart == next_sub_block)
        {
            *pStart = (*pStart)->next;
        }

        if (*pStart == next_sub_block)
        {
            *pStart = 0;
        }

        next_sub_block->next->prev = next_sub_block->prev;
        next_sub_block->prev->next = next_sub_block->next;
    }
}

void SubBlock_report(void)
{
    // UNUSED FUNCTION
}

void link(void)
{
    // UNUSED FUNCTION
}

static Block* __unlink(__mem_pool_obj* pool_obj, Block* bp)
{
    Block* result = bp->next;
    if (result == bp)
    {
        result = 0;
    }

    if (pool_obj->start_ == bp)
    {
        pool_obj->start_ = result;
    }

    if (result != 0)
    {
        result->prev = bp->prev;
        result->prev->next = result;
    }

    bp->next = 0;
    bp->prev = 0;
    return result;
}

Block* link_new_block(__mem_pool_obj* pool_obj, unsigned long size)
{
    Block* block;

    size = (size + 0x1f) & ~7;
    if (size < 0x10000)
    {
        size = 0x10000;
    }

    block = (Block*)__sys_alloc(size);
    if (block == 0)
    {
        return 0;
    }

    Block_construct(block, size);

    if (pool_obj->start_ != 0)
    {
        block->prev = pool_obj->start_->prev;
        block->prev->next = block;
        block->next = pool_obj->start_;
        pool_obj->start_->prev = block;
        pool_obj->start_ = block;
    }
    else
    {
        pool_obj->start_ = block;
        block->prev = block;
        block->next = block;
    }

    return block;
}

void* allocate_from_var_pools(__mem_pool_obj* pool_obj, unsigned long size)
{
    Block* bp;
    SubBlock* sb;

    size = (size + 0xf) & ~7;
    if (size < 0x50)
    {
        size = 0x50;
    }

    bp = pool_obj->start_ != 0 ? pool_obj->start_ : link_new_block(pool_obj, size);

    if (bp == 0)
    {
        return 0;
    }

    do
    {
        if (size <= bp->max_size)
        {
            sb = Block_subBlock(bp, size);
            if (sb != 0)
            {
                pool_obj->start_ = bp;
                goto done;
            }
        }

        bp = bp->next;
    } while (bp != pool_obj->start_);

    bp = link_new_block(pool_obj, size);
    if (bp == 0)
    {
        return 0;
    }

    sb = Block_subBlock(bp, size);
done:
    return (char*)sb + 8;
}

void* soft_allocate_from_var_pools(Block** start_ptr, unsigned long size, unsigned long* max_free_size)
{
    Block* bp;
    SubBlock* sb;

    size = (size + 0xf) & ~7;
    if (size < 0x50)
    {
        size = 0x50;
    }

    *max_free_size = 0;
    bp = *start_ptr;

    if (bp == 0)
    {
        return 0;
    }

    do
    {
        if (size <= bp->max_size)
        {
            sb = Block_subBlock(bp, size);
            if (sb != 0)
            {
                *start_ptr = bp;
                goto found;
            }
        }

        if (bp->max_size > 8)
        {
            unsigned long free_size = bp->max_size - 8;
            if (*max_free_size < free_size)
            {
                *max_free_size = free_size;
            }
        }

        bp = bp->next;
    } while (bp != *start_ptr);

    return 0;

found:
    return (char*)sb + 8;
}

static void deallocate_from_var_pools(__mem_pool_obj* pool_obj, void* ptr)
{
    SubBlock* sb = SubBlock_from_pointer(ptr);
    SubBlock* _sb;

    Block* bp = SubBlock_block(sb);
    Block_link(bp, sb);

    if (Block_empty(bp))
    {
        __unlink(pool_obj, bp);
        __sys_free(bp);
    }
}

static void FixBlock_construct(
    FixBlock* ths, FixBlock* prev, FixBlock* next, unsigned long index, FixSubBlock* chunk, unsigned long chunk_size
)
{
    unsigned long fixSubBlock_size;
    unsigned long n;
    unsigned long k;

    ths->prev_ = prev;
    ths->next_ = next;
    prev->next_ = ths;
    next->prev_ = ths;
    ths->client_size_ = fix_pool_sizes[index];
    fixSubBlock_size = fix_pool_sizes[index] + 4;
    n = chunk_size / fixSubBlock_size;
    {
        char* p = (char*)chunk;
        char* np;

        for (k = 0; k < n - 1; k++)
        {
            np = p + fixSubBlock_size;
            ((FixSubBlock*)p)->block_ = ths;
            ((FixSubBlock*)p)->next_ = (FixSubBlock*)np;
            p = np;
        }
        ((FixSubBlock*)p)->block_ = ths;
        ((FixSubBlock*)p)->next_ = 0;
    }
    ths->start_ = (FixSubBlock*)((char*)ths + 0x14);
    ths->n_allocated_ = 0;
}

void __init_pool_obj(__mem_pool* pool_obj)
{
    memset(pool_obj, 0, sizeof(__mem_pool_obj));
}

static __mem_pool* get_malloc_pool(void)
{
    static __mem_pool protopool;
    static unsigned char init = 0;
    if (!init)
    {
        __init_pool_obj(&protopool);
        init = 1;
    }

    return &protopool;
}

void* allocate_from_fixed_pools(__mem_pool_obj* pool_obj, unsigned long size)
{
    unsigned long i = 0;
    FixStart* fs;

    while (size > fix_pool_sizes[i])
    {
        ++i;
    }

    fs = &pool_obj->fix_start[i];

    if ((fs->head_ == 0) || (fs->head_->start_ == 0))
    {
        const unsigned long* pool_sizes = fix_pool_sizes;
        unsigned long n = 0xFEC / (pool_sizes[i] + 4);
        unsigned long max_n;
        void* block;
        unsigned long max_free_size;
        unsigned long msize;

        if (n > 0x100)
        {
            n = 0x100;
        }

        max_n = n;

        while (n >= 10)
        {
            block = soft_allocate_from_var_pools(&pool_obj->start_, n * (pool_sizes[i] + 4) + 0x14, &max_free_size);
            if (block != 0)
            {
                break;
            }

            if (max_free_size > 0x14)
            {
                n = (max_free_size - 0x14) / (pool_sizes[i] + 4);
            }
            else
            {
                n = 0;
            }
        }

        if ((block == 0) && (n < max_n))
        {
            block = allocate_from_var_pools(pool_obj, max_n * (pool_sizes[i] + 4) + 0x14);
            if (block == 0)
            {
                return 0;
            }
        }

        msize = __msize_inline(block);

        if (fs->head_ == 0)
        {
            fs->head_ = (FixBlock*)block;
            fs->tail_ = (FixBlock*)block;
        }

        FixBlock_construct((FixBlock*)block, fs->tail_, fs->head_, i, (FixSubBlock*)((char*)block + 0x14), msize - 0x14);
        fs->head_ = (FixBlock*)block;
    }

    {
        FixSubBlock* p = fs->head_->start_;

        fs->head_->start_ = p->next_;
        ++fs->head_->n_allocated_;

        if (fs->head_->start_ == 0)
        {
            fs->head_ = fs->head_->next_;
            fs->tail_ = fs->tail_->next_;
        }

        return (char*)p + 4;
    }
}

void deallocate_from_fixed_pools(__mem_pool_obj* pool_obj, void* ptr, unsigned long size)
{
    unsigned long i = 0;
    FixSubBlock* p;
    FixBlock* b;
    FixStart* fs;

    while (size > fix_pool_sizes[i])
    {
        ++i;
    }

    fs = &pool_obj->fix_start[i];
    p = FixSubBlock_from_pointer(ptr);
    b = p->block_;

    if (b->start_ == 0 && fs->head_ != b)
    {
        if (fs->tail_ == b)
        {
            fs->head_ = fs->head_->prev_;
            fs->tail_ = fs->tail_->prev_;
        }
        else
        {
            b->prev_->next_ = b->next_;
            b->next_->prev_ = b->prev_;
            b->next_ = fs->head_;
            b->prev_ = b->next_->prev_;
            b->prev_->next_ = b;
            b->next_->prev_ = b;
            fs->head_ = b;
        }
    }

    p->next_ = b->start_;
    b->start_ = p;

    if (--b->n_allocated_ == 0)
    {
        if (fs->head_ == b)
        {
            fs->head_ = b->next_;
        }

        if (fs->tail_ == b)
        {
            fs->tail_ = b->prev_;
        }

        b->prev_->next_ = b->next_;
        b->next_->prev_ = b->prev_;

        if (fs->head_ == b)
        {
            fs->head_ = 0;
        }

        if (fs->tail_ == b)
        {
            fs->tail_ = 0;
        }

        deallocate_from_var_pools(pool_obj, b);
    }
}

void __report_on_pool_heap(void)
{
    // UNUSED FUNCTION
}

void __report_on_heap(void)
{
    // UNUSED FUNCTION
}

void __msize(void)
{
    // UNUSED FUNCTION
}

void* __pool_alloc(__mem_pool* pool, unsigned long size)
{
    if (size == 0)
    {
        return 0;
    }

    if (size > (unsigned long)-0x31)
    {
        return 0;
    }

    if (size <= 68)
    {
        return allocate_from_fixed_pools((__mem_pool_obj*)pool, size);
    }

    return allocate_from_var_pools((__mem_pool_obj*)pool, size);
}

void __pool_free(__mem_pool* pool, void* ptr)
{
    __mem_pool_obj* pool_obj;
    unsigned long size;

    if (ptr == 0)
    {
        return;
    }

    pool_obj = (__mem_pool_obj*)pool;
    size = __msize_inline(ptr);

    if (size <= 68)
    {
        deallocate_from_fixed_pools(pool_obj, ptr, size);
    }
    else
    {
        deallocate_from_var_pools(pool_obj, ptr);
    }
}

void* __pool_realloc(__mem_pool* pool, void* ptr, unsigned long size)
{
    unsigned long current_size;
    unsigned long sz;
    SubBlock* sb;
    void* newptr;

    if (ptr == 0)
    {
        return __pool_alloc(pool, size);
    }
    if (size == 0)
    {
        __pool_free(pool, ptr);
        return 0;
    }

    current_size = __msize_inline(ptr);
    if (size > current_size)
    {
        if (classify(ptr))
        {
            if (size > (unsigned long)-0x31)
            {
                return 0;
            }

            sz = (size + 0xF) & ~7;
            if (sz < 0x50)
            {
                sz = 0x50;
            }

            sb = SubBlock_from_pointer(ptr);
            SubBlock_merge_next(sb, &Block_start(SubBlock_block(sb)));
            if (SubBlock_size(sb) >= sz)
            {
                if (SubBlock_size(sb) - sz >= 0x50)
                {
                    Block_link(SubBlock_block(sb), SubBlock_split(sb, sz));
                }
                return ptr;
            }
        }

        newptr = __pool_alloc(pool, size);
        if (newptr == 0)
        {
            return 0;
        }
        memcpy(newptr, ptr, current_size);
        __pool_free(pool, ptr);
        return newptr;
    }

    if (classify(ptr))
    {
        size = (size + 0xF) & ~7;
        if (size < 0x50)
        {
            size = 0x50;
        }

        sb = SubBlock_from_pointer(ptr);
        if (SubBlock_size(sb) - size >= 0x50)
        {
            Block_link(SubBlock_block(sb), SubBlock_split(sb, size));
        }
    }

    return ptr;
}

void __pool_alloc_clear(void)
{
    // UNUSED FUNCTION
}

void malloc(void)
{
    // UNUSED FUNCTION
}

void free(void* ptr)
{
    __begin_critical_region(malloc_pool_access);
    __pool_free(get_malloc_pool(), ptr);
    __end_critical_region(malloc_pool_access);
}

void* realloc(void* ptr, size_t size)
{
    void* block;

    __begin_critical_region(malloc_pool_access);
    block = __pool_realloc(get_malloc_pool(), ptr, size);
    __end_critical_region(malloc_pool_access);

    return block;
}

void calloc(void)
{
    // UNUSED FUNCTION
}

void __pool_free_all(void)
{
    // UNUSED FUNCTION
}

void __malloc_free_all(void)
{
    // UNUSED FUNCTION
}
