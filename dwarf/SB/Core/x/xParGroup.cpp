typedef struct xPar;
typedef struct xParGroup;
typedef struct xParCmdTex;
typedef struct xVec3;
typedef struct xParEmitterAsset;
typedef struct _tagEmitRect;
typedef struct xPEEntBound;
typedef struct _tagEmitLine;
typedef struct _tagEmitVolume;
typedef struct _tagEmitOffsetPoint;
typedef struct xPEVCyl;
typedef struct xPEEntBone;
typedef struct xPECircle;
typedef struct xBaseAsset;
typedef struct _tagEmitSphere;

typedef void(*type_0)(void*, xParGroup*);

typedef uint8 type_1[4];
typedef uint8 type_2[2];
typedef uint8 type_3[3];
typedef float32 type_4[4];
typedef xParGroup* type_5[255];
typedef float32 type_6[4];

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

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_priority;
	uint8 m_flags;
	uint8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	void(*draw)(void*, xParGroup*);
	xParCmdTex* m_cmdTex;
};

struct xParCmdTex
{
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xParEmitterAsset : xBaseAsset
{
	uint8 emit_flags;
	uint8 emit_type;
	uint16 pad;
	uint32 propID;
	union
	{
		xPECircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
		xPEVCyl e_vcyl;
		xPEEntBone e_entbone;
		xPEEntBound e_entbound;
	};
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint32 cull_mode;
	float32 cull_dist_sqr;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xPEEntBone
{
	uint8 flags;
	uint8 type;
	uint8 bone;
	uint8 pad1;
	xVec3 offset;
	float32 radius;
	float32 deflection;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagEmitSphere
{
	float32 radius;
};

int32 sParGroupRegTableInit;
int32 sParGroupRegTableCount;
xParGroup* sParGroupRegTable[255];

void xParGroupKillPar(xParGroup* ps, xPar* p);
xPar* xParGroupAddPar(xParGroup* ps);
void xParGroupAnimate(xParGroup* ps, float32 dt);
void xParGroupKillAllParticles(xParGroup* ps);
void xParGroupSetActive(xParGroup* ps, uint32 isActive);
void xParGroupUnregister(xParGroup* ps);
void xParGroupRegister(xParGroup* ps);
void xParGroupSetPriority(xParGroup* ps, uint8 val);
void xParGroupSetVisibility(xParGroup* ps, int32 vis);
void xParGroupSetBack2Life(xParGroup* ps, int32 b2l);
void xParGroupSetAging(xParGroup* ps, int32 age);
void xParGroupInit(xParGroup* ps);

// xParGroupKillPar__FP9xParGroupP4xPar
// Start address: 0x1f6180
void xParGroupKillPar(xParGroup* ps, xPar* p)
{
	// Line 524, Address: 0x1f6180, Func Offset: 0
	// Line 552, Address: 0x1f6188, Func Offset: 0x8
	// Line 555, Address: 0x1f6194, Func Offset: 0x14
	// Line 556, Address: 0x1f61a0, Func Offset: 0x20
	// Line 557, Address: 0x1f61a8, Func Offset: 0x28
	// Line 560, Address: 0x1f61b0, Func Offset: 0x30
	// Line 562, Address: 0x1f61b4, Func Offset: 0x34
	// Line 565, Address: 0x1f61c4, Func Offset: 0x44
	// Line 566, Address: 0x1f61cc, Func Offset: 0x4c
	// Line 567, Address: 0x1f61dc, Func Offset: 0x5c
	// Line 568, Address: 0x1f61e4, Func Offset: 0x64
	// Line 570, Address: 0x1f61f0, Func Offset: 0x70
	// Line 571, Address: 0x1f61f4, Func Offset: 0x74
	// Line 575, Address: 0x1f61f8, Func Offset: 0x78
	// Line 577, Address: 0x1f6204, Func Offset: 0x84
	// Line 581, Address: 0x1f6214, Func Offset: 0x94
	// Line 582, Address: 0x1f621c, Func Offset: 0x9c
	// Line 587, Address: 0x1f622c, Func Offset: 0xac
	// Line 593, Address: 0x1f6248, Func Offset: 0xc8
	// Func End, Address: 0x1f6254, Func Offset: 0xd4
}

// xParGroupAddPar__FP9xParGroup
// Start address: 0x1f6260
xPar* xParGroupAddPar(xParGroup* ps)
{
	xPar* p;
	int32 myPriority;
	uint8 i;
	// Line 444, Address: 0x1f6260, Func Offset: 0
	// Line 453, Address: 0x1f6270, Func Offset: 0x10
	// Line 456, Address: 0x1f6280, Func Offset: 0x20
	// Line 457, Address: 0x1f628c, Func Offset: 0x2c
	// Line 460, Address: 0x1f6294, Func Offset: 0x34
	// Line 463, Address: 0x1f6298, Func Offset: 0x38
	// Line 465, Address: 0x1f62ac, Func Offset: 0x4c
	// Line 468, Address: 0x1f62b4, Func Offset: 0x54
	// Line 472, Address: 0x1f62c0, Func Offset: 0x60
	// Line 476, Address: 0x1f62cc, Func Offset: 0x6c
	// Line 478, Address: 0x1f62d4, Func Offset: 0x74
	// Line 481, Address: 0x1f62e4, Func Offset: 0x84
	// Line 484, Address: 0x1f6304, Func Offset: 0xa4
	// Line 485, Address: 0x1f630c, Func Offset: 0xac
	// Line 487, Address: 0x1f6314, Func Offset: 0xb4
	// Line 494, Address: 0x1f631c, Func Offset: 0xbc
	// Line 498, Address: 0x1f6334, Func Offset: 0xd4
	// Line 502, Address: 0x1f6344, Func Offset: 0xe4
	// Line 506, Address: 0x1f634c, Func Offset: 0xec
	// Line 507, Address: 0x1f6358, Func Offset: 0xf8
	// Line 509, Address: 0x1f6360, Func Offset: 0x100
	// Line 511, Address: 0x1f6368, Func Offset: 0x108
	// Line 512, Address: 0x1f636c, Func Offset: 0x10c
	// Line 514, Address: 0x1f6370, Func Offset: 0x110
	// Line 516, Address: 0x1f6378, Func Offset: 0x118
	// Line 517, Address: 0x1f6380, Func Offset: 0x120
	// Line 518, Address: 0x1f63c4, Func Offset: 0x164
	// Line 520, Address: 0x1f63c8, Func Offset: 0x168
	// Line 521, Address: 0x1f63cc, Func Offset: 0x16c
	// Func End, Address: 0x1f63e0, Func Offset: 0x180
}

// xParGroupAnimate__FP9xParGroupf
// Start address: 0x1f63e0
void xParGroupAnimate(xParGroup* ps, float32 dt)
{
	xPar* i;
	xPar* tmp;
	float32 age;
	// Line 281, Address: 0x1f63e0, Func Offset: 0
	// Line 289, Address: 0x1f63fc, Func Offset: 0x1c
	// Line 287, Address: 0x1f6404, Func Offset: 0x24
	// Line 289, Address: 0x1f6408, Func Offset: 0x28
	// Line 290, Address: 0x1f6414, Func Offset: 0x34
	// Line 292, Address: 0x1f6418, Func Offset: 0x38
	// Line 294, Address: 0x1f6424, Func Offset: 0x44
	// Line 301, Address: 0x1f6428, Func Offset: 0x48
	// Line 308, Address: 0x1f6430, Func Offset: 0x50
	// Line 310, Address: 0x1f6438, Func Offset: 0x58
	// Line 313, Address: 0x1f6450, Func Offset: 0x70
	// Line 325, Address: 0x1f6454, Func Offset: 0x74
	// Line 328, Address: 0x1f645c, Func Offset: 0x7c
	// Line 340, Address: 0x1f6468, Func Offset: 0x88
	// Line 341, Address: 0x1f646c, Func Offset: 0x8c
	// Line 342, Address: 0x1f6470, Func Offset: 0x90
	// Line 343, Address: 0x1f6474, Func Offset: 0x94
	// Line 344, Address: 0x1f6478, Func Offset: 0x98
	// Line 345, Address: 0x1f647c, Func Offset: 0x9c
	// Line 346, Address: 0x1f6480, Func Offset: 0xa0
	// Line 347, Address: 0x1f6484, Func Offset: 0xa4
	// Line 348, Address: 0x1f6488, Func Offset: 0xa8
	// Line 349, Address: 0x1f648c, Func Offset: 0xac
	// Line 350, Address: 0x1f6490, Func Offset: 0xb0
	// Line 351, Address: 0x1f6494, Func Offset: 0xb4
	// Line 352, Address: 0x1f6498, Func Offset: 0xb8
	// Line 353, Address: 0x1f649c, Func Offset: 0xbc
	// Line 354, Address: 0x1f64a0, Func Offset: 0xc0
	// Line 355, Address: 0x1f64a4, Func Offset: 0xc4
	// Line 356, Address: 0x1f64a8, Func Offset: 0xc8
	// Line 405, Address: 0x1f64ac, Func Offset: 0xcc
	// Line 406, Address: 0x1f64c0, Func Offset: 0xe0
	// Line 408, Address: 0x1f64cc, Func Offset: 0xec
	// Line 410, Address: 0x1f64d0, Func Offset: 0xf0
	// Line 411, Address: 0x1f64d8, Func Offset: 0xf8
	// Func End, Address: 0x1f64f4, Func Offset: 0x114
}

// xParGroupKillAllParticles__FP9xParGroup
// Start address: 0x1f6500
void xParGroupKillAllParticles(xParGroup* ps)
{
	xPar* i;
	xPar* tmp;
	// Line 258, Address: 0x1f6500, Func Offset: 0
	// Line 263, Address: 0x1f6510, Func Offset: 0x10
	// Line 267, Address: 0x1f6514, Func Offset: 0x14
	// Line 270, Address: 0x1f6520, Func Offset: 0x20
	// Line 271, Address: 0x1f6524, Func Offset: 0x24
	// Line 274, Address: 0x1f6528, Func Offset: 0x28
	// Line 275, Address: 0x1f6530, Func Offset: 0x30
	// Line 276, Address: 0x1f6538, Func Offset: 0x38
	// Func End, Address: 0x1f654c, Func Offset: 0x4c
}

// xParGroupSetActive__FP9xParGroupUi
// Start address: 0x1f6550
void xParGroupSetActive(xParGroup* ps, uint32 isActive)
{
	// Line 216, Address: 0x1f6550, Func Offset: 0
	// Func End, Address: 0x1f6558, Func Offset: 0x8
}

// xParGroupUnregister__FP9xParGroup
// Start address: 0x1f6560
void xParGroupUnregister(xParGroup* ps)
{
	uint8 i;
	// Line 158, Address: 0x1f6560, Func Offset: 0
	// Line 160, Address: 0x1f6570, Func Offset: 0x10
	// Line 162, Address: 0x1f657c, Func Offset: 0x1c
	// Line 164, Address: 0x1f6594, Func Offset: 0x34
	// Line 165, Address: 0x1f659c, Func Offset: 0x3c
	// Line 166, Address: 0x1f65a0, Func Offset: 0x40
	// Line 168, Address: 0x1f65b8, Func Offset: 0x58
	// Func End, Address: 0x1f65c0, Func Offset: 0x60
}

// xParGroupRegister__FP9xParGroup
// Start address: 0x1f65c0
void xParGroupRegister(xParGroup* ps)
{
	uint8 i;
	// Line 127, Address: 0x1f65c0, Func Offset: 0
	// Line 128, Address: 0x1f65cc, Func Offset: 0xc
	// Line 136, Address: 0x1f6640, Func Offset: 0x80
	// Line 138, Address: 0x1f6650, Func Offset: 0x90
	// Line 140, Address: 0x1f665c, Func Offset: 0x9c
	// Line 142, Address: 0x1f6674, Func Offset: 0xb4
	// Line 143, Address: 0x1f667c, Func Offset: 0xbc
	// Line 144, Address: 0x1f6680, Func Offset: 0xc0
	// Line 147, Address: 0x1f6698, Func Offset: 0xd8
	// Func End, Address: 0x1f66a0, Func Offset: 0xe0
}

// xParGroupSetPriority__FP9xParGroupUc
// Start address: 0x1f66a0
void xParGroupSetPriority(xParGroup* ps, uint8 val)
{
	// Line 120, Address: 0x1f66a0, Func Offset: 0
	// Func End, Address: 0x1f66a8, Func Offset: 0x8
}

// xParGroupSetVisibility__FP9xParGroupi
// Start address: 0x1f66b0
void xParGroupSetVisibility(xParGroup* ps, int32 vis)
{
	// Line 113, Address: 0x1f66b0, Func Offset: 0
	// Func End, Address: 0x1f66b8, Func Offset: 0x8
}

// xParGroupSetBack2Life__FP9xParGroupi
// Start address: 0x1f66c0
void xParGroupSetBack2Life(xParGroup* ps, int32 b2l)
{
	// Line 84, Address: 0x1f66c0, Func Offset: 0
	// Line 86, Address: 0x1f66c8, Func Offset: 0x8
	// Line 87, Address: 0x1f66d8, Func Offset: 0x18
	// Line 90, Address: 0x1f66e0, Func Offset: 0x20
	// Line 91, Address: 0x1f66ec, Func Offset: 0x2c
	// Line 92, Address: 0x1f66f0, Func Offset: 0x30
	// Func End, Address: 0x1f66f8, Func Offset: 0x38
}

// xParGroupSetAging__FP9xParGroupi
// Start address: 0x1f6700
void xParGroupSetAging(xParGroup* ps, int32 age)
{
	// Line 70, Address: 0x1f6700, Func Offset: 0
	// Line 72, Address: 0x1f6708, Func Offset: 0x8
	// Line 73, Address: 0x1f6718, Func Offset: 0x18
	// Line 76, Address: 0x1f6720, Func Offset: 0x20
	// Line 77, Address: 0x1f672c, Func Offset: 0x2c
	// Line 78, Address: 0x1f6730, Func Offset: 0x30
	// Func End, Address: 0x1f6738, Func Offset: 0x38
}

// xParGroupInit__FP9xParGroup
// Start address: 0x1f6740
void xParGroupInit(xParGroup* ps)
{
	// Line 34, Address: 0x1f6740, Func Offset: 0
	// Line 41, Address: 0x1f6744, Func Offset: 0x4
	// Line 35, Address: 0x1f6748, Func Offset: 0x8
	// Line 36, Address: 0x1f674c, Func Offset: 0xc
	// Line 37, Address: 0x1f6750, Func Offset: 0x10
	// Line 38, Address: 0x1f6754, Func Offset: 0x14
	// Line 40, Address: 0x1f6758, Func Offset: 0x18
	// Line 41, Address: 0x1f675c, Func Offset: 0x1c
	// Line 42, Address: 0x1f6760, Func Offset: 0x20
	// Line 43, Address: 0x1f6764, Func Offset: 0x24
	// Line 44, Address: 0x1f6768, Func Offset: 0x28
	// Line 45, Address: 0x1f676c, Func Offset: 0x2c
	// Line 46, Address: 0x1f6770, Func Offset: 0x30
	// Line 47, Address: 0x1f6774, Func Offset: 0x34
	// Line 50, Address: 0x1f6778, Func Offset: 0x38
	// Line 52, Address: 0x1f6784, Func Offset: 0x44
	// Line 53, Address: 0x1f678c, Func Offset: 0x4c
	// Func End, Address: 0x1f6794, Func Offset: 0x54
}

