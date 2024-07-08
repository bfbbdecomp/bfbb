#ifndef XHUD_H
#define XHUD_H

#include "xBase.h"
#include "xVec3.h"
#include "xDynAsset.h"
#include "xModel.h"

typedef struct asset;
typedef struct widget;

namespace xhud
{
    struct block_allocator
    {
        U32 unk0;
        U32 unk4;
        void* unk8;
        block_allocator* next;

        static block_allocator* _head_alloc;

        block_allocator(U32 a0, U32 a1);

        static void flush_all();
        void flush();
        void set_increment(U32 a0);
        void size_reserve(U32 size);
        void* alloc();
        void free(void* ptr);
    };

    struct color32u
    {
        U8 r;
        U8 g;
        U8 b;
        U8 a;
    };

    struct render_context
    {
        xVec3 loc;
        xVec3 size;
        xVec3 rot;
        F32 r;
        F32 g;
        F32 b;
        F32 a;
    };

    struct asset : xDynAsset
    {
        xVec3 loc;
        xVec3 size;

        static const char* type_name()
        {
            return "hud";
        }
    };

    struct motive;
    struct motive_node;

    struct widget
    {
        struct
        {
            U8 visible;
            U8 enabled;
        } flag;
        render_context rc;
        render_context start_rc;
        const asset* a;
        enum _enum
        {
            ACT_NONE,
            ACT_SHOW,
            ACT_HIDE,
            MAX_ACT
        } activity;

        virtual void destroy();
        virtual U32 type() const;
        virtual U32 is(U32 id) const;

        motive_node* _motive_top;
        motive_node* _motive_temp;
        motive_node** _motive_temp_tail;

        static void disable_all(bool);
        static void setup_all();
        static void update_all(F32 dt);
        static void render_all();

        static void init_base(xBase&, const xBaseAsset&, unsigned long);
        static S32 cb_dispatch(xBase*, xBase*, U32, const F32*, xBase*);

        widget(const asset& a);
        void destruct();
        void presetup();
        void disable();
        void updater(F32 dt);
        void dispatcher(xBase*, U32, const F32*, xBase*);

        void add_tweaks();

        void setup();
        void enable();
        void update(F32 dt);
        void dispatch(U32 event);
        void clear_motives(U8 (*fp_update)(widget&, motive&, F32), void* context);
        void add_motive(motive& m);
        void hide();
        void show();

        static block_allocator* motive_allocator();
    };

    struct motive
    {
        F32* value;
        F32 delta;
        F32 start_delta;
        F32 max_offset;
        F32 offset;
        F32 accel;
        U8 (*fp_update)(widget&, motive&, F32);
        void* context;
        U8 inverse;

        U8 update(xhud::widget&, F32 dt);
    };

    struct motive_node
    {
        motive m;
        motive_node* next;
    };

    static bool inited;

    void init();
    void setup();
    void destroy();
    void update(F32 dt);
    void render();
}; // namespace xhud

#endif
