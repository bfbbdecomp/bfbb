#ifndef XHUD_H
#define XHUD_H

#include "xBase.h"
#include "xVec3.h"
#include "xDynAsset.h"

typedef struct asset;
typedef struct widget;

namespace xhud
{
    struct render_context
    {
        xVec3 loc;
        xVec3 size;
        xVec3 rot;
        float32 r;
        float32 g;
        float32 b;
        float32 a;
    };

    struct motive
    {
        float32* value;
        float32 delta;
        float32 start_delta;
        float32 max_offset;
        float32 offset;
        float32 accel;
        uint8 (*fp_update)(widget&, motive&, float32);
        void* context;
        uint8 inverse;
    };

    struct motive_node
    {
        motive m;
        motive_node* next;
    };

    struct _class_5
    {
        uint8 visible;
        uint8 enabled;
    };

    enum _enum
    {
        ACT_NONE,
        ACT_SHOW,
        ACT_HIDE,
        MAX_ACT
    };

    struct asset : xDynAsset
    {
        xVec3 loc;
        xVec3 size;
    };

    struct widget
    {
        _class_5 flag;
        render_context rc;
        render_context start_rc;
        asset* a;
        _enum activity;
        motive_node* _motive_top;
        motive_node* _motive_temp;
        motive_node** _motive_temp_tail;

        widget(asset& a);
        void setup();
        void enable();
        void update(float32 dt);
        void dispatch(uint32 event);
        void clear_motives(uint8 (*fp_update)(widget&, motive&, float32), void* context);
        void add_motive(motive& m);
        void hide();
        void show();
        void updater(float32 dt);
        void presetup();
        void destruct();
    };

}; // namespace xhud

#endif