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
        U32 _block_size;
        U32 _alloc_size;
        void* _top; // FIXME: This is a holder*
        block_allocator* _next_alloc;

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

        virtual void destroy() {}
        virtual U32 type() const;
        virtual bool is(U32 id) const;
        virtual void init() {}
        virtual void setup() { presetup(); }
        virtual void update(F32 dt) { updater(dt); }
        virtual void render() {}
        virtual void dispatch(xBase* b1, U32 event, const F32* toParam, xBase* b2);

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
        void updater(F32 dt);
        void dispatcher(xBase*, U32, const F32*, xBase*);


        void disable()
        {
            flag.enabled = 0;
        }

        void add_tweaks()
        {

        }

        void enable()
        {
            flag.enabled = 1;
        }

        void clear_motives();
        void clear_motives(bool (*fp_update)(widget&, motive&, F32), void* context);
        void add_motive(const motive& m);
        void hide();
        void show();

        bool visible() const
        {
            return flag.visible && enabled();
        }

        U8 enabled() const
        {
            return flag.enabled;
        }

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
        bool (*fp_update)(widget&, motive&, F32);
        void* context;
        U8 inverse;

        motive(F32* value, F32 delta, F32 max_offset, F32 accel, bool (*fp_update)(xhud::widget&, motive&, F32), void* context)
        {
            this->value = value;
            this->delta = delta;
            this->start_delta = delta;
            this->max_offset = max_offset;
            this->offset = 0.0f;
            this->accel = accel;
            this->fp_update = fp_update;
            this->context = context;
        }
        motive(const motive& other);

        bool update(widget& w, F32 dt)
        {
            return fp_update(w, *this, dt);
        }

        void finish()
        {
            if (value != NULL)
            {
                *value += (max_offset - offset);
            }
            offset = max_offset;
        }
    };

    struct motive_node
    {
        motive m;
        motive_node* next;
    };

    void init();
    void setup();
    void destroy();
    void update(F32 dt);
    void render();

    bool linear_motive_update(widget& w, motive& m, F32);
    bool accelerate_motive_update(widget& w, motive& m, F32);

    xModelInstance* load_model(U32);
}; // namespace xhud

#endif
