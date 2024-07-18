#include <types.h>

#include "xMath3.h"
#include "xVec3.h"

#include "zNPCTypeBossPatrick.h"

#define f831 1.0f
#define f832 0.0f
#define f833 0.2f
#define f870 -1.0f
#define f891 2.0f
#define f892 -0.4f
#define f1045 0.125f
#define f1046 0.5f
#define f1047 0.7f
#define f1048 8.0f
#define f1049 5.0f
#define f1050 2.5f
#define f1051 3.0f
#define f1052 4.2f
#define f1053 12.0f
#define f1054 6.0f
#define f1055 10.0f
#define f1056 50.0f
#define f1137 5.5f
#define f1138 6.5f
#define f1139 0.365f
#define f1140 3.1415927f
#define f1141 20.0f
#define f1142 15.0f
#define f1143 -1000000000.0f
#define f1144 1000000000.0f
#define f1656 0.0001f
#define f1657 400.0f
#define f1658 0.5775f
#define f1659 40.0f
#define f1660 -2.01f
#define f1661 0.175f
#define f1662 0.025f
#define f1663 1.25f
#define f1664 0.25f
#define f1665 80.0f
#define f1666 6.2831855f
#define f1667 3.15f
#define f1668 0.00001f
#define f1669 0.1f
#define f1670 4.0f
#define f1671 0.77f
#define f1672 0.3f
#define f1673 1.5707964f
#define f1674 0.15f
#define f1675 0.65f
#define f1676 0.75f
#define f1677 0.01f
#define f1678 0.33f
#define f1679 18.5f
#define f1680 -18.5f
#define f1681 -20.0f
#define f1682 7.0f
#define f2006 100.0f
#define f2077 5.95f
#define f2078 0.539f
#define f2215 8.5f
#define f2256 0.50049996f
#define f2257 0.45f
#define f2280 1.7f
#define f2405 -3.1415927f
#define f2423 0.4f
#define f2424 0.8f
#define f2425 1.2f
#define f2426 1.5f
#define f2427 1.8f
#define f2428 2.1f
#define f2512 0.35f
#define f2596 -0.08f
#define f2597 25.0f
#define f2610 0.6545f
#define f2629 0.7853982f
#define f2630 1.75f
#define f2696 -4.0f
#define f2697 300.0f
#define f2885 12.5f
#define f2994 7.5f

void test(S32)
{
}

static void Pat_ResetGlobalStuff()
{
}

static void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

WEAK void xDebugAddTweak(const char*, U32*, U32, U32, const tweak_callback*, void*, U32)
{
}
