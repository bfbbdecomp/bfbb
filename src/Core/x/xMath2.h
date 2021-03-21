#ifndef XMATH2_H
#define XMATH2_H

#include <types.h>

template <class T> struct basic_rect
{
    T x;
    T y;
    T w;
    T h;

    static basic_rect m_Null;
    static basic_rect m_Unit;

    basic_rect& assign(T x, T y, T w, T h);
    basic_rect& contract(T x, T y, T w, T h);
    basic_rect& move(T x, T y);
    basic_rect& scale(T s);
    basic_rect& scale(T x, T y);
    basic_rect& scale(T x, T y, T w, T h);
    void clip(basic_rect& a, basic_rect& b) const;
    void set_bounds(T x1, T y1, T x2, T y2);
    void get_bounds(T& x1, T& y1, T& x2, T& y2) const;
    bool empty() const;

    basic_rect& operator=(const basic_rect&); // temp
    basic_rect& operator|=(const basic_rect& other);
};

struct xVec2
{
    float32 x;
    float32 y;

    xVec2& assign(float32 x, float32 y);

    xVec2& operator=(const xVec2&); // temp
    xVec2& operator=(float32);
    xVec2 operator*(float32) const;
    xVec2& operator+=(const xVec2&);
    xVec2& operator*=(float32);
};

float32 xVec2Dist(float32 x1, float32 y1, float32 x2, float32 y2);
float32 xVec2Dot(const xVec2* a, const xVec2* b);
void xVec2Init(xVec2* v, float32 _x, float32 _y);

#endif