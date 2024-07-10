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
    };

    struct motive_node
    {
        motive m;
        motive_node* next;
    };

    struct asset : xDynAsset
    {
        xVec3 loc;
        xVec3 size;
    };

    struct widget
    {
        struct
        {
            U8 visible;
            U8 enabled;
        } flag;
        render_context rc;
        render_context start_rc;
        asset* a;
        enum _enum
        {
            ACT_NONE,
            ACT_SHOW,
            ACT_HIDE,
            MAX_ACT
        } activity;
        motive_node* _motive_top;
        motive_node* _motive_temp;
        motive_node** _motive_temp_tail;

        widget(asset& a);
        virtual void destroy();
        void init();
        void setup();
        void enable();
        void update(F32 dt);
        void dispatch(U32 event);
        void clear_motives(U8 (*fp_update)(widget&, motive&, F32), void* context);
        void add_motive(motive& m);
        void hide();
        void show();
        void updater(F32 dt);
        void presetup();
        void destruct();
        void add_tweaks();
        void render();
        void debug_render();
    };
}; // namespace xhud

#endif
