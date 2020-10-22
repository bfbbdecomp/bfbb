typedef struct xIsect;
typedef struct xBox;
typedef struct xVec3;
typedef struct xTri3;
typedef struct xSphere;
typedef struct xCylinder;
typedef struct xRay3;
typedef struct xPlane;
typedef struct xMat4x3;
typedef struct xMat3x3;



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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xTri3
{
	xVec3 p1;
	xVec3 p2;
	xVec3 p3;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xPlane
{
	xVec3 norm;
	float32 d;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};


void iBoxBoundVec(xBox* o, xBox* b, xVec3* v);
void iBoxInitBoundVec(xBox* b, xVec3* v);
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx);
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx);
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out);
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx);
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx);
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx);
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v);
void iSphereInitBoundVec(xSphere* s, xVec3* v);
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx);
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx);
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx);
void iMath3Exit();
void iMath3Init();

// iBoxBoundVec__FP4xBoxPC4xBoxPC5xVec3
// Start address: 0x1ab2c0
void iBoxBoundVec(xBox* o, xBox* b, xVec3* v)
{
	// Line 1204, Address: 0x1ab2c0, Func Offset: 0
	// Line 1209, Address: 0x1ab2c8, Func Offset: 0x8
	// Line 1212, Address: 0x1ab334, Func Offset: 0x74
	// Line 1215, Address: 0x1ab394, Func Offset: 0xd4
	// Func End, Address: 0x1ab39c, Func Offset: 0xdc
}

// iBoxInitBoundVec__FP4xBoxPC5xVec3
// Start address: 0x1ab3a0
void iBoxInitBoundVec(xBox* b, xVec3* v)
{
	// Line 1191, Address: 0x1ab3a0, Func Offset: 0
	// Line 1192, Address: 0x1ab3b8, Func Offset: 0x18
	// Line 1193, Address: 0x1ab3cc, Func Offset: 0x2c
	// Func End, Address: 0x1ab3d4, Func Offset: 0x34
}

// iBoxIsectSphere__FPC4xBoxPC7xSphereP6xIsect
// Start address: 0x1ab3e0
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx)
{
	uint32 xcode;
	uint32 ycode;
	uint32 zcode;
	// Line 1079, Address: 0x1ab3e0, Func Offset: 0
	// Line 1093, Address: 0x1ab400, Func Offset: 0x20
	// Line 1092, Address: 0x1ab404, Func Offset: 0x24
	// Line 1094, Address: 0x1ab408, Func Offset: 0x28
	// Line 1096, Address: 0x1ab480, Func Offset: 0xa0
	// Line 1098, Address: 0x1ab49c, Func Offset: 0xbc
	// Line 1099, Address: 0x1ab4a4, Func Offset: 0xc4
	// Line 1098, Address: 0x1ab4a8, Func Offset: 0xc8
	// Line 1101, Address: 0x1ab4ac, Func Offset: 0xcc
	// Line 1100, Address: 0x1ab4b0, Func Offset: 0xd0
	// Line 1102, Address: 0x1ab4b4, Func Offset: 0xd4
	// Line 1104, Address: 0x1ab528, Func Offset: 0x148
	// Line 1106, Address: 0x1ab544, Func Offset: 0x164
	// Line 1107, Address: 0x1ab54c, Func Offset: 0x16c
	// Line 1106, Address: 0x1ab550, Func Offset: 0x170
	// Line 1109, Address: 0x1ab554, Func Offset: 0x174
	// Line 1108, Address: 0x1ab558, Func Offset: 0x178
	// Line 1110, Address: 0x1ab55c, Func Offset: 0x17c
	// Line 1112, Address: 0x1ab5d0, Func Offset: 0x1f0
	// Line 1114, Address: 0x1ab5f0, Func Offset: 0x210
	// Line 1120, Address: 0x1ab5f8, Func Offset: 0x218
	// Line 1121, Address: 0x1ab660, Func Offset: 0x280
	// Line 1123, Address: 0x1ab678, Func Offset: 0x298
	// Line 1124, Address: 0x1ab67c, Func Offset: 0x29c
	// Line 1123, Address: 0x1ab680, Func Offset: 0x2a0
	// Line 1124, Address: 0x1ab684, Func Offset: 0x2a4
	// Line 1125, Address: 0x1ab688, Func Offset: 0x2a8
	// Line 1123, Address: 0x1ab68c, Func Offset: 0x2ac
	// Line 1127, Address: 0x1ab690, Func Offset: 0x2b0
	// Line 1123, Address: 0x1ab694, Func Offset: 0x2b4
	// Line 1124, Address: 0x1ab6a0, Func Offset: 0x2c0
	// Line 1123, Address: 0x1ab6a4, Func Offset: 0x2c4
	// Line 1125, Address: 0x1ab6a8, Func Offset: 0x2c8
	// Line 1123, Address: 0x1ab6ac, Func Offset: 0x2cc
	// Line 1125, Address: 0x1ab6b0, Func Offset: 0x2d0
	// Line 1124, Address: 0x1ab6b8, Func Offset: 0x2d8
	// Line 1125, Address: 0x1ab6bc, Func Offset: 0x2dc
	// Line 1123, Address: 0x1ab6c0, Func Offset: 0x2e0
	// Line 1125, Address: 0x1ab6c4, Func Offset: 0x2e4
	// Line 1124, Address: 0x1ab6cc, Func Offset: 0x2ec
	// Line 1125, Address: 0x1ab6d0, Func Offset: 0x2f0
	// Line 1126, Address: 0x1ab6e4, Func Offset: 0x304
	// Line 1128, Address: 0x1ab700, Func Offset: 0x320
	// Line 1131, Address: 0x1ab708, Func Offset: 0x328
	// Line 1133, Address: 0x1ab718, Func Offset: 0x338
	// Line 1135, Address: 0x1ab728, Func Offset: 0x348
	// Line 1136, Address: 0x1ab72c, Func Offset: 0x34c
	// Line 1135, Address: 0x1ab730, Func Offset: 0x350
	// Line 1136, Address: 0x1ab73c, Func Offset: 0x35c
	// Line 1137, Address: 0x1ab740, Func Offset: 0x360
	// Func End, Address: 0x1ab754, Func Offset: 0x374
}

// iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect
// Start address: 0x1ab760
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx)
{
	float32 t_in;
	float32 t_out;
	// Line 920, Address: 0x1ab760, Func Offset: 0
	// Line 934, Address: 0x1ab78c, Func Offset: 0x2c
	// Line 935, Address: 0x1ab79c, Func Offset: 0x3c
	// Line 937, Address: 0x1ab7a0, Func Offset: 0x40
	// Line 938, Address: 0x1ab7b0, Func Offset: 0x50
	// Line 939, Address: 0x1ab7b4, Func Offset: 0x54
	// Line 941, Address: 0x1ab7b8, Func Offset: 0x58
	// Line 955, Address: 0x1ab7c0, Func Offset: 0x60
	// Line 942, Address: 0x1ab7c4, Func Offset: 0x64
	// Line 941, Address: 0x1ab7c8, Func Offset: 0x68
	// Line 942, Address: 0x1ab7cc, Func Offset: 0x6c
	// Line 950, Address: 0x1ab7d8, Func Offset: 0x78
	// Line 942, Address: 0x1ab7dc, Func Offset: 0x7c
	// Line 949, Address: 0x1ab7e0, Func Offset: 0x80
	// Line 950, Address: 0x1ab7e8, Func Offset: 0x88
	// Line 949, Address: 0x1ab7ec, Func Offset: 0x8c
	// Line 952, Address: 0x1ab7f4, Func Offset: 0x94
	// Line 951, Address: 0x1ab7f8, Func Offset: 0x98
	// Line 952, Address: 0x1ab7fc, Func Offset: 0x9c
	// Line 951, Address: 0x1ab800, Func Offset: 0xa0
	// Line 955, Address: 0x1ab804, Func Offset: 0xa4
	// Line 949, Address: 0x1ab808, Func Offset: 0xa8
	// Line 951, Address: 0x1ab80c, Func Offset: 0xac
	// Line 949, Address: 0x1ab810, Func Offset: 0xb0
	// Line 953, Address: 0x1ab818, Func Offset: 0xb8
	// Line 952, Address: 0x1ab81c, Func Offset: 0xbc
	// Line 953, Address: 0x1ab820, Func Offset: 0xc0
	// Line 952, Address: 0x1ab824, Func Offset: 0xc4
	// Line 953, Address: 0x1ab828, Func Offset: 0xc8
	// Line 952, Address: 0x1ab82c, Func Offset: 0xcc
	// Line 950, Address: 0x1ab830, Func Offset: 0xd0
	// Line 953, Address: 0x1ab834, Func Offset: 0xd4
	// Line 955, Address: 0x1ab83c, Func Offset: 0xdc
	// Line 950, Address: 0x1ab844, Func Offset: 0xe4
	// Line 953, Address: 0x1ab84c, Func Offset: 0xec
	// Line 955, Address: 0x1ab850, Func Offset: 0xf0
	// Line 956, Address: 0x1ab924, Func Offset: 0x1c4
	// Line 957, Address: 0x1ab934, Func Offset: 0x1d4
	// Line 958, Address: 0x1ab940, Func Offset: 0x1e0
	// Line 959, Address: 0x1ab944, Func Offset: 0x1e4
	// Line 961, Address: 0x1ab94c, Func Offset: 0x1ec
	// Line 965, Address: 0x1ab958, Func Offset: 0x1f8
	// Line 964, Address: 0x1ab95c, Func Offset: 0x1fc
	// Line 965, Address: 0x1ab960, Func Offset: 0x200
	// Line 968, Address: 0x1ab964, Func Offset: 0x204
	// Line 969, Address: 0x1ab970, Func Offset: 0x210
	// Line 970, Address: 0x1ab980, Func Offset: 0x220
	// Line 971, Address: 0x1ab984, Func Offset: 0x224
	// Line 972, Address: 0x1ab98c, Func Offset: 0x22c
	// Line 973, Address: 0x1ab990, Func Offset: 0x230
	// Line 975, Address: 0x1ab998, Func Offset: 0x238
	// Line 974, Address: 0x1ab99c, Func Offset: 0x23c
	// Line 975, Address: 0x1ab9a0, Func Offset: 0x240
	// Line 979, Address: 0x1ab9a4, Func Offset: 0x244
	// Line 980, Address: 0x1ab9b0, Func Offset: 0x250
	// Line 981, Address: 0x1ab9b8, Func Offset: 0x258
	// Line 982, Address: 0x1ab9bc, Func Offset: 0x25c
	// Line 983, Address: 0x1ab9c0, Func Offset: 0x260
	// Func End, Address: 0x1ab9ec, Func Offset: 0x28c
}

// ClipPlane__FffPfPf
// Start address: 0x1ab9f0
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out)
{
	// Line 885, Address: 0x1ab9f0, Func Offset: 0
	// Line 886, Address: 0x1aba04, Func Offset: 0x14
	// Line 887, Address: 0x1aba18, Func Offset: 0x28
	// Line 889, Address: 0x1aba20, Func Offset: 0x30
	// Line 890, Address: 0x1aba34, Func Offset: 0x44
	// Line 891, Address: 0x1aba44, Func Offset: 0x54
	// Line 892, Address: 0x1aba48, Func Offset: 0x58
	// Line 894, Address: 0x1aba50, Func Offset: 0x60
	// Line 895, Address: 0x1aba5c, Func Offset: 0x6c
	// Line 896, Address: 0x1aba70, Func Offset: 0x80
	// Line 898, Address: 0x1aba78, Func Offset: 0x88
	// Line 899, Address: 0x1aba8c, Func Offset: 0x9c
	// Line 900, Address: 0x1aba9c, Func Offset: 0xac
	// Line 901, Address: 0x1abaa0, Func Offset: 0xb0
	// Line 904, Address: 0x1abaa8, Func Offset: 0xb8
	// Line 906, Address: 0x1abac0, Func Offset: 0xd0
	// Func End, Address: 0x1abac8, Func Offset: 0xd8
}

// iBoxIsectVec__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x1abad0
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx)
{
	// Line 867, Address: 0x1abad0, Func Offset: 0
	// Line 872, Address: 0x1abad4, Func Offset: 0x4
	// Line 877, Address: 0x1abb3c, Func Offset: 0x6c
	// Line 878, Address: 0x1abb48, Func Offset: 0x78
	// Line 880, Address: 0x1abb50, Func Offset: 0x80
	// Func End, Address: 0x1abb58, Func Offset: 0x88
}

// iBoxVecDist__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x1abb60
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx)
{
	// Line 647, Address: 0x1abb60, Func Offset: 0
	// Line 648, Address: 0x1abb68, Func Offset: 0x8
	// Line 649, Address: 0x1abb78, Func Offset: 0x18
	// Line 650, Address: 0x1abb8c, Func Offset: 0x2c
	// Line 654, Address: 0x1abb9c, Func Offset: 0x3c
	// Line 655, Address: 0x1abba4, Func Offset: 0x44
	// Line 651, Address: 0x1abba8, Func Offset: 0x48
	// Line 652, Address: 0x1abbac, Func Offset: 0x4c
	// Line 653, Address: 0x1abbbc, Func Offset: 0x5c
	// Line 654, Address: 0x1abbcc, Func Offset: 0x6c
	// Line 655, Address: 0x1abbd8, Func Offset: 0x78
	// Line 657, Address: 0x1abbe0, Func Offset: 0x80
	// Line 661, Address: 0x1abbf8, Func Offset: 0x98
	// Line 662, Address: 0x1abc04, Func Offset: 0xa4
	// Line 658, Address: 0x1abc08, Func Offset: 0xa8
	// Line 659, Address: 0x1abc0c, Func Offset: 0xac
	// Line 660, Address: 0x1abc1c, Func Offset: 0xbc
	// Line 661, Address: 0x1abc20, Func Offset: 0xc0
	// Line 662, Address: 0x1abc30, Func Offset: 0xd0
	// Line 664, Address: 0x1abc38, Func Offset: 0xd8
	// Line 668, Address: 0x1abc40, Func Offset: 0xe0
	// Line 665, Address: 0x1abc44, Func Offset: 0xe4
	// Line 668, Address: 0x1abc48, Func Offset: 0xe8
	// Line 669, Address: 0x1abc50, Func Offset: 0xf0
	// Line 665, Address: 0x1abc54, Func Offset: 0xf4
	// Line 666, Address: 0x1abc58, Func Offset: 0xf8
	// Line 667, Address: 0x1abc68, Func Offset: 0x108
	// Line 668, Address: 0x1abc78, Func Offset: 0x118
	// Line 669, Address: 0x1abc88, Func Offset: 0x128
	// Line 672, Address: 0x1abc90, Func Offset: 0x130
	// Line 673, Address: 0x1abcac, Func Offset: 0x14c
	// Line 677, Address: 0x1abcbc, Func Offset: 0x15c
	// Line 678, Address: 0x1abcc8, Func Offset: 0x168
	// Line 674, Address: 0x1abccc, Func Offset: 0x16c
	// Line 675, Address: 0x1abcd0, Func Offset: 0x170
	// Line 676, Address: 0x1abcd4, Func Offset: 0x174
	// Line 677, Address: 0x1abce4, Func Offset: 0x184
	// Line 678, Address: 0x1abcf4, Func Offset: 0x194
	// Line 680, Address: 0x1abcfc, Func Offset: 0x19c
	// Line 684, Address: 0x1abd18, Func Offset: 0x1b8
	// Line 685, Address: 0x1abd24, Func Offset: 0x1c4
	// Line 681, Address: 0x1abd28, Func Offset: 0x1c8
	// Line 682, Address: 0x1abd2c, Func Offset: 0x1cc
	// Line 683, Address: 0x1abd30, Func Offset: 0x1d0
	// Line 684, Address: 0x1abd34, Func Offset: 0x1d4
	// Line 685, Address: 0x1abd44, Func Offset: 0x1e4
	// Line 687, Address: 0x1abd4c, Func Offset: 0x1ec
	// Line 691, Address: 0x1abd58, Func Offset: 0x1f8
	// Line 688, Address: 0x1abd5c, Func Offset: 0x1fc
	// Line 691, Address: 0x1abd60, Func Offset: 0x200
	// Line 692, Address: 0x1abd68, Func Offset: 0x208
	// Line 688, Address: 0x1abd6c, Func Offset: 0x20c
	// Line 689, Address: 0x1abd70, Func Offset: 0x210
	// Line 690, Address: 0x1abd74, Func Offset: 0x214
	// Line 691, Address: 0x1abd84, Func Offset: 0x224
	// Line 692, Address: 0x1abd94, Func Offset: 0x234
	// Line 695, Address: 0x1abd9c, Func Offset: 0x23c
	// Line 696, Address: 0x1abdac, Func Offset: 0x24c
	// Line 700, Address: 0x1abdbc, Func Offset: 0x25c
	// Line 701, Address: 0x1abdc8, Func Offset: 0x268
	// Line 697, Address: 0x1abdcc, Func Offset: 0x26c
	// Line 698, Address: 0x1abdd0, Func Offset: 0x270
	// Line 699, Address: 0x1abde0, Func Offset: 0x280
	// Line 700, Address: 0x1abdf0, Func Offset: 0x290
	// Line 701, Address: 0x1abe00, Func Offset: 0x2a0
	// Line 703, Address: 0x1abe08, Func Offset: 0x2a8
	// Line 707, Address: 0x1abe20, Func Offset: 0x2c0
	// Line 708, Address: 0x1abe2c, Func Offset: 0x2cc
	// Line 704, Address: 0x1abe30, Func Offset: 0x2d0
	// Line 705, Address: 0x1abe34, Func Offset: 0x2d4
	// Line 706, Address: 0x1abe44, Func Offset: 0x2e4
	// Line 707, Address: 0x1abe48, Func Offset: 0x2e8
	// Line 708, Address: 0x1abe58, Func Offset: 0x2f8
	// Line 710, Address: 0x1abe60, Func Offset: 0x300
	// Line 714, Address: 0x1abe68, Func Offset: 0x308
	// Line 711, Address: 0x1abe6c, Func Offset: 0x30c
	// Line 714, Address: 0x1abe70, Func Offset: 0x310
	// Line 715, Address: 0x1abe78, Func Offset: 0x318
	// Line 711, Address: 0x1abe7c, Func Offset: 0x31c
	// Line 712, Address: 0x1abe80, Func Offset: 0x320
	// Line 713, Address: 0x1abe90, Func Offset: 0x330
	// Line 714, Address: 0x1abea0, Func Offset: 0x340
	// Line 715, Address: 0x1abeb0, Func Offset: 0x350
	// Line 719, Address: 0x1abeb8, Func Offset: 0x358
	// Line 720, Address: 0x1abed4, Func Offset: 0x374
	// Line 721, Address: 0x1abee8, Func Offset: 0x388
	// Line 722, Address: 0x1abef8, Func Offset: 0x398
	// Line 725, Address: 0x1abefc, Func Offset: 0x39c
	// Line 723, Address: 0x1abf00, Func Offset: 0x3a0
	// Line 725, Address: 0x1abf04, Func Offset: 0x3a4
	// Line 723, Address: 0x1abf08, Func Offset: 0x3a8
	// Line 725, Address: 0x1abf0c, Func Offset: 0x3ac
	// Line 726, Address: 0x1abf10, Func Offset: 0x3b0
	// Line 723, Address: 0x1abf14, Func Offset: 0x3b4
	// Line 724, Address: 0x1abf1c, Func Offset: 0x3bc
	// Line 725, Address: 0x1abf2c, Func Offset: 0x3cc
	// Line 726, Address: 0x1abf3c, Func Offset: 0x3dc
	// Line 728, Address: 0x1abf44, Func Offset: 0x3e4
	// Line 729, Address: 0x1abf60, Func Offset: 0x400
	// Line 732, Address: 0x1abf64, Func Offset: 0x404
	// Line 730, Address: 0x1abf68, Func Offset: 0x408
	// Line 732, Address: 0x1abf6c, Func Offset: 0x40c
	// Line 730, Address: 0x1abf70, Func Offset: 0x410
	// Line 733, Address: 0x1abf74, Func Offset: 0x414
	// Line 732, Address: 0x1abf78, Func Offset: 0x418
	// Line 730, Address: 0x1abf7c, Func Offset: 0x41c
	// Line 731, Address: 0x1abf84, Func Offset: 0x424
	// Line 732, Address: 0x1abf88, Func Offset: 0x428
	// Line 733, Address: 0x1abf98, Func Offset: 0x438
	// Line 735, Address: 0x1abfa0, Func Offset: 0x440
	// Line 736, Address: 0x1abfa8, Func Offset: 0x448
	// Line 737, Address: 0x1abfac, Func Offset: 0x44c
	// Line 739, Address: 0x1abfb0, Func Offset: 0x450
	// Line 737, Address: 0x1abfb4, Func Offset: 0x454
	// Line 739, Address: 0x1abfb8, Func Offset: 0x458
	// Line 740, Address: 0x1abfc0, Func Offset: 0x460
	// Line 737, Address: 0x1abfc4, Func Offset: 0x464
	// Line 738, Address: 0x1abfcc, Func Offset: 0x46c
	// Line 739, Address: 0x1abfdc, Func Offset: 0x47c
	// Line 740, Address: 0x1abfec, Func Offset: 0x48c
	// Line 743, Address: 0x1abff4, Func Offset: 0x494
	// Line 744, Address: 0x1ac014, Func Offset: 0x4b4
	// Line 745, Address: 0x1ac024, Func Offset: 0x4c4
	// Line 748, Address: 0x1ac028, Func Offset: 0x4c8
	// Line 746, Address: 0x1ac02c, Func Offset: 0x4cc
	// Line 748, Address: 0x1ac030, Func Offset: 0x4d0
	// Line 747, Address: 0x1ac034, Func Offset: 0x4d4
	// Line 749, Address: 0x1ac038, Func Offset: 0x4d8
	// Line 747, Address: 0x1ac03c, Func Offset: 0x4dc
	// Line 748, Address: 0x1ac040, Func Offset: 0x4e0
	// Line 747, Address: 0x1ac044, Func Offset: 0x4e4
	// Line 748, Address: 0x1ac04c, Func Offset: 0x4ec
	// Line 749, Address: 0x1ac05c, Func Offset: 0x4fc
	// Line 751, Address: 0x1ac064, Func Offset: 0x504
	// Line 760, Address: 0x1ac080, Func Offset: 0x520
	// Line 763, Address: 0x1ac084, Func Offset: 0x524
	// Line 761, Address: 0x1ac088, Func Offset: 0x528
	// Line 763, Address: 0x1ac08c, Func Offset: 0x52c
	// Line 762, Address: 0x1ac090, Func Offset: 0x530
	// Line 764, Address: 0x1ac094, Func Offset: 0x534
	// Line 762, Address: 0x1ac098, Func Offset: 0x538
	// Line 763, Address: 0x1ac09c, Func Offset: 0x53c
	// Line 762, Address: 0x1ac0a0, Func Offset: 0x540
	// Line 763, Address: 0x1ac0a8, Func Offset: 0x548
	// Line 764, Address: 0x1ac0b8, Func Offset: 0x558
	// Line 767, Address: 0x1ac0c0, Func Offset: 0x560
	// Line 768, Address: 0x1ac0cc, Func Offset: 0x56c
	// Line 769, Address: 0x1ac0dc, Func Offset: 0x57c
	// Line 772, Address: 0x1ac0e0, Func Offset: 0x580
	// Line 770, Address: 0x1ac0e4, Func Offset: 0x584
	// Line 772, Address: 0x1ac0e8, Func Offset: 0x588
	// Line 770, Address: 0x1ac0ec, Func Offset: 0x58c
	// Line 772, Address: 0x1ac0f0, Func Offset: 0x590
	// Line 773, Address: 0x1ac0f4, Func Offset: 0x594
	// Line 770, Address: 0x1ac0f8, Func Offset: 0x598
	// Line 771, Address: 0x1ac100, Func Offset: 0x5a0
	// Line 772, Address: 0x1ac110, Func Offset: 0x5b0
	// Line 773, Address: 0x1ac120, Func Offset: 0x5c0
	// Line 775, Address: 0x1ac128, Func Offset: 0x5c8
	// Line 776, Address: 0x1ac140, Func Offset: 0x5e0
	// Line 779, Address: 0x1ac144, Func Offset: 0x5e4
	// Line 777, Address: 0x1ac148, Func Offset: 0x5e8
	// Line 779, Address: 0x1ac14c, Func Offset: 0x5ec
	// Line 777, Address: 0x1ac150, Func Offset: 0x5f0
	// Line 780, Address: 0x1ac154, Func Offset: 0x5f4
	// Line 779, Address: 0x1ac158, Func Offset: 0x5f8
	// Line 777, Address: 0x1ac15c, Func Offset: 0x5fc
	// Line 778, Address: 0x1ac164, Func Offset: 0x604
	// Line 779, Address: 0x1ac168, Func Offset: 0x608
	// Line 780, Address: 0x1ac178, Func Offset: 0x618
	// Line 782, Address: 0x1ac180, Func Offset: 0x620
	// Line 783, Address: 0x1ac188, Func Offset: 0x628
	// Line 784, Address: 0x1ac18c, Func Offset: 0x62c
	// Line 786, Address: 0x1ac190, Func Offset: 0x630
	// Line 784, Address: 0x1ac194, Func Offset: 0x634
	// Line 786, Address: 0x1ac198, Func Offset: 0x638
	// Line 787, Address: 0x1ac1a0, Func Offset: 0x640
	// Line 784, Address: 0x1ac1a4, Func Offset: 0x644
	// Line 785, Address: 0x1ac1ac, Func Offset: 0x64c
	// Line 786, Address: 0x1ac1bc, Func Offset: 0x65c
	// Line 787, Address: 0x1ac1cc, Func Offset: 0x66c
	// Line 791, Address: 0x1ac1d4, Func Offset: 0x674
	// Line 792, Address: 0x1ac1e4, Func Offset: 0x684
	// Line 793, Address: 0x1ac1f8, Func Offset: 0x698
	// Line 797, Address: 0x1ac208, Func Offset: 0x6a8
	// Line 798, Address: 0x1ac214, Func Offset: 0x6b4
	// Line 794, Address: 0x1ac218, Func Offset: 0x6b8
	// Line 795, Address: 0x1ac21c, Func Offset: 0x6bc
	// Line 796, Address: 0x1ac22c, Func Offset: 0x6cc
	// Line 797, Address: 0x1ac23c, Func Offset: 0x6dc
	// Line 798, Address: 0x1ac24c, Func Offset: 0x6ec
	// Line 800, Address: 0x1ac254, Func Offset: 0x6f4
	// Line 804, Address: 0x1ac270, Func Offset: 0x710
	// Line 805, Address: 0x1ac27c, Func Offset: 0x71c
	// Line 801, Address: 0x1ac280, Func Offset: 0x720
	// Line 802, Address: 0x1ac284, Func Offset: 0x724
	// Line 803, Address: 0x1ac294, Func Offset: 0x734
	// Line 804, Address: 0x1ac298, Func Offset: 0x738
	// Line 805, Address: 0x1ac2a8, Func Offset: 0x748
	// Line 807, Address: 0x1ac2b0, Func Offset: 0x750
	// Line 811, Address: 0x1ac2b8, Func Offset: 0x758
	// Line 808, Address: 0x1ac2bc, Func Offset: 0x75c
	// Line 811, Address: 0x1ac2c0, Func Offset: 0x760
	// Line 812, Address: 0x1ac2c8, Func Offset: 0x768
	// Line 808, Address: 0x1ac2cc, Func Offset: 0x76c
	// Line 809, Address: 0x1ac2d0, Func Offset: 0x770
	// Line 810, Address: 0x1ac2e0, Func Offset: 0x780
	// Line 811, Address: 0x1ac2f0, Func Offset: 0x790
	// Line 812, Address: 0x1ac300, Func Offset: 0x7a0
	// Line 815, Address: 0x1ac308, Func Offset: 0x7a8
	// Line 816, Address: 0x1ac324, Func Offset: 0x7c4
	// Line 820, Address: 0x1ac334, Func Offset: 0x7d4
	// Line 821, Address: 0x1ac340, Func Offset: 0x7e0
	// Line 817, Address: 0x1ac344, Func Offset: 0x7e4
	// Line 818, Address: 0x1ac348, Func Offset: 0x7e8
	// Line 819, Address: 0x1ac34c, Func Offset: 0x7ec
	// Line 820, Address: 0x1ac35c, Func Offset: 0x7fc
	// Line 821, Address: 0x1ac36c, Func Offset: 0x80c
	// Line 823, Address: 0x1ac374, Func Offset: 0x814
	// Line 827, Address: 0x1ac390, Func Offset: 0x830
	// Line 828, Address: 0x1ac39c, Func Offset: 0x83c
	// Line 824, Address: 0x1ac3a0, Func Offset: 0x840
	// Line 825, Address: 0x1ac3a4, Func Offset: 0x844
	// Line 826, Address: 0x1ac3a8, Func Offset: 0x848
	// Line 827, Address: 0x1ac3ac, Func Offset: 0x84c
	// Line 828, Address: 0x1ac3bc, Func Offset: 0x85c
	// Line 830, Address: 0x1ac3c4, Func Offset: 0x864
	// Line 834, Address: 0x1ac3d0, Func Offset: 0x870
	// Line 831, Address: 0x1ac3d4, Func Offset: 0x874
	// Line 834, Address: 0x1ac3d8, Func Offset: 0x878
	// Line 835, Address: 0x1ac3e0, Func Offset: 0x880
	// Line 831, Address: 0x1ac3e4, Func Offset: 0x884
	// Line 832, Address: 0x1ac3e8, Func Offset: 0x888
	// Line 833, Address: 0x1ac3ec, Func Offset: 0x88c
	// Line 834, Address: 0x1ac3fc, Func Offset: 0x89c
	// Line 835, Address: 0x1ac40c, Func Offset: 0x8ac
	// Line 838, Address: 0x1ac414, Func Offset: 0x8b4
	// Line 839, Address: 0x1ac424, Func Offset: 0x8c4
	// Line 843, Address: 0x1ac434, Func Offset: 0x8d4
	// Line 844, Address: 0x1ac440, Func Offset: 0x8e0
	// Line 840, Address: 0x1ac444, Func Offset: 0x8e4
	// Line 841, Address: 0x1ac448, Func Offset: 0x8e8
	// Line 842, Address: 0x1ac458, Func Offset: 0x8f8
	// Line 843, Address: 0x1ac468, Func Offset: 0x908
	// Line 844, Address: 0x1ac478, Func Offset: 0x918
	// Line 846, Address: 0x1ac480, Func Offset: 0x920
	// Line 850, Address: 0x1ac498, Func Offset: 0x938
	// Line 851, Address: 0x1ac4a4, Func Offset: 0x944
	// Line 847, Address: 0x1ac4a8, Func Offset: 0x948
	// Line 848, Address: 0x1ac4ac, Func Offset: 0x94c
	// Line 849, Address: 0x1ac4bc, Func Offset: 0x95c
	// Line 850, Address: 0x1ac4c0, Func Offset: 0x960
	// Line 851, Address: 0x1ac4d0, Func Offset: 0x970
	// Line 853, Address: 0x1ac4d8, Func Offset: 0x978
	// Line 857, Address: 0x1ac4e0, Func Offset: 0x980
	// Line 854, Address: 0x1ac4e4, Func Offset: 0x984
	// Line 857, Address: 0x1ac4e8, Func Offset: 0x988
	// Line 858, Address: 0x1ac4f0, Func Offset: 0x990
	// Line 854, Address: 0x1ac4f4, Func Offset: 0x994
	// Line 855, Address: 0x1ac4f8, Func Offset: 0x998
	// Line 856, Address: 0x1ac508, Func Offset: 0x9a8
	// Line 857, Address: 0x1ac518, Func Offset: 0x9b8
	// Line 858, Address: 0x1ac528, Func Offset: 0x9c8
	// Line 861, Address: 0x1ac534, Func Offset: 0x9d4
	// Line 858, Address: 0x1ac538, Func Offset: 0x9d8
	// Line 863, Address: 0x1ac544, Func Offset: 0x9e4
	// Line 864, Address: 0x1ac560, Func Offset: 0xa00
	// Func End, Address: 0x1ac568, Func Offset: 0xa08
}

// iCylinderIsectVec__FPC9xCylinderPC5xVec3P6xIsect
// Start address: 0x1ac570
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx)
{
	float32 b;
	// Line 473, Address: 0x1ac570, Func Offset: 0
	// Line 481, Address: 0x1ac578, Func Offset: 0x8
	// Line 482, Address: 0x1ac580, Func Offset: 0x10
	// Line 486, Address: 0x1ac5d8, Func Offset: 0x68
	// Line 487, Address: 0x1ac5e0, Func Offset: 0x70
	// Line 489, Address: 0x1ac5e8, Func Offset: 0x78
	// Func End, Address: 0x1ac5f0, Func Offset: 0x80
}

// iSphereBoundVec__FP7xSpherePC7xSpherePC5xVec3
// Start address: 0x1ac5f0
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v)
{
	float32 scale;
	xSphere temp;
	xSphere* tp;
	uint32 usetemp;
	// Line 323, Address: 0x1ac5f0, Func Offset: 0
	// Line 331, Address: 0x1ac5f4, Func Offset: 0x4
	// Line 323, Address: 0x1ac5f8, Func Offset: 0x8
	// Line 331, Address: 0x1ac5fc, Func Offset: 0xc
	// Line 333, Address: 0x1ac600, Func Offset: 0x10
	// Line 334, Address: 0x1ac618, Func Offset: 0x28
	// Line 333, Address: 0x1ac61c, Func Offset: 0x2c
	// Line 334, Address: 0x1ac63c, Func Offset: 0x4c
	// Line 333, Address: 0x1ac640, Func Offset: 0x50
	// Line 334, Address: 0x1ac644, Func Offset: 0x54
	// Line 335, Address: 0x1ac654, Func Offset: 0x64
	// Line 336, Address: 0x1ac65c, Func Offset: 0x6c
	// Line 337, Address: 0x1ac664, Func Offset: 0x74
	// Line 338, Address: 0x1ac668, Func Offset: 0x78
	// Line 343, Address: 0x1ac670, Func Offset: 0x80
	// Line 345, Address: 0x1ac67c, Func Offset: 0x8c
	// Line 346, Address: 0x1ac680, Func Offset: 0x90
	// Line 345, Address: 0x1ac684, Func Offset: 0x94
	// Line 346, Address: 0x1ac68c, Func Offset: 0x9c
	// Line 347, Address: 0x1ac694, Func Offset: 0xa4
	// Line 346, Address: 0x1ac698, Func Offset: 0xa8
	// Line 349, Address: 0x1ac69c, Func Offset: 0xac
	// Line 346, Address: 0x1ac6a0, Func Offset: 0xb0
	// Line 347, Address: 0x1ac6a8, Func Offset: 0xb8
	// Line 349, Address: 0x1ac6b4, Func Offset: 0xc4
	// Line 347, Address: 0x1ac6bc, Func Offset: 0xcc
	// Line 348, Address: 0x1ac6d0, Func Offset: 0xe0
	// Line 349, Address: 0x1ac700, Func Offset: 0x110
	// Line 350, Address: 0x1ac70c, Func Offset: 0x11c
	// Line 351, Address: 0x1ac714, Func Offset: 0x124
	// Line 353, Address: 0x1ac720, Func Offset: 0x130
	// Func End, Address: 0x1ac72c, Func Offset: 0x13c
}

// iSphereInitBoundVec__FP7xSpherePC5xVec3
// Start address: 0x1ac730
void iSphereInitBoundVec(xSphere* s, xVec3* v)
{
	// Line 264, Address: 0x1ac730, Func Offset: 0
	// Line 265, Address: 0x1ac734, Func Offset: 0x4
	// Line 264, Address: 0x1ac73c, Func Offset: 0xc
	// Line 266, Address: 0x1ac750, Func Offset: 0x20
	// Func End, Address: 0x1ac758, Func Offset: 0x28
}

// iSphereIsectSphere__FPC7xSpherePC7xSphereP6xIsect
// Start address: 0x1ac760
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx)
{
	// Line 241, Address: 0x1ac760, Func Offset: 0
	// Line 242, Address: 0x1ac79c, Func Offset: 0x3c
	// Line 243, Address: 0x1ac7b4, Func Offset: 0x54
	// Line 244, Address: 0x1ac7c8, Func Offset: 0x68
	// Line 245, Address: 0x1ac7d4, Func Offset: 0x74
	// Func End, Address: 0x1ac7dc, Func Offset: 0x7c
}

// iSphereIsectRay__FPC7xSpherePC5xRay3P6xIsect
// Start address: 0x1ac7e0
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx)
{
	float32 t_in;
	float32 t_out;
	uint32 num;
	// Line 101, Address: 0x1ac7e0, Func Offset: 0
	// Line 114, Address: 0x1ac7f4, Func Offset: 0x14
	// Line 115, Address: 0x1ac804, Func Offset: 0x24
	// Line 117, Address: 0x1ac808, Func Offset: 0x28
	// Line 118, Address: 0x1ac818, Func Offset: 0x38
	// Line 119, Address: 0x1ac81c, Func Offset: 0x3c
	// Line 122, Address: 0x1ac820, Func Offset: 0x40
	// Line 121, Address: 0x1ac824, Func Offset: 0x44
	// Line 122, Address: 0x1ac828, Func Offset: 0x48
	// Line 121, Address: 0x1ac82c, Func Offset: 0x4c
	// Line 122, Address: 0x1ac830, Func Offset: 0x50
	// Line 121, Address: 0x1ac838, Func Offset: 0x58
	// Line 122, Address: 0x1ac878, Func Offset: 0x98
	// Line 121, Address: 0x1ac88c, Func Offset: 0xac
	// Line 122, Address: 0x1ac890, Func Offset: 0xb0
	// Line 129, Address: 0x1ac8bc, Func Offset: 0xdc
	// Line 130, Address: 0x1ac8c4, Func Offset: 0xe4
	// Line 133, Address: 0x1ac8c8, Func Offset: 0xe8
	// Line 134, Address: 0x1ac8e0, Func Offset: 0x100
	// Line 136, Address: 0x1ac900, Func Offset: 0x120
	// Line 135, Address: 0x1ac904, Func Offset: 0x124
	// Line 136, Address: 0x1ac908, Func Offset: 0x128
	// Line 138, Address: 0x1ac90c, Func Offset: 0x12c
	// Line 140, Address: 0x1ac918, Func Offset: 0x138
	// Line 139, Address: 0x1ac91c, Func Offset: 0x13c
	// Line 141, Address: 0x1ac920, Func Offset: 0x140
	// Line 140, Address: 0x1ac924, Func Offset: 0x144
	// Line 144, Address: 0x1ac928, Func Offset: 0x148
	// Line 145, Address: 0x1ac938, Func Offset: 0x158
	// Line 146, Address: 0x1ac948, Func Offset: 0x168
	// Line 147, Address: 0x1ac954, Func Offset: 0x174
	// Line 148, Address: 0x1ac958, Func Offset: 0x178
	// Line 150, Address: 0x1ac960, Func Offset: 0x180
	// Line 154, Address: 0x1ac968, Func Offset: 0x188
	// Line 153, Address: 0x1ac96c, Func Offset: 0x18c
	// Line 154, Address: 0x1ac970, Func Offset: 0x190
	// Line 157, Address: 0x1ac974, Func Offset: 0x194
	// Line 158, Address: 0x1ac980, Func Offset: 0x1a0
	// Line 159, Address: 0x1ac990, Func Offset: 0x1b0
	// Line 160, Address: 0x1ac994, Func Offset: 0x1b4
	// Line 161, Address: 0x1ac99c, Func Offset: 0x1bc
	// Line 162, Address: 0x1ac9a0, Func Offset: 0x1c0
	// Line 164, Address: 0x1ac9a8, Func Offset: 0x1c8
	// Line 163, Address: 0x1ac9ac, Func Offset: 0x1cc
	// Line 164, Address: 0x1ac9b0, Func Offset: 0x1d0
	// Line 165, Address: 0x1ac9b4, Func Offset: 0x1d4
	// Line 183, Address: 0x1ac9b8, Func Offset: 0x1d8
	// Func End, Address: 0x1ac9cc, Func Offset: 0x1ec
}

// iSphereIsectVec__FPC7xSpherePC5xVec3P6xIsect
// Start address: 0x1ac9d0
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx)
{
	// Line 96, Address: 0x1ac9d0, Func Offset: 0
	// Line 97, Address: 0x1aca0c, Func Offset: 0x3c
	// Line 98, Address: 0x1aca24, Func Offset: 0x54
	// Line 99, Address: 0x1aca2c, Func Offset: 0x5c
	// Func End, Address: 0x1aca34, Func Offset: 0x64
}

// iMath3Exit__Fv
// Start address: 0x1aca40
void iMath3Exit()
{
	// Line 34, Address: 0x1aca40, Func Offset: 0
	// Func End, Address: 0x1aca48, Func Offset: 0x8
}

// iMath3Init__Fv
// Start address: 0x1aca50
void iMath3Init()
{
	// Line 31, Address: 0x1aca50, Func Offset: 0
	// Func End, Address: 0x1aca58, Func Offset: 0x8
}

