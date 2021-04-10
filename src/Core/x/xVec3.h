#ifndef XVEC3_H
#define XVEC3_H

#include <types.h>

struct xVec3
{
    float32 x;
    float32 y;
    float32 z;

    static xVec3 m_Null;
    static xVec3 m_UnitAxisX;
    static xVec3 m_UnitAxisY;

    static xVec3 create(float32 x, float32 y, float32 z);

    xVec3& operator=(float32);
    xVec3 operator+(const xVec3&) const;
    xVec3 operator-(const xVec3&) const;
    xVec3 operator*(float32) const;
    xVec3& operator+=(const xVec3&);
    xVec3& operator+=(float32);
    xVec3& operator-=(const xVec3&);
    xVec3& operator-=(float32);
    xVec3& operator*=(float32);
    xVec3& operator/=(float32);

    xVec3& right_normalize();
    xVec3& safe_normalize(const xVec3& val);
    xVec3& up_normalize();
    xVec3 up_normal() const;
    xVec3& assign(float32 x, float32 y, float32 z);
    float32 length() const;
    float32 length2() const;
    xVec3& invert();
    float32 dot(const xVec3& c) const;

    ASSIGNMENT_OPERATOR(xVec3)
};

float32 xVec3Normalize(xVec3* o, const xVec3* v);
float32 xVec3NormalizeFast(xVec3* o, const xVec3* v);
void xVec3Copy(xVec3* dst, const xVec3* src);
float32 xVec3Dot(const xVec3* a, const xVec3* b);

#endif