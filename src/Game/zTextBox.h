#ifndef ZTEXTBOX_H
#define ZTEXTBOX_H

#include "../Core/x/xDynAsset.h"
#include "../Core/x/xFont.h"

#include <rwcore.h>

struct ztextbox : xBase
{
    struct asset_type : xDynAsset
    {
        struct color_type
        {
            uint8 r;
            uint8 g;
            uint8 b;
            uint8 a;
        };

        uint32 text;
        basic_rect<float32> bounds;
        uint32 font;
        struct
        {
            float32 width;
            float32 height;
        } size;
        struct
        {
            float32 x;
            float32 y;
        } space;
        color_type color;
        struct
        {
            float32 left;
            float32 top;
            float32 right;
            float32 bottom;
        } inset;
        enum
        {
            XJ_LEFT,
            XJ_CENTER,
            XJ_RIGHT
        } xjustify;
        enum
        {
            EX_UP,
            EX_CENTER,
            EX_DOWN,
            MAX_EX
        } expand;
        float32 max_height;
        struct
        {
            uint32 type;
            color_type color;
            uint32 texture;
        } backdrop;
    };

    struct
    {
        struct
        {
            bool active : 1;
            bool dirty : 1;
            bool show_backdrop : 1;
            bool visible : 1;
            bool hack_invisible : 1;
        };
    } flag;
    asset_type* asset;
    xtextbox tb;
    int8* segments[16];
    uint32 segments_size;
    ztextbox* next;
    ztextbox* prev;
    RwRaster* bgtex;
};

#endif