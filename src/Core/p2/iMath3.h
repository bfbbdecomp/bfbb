#ifndef IMATH3_H
#define IMATH3_H
#include "../x/xVec3.h"
#include "../x/xMath3.h"
#include "../x/xVec3Inlines.h"
#include "../x/xCamera.h"

struct xIsect
{
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	xVec3 point;
	xVec3 norm;
	float32 dist;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int flags;
};


//EXTERN FUNCTIONS
extern float32 xsqrt(float num);

float32 xVec3Length(const xVec3 *param_1);

uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2);
//
void  iSphereIsectVec(const xSphere * o,const xVec3 * o1, xIsect * o2);

void iSphereIsectRay(const xSphere * o, const xRay3 * r, xIsect * isct);
#endif
