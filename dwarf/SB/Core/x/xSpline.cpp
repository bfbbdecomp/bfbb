typedef struct xCoef3;
typedef struct xVec3;
typedef struct xSpline3;
typedef struct xCoef;


typedef float32 type_0[4];
typedef xVec3 type_1[4];
typedef xVec3 type_2[4];
typedef float32 type_3[4];
typedef float32 type_4[4][4];
typedef float32 type_5[3];
typedef float32 type_6[4];
typedef float32 type_7[4];
typedef float32 type_8[4][7];
typedef uint32 type_9[4096];
typedef xVec3 type_10[4];
typedef float32 type_11[2];
typedef float32 type_12[3];
typedef float32 type_13[4];
typedef float32 type_14[4][4];
typedef float32 type_15[4];
typedef float32 type_16[4][7];
typedef float32 type_17[4];
typedef float32 type_18[4];
typedef float32 type_19[4];
typedef float32 type_20[4][4];
typedef float32 type_21[4];

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct xCoef
{
	float32 a[4];
};

float32 sBasisUniformBspline[4][4];
float32 sBasisBezier[4][4];
float32 sBasisHermite[4][4];
uint32 gActiveHeap;
uint32 ourGlobals[4096];

xSpline3* xSpline3_Bezier(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, xVec3* p1, xVec3* p2);
xSpline3* AllocSpline3(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type);
void xSpline3_ArcInit(xSpline3* spl, uint32 sample);
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, xVec3* o);
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, xVec3* o, uint32 iterations);
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, xVec3* o);
xCoef3* CoefSeg3(xSpline3* spl, uint32 seg, xCoef3* tempCoef);
void EvalBspline3(xSpline3* spl, float32 u, uint32 deriv, xVec3* o);
void BasisBspline(float32 N[4], float32* t);
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, xVec3* o);
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend);
void Interpolate_Bspline(xVec3* data, xVec3* control, float32* knots, uint32 nodata);
void Tridiag_Solve(float32* a, float32* b, float32* c, xVec3* d, xVec3* x, int32 n);

// xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3
// Start address: 0x20ab00
xSpline3* xSpline3_Bezier(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, xVec3* p1, xVec3* p2)
{
	xSpline3* spl;
	uint32 i;
	// Line 966, Address: 0x20ab00, Func Offset: 0
	// Line 969, Address: 0x20ab18, Func Offset: 0x18
	// Line 972, Address: 0x20ab28, Func Offset: 0x28
	// Line 969, Address: 0x20ab2c, Func Offset: 0x2c
	// Line 972, Address: 0x20ab30, Func Offset: 0x30
	// Line 975, Address: 0x20ab48, Func Offset: 0x48
	// Line 976, Address: 0x20ab58, Func Offset: 0x58
	// Line 977, Address: 0x20ab98, Func Offset: 0x98
	// Line 979, Address: 0x20aba0, Func Offset: 0xa0
	// Line 980, Address: 0x20abb8, Func Offset: 0xb8
	// Line 981, Address: 0x20abc0, Func Offset: 0xc0
	// Line 982, Address: 0x20abc8, Func Offset: 0xc8
	// Line 981, Address: 0x20abcc, Func Offset: 0xcc
	// Line 980, Address: 0x20abd4, Func Offset: 0xd4
	// Line 981, Address: 0x20abdc, Func Offset: 0xdc
	// Line 980, Address: 0x20abe0, Func Offset: 0xe0
	// Line 981, Address: 0x20abf0, Func Offset: 0xf0
	// Line 982, Address: 0x20ac14, Func Offset: 0x114
	// Line 983, Address: 0x20ac24, Func Offset: 0x124
	// Line 985, Address: 0x20ac28, Func Offset: 0x128
	// Line 986, Address: 0x20ac2c, Func Offset: 0x12c
	// Func End, Address: 0x20ac44, Func Offset: 0x144
}

// AllocSpline3__FP5xVec3PfUiUiUiUi
// Start address: 0x20ac50
xSpline3* AllocSpline3(xVec3* points, float32* time, uint32 numpoints, uint32 numalloc, uint32 flags, uint32 type)
{
	xSpline3* spl;
	// Line 903, Address: 0x20ac50, Func Offset: 0
	// Line 904, Address: 0x20ac8c, Func Offset: 0x3c
	// Line 905, Address: 0x20ac9c, Func Offset: 0x4c
	// Line 906, Address: 0x20aca8, Func Offset: 0x58
	// Line 908, Address: 0x20acb0, Func Offset: 0x60
	// Line 909, Address: 0x20acb4, Func Offset: 0x64
	// Line 910, Address: 0x20acb8, Func Offset: 0x68
	// Line 920, Address: 0x20acc0, Func Offset: 0x70
	// Line 911, Address: 0x20acc4, Func Offset: 0x74
	// Line 912, Address: 0x20accc, Func Offset: 0x7c
	// Line 913, Address: 0x20acd0, Func Offset: 0x80
	// Line 914, Address: 0x20acd4, Func Offset: 0x84
	// Line 915, Address: 0x20acd8, Func Offset: 0x88
	// Line 916, Address: 0x20acdc, Func Offset: 0x8c
	// Line 917, Address: 0x20ace0, Func Offset: 0x90
	// Line 920, Address: 0x20ace4, Func Offset: 0x94
	// Line 921, Address: 0x20ad04, Func Offset: 0xb4
	// Line 924, Address: 0x20ad24, Func Offset: 0xd4
	// Line 925, Address: 0x20ad2c, Func Offset: 0xdc
	// Line 926, Address: 0x20ad48, Func Offset: 0xf8
	// Line 927, Address: 0x20ad60, Func Offset: 0x110
	// Line 928, Address: 0x20ad68, Func Offset: 0x118
	// Line 929, Address: 0x20ad6c, Func Offset: 0x11c
	// Line 931, Address: 0x20ad70, Func Offset: 0x120
	// Line 932, Address: 0x20ad74, Func Offset: 0x124
	// Func End, Address: 0x20ad9c, Func Offset: 0x14c
}

// xSpline3_ArcInit__FP8xSpline3Ui
// Start address: 0x20ada0
void xSpline3_ArcInit(xSpline3* spl, uint32 sample)
{
	uint32 i;
	uint32 seg;
	float32 len;
	float32 arcsum;
	xCoef3 tempCoef;
	xCoef3* coef;
	// Line 764, Address: 0x20ada0, Func Offset: 0
	// Line 766, Address: 0x20adcc, Func Offset: 0x2c
	// Line 768, Address: 0x20add0, Func Offset: 0x30
	// Line 771, Address: 0x20ade0, Func Offset: 0x40
	// Line 773, Address: 0x20ade4, Func Offset: 0x44
	// Line 775, Address: 0x20ae10, Func Offset: 0x70
	// Line 780, Address: 0x20ae30, Func Offset: 0x90
	// Line 779, Address: 0x20ae34, Func Offset: 0x94
	// Line 780, Address: 0x20ae38, Func Offset: 0x98
	// Line 783, Address: 0x20ae48, Func Offset: 0xa8
	// Line 786, Address: 0x20ae58, Func Offset: 0xb8
	// Line 783, Address: 0x20ae5c, Func Offset: 0xbc
	// Line 786, Address: 0x20ae60, Func Offset: 0xc0
	// Line 787, Address: 0x20ae68, Func Offset: 0xc8
	// Line 788, Address: 0x20aee0, Func Offset: 0x140
	// Line 787, Address: 0x20aee8, Func Offset: 0x148
	// Line 788, Address: 0x20aeec, Func Offset: 0x14c
	// Line 789, Address: 0x20aef0, Func Offset: 0x150
	// Line 788, Address: 0x20aef4, Func Offset: 0x154
	// Line 789, Address: 0x20aef8, Func Offset: 0x158
	// Line 788, Address: 0x20aefc, Func Offset: 0x15c
	// Line 789, Address: 0x20af00, Func Offset: 0x160
	// Line 793, Address: 0x20af08, Func Offset: 0x168
	// Line 792, Address: 0x20af10, Func Offset: 0x170
	// Line 793, Address: 0x20af14, Func Offset: 0x174
	// Line 794, Address: 0x20af20, Func Offset: 0x180
	// Func End, Address: 0x20af4c, Func Offset: 0x1ac
}

// xSpline3_EvalArcApprox__FP8xSpline3fUiP5xVec3
// Start address: 0x20af50
float32 xSpline3_EvalArcApprox(xSpline3* spl, float32 s, uint32 deriv, xVec3* o)
{
	// Line 731, Address: 0x20af50, Func Offset: 0
	// Line 732, Address: 0x20af5c, Func Offset: 0xc
	// Line 735, Address: 0x20af68, Func Offset: 0x18
	// Line 740, Address: 0x20af78, Func Offset: 0x28
	// Line 741, Address: 0x20af80, Func Offset: 0x30
	// Line 743, Address: 0x20af88, Func Offset: 0x38
	// Func End, Address: 0x20af98, Func Offset: 0x48
}

// ArcEvalIterate__FP8xSpline3fUiP5xVec3Ui
// Start address: 0x20afa0
float32 ArcEvalIterate(xSpline3* spl, float32 s, uint32 deriv, xVec3* o, uint32 iterations)
{
	xCoef3* coef;
	xCoef3 tempCoef;
	float32 umin;
	float32 umax;
	float32 smin;
	float32 smax;
	float32 utest;
	float32 arctest;
	int32 min;
	int32 max;
	int32 test;
	int32 seg;
	int32 segmul;
	// Line 637, Address: 0x20afa0, Func Offset: 0
	// Line 643, Address: 0x20afa4, Func Offset: 0x4
	// Line 637, Address: 0x20afa8, Func Offset: 0x8
	// Line 643, Address: 0x20afe4, Func Offset: 0x44
	// Line 644, Address: 0x20afe8, Func Offset: 0x48
	// Line 645, Address: 0x20aff4, Func Offset: 0x54
	// Line 646, Address: 0x20b000, Func Offset: 0x60
	// Line 647, Address: 0x20b008, Func Offset: 0x68
	// Line 648, Address: 0x20b020, Func Offset: 0x80
	// Line 650, Address: 0x20b028, Func Offset: 0x88
	// Line 651, Address: 0x20b02c, Func Offset: 0x8c
	// Line 654, Address: 0x20b040, Func Offset: 0xa0
	// Line 655, Address: 0x20b050, Func Offset: 0xb0
	// Line 656, Address: 0x20b054, Func Offset: 0xb4
	// Line 657, Address: 0x20b098, Func Offset: 0xf8
	// Line 658, Address: 0x20b0e8, Func Offset: 0x148
	// Line 659, Address: 0x20b110, Func Offset: 0x170
	// Line 660, Address: 0x20b114, Func Offset: 0x174
	// Line 659, Address: 0x20b118, Func Offset: 0x178
	// Line 660, Address: 0x20b11c, Func Offset: 0x17c
	// Line 663, Address: 0x20b140, Func Offset: 0x1a0
	// Line 666, Address: 0x20b14c, Func Offset: 0x1ac
	// Line 667, Address: 0x20b158, Func Offset: 0x1b8
	// Line 668, Address: 0x20b16c, Func Offset: 0x1cc
	// Line 669, Address: 0x20b180, Func Offset: 0x1e0
	// Line 670, Address: 0x20b18c, Func Offset: 0x1ec
	// Line 671, Address: 0x20b19c, Func Offset: 0x1fc
	// Line 675, Address: 0x20b1b0, Func Offset: 0x210
	// Line 676, Address: 0x20b1b4, Func Offset: 0x214
	// Line 678, Address: 0x20b1b8, Func Offset: 0x218
	// Line 679, Address: 0x20b1c0, Func Offset: 0x220
	// Line 680, Address: 0x20b1c8, Func Offset: 0x228
	// Line 679, Address: 0x20b1cc, Func Offset: 0x22c
	// Line 680, Address: 0x20b1d0, Func Offset: 0x230
	// Line 679, Address: 0x20b1d4, Func Offset: 0x234
	// Line 680, Address: 0x20b1dc, Func Offset: 0x23c
	// Line 681, Address: 0x20b1e4, Func Offset: 0x244
	// Line 682, Address: 0x20b1f0, Func Offset: 0x250
	// Line 684, Address: 0x20b1f4, Func Offset: 0x254
	// Line 685, Address: 0x20b200, Func Offset: 0x260
	// Line 686, Address: 0x20b204, Func Offset: 0x264
	// Line 688, Address: 0x20b208, Func Offset: 0x268
	// Line 689, Address: 0x20b20c, Func Offset: 0x26c
	// Line 692, Address: 0x20b21c, Func Offset: 0x27c
	// Line 694, Address: 0x20b230, Func Offset: 0x290
	// Line 695, Address: 0x20b238, Func Offset: 0x298
	// Line 696, Address: 0x20b250, Func Offset: 0x2b0
	// Line 697, Address: 0x20b268, Func Offset: 0x2c8
	// Line 698, Address: 0x20b284, Func Offset: 0x2e4
	// Line 701, Address: 0x20b288, Func Offset: 0x2e8
	// Line 702, Address: 0x20b29c, Func Offset: 0x2fc
	// Line 703, Address: 0x20b2b0, Func Offset: 0x310
	// Func End, Address: 0x20b2e8, Func Offset: 0x348
}

// xSpline3_EvalSeg__FP8xSpline3fUiP5xVec3
// Start address: 0x20b2f0
void xSpline3_EvalSeg(xSpline3* spl, float32 u, uint32 deriv, xVec3* o)
{
	xCoef3 tempCoef;
	uint32 seg;
	// Line 572, Address: 0x20b2f0, Func Offset: 0
	// Line 577, Address: 0x20b2f4, Func Offset: 0x4
	// Line 572, Address: 0x20b2f8, Func Offset: 0x8
	// Line 577, Address: 0x20b318, Func Offset: 0x28
	// Line 578, Address: 0x20b324, Func Offset: 0x34
	// Line 579, Address: 0x20b32c, Func Offset: 0x3c
	// Line 580, Address: 0x20b334, Func Offset: 0x44
	// Line 585, Address: 0x20b338, Func Offset: 0x48
	// Line 586, Address: 0x20b350, Func Offset: 0x60
	// Line 587, Address: 0x20b358, Func Offset: 0x68
	// Line 588, Address: 0x20b39c, Func Offset: 0xac
	// Line 590, Address: 0x20b3a8, Func Offset: 0xb8
	// Line 591, Address: 0x20b3ac, Func Offset: 0xbc
	// Line 592, Address: 0x20b3b8, Func Offset: 0xc8
	// Line 593, Address: 0x20b3bc, Func Offset: 0xcc
	// Line 595, Address: 0x20b3c0, Func Offset: 0xd0
	// Line 596, Address: 0x20b3ec, Func Offset: 0xfc
	// Line 597, Address: 0x20b3f0, Func Offset: 0x100
	// Line 598, Address: 0x20b414, Func Offset: 0x124
	// Line 599, Address: 0x20b41c, Func Offset: 0x12c
	// Line 598, Address: 0x20b424, Func Offset: 0x134
	// Line 600, Address: 0x20b42c, Func Offset: 0x13c
	// Line 598, Address: 0x20b448, Func Offset: 0x158
	// Line 600, Address: 0x20b44c, Func Offset: 0x15c
	// Line 605, Address: 0x20b514, Func Offset: 0x224
	// Line 606, Address: 0x20b528, Func Offset: 0x238
	// Line 608, Address: 0x20b53c, Func Offset: 0x24c
	// Line 606, Address: 0x20b558, Func Offset: 0x268
	// Line 608, Address: 0x20b55c, Func Offset: 0x26c
	// Line 613, Address: 0x20b624, Func Offset: 0x334
	// Line 616, Address: 0x20b638, Func Offset: 0x348
	// Func End, Address: 0x20b654, Func Offset: 0x364
}

// CoefSeg3__FP8xSpline3UiP6xCoef3
// Start address: 0x20b660
xCoef3* CoefSeg3(xSpline3* spl, uint32 seg, xCoef3* tempCoef)
{
	float32 N[4][7];
	// Line 534, Address: 0x20b660, Func Offset: 0
	// Line 537, Address: 0x20b664, Func Offset: 0x4
	// Line 534, Address: 0x20b668, Func Offset: 0x8
	// Line 537, Address: 0x20b684, Func Offset: 0x24
	// Line 539, Address: 0x20b6b8, Func Offset: 0x58
	// Line 542, Address: 0x20b6dc, Func Offset: 0x7c
	// Line 539, Address: 0x20b6f4, Func Offset: 0x94
	// Line 542, Address: 0x20b6f8, Func Offset: 0x98
	// Line 547, Address: 0x20b7c4, Func Offset: 0x164
	// Line 548, Address: 0x20b7cc, Func Offset: 0x16c
	// Line 547, Address: 0x20b7d4, Func Offset: 0x174
	// Line 549, Address: 0x20b7dc, Func Offset: 0x17c
	// Line 547, Address: 0x20b7f4, Func Offset: 0x194
	// Line 549, Address: 0x20b7f8, Func Offset: 0x198
	// Line 554, Address: 0x20b8c4, Func Offset: 0x264
	// Line 555, Address: 0x20b8cc, Func Offset: 0x26c
	// Line 556, Address: 0x20b8d0, Func Offset: 0x270
	// Line 557, Address: 0x20b8f0, Func Offset: 0x290
	// Line 556, Address: 0x20b900, Func Offset: 0x2a0
	// Line 557, Address: 0x20b904, Func Offset: 0x2a4
	// Line 562, Address: 0x20b9d0, Func Offset: 0x370
	// Line 564, Address: 0x20ba94, Func Offset: 0x434
	// Line 565, Address: 0x20ba98, Func Offset: 0x438
	// Line 566, Address: 0x20baa0, Func Offset: 0x440
	// Func End, Address: 0x20babc, Func Offset: 0x45c
}

// EvalBspline3__FP8xSpline3fUiP5xVec3
// Start address: 0x20bac0
void EvalBspline3(xSpline3* spl, float32 u, uint32 deriv, xVec3* o)
{
	float32 N[4][7];
	xCoef3 coef;
	// Line 513, Address: 0x20bac0, Func Offset: 0
	// Line 516, Address: 0x20bac8, Func Offset: 0x8
	// Line 513, Address: 0x20bacc, Func Offset: 0xc
	// Line 516, Address: 0x20bad4, Func Offset: 0x14
	// Line 513, Address: 0x20bad8, Func Offset: 0x18
	// Line 516, Address: 0x20baf0, Func Offset: 0x30
	// Line 517, Address: 0x20bb28, Func Offset: 0x68
	// Line 522, Address: 0x20bb84, Func Offset: 0xc4
	// Line 523, Address: 0x20bba0, Func Offset: 0xe0
	// Line 522, Address: 0x20bbb0, Func Offset: 0xf0
	// Line 523, Address: 0x20bbb4, Func Offset: 0xf4
	// Line 528, Address: 0x20bc7c, Func Offset: 0x1bc
	// Line 529, Address: 0x20bc90, Func Offset: 0x1d0
	// Func End, Address: 0x20bcb0, Func Offset: 0x1f0
}

// BasisBspline__FPA4_fPf
// Start address: 0x20bcb0
void BasisBspline(float32 N[4], float32* t)
{
	uint32 i;
	uint32 k;
	uint32 c;
	float32 d1;
	float32 d2;
	float32 Ntemp[4];
	// Line 462, Address: 0x20bcb0, Func Offset: 0
	// Line 466, Address: 0x20bcb4, Func Offset: 0x4
	// Line 462, Address: 0x20bcb8, Func Offset: 0x8
	// Line 475, Address: 0x20bcbc, Func Offset: 0xc
	// Line 462, Address: 0x20bcc0, Func Offset: 0x10
	// Line 475, Address: 0x20bcc4, Func Offset: 0x14
	// Line 462, Address: 0x20bcc8, Func Offset: 0x18
	// Line 475, Address: 0x20bccc, Func Offset: 0x1c
	// Line 462, Address: 0x20bcd0, Func Offset: 0x20
	// Line 466, Address: 0x20bce0, Func Offset: 0x30
	// Line 475, Address: 0x20bce4, Func Offset: 0x34
	// Line 466, Address: 0x20bce8, Func Offset: 0x38
	// Line 478, Address: 0x20bd00, Func Offset: 0x50
	// Line 476, Address: 0x20bd0c, Func Offset: 0x5c
	// Line 477, Address: 0x20bd40, Func Offset: 0x90
	// Line 478, Address: 0x20bd6c, Func Offset: 0xbc
	// Line 479, Address: 0x20bd98, Func Offset: 0xe8
	// Line 481, Address: 0x20bdc0, Func Offset: 0x110
	// Line 484, Address: 0x20bde0, Func Offset: 0x130
	// Line 482, Address: 0x20bde4, Func Offset: 0x134
	// Line 484, Address: 0x20bde8, Func Offset: 0x138
	// Line 482, Address: 0x20bdec, Func Offset: 0x13c
	// Line 483, Address: 0x20be04, Func Offset: 0x154
	// Line 484, Address: 0x20be3c, Func Offset: 0x18c
	// Line 489, Address: 0x20be48, Func Offset: 0x198
	// Line 485, Address: 0x20be4c, Func Offset: 0x19c
	// Line 489, Address: 0x20be50, Func Offset: 0x1a0
	// Line 488, Address: 0x20be54, Func Offset: 0x1a4
	// Line 485, Address: 0x20be58, Func Offset: 0x1a8
	// Line 486, Address: 0x20be5c, Func Offset: 0x1ac
	// Line 487, Address: 0x20be64, Func Offset: 0x1b4
	// Line 488, Address: 0x20be6c, Func Offset: 0x1bc
	// Line 489, Address: 0x20be74, Func Offset: 0x1c4
	// Line 490, Address: 0x20be90, Func Offset: 0x1e0
	// Func End, Address: 0x20beb4, Func Offset: 0x204
}

// EvalCoef3__FP6xCoef3fUiP5xVec3
// Start address: 0x20bec0
void EvalCoef3(xCoef3* coef, float32 u, uint32 deriv, xVec3* o)
{
	// Line 318, Address: 0x20bec0, Func Offset: 0
	// Line 320, Address: 0x20bef0, Func Offset: 0x30
	// Line 321, Address: 0x20bf1c, Func Offset: 0x5c
	// Line 322, Address: 0x20bf48, Func Offset: 0x88
	// Line 323, Address: 0x20bf70, Func Offset: 0xb0
	// Line 325, Address: 0x20bf78, Func Offset: 0xb8
	// Line 326, Address: 0x20bfac, Func Offset: 0xec
	// Line 327, Address: 0x20bfd0, Func Offset: 0x110
	// Line 328, Address: 0x20bff0, Func Offset: 0x130
	// Line 330, Address: 0x20bff8, Func Offset: 0x138
	// Line 331, Address: 0x20c024, Func Offset: 0x164
	// Line 332, Address: 0x20c03c, Func Offset: 0x17c
	// Line 333, Address: 0x20c050, Func Offset: 0x190
	// Line 335, Address: 0x20c058, Func Offset: 0x198
	// Line 336, Address: 0x20c070, Func Offset: 0x1b0
	// Line 337, Address: 0x20c07c, Func Offset: 0x1bc
	// Line 338, Address: 0x20c084, Func Offset: 0x1c4
	// Line 339, Address: 0x20c08c, Func Offset: 0x1cc
	// Line 340, Address: 0x20c090, Func Offset: 0x1d0
	// Line 341, Address: 0x20c094, Func Offset: 0x1d4
	// Line 342, Address: 0x20c098, Func Offset: 0x1d8
	// Line 344, Address: 0x20c09c, Func Offset: 0x1dc
	// Line 345, Address: 0x20c0a0, Func Offset: 0x1e0
	// Func End, Address: 0x20c0a8, Func Offset: 0x1e8
}

// ArcLength3__FP6xCoef3ff
// Start address: 0x20c0b0
float32 ArcLength3(xCoef3* coef, float32 ustart, float32 uend)
{
	uint32 i;
	float32 A;
	float32 B;
	float32 C;
	float32 D;
	float32 E;
	float32 h;
	float32 sum;
	float32 u;
	// Line 254, Address: 0x20c0b0, Func Offset: 0
	// Line 271, Address: 0x20c0b4, Func Offset: 0x4
	// Line 254, Address: 0x20c0b8, Func Offset: 0x8
	// Line 279, Address: 0x20c0bc, Func Offset: 0xc
	// Line 271, Address: 0x20c0c0, Func Offset: 0x10
	// Line 254, Address: 0x20c0c4, Func Offset: 0x14
	// Line 275, Address: 0x20c0c8, Func Offset: 0x18
	// Line 271, Address: 0x20c0d0, Func Offset: 0x20
	// Line 279, Address: 0x20c0d4, Func Offset: 0x24
	// Line 271, Address: 0x20c0d8, Func Offset: 0x28
	// Line 275, Address: 0x20c0f0, Func Offset: 0x40
	// Line 271, Address: 0x20c104, Func Offset: 0x54
	// Line 275, Address: 0x20c108, Func Offset: 0x58
	// Line 279, Address: 0x20c10c, Func Offset: 0x5c
	// Line 297, Address: 0x20c114, Func Offset: 0x64
	// Line 301, Address: 0x20c118, Func Offset: 0x68
	// Line 275, Address: 0x20c11c, Func Offset: 0x6c
	// Line 279, Address: 0x20c120, Func Offset: 0x70
	// Line 275, Address: 0x20c134, Func Offset: 0x84
	// Line 286, Address: 0x20c138, Func Offset: 0x88
	// Line 290, Address: 0x20c13c, Func Offset: 0x8c
	// Line 279, Address: 0x20c140, Func Offset: 0x90
	// Line 286, Address: 0x20c14c, Func Offset: 0x9c
	// Line 279, Address: 0x20c150, Func Offset: 0xa0
	// Line 290, Address: 0x20c158, Func Offset: 0xa8
	// Line 279, Address: 0x20c15c, Func Offset: 0xac
	// Line 286, Address: 0x20c160, Func Offset: 0xb0
	// Line 290, Address: 0x20c168, Func Offset: 0xb8
	// Line 297, Address: 0x20c16c, Func Offset: 0xbc
	// Line 290, Address: 0x20c174, Func Offset: 0xc4
	// Line 297, Address: 0x20c178, Func Offset: 0xc8
	// Line 286, Address: 0x20c17c, Func Offset: 0xcc
	// Line 299, Address: 0x20c180, Func Offset: 0xd0
	// Line 298, Address: 0x20c184, Func Offset: 0xd4
	// Line 303, Address: 0x20c188, Func Offset: 0xd8
	// Line 302, Address: 0x20c190, Func Offset: 0xe0
	// Line 303, Address: 0x20c1d0, Func Offset: 0x120
	// Line 305, Address: 0x20c200, Func Offset: 0x150
	// Line 306, Address: 0x20c210, Func Offset: 0x160
	// Line 307, Address: 0x20c27c, Func Offset: 0x1cc
	// Func End, Address: 0x20c284, Func Offset: 0x1d4
}

// Interpolate_Bspline__FP5xVec3P5xVec3PfUi
// Start address: 0x20c290
void Interpolate_Bspline(xVec3* data, xVec3* control, float32* knots, uint32 nodata)
{
	uint32 i;
	float32* alpha;
	float32* beta;
	float32* gamma;
	float32 t1;
	float32 t2;
	float32 t3;
	float32 t4;
	float32 t5;
	// Line 209, Address: 0x20c290, Func Offset: 0
	// Line 214, Address: 0x20c2d4, Func Offset: 0x44
	// Line 215, Address: 0x20c2e4, Func Offset: 0x54
	// Line 216, Address: 0x20c2f0, Func Offset: 0x60
	// Line 215, Address: 0x20c2f4, Func Offset: 0x64
	// Line 216, Address: 0x20c2f8, Func Offset: 0x68
	// Line 218, Address: 0x20c300, Func Offset: 0x70
	// Line 219, Address: 0x20c304, Func Offset: 0x74
	// Line 218, Address: 0x20c308, Func Offset: 0x78
	// Line 216, Address: 0x20c30c, Func Offset: 0x7c
	// Line 218, Address: 0x20c310, Func Offset: 0x80
	// Line 219, Address: 0x20c314, Func Offset: 0x84
	// Line 222, Address: 0x20c31c, Func Offset: 0x8c
	// Line 220, Address: 0x20c320, Func Offset: 0x90
	// Line 219, Address: 0x20c324, Func Offset: 0x94
	// Line 220, Address: 0x20c328, Func Offset: 0x98
	// Line 222, Address: 0x20c32c, Func Offset: 0x9c
	// Line 236, Address: 0x20c350, Func Offset: 0xc0
	// Line 224, Address: 0x20c354, Func Offset: 0xc4
	// Line 236, Address: 0x20c358, Func Offset: 0xc8
	// Line 227, Address: 0x20c35c, Func Offset: 0xcc
	// Line 226, Address: 0x20c360, Func Offset: 0xd0
	// Line 225, Address: 0x20c364, Func Offset: 0xd4
	// Line 228, Address: 0x20c368, Func Offset: 0xd8
	// Line 235, Address: 0x20c370, Func Offset: 0xe0
	// Line 231, Address: 0x20c378, Func Offset: 0xe8
	// Line 230, Address: 0x20c380, Func Offset: 0xf0
	// Line 231, Address: 0x20c388, Func Offset: 0xf8
	// Line 230, Address: 0x20c394, Func Offset: 0x104
	// Line 231, Address: 0x20c398, Func Offset: 0x108
	// Line 232, Address: 0x20c3a0, Func Offset: 0x110
	// Line 231, Address: 0x20c3a4, Func Offset: 0x114
	// Line 232, Address: 0x20c3ac, Func Offset: 0x11c
	// Line 231, Address: 0x20c3b0, Func Offset: 0x120
	// Line 232, Address: 0x20c3b4, Func Offset: 0x124
	// Line 233, Address: 0x20c3b8, Func Offset: 0x128
	// Line 234, Address: 0x20c3c8, Func Offset: 0x138
	// Line 235, Address: 0x20c3cc, Func Offset: 0x13c
	// Line 234, Address: 0x20c3d0, Func Offset: 0x140
	// Line 235, Address: 0x20c3d8, Func Offset: 0x148
	// Line 236, Address: 0x20c3ec, Func Offset: 0x15c
	// Line 239, Address: 0x20c3f8, Func Offset: 0x168
	// Line 241, Address: 0x20c414, Func Offset: 0x184
	// Line 242, Address: 0x20c420, Func Offset: 0x190
	// Line 241, Address: 0x20c430, Func Offset: 0x1a0
	// Line 242, Address: 0x20c444, Func Offset: 0x1b4
	// Line 244, Address: 0x20c45c, Func Offset: 0x1cc
	// Line 245, Address: 0x20c468, Func Offset: 0x1d8
	// Line 246, Address: 0x20c474, Func Offset: 0x1e4
	// Line 247, Address: 0x20c480, Func Offset: 0x1f0
	// Func End, Address: 0x20c4ac, Func Offset: 0x21c
}

// Tridiag_Solve__FPfPfPfP5xVec3P5xVec3i
// Start address: 0x20c4b0
void Tridiag_Solve(float32* a, float32* b, float32* c, xVec3* d, xVec3* x, int32 n)
{
	int32 j;
	float32 beta;
	float32* gamma;
	xVec3* delta;
	// Line 101, Address: 0x20c4b0, Func Offset: 0
	// Line 106, Address: 0x20c4f8, Func Offset: 0x48
	// Line 107, Address: 0x20c504, Func Offset: 0x54
	// Line 106, Address: 0x20c508, Func Offset: 0x58
	// Line 107, Address: 0x20c50c, Func Offset: 0x5c
	// Line 110, Address: 0x20c51c, Func Offset: 0x6c
	// Line 107, Address: 0x20c520, Func Offset: 0x70
	// Line 110, Address: 0x20c524, Func Offset: 0x74
	// Line 112, Address: 0x20c528, Func Offset: 0x78
	// Line 110, Address: 0x20c52c, Func Offset: 0x7c
	// Line 111, Address: 0x20c534, Func Offset: 0x84
	// Line 112, Address: 0x20c564, Func Offset: 0xb4
	// Line 115, Address: 0x20c590, Func Offset: 0xe0
	// Line 114, Address: 0x20c594, Func Offset: 0xe4
	// Line 115, Address: 0x20c598, Func Offset: 0xe8
	// Line 114, Address: 0x20c59c, Func Offset: 0xec
	// Line 117, Address: 0x20c5a0, Func Offset: 0xf0
	// Line 114, Address: 0x20c5a4, Func Offset: 0xf4
	// Line 116, Address: 0x20c5a8, Func Offset: 0xf8
	// Line 115, Address: 0x20c5ac, Func Offset: 0xfc
	// Line 117, Address: 0x20c5b0, Func Offset: 0x100
	// Line 114, Address: 0x20c5b4, Func Offset: 0x104
	// Line 116, Address: 0x20c5b8, Func Offset: 0x108
	// Line 114, Address: 0x20c5c0, Func Offset: 0x110
	// Line 115, Address: 0x20c5c4, Func Offset: 0x114
	// Line 116, Address: 0x20c5cc, Func Offset: 0x11c
	// Line 117, Address: 0x20c630, Func Offset: 0x180
	// Line 121, Address: 0x20c640, Func Offset: 0x190
	// Line 117, Address: 0x20c644, Func Offset: 0x194
	// Line 120, Address: 0x20c650, Func Offset: 0x1a0
	// Line 117, Address: 0x20c654, Func Offset: 0x1a4
	// Line 120, Address: 0x20c658, Func Offset: 0x1a8
	// Line 121, Address: 0x20c668, Func Offset: 0x1b8
	// Line 124, Address: 0x20c698, Func Offset: 0x1e8
	// Line 123, Address: 0x20c69c, Func Offset: 0x1ec
	// Line 124, Address: 0x20c6f0, Func Offset: 0x240
	// Line 126, Address: 0x20c6f8, Func Offset: 0x248
	// Line 124, Address: 0x20c6fc, Func Offset: 0x24c
	// Line 126, Address: 0x20c704, Func Offset: 0x254
	// Line 127, Address: 0x20c710, Func Offset: 0x260
	// Line 128, Address: 0x20c71c, Func Offset: 0x26c
	// Func End, Address: 0x20c748, Func Offset: 0x298
}

