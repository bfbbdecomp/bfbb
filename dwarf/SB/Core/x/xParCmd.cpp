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

struct xCmdInfo
{
	uint32 type;
	uint32 size;
	void(*func)(xParCmd*, xParGroup*, float32);
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
	float32 custSize[4];
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
	uint8 pad[2];
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
	float32 custAlpha[4];
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
	float32 custAlpha[4];
	float32 custSize[4];
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

xCmdInfo sCmdInfo[35];
float32 cosSinPolynomial[0];
void(*xParCmd_DampenSpeed_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmd_SizeInOut_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmd_AlphaInOut_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmd_Shaper_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdCollideFallSticky_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdCollideFall_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdScale_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdSmokeAlpha_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdRotateAround_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdRotPar_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdApplyWind_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdAlpha3rdPolyReg_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdAge_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdRandomVelocityPar_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdTexAnim_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdTex_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdScale3rdPolyReg_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdMoveRandomPar_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdOrbitLine_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdOrbitPoint_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdFollow_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdKillSlow_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdVelocityApply_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdAccelerate_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdMoveRandom_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdMove_Update)(xParCmd*, xParGroup*, float32);

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
void(*)(xParCmd*, xParGroup*, float32) xParCmdGetUpdateFunc(uint32 parType);
uint32 xParCmdGetSize(uint32 parType);
void xParCmdRegister(uint32 parType, uint32 size, void(*func)(xParCmd*, xParGroup*, float32));
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
	float32 slope_alfa[3];
	float32 slope_size[3];
	float32 frac;
	float32 alfa;
	// Line 1519, Address: 0x1f4370, Func Offset: 0
	// Line 1524, Address: 0x1f4374, Func Offset: 0x4
	// Line 1534, Address: 0x1f4380, Func Offset: 0x10
	// Line 1532, Address: 0x1f4384, Func Offset: 0x14
	// Line 1527, Address: 0x1f4388, Func Offset: 0x18
	// Line 1533, Address: 0x1f438c, Func Offset: 0x1c
	// Line 1530, Address: 0x1f4390, Func Offset: 0x20
	// Line 1534, Address: 0x1f4394, Func Offset: 0x24
	// Line 1527, Address: 0x1f43a0, Func Offset: 0x30
	// Line 1534, Address: 0x1f43a4, Func Offset: 0x34
	// Line 1535, Address: 0x1f43b0, Func Offset: 0x40
	// Line 1554, Address: 0x1f43d0, Func Offset: 0x60
	// Line 1535, Address: 0x1f43d4, Func Offset: 0x64
	// Line 1554, Address: 0x1f43d8, Func Offset: 0x68
	// Line 1555, Address: 0x1f43f4, Func Offset: 0x84
	// Line 1554, Address: 0x1f4408, Func Offset: 0x98
	// Line 1555, Address: 0x1f4410, Func Offset: 0xa0
	// Line 1554, Address: 0x1f4428, Func Offset: 0xb8
	// Line 1555, Address: 0x1f4430, Func Offset: 0xc0
	// Line 1565, Address: 0x1f4444, Func Offset: 0xd4
	// Line 1566, Address: 0x1f4448, Func Offset: 0xd8
	// Line 1601, Address: 0x1f4450, Func Offset: 0xe0
	// Line 1596, Address: 0x1f4454, Func Offset: 0xe4
	// Line 1601, Address: 0x1f4458, Func Offset: 0xe8
	// Line 1596, Address: 0x1f445c, Func Offset: 0xec
	// Line 1591, Address: 0x1f4460, Func Offset: 0xf0
	// Line 1601, Address: 0x1f4464, Func Offset: 0xf4
	// Line 1617, Address: 0x1f4468, Func Offset: 0xf8
	// Line 1616, Address: 0x1f4470, Func Offset: 0x100
	// Line 1582, Address: 0x1f4478, Func Offset: 0x108
	// Line 1617, Address: 0x1f4480, Func Offset: 0x110
	// Line 1591, Address: 0x1f4484, Func Offset: 0x114
	// Line 1582, Address: 0x1f4488, Func Offset: 0x118
	// Line 1592, Address: 0x1f448c, Func Offset: 0x11c
	// Line 1574, Address: 0x1f4490, Func Offset: 0x120
	// Line 1577, Address: 0x1f44cc, Func Offset: 0x15c
	// Line 1582, Address: 0x1f44dc, Func Offset: 0x16c
	// Line 1585, Address: 0x1f44f8, Func Offset: 0x188
	// Line 1591, Address: 0x1f4500, Func Offset: 0x190
	// Line 1592, Address: 0x1f4510, Func Offset: 0x1a0
	// Line 1595, Address: 0x1f454c, Func Offset: 0x1dc
	// Line 1596, Address: 0x1f4560, Func Offset: 0x1f0
	// Line 1597, Address: 0x1f4578, Func Offset: 0x208
	// Line 1601, Address: 0x1f4580, Func Offset: 0x210
	// Line 1610, Address: 0x1f45a0, Func Offset: 0x230
	// Line 1611, Address: 0x1f45a8, Func Offset: 0x238
	// Line 1612, Address: 0x1f45c4, Func Offset: 0x254
	// Line 1614, Address: 0x1f45c8, Func Offset: 0x258
	// Line 1615, Address: 0x1f45d0, Func Offset: 0x260
	// Line 1616, Address: 0x1f45e8, Func Offset: 0x278
	// Line 1617, Address: 0x1f4624, Func Offset: 0x2b4
	// Line 1624, Address: 0x1f4658, Func Offset: 0x2e8
	// Line 1626, Address: 0x1f465c, Func Offset: 0x2ec
	// Line 1629, Address: 0x1f4668, Func Offset: 0x2f8
	// Func End, Address: 0x1f4670, Func Offset: 0x300
}

// xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4670
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdAlphaInOutData* cmd;
	int32 i;
	int32 seg;
	float32 slope_alfa[3];
	float32 frac;
	float32 alfa;
	// Line 1433, Address: 0x1f4670, Func Offset: 0
	// Line 1438, Address: 0x1f4674, Func Offset: 0x4
	// Line 1455, Address: 0x1f4684, Func Offset: 0x14
	// Line 1459, Address: 0x1f46c0, Func Offset: 0x50
	// Line 1460, Address: 0x1f46c4, Func Offset: 0x54
	// Line 1470, Address: 0x1f46cc, Func Offset: 0x5c
	// Line 1475, Address: 0x1f46d0, Func Offset: 0x60
	// Line 1470, Address: 0x1f46d4, Func Offset: 0x64
	// Line 1475, Address: 0x1f46d8, Func Offset: 0x68
	// Line 1466, Address: 0x1f46dc, Func Offset: 0x6c
	// Line 1470, Address: 0x1f46e0, Func Offset: 0x70
	// Line 1484, Address: 0x1f46e4, Func Offset: 0x74
	// Line 1485, Address: 0x1f46e8, Func Offset: 0x78
	// Line 1484, Address: 0x1f46ec, Func Offset: 0x7c
	// Line 1466, Address: 0x1f46f0, Func Offset: 0x80
	// Line 1485, Address: 0x1f46f4, Func Offset: 0x84
	// Line 1466, Address: 0x1f46fc, Func Offset: 0x8c
	// Line 1465, Address: 0x1f4700, Func Offset: 0x90
	// Line 1466, Address: 0x1f4714, Func Offset: 0xa4
	// Line 1469, Address: 0x1f4750, Func Offset: 0xe0
	// Line 1470, Address: 0x1f4768, Func Offset: 0xf8
	// Line 1471, Address: 0x1f4780, Func Offset: 0x110
	// Line 1475, Address: 0x1f4788, Func Offset: 0x118
	// Line 1483, Address: 0x1f47ac, Func Offset: 0x13c
	// Line 1484, Address: 0x1f47c4, Func Offset: 0x154
	// Line 1485, Address: 0x1f4800, Func Offset: 0x190
	// Line 1488, Address: 0x1f4834, Func Offset: 0x1c4
	// Line 1490, Address: 0x1f4838, Func Offset: 0x1c8
	// Line 1493, Address: 0x1f4840, Func Offset: 0x1d0
	// Func End, Address: 0x1f4848, Func Offset: 0x1d8
}

// xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4850
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdSizeInOutData* cmd;
	int32 i;
	int32 seg;
	float32 slope_size[3];
	float32 frac;
	// Line 1355, Address: 0x1f4850, Func Offset: 0
	// Line 1360, Address: 0x1f4854, Func Offset: 0x4
	// Line 1377, Address: 0x1f4864, Func Offset: 0x14
	// Line 1381, Address: 0x1f48a0, Func Offset: 0x50
	// Line 1382, Address: 0x1f48a4, Func Offset: 0x54
	// Line 1388, Address: 0x1f48ac, Func Offset: 0x5c
	// Line 1397, Address: 0x1f48b0, Func Offset: 0x60
	// Line 1392, Address: 0x1f48b4, Func Offset: 0x64
	// Line 1397, Address: 0x1f48b8, Func Offset: 0x68
	// Line 1388, Address: 0x1f48bc, Func Offset: 0x6c
	// Line 1392, Address: 0x1f48c0, Func Offset: 0x70
	// Line 1388, Address: 0x1f48c8, Func Offset: 0x78
	// Line 1382, Address: 0x1f48cc, Func Offset: 0x7c
	// Line 1387, Address: 0x1f48d0, Func Offset: 0x80
	// Line 1388, Address: 0x1f48e4, Func Offset: 0x94
	// Line 1391, Address: 0x1f4920, Func Offset: 0xd0
	// Line 1392, Address: 0x1f4938, Func Offset: 0xe8
	// Line 1393, Address: 0x1f4950, Func Offset: 0x100
	// Line 1397, Address: 0x1f4958, Func Offset: 0x108
	// Line 1402, Address: 0x1f497c, Func Offset: 0x12c
	// Line 1405, Address: 0x1f4998, Func Offset: 0x148
	// Line 1407, Address: 0x1f499c, Func Offset: 0x14c
	// Line 1410, Address: 0x1f49a8, Func Offset: 0x158
	// Func End, Address: 0x1f49b0, Func Offset: 0x160
}

// xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f49b0
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdDampenData* cmd;
	float32 damp;
	// Line 1326, Address: 0x1f49b0, Func Offset: 0
	// Line 1331, Address: 0x1f49b4, Func Offset: 0x4
	// Line 1334, Address: 0x1f49c0, Func Offset: 0x10
	// Line 1336, Address: 0x1f49c4, Func Offset: 0x14
	// Line 1337, Address: 0x1f49c8, Func Offset: 0x18
	// Line 1338, Address: 0x1f49d0, Func Offset: 0x20
	// Line 1339, Address: 0x1f4a0c, Func Offset: 0x5c
	// Line 1340, Address: 0x1f4a10, Func Offset: 0x60
	// Line 1343, Address: 0x1f4a18, Func Offset: 0x68
	// Func End, Address: 0x1f4a20, Func Offset: 0x70
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
	// Line 1300, Address: 0x1f4a20, Func Offset: 0
	// Line 1302, Address: 0x1f4a24, Func Offset: 0x4
	// Line 1303, Address: 0x1f4a28, Func Offset: 0x8
	// Line 1302, Address: 0x1f4a2c, Func Offset: 0xc
	// Line 1303, Address: 0x1f4a34, Func Offset: 0x14
	// Line 1308, Address: 0x1f4a3c, Func Offset: 0x1c
	// Line 1305, Address: 0x1f4a40, Func Offset: 0x20
	// Line 1306, Address: 0x1f4a44, Func Offset: 0x24
	// Line 1307, Address: 0x1f4a48, Func Offset: 0x28
	// Line 1308, Address: 0x1f4a50, Func Offset: 0x30
	// Line 1309, Address: 0x1f4a5c, Func Offset: 0x3c
	// Line 1310, Address: 0x1f4a70, Func Offset: 0x50
	// Line 1311, Address: 0x1f4a90, Func Offset: 0x70
	// Line 1312, Address: 0x1f4a9c, Func Offset: 0x7c
	// Line 1313, Address: 0x1f4aa8, Func Offset: 0x88
	// Line 1314, Address: 0x1f4ab8, Func Offset: 0x98
	// Func End, Address: 0x1f4ac0, Func Offset: 0xa0
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
	// Line 1287, Address: 0x1f4ac0, Func Offset: 0
	// Line 1292, Address: 0x1f4acc, Func Offset: 0xc
	// Line 1289, Address: 0x1f4ad0, Func Offset: 0x10
	// Line 1290, Address: 0x1f4ad4, Func Offset: 0x14
	// Line 1291, Address: 0x1f4ad8, Func Offset: 0x18
	// Line 1292, Address: 0x1f4ae0, Func Offset: 0x20
	// Line 1293, Address: 0x1f4aec, Func Offset: 0x2c
	// Line 1294, Address: 0x1f4b00, Func Offset: 0x40
	// Line 1295, Address: 0x1f4b1c, Func Offset: 0x5c
	// Line 1296, Address: 0x1f4b30, Func Offset: 0x70
	// Func End, Address: 0x1f4b38, Func Offset: 0x78
}

// xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4b40
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdTexAnim* cmd;
	xParCmdTex* tex;
	// Line 1121, Address: 0x1f4b40, Func Offset: 0
	// Line 1129, Address: 0x1f4b50, Func Offset: 0x10
	// Line 1130, Address: 0x1f4b54, Func Offset: 0x14
	// Line 1138, Address: 0x1f4b5c, Func Offset: 0x1c
	// Line 1140, Address: 0x1f4b74, Func Offset: 0x34
	// Line 1141, Address: 0x1f4b7c, Func Offset: 0x3c
	// Line 1145, Address: 0x1f4b88, Func Offset: 0x48
	// Line 1149, Address: 0x1f4b90, Func Offset: 0x50
	// Line 1151, Address: 0x1f4b94, Func Offset: 0x54
	// Line 1153, Address: 0x1f4b9c, Func Offset: 0x5c
	// Line 1156, Address: 0x1f4ba8, Func Offset: 0x68
	// Line 1157, Address: 0x1f4bc4, Func Offset: 0x84
	// Line 1160, Address: 0x1f4be4, Func Offset: 0xa4
	// Line 1161, Address: 0x1f4be8, Func Offset: 0xa8
	// Line 1162, Address: 0x1f4bf0, Func Offset: 0xb0
	// Line 1163, Address: 0x1f4bf8, Func Offset: 0xb8
	// Line 1165, Address: 0x1f4c04, Func Offset: 0xc4
	// Line 1167, Address: 0x1f4c14, Func Offset: 0xd4
	// Line 1183, Address: 0x1f4c1c, Func Offset: 0xdc
	// Line 1170, Address: 0x1f4c20, Func Offset: 0xe0
	// Line 1171, Address: 0x1f4c2c, Func Offset: 0xec
	// Line 1173, Address: 0x1f4c40, Func Offset: 0x100
	// Line 1174, Address: 0x1f4c48, Func Offset: 0x108
	// Line 1177, Address: 0x1f4c50, Func Offset: 0x110
	// Line 1178, Address: 0x1f4c70, Func Offset: 0x130
	// Line 1179, Address: 0x1f4c78, Func Offset: 0x138
	// Line 1181, Address: 0x1f4c80, Func Offset: 0x140
	// Line 1182, Address: 0x1f4ca4, Func Offset: 0x164
	// Line 1183, Address: 0x1f4cb0, Func Offset: 0x170
	// Line 1186, Address: 0x1f4cb8, Func Offset: 0x178
	// Line 1187, Address: 0x1f4cc8, Func Offset: 0x188
	// Line 1189, Address: 0x1f4cd8, Func Offset: 0x198
	// Line 1190, Address: 0x1f4cdc, Func Offset: 0x19c
	// Line 1195, Address: 0x1f4ce8, Func Offset: 0x1a8
	// Line 1196, Address: 0x1f4cec, Func Offset: 0x1ac
	// Line 1198, Address: 0x1f4cf4, Func Offset: 0x1b4
	// Line 1199, Address: 0x1f4d00, Func Offset: 0x1c0
	// Line 1201, Address: 0x1f4d0c, Func Offset: 0x1cc
	// Line 1203, Address: 0x1f4d1c, Func Offset: 0x1dc
	// Line 1206, Address: 0x1f4d28, Func Offset: 0x1e8
	// Line 1208, Address: 0x1f4d34, Func Offset: 0x1f4
	// Line 1209, Address: 0x1f4d44, Func Offset: 0x204
	// Line 1211, Address: 0x1f4d4c, Func Offset: 0x20c
	// Line 1212, Address: 0x1f4d6c, Func Offset: 0x22c
	// Line 1213, Address: 0x1f4d78, Func Offset: 0x238
	// Line 1215, Address: 0x1f4d80, Func Offset: 0x240
	// Line 1217, Address: 0x1f4da4, Func Offset: 0x264
	// Line 1219, Address: 0x1f4db0, Func Offset: 0x270
	// Line 1221, Address: 0x1f4db8, Func Offset: 0x278
	// Line 1222, Address: 0x1f4dbc, Func Offset: 0x27c
	// Line 1224, Address: 0x1f4dc4, Func Offset: 0x284
	// Line 1225, Address: 0x1f4dd0, Func Offset: 0x290
	// Line 1227, Address: 0x1f4ddc, Func Offset: 0x29c
	// Line 1229, Address: 0x1f4dec, Func Offset: 0x2ac
	// Line 1232, Address: 0x1f4df8, Func Offset: 0x2b8
	// Line 1234, Address: 0x1f4e04, Func Offset: 0x2c4
	// Line 1236, Address: 0x1f4e14, Func Offset: 0x2d4
	// Line 1238, Address: 0x1f4e1c, Func Offset: 0x2dc
	// Line 1239, Address: 0x1f4e3c, Func Offset: 0x2fc
	// Line 1240, Address: 0x1f4e48, Func Offset: 0x308
	// Line 1242, Address: 0x1f4e50, Func Offset: 0x310
	// Line 1244, Address: 0x1f4e74, Func Offset: 0x334
	// Line 1246, Address: 0x1f4e80, Func Offset: 0x340
	// Line 1248, Address: 0x1f4e88, Func Offset: 0x348
	// Line 1249, Address: 0x1f4e8c, Func Offset: 0x34c
	// Line 1251, Address: 0x1f4e94, Func Offset: 0x354
	// Line 1252, Address: 0x1f4ea0, Func Offset: 0x360
	// Line 1254, Address: 0x1f4eac, Func Offset: 0x36c
	// Line 1256, Address: 0x1f4ebc, Func Offset: 0x37c
	// Line 1259, Address: 0x1f4ec8, Func Offset: 0x388
	// Line 1260, Address: 0x1f4ed4, Func Offset: 0x394
	// Line 1262, Address: 0x1f4ee8, Func Offset: 0x3a8
	// Line 1264, Address: 0x1f4ef0, Func Offset: 0x3b0
	// Line 1266, Address: 0x1f4ef8, Func Offset: 0x3b8
	// Line 1267, Address: 0x1f4f18, Func Offset: 0x3d8
	// Line 1268, Address: 0x1f4f20, Func Offset: 0x3e0
	// Line 1270, Address: 0x1f4f28, Func Offset: 0x3e8
	// Line 1273, Address: 0x1f4f50, Func Offset: 0x410
	// Line 1274, Address: 0x1f4f54, Func Offset: 0x414
	// Line 1280, Address: 0x1f4f5c, Func Offset: 0x41c
	// Line 1281, Address: 0x1f4f60, Func Offset: 0x420
	// Func End, Address: 0x1f4f74, Func Offset: 0x434
}

// xParCmdTex_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4f80
void xParCmdTex_Update()
{
	// Line 1083, Address: 0x1f4f80, Func Offset: 0
	// Func End, Address: 0x1f4f88, Func Offset: 0x8
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
	// Line 1004, Address: 0x1f4f90, Func Offset: 0
	// Line 1012, Address: 0x1f4f94, Func Offset: 0x4
	// Line 1004, Address: 0x1f4f98, Func Offset: 0x8
	// Line 1006, Address: 0x1f4fcc, Func Offset: 0x3c
	// Line 1018, Address: 0x1f4fd0, Func Offset: 0x40
	// Line 1012, Address: 0x1f4fd4, Func Offset: 0x44
	// Line 1015, Address: 0x1f4fe8, Func Offset: 0x58
	// Line 1012, Address: 0x1f4fec, Func Offset: 0x5c
	// Line 1019, Address: 0x1f5000, Func Offset: 0x70
	// Line 1023, Address: 0x1f5028, Func Offset: 0x98
	// Line 1026, Address: 0x1f5030, Func Offset: 0xa0
	// Line 1023, Address: 0x1f5034, Func Offset: 0xa4
	// Line 1026, Address: 0x1f5038, Func Offset: 0xa8
	// Line 1023, Address: 0x1f503c, Func Offset: 0xac
	// Line 1024, Address: 0x1f5068, Func Offset: 0xd8
	// Line 1026, Address: 0x1f506c, Func Offset: 0xdc
	// Line 1030, Address: 0x1f5078, Func Offset: 0xe8
	// Line 1033, Address: 0x1f5084, Func Offset: 0xf4
	// Line 1037, Address: 0x1f5088, Func Offset: 0xf8
	// Line 1033, Address: 0x1f508c, Func Offset: 0xfc
	// Line 1037, Address: 0x1f5094, Func Offset: 0x104
	// Line 1049, Address: 0x1f50a4, Func Offset: 0x114
	// Line 1054, Address: 0x1f50b0, Func Offset: 0x120
	// Line 1040, Address: 0x1f50b4, Func Offset: 0x124
	// Line 1049, Address: 0x1f50b8, Func Offset: 0x128
	// Line 1054, Address: 0x1f50c8, Func Offset: 0x138
	// Line 1049, Address: 0x1f50d4, Func Offset: 0x144
	// Line 1054, Address: 0x1f50d8, Func Offset: 0x148
	// Line 1055, Address: 0x1f50f0, Func Offset: 0x160
	// Line 1059, Address: 0x1f50fc, Func Offset: 0x16c
	// Line 1060, Address: 0x1f5100, Func Offset: 0x170
	// Line 1062, Address: 0x1f5108, Func Offset: 0x178
	// Func End, Address: 0x1f5144, Func Offset: 0x1b4
}

// xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5150
void xParCmdVelocityApply_Update(xParGroup* ps)
{
	xPar* p;
	// Line 989, Address: 0x1f5150, Func Offset: 0
	// Line 990, Address: 0x1f5154, Func Offset: 0x4
	// Line 992, Address: 0x1f5160, Func Offset: 0x10
	// Line 994, Address: 0x1f5190, Func Offset: 0x40
	// Line 995, Address: 0x1f5194, Func Offset: 0x44
	// Line 997, Address: 0x1f51a0, Func Offset: 0x50
	// Func End, Address: 0x1f51a8, Func Offset: 0x58
}

// xParCmdRotPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f51b0
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdRotPar* cmd;
	// Line 941, Address: 0x1f51b0, Func Offset: 0
	// Line 949, Address: 0x1f51b4, Func Offset: 0x4
	// Line 941, Address: 0x1f51b8, Func Offset: 0x8
	// Line 949, Address: 0x1f51bc, Func Offset: 0xc
	// Line 941, Address: 0x1f51c0, Func Offset: 0x10
	// Line 949, Address: 0x1f51c8, Func Offset: 0x18
	// Line 941, Address: 0x1f51cc, Func Offset: 0x1c
	// Line 943, Address: 0x1f51e4, Func Offset: 0x34
	// Line 949, Address: 0x1f51e8, Func Offset: 0x38
	// Line 959, Address: 0x1f51ec, Func Offset: 0x3c
	// Line 950, Address: 0x1f51f4, Func Offset: 0x44
	// Line 951, Address: 0x1f51f8, Func Offset: 0x48
	// Line 943, Address: 0x1f51fc, Func Offset: 0x4c
	// Line 949, Address: 0x1f5200, Func Offset: 0x50
	// Line 950, Address: 0x1f5208, Func Offset: 0x58
	// Line 951, Address: 0x1f520c, Func Offset: 0x5c
	// Line 954, Address: 0x1f5210, Func Offset: 0x60
	// Line 951, Address: 0x1f5214, Func Offset: 0x64
	// Line 954, Address: 0x1f521c, Func Offset: 0x6c
	// Line 949, Address: 0x1f5220, Func Offset: 0x70
	// Line 950, Address: 0x1f5224, Func Offset: 0x74
	// Line 949, Address: 0x1f5228, Func Offset: 0x78
	// Line 950, Address: 0x1f522c, Func Offset: 0x7c
	// Line 955, Address: 0x1f5230, Func Offset: 0x80
	// Line 956, Address: 0x1f5234, Func Offset: 0x84
	// Line 949, Address: 0x1f5238, Func Offset: 0x88
	// Line 950, Address: 0x1f523c, Func Offset: 0x8c
	// Line 956, Address: 0x1f5240, Func Offset: 0x90
	// Line 955, Address: 0x1f5244, Func Offset: 0x94
	// Line 960, Address: 0x1f5248, Func Offset: 0x98
	// Line 963, Address: 0x1f5250, Func Offset: 0xa0
	// Line 964, Address: 0x1f52ac, Func Offset: 0xfc
	// Line 965, Address: 0x1f5308, Func Offset: 0x158
	// Line 967, Address: 0x1f5368, Func Offset: 0x1b8
	// Line 968, Address: 0x1f536c, Func Offset: 0x1bc
	// Line 969, Address: 0x1f5378, Func Offset: 0x1c8
	// Func End, Address: 0x1f53a4, Func Offset: 0x1f4
}

// xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f53b0
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	// Line 918, Address: 0x1f53b0, Func Offset: 0
	// Line 925, Address: 0x1f53b4, Func Offset: 0x4
	// Line 918, Address: 0x1f53b8, Func Offset: 0x8
	// Line 916, Address: 0x1f53bc, Func Offset: 0xc
	// Line 918, Address: 0x1f53c8, Func Offset: 0x18
	// Line 920, Address: 0x1f53d0, Func Offset: 0x20
	// Line 926, Address: 0x1f53d4, Func Offset: 0x24
	// Line 929, Address: 0x1f53e0, Func Offset: 0x30
	// Line 930, Address: 0x1f53ec, Func Offset: 0x3c
	// Line 932, Address: 0x1f53f8, Func Offset: 0x48
	// Line 933, Address: 0x1f53fc, Func Offset: 0x4c
	// Line 934, Address: 0x1f5408, Func Offset: 0x58
	// Func End, Address: 0x1f5410, Func Offset: 0x60
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
	// Line 791, Address: 0x1f5410, Func Offset: 0
	// Line 816, Address: 0x1f5414, Func Offset: 0x4
	// Line 791, Address: 0x1f5418, Func Offset: 0x8
	// Line 816, Address: 0x1f541c, Func Offset: 0xc
	// Line 791, Address: 0x1f5420, Func Offset: 0x10
	// Line 793, Address: 0x1f543c, Func Offset: 0x2c
	// Line 801, Address: 0x1f5440, Func Offset: 0x30
	// Line 802, Address: 0x1f544c, Func Offset: 0x3c
	// Line 803, Address: 0x1f5458, Func Offset: 0x48
	// Line 816, Address: 0x1f5464, Func Offset: 0x54
	// Line 817, Address: 0x1f54ac, Func Offset: 0x9c
	// Line 818, Address: 0x1f54dc, Func Offset: 0xcc
	// Line 819, Address: 0x1f54e4, Func Offset: 0xd4
	// Line 820, Address: 0x1f54ec, Func Offset: 0xdc
	// Line 821, Address: 0x1f54f4, Func Offset: 0xe4
	// Line 822, Address: 0x1f54f8, Func Offset: 0xe8
	// Line 823, Address: 0x1f54fc, Func Offset: 0xec
	// Line 824, Address: 0x1f5504, Func Offset: 0xf4
	// Line 825, Address: 0x1f550c, Func Offset: 0xfc
	// Line 826, Address: 0x1f5514, Func Offset: 0x104
	// Line 827, Address: 0x1f5518, Func Offset: 0x108
	// Line 828, Address: 0x1f551c, Func Offset: 0x10c
	// Line 836, Address: 0x1f5520, Func Offset: 0x110
	// Line 840, Address: 0x1f5528, Func Offset: 0x118
	// Line 842, Address: 0x1f552c, Func Offset: 0x11c
	// Line 846, Address: 0x1f5530, Func Offset: 0x120
	// Line 847, Address: 0x1f5534, Func Offset: 0x124
	// Line 848, Address: 0x1f5538, Func Offset: 0x128
	// Line 849, Address: 0x1f553c, Func Offset: 0x12c
	// Line 850, Address: 0x1f5540, Func Offset: 0x130
	// Line 851, Address: 0x1f5544, Func Offset: 0x134
	// Line 857, Address: 0x1f5548, Func Offset: 0x138
	// Line 858, Address: 0x1f55a8, Func Offset: 0x198
	// Line 859, Address: 0x1f55e8, Func Offset: 0x1d8
	// Line 869, Address: 0x1f55f4, Func Offset: 0x1e4
	// Line 870, Address: 0x1f55f8, Func Offset: 0x1e8
	// Line 871, Address: 0x1f55fc, Func Offset: 0x1ec
	// Line 872, Address: 0x1f5600, Func Offset: 0x1f0
	// Line 873, Address: 0x1f5604, Func Offset: 0x1f4
	// Line 874, Address: 0x1f5608, Func Offset: 0x1f8
	// Line 875, Address: 0x1f560c, Func Offset: 0x1fc
	// Line 876, Address: 0x1f5610, Func Offset: 0x200
	// Line 877, Address: 0x1f5614, Func Offset: 0x204
	// Line 878, Address: 0x1f5618, Func Offset: 0x208
	// Line 879, Address: 0x1f561c, Func Offset: 0x20c
	// Line 880, Address: 0x1f5620, Func Offset: 0x210
	// Line 898, Address: 0x1f5624, Func Offset: 0x214
	// Line 899, Address: 0x1f5630, Func Offset: 0x220
	// Func End, Address: 0x1f5654, Func Offset: 0x244
}

// xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5660
void xParCmdAlpha3rdPolyReg_Update()
{
	// Line 783, Address: 0x1f5660, Func Offset: 0
	// Func End, Address: 0x1f5668, Func Offset: 0x8
}

// xParCmdScale_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5670
void xParCmdScale_Update()
{
	// Line 736, Address: 0x1f5670, Func Offset: 0
	// Func End, Address: 0x1f5678, Func Offset: 0x8
}

// xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5680
void xParCmdSmokeAlpha_Update()
{
	// Line 670, Address: 0x1f5680, Func Offset: 0
	// Func End, Address: 0x1f5688, Func Offset: 0x8
}

// xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5690
void xParCmdScale3rdPolyReg_Update()
{
	// Line 591, Address: 0x1f5690, Func Offset: 0
	// Func End, Address: 0x1f5698, Func Offset: 0x8
}

// xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f56a0
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdMoveRandomPar* cmd;
	// Line 519, Address: 0x1f56a0, Func Offset: 0
	// Line 528, Address: 0x1f56a4, Func Offset: 0x4
	// Line 519, Address: 0x1f56a8, Func Offset: 0x8
	// Line 528, Address: 0x1f56ac, Func Offset: 0xc
	// Line 519, Address: 0x1f56b0, Func Offset: 0x10
	// Line 521, Address: 0x1f56bc, Func Offset: 0x1c
	// Line 528, Address: 0x1f56c0, Func Offset: 0x20
	// Line 535, Address: 0x1f56c4, Func Offset: 0x24
	// Line 530, Address: 0x1f56c8, Func Offset: 0x28
	// Line 532, Address: 0x1f56cc, Func Offset: 0x2c
	// Line 530, Address: 0x1f56d0, Func Offset: 0x30
	// Line 536, Address: 0x1f56d4, Func Offset: 0x34
	// Line 538, Address: 0x1f56e0, Func Offset: 0x40
	// Line 539, Address: 0x1f5700, Func Offset: 0x60
	// Line 541, Address: 0x1f5724, Func Offset: 0x84
	// Line 542, Address: 0x1f5728, Func Offset: 0x88
	// Line 544, Address: 0x1f5730, Func Offset: 0x90
	// Func End, Address: 0x1f5748, Func Offset: 0xa8
}

// xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5750
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdMove* cmd;
	// Line 484, Address: 0x1f5750, Func Offset: 0
	// Line 486, Address: 0x1f5774, Func Offset: 0x24
	// Line 494, Address: 0x1f5778, Func Offset: 0x28
	// Line 495, Address: 0x1f5784, Func Offset: 0x34
	// Line 496, Address: 0x1f579c, Func Offset: 0x4c
	// Line 497, Address: 0x1f57b4, Func Offset: 0x64
	// Line 504, Address: 0x1f57c0, Func Offset: 0x70
	// Line 499, Address: 0x1f57c4, Func Offset: 0x74
	// Line 497, Address: 0x1f57c8, Func Offset: 0x78
	// Line 499, Address: 0x1f57cc, Func Offset: 0x7c
	// Line 497, Address: 0x1f57d0, Func Offset: 0x80
	// Line 499, Address: 0x1f57d4, Func Offset: 0x84
	// Line 497, Address: 0x1f57e0, Func Offset: 0x90
	// Line 499, Address: 0x1f57e4, Func Offset: 0x94
	// Line 500, Address: 0x1f57e8, Func Offset: 0x98
	// Line 505, Address: 0x1f57f0, Func Offset: 0xa0
	// Line 507, Address: 0x1f57f8, Func Offset: 0xa8
	// Line 509, Address: 0x1f581c, Func Offset: 0xcc
	// Line 510, Address: 0x1f5820, Func Offset: 0xd0
	// Line 512, Address: 0x1f5828, Func Offset: 0xd8
	// Func End, Address: 0x1f584c, Func Offset: 0xfc
}

// xParCmdMove_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5850
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdMove* cmd;
	// Line 456, Address: 0x1f5850, Func Offset: 0
	// Line 464, Address: 0x1f5854, Func Offset: 0x4
	// Line 470, Address: 0x1f5858, Func Offset: 0x8
	// Line 464, Address: 0x1f585c, Func Offset: 0xc
	// Line 466, Address: 0x1f5864, Func Offset: 0x14
	// Line 471, Address: 0x1f586c, Func Offset: 0x1c
	// Line 473, Address: 0x1f5878, Func Offset: 0x28
	// Line 475, Address: 0x1f589c, Func Offset: 0x4c
	// Line 476, Address: 0x1f58a0, Func Offset: 0x50
	// Line 478, Address: 0x1f58a8, Func Offset: 0x58
	// Func End, Address: 0x1f58b0, Func Offset: 0x60
}

// xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f58b0
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdAccelerate* cmd;
	// Line 426, Address: 0x1f58b0, Func Offset: 0
	// Line 434, Address: 0x1f58b4, Func Offset: 0x4
	// Line 439, Address: 0x1f58b8, Func Offset: 0x8
	// Line 434, Address: 0x1f58bc, Func Offset: 0xc
	// Line 435, Address: 0x1f58c4, Func Offset: 0x14
	// Line 440, Address: 0x1f58cc, Func Offset: 0x1c
	// Line 442, Address: 0x1f58d8, Func Offset: 0x28
	// Line 443, Address: 0x1f58e4, Func Offset: 0x34
	// Line 444, Address: 0x1f58f0, Func Offset: 0x40
	// Line 446, Address: 0x1f58fc, Func Offset: 0x4c
	// Line 447, Address: 0x1f5900, Func Offset: 0x50
	// Line 448, Address: 0x1f5908, Func Offset: 0x58
	// Func End, Address: 0x1f5910, Func Offset: 0x60
}

// xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5910
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdOrbitLine* cmd;
	float32 mdt;
	float32 force;
	// Line 374, Address: 0x1f5910, Func Offset: 0
	// Line 383, Address: 0x1f5914, Func Offset: 0x4
	// Line 386, Address: 0x1f5918, Func Offset: 0x8
	// Line 387, Address: 0x1f591c, Func Offset: 0xc
	// Line 390, Address: 0x1f5928, Func Offset: 0x18
	// Line 392, Address: 0x1f5950, Func Offset: 0x40
	// Line 390, Address: 0x1f5954, Func Offset: 0x44
	// Line 392, Address: 0x1f5958, Func Offset: 0x48
	// Line 397, Address: 0x1f5970, Func Offset: 0x60
	// Line 401, Address: 0x1f5994, Func Offset: 0x84
	// Line 403, Address: 0x1f59a4, Func Offset: 0x94
	// Line 401, Address: 0x1f59a8, Func Offset: 0x98
	// Line 403, Address: 0x1f59ac, Func Offset: 0x9c
	// Line 405, Address: 0x1f59b8, Func Offset: 0xa8
	// Line 408, Address: 0x1f59c4, Func Offset: 0xb4
	// Line 409, Address: 0x1f59c8, Func Offset: 0xb8
	// Line 408, Address: 0x1f59cc, Func Offset: 0xbc
	// Line 409, Address: 0x1f59d8, Func Offset: 0xc8
	// Line 410, Address: 0x1f59e4, Func Offset: 0xd4
	// Line 411, Address: 0x1f59f4, Func Offset: 0xe4
	// Line 412, Address: 0x1f5a04, Func Offset: 0xf4
	// Line 415, Address: 0x1f5a08, Func Offset: 0xf8
	// Line 416, Address: 0x1f5a0c, Func Offset: 0xfc
	// Line 417, Address: 0x1f5a18, Func Offset: 0x108
	// Func End, Address: 0x1f5a20, Func Offset: 0x110
}

// xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5a20
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdOrbitPoint* cmd;
	float32 mdt;
	float32 force;
	// Line 330, Address: 0x1f5a20, Func Offset: 0
	// Line 339, Address: 0x1f5a24, Func Offset: 0x4
	// Line 342, Address: 0x1f5a28, Func Offset: 0x8
	// Line 343, Address: 0x1f5a2c, Func Offset: 0xc
	// Line 346, Address: 0x1f5a38, Func Offset: 0x18
	// Line 352, Address: 0x1f5a50, Func Offset: 0x30
	// Line 346, Address: 0x1f5a54, Func Offset: 0x34
	// Line 350, Address: 0x1f5a60, Func Offset: 0x40
	// Line 352, Address: 0x1f5a74, Func Offset: 0x54
	// Line 354, Address: 0x1f5a80, Func Offset: 0x60
	// Line 357, Address: 0x1f5a8c, Func Offset: 0x6c
	// Line 358, Address: 0x1f5a90, Func Offset: 0x70
	// Line 357, Address: 0x1f5a94, Func Offset: 0x74
	// Line 358, Address: 0x1f5aa0, Func Offset: 0x80
	// Line 359, Address: 0x1f5aac, Func Offset: 0x8c
	// Line 360, Address: 0x1f5abc, Func Offset: 0x9c
	// Line 361, Address: 0x1f5acc, Func Offset: 0xac
	// Line 364, Address: 0x1f5ad0, Func Offset: 0xb0
	// Line 365, Address: 0x1f5ad4, Func Offset: 0xb4
	// Line 366, Address: 0x1f5ae0, Func Offset: 0xc0
	// Func End, Address: 0x1f5ae8, Func Offset: 0xc8
}

// xParCmdFollow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5af0
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdFollow* cmd;
	float32 mdt;
	float32 force;
	// Line 292, Address: 0x1f5af0, Func Offset: 0
	// Line 304, Address: 0x1f5af4, Func Offset: 0x4
	// Line 301, Address: 0x1f5af8, Func Offset: 0x8
	// Line 305, Address: 0x1f5afc, Func Offset: 0xc
	// Line 308, Address: 0x1f5b08, Func Offset: 0x18
	// Line 314, Address: 0x1f5b20, Func Offset: 0x30
	// Line 308, Address: 0x1f5b24, Func Offset: 0x34
	// Line 311, Address: 0x1f5b30, Func Offset: 0x40
	// Line 314, Address: 0x1f5b40, Func Offset: 0x50
	// Line 311, Address: 0x1f5b44, Func Offset: 0x54
	// Line 314, Address: 0x1f5b48, Func Offset: 0x58
	// Line 316, Address: 0x1f5b50, Func Offset: 0x60
	// Line 317, Address: 0x1f5b60, Func Offset: 0x70
	// Line 318, Address: 0x1f5b70, Func Offset: 0x80
	// Line 320, Address: 0x1f5b80, Func Offset: 0x90
	// Line 321, Address: 0x1f5b84, Func Offset: 0x94
	// Line 322, Address: 0x1f5ba8, Func Offset: 0xb8
	// Func End, Address: 0x1f5bb0, Func Offset: 0xc0
}

// xParCmdAge_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bb0
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	float32 age_rate;
	// Line 271, Address: 0x1f5bb0, Func Offset: 0
	// Line 274, Address: 0x1f5bb8, Func Offset: 0x8
	// Line 276, Address: 0x1f5bbc, Func Offset: 0xc
	// Line 278, Address: 0x1f5bc8, Func Offset: 0x18
	// Line 280, Address: 0x1f5bd4, Func Offset: 0x24
	// Line 281, Address: 0x1f5bd8, Func Offset: 0x28
	// Line 284, Address: 0x1f5be0, Func Offset: 0x30
	// Func End, Address: 0x1f5be8, Func Offset: 0x38
}

// xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bf0
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdKillSlow* cmd;
	float32 speedLimit;
	// Line 220, Address: 0x1f5bf0, Func Offset: 0
	// Line 228, Address: 0x1f5bf4, Func Offset: 0x4
	// Line 231, Address: 0x1f5bf8, Func Offset: 0x8
	// Line 233, Address: 0x1f5bfc, Func Offset: 0xc
	// Line 235, Address: 0x1f5c08, Func Offset: 0x18
	// Line 238, Address: 0x1f5c1c, Func Offset: 0x2c
	// Line 239, Address: 0x1f5c38, Func Offset: 0x48
	// Line 241, Address: 0x1f5c40, Func Offset: 0x50
	// Line 242, Address: 0x1f5c44, Func Offset: 0x54
	// Line 243, Address: 0x1f5c4c, Func Offset: 0x5c
	// Line 246, Address: 0x1f5c54, Func Offset: 0x64
	// Line 243, Address: 0x1f5c58, Func Offset: 0x68
	// Line 249, Address: 0x1f5c64, Func Offset: 0x74
	// Line 250, Address: 0x1f5c80, Func Offset: 0x90
	// Line 252, Address: 0x1f5c88, Func Offset: 0x98
	// Line 253, Address: 0x1f5c8c, Func Offset: 0x9c
	// Line 256, Address: 0x1f5c98, Func Offset: 0xa8
	// Func End, Address: 0x1f5ca0, Func Offset: 0xb0
}

// xParCmdGetUpdateFunc__FUi
// Start address: 0x1f5ca0
void(*)(xParCmd*, xParGroup*, float32) xParCmdGetUpdateFunc(uint32 parType)
{
	int32 i;
	// Line 153, Address: 0x1f5ca0, Func Offset: 0
	// Line 155, Address: 0x1f5cb0, Func Offset: 0x10
	// Line 156, Address: 0x1f5cbc, Func Offset: 0x1c
	// Line 157, Address: 0x1f5ce0, Func Offset: 0x40
	// Line 160, Address: 0x1f5cf0, Func Offset: 0x50
	// Line 161, Address: 0x1f5cf8, Func Offset: 0x58
	// Func End, Address: 0x1f5d00, Func Offset: 0x60
}

// xParCmdGetSize__FUi
// Start address: 0x1f5d00
uint32 xParCmdGetSize(uint32 parType)
{
	int32 i;
	// Line 132, Address: 0x1f5d00, Func Offset: 0
	// Line 134, Address: 0x1f5d10, Func Offset: 0x10
	// Line 135, Address: 0x1f5d1c, Func Offset: 0x1c
	// Line 136, Address: 0x1f5d40, Func Offset: 0x40
	// Line 140, Address: 0x1f5d50, Func Offset: 0x50
	// Line 141, Address: 0x1f5d58, Func Offset: 0x58
	// Func End, Address: 0x1f5d60, Func Offset: 0x60
}

// xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
// Start address: 0x1f5d60
void xParCmdRegister(uint32 parType, uint32 size, void(*func)(xParCmd*, xParGroup*, float32))
{
	// Line 113, Address: 0x1f5d64, Func Offset: 0x4
	// Line 109, Address: 0x1f5d68, Func Offset: 0x8
	// Line 113, Address: 0x1f5d6c, Func Offset: 0xc
	// Line 114, Address: 0x1f5d74, Func Offset: 0x14
	// Line 113, Address: 0x1f5d78, Func Offset: 0x18
	// Line 114, Address: 0x1f5d7c, Func Offset: 0x1c
	// Line 113, Address: 0x1f5d80, Func Offset: 0x20
	// Line 114, Address: 0x1f5d84, Func Offset: 0x24
	// Line 115, Address: 0x1f5d88, Func Offset: 0x28
	// Line 114, Address: 0x1f5d8c, Func Offset: 0x2c
	// Line 115, Address: 0x1f5d90, Func Offset: 0x30
	// Line 117, Address: 0x1f5d98, Func Offset: 0x38
	// Func End, Address: 0x1f5da0, Func Offset: 0x40
}

// xParCmdInit__Fv
// Start address: 0x1f5da0
void xParCmdInit()
{
	// Line 65, Address: 0x1f5da0, Func Offset: 0
	// Line 69, Address: 0x1f5db0, Func Offset: 0x10
	// Line 65, Address: 0x1f5db4, Func Offset: 0x14
	// Line 69, Address: 0x1f5db8, Func Offset: 0x18
	// Line 68, Address: 0x1f5dbc, Func Offset: 0x1c
	// Line 65, Address: 0x1f5dc0, Func Offset: 0x20
	// Line 69, Address: 0x1f5dc4, Func Offset: 0x24
	// Line 65, Address: 0x1f5dc8, Func Offset: 0x28
	// Line 70, Address: 0x1f5dcc, Func Offset: 0x2c
	// Line 65, Address: 0x1f5dd0, Func Offset: 0x30
	// Line 72, Address: 0x1f5dd4, Func Offset: 0x34
	// Line 65, Address: 0x1f5dd8, Func Offset: 0x38
	// Line 66, Address: 0x1f5ddc, Func Offset: 0x3c
	// Line 67, Address: 0x1f5df8, Func Offset: 0x58
	// Line 68, Address: 0x1f5e14, Func Offset: 0x74
	// Line 66, Address: 0x1f5e20, Func Offset: 0x80
	// Line 68, Address: 0x1f5e24, Func Offset: 0x84
	// Line 66, Address: 0x1f5e28, Func Offset: 0x88
	// Line 68, Address: 0x1f5e2c, Func Offset: 0x8c
	// Line 69, Address: 0x1f5e38, Func Offset: 0x98
	// Line 67, Address: 0x1f5e44, Func Offset: 0xa4
	// Line 70, Address: 0x1f5e48, Func Offset: 0xa8
	// Line 67, Address: 0x1f5e4c, Func Offset: 0xac
	// Line 70, Address: 0x1f5e50, Func Offset: 0xb0
	// Line 68, Address: 0x1f5e58, Func Offset: 0xb8
	// Line 70, Address: 0x1f5e5c, Func Offset: 0xbc
	// Line 68, Address: 0x1f5e60, Func Offset: 0xc0
	// Line 70, Address: 0x1f5e64, Func Offset: 0xc4
	// Line 71, Address: 0x1f5e70, Func Offset: 0xd0
	// Line 72, Address: 0x1f5e8c, Func Offset: 0xec
	// Line 75, Address: 0x1f5ea0, Func Offset: 0x100
	// Line 72, Address: 0x1f5ea4, Func Offset: 0x104
	// Line 75, Address: 0x1f5ea8, Func Offset: 0x108
	// Line 73, Address: 0x1f5eac, Func Offset: 0x10c
	// Line 74, Address: 0x1f5ed4, Func Offset: 0x134
	// Line 75, Address: 0x1f5ef0, Func Offset: 0x150
	// Line 69, Address: 0x1f5efc, Func Offset: 0x15c
	// Line 75, Address: 0x1f5f00, Func Offset: 0x160
	// Line 69, Address: 0x1f5f04, Func Offset: 0x164
	// Line 75, Address: 0x1f5f08, Func Offset: 0x168
	// Line 76, Address: 0x1f5f10, Func Offset: 0x170
	// Line 77, Address: 0x1f5f2c, Func Offset: 0x18c
	// Line 78, Address: 0x1f5f48, Func Offset: 0x1a8
	// Line 79, Address: 0x1f5f64, Func Offset: 0x1c4
	// Line 80, Address: 0x1f5f80, Func Offset: 0x1e0
	// Line 81, Address: 0x1f5f9c, Func Offset: 0x1fc
	// Line 82, Address: 0x1f5fac, Func Offset: 0x20c
	// Line 83, Address: 0x1f5fc8, Func Offset: 0x228
	// Line 84, Address: 0x1f5fe4, Func Offset: 0x244
	// Line 85, Address: 0x1f5ff4, Func Offset: 0x254
	// Line 86, Address: 0x1f6010, Func Offset: 0x270
	// Line 87, Address: 0x1f602c, Func Offset: 0x28c
	// Line 89, Address: 0x1f6048, Func Offset: 0x2a8
	// Line 90, Address: 0x1f6070, Func Offset: 0x2d0
	// Line 91, Address: 0x1f608c, Func Offset: 0x2ec
	// Line 92, Address: 0x1f609c, Func Offset: 0x2fc
	// Line 70, Address: 0x1f60b8, Func Offset: 0x318
	// Line 71, Address: 0x1f60c0, Func Offset: 0x320
	// Line 86, Address: 0x1f60c8, Func Offset: 0x328
	// Line 72, Address: 0x1f60d0, Func Offset: 0x330
	// Line 74, Address: 0x1f60d8, Func Offset: 0x338
	// Line 75, Address: 0x1f60e0, Func Offset: 0x340
	// Line 76, Address: 0x1f60e8, Func Offset: 0x348
	// Line 77, Address: 0x1f60f0, Func Offset: 0x350
	// Line 78, Address: 0x1f60f8, Func Offset: 0x358
	// Line 79, Address: 0x1f6100, Func Offset: 0x360
	// Line 80, Address: 0x1f6108, Func Offset: 0x368
	// Line 81, Address: 0x1f6110, Func Offset: 0x370
	// Line 87, Address: 0x1f6118, Func Offset: 0x378
	// Line 81, Address: 0x1f6120, Func Offset: 0x380
	// Line 82, Address: 0x1f6128, Func Offset: 0x388
	// Line 83, Address: 0x1f6130, Func Offset: 0x390
	// Line 91, Address: 0x1f6138, Func Offset: 0x398
	// Line 84, Address: 0x1f6140, Func Offset: 0x3a0
	// Line 85, Address: 0x1f6150, Func Offset: 0x3b0
	// Line 92, Address: 0x1f6158, Func Offset: 0x3b8
	// Line 90, Address: 0x1f6160, Func Offset: 0x3c0
	// Line 91, Address: 0x1f6168, Func Offset: 0x3c8
	// Line 95, Address: 0x1f616c, Func Offset: 0x3cc
	// Func End, Address: 0x1f6174, Func Offset: 0x3d4
}

