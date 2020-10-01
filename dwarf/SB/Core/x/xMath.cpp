typedef struct xFuncPiece;


typedef f32 type_0[0];
typedef s32 type_1[32];
typedef f32 type_2[5];

struct xFuncPiece
{
	type_2 coef;
	f32 end;
	s32 order;
	xFuncPiece* next;
};

s32 xmath_inited;
s32 xmath_exited;
u32 rndseed;
type_0 cosSinPolynomial;

void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, f32 newZero);
void xFuncPiece_EndPoints(xFuncPiece* func, f32 pi, f32 pf, f32 fi, f32 ff);
f32 xFuncPiece_Eval(xFuncPiece* func, f32 param, xFuncPiece** iterator);
void xAccelStop(f32& x, f32& v, f32 a, f32 dt);
void xAccelMove(f32& x, f32& v, f32 a, f32 dt, f32 maxv);
f32 xAccelMoveTime(f32 dx, f32 a, f32 maxv);
void xAccelMove(f32& x, f32& v, f32 a, f32 dt, f32 endx, f32 maxv);
f32 xDangleClamp(f32 a);
f32 xAngleClampFast(f32 a);
f32 xAngleClamp(f32 a);
u32 xMathSolveCubic(f32 a, f32 b, f32 c, f32 d, f32* x1, f32* x2, f32* x3);
u32 xMathSolveQuadratic(f32 a, f32 b, f32 c, f32* x1, f32* x2);
f32 xurand();
u32 xrand();
void xsrand(u32 seed);
f32 xatof(s8* x);
void xMathExit();
void xMathInit();

// xFuncPiece_ShiftPiece__FP10xFuncPieceP10xFuncPiecef
// Start address: 0x1ed190
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, f32 newZero)
{
	s32 i;
	s32 j;
	xFuncPiece temp;
}

// xFuncPiece_EndPoints__FP10xFuncPieceffff
// Start address: 0x1ed2b0
void xFuncPiece_EndPoints(xFuncPiece* func, f32 pi, f32 pf, f32 fi, f32 ff)
{
	f32 xfinv;
}

// xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece
// Start address: 0x1ed2f0
f32 xFuncPiece_Eval(xFuncPiece* func, f32 param, xFuncPiece** iterator)
{
	f32 result;
	s32 i;
}

// xAccelStop__FRfRfff
// Start address: 0x1ed3a0
void xAccelStop(f32& x, f32& v, f32 a, f32 dt)
{
	u32 aa;
	f32 oldv;
}

// xAccelMove__FRfRffff
// Start address: 0x1ed4f0
void xAccelMove(f32& x, f32& v, f32 a, f32 dt, f32 maxv)
{
	u32 bn;
	u32 bp;
	u32 aa;
	u32 bn;
	u32 bp;
	u32 aa;
	f32 diff;
	f32 dv;
}

// xAccelMoveTime__Fffff
// Start address: 0x1ed630
f32 xAccelMoveTime(f32 dx, f32 a, f32 maxv)
{
	f32 time;
	f32 atime;
	f32 adist;
}

// xAccelMove__FRfRfffff
// Start address: 0x1ed6b0
void xAccelMove(f32& x, f32& v, f32 a, f32 dt, f32 endx, f32 maxv)
{
	f32 offset;
	f32 t1;
	f32 t2;
	f32 oldv;
	f32 dv;
	f32 newv;
	f32 adx;
	f32 diff;
	f32 dx;
}

// xDangleClamp__Ff
// Start address: 0x1ed9a0
f32 xDangleClamp(f32 a)
{
	f32 b;
}

// xAngleClampFast__Ff
// Start address: 0x1eda30
f32 xAngleClampFast(f32 a)
{
}

// xAngleClamp__Ff
// Start address: 0x1eda80
f32 xAngleClamp(f32 a)
{
	f32 b;
}

// xMathSolveCubic__FffffPfPfPf
// Start address: 0x1edad0
u32 xMathSolveCubic(f32 a, f32 b, f32 c, f32 d, f32* x1, f32* x2, f32* x3)
{
	f32 arecip;
	f32 fA;
	f32 fB;
	f32 fOffset;
	f32 fDiscr;
	f32 fHalfB;
	f32 fTemp;
	f32 fDist;
	f32 fAngle;
	f32 fCos;
	f32 fSin;
}

// xMathSolveQuadratic__FfffPfPf
// Start address: 0x1ede80
u32 xMathSolveQuadratic(f32 a, f32 b, f32 c, f32* x1, f32* x2)
{
	f32 d;
	f32 dx;
	f32 p;
}

// xurand__Fv
// Start address: 0x1edf90
f32 xurand()
{
}

// xrand__Fv
// Start address: 0x1edff0
u32 xrand()
{
}

// xsrand__FUi
// Start address: 0x1ee010
void xsrand(u32 seed)
{
}

// xatof__FPCc
// Start address: 0x1ee020
f32 xatof(s8* x)
{
}

// xMathExit__Fv
// Start address: 0x1ee030
void xMathExit()
{
}

// xMathInit__Fv
// Start address: 0x1ee050
void xMathInit()
{
}

