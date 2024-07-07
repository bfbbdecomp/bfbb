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
    void set_size(T w, T h);
    void set_size(T s);
    void center(T x, T y);

    basic_rect& operator|=(const basic_rect& other);
};

struct xVec2
{
    F32 x;
    F32 y;

    xVec2& assign(F32 xy)
    {
        return assign(xy,xy);
    }
    xVec2& assign(F32 x, F32 y);
    F32 length() const;

    xVec2& operator=(F32);
    xVec2 operator*(F32) const;
    xVec2& operator+=(const xVec2&);
    xVec2& operator*=(F32);
};

F32 xVec2Dist(F32 x1, F32 y1, F32 x2, F32 y2);
F32 xVec2Dot(const xVec2* a, const xVec2* b);
void xVec2Init(xVec2* v, F32 _x, F32 _y);

#endif
