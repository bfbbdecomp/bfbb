typedef struct xFuncPiece;


typedef float32 type_0[0];
typedef int32 type_1[32];
typedef float32 type_2[5];

struct xFuncPiece
{
	float32 coef[5];
	float32 end;
	int32 order;
	xFuncPiece* next;
};

int32 xmath_inited;
int32 xmath_exited;
uint32 rndseed;
float32 cosSinPolynomial[0];

void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float32 newZero);
void xFuncPiece_EndPoints(xFuncPiece* func, float32 pi, float32 pf, float32 fi, float32 ff);
float32 xFuncPiece_Eval(xFuncPiece* func, float32 param, xFuncPiece** iterator);
void xAccelStop(float32& x, float32& v, float32 a, float32 dt);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 maxv);
float32 xAccelMoveTime(float32 dx, float32 a, float32 maxv);
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 endx, float32 maxv);
float32 xDangleClamp(float32 a);
float32 xAngleClampFast(float32 a);
float32 xAngleClamp(float32 a);
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3);
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2);
float32 xurand();
uint32 xrand();
void xsrand(uint32 seed);
float32 xatof(int8* x);
void xMathExit();
void xMathInit();

// xFuncPiece_ShiftPiece__FP10xFuncPieceP10xFuncPiecef
// Start address: 0x1ed190
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float32 newZero)
{
	int32 i;
	int32 j;
	xFuncPiece temp;
	// Line 1007, Address: 0x1ed190, Func Offset: 0
	// Line 1000, Address: 0x1ed194, Func Offset: 0x4
	// Line 1007, Address: 0x1ed198, Func Offset: 0x8
	// Line 1009, Address: 0x1ed1c4, Func Offset: 0x34
	// Line 1010, Address: 0x1ed1d4, Func Offset: 0x44
	// Line 1012, Address: 0x1ed1f0, Func Offset: 0x60
	// Line 1014, Address: 0x1ed210, Func Offset: 0x80
	// Line 1013, Address: 0x1ed214, Func Offset: 0x84
	// Line 1014, Address: 0x1ed228, Func Offset: 0x98
	// Line 1017, Address: 0x1ed238, Func Offset: 0xa8
	// Line 1016, Address: 0x1ed23c, Func Offset: 0xac
	// Line 1017, Address: 0x1ed250, Func Offset: 0xc0
	// Line 1019, Address: 0x1ed258, Func Offset: 0xc8
	// Line 1020, Address: 0x1ed260, Func Offset: 0xd0
	// Line 1022, Address: 0x1ed278, Func Offset: 0xe8
	// Line 1021, Address: 0x1ed27c, Func Offset: 0xec
	// Line 1022, Address: 0x1ed288, Func Offset: 0xf8
	// Line 1023, Address: 0x1ed298, Func Offset: 0x108
	// Line 1024, Address: 0x1ed2a4, Func Offset: 0x114
	// Func End, Address: 0x1ed2ac, Func Offset: 0x11c
}

// xFuncPiece_EndPoints__FP10xFuncPieceffff
// Start address: 0x1ed2b0
void xFuncPiece_EndPoints(xFuncPiece* func, float32 pi, float32 pf, float32 fi, float32 ff)
{
	float32 xfinv;
	// Line 950, Address: 0x1ed2b0, Func Offset: 0
	// Line 951, Address: 0x1ed2b4, Func Offset: 0x4
	// Line 953, Address: 0x1ed2b8, Func Offset: 0x8
	// Line 957, Address: 0x1ed2bc, Func Offset: 0xc
	// Line 950, Address: 0x1ed2c0, Func Offset: 0x10
	// Line 951, Address: 0x1ed2c4, Func Offset: 0x14
	// Line 955, Address: 0x1ed2cc, Func Offset: 0x1c
	// Line 951, Address: 0x1ed2d0, Func Offset: 0x20
	// Line 953, Address: 0x1ed2d4, Func Offset: 0x24
	// Line 955, Address: 0x1ed2d8, Func Offset: 0x28
	// Line 954, Address: 0x1ed2dc, Func Offset: 0x2c
	// Line 957, Address: 0x1ed2e0, Func Offset: 0x30
	// Func End, Address: 0x1ed2ec, Func Offset: 0x3c
}

// xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece
// Start address: 0x1ed2f0
float32 xFuncPiece_Eval(xFuncPiece* func, float32 param, xFuncPiece** iterator)
{
	float32 result;
	int32 i;
	// Line 860, Address: 0x1ed2f0, Func Offset: 0
	// Line 861, Address: 0x1ed330, Func Offset: 0x40
	// Line 862, Address: 0x1ed33c, Func Offset: 0x4c
	// Line 863, Address: 0x1ed344, Func Offset: 0x54
	// Line 865, Address: 0x1ed358, Func Offset: 0x68
	// Line 864, Address: 0x1ed35c, Func Offset: 0x6c
	// Line 865, Address: 0x1ed368, Func Offset: 0x78
	// Line 866, Address: 0x1ed370, Func Offset: 0x80
	// Line 867, Address: 0x1ed378, Func Offset: 0x88
	// Line 868, Address: 0x1ed380, Func Offset: 0x90
	// Line 869, Address: 0x1ed384, Func Offset: 0x94
	// Line 873, Address: 0x1ed390, Func Offset: 0xa0
	// Func End, Address: 0x1ed398, Func Offset: 0xa8
}

// xAccelStop__FRfRfff
// Start address: 0x1ed3a0
void xAccelStop(float32& x, float32& v, float32 a, float32 dt)
{
	uint32 aa;
	float32 oldv;
	// Line 836, Address: 0x1ed3a0, Func Offset: 0
	// Line 837, Address: 0x1ed3a4, Func Offset: 0x4
	// Line 836, Address: 0x1ed3a8, Func Offset: 0x8
	// Line 837, Address: 0x1ed3ac, Func Offset: 0xc
	// Line 836, Address: 0x1ed3b0, Func Offset: 0x10
	// Line 837, Address: 0x1ed3b4, Func Offset: 0x14
	// Line 839, Address: 0x1ed3e4, Func Offset: 0x44
	// Line 840, Address: 0x1ed41c, Func Offset: 0x7c
	// Line 841, Address: 0x1ed420, Func Offset: 0x80
	// Line 840, Address: 0x1ed424, Func Offset: 0x84
	// Line 841, Address: 0x1ed428, Func Offset: 0x88
	// Line 842, Address: 0x1ed438, Func Offset: 0x98
	// Line 847, Address: 0x1ed480, Func Offset: 0xe0
	// Line 842, Address: 0x1ed484, Func Offset: 0xe4
	// Line 847, Address: 0x1ed488, Func Offset: 0xe8
	// Line 848, Address: 0x1ed4e0, Func Offset: 0x140
	// Line 849, Address: 0x1ed4e4, Func Offset: 0x144
	// Line 850, Address: 0x1ed4e8, Func Offset: 0x148
	// Func End, Address: 0x1ed4f0, Func Offset: 0x150
}

// xAccelMove__FRfRffff
// Start address: 0x1ed4f0
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 maxv)
{
	uint32 bn;
	uint32 bp;
	uint32 aa;
	uint32 bn;
	uint32 bp;
	uint32 aa;
	float32 diff;
	float32 dv;
	// Line 786, Address: 0x1ed4f0, Func Offset: 0
	// Line 787, Address: 0x1ed4fc, Func Offset: 0xc
	// Line 788, Address: 0x1ed558, Func Offset: 0x68
	// Line 791, Address: 0x1ed570, Func Offset: 0x80
	// Line 788, Address: 0x1ed574, Func Offset: 0x84
	// Line 791, Address: 0x1ed588, Func Offset: 0x98
	// Line 788, Address: 0x1ed58c, Func Offset: 0x9c
	// Line 792, Address: 0x1ed590, Func Offset: 0xa0
	// Line 788, Address: 0x1ed598, Func Offset: 0xa8
	// Line 790, Address: 0x1ed59c, Func Offset: 0xac
	// Line 792, Address: 0x1ed5a8, Func Offset: 0xb8
	// Line 794, Address: 0x1ed5bc, Func Offset: 0xcc
	// Line 795, Address: 0x1ed5e0, Func Offset: 0xf0
	// Line 796, Address: 0x1ed5e4, Func Offset: 0xf4
	// Line 799, Address: 0x1ed5f0, Func Offset: 0x100
	// Line 800, Address: 0x1ed614, Func Offset: 0x124
	// Line 832, Address: 0x1ed620, Func Offset: 0x130
	// Func End, Address: 0x1ed628, Func Offset: 0x138
}

// xAccelMoveTime__Fffff
// Start address: 0x1ed630
float32 xAccelMoveTime(float32 dx, float32 a, float32 maxv)
{
	float32 time;
	float32 atime;
	float32 adist;
	// Line 768, Address: 0x1ed630, Func Offset: 0
	// Line 765, Address: 0x1ed634, Func Offset: 0x4
	// Line 770, Address: 0x1ed644, Func Offset: 0x14
	// Line 771, Address: 0x1ed650, Func Offset: 0x20
	// Line 773, Address: 0x1ed65c, Func Offset: 0x2c
	// Line 774, Address: 0x1ed680, Func Offset: 0x50
	// Line 777, Address: 0x1ed688, Func Offset: 0x58
	// Line 778, Address: 0x1ed694, Func Offset: 0x64
	// Line 780, Address: 0x1ed698, Func Offset: 0x68
	// Line 781, Address: 0x1ed6a0, Func Offset: 0x70
	// Func End, Address: 0x1ed6a8, Func Offset: 0x78
}

// xAccelMove__FRfRfffff
// Start address: 0x1ed6b0
void xAccelMove(float32& x, float32& v, float32 a, float32 dt, float32 endx, float32 maxv)
{
	float32 offset;
	float32 t1;
	float32 t2;
	float32 oldv;
	float32 dv;
	float32 newv;
	float32 adx;
	float32 diff;
	float32 dx;
	// Line 709, Address: 0x1ed6b0, Func Offset: 0
	// Line 710, Address: 0x1ed6dc, Func Offset: 0x2c
	// Line 713, Address: 0x1ed6f0, Func Offset: 0x40
	// Line 715, Address: 0x1ed778, Func Offset: 0xc8
	// Line 717, Address: 0x1ed784, Func Offset: 0xd4
	// Line 718, Address: 0x1ed7a0, Func Offset: 0xf0
	// Line 721, Address: 0x1ed7c8, Func Offset: 0x118
	// Line 722, Address: 0x1ed7cc, Func Offset: 0x11c
	// Line 723, Address: 0x1ed7d4, Func Offset: 0x124
	// Line 725, Address: 0x1ed7e4, Func Offset: 0x134
	// Line 726, Address: 0x1ed820, Func Offset: 0x170
	// Line 728, Address: 0x1ed834, Func Offset: 0x184
	// Line 729, Address: 0x1ed844, Func Offset: 0x194
	// Line 731, Address: 0x1ed850, Func Offset: 0x1a0
	// Line 732, Address: 0x1ed854, Func Offset: 0x1a4
	// Line 733, Address: 0x1ed874, Func Offset: 0x1c4
	// Line 736, Address: 0x1ed880, Func Offset: 0x1d0
	// Line 738, Address: 0x1ed884, Func Offset: 0x1d4
	// Line 739, Address: 0x1ed890, Func Offset: 0x1e0
	// Line 740, Address: 0x1ed8d0, Func Offset: 0x220
	// Line 743, Address: 0x1ed8d8, Func Offset: 0x228
	// Line 744, Address: 0x1ed8e0, Func Offset: 0x230
	// Line 746, Address: 0x1ed8ec, Func Offset: 0x23c
	// Line 747, Address: 0x1ed924, Func Offset: 0x274
	// Line 748, Address: 0x1ed92c, Func Offset: 0x27c
	// Line 751, Address: 0x1ed938, Func Offset: 0x288
	// Line 752, Address: 0x1ed954, Func Offset: 0x2a4
	// Line 755, Address: 0x1ed960, Func Offset: 0x2b0
	// Line 756, Address: 0x1ed970, Func Offset: 0x2c0
	// Func End, Address: 0x1ed998, Func Offset: 0x2e8
}

// xDangleClamp__Ff
// Start address: 0x1ed9a0
float32 xDangleClamp(float32 a)
{
	float32 b;
	// Line 683, Address: 0x1ed9a0, Func Offset: 0
	// Line 682, Address: 0x1ed9a4, Func Offset: 0x4
	// Line 683, Address: 0x1ed9a8, Func Offset: 0x8
	// Line 682, Address: 0x1ed9ac, Func Offset: 0xc
	// Line 683, Address: 0x1ed9b0, Func Offset: 0x10
	// Line 684, Address: 0x1ed9bc, Func Offset: 0x1c
	// Line 685, Address: 0x1ed9d8, Func Offset: 0x38
	// Line 686, Address: 0x1ed9e0, Func Offset: 0x40
	// Line 687, Address: 0x1eda04, Func Offset: 0x64
	// Line 688, Address: 0x1eda14, Func Offset: 0x74
	// Line 690, Address: 0x1eda18, Func Offset: 0x78
	// Func End, Address: 0x1eda24, Func Offset: 0x84
}

// xAngleClampFast__Ff
// Start address: 0x1eda30
float32 xAngleClampFast(float32 a)
{
	// Line 665, Address: 0x1eda30, Func Offset: 0
	// Line 666, Address: 0x1eda44, Func Offset: 0x14
	// Line 667, Address: 0x1eda4c, Func Offset: 0x1c
	// Line 668, Address: 0x1eda74, Func Offset: 0x44
	// Line 671, Address: 0x1eda78, Func Offset: 0x48
	// Func End, Address: 0x1eda80, Func Offset: 0x50
}

// xAngleClamp__Ff
// Start address: 0x1eda80
float32 xAngleClamp(float32 a)
{
	float32 b;
	// Line 654, Address: 0x1eda80, Func Offset: 0
	// Line 653, Address: 0x1eda84, Func Offset: 0x4
	// Line 654, Address: 0x1eda88, Func Offset: 0x8
	// Line 653, Address: 0x1eda8c, Func Offset: 0xc
	// Line 654, Address: 0x1eda90, Func Offset: 0x10
	// Line 655, Address: 0x1eda9c, Func Offset: 0x1c
	// Line 656, Address: 0x1edab0, Func Offset: 0x30
	// Line 659, Address: 0x1edac0, Func Offset: 0x40
	// Func End, Address: 0x1edacc, Func Offset: 0x4c
}

// xMathSolveCubic__FffffPfPfPf
// Start address: 0x1edad0
uint32 xMathSolveCubic(float32 a, float32 b, float32 c, float32 d, float32* x1, float32* x2, float32* x3)
{
	float32 arecip;
	float32 fA;
	float32 fB;
	float32 fOffset;
	float32 fDiscr;
	float32 fHalfB;
	float32 fTemp;
	float32 fDist;
	float32 fAngle;
	float32 fCos;
	float32 fSin;
	// Line 509, Address: 0x1edad0, Func Offset: 0
	// Line 511, Address: 0x1edad8, Func Offset: 0x8
	// Line 509, Address: 0x1edadc, Func Offset: 0xc
	// Line 511, Address: 0x1edae4, Func Offset: 0x14
	// Line 509, Address: 0x1edae8, Func Offset: 0x18
	// Line 511, Address: 0x1edb00, Func Offset: 0x30
	// Line 512, Address: 0x1edb08, Func Offset: 0x38
	// Line 516, Address: 0x1edb20, Func Offset: 0x50
	// Line 517, Address: 0x1edb38, Func Offset: 0x68
	// Line 518, Address: 0x1edb44, Func Offset: 0x74
	// Line 519, Address: 0x1edb48, Func Offset: 0x78
	// Line 520, Address: 0x1edb4c, Func Offset: 0x7c
	// Line 525, Address: 0x1edb50, Func Offset: 0x80
	// Line 526, Address: 0x1edb58, Func Offset: 0x88
	// Line 525, Address: 0x1edb5c, Func Offset: 0x8c
	// Line 526, Address: 0x1edb68, Func Offset: 0x98
	// Line 525, Address: 0x1edb6c, Func Offset: 0x9c
	// Line 526, Address: 0x1edb70, Func Offset: 0xa0
	// Line 529, Address: 0x1edb84, Func Offset: 0xb4
	// Line 525, Address: 0x1edb88, Func Offset: 0xb8
	// Line 526, Address: 0x1edb8c, Func Offset: 0xbc
	// Line 525, Address: 0x1edba0, Func Offset: 0xd0
	// Line 526, Address: 0x1edba4, Func Offset: 0xd4
	// Line 528, Address: 0x1edba8, Func Offset: 0xd8
	// Line 526, Address: 0x1edbac, Func Offset: 0xdc
	// Line 529, Address: 0x1edbbc, Func Offset: 0xec
	// Line 525, Address: 0x1edbc0, Func Offset: 0xf0
	// Line 529, Address: 0x1edbc4, Func Offset: 0xf4
	// Line 528, Address: 0x1edbc8, Func Offset: 0xf8
	// Line 527, Address: 0x1edbd0, Func Offset: 0x100
	// Line 528, Address: 0x1edbd4, Func Offset: 0x104
	// Line 531, Address: 0x1edbe4, Func Offset: 0x114
	// Line 533, Address: 0x1edc10, Func Offset: 0x140
	// Line 535, Address: 0x1edc24, Func Offset: 0x154
	// Line 536, Address: 0x1edc28, Func Offset: 0x158
	// Line 537, Address: 0x1edc30, Func Offset: 0x160
	// Line 538, Address: 0x1edc44, Func Offset: 0x174
	// Line 540, Address: 0x1edc60, Func Offset: 0x190
	// Line 541, Address: 0x1edc80, Func Offset: 0x1b0
	// Line 542, Address: 0x1edc88, Func Offset: 0x1b8
	// Line 543, Address: 0x1edc9c, Func Offset: 0x1cc
	// Line 545, Address: 0x1edcc0, Func Offset: 0x1f0
	// Line 547, Address: 0x1edce0, Func Offset: 0x210
	// Line 546, Address: 0x1edce4, Func Offset: 0x214
	// Line 547, Address: 0x1edcec, Func Offset: 0x21c
	// Line 549, Address: 0x1edcf4, Func Offset: 0x224
	// Line 551, Address: 0x1edd04, Func Offset: 0x234
	// Line 552, Address: 0x1edd0c, Func Offset: 0x23c
	// Line 551, Address: 0x1edd10, Func Offset: 0x240
	// Line 552, Address: 0x1edd14, Func Offset: 0x244
	// Line 551, Address: 0x1edd18, Func Offset: 0x248
	// Line 552, Address: 0x1edd1c, Func Offset: 0x24c
	// Line 553, Address: 0x1edd7c, Func Offset: 0x2ac
	// Line 554, Address: 0x1edd84, Func Offset: 0x2b4
	// Line 556, Address: 0x1edd90, Func Offset: 0x2c0
	// Line 555, Address: 0x1edd94, Func Offset: 0x2c4
	// Line 556, Address: 0x1edd98, Func Offset: 0x2c8
	// Line 555, Address: 0x1edda0, Func Offset: 0x2d0
	// Line 556, Address: 0x1edda4, Func Offset: 0x2d4
	// Line 558, Address: 0x1edda8, Func Offset: 0x2d8
	// Line 555, Address: 0x1eddac, Func Offset: 0x2dc
	// Line 556, Address: 0x1eddbc, Func Offset: 0x2ec
	// Line 557, Address: 0x1eddc4, Func Offset: 0x2f4
	// Line 556, Address: 0x1eddc8, Func Offset: 0x2f8
	// Line 557, Address: 0x1eddcc, Func Offset: 0x2fc
	// Line 556, Address: 0x1eddd0, Func Offset: 0x300
	// Line 557, Address: 0x1eddd4, Func Offset: 0x304
	// Line 556, Address: 0x1eddd8, Func Offset: 0x308
	// Line 558, Address: 0x1edddc, Func Offset: 0x30c
	// Line 560, Address: 0x1edde4, Func Offset: 0x314
	// Line 561, Address: 0x1edde8, Func Offset: 0x318
	// Line 562, Address: 0x1eddf4, Func Offset: 0x324
	// Line 564, Address: 0x1ede10, Func Offset: 0x340
	// Line 565, Address: 0x1ede28, Func Offset: 0x358
	// Line 566, Address: 0x1ede30, Func Offset: 0x360
	// Line 565, Address: 0x1ede34, Func Offset: 0x364
	// Line 567, Address: 0x1ede38, Func Offset: 0x368
	// Line 565, Address: 0x1ede3c, Func Offset: 0x36c
	// Line 566, Address: 0x1ede40, Func Offset: 0x370
	// Line 565, Address: 0x1ede44, Func Offset: 0x374
	// Line 566, Address: 0x1ede48, Func Offset: 0x378
	// Line 567, Address: 0x1ede4c, Func Offset: 0x37c
	// Line 569, Address: 0x1ede50, Func Offset: 0x380
	// Func End, Address: 0x1ede74, Func Offset: 0x3a4
}

// xMathSolveQuadratic__FfffPfPf
// Start address: 0x1ede80
uint32 xMathSolveQuadratic(float32 a, float32 b, float32 c, float32* x1, float32* x2)
{
	float32 d;
	float32 dx;
	float32 p;
	// Line 463, Address: 0x1ede80, Func Offset: 0
	// Line 464, Address: 0x1ede94, Func Offset: 0x14
	// Line 465, Address: 0x1edea0, Func Offset: 0x20
	// Line 469, Address: 0x1edea8, Func Offset: 0x28
	// Line 468, Address: 0x1edeac, Func Offset: 0x2c
	// Line 469, Address: 0x1edebc, Func Offset: 0x3c
	// Line 470, Address: 0x1edec4, Func Offset: 0x44
	// Line 471, Address: 0x1edec8, Func Offset: 0x48
	// Line 472, Address: 0x1ededc, Func Offset: 0x5c
	// Line 473, Address: 0x1edee8, Func Offset: 0x68
	// Line 475, Address: 0x1edef0, Func Offset: 0x70
	// Line 476, Address: 0x1edef8, Func Offset: 0x78
	// Line 475, Address: 0x1edefc, Func Offset: 0x7c
	// Line 477, Address: 0x1edf04, Func Offset: 0x84
	// Line 475, Address: 0x1edf08, Func Offset: 0x88
	// Line 476, Address: 0x1edf10, Func Offset: 0x90
	// Line 477, Address: 0x1edf14, Func Offset: 0x94
	// Line 478, Address: 0x1edf1c, Func Offset: 0x9c
	// Line 479, Address: 0x1edf24, Func Offset: 0xa4
	// Line 481, Address: 0x1edf28, Func Offset: 0xa8
	// Line 480, Address: 0x1edf2c, Func Offset: 0xac
	// Line 482, Address: 0x1edf30, Func Offset: 0xb0
	// Line 481, Address: 0x1edf34, Func Offset: 0xb4
	// Line 482, Address: 0x1edf3c, Func Offset: 0xbc
	// Line 483, Address: 0x1edf44, Func Offset: 0xc4
	// Line 484, Address: 0x1edf50, Func Offset: 0xd0
	// Line 485, Address: 0x1edf58, Func Offset: 0xd8
	// Line 486, Address: 0x1edf60, Func Offset: 0xe0
	// Line 487, Address: 0x1edf6c, Func Offset: 0xec
	// Line 489, Address: 0x1edf78, Func Offset: 0xf8
	// Line 490, Address: 0x1edf80, Func Offset: 0x100
	// Func End, Address: 0x1edf88, Func Offset: 0x108
}

// xurand__Fv
// Start address: 0x1edf90
float32 xurand()
{
	// Line 402, Address: 0x1edf90, Func Offset: 0
	// Line 403, Address: 0x1edfe0, Func Offset: 0x50
	// Func End, Address: 0x1edfe8, Func Offset: 0x58
}

// xrand__Fv
// Start address: 0x1edff0
uint32 xrand()
{
	// Line 385, Address: 0x1edff0, Func Offset: 0
	// Line 387, Address: 0x1ee008, Func Offset: 0x18
	// Func End, Address: 0x1ee010, Func Offset: 0x20
}

// xsrand__FUi
// Start address: 0x1ee010
void xsrand(uint32 seed)
{
	// Line 373, Address: 0x1ee010, Func Offset: 0
	// Func End, Address: 0x1ee018, Func Offset: 0x8
}

// xatof__FPCc
// Start address: 0x1ee020
float32 xatof(int8* x)
{
	// Line 317, Address: 0x1ee020, Func Offset: 0
	// Func End, Address: 0x1ee028, Func Offset: 0x8
}

// xMathExit__Fv
// Start address: 0x1ee030
void xMathExit()
{
	// Line 67, Address: 0x1ee030, Func Offset: 0
	// Line 70, Address: 0x1ee03c, Func Offset: 0xc
	// Line 71, Address: 0x1ee040, Func Offset: 0x10
	// Func End, Address: 0x1ee048, Func Offset: 0x18
}

// xMathInit__Fv
// Start address: 0x1ee050
void xMathInit()
{
	// Line 46, Address: 0x1ee050, Func Offset: 0
	// Line 54, Address: 0x1ee05c, Func Offset: 0xc
	// Line 49, Address: 0x1ee060, Func Offset: 0x10
	// Line 56, Address: 0x1ee064, Func Offset: 0x14
	// Func End, Address: 0x1ee070, Func Offset: 0x20
}

