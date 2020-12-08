#ifndef XVEC3_H
#define XVEC3_H

#include <types.h>

struct xVec3
{
    float32 x;
    float32 y;
    float32 z;

    xVec3& operator=(const xVec3&);

    void safe_normalize(const xVec3& val);
    void up_normalize();
};
float32 xVec3Normalize(xVec3* o, const xVec3* v);
float32 xVec3Dot(const xVec3* a, const xVec3* b);
void xVec3Copy(xVec3 * o, const xVec3 * a);

#endif