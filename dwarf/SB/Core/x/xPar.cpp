typedef struct xPar;
typedef struct xVec3;
typedef struct xParEmitterAsset;


typedef uint8 type_0[4];
typedef uint8 type_1[2];
typedef uint8 type_2[3];
typedef float32 type_3[4];
typedef float32 type_4[4];
typedef xPar type_5[2000];

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	type_0 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_1 m_texIdx;
	type_2 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_3 m_cvel;
	type_4 m_cfl;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xParEmitterAsset
{
};

type_5 gParPool;
xPar* gParDead;

void xParInit(xPar* p);
void xParFree(xPar* par);
xPar* xParAlloc();
void xParMemInit();

// xParInit__FP4xPar
// Start address: 0x1f4200
void xParInit(xPar* p)
{
}

// xParFree__FP4xPar
// Start address: 0x1f4280
void xParFree(xPar* par)
{
}

// xParAlloc__Fv
// Start address: 0x1f42e0
xPar* xParAlloc()
{
}

// xParMemInit__Fv
// Start address: 0x1f4320
void xParMemInit()
{
	int32 i;
}

