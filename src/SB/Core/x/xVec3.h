#ifndef XVEC3_H
#define XVEC3_H

#include <types.h>

struct xVec3
{
    F32 x;
    F32 y;
    F32 z;

    static const xVec3 m_Null;
    static const xVec3 m_UnitAxisX;
    static const xVec3 m_UnitAxisY;

    static xVec3 create(F32 x, F32 y, F32 z);
    static xVec3 create(F32 f);

    xVec3& operator=(F32);
    xVec3 operator+(const xVec3&) const;
    xVec3 operator-(const xVec3&) const;
    xVec3 operator*(F32) const;
    xVec3& operator+=(const xVec3&);
    xVec3& operator+=(F32);
    xVec3& operator-=(const xVec3&);
    xVec3& operator-=(F32);
    xVec3& operator*=(F32);
    xVec3& operator/=(F32);

    xVec3& right_normalize();
    xVec3& safe_normalize(const xVec3& val);
    xVec3& up_normalize();
    xVec3 up_normal() const;
    xVec3& assign(F32 x, F32 y, F32 z);
    F32 length() const;
    F32 length2() const;
    xVec3& invert();
    F32 dot(const xVec3& c) const;
    xVec3& normalize();
    xVec3& assign(F32 val);
};

F32 xVec3Normalize(xVec3* o, const xVec3* v);
F32 xVec3NormalizeFast(xVec3* o, const xVec3* v);
void xVec3Copy(xVec3* dst, const xVec3* src);
F32 xVec3Dot(const xVec3* a, const xVec3* b);

#endif
