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

    xVec3& operator=(F32 f)
    {
        x = y = z = f;
        return *this;
    }
    // FIXME: This should not be declared. Declaring it causes the assignment operator for the
    //        anonymous struct "camera" in hook_asset to call it rather than just copy the vec members.
    xVec3& operator=(const xVec3&);
    xVec3 operator+(const xVec3&) const;
    xVec3 operator-(const xVec3&) const;
    xVec3 operator*(F32) const;
    xVec3 operator/(F32) const;
    xVec3& operator+=(const xVec3&);
    xVec3& operator+=(F32 f)
    {
        this->x += f;
        this->y += f;
        this->z += f;

        return *this;
    }
    xVec3& operator-=(const xVec3&);
    xVec3& operator-=(F32 f)
    {
        this->x -= f;
        this->y -= f;
        this->z -= f;

        return *this;
    }

    xVec3& operator*=(F32);
    xVec3& operator/=(F32);

    xVec3& right_normalize();
    xVec3& safe_normalize(const xVec3& val);
    xVec3& up_normalize();
    xVec3 up_normal() const;
    xVec3 normal() const;
    xVec3& assign(F32 x, F32 y, F32 z);
    F32 length() const;
    F32 length2() const;
    xVec3& invert();
    F32 dot(const xVec3& c) const;

    xVec3 cross(const xVec3& c) const
    {
        // Initializing this causes data to leak into other files
        xVec3 v;

        v.x = y * c.y - c.y * z;
        v.y = z * c.x - c.z * x;
        v.z = x * c.y - c.x * y;

        return v;
    }

    xVec3& normalize();
    xVec3& assign(F32 val);
    xVec3 get_abs() const;
    xVec3& set_abs();
};

F32 xVec3Normalize(xVec3* o, const xVec3* v);
F32 xVec3NormalizeFast(xVec3* o, const xVec3* v);
void xVec3Copy(xVec3* dst, const xVec3* src);
F32 xVec3Dot(const xVec3* a, const xVec3* b);

#endif
