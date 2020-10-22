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
	uint8 m_c[4];
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_texIdx[2];
	uint8 m_rotdeg[3];
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	float32 m_cvel[4];
	float32 m_cfl[4];
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

xPar gParPool[2000];
xPar* gParDead;

void xParInit(xPar* p);
void xParFree(xPar* par);
xPar* xParAlloc();
void xParMemInit();

// xParInit__FP4xPar
// Start address: 0x1f4200
void xParInit(xPar* p)
{
	// Line 130, Address: 0x1f4200, Func Offset: 0
	// Line 149, Address: 0x1f4204, Func Offset: 0x4
	// Line 131, Address: 0x1f4208, Func Offset: 0x8
	// Line 154, Address: 0x1f420c, Func Offset: 0xc
	// Line 132, Address: 0x1f4210, Func Offset: 0x10
	// Line 134, Address: 0x1f4214, Func Offset: 0x14
	// Line 135, Address: 0x1f4218, Func Offset: 0x18
	// Line 136, Address: 0x1f421c, Func Offset: 0x1c
	// Line 138, Address: 0x1f4220, Func Offset: 0x20
	// Line 139, Address: 0x1f4224, Func Offset: 0x24
	// Line 141, Address: 0x1f4228, Func Offset: 0x28
	// Line 144, Address: 0x1f422c, Func Offset: 0x2c
	// Line 145, Address: 0x1f4230, Func Offset: 0x30
	// Line 146, Address: 0x1f4234, Func Offset: 0x34
	// Line 147, Address: 0x1f4238, Func Offset: 0x38
	// Line 149, Address: 0x1f423c, Func Offset: 0x3c
	// Line 150, Address: 0x1f4240, Func Offset: 0x40
	// Line 151, Address: 0x1f4244, Func Offset: 0x44
	// Line 152, Address: 0x1f4248, Func Offset: 0x48
	// Line 154, Address: 0x1f424c, Func Offset: 0x4c
	// Line 155, Address: 0x1f4250, Func Offset: 0x50
	// Line 156, Address: 0x1f4254, Func Offset: 0x54
	// Line 157, Address: 0x1f4258, Func Offset: 0x58
	// Line 159, Address: 0x1f425c, Func Offset: 0x5c
	// Line 164, Address: 0x1f4260, Func Offset: 0x60
	// Line 167, Address: 0x1f426c, Func Offset: 0x6c
	// Line 168, Address: 0x1f4270, Func Offset: 0x70
	// Line 169, Address: 0x1f4274, Func Offset: 0x74
	// Line 172, Address: 0x1f4278, Func Offset: 0x78
	// Func End, Address: 0x1f4280, Func Offset: 0x80
}

// xParFree__FP4xPar
// Start address: 0x1f4280
void xParFree(xPar* par)
{
	// Line 96, Address: 0x1f4280, Func Offset: 0
	// Line 99, Address: 0x1f4284, Func Offset: 0x4
	// Line 100, Address: 0x1f428c, Func Offset: 0xc
	// Line 102, Address: 0x1f429c, Func Offset: 0x1c
	// Line 103, Address: 0x1f42a4, Func Offset: 0x24
	// Line 106, Address: 0x1f42b4, Func Offset: 0x34
	// Line 108, Address: 0x1f42bc, Func Offset: 0x3c
	// Line 110, Address: 0x1f42c0, Func Offset: 0x40
	// Line 111, Address: 0x1f42c8, Func Offset: 0x48
	// Line 115, Address: 0x1f42cc, Func Offset: 0x4c
	// Func End, Address: 0x1f42d4, Func Offset: 0x54
}

// xParAlloc__Fv
// Start address: 0x1f42e0
xPar* xParAlloc()
{
	// Line 62, Address: 0x1f42e0, Func Offset: 0
	// Line 65, Address: 0x1f42e4, Func Offset: 0x4
	// Line 67, Address: 0x1f42ec, Func Offset: 0xc
	// Line 68, Address: 0x1f42f4, Func Offset: 0x14
	// Line 74, Address: 0x1f42f8, Func Offset: 0x18
	// Line 75, Address: 0x1f4304, Func Offset: 0x24
	// Line 77, Address: 0x1f4308, Func Offset: 0x28
	// Line 80, Address: 0x1f4310, Func Offset: 0x30
	// Line 81, Address: 0x1f4314, Func Offset: 0x34
	// Line 85, Address: 0x1f4318, Func Offset: 0x38
	// Func End, Address: 0x1f4320, Func Offset: 0x40
}

// xParMemInit__Fv
// Start address: 0x1f4320
void xParMemInit()
{
	int32 i;
	// Line 33, Address: 0x1f4320, Func Offset: 0
	// Line 37, Address: 0x1f4330, Func Offset: 0x10
	// Line 38, Address: 0x1f4334, Func Offset: 0x14
	// Line 40, Address: 0x1f433c, Func Offset: 0x1c
	// Line 42, Address: 0x1f4344, Func Offset: 0x24
	// Line 43, Address: 0x1f4348, Func Offset: 0x28
	// Line 46, Address: 0x1f4350, Func Offset: 0x30
	// Line 45, Address: 0x1f4354, Func Offset: 0x34
	// Line 46, Address: 0x1f4358, Func Offset: 0x38
	// Line 47, Address: 0x1f4364, Func Offset: 0x44
	// Func End, Address: 0x1f436c, Func Offset: 0x4c
}

