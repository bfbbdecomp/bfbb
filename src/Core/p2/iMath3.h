#ifndef IMATH3_H
#define IMATH3_H

#include "../x/xMath3.h"
#include "../x/xIsect.h"
#include "../x/xRay3.h"

void iMath3Init();
void iSphereIsectVec(const xSphere* s, const xVec3* v, xIsect* isx);
void iSphereIsectRay(const xSphere* s, const xRay3* r, xIsect* isx);
void iSphereIsectSphere(const xSphere* s, const xSphere* p, xIsect* isx);
void iSphereInitBoundVec(xSphere* s, const xVec3* v);
void iSphereBoundVec(xSphere* o, const xSphere* s, const xVec3* v);
void iCylinderIsectVec(const xCylinder* c, const xVec3* v, xIsect* isx);
void iBoxVecDist(const xBox* box, const xVec3* v, xIsect* isx);
void iBoxIsectVec(const xBox* b, const xVec3* v, xIsect* isx);
void iBoxIsectRay(const xBox* b, const xRay3* r, xIsect* isx);
void iBoxIsectSphere(const xBox* box, const xSphere* p, xIsect* isx);
void iBoxInitBoundVec(xBox* b, const xVec3* v);
void iBoxBoundVec(xBox* o, const xBox* b, const xVec3* v);

#endif