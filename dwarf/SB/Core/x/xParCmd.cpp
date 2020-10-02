typedef struct xParCmd;
typedef struct xPar;
typedef struct xParGroup;
typedef struct xCmdInfo;
typedef struct xParCmdMove;
typedef struct _tagEmitSphere;
typedef struct xParCmdSizeInOutData;
typedef struct xParCmdCollideFallSticky;
typedef struct xParCmdTex;
typedef struct xParCmdAsset;
typedef struct xParCmdFollow;
typedef struct _tagEmitRect;
typedef struct xParCmdKillSlow;
typedef struct xParCmdDampenData;
typedef struct xVec3;
typedef struct xParCmdRandomVelocityPar;
typedef struct xParCmdOrbitLine;
typedef struct xParEmitterAsset;
typedef struct xPEEntBound;
typedef struct xParCmdAlphaInOutData;
typedef struct _tagEmitLine;
typedef struct xParCmdAccelerate;
typedef struct _tagEmitVolume;
typedef struct xParCmdRotPar;
typedef struct xParCmdOrbitPoint;
typedef struct xParCmdCollideFall;
typedef struct xParCmdTexAnim;
typedef struct xParCmdShaperData;
typedef struct _tagEmitOffsetPoint;
typedef struct xMat3x3;
typedef struct xParCmdMoveRandomPar;
typedef struct xPEVCyl;
typedef struct xParCmdRotateAround;
typedef struct xPEEntBone;
typedef struct xPECircle;
typedef struct xBaseAsset;

typedef void(*type_0)(xParCmd*, xParGroup*, float32);
typedef void(*type_1)(xParCmd*, xParGroup*, float32);
typedef void(*type_2)(xParCmd*, xParGroup*, float32);
typedef void(*type_4)(xParCmd*, xParGroup*, float32);
typedef void(*type_6)(void*, xParGroup*);
typedef void(*type_7)(xParCmd*, xParGroup*, float32);
typedef void(*type_12)(xParCmd*, xParGroup*, float32);
typedef void(*type_13)(xParCmd*, xParGroup*, float32);
typedef void(*type_15)(xParCmd*, xParGroup*, float32);
typedef void(*type_20)(xParCmd*, xParGroup*, float32);
typedef void(*type_21)(xParCmd*, xParGroup*, float32);
typedef void(*type_22)(xParCmd*, xParGroup*, float32);
typedef void(*type_23)(xParCmd*, xParGroup*, float32);
typedef void(*type_25)(xParCmd*, xParGroup*, float32);
typedef void(*type_26)(xParCmd*, xParGroup*, float32);
typedef void(*type_27)(xParCmd*, xParGroup*, float32);
typedef void(*type_28)(xParCmd*, xParGroup*, float32);
typedef void(*type_31)(xParCmd*, xParGroup*, float32);
typedef void(*type_32)(xParCmd*, xParGroup*, float32);
typedef void(*type_33)(xParCmd*, xParGroup*, float32);
typedef void(*type_34)(xParCmd*, xParGroup*, float32);
typedef void(*type_35)(xParCmd*, xParGroup*, float32);
typedef void(*type_36)(xParCmd*, xParGroup*, float32);
typedef void(*type_37)(xParCmd*, xParGroup*, float32);
typedef void(*type_38)(xParCmd*, xParGroup*, float32);
typedef void(*type_40)(xParCmd*, xParGroup*, float32);
typedef void(*type_42)(xParCmd*, xParGroup*, float32);
typedef void(*type_43)(xParCmd*, xParGroup*, float32);

typedef uint8 type_3[4];
typedef xCmdInfo type_5[35];
typedef float32 type_8[3];
typedef float32 type_9[3];
typedef uint8 type_10[2];
typedef uint8 type_11[3];
typedef float32 type_14[3];
typedef float32 type_16[4];
typedef float32 type_17[4];
typedef uint8 type_18[2];
typedef float32 type_19[4];
typedef float32 type_24[4];
typedef float32 type_29[4];
typedef float32 type_30[4];
typedef float32 type_39[0];
typedef float32 type_41[3];

struct xParCmd
{
	uint32 flag;
	xParCmdAsset* tasset;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	type_3 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_10 m_texIdx;
	type_11 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_16 m_cvel;
	type_17 m_cfl;
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
	type_6 draw;
	xParCmdTex* m_cmdTex;
};

struct xCmdInfo
{
	uint32 type;
	uint32 size;
	type_2 func;
};

struct xParCmdMove : xParCmdAsset
{
	xVec3 dir;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct xParCmdSizeInOutData : xParCmdAsset
{
	type_24 custSize;
};

struct xParCmdCollideFallSticky : xParCmdCollideFall
{
	float32 sticky;
};

struct xParCmdTex : xParCmdAsset
{
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	uint8 birthMode;
	uint8 rows;
	uint8 cols;
	uint8 unit_count;
	float32 unit_width;
	float32 unit_height;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	type_18 pad;
};

struct xParCmdFollow : xParCmdAsset
{
	float32 gravity;
	float32 epsilon;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xParCmdKillSlow : xParCmdAsset
{
	float32 speedLimitSqr;
	uint32 kill_less_than;
};

struct xParCmdDampenData : xParCmdAsset
{
	float32 dampSpeed;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xParCmdRandomVelocityPar : xParCmdAsset
{
	float32 x;
	float32 y;
	float32 z;
};

struct xParCmdOrbitLine : xParCmdAsset
{
	xVec3 p;
	xVec3 axis;
	float32 gravity;
	float32 epsilon;
	float32 maxRadiusSqr;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct xParCmdAlphaInOutData : xParCmdAsset
{
	type_19 custAlpha;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xParCmdAccelerate : xParCmdAsset
{
	xVec3 acc;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct xParCmdRotPar : xParCmdAsset
{
	xVec3 min;
	xVec3 max;
};

struct xParCmdOrbitPoint : xParCmdAsset
{
	xVec3 center;
	float32 gravity;
	float32 epsilon;
	float32 maxRadiusSqr;
};

struct xParCmdCollideFall : xParCmdAsset
{
	float32 y;
	float32 bounce;
};

struct xParCmdTexAnim : xParCmdAsset
{
	uint8 anim_mode;
	uint8 anim_wrap_mode;
	uint8 pad_anim;
	uint8 throttle_spd_less_than;
	float32 throttle_spd_sqr;
	float32 throttle_time;
	float32 throttle_time_elapsed;
};

struct xParCmdShaperData : xParCmdAsset
{
	type_29 custAlpha;
	type_30 custSize;
	float32 dampSpeed;
	float32 gravity;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct xParCmdMoveRandomPar : xParCmdAsset
{
	xVec3 dim;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xParCmdRotateAround : xParCmdAsset
{
	xVec3 pos;
	float32 unused1;
	float32 radius_growth;
	float32 yaw;
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

type_5 sCmdInfo;
type_39 cosSinPolynomial;
type_34 xParCmd_DampenSpeed_Update;
type_38 xParCmd_SizeInOut_Update;
type_36 xParCmd_AlphaInOut_Update;
type_42 xParCmd_Shaper_Update;
type_33 xParCmdCollideFallSticky_Update;
type_31 xParCmdCollideFall_Update;
type_25 xParCmdScale_Update;
type_22 xParCmdSmokeAlpha_Update;
type_20 xParCmdRotateAround_Update;
type_12 xParCmdRotPar_Update;
type_7 xParCmdApplyWind_Update;
type_27 xParCmdAlpha3rdPolyReg_Update;
type_4 xParCmdAge_Update;
type_1 xParCmdRandomVelocityPar_Update;
type_0 xParCmdTexAnim_Update;
type_43 xParCmdTex_Update;
type_40 xParCmdScale3rdPolyReg_Update;
type_26 xParCmdMoveRandomPar_Update;
type_37 xParCmdOrbitLine_Update;
type_35 xParCmdOrbitPoint_Update;
type_32 xParCmdFollow_Update;
type_28 xParCmdKillSlow_Update;
type_15 xParCmdVelocityApply_Update;
type_13 xParCmdAccelerate_Update;
type_23 xParCmdMoveRandom_Update;
type_21 xParCmdMove_Update;

void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps);
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps);
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdTex_Update();
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdVelocityApply_Update(xParGroup* ps);
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAlpha3rdPolyReg_Update();
void xParCmdScale_Update();
void xParCmdSmokeAlpha_Update();
void xParCmdScale3rdPolyReg_Update();
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float32 dt);
type_2 xParCmdGetUpdateFunc(uint32 parType);
uint32 xParCmdGetSize(uint32 parType);
void xParCmdRegister(uint32 parType, uint32 size, type_2 func);
void xParCmdInit();

// xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4370
void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdShaperData* cmd;
	float32 damp;
	float32 grav;
	int32 doalpha;
	int32 dosize;
	int32 i;
	int32 seg;
	type_8 slope_alfa;
	type_9 slope_size;
	float32 frac;
	float32 alfa;
}

// xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4670
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdAlphaInOutData* cmd;
	int32 i;
	int32 seg;
	type_41 slope_alfa;
	float32 frac;
	float32 alfa;
}

// xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4850
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdSizeInOutData* cmd;
	int32 i;
	int32 seg;
	type_14 slope_size;
	float32 frac;
}

// xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f49b0
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdDampenData* cmd;
	float32 damp;
}

// xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4a20
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFallSticky& cmd;
	float32 xzdamp;
	xPar* p;
	float32& loc;
	float32& vel;
	float32 dloc;
}

// xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4ac0
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFall& cmd;
	xPar* p;
	float32& loc;
	float32& vel;
	float32 dloc;
}

// xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4b40
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdTexAnim* cmd;
	xParCmdTex* tex;
}

// xParCmdTex_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4f80
void xParCmdTex_Update()
{
}

// xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4f90
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdRotateAround* cmd;
	float32 yaw;
	float32 radius_growth;
	xVec3 at;
	xMat3x3 lookmat;
	float32 radius;
	xVec3 angles;
	xMat3x3 rotmat;
}

// xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5150
void xParCmdVelocityApply_Update(xParGroup* ps)
{
	xPar* p;
}

// xParCmdRotPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f51b0
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdRotPar* cmd;
}

// xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f53b0
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
}

// xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5410
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdRandomVelocityPar* cmd;
	xVec3 rot;
	xVec3* velvec;
	uint32 uvelx;
	uint32 uvely;
	uint32 uvelz;
}

// xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5660
void xParCmdAlpha3rdPolyReg_Update()
{
}

// xParCmdScale_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5670
void xParCmdScale_Update()
{
}

// xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5680
void xParCmdSmokeAlpha_Update()
{
}

// xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5690
void xParCmdScale3rdPolyReg_Update()
{
}

// xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f56a0
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdMoveRandomPar* cmd;
}

// xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5750
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdMove* cmd;
}

// xParCmdMove_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5850
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdMove* cmd;
}

// xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f58b0
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdAccelerate* cmd;
}

// xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5910
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdOrbitLine* cmd;
	float32 mdt;
	float32 force;
}

// xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5a20
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdOrbitPoint* cmd;
	float32 mdt;
	float32 force;
}

// xParCmdFollow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5af0
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdFollow* cmd;
	float32 mdt;
	float32 force;
}

// xParCmdAge_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bb0
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	float32 age_rate;
}

// xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bf0
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdKillSlow* cmd;
	float32 speedLimit;
}

// xParCmdGetUpdateFunc__FUi
// Start address: 0x1f5ca0
type_2 xParCmdGetUpdateFunc(uint32 parType)
{
	int32 i;
}

// xParCmdGetSize__FUi
// Start address: 0x1f5d00
uint32 xParCmdGetSize(uint32 parType)
{
	int32 i;
}

// xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
// Start address: 0x1f5d60
void xParCmdRegister(uint32 parType, uint32 size, type_2 func)
{
}

// xParCmdInit__Fv
// Start address: 0x1f5da0
void xParCmdInit()
{
}

