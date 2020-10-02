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
	type_1 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_2 m_texIdx;
	type_3 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_4 m_cvel;
	type_6 m_cfl;
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
	type_0 draw;
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
type_5 sParGroupRegTable;

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
}

// xParGroupAddPar__FP9xParGroup
// Start address: 0x1f6260
xPar* xParGroupAddPar(xParGroup* ps)
{
	xPar* p;
	int32 myPriority;
	uint8 i;
}

// xParGroupAnimate__FP9xParGroupf
// Start address: 0x1f63e0
void xParGroupAnimate(xParGroup* ps, float32 dt)
{
	xPar* i;
	xPar* tmp;
	float32 age;
}

// xParGroupKillAllParticles__FP9xParGroup
// Start address: 0x1f6500
void xParGroupKillAllParticles(xParGroup* ps)
{
	xPar* i;
	xPar* tmp;
}

// xParGroupSetActive__FP9xParGroupUi
// Start address: 0x1f6550
void xParGroupSetActive(xParGroup* ps, uint32 isActive)
{
}

// xParGroupUnregister__FP9xParGroup
// Start address: 0x1f6560
void xParGroupUnregister(xParGroup* ps)
{
	uint8 i;
}

// xParGroupRegister__FP9xParGroup
// Start address: 0x1f65c0
void xParGroupRegister(xParGroup* ps)
{
	uint8 i;
}

// xParGroupSetPriority__FP9xParGroupUc
// Start address: 0x1f66a0
void xParGroupSetPriority(xParGroup* ps, uint8 val)
{
}

// xParGroupSetVisibility__FP9xParGroupi
// Start address: 0x1f66b0
void xParGroupSetVisibility(xParGroup* ps, int32 vis)
{
}

// xParGroupSetBack2Life__FP9xParGroupi
// Start address: 0x1f66c0
void xParGroupSetBack2Life(xParGroup* ps, int32 b2l)
{
}

// xParGroupSetAging__FP9xParGroupi
// Start address: 0x1f6700
void xParGroupSetAging(xParGroup* ps, int32 age)
{
}

// xParGroupInit__FP9xParGroup
// Start address: 0x1f6740
void xParGroupInit(xParGroup* ps)
{
}

