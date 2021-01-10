#ifndef XMATH2_H
#define XMATH2_H

#include <types.h>

template <class T> struct basic_rect
{
    T x;
    T y;
    T w;
    T h;

    basic_rect& assign(T _x, T _y, T _w, T _h);
    basic_rect& contract(T _x, T _y, T _w, T _h);

    basic_rect& operator=(const basic_rect&); // temp
};

struct xVec2
{
    float32 x;
    float32 y;

    xVec2& operator=(float32);
};

float32 xVec2Dist(float32 x1, float32 y1, float32 x2, float32 y2);
float32 xVec2Dot(const xVec2* a, const xVec2* b);
void xVec2Init(xVec2* v, float32 _x, float32 _y);

#endif