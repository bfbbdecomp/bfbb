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

typedef u8 type_1[4];
typedef u8 type_2[2];
typedef u8 type_3[3];
typedef f32 type_4[4];
typedef xParGroup* type_5[255];
typedef f32 type_6[4];

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	f32 m_lifetime;
	type_1 m_c;
	xVec3 m_pos;
	f32 m_size;
	xVec3 m_vel;
	f32 m_sizeVel;
	u8 m_flag;
	u8 m_mode;
	type_2 m_texIdx;
	type_3 m_rotdeg;
	u8 pad8;
	f32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_4 m_cvel;
	type_6 m_cfl;
};

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	s32 m_num_of_particles;
	u8 m_alive;
	u8 m_killWhenDead;
	u8 m_active;
	u8 m_visible;
	u8 m_culled;
	u8 m_priority;
	u8 m_flags;
	u8 m_regidx;
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
	f32 x;
	f32 y;
	f32 z;
};

struct xParEmitterAsset : xBaseAsset
{
	u8 emit_flags;
	u8 emit_type;
	u16 pad;
	u32 propID;
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
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	u32 cull_mode;
	f32 cull_dist_sqr;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct xPEEntBound
{
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xPEEntBone
{
	u8 flags;
	u8 type;
	u8 bone;
	u8 pad1;
	xVec3 offset;
	f32 radius;
	f32 deflection;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _tagEmitSphere
{
	f32 radius;
};

s32 sParGroupRegTableInit;
s32 sParGroupRegTableCount;
type_5 sParGroupRegTable;

void xParGroupKillPar(xParGroup* ps, xPar* p);
xPar* xParGroupAddPar(xParGroup* ps);
void xParGroupAnimate(xParGroup* ps, f32 dt);
void xParGroupKillAllParticles(xParGroup* ps);
void xParGroupSetActive(xParGroup* ps, u32 isActive);
void xParGroupUnregister(xParGroup* ps);
void xParGroupRegister(xParGroup* ps);
void xParGroupSetPriority(xParGroup* ps, u8 val);
void xParGroupSetVisibility(xParGroup* ps, s32 vis);
void xParGroupSetBack2Life(xParGroup* ps, s32 b2l);
void xParGroupSetAging(xParGroup* ps, s32 age);
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
	s32 myPriority;
	u8 i;
}

// xParGroupAnimate__FP9xParGroupf
// Start address: 0x1f63e0
void xParGroupAnimate(xParGroup* ps, f32 dt)
{
	xPar* i;
	xPar* tmp;
	f32 age;
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
void xParGroupSetActive(xParGroup* ps, u32 isActive)
{
}

// xParGroupUnregister__FP9xParGroup
// Start address: 0x1f6560
void xParGroupUnregister(xParGroup* ps)
{
	u8 i;
}

// xParGroupRegister__FP9xParGroup
// Start address: 0x1f65c0
void xParGroupRegister(xParGroup* ps)
{
	u8 i;
}

// xParGroupSetPriority__FP9xParGroupUc
// Start address: 0x1f66a0
void xParGroupSetPriority(xParGroup* ps, u8 val)
{
}

// xParGroupSetVisibility__FP9xParGroupi
// Start address: 0x1f66b0
void xParGroupSetVisibility(xParGroup* ps, s32 vis)
{
}

// xParGroupSetBack2Life__FP9xParGroupi
// Start address: 0x1f66c0
void xParGroupSetBack2Life(xParGroup* ps, s32 b2l)
{
}

// xParGroupSetAging__FP9xParGroupi
// Start address: 0x1f6700
void xParGroupSetAging(xParGroup* ps, s32 age)
{
}

// xParGroupInit__FP9xParGroup
// Start address: 0x1f6740
void xParGroupInit(xParGroup* ps)
{
}

