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

typedef void(*type_0)(xParCmd*, xParGroup*, f32);
typedef void(*type_1)(xParCmd*, xParGroup*, f32);
typedef void(*type_2)(xParCmd*, xParGroup*, f32);
typedef void(*type_4)(xParCmd*, xParGroup*, f32);
typedef void(*type_6)(void*, xParGroup*);
typedef void(*type_7)(xParCmd*, xParGroup*, f32);
typedef void(*type_12)(xParCmd*, xParGroup*, f32);
typedef void(*type_13)(xParCmd*, xParGroup*, f32);
typedef void(*type_15)(xParCmd*, xParGroup*, f32);
typedef void(*type_20)(xParCmd*, xParGroup*, f32);
typedef void(*type_21)(xParCmd*, xParGroup*, f32);
typedef void(*type_22)(xParCmd*, xParGroup*, f32);
typedef void(*type_23)(xParCmd*, xParGroup*, f32);
typedef void(*type_25)(xParCmd*, xParGroup*, f32);
typedef void(*type_26)(xParCmd*, xParGroup*, f32);
typedef void(*type_27)(xParCmd*, xParGroup*, f32);
typedef void(*type_28)(xParCmd*, xParGroup*, f32);
typedef void(*type_31)(xParCmd*, xParGroup*, f32);
typedef void(*type_32)(xParCmd*, xParGroup*, f32);
typedef void(*type_33)(xParCmd*, xParGroup*, f32);
typedef void(*type_34)(xParCmd*, xParGroup*, f32);
typedef void(*type_35)(xParCmd*, xParGroup*, f32);
typedef void(*type_36)(xParCmd*, xParGroup*, f32);
typedef void(*type_37)(xParCmd*, xParGroup*, f32);
typedef void(*type_38)(xParCmd*, xParGroup*, f32);
typedef void(*type_40)(xParCmd*, xParGroup*, f32);
typedef void(*type_42)(xParCmd*, xParGroup*, f32);
typedef void(*type_43)(xParCmd*, xParGroup*, f32);

typedef u8 type_3[4];
typedef xCmdInfo type_5[35];
typedef f32 type_8[3];
typedef f32 type_9[3];
typedef u8 type_10[2];
typedef u8 type_11[3];
typedef f32 type_14[3];
typedef f32 type_16[4];
typedef f32 type_17[4];
typedef u8 type_18[2];
typedef f32 type_19[4];
typedef f32 type_24[4];
typedef f32 type_29[4];
typedef f32 type_30[4];
typedef f32 type_39[0];
typedef f32 type_41[3];

struct xParCmd
{
	u32 flag;
	xParCmdAsset* tasset;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	f32 m_lifetime;
	type_3 m_c;
	xVec3 m_pos;
	f32 m_size;
	xVec3 m_vel;
	f32 m_sizeVel;
	u8 m_flag;
	u8 m_mode;
	type_10 m_texIdx;
	type_11 m_rotdeg;
	u8 pad8;
	f32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_16 m_cvel;
	type_17 m_cfl;
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
	type_6 draw;
	xParCmdTex* m_cmdTex;
};

struct xCmdInfo
{
	u32 type;
	u32 size;
	type_2 func;
};

struct xParCmdMove : xParCmdAsset
{
	xVec3 dir;
};

struct _tagEmitSphere
{
	f32 radius;
};

struct xParCmdSizeInOutData : xParCmdAsset
{
	type_24 custSize;
};

struct xParCmdCollideFallSticky : xParCmdCollideFall
{
	f32 sticky;
};

struct xParCmdTex : xParCmdAsset
{
	f32 x1;
	f32 y1;
	f32 x2;
	f32 y2;
	u8 birthMode;
	u8 rows;
	u8 cols;
	u8 unit_count;
	f32 unit_width;
	f32 unit_height;
};

struct xParCmdAsset
{
	u32 type;
	u8 enabled;
	u8 mode;
	type_18 pad;
};

struct xParCmdFollow : xParCmdAsset
{
	f32 gravity;
	f32 epsilon;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct xParCmdKillSlow : xParCmdAsset
{
	f32 speedLimitSqr;
	u32 kill_less_than;
};

struct xParCmdDampenData : xParCmdAsset
{
	f32 dampSpeed;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xParCmdRandomVelocityPar : xParCmdAsset
{
	f32 x;
	f32 y;
	f32 z;
};

struct xParCmdOrbitLine : xParCmdAsset
{
	xVec3 p;
	xVec3 axis;
	f32 gravity;
	f32 epsilon;
	f32 maxRadiusSqr;
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

struct xPEEntBound
{
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct xParCmdAlphaInOutData : xParCmdAsset
{
	type_19 custAlpha;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct xParCmdAccelerate : xParCmdAsset
{
	xVec3 acc;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct xParCmdRotPar : xParCmdAsset
{
	xVec3 min;
	xVec3 max;
};

struct xParCmdOrbitPoint : xParCmdAsset
{
	xVec3 center;
	f32 gravity;
	f32 epsilon;
	f32 maxRadiusSqr;
};

struct xParCmdCollideFall : xParCmdAsset
{
	f32 y;
	f32 bounce;
};

struct xParCmdTexAnim : xParCmdAsset
{
	u8 anim_mode;
	u8 anim_wrap_mode;
	u8 pad_anim;
	u8 throttle_spd_less_than;
	f32 throttle_spd_sqr;
	f32 throttle_time;
	f32 throttle_time_elapsed;
};

struct xParCmdShaperData : xParCmdAsset
{
	type_29 custAlpha;
	type_30 custSize;
	f32 dampSpeed;
	f32 gravity;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct xParCmdMoveRandomPar : xParCmdAsset
{
	xVec3 dim;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xParCmdRotateAround : xParCmdAsset
{
	xVec3 pos;
	f32 unused1;
	f32 radius_growth;
	f32 yaw;
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

void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps);
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps);
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdTex_Update();
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdVelocityApply_Update(xParGroup* ps);
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdAlpha3rdPolyReg_Update();
void xParCmdScale_Update();
void xParCmdSmokeAlpha_Update();
void xParCmdScale3rdPolyReg_Update();
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, f32 dt);
type_2 xParCmdGetUpdateFunc(u32 parType);
u32 xParCmdGetSize(u32 parType);
void xParCmdRegister(u32 parType, u32 size, type_2 func);
void xParCmdInit();

// xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4370
void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdShaperData* cmd;
	f32 damp;
	f32 grav;
	s32 doalpha;
	s32 dosize;
	s32 i;
	s32 seg;
	type_8 slope_alfa;
	type_9 slope_size;
	f32 frac;
	f32 alfa;
}

// xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4670
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdAlphaInOutData* cmd;
	s32 i;
	s32 seg;
	type_41 slope_alfa;
	f32 frac;
	f32 alfa;
}

// xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4850
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdSizeInOutData* cmd;
	s32 i;
	s32 seg;
	type_14 slope_size;
	f32 frac;
}

// xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f49b0
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdDampenData* cmd;
	f32 damp;
}

// xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4a20
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFallSticky& cmd;
	f32 xzdamp;
	xPar* p;
	f32& loc;
	f32& vel;
	f32 dloc;
}

// xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4ac0
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFall& cmd;
	xPar* p;
	f32& loc;
	f32& vel;
	f32 dloc;
}

// xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4b40
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, f32 dt)
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
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdRotateAround* cmd;
	f32 yaw;
	f32 radius_growth;
	xVec3 at;
	xMat3x3 lookmat;
	f32 radius;
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
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdRotPar* cmd;
}

// xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f53b0
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
}

// xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5410
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdRandomVelocityPar* cmd;
	xVec3 rot;
	xVec3* velvec;
	u32 uvelx;
	u32 uvely;
	u32 uvelz;
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
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdMoveRandomPar* cmd;
}

// xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5750
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdMove* cmd;
}

// xParCmdMove_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5850
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdMove* cmd;
}

// xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f58b0
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdAccelerate* cmd;
}

// xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5910
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdOrbitLine* cmd;
	f32 mdt;
	f32 force;
}

// xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5a20
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdOrbitPoint* cmd;
	f32 mdt;
	f32 force;
}

// xParCmdFollow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5af0
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdFollow* cmd;
	f32 mdt;
	f32 force;
}

// xParCmdAge_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bb0
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	f32 age_rate;
}

// xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bf0
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdKillSlow* cmd;
	f32 speedLimit;
}

// xParCmdGetUpdateFunc__FUi
// Start address: 0x1f5ca0
type_2 xParCmdGetUpdateFunc(u32 parType)
{
	s32 i;
}

// xParCmdGetSize__FUi
// Start address: 0x1f5d00
u32 xParCmdGetSize(u32 parType)
{
	s32 i;
}

// xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
// Start address: 0x1f5d60
void xParCmdRegister(u32 parType, u32 size, type_2 func)
{
}

// xParCmdInit__Fv
// Start address: 0x1f5da0
void xParCmdInit()
{
}

