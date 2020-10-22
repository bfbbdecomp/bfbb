typedef struct xMat3x3;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct xCapsule;
typedef struct xQuat;
typedef struct xConic;
typedef struct xIsect;
typedef struct xSphere;
typedef struct xBox;


typedef int32 type_0[3];
typedef float32 type_1[5];

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;

	xVec3 __mi(xVec3& v);
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xCapsule
{
	xVec3 start;
	xVec3 end;
	float32 r;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xConic
{
	xMat4x3 basis;
	xMat4x3 invbasis;
	float32 coef[5];
	xVec3 coneBasisCenter;
};

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

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

xVec3 g_O3;
xVec3 g_X3;
xVec3 g_Y3;
xVec3 g_Z3;
xVec3 g_NX3;
xVec3 g_NY3;
xVec3 g_NZ3;
xVec3 g_Onez;
xMat4x3 g_I3;
xQuat g_IQ;
float32 gs_fTolerance;

void xQuatDiff(xQuat* o, xQuat* a, xQuat* b);
void xQuatMul(xQuat* o, xQuat* a, xQuat* b);
void xQuatSlerp(xQuat* o, xQuat* a, xQuat* b, float32 t);
float32 xQuatNormalize(xQuat* o, xQuat* q);
void xQuatToAxisAngle(xQuat* q, xVec3* a, float32* t);
void xQuatToMat(xQuat* q, xMat3x3* m);
void xQuatFromAxisAngle(xQuat* q, xVec3* a, float32 t);
void xQuatFromMat(xQuat* q, xMat3x3* m);
void xMat4x3Mul(xMat4x3* o, xMat4x3* a, xMat4x3* b);
void xMat4x3Rot(xMat4x3* m, xVec3* a, float32 t, xVec3* p);
void xMat3x3Tolocal(xVec3* o, xMat3x3* m, xVec3* v);
void xMat3x3LMulVec(xVec3* o, xMat3x3* m, xVec3* v);
void xMat3x3Mul(xMat3x3* o, xMat3x3* a, xMat3x3* b);
void xMat3x3Transpose(xMat3x3* o, xMat3x3* m);
void xMat3x3RMulRotY(xMat3x3* o, xMat3x3* m, float32 t);
void xMat3x3ScaleC(xMat3x3* m, float32 x, float32 y, float32 z);
void xMat3x3RotZ(xMat3x3* m, float32 t);
void xMat3x3RotY(xMat3x3* m, float32 t);
void xMat3x3RotX(xMat3x3* m, float32 t);
void xMat3x3RotC(xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t);
void xMat3x3Euler(xMat3x3* m, float32 yaw, float32 pitch, float32 roll);
void xMat3x3Euler(xMat3x3* m, xVec3* ypr);
float32 xMat3x3LookVec(xMat3x3* m, xVec3* at);
void xMat4x3MoveLocalAt(xMat4x3* m, float32 mag);
void xMat4x3MoveLocalUp(xMat4x3* m, float32 mag);
void xMat4x3MoveLocalRight(xMat4x3* m, float32 mag);
void xMat3x3GetEuler(xMat3x3* m, xVec3* a);
void xMat3x3Normalize(xMat3x3* o, xMat3x3* m);
void xBoxFromCone(xBox& box, xVec3& center, xVec3& dir, float32 dist, float32 r1, float32 r2);
void xBoxInitBoundCapsule(xBox* b, xCapsule* c);
void xBoxInitBoundOBB(xBox* o, xBox* b, xMat4x3* m);
int32 xPointInBox(xBox* b, xVec3* p);
void xLine3VecDist2(xVec3* p1, xVec3* p2, xVec3* v, xIsect* isx);
void xMath3Exit();
void xMath3Init();

// xQuatDiff__FP5xQuatPC5xQuatPC5xQuat
// Start address: 0x1ee070
void xQuatDiff(xQuat* o, xQuat* a, xQuat* b)
{
	// Line 3647, Address: 0x1ee070, Func Offset: 0
	// Line 3685, Address: 0x1ee07c, Func Offset: 0xc
	// Line 3686, Address: 0x1ee0a8, Func Offset: 0x38
	// Line 3689, Address: 0x1ee0b4, Func Offset: 0x44
	// Line 3690, Address: 0x1ee0cc, Func Offset: 0x5c
	// Line 3691, Address: 0x1ee0fc, Func Offset: 0x8c
	// Line 3755, Address: 0x1ee100, Func Offset: 0x90
	// Func End, Address: 0x1ee110, Func Offset: 0xa0
}

// xQuatMul__FP5xQuatPC5xQuatPC5xQuat
// Start address: 0x1ee110
void xQuatMul(xQuat* o, xQuat* a, xQuat* b)
{
	// Line 3605, Address: 0x1ee110, Func Offset: 0
	// Line 3629, Address: 0x1ee130, Func Offset: 0x20
	// Line 3633, Address: 0x1ee138, Func Offset: 0x28
	// Line 3629, Address: 0x1ee13c, Func Offset: 0x2c
	// Line 3631, Address: 0x1ee14c, Func Offset: 0x3c
	// Line 3632, Address: 0x1ee150, Func Offset: 0x40
	// Line 3630, Address: 0x1ee154, Func Offset: 0x44
	// Line 3631, Address: 0x1ee16c, Func Offset: 0x5c
	// Line 3632, Address: 0x1ee17c, Func Offset: 0x6c
	// Line 3631, Address: 0x1ee180, Func Offset: 0x70
	// Line 3632, Address: 0x1ee184, Func Offset: 0x74
	// Line 3633, Address: 0x1ee190, Func Offset: 0x80
	// Func End, Address: 0x1ee198, Func Offset: 0x88
}

// xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
// Start address: 0x1ee1a0
void xQuatSlerp(xQuat* o, xQuat* a, xQuat* b, float32 t)
{
	float32 asph;
	float32 bsph;
	float32 one_sintheta;
	float32 abdot;
	xQuat b2;
	// Line 3507, Address: 0x1ee1a0, Func Offset: 0
	// Line 3558, Address: 0x1ee1a8, Func Offset: 0x8
	// Line 3507, Address: 0x1ee1ac, Func Offset: 0xc
	// Line 3541, Address: 0x1ee1cc, Func Offset: 0x2c
	// Line 3507, Address: 0x1ee1dc, Func Offset: 0x3c
	// Line 3541, Address: 0x1ee1e0, Func Offset: 0x40
	// Line 3558, Address: 0x1ee204, Func Offset: 0x64
	// Line 3560, Address: 0x1ee210, Func Offset: 0x70
	// Line 3559, Address: 0x1ee21c, Func Offset: 0x7c
	// Line 3560, Address: 0x1ee220, Func Offset: 0x80
	// Line 3564, Address: 0x1ee23c, Func Offset: 0x9c
	// Line 3560, Address: 0x1ee240, Func Offset: 0xa0
	// Line 3565, Address: 0x1ee244, Func Offset: 0xa4
	// Line 3568, Address: 0x1ee248, Func Offset: 0xa8
	// Line 3569, Address: 0x1ee264, Func Offset: 0xc4
	// Line 3571, Address: 0x1ee268, Func Offset: 0xc8
	// Line 3572, Address: 0x1ee270, Func Offset: 0xd0
	// Line 3573, Address: 0x1ee27c, Func Offset: 0xdc
	// Line 3574, Address: 0x1ee298, Func Offset: 0xf8
	// Line 3575, Address: 0x1ee2a4, Func Offset: 0x104
	// Line 3576, Address: 0x1ee2b4, Func Offset: 0x114
	// Line 3590, Address: 0x1ee2b8, Func Offset: 0x118
	// Line 3585, Address: 0x1ee2bc, Func Offset: 0x11c
	// Line 3590, Address: 0x1ee2c0, Func Offset: 0x120
	// Line 3585, Address: 0x1ee2c4, Func Offset: 0x124
	// Line 3587, Address: 0x1ee2c8, Func Offset: 0x128
	// Line 3585, Address: 0x1ee2cc, Func Offset: 0x12c
	// Line 3586, Address: 0x1ee2d0, Func Offset: 0x130
	// Line 3585, Address: 0x1ee2d8, Func Offset: 0x138
	// Line 3587, Address: 0x1ee2e0, Func Offset: 0x140
	// Line 3586, Address: 0x1ee2e4, Func Offset: 0x144
	// Line 3587, Address: 0x1ee2e8, Func Offset: 0x148
	// Line 3585, Address: 0x1ee2f0, Func Offset: 0x150
	// Line 3587, Address: 0x1ee2f4, Func Offset: 0x154
	// Line 3586, Address: 0x1ee2f8, Func Offset: 0x158
	// Line 3587, Address: 0x1ee300, Func Offset: 0x160
	// Line 3590, Address: 0x1ee318, Func Offset: 0x178
	// Line 3602, Address: 0x1ee320, Func Offset: 0x180
	// Func End, Address: 0x1ee344, Func Offset: 0x1a4
}

// xQuatNormalize__FP5xQuatPC5xQuat
// Start address: 0x1ee350
float32 xQuatNormalize(xQuat* o, xQuat* q)
{
	float32 one_len;
	// Line 3472, Address: 0x1ee350, Func Offset: 0
	// Line 3474, Address: 0x1ee354, Func Offset: 0x4
	// Line 3472, Address: 0x1ee358, Func Offset: 0x8
	// Line 3474, Address: 0x1ee364, Func Offset: 0x14
	// Line 3473, Address: 0x1ee36c, Func Offset: 0x1c
	// Line 3474, Address: 0x1ee380, Func Offset: 0x30
	// Line 3475, Address: 0x1ee38c, Func Offset: 0x3c
	// Line 3476, Address: 0x1ee394, Func Offset: 0x44
	// Line 3478, Address: 0x1ee3b0, Func Offset: 0x60
	// Line 3480, Address: 0x1ee3c0, Func Offset: 0x70
	// Line 3481, Address: 0x1ee3d4, Func Offset: 0x84
	// Line 3482, Address: 0x1ee3dc, Func Offset: 0x8c
	// Line 3484, Address: 0x1ee408, Func Offset: 0xb8
	// Line 3485, Address: 0x1ee414, Func Offset: 0xc4
	// Line 3486, Address: 0x1ee418, Func Offset: 0xc8
	// Line 3487, Address: 0x1ee420, Func Offset: 0xd0
	// Line 3488, Address: 0x1ee424, Func Offset: 0xd4
	// Line 3490, Address: 0x1ee450, Func Offset: 0x100
	// Func End, Address: 0x1ee458, Func Offset: 0x108
}

// xQuatToAxisAngle__FPC5xQuatP5xVec3Pf
// Start address: 0x1ee460
void xQuatToAxisAngle(xQuat* q, xVec3* a, float32* t)
{
	// Line 3457, Address: 0x1ee460, Func Offset: 0
	// Line 3468, Address: 0x1ee47c, Func Offset: 0x1c
	// Line 3469, Address: 0x1ee48c, Func Offset: 0x2c
	// Line 3468, Address: 0x1ee490, Func Offset: 0x30
	// Line 3469, Address: 0x1ee494, Func Offset: 0x34
	// Line 3468, Address: 0x1ee498, Func Offset: 0x38
	// Line 3469, Address: 0x1ee49c, Func Offset: 0x3c
	// Line 3470, Address: 0x1ee4a4, Func Offset: 0x44
	// Func End, Address: 0x1ee4bc, Func Offset: 0x5c
}

// xQuatToMat__FPC5xQuatP7xMat3x3
// Start address: 0x1ee4c0
void xQuatToMat(xQuat* q, xMat3x3* m)
{
	float32 tx;
	float32 ty;
	float32 tz;
	float32 tsx;
	float32 tsy;
	float32 tsz;
	float32 txx;
	float32 txy;
	float32 txz;
	float32 tyy;
	float32 tyz;
	float32 tzz;
	// Line 3414, Address: 0x1ee4c0, Func Offset: 0
	// Line 3425, Address: 0x1ee4c4, Func Offset: 0x4
	// Line 3426, Address: 0x1ee4d0, Func Offset: 0x10
	// Line 3437, Address: 0x1ee4d4, Func Offset: 0x14
	// Line 3427, Address: 0x1ee4d8, Func Offset: 0x18
	// Line 3425, Address: 0x1ee4dc, Func Offset: 0x1c
	// Line 3426, Address: 0x1ee4e0, Func Offset: 0x20
	// Line 3427, Address: 0x1ee4e4, Func Offset: 0x24
	// Line 3428, Address: 0x1ee4e8, Func Offset: 0x28
	// Line 3431, Address: 0x1ee4ec, Func Offset: 0x2c
	// Line 3429, Address: 0x1ee4f0, Func Offset: 0x30
	// Line 3430, Address: 0x1ee4f4, Func Offset: 0x34
	// Line 3432, Address: 0x1ee4f8, Func Offset: 0x38
	// Line 3433, Address: 0x1ee4fc, Func Offset: 0x3c
	// Line 3436, Address: 0x1ee500, Func Offset: 0x40
	// Line 3434, Address: 0x1ee504, Func Offset: 0x44
	// Line 3435, Address: 0x1ee508, Func Offset: 0x48
	// Line 3437, Address: 0x1ee50c, Func Offset: 0x4c
	// Line 3440, Address: 0x1ee510, Func Offset: 0x50
	// Line 3437, Address: 0x1ee514, Func Offset: 0x54
	// Line 3441, Address: 0x1ee520, Func Offset: 0x60
	// Line 3445, Address: 0x1ee528, Func Offset: 0x68
	// Line 3438, Address: 0x1ee530, Func Offset: 0x70
	// Line 3439, Address: 0x1ee538, Func Offset: 0x78
	// Line 3440, Address: 0x1ee540, Func Offset: 0x80
	// Line 3441, Address: 0x1ee544, Func Offset: 0x84
	// Line 3442, Address: 0x1ee548, Func Offset: 0x88
	// Line 3443, Address: 0x1ee54c, Func Offset: 0x8c
	// Line 3442, Address: 0x1ee550, Func Offset: 0x90
	// Line 3444, Address: 0x1ee554, Func Offset: 0x94
	// Line 3443, Address: 0x1ee558, Func Offset: 0x98
	// Line 3444, Address: 0x1ee55c, Func Offset: 0x9c
	// Line 3445, Address: 0x1ee560, Func Offset: 0xa0
	// Line 3455, Address: 0x1ee564, Func Offset: 0xa4
	// Func End, Address: 0x1ee56c, Func Offset: 0xac
}

// xQuatFromAxisAngle__FP5xQuatPC5xVec3f
// Start address: 0x1ee570
void xQuatFromAxisAngle(xQuat* q, xVec3* a, float32 t)
{
	float32 t_2;
	// Line 3392, Address: 0x1ee570, Func Offset: 0
	// Line 3394, Address: 0x1ee574, Func Offset: 0x4
	// Line 3392, Address: 0x1ee578, Func Offset: 0x8
	// Line 3394, Address: 0x1ee584, Func Offset: 0x14
	// Line 3395, Address: 0x1ee598, Func Offset: 0x28
	// Line 3396, Address: 0x1ee5c4, Func Offset: 0x54
	// Line 3397, Address: 0x1ee5cc, Func Offset: 0x5c
	// Line 3398, Address: 0x1ee5d0, Func Offset: 0x60
	// Line 3399, Address: 0x1ee5e0, Func Offset: 0x70
	// Line 3400, Address: 0x1ee5e8, Func Offset: 0x78
	// Line 3401, Address: 0x1ee5f8, Func Offset: 0x88
	// Line 3412, Address: 0x1ee61c, Func Offset: 0xac
	// Func End, Address: 0x1ee638, Func Offset: 0xc8
}

// xQuatFromMat__FP5xQuatPC7xMat3x3
// Start address: 0x1ee640
void xQuatFromMat(xQuat* q, xMat3x3* m)
{
	float32* mp;
	float32* qvp;
	float32 tr;
	float32 root;
	int32 i;
	int32 j;
	int32 k;
	int32 nxt[3];
	// Line 3307, Address: 0x1ee640, Func Offset: 0
	// Line 3317, Address: 0x1ee64c, Func Offset: 0xc
	// Line 3307, Address: 0x1ee650, Func Offset: 0x10
	// Line 3317, Address: 0x1ee658, Func Offset: 0x18
	// Line 3319, Address: 0x1ee664, Func Offset: 0x24
	// Line 3318, Address: 0x1ee668, Func Offset: 0x28
	// Line 3319, Address: 0x1ee66c, Func Offset: 0x2c
	// Line 3318, Address: 0x1ee674, Func Offset: 0x34
	// Line 3319, Address: 0x1ee67c, Func Offset: 0x3c
	// Line 3320, Address: 0x1ee680, Func Offset: 0x40
	// Line 3319, Address: 0x1ee684, Func Offset: 0x44
	// Line 3321, Address: 0x1ee688, Func Offset: 0x48
	// Line 3322, Address: 0x1ee69c, Func Offset: 0x5c
	// Line 3323, Address: 0x1ee6b0, Func Offset: 0x70
	// Line 3327, Address: 0x1ee6c0, Func Offset: 0x80
	// Line 3331, Address: 0x1ee6c8, Func Offset: 0x88
	// Line 3332, Address: 0x1ee6dc, Func Offset: 0x9c
	// Line 3334, Address: 0x1ee6e0, Func Offset: 0xa0
	// Line 3335, Address: 0x1ee704, Func Offset: 0xc4
	// Line 3337, Address: 0x1ee708, Func Offset: 0xc8
	// Line 3339, Address: 0x1ee70c, Func Offset: 0xcc
	// Line 3337, Address: 0x1ee710, Func Offset: 0xd0
	// Line 3339, Address: 0x1ee714, Func Offset: 0xd4
	// Line 3337, Address: 0x1ee718, Func Offset: 0xd8
	// Line 3339, Address: 0x1ee71c, Func Offset: 0xdc
	// Line 3337, Address: 0x1ee720, Func Offset: 0xe0
	// Line 3339, Address: 0x1ee724, Func Offset: 0xe4
	// Line 3337, Address: 0x1ee728, Func Offset: 0xe8
	// Line 3339, Address: 0x1ee72c, Func Offset: 0xec
	// Line 3338, Address: 0x1ee730, Func Offset: 0xf0
	// Line 3339, Address: 0x1ee734, Func Offset: 0xf4
	// Line 3338, Address: 0x1ee738, Func Offset: 0xf8
	// Line 3339, Address: 0x1ee740, Func Offset: 0x100
	// Line 3340, Address: 0x1ee774, Func Offset: 0x134
	// Line 3341, Address: 0x1ee798, Func Offset: 0x158
	// Line 3343, Address: 0x1ee7c0, Func Offset: 0x180
	// Line 3345, Address: 0x1ee7c8, Func Offset: 0x188
	// Line 3347, Address: 0x1ee7d0, Func Offset: 0x190
	// Line 3348, Address: 0x1ee7d4, Func Offset: 0x194
	// Line 3347, Address: 0x1ee7d8, Func Offset: 0x198
	// Line 3345, Address: 0x1ee7dc, Func Offset: 0x19c
	// Line 3349, Address: 0x1ee7e4, Func Offset: 0x1a4
	// Line 3348, Address: 0x1ee7e8, Func Offset: 0x1a8
	// Line 3347, Address: 0x1ee7ec, Func Offset: 0x1ac
	// Line 3349, Address: 0x1ee7f0, Func Offset: 0x1b0
	// Line 3347, Address: 0x1ee7f4, Func Offset: 0x1b4
	// Line 3348, Address: 0x1ee800, Func Offset: 0x1c0
	// Line 3346, Address: 0x1ee804, Func Offset: 0x1c4
	// Line 3348, Address: 0x1ee808, Func Offset: 0x1c8
	// Line 3349, Address: 0x1ee810, Func Offset: 0x1d0
	// Line 3348, Address: 0x1ee814, Func Offset: 0x1d4
	// Line 3349, Address: 0x1ee81c, Func Offset: 0x1dc
	// Line 3345, Address: 0x1ee82c, Func Offset: 0x1ec
	// Line 3347, Address: 0x1ee830, Func Offset: 0x1f0
	// Line 3348, Address: 0x1ee844, Func Offset: 0x204
	// Line 3353, Address: 0x1ee84c, Func Offset: 0x20c
	// Line 3348, Address: 0x1ee854, Func Offset: 0x214
	// Line 3349, Address: 0x1ee860, Func Offset: 0x220
	// Line 3353, Address: 0x1ee874, Func Offset: 0x234
	// Line 3354, Address: 0x1ee884, Func Offset: 0x244
	// Line 3356, Address: 0x1ee8b4, Func Offset: 0x274
	// Line 3367, Address: 0x1ee8b8, Func Offset: 0x278
	// Func End, Address: 0x1ee8c0, Func Offset: 0x280
}

// xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
// Start address: 0x1ee8c0
void xMat4x3Mul(xMat4x3* o, xMat4x3* a, xMat4x3* b)
{
	// Line 3265, Address: 0x1ee8c0, Func Offset: 0
	// Line 3267, Address: 0x1ee8e0, Func Offset: 0x20
	// Line 3265, Address: 0x1ee8e8, Func Offset: 0x28
	// Line 3267, Address: 0x1ee8ec, Func Offset: 0x2c
	// Line 3265, Address: 0x1ee904, Func Offset: 0x44
	// Line 3267, Address: 0x1ee908, Func Offset: 0x48
	// Line 3268, Address: 0x1ee950, Func Offset: 0x90
	// Line 3269, Address: 0x1ee958, Func Offset: 0x98
	// Line 3270, Address: 0x1ee964, Func Offset: 0xa4
	// Func End, Address: 0x1ee980, Func Offset: 0xc0
}

// xMat4x3Rot__FP7xMat4x3PC5xVec3fPC5xVec3
// Start address: 0x1ee980
void xMat4x3Rot(xMat4x3* m, xVec3* a, float32 t, xVec3* p)
{
	xMat4x3 temp;
	// Line 3229, Address: 0x1ee980, Func Offset: 0
	// Line 3231, Address: 0x1ee9a4, Func Offset: 0x24
	// Line 3232, Address: 0x1ee9b8, Func Offset: 0x38
	// Line 3233, Address: 0x1ee9bc, Func Offset: 0x3c
	// Line 3232, Address: 0x1ee9cc, Func Offset: 0x4c
	// Line 3233, Address: 0x1ee9dc, Func Offset: 0x5c
	// Line 3234, Address: 0x1ee9e4, Func Offset: 0x64
	// Line 3235, Address: 0x1ee9e8, Func Offset: 0x68
	// Line 3234, Address: 0x1ee9f4, Func Offset: 0x74
	// Line 3235, Address: 0x1eea20, Func Offset: 0xa0
	// Line 3236, Address: 0x1eea9c, Func Offset: 0x11c
	// Func End, Address: 0x1eeabc, Func Offset: 0x13c
}

// xMat3x3Tolocal__FP5xVec3PC7xMat3x3PC5xVec3
// Start address: 0x1eeac0
void xMat3x3Tolocal(xVec3* o, xMat3x3* m, xVec3* v)
{
	// Line 3191, Address: 0x1eeac0, Func Offset: 0
	// Line 3203, Address: 0x1eead8, Func Offset: 0x18
	// Line 3200, Address: 0x1eeadc, Func Offset: 0x1c
	// Line 3203, Address: 0x1eeae4, Func Offset: 0x24
	// Line 3200, Address: 0x1eeae8, Func Offset: 0x28
	// Line 3191, Address: 0x1eeaf0, Func Offset: 0x30
	// Line 3200, Address: 0x1eeb04, Func Offset: 0x44
	// Line 3191, Address: 0x1eeb08, Func Offset: 0x48
	// Line 3200, Address: 0x1eeb0c, Func Offset: 0x4c
	// Line 3203, Address: 0x1eeb30, Func Offset: 0x70
	// Line 3200, Address: 0x1eeb34, Func Offset: 0x74
	// Line 3204, Address: 0x1eeb38, Func Offset: 0x78
	// Line 3203, Address: 0x1eeb40, Func Offset: 0x80
	// Line 3204, Address: 0x1eeb44, Func Offset: 0x84
	// Line 3205, Address: 0x1eeb48, Func Offset: 0x88
	// Line 3204, Address: 0x1eeb50, Func Offset: 0x90
	// Line 3205, Address: 0x1eeb54, Func Offset: 0x94
	// Line 3203, Address: 0x1eeb58, Func Offset: 0x98
	// Line 3205, Address: 0x1eeb5c, Func Offset: 0x9c
	// Line 3203, Address: 0x1eeb60, Func Offset: 0xa0
	// Line 3204, Address: 0x1eeb68, Func Offset: 0xa8
	// Line 3205, Address: 0x1eeb74, Func Offset: 0xb4
	// Line 3206, Address: 0x1eeb84, Func Offset: 0xc4
	// Func End, Address: 0x1eeb8c, Func Offset: 0xcc
}

// xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
// Start address: 0x1eeb90
void xMat3x3LMulVec(xVec3* o, xMat3x3* m, xVec3* v)
{
	float32 y;
	float32 z;
	// Line 3180, Address: 0x1eeb90, Func Offset: 0
	// Line 3186, Address: 0x1eeb94, Func Offset: 0x4
	// Line 3180, Address: 0x1eeb98, Func Offset: 0x8
	// Line 3186, Address: 0x1eeb9c, Func Offset: 0xc
	// Line 3187, Address: 0x1eeba0, Func Offset: 0x10
	// Line 3188, Address: 0x1eeba8, Func Offset: 0x18
	// Line 3186, Address: 0x1eebb0, Func Offset: 0x20
	// Line 3180, Address: 0x1eebb8, Func Offset: 0x28
	// Line 3186, Address: 0x1eebbc, Func Offset: 0x2c
	// Line 3187, Address: 0x1eebc4, Func Offset: 0x34
	// Line 3186, Address: 0x1eebd0, Func Offset: 0x40
	// Line 3187, Address: 0x1eebd4, Func Offset: 0x44
	// Line 3188, Address: 0x1eebd8, Func Offset: 0x48
	// Line 3187, Address: 0x1eebe4, Func Offset: 0x54
	// Line 3188, Address: 0x1eebe8, Func Offset: 0x58
	// Line 3189, Address: 0x1eebf8, Func Offset: 0x68
	// Func End, Address: 0x1eec00, Func Offset: 0x70
}

// xMat3x3Mul__FP7xMat3x3PC7xMat3x3PC7xMat3x3
// Start address: 0x1eec00
void xMat3x3Mul(xMat3x3* o, xMat3x3* a, xMat3x3* b)
{
	xMat3x3 temp;
	xMat3x3* tp;
	uint32 usetemp;
	// Line 3141, Address: 0x1eec00, Func Offset: 0
	// Line 3138, Address: 0x1eec04, Func Offset: 0x4
	// Line 3141, Address: 0x1eec08, Func Offset: 0x8
	// Line 3145, Address: 0x1eec20, Func Offset: 0x20
	// Line 3147, Address: 0x1eec2c, Func Offset: 0x2c
	// Line 3150, Address: 0x1eec58, Func Offset: 0x58
	// Line 3153, Address: 0x1eec84, Func Offset: 0x84
	// Line 3156, Address: 0x1eecb0, Func Offset: 0xb0
	// Line 3159, Address: 0x1eecdc, Func Offset: 0xdc
	// Line 3162, Address: 0x1eed08, Func Offset: 0x108
	// Line 3165, Address: 0x1eed34, Func Offset: 0x134
	// Line 3168, Address: 0x1eed60, Func Offset: 0x160
	// Line 3171, Address: 0x1eed8c, Func Offset: 0x18c
	// Line 3175, Address: 0x1eedb8, Func Offset: 0x1b8
	// Line 3176, Address: 0x1eedc0, Func Offset: 0x1c0
	// Line 3177, Address: 0x1eedcc, Func Offset: 0x1cc
	// Line 3178, Address: 0x1eedd0, Func Offset: 0x1d0
	// Func End, Address: 0x1eeddc, Func Offset: 0x1dc
}

// xMat3x3Transpose__FP7xMat3x3PC7xMat3x3
// Start address: 0x1eede0
void xMat3x3Transpose(xMat3x3* o, xMat3x3* m)
{
	float32 temp;
	float32 temp;
	float32 temp;
	// Line 3120, Address: 0x1eede0, Func Offset: 0
	// Line 3121, Address: 0x1eede8, Func Offset: 0x8
	// Line 3122, Address: 0x1eedf8, Func Offset: 0x18
	// Line 3123, Address: 0x1eee08, Func Offset: 0x28
	// Line 3124, Address: 0x1eee14, Func Offset: 0x34
	// Line 3125, Address: 0x1eee20, Func Offset: 0x40
	// Line 3126, Address: 0x1eee28, Func Offset: 0x48
	// Line 3127, Address: 0x1eee30, Func Offset: 0x50
	// Line 3128, Address: 0x1eee38, Func Offset: 0x58
	// Line 3129, Address: 0x1eee40, Func Offset: 0x60
	// Line 3130, Address: 0x1eee48, Func Offset: 0x68
	// Line 3131, Address: 0x1eee50, Func Offset: 0x70
	// Line 3132, Address: 0x1eee58, Func Offset: 0x78
	// Line 3133, Address: 0x1eee60, Func Offset: 0x80
	// Line 3134, Address: 0x1eee68, Func Offset: 0x88
	// Line 3135, Address: 0x1eee6c, Func Offset: 0x8c
	// Line 3136, Address: 0x1eee70, Func Offset: 0x90
	// Func End, Address: 0x1eee78, Func Offset: 0x98
}

// xMat3x3RMulRotY__FP7xMat3x3PC7xMat3x3f
// Start address: 0x1eee80
void xMat3x3RMulRotY(xMat3x3* o, xMat3x3* m, float32 t)
{
	float32 temp;
	// Line 3037, Address: 0x1eee80, Func Offset: 0
	// Line 3038, Address: 0x1eee9c, Func Offset: 0x1c
	// Line 3039, Address: 0x1eeea4, Func Offset: 0x24
	// Line 3040, Address: 0x1eeeb0, Func Offset: 0x30
	// Line 3042, Address: 0x1eeec0, Func Offset: 0x40
	// Line 3043, Address: 0x1eeec8, Func Offset: 0x48
	// Line 3044, Address: 0x1eeed4, Func Offset: 0x54
	// Line 3045, Address: 0x1eeee0, Func Offset: 0x60
	// Line 3046, Address: 0x1eeee8, Func Offset: 0x68
	// Line 3047, Address: 0x1eeef4, Func Offset: 0x74
	// Line 3049, Address: 0x1eef00, Func Offset: 0x80
	// Line 3050, Address: 0x1eef08, Func Offset: 0x88
	// Line 3049, Address: 0x1eef0c, Func Offset: 0x8c
	// Line 3050, Address: 0x1eef10, Func Offset: 0x90
	// Line 3051, Address: 0x1eef14, Func Offset: 0x94
	// Line 3052, Address: 0x1eef20, Func Offset: 0xa0
	// Line 3053, Address: 0x1eef34, Func Offset: 0xb4
	// Line 3054, Address: 0x1eef3c, Func Offset: 0xbc
	// Line 3055, Address: 0x1eef50, Func Offset: 0xd0
	// Line 3056, Address: 0x1eef64, Func Offset: 0xe4
	// Line 3057, Address: 0x1eef6c, Func Offset: 0xec
	// Line 3058, Address: 0x1eef80, Func Offset: 0x100
	// Line 3059, Address: 0x1eef94, Func Offset: 0x114
	// Line 3060, Address: 0x1eef9c, Func Offset: 0x11c
	// Line 3061, Address: 0x1eefb0, Func Offset: 0x130
	// Line 3062, Address: 0x1eefb4, Func Offset: 0x134
	// Line 3063, Address: 0x1eefb8, Func Offset: 0x138
	// Func End, Address: 0x1eefd0, Func Offset: 0x150
}

// xMat3x3ScaleC__FP7xMat3x3fff
// Start address: 0x1eefd0
void xMat3x3ScaleC(xMat3x3* m, float32 x, float32 y, float32 z)
{
	// Line 2951, Address: 0x1eefd0, Func Offset: 0
	// Line 2952, Address: 0x1eefdc, Func Offset: 0xc
	// Line 2953, Address: 0x1eefe8, Func Offset: 0x18
	// Line 2955, Address: 0x1eeff4, Func Offset: 0x24
	// Func End, Address: 0x1eeffc, Func Offset: 0x2c
}

// xMat3x3RotZ__FP7xMat3x3f
// Start address: 0x1ef000
void xMat3x3RotZ(xMat3x3* m, float32 t)
{
	// Line 2941, Address: 0x1ef000, Func Offset: 0
	// Line 2942, Address: 0x1ef014, Func Offset: 0x14
	// Line 2943, Address: 0x1ef01c, Func Offset: 0x1c
	// Line 2944, Address: 0x1ef028, Func Offset: 0x28
	// Line 2946, Address: 0x1ef02c, Func Offset: 0x2c
	// Line 2944, Address: 0x1ef030, Func Offset: 0x30
	// Line 2945, Address: 0x1ef034, Func Offset: 0x34
	// Line 2944, Address: 0x1ef038, Func Offset: 0x38
	// Line 2945, Address: 0x1ef03c, Func Offset: 0x3c
	// Line 2946, Address: 0x1ef048, Func Offset: 0x48
	// Line 2947, Address: 0x1ef068, Func Offset: 0x68
	// Line 2948, Address: 0x1ef06c, Func Offset: 0x6c
	// Func End, Address: 0x1ef080, Func Offset: 0x80
}

// xMat3x3RotY__FP7xMat3x3f
// Start address: 0x1ef080
void xMat3x3RotY(xMat3x3* m, float32 t)
{
	// Line 2932, Address: 0x1ef080, Func Offset: 0
	// Line 2933, Address: 0x1ef094, Func Offset: 0x14
	// Line 2934, Address: 0x1ef09c, Func Offset: 0x1c
	// Line 2935, Address: 0x1ef0a8, Func Offset: 0x28
	// Line 2936, Address: 0x1ef0ac, Func Offset: 0x2c
	// Line 2935, Address: 0x1ef0b0, Func Offset: 0x30
	// Line 2936, Address: 0x1ef0bc, Func Offset: 0x3c
	// Line 2937, Address: 0x1ef0dc, Func Offset: 0x5c
	// Line 2938, Address: 0x1ef0e8, Func Offset: 0x68
	// Line 2939, Address: 0x1ef0ec, Func Offset: 0x6c
	// Func End, Address: 0x1ef100, Func Offset: 0x80
}

// xMat3x3RotX__FP7xMat3x3f
// Start address: 0x1ef100
void xMat3x3RotX(xMat3x3* m, float32 t)
{
	// Line 2923, Address: 0x1ef100, Func Offset: 0
	// Line 2924, Address: 0x1ef114, Func Offset: 0x14
	// Line 2925, Address: 0x1ef11c, Func Offset: 0x1c
	// Line 2926, Address: 0x1ef128, Func Offset: 0x28
	// Line 2928, Address: 0x1ef130, Func Offset: 0x30
	// Line 2926, Address: 0x1ef134, Func Offset: 0x34
	// Line 2927, Address: 0x1ef150, Func Offset: 0x50
	// Line 2928, Address: 0x1ef15c, Func Offset: 0x5c
	// Line 2929, Address: 0x1ef168, Func Offset: 0x68
	// Line 2930, Address: 0x1ef16c, Func Offset: 0x6c
	// Func End, Address: 0x1ef180, Func Offset: 0x80
}

// xMat3x3RotC__FP7xMat3x3ffff
// Start address: 0x1ef180
void xMat3x3RotC(xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t)
{
	float32 c;
	// Line 2902, Address: 0x1ef180, Func Offset: 0
	// Line 2904, Address: 0x1ef188, Func Offset: 0x8
	// Line 2902, Address: 0x1ef18c, Func Offset: 0xc
	// Line 2904, Address: 0x1ef1a8, Func Offset: 0x28
	// Line 2905, Address: 0x1ef1bc, Func Offset: 0x3c
	// Line 2906, Address: 0x1ef1cc, Func Offset: 0x4c
	// Line 2907, Address: 0x1ef1d4, Func Offset: 0x54
	// Line 2908, Address: 0x1ef1d8, Func Offset: 0x58
	// Line 2909, Address: 0x1ef1e0, Func Offset: 0x60
	// Line 2910, Address: 0x1ef1ec, Func Offset: 0x6c
	// Line 2912, Address: 0x1ef1f4, Func Offset: 0x74
	// Line 2910, Address: 0x1ef1f8, Func Offset: 0x78
	// Line 2911, Address: 0x1ef200, Func Offset: 0x80
	// Line 2912, Address: 0x1ef20c, Func Offset: 0x8c
	// Line 2911, Address: 0x1ef210, Func Offset: 0x90
	// Line 2912, Address: 0x1ef214, Func Offset: 0x94
	// Line 2913, Address: 0x1ef224, Func Offset: 0xa4
	// Line 2914, Address: 0x1ef230, Func Offset: 0xb0
	// Line 2915, Address: 0x1ef240, Func Offset: 0xc0
	// Line 2917, Address: 0x1ef24c, Func Offset: 0xcc
	// Line 2916, Address: 0x1ef254, Func Offset: 0xd4
	// Line 2918, Address: 0x1ef25c, Func Offset: 0xdc
	// Line 2919, Address: 0x1ef260, Func Offset: 0xe0
	// Line 2916, Address: 0x1ef264, Func Offset: 0xe4
	// Line 2918, Address: 0x1ef26c, Func Offset: 0xec
	// Line 2917, Address: 0x1ef270, Func Offset: 0xf0
	// Line 2919, Address: 0x1ef274, Func Offset: 0xf4
	// Line 2918, Address: 0x1ef278, Func Offset: 0xf8
	// Line 2919, Address: 0x1ef27c, Func Offset: 0xfc
	// Line 2920, Address: 0x1ef280, Func Offset: 0x100
	// Line 2921, Address: 0x1ef284, Func Offset: 0x104
	// Func End, Address: 0x1ef2a8, Func Offset: 0x128
}

// xMat3x3Euler__FP7xMat3x3fff
// Start address: 0x1ef2b0
void xMat3x3Euler(xMat3x3* m, float32 yaw, float32 pitch, float32 roll)
{
	// Line 2883, Address: 0x1ef2b0, Func Offset: 0
	// Line 2884, Address: 0x1ef2dc, Func Offset: 0x2c
	// Line 2885, Address: 0x1ef2e4, Func Offset: 0x34
	// Line 2886, Address: 0x1ef2f4, Func Offset: 0x44
	// Line 2887, Address: 0x1ef2fc, Func Offset: 0x4c
	// Line 2888, Address: 0x1ef30c, Func Offset: 0x5c
	// Line 2889, Address: 0x1ef314, Func Offset: 0x64
	// Line 2890, Address: 0x1ef324, Func Offset: 0x74
	// Line 2891, Address: 0x1ef330, Func Offset: 0x80
	// Line 2892, Address: 0x1ef334, Func Offset: 0x84
	// Line 2891, Address: 0x1ef338, Func Offset: 0x88
	// Line 2892, Address: 0x1ef340, Func Offset: 0x90
	// Line 2893, Address: 0x1ef34c, Func Offset: 0x9c
	// Line 2895, Address: 0x1ef358, Func Offset: 0xa8
	// Line 2893, Address: 0x1ef360, Func Offset: 0xb0
	// Line 2894, Address: 0x1ef364, Func Offset: 0xb4
	// Line 2896, Address: 0x1ef36c, Func Offset: 0xbc
	// Line 2895, Address: 0x1ef370, Func Offset: 0xc0
	// Line 2898, Address: 0x1ef374, Func Offset: 0xc4
	// Line 2897, Address: 0x1ef378, Func Offset: 0xc8
	// Line 2896, Address: 0x1ef37c, Func Offset: 0xcc
	// Line 2897, Address: 0x1ef380, Func Offset: 0xd0
	// Line 2898, Address: 0x1ef384, Func Offset: 0xd4
	// Line 2899, Address: 0x1ef388, Func Offset: 0xd8
	// Line 2900, Address: 0x1ef38c, Func Offset: 0xdc
	// Func End, Address: 0x1ef3b0, Func Offset: 0x100
}

// xMat3x3Euler__FP7xMat3x3PC5xVec3
// Start address: 0x1ef3b0
void xMat3x3Euler(xMat3x3* m, xVec3* ypr)
{
	// Line 2880, Address: 0x1ef3b0, Func Offset: 0
	// Func End, Address: 0x1ef3c0, Func Offset: 0x10
}

// xMat3x3LookVec__FP7xMat3x3PC5xVec3
// Start address: 0x1ef3c0
float32 xMat3x3LookVec(xMat3x3* m, xVec3* at)
{
	float32 vec_len;
	// Line 2755, Address: 0x1ef3c0, Func Offset: 0
	// Line 2760, Address: 0x1ef3d8, Func Offset: 0x18
	// Line 2764, Address: 0x1ef3e4, Func Offset: 0x24
	// Line 2768, Address: 0x1ef3e8, Func Offset: 0x28
	// Line 2760, Address: 0x1ef3f0, Func Offset: 0x30
	// Line 2764, Address: 0x1ef3f4, Func Offset: 0x34
	// Line 2768, Address: 0x1ef414, Func Offset: 0x54
	// Line 2769, Address: 0x1ef438, Func Offset: 0x78
	// Line 2776, Address: 0x1ef43c, Func Offset: 0x7c
	// Line 2770, Address: 0x1ef440, Func Offset: 0x80
	// Line 2771, Address: 0x1ef444, Func Offset: 0x84
	// Line 2772, Address: 0x1ef448, Func Offset: 0x88
	// Line 2773, Address: 0x1ef44c, Func Offset: 0x8c
	// Line 2774, Address: 0x1ef450, Func Offset: 0x90
	// Line 2775, Address: 0x1ef454, Func Offset: 0x94
	// Line 2776, Address: 0x1ef458, Func Offset: 0x98
	// Line 2778, Address: 0x1ef45c, Func Offset: 0x9c
	// Line 2780, Address: 0x1ef464, Func Offset: 0xa4
	// Line 2781, Address: 0x1ef494, Func Offset: 0xd4
	// Line 2782, Address: 0x1ef498, Func Offset: 0xd8
	// Line 2783, Address: 0x1ef49c, Func Offset: 0xdc
	// Line 2784, Address: 0x1ef4a0, Func Offset: 0xe0
	// Line 2785, Address: 0x1ef4a4, Func Offset: 0xe4
	// Line 2786, Address: 0x1ef4a8, Func Offset: 0xe8
	// Line 2787, Address: 0x1ef4ac, Func Offset: 0xec
	// Line 2788, Address: 0x1ef4b0, Func Offset: 0xf0
	// Line 2790, Address: 0x1ef4b4, Func Offset: 0xf4
	// Line 2791, Address: 0x1ef4bc, Func Offset: 0xfc
	// Line 2793, Address: 0x1ef4c0, Func Offset: 0x100
	// Line 2794, Address: 0x1ef508, Func Offset: 0x148
	// Line 2795, Address: 0x1ef50c, Func Offset: 0x14c
	// Line 2796, Address: 0x1ef514, Func Offset: 0x154
	// Line 2797, Address: 0x1ef518, Func Offset: 0x158
	// Line 2798, Address: 0x1ef51c, Func Offset: 0x15c
	// Line 2799, Address: 0x1ef520, Func Offset: 0x160
	// Line 2800, Address: 0x1ef524, Func Offset: 0x164
	// Line 2801, Address: 0x1ef528, Func Offset: 0x168
	// Line 2803, Address: 0x1ef52c, Func Offset: 0x16c
	// Line 2804, Address: 0x1ef534, Func Offset: 0x174
	// Line 2812, Address: 0x1ef538, Func Offset: 0x178
	// Line 2808, Address: 0x1ef53c, Func Offset: 0x17c
	// Line 2812, Address: 0x1ef540, Func Offset: 0x180
	// Line 2808, Address: 0x1ef544, Func Offset: 0x184
	// Line 2809, Address: 0x1ef548, Func Offset: 0x188
	// Line 2810, Address: 0x1ef54c, Func Offset: 0x18c
	// Line 2812, Address: 0x1ef554, Func Offset: 0x194
	// Line 2815, Address: 0x1ef55c, Func Offset: 0x19c
	// Line 2823, Address: 0x1ef56c, Func Offset: 0x1ac
	// Line 2815, Address: 0x1ef570, Func Offset: 0x1b0
	// Line 2818, Address: 0x1ef5b4, Func Offset: 0x1f4
	// Line 2820, Address: 0x1ef608, Func Offset: 0x248
	// Line 2823, Address: 0x1ef60c, Func Offset: 0x24c
	// Line 2824, Address: 0x1ef610, Func Offset: 0x250
	// Func End, Address: 0x1ef628, Func Offset: 0x268
}

// xMat4x3MoveLocalAt__FP7xMat4x3f
// Start address: 0x1ef630
void xMat4x3MoveLocalAt(xMat4x3* m, float32 mag)
{
	// Line 2735, Address: 0x1ef630, Func Offset: 0
	// Line 2736, Address: 0x1ef644, Func Offset: 0x14
	// Line 2737, Address: 0x1ef658, Func Offset: 0x28
	// Line 2738, Address: 0x1ef668, Func Offset: 0x38
	// Func End, Address: 0x1ef670, Func Offset: 0x40
}

// xMat4x3MoveLocalUp__FP7xMat4x3f
// Start address: 0x1ef670
void xMat4x3MoveLocalUp(xMat4x3* m, float32 mag)
{
	// Line 2728, Address: 0x1ef670, Func Offset: 0
	// Line 2729, Address: 0x1ef684, Func Offset: 0x14
	// Line 2730, Address: 0x1ef698, Func Offset: 0x28
	// Line 2731, Address: 0x1ef6a8, Func Offset: 0x38
	// Func End, Address: 0x1ef6b0, Func Offset: 0x40
}

// xMat4x3MoveLocalRight__FP7xMat4x3f
// Start address: 0x1ef6b0
void xMat4x3MoveLocalRight(xMat4x3* m, float32 mag)
{
	// Line 2721, Address: 0x1ef6b0, Func Offset: 0
	// Line 2722, Address: 0x1ef6c4, Func Offset: 0x14
	// Line 2723, Address: 0x1ef6d8, Func Offset: 0x28
	// Line 2724, Address: 0x1ef6e8, Func Offset: 0x38
	// Func End, Address: 0x1ef6f0, Func Offset: 0x40
}

// xMat3x3GetEuler__FPC7xMat3x3P5xVec3
// Start address: 0x1ef6f0
void xMat3x3GetEuler(xMat3x3* m, xVec3* a)
{
	float32 pitch;
	float32 yaw;
	float32 roll;
	// Line 2685, Address: 0x1ef6f0, Func Offset: 0
	// Line 2688, Address: 0x1ef70c, Func Offset: 0x1c
	// Line 2692, Address: 0x1ef718, Func Offset: 0x28
	// Line 2688, Address: 0x1ef71c, Func Offset: 0x2c
	// Line 2692, Address: 0x1ef720, Func Offset: 0x30
	// Line 2693, Address: 0x1ef738, Func Offset: 0x48
	// Line 2694, Address: 0x1ef750, Func Offset: 0x60
	// Line 2695, Address: 0x1ef764, Func Offset: 0x74
	// Line 2696, Address: 0x1ef77c, Func Offset: 0x8c
	// Line 2698, Address: 0x1ef788, Func Offset: 0x98
	// Line 2699, Address: 0x1ef7a4, Func Offset: 0xb4
	// Line 2701, Address: 0x1ef7a8, Func Offset: 0xb8
	// Line 2703, Address: 0x1ef7b0, Func Offset: 0xc0
	// Line 2704, Address: 0x1ef7cc, Func Offset: 0xdc
	// Line 2706, Address: 0x1ef7d0, Func Offset: 0xe0
	// Line 2707, Address: 0x1ef7d4, Func Offset: 0xe4
	// Line 2708, Address: 0x1ef7d8, Func Offset: 0xe8
	// Line 2709, Address: 0x1ef7dc, Func Offset: 0xec
	// Func End, Address: 0x1ef7f8, Func Offset: 0x108
}

// xMat3x3Normalize__FP7xMat3x3PC7xMat3x3
// Start address: 0x1ef800
void xMat3x3Normalize(xMat3x3* o, xMat3x3* m)
{
	// Line 2673, Address: 0x1ef800, Func Offset: 0
	// Line 2674, Address: 0x1ef814, Func Offset: 0x14
	// Line 2675, Address: 0x1ef81c, Func Offset: 0x1c
	// Line 2676, Address: 0x1ef828, Func Offset: 0x28
	// Line 2677, Address: 0x1ef834, Func Offset: 0x34
	// Func End, Address: 0x1ef848, Func Offset: 0x48
}

// xBoxFromCone__FR4xBoxRC5xVec3RC5xVec3fff
// Start address: 0x1ef8c0
void xBoxFromCone(xBox& box, xVec3& center, xVec3& dir, float32 dist, float32 r1, float32 r2)
{
	xBox temp;
	// Line 2616, Address: 0x1ef8c0, Func Offset: 0
	// Line 2618, Address: 0x1ef8c4, Func Offset: 0x4
	// Line 2616, Address: 0x1ef8c8, Func Offset: 0x8
	// Line 2618, Address: 0x1ef8cc, Func Offset: 0xc
	// Line 2616, Address: 0x1ef8d0, Func Offset: 0x10
	// Line 2618, Address: 0x1ef8fc, Func Offset: 0x3c
	// Line 2619, Address: 0x1ef9c0, Func Offset: 0x100
	// Line 2620, Address: 0x1efb40, Func Offset: 0x280
	// Line 2621, Address: 0x1efc14, Func Offset: 0x354
	// Func End, Address: 0x1efc38, Func Offset: 0x378
}

// xBoxInitBoundCapsule__FP4xBoxPC8xCapsule
// Start address: 0x1efc40
void xBoxInitBoundCapsule(xBox* b, xCapsule* c)
{
	// Line 2586, Address: 0x1efc40, Func Offset: 0
	// Line 2591, Address: 0x1efc48, Func Offset: 0x8
	// Line 2592, Address: 0x1efc54, Func Offset: 0x14
	// Line 2593, Address: 0x1efc60, Func Offset: 0x20
	// Line 2594, Address: 0x1efc6c, Func Offset: 0x2c
	// Line 2595, Address: 0x1efc78, Func Offset: 0x38
	// Line 2596, Address: 0x1efc84, Func Offset: 0x44
	// Line 2597, Address: 0x1efc94, Func Offset: 0x54
	// Line 2596, Address: 0x1efc98, Func Offset: 0x58
	// Line 2598, Address: 0x1efca0, Func Offset: 0x60
	// Line 2599, Address: 0x1efcac, Func Offset: 0x6c
	// Line 2600, Address: 0x1efcb8, Func Offset: 0x78
	// Line 2601, Address: 0x1efcc4, Func Offset: 0x84
	// Line 2602, Address: 0x1efcd0, Func Offset: 0x90
	// Line 2603, Address: 0x1efcdc, Func Offset: 0x9c
	// Line 2604, Address: 0x1efcec, Func Offset: 0xac
	// Line 2603, Address: 0x1efcf0, Func Offset: 0xb0
	// Line 2605, Address: 0x1efcf8, Func Offset: 0xb8
	// Line 2606, Address: 0x1efd04, Func Offset: 0xc4
	// Line 2607, Address: 0x1efd10, Func Offset: 0xd0
	// Line 2608, Address: 0x1efd1c, Func Offset: 0xdc
	// Line 2609, Address: 0x1efd28, Func Offset: 0xe8
	// Line 2610, Address: 0x1efd34, Func Offset: 0xf4
	// Line 2611, Address: 0x1efd44, Func Offset: 0x104
	// Line 2612, Address: 0x1efd48, Func Offset: 0x108
	// Func End, Address: 0x1efd50, Func Offset: 0x110
}

// xBoxInitBoundOBB__FP4xBoxPC4xBoxPC7xMat4x3
// Start address: 0x1efd50
void xBoxInitBoundOBB(xBox* o, xBox* b, xMat4x3* m)
{
	xVec3 boxcent;
	float32 xmax;
	float32 ymax;
	float32 zmax;
	// Line 2550, Address: 0x1efd50, Func Offset: 0
	// Line 2557, Address: 0x1efd54, Func Offset: 0x4
	// Line 2550, Address: 0x1efd58, Func Offset: 0x8
	// Line 2557, Address: 0x1efd88, Func Offset: 0x38
	// Line 2558, Address: 0x1efda0, Func Offset: 0x50
	// Line 2563, Address: 0x1efda8, Func Offset: 0x58
	// Line 2576, Address: 0x1efdb0, Func Offset: 0x60
	// Line 2558, Address: 0x1efdb8, Func Offset: 0x68
	// Line 2559, Address: 0x1efdc4, Func Offset: 0x74
	// Line 2567, Address: 0x1efdcc, Func Offset: 0x7c
	// Line 2576, Address: 0x1efdd4, Func Offset: 0x84
	// Line 2567, Address: 0x1efdd8, Func Offset: 0x88
	// Line 2559, Address: 0x1efddc, Func Offset: 0x8c
	// Line 2563, Address: 0x1efde8, Func Offset: 0x98
	// Line 2567, Address: 0x1efdf0, Func Offset: 0xa0
	// Line 2563, Address: 0x1efdf8, Func Offset: 0xa8
	// Line 2567, Address: 0x1efdfc, Func Offset: 0xac
	// Line 2563, Address: 0x1efe00, Func Offset: 0xb0
	// Line 2567, Address: 0x1efe14, Func Offset: 0xc4
	// Line 2563, Address: 0x1efe18, Func Offset: 0xc8
	// Line 2567, Address: 0x1efe20, Func Offset: 0xd0
	// Line 2563, Address: 0x1efe34, Func Offset: 0xe4
	// Line 2576, Address: 0x1efe3c, Func Offset: 0xec
	// Line 2567, Address: 0x1efe50, Func Offset: 0x100
	// Line 2563, Address: 0x1efe54, Func Offset: 0x104
	// Line 2571, Address: 0x1efe58, Func Offset: 0x108
	// Line 2576, Address: 0x1efe70, Func Offset: 0x120
	// Line 2571, Address: 0x1efea4, Func Offset: 0x154
	// Line 2576, Address: 0x1efeb0, Func Offset: 0x160
	// Line 2571, Address: 0x1efecc, Func Offset: 0x17c
	// Line 2567, Address: 0x1efedc, Func Offset: 0x18c
	// Line 2571, Address: 0x1efee4, Func Offset: 0x194
	// Line 2576, Address: 0x1efeec, Func Offset: 0x19c
	// Line 2563, Address: 0x1eff34, Func Offset: 0x1e4
	// Line 2567, Address: 0x1eff38, Func Offset: 0x1e8
	// Line 2576, Address: 0x1eff40, Func Offset: 0x1f0
	// Line 2571, Address: 0x1eff48, Func Offset: 0x1f8
	// Line 2576, Address: 0x1eff4c, Func Offset: 0x1fc
	// Line 2563, Address: 0x1eff54, Func Offset: 0x204
	// Line 2567, Address: 0x1eff58, Func Offset: 0x208
	// Line 2576, Address: 0x1eff60, Func Offset: 0x210
	// Line 2571, Address: 0x1eff68, Func Offset: 0x218
	// Line 2576, Address: 0x1eff6c, Func Offset: 0x21c
	// Line 2577, Address: 0x1eff74, Func Offset: 0x224
	// Line 2571, Address: 0x1eff78, Func Offset: 0x228
	// Line 2576, Address: 0x1eff7c, Func Offset: 0x22c
	// Line 2577, Address: 0x1eff80, Func Offset: 0x230
	// Line 2576, Address: 0x1eff84, Func Offset: 0x234
	// Line 2577, Address: 0x1eff88, Func Offset: 0x238
	// Line 2578, Address: 0x1eff8c, Func Offset: 0x23c
	// Line 2571, Address: 0x1eff90, Func Offset: 0x240
	// Line 2563, Address: 0x1eff94, Func Offset: 0x244
	// Line 2578, Address: 0x1eff98, Func Offset: 0x248
	// Line 2567, Address: 0x1eff9c, Func Offset: 0x24c
	// Line 2578, Address: 0x1effa0, Func Offset: 0x250
	// Line 2567, Address: 0x1effa4, Func Offset: 0x254
	// Line 2571, Address: 0x1effa8, Func Offset: 0x258
	// Line 2579, Address: 0x1effac, Func Offset: 0x25c
	// Line 2571, Address: 0x1effb0, Func Offset: 0x260
	// Line 2579, Address: 0x1effb4, Func Offset: 0x264
	// Line 2580, Address: 0x1effbc, Func Offset: 0x26c
	// Line 2581, Address: 0x1effc8, Func Offset: 0x278
	// Line 2582, Address: 0x1effd4, Func Offset: 0x284
	// Line 2583, Address: 0x1effe0, Func Offset: 0x290
	// Func End, Address: 0x1f0018, Func Offset: 0x2c8
}

// xPointInBox__FPC4xBoxPC5xVec3
// Start address: 0x1f0020
int32 xPointInBox(xBox* b, xVec3* p)
{
	// Line 2544, Address: 0x1f0020, Func Offset: 0
	// Line 2547, Address: 0x1f00d0, Func Offset: 0xb0
	// Func End, Address: 0x1f00d8, Func Offset: 0xb8
}

// xLine3VecDist2__FPC5xVec3PC5xVec3PC5xVec3P6xIsect
// Start address: 0x1f00e0
void xLine3VecDist2(xVec3* p1, xVec3* p2, xVec3* v, xIsect* isx)
{
	// Line 562, Address: 0x1f00e0, Func Offset: 0
	// Line 569, Address: 0x1f00e4, Func Offset: 0x4
	// Line 571, Address: 0x1f00e8, Func Offset: 0x8
	// Line 569, Address: 0x1f00ec, Func Offset: 0xc
	// Line 571, Address: 0x1f0100, Func Offset: 0x20
	// Line 569, Address: 0x1f0108, Func Offset: 0x28
	// Line 571, Address: 0x1f010c, Func Offset: 0x2c
	// Line 569, Address: 0x1f0114, Func Offset: 0x34
	// Line 574, Address: 0x1f0118, Func Offset: 0x38
	// Line 571, Address: 0x1f0120, Func Offset: 0x40
	// Line 573, Address: 0x1f0144, Func Offset: 0x64
	// Line 574, Address: 0x1f0154, Func Offset: 0x74
	// Line 576, Address: 0x1f0160, Func Offset: 0x80
	// Line 577, Address: 0x1f016c, Func Offset: 0x8c
	// Line 578, Address: 0x1f0178, Func Offset: 0x98
	// Line 579, Address: 0x1f0188, Func Offset: 0xa8
	// Line 581, Address: 0x1f0194, Func Offset: 0xb4
	// Line 582, Address: 0x1f01d0, Func Offset: 0xf0
	// Line 583, Address: 0x1f01e0, Func Offset: 0x100
	// Line 587, Address: 0x1f01e8, Func Offset: 0x108
	// Line 590, Address: 0x1f0208, Func Offset: 0x128
	// Func End, Address: 0x1f0210, Func Offset: 0x130
}

// xMath3Exit__Fv
// Start address: 0x1f0210
void xMath3Exit()
{
	// Line 81, Address: 0x1f0210, Func Offset: 0
	// Func End, Address: 0x1f0218, Func Offset: 0x8
}

// xMath3Init__Fv
// Start address: 0x1f0220
void xMath3Init()
{
	// Line 66, Address: 0x1f0220, Func Offset: 0
	// Line 67, Address: 0x1f0228, Func Offset: 0x8
	// Line 69, Address: 0x1f0230, Func Offset: 0x10
	// Line 70, Address: 0x1f0248, Func Offset: 0x28
	// Line 69, Address: 0x1f0260, Func Offset: 0x40
	// Line 70, Address: 0x1f0278, Func Offset: 0x58
	// Line 71, Address: 0x1f0290, Func Offset: 0x70
	// Line 72, Address: 0x1f02a8, Func Offset: 0x88
	// Line 71, Address: 0x1f02c0, Func Offset: 0xa0
	// Line 72, Address: 0x1f02d8, Func Offset: 0xb8
	// Line 77, Address: 0x1f02f0, Func Offset: 0xd0
	// Func End, Address: 0x1f02fc, Func Offset: 0xdc
}

