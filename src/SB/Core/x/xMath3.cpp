#include "xMath3.h"

#include <types.h>

#include "iMath.h" // icos and isin
#include "xClimate.h" // xMat3x3Identity
#include "xMathInlines.h" // xasin, xatan2
//#include "xVec3Inlines.h" // xVec3Init, imported, realized xClimate has a declaration as well though.

void xMat4x3Copy(xMat4x3* o, const xMat4x3* m){

}


/* xMat4x3Mul (xMat4x3 *, xMat4x3 const *, xMat4x3 const *) */
void xMat4x3Mul(xMat4x3* o, const xMat4x3 *a, const xMat4x3 *b) {
    xVec3 sp8;

    xMat4x3Toworld(&sp8, b, (xVec3 *) &a->pad3);
    xMat3x3Mul((xMat3x3 *) o, (xMat3x3 *) a, (xMat3x3 *) b);
    xVec3Copy((xVec3 *) &o->pad3, &sp8);
}

/* xMat3x3Euler (xMat3x3 *, float, float, float) */
void xMat3x3Euler(xMat3x3* m, F32 yaw, F32 pitch, F32 roll) {
    F32 temp_f0;
    F32 temp_f1;
    F32 temp_f27;
    F32 temp_f28;
    F32 temp_f29;
    F32 temp_f30;
    F32 temp_f31;
    F32 temp_f7;

    temp_f27 = isin(yaw);
    temp_f28 = icos(yaw);
    temp_f29 = isin(pitch);
    temp_f30 = icos(pitch);
    temp_f31 = isin(roll);
    temp_f1 = icos(roll);
    temp_f7 = temp_f27 * temp_f29;
    temp_f0 = temp_f28 * temp_f29;
    m->right.x = (temp_f28 * temp_f1) + (temp_f31 * temp_f7);
    m->right.y = temp_f30 * temp_f31;
    m->right.z = (-temp_f27 * temp_f1) + (temp_f31 * temp_f0);
    m->up.x = (-temp_f28 * temp_f31) + (temp_f1 * temp_f7);
    m->up.y = temp_f30 * temp_f1;
    m->up.z = (temp_f27 * temp_f31) + (temp_f1 * temp_f0);
    m->at.x = temp_f27 * temp_f30;
    m->at.y = -temp_f29;
    m->at.z = temp_f28 * temp_f30;
    m->flags = 0;
}

void xRotCopy(xRot* o, const xRot* r){

}

void xMat4x3Toworld(xVec3* o, const xMat4x3* m, const xVec3* v){

}

void xMat3x3Rot(xMat3x3* m, const xVec3* a, F32 t){

}

/* xMat3x3RotC (xMat3x3 *, float, float, float, float) */
void xMat3x3RotC(xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t) {
    F32 temp_f0;
    F32 temp_f0_2;
    F32 temp_f1;
    F32 temp_f28;
    F32 temp_f2;
    F32 temp_f3;
    F32 temp_f4;
    F32 temp_f5;
    F32 temp_f6;
    F32 temp_f7;
    F32 temp_f8;

    if (t == 0.0f) {
        xMat3x3Identity(m);
        return;
    }
    temp_f28 = icos(t);
    temp_f1 = isin(t);
    temp_f5 = -temp_f1;
    temp_f2 = 1.0f - temp_f28;
    temp_f0 = temp_f2 * _x;
    temp_f8 = temp_f2 * _z;
    temp_f4 = temp_f2 * _y;
    temp_f3 = _y * temp_f0;
    temp_f6 = _x * temp_f8;
    temp_f0_2 = (temp_f1 * _z) + temp_f3;
    m->right.x = (_x * temp_f0) + temp_f28;
    temp_f7 = _z * temp_f4;
    m->right.y = temp_f0_2;
    m->right.z = (temp_f5 * _y) + temp_f6;
    m->up.x = (temp_f5 * _z) + temp_f3;
    m->up.y = (_y * temp_f4) + temp_f28;
    m->up.z = (temp_f1 * _x) + temp_f7;
    m->at.x = (temp_f1 * _y) + temp_f6;
    m->at.y = (temp_f5 * _x) + temp_f7;
    m->at.z = (_z * temp_f8) + temp_f28;
    m->flags = 0;
}

/* xMat3x3RotY (xMat3x3 *, float) */
void xMat3x3RotY(xMat3x3* m, F32 t) {
    F32 temp_f1;
    F32 temp_f31;

    temp_f31 = icos(t);
    temp_f1 = isin(t);
    xVec3Init((xVec3 *) m, temp_f31, 0.0f, -temp_f1);
    xVec3Copy(&m->right, &g_Y3);
    xVec3Init(&m->up, temp_f1, 0.0f, temp_f31);
    m->flags = 0;
}

void xMat3x3MulRotC(xMat3x3* o, xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t){

}

void xMat4x3Identity(xMat4x3* m){

}

/* xMat3x3Normalize (xMat3x3 *, xMat3x3 const *) */
void xMat3x3Normalize(xMat3x3* o, const xMat3x3* m) {
    xVec3Normalize((xVec3 *) o, (xVec3 *) m);
    xVec3Normalize(&o->right, &m->right);
    xVec3Normalize(&o->up, &m->up);
}

void xMat4x3Tolocal(xVec3* o, const xMat4x3* m, const xVec3* v){

}

/* xMat3x3Tolocal (xVec3 *, xMat3x3 const *, xVec3 const *) */
void xMat3x3Tolocal(xVec3* o, const xMat3x3* m, const xVec3* v) {
    F32 temp_f0;
    F32 temp_f0_2;
    F32 temp_f1;
    F32 temp_f1_2;
    F32 temp_f29;
    F32 temp_f2;
    F32 temp_f30;
    F32 temp_f31;
    F32 temp_f6;
    F32 temp_f7;
    F32 temp_f8;
    F32 temp_f8_2;

    temp_f1 = m->right.x;
    temp_f0 = m->right.y;
    temp_f2 = m->up.x;
    temp_f1_2 = m->up.y;
    temp_f8 = m->at.x;
    temp_f0_2 = m->at.y;
    temp_f6 = m->right.z;
    temp_f7 = m->up.z;
    temp_f8_2 = m->at.z;
    temp_f31 = (temp_f6 * temp_f6) + ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    temp_f30 = (temp_f7 * temp_f7) + ((temp_f2 * temp_f2) + (temp_f1_2 * temp_f1_2));
    temp_f29 = (temp_f8_2 * temp_f8_2) + ((temp_f8 * temp_f8) + (temp_f0_2 * temp_f0_2));
    xMat3x3LMulVec(o, m, v);
    o->x /= temp_f31;
    o->y /= temp_f30;
    o->z /= temp_f29;
}

/* xMat4x3MoveLocalRight (xMat4x3 *, float) */
void xMat4x3MoveLocalRight(xMat4x3* m, F32 mag) {
    m->pos.x += m->right.x * mag;
    m->pos.y += m->right.y * mag;
    m->pos.z += m->right.z * mag;
}

/* xMat4x3MoveLocalAt (xMat4x3 *, float) */
void xMat4x3MoveLocalAt(xMat4x3* m, F32 mag) {
    m->pos.x += m->at.x * mag;
    m->pos.y += m->at.y * mag;
    m->pos.z += m->at.z * mag;
}

/* xMat4x3MoveLocalUp (xMat4x3 *, float) */
void xMat4x3MoveLocalUp(xMat4x3* m, F32 mag) {
    m->pos.x += m->up.x * mag;
    m->pos.y += m->up.y * mag;
    m->pos.z += m->up.z * mag;
}

/* xMat3x3GetEuler (xMat3x3 const *, xVec3 *) */
void xMat3x3GetEuler(const xMat3x3* m, xVec3* a) {
    F32 temp_f31;
    F32 var_f1;
    F32 var_f30;

    temp_f31 = -xasin(m->at.y);
    if (temp_f31 < 1.5707964f) {
        if (temp_f31 > -1.5707964f) {
            var_f30 = xatan2(m->at.x, m->at.z);
            var_f1 = xatan2(m->right.y, m->up.y);
        } else {
            var_f30 = -xatan2(-m->up.x, m->up.x);
            var_f1 = 0.0f;
        }
    } else {
        var_f1 = 0.0f;
        var_f30 = xatan2(-m->up.x, m->right.x);
    }
    a->x = var_f30;
    a->y = temp_f31;
    a->z = var_f1;
}

/* xMat3x3Euler (xMat3x3 *, xVec3 const *) */
void xMat3x3Euler(xMat3x3* m, const xVec3* ypr) {
    xMat3x3Euler(m, ypr->x, ypr->y, ypr->z);
}

/* xQuatToMat (xQuat const *, xMat3x3 *) */
void xQuatToMat(const xQuat* q, xMat3x3* m) {
    F32 temp_f10;
    F32 temp_f11;
    F32 temp_f12;
    F32 temp_f13;
    F32 temp_f1;
    F32 temp_f2;
    F32 temp_f3;
    F32 temp_f3_2;
    F32 temp_f4;
    F32 temp_f4_2;
    F32 temp_f5;
    F32 temp_f5_2;
    F32 temp_f6;
    F32 temp_f7;
    F32 temp_f8;
    F32 temp_f9;

    temp_f5 = q->v.y;
    temp_f1 = q->v.z;
    temp_f2 = 2.0f * temp_f5;
    temp_f4 = q->v.x;
    temp_f7 = 2.0f * temp_f1;
    temp_f3 = q->s;
    temp_f6 = 2.0f * temp_f4;
    temp_f12 = temp_f2 * temp_f5;
    temp_f13 = temp_f7 * temp_f1;
    temp_f9 = temp_f7 * temp_f3;
    temp_f10 = temp_f2 * temp_f4;
    temp_f8 = temp_f2 * temp_f3;
    temp_f11 = temp_f7 * temp_f4;
    m->right.x = (1.0f - temp_f12) - temp_f13;
    temp_f4_2 = temp_f6 * temp_f4;
    m->right.y = temp_f10 - temp_f9;
    temp_f3_2 = temp_f6 * temp_f3;
    temp_f5_2 = temp_f7 * temp_f5;
    m->right.z = temp_f11 + temp_f8;
    m->up.x = temp_f10 + temp_f9;
    m->up.y = (1.0f - temp_f13) - temp_f4_2;
    m->up.z = temp_f5_2 - temp_f3_2;
    m->at.x = temp_f11 - temp_f8;
    m->at.y = temp_f5_2 + temp_f3_2;
    m->at.z = (1.0f - temp_f4_2) - temp_f12;
    m->flags = 0;
}

void xQuatDiff(xQuat* o, const xQuat* a, const xQuat* b){

}

F32 xQuatGetAngle(const xQuat* q){

}

void xQuatFromMat(xQuat* q, const xMat3x3* m){

}

void xQuatSlerp(xQuat* q, const xQuat* a, const xQuat* b, F32 t){

}

void xQuatConj(xQuat* o, const xQuat* q){

}

void xMat3x3LookAt(xMat3x3* m, const xVec3* pos, const xVec3* at){

}

F32 xMat3x3LookVec(xMat3x3* m, const xVec3* at){

}

void xBoxInitBoundOBB(xBox* o, const xBox* b, const xMat4x3* m){

}

void xMat3x3Scale(xMat3x3* m, const xVec3* s){

}

/* xMat3x3ScaleC (xMat3x3 *, float, float, float) */
void xMat3x3ScaleC(xMat3x3* m, F32 x, F32 y, F32 z) {
    xVec3Init((xVec3 *) m, x, 0.0f, 0.0f);
    xVec3Init(&m->up, 0.0f, y, 0.0f);
    xVec3Init(&m->at, 0.0f, 0.0f, z);
    m->flags = 0;
}

void xMat3x3RMulRotY(xMat3x3* o, const xMat3x3* m, F32 t){

}

/* xMat3x3Mul (xMat3x3 *, xMat3x3 const *, xMat3x3 const *) */
void xMat3x3Mul(xMat3x3* o, const xMat3x3* a, const xMat3x3* b) {
    xMat3x3 sp8;
    F32 temp_f0;
    F32 temp_f0_2;
    F32 temp_f10;
    F32 temp_f10_2;
    F32 temp_f12;
    F32 temp_f13;
    F32 temp_f1;
    F32 temp_f25;
    F32 temp_f26;
    F32 temp_f27;
    F32 temp_f29;
    F32 temp_f2;
    F32 temp_f30;
    F32 temp_f3;
    F32 temp_f4;
    F32 temp_f4_2;
    F32 temp_f5;
    F32 temp_f9;
    U8 var_r0;
    xMat3x3 *var_r6;

    var_r0 = 0;
    if ((o == a) || (o == b)) {
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        var_r6 = &sp8;
    } else {
        var_r6 = o;
    }
    temp_f4 = a->right.y;
    temp_f3 = b->up.x;
    temp_f2 = b->up.y;
    temp_f1 = a->up.y;
    temp_f10 = b->up.z;
    temp_f0 = a->at.y;
    temp_f26 = a->right.x;
    temp_f27 = b->right.x;
    temp_f30 = b->right.y;
    temp_f9 = a->up.x;
    temp_f12 = b->right.z;
    temp_f4_2 = a->at.x;
    temp_f25 = a->right.z;
    temp_f0_2 = b->at.x;
    temp_f29 = b->at.y;
    temp_f13 = b->at.z;
    temp_f10_2 = a->up.z;
    temp_f5 = a->at.z;
    var_r6->right.x = (temp_f25 * temp_f0_2) + ((temp_f26 * temp_f27) + (temp_f4 * temp_f3));
    var_r6->flags = 0;
    var_r6->right.y = (temp_f25 * temp_f29) + ((temp_f26 * temp_f30) + (temp_f4 * temp_f2));
    var_r6->right.z = (temp_f25 * temp_f13) + ((temp_f26 * temp_f12) + (temp_f4 * temp_f10));
    var_r6->up.x = (temp_f10_2 * temp_f0_2) + ((temp_f9 * temp_f27) + (temp_f1 * temp_f3));
    var_r6->up.y = (temp_f10_2 * temp_f29) + ((temp_f9 * temp_f30) + (temp_f1 * temp_f2));
    var_r6->up.z = (temp_f10_2 * temp_f13) + ((temp_f9 * temp_f12) + (temp_f1 * temp_f10));
    var_r6->at.x = (temp_f5 * temp_f0_2) + ((temp_f4_2 * temp_f27) + (temp_f0 * temp_f3));
    var_r6->at.y = (temp_f5 * temp_f29) + ((temp_f4_2 * temp_f30) + (temp_f0 * temp_f2));
    var_r6->at.z = (temp_f5 * temp_f13) + ((temp_f4_2 * temp_f12) + (temp_f0 * temp_f10));
    // if (var_r0 != 0) {
    //     xMat3x3Copy__FP7xMat3x3PC7xMat3x3(o, var_r6);
    // }
}

void xMat3x3SMul(xMat3x3*, const xMat3x3*, F32){

}

void xBoxFromLine(xBox& box, const xLine3& line){

}

void xBoxFromRay(xBox& box, const xRay3& ray){

}

void xMat3x3LMulVec(xVec3* o, const xMat3x3* m, const xVec3* v){

}
