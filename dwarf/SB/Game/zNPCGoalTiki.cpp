typedef struct xClumpCollBSPBranchNode;
typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct zNPCGoalTikiCount;
typedef struct _tagLightningLine;
typedef struct xParGroup;
typedef struct RxPipelineNode;
typedef struct anim_coll_data;
typedef struct RpClump;
typedef struct zFrag;
typedef struct xPEEntBone;
typedef struct _anon0;
typedef struct RpGeometry;
typedef struct xClumpCollBSPTriangle;
typedef struct RpWorldSector;
typedef struct xBase;
typedef struct xParEmitterAsset;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct zFragParticleAsset;
typedef struct xGoal;
typedef struct _anon1;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xEnv;
typedef struct RxNodeDefinition;
typedef struct xMat4x3;
typedef struct RpPolygon;
typedef struct xAnimEffect;
typedef struct zNPCGoalTikiPatrol;
typedef struct xParEmitterPropsAsset;
typedef struct RwV3d;
typedef struct zNPCTiki;
typedef struct xSpline3;
typedef struct NPCConfig;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zNPCGoalTikiIdle;
typedef struct zNPCGoalTikiDead;
typedef struct zNPCSettings;
typedef struct RpVertexNormal;
typedef struct RxPipeline;
typedef struct xAnimSingle;
typedef struct RxPipelineCluster;
typedef struct xListItem_0;
typedef struct RxPipelineNodeParam;
typedef struct xAnimState;
typedef struct zParEmitter;
typedef struct _tagLightningRot;
typedef struct xParSys;
typedef struct RwTexCoords;
typedef enum en_trantype;
typedef struct RxHeap;
typedef struct xFactoryInst;
typedef struct xPECircle;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xVec3;
typedef struct xQuat;
typedef struct zFragLightning;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef union _class_0;
typedef struct zFragBone;
typedef struct rxHeapBlockHeader;
typedef struct xModelInstance;
typedef struct zFragLightningAsset;
typedef struct NPCSndTrax;
typedef struct RxPipelineRequiresCluster;
typedef struct NPCSndQueue;
typedef struct zNPCGoalCommon;
typedef struct _class_1;
typedef struct zFragAsset;
typedef struct RpTriangle;
typedef struct xPSYNote;
typedef struct xCollis;
typedef struct xEntShadow;
typedef struct RpAtomic;
typedef struct xModelPool;
typedef struct zLightning;
typedef struct _tagEmitSphere;
typedef struct zShrapnelAsset;
typedef struct iEnv;
typedef struct _tagLightningZeus;
typedef struct zNPCCommon;
typedef struct xAnimFile;
typedef union zFragLocInfo;
typedef struct xLightKit;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xJSPNodeInfo;
typedef struct rxReq;
typedef struct xMovePointAsset;
typedef enum en_NPC_SOUND;
typedef struct zFragSound;
typedef struct xAnimTransitionList;
typedef struct xAnimTransition;
typedef struct _anon2;
typedef struct RwRaster;
typedef struct xQCData;
typedef enum RxClusterValidityReq;
typedef struct zFragProjectileAsset;
typedef struct zFragSoundAsset;
typedef struct xModelTag;
typedef struct xLinkAsset;
typedef struct xPsyche;
typedef struct _tagEmitRect;
typedef struct xParabola;
typedef struct xCoef3;
typedef struct zFragLocation;
typedef enum RxNodeDefEditable;
typedef struct xDynAsset;
typedef enum RxClusterValid;
typedef struct xParEmitterCustomSettings;
typedef enum RpWorldRenderOrder;
typedef struct xSurface;
typedef struct _anon3;
typedef struct xJSPHeader;
typedef struct RpMaterial;
typedef struct xRot;
typedef struct _anon4;
typedef struct xModelBucket;
typedef struct zNPCLassoInfo;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xEntAsset;
typedef struct zNPCGoalTikiHide;
typedef struct zFragShockwave;
typedef struct zNPCGoalTikiDying;
typedef struct RpSector;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef struct xPEEntBound;
typedef struct zFragShockwaveAsset;
typedef struct RyzMemGrow;
typedef struct xEntNPCAsset;
typedef enum RxClusterForcePresent;
typedef struct _tagEmitLine;
typedef struct xClumpCollBSPTree;
typedef enum zFragType;
typedef struct xCylinder;
typedef struct xBBox;
typedef struct xBox;
typedef struct xCurveAsset;
typedef struct RxClusterDefinition;
typedef struct RpLight;
typedef struct xEntFrame;
typedef struct xEntDrive;
typedef struct RpWorld;
typedef struct xNPCBasic;
typedef struct RwSphere;
typedef enum en_pendtype;
typedef struct zMovePoint;
typedef struct xScene;
typedef struct RwTexDictionary;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct RxOutputSpec;
typedef struct xShadowSimplePoly;
typedef struct xGridBound;
typedef struct zFragGroup;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xListItem_1;
typedef struct RwLLLink;
typedef union zFragInfo;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_0;
typedef struct RwObject;
typedef struct xAnimActiveEffect;
typedef struct _class_2;
typedef struct _anon5;
typedef struct _anon6;
typedef struct RxIoSpec;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct _tagEmitOffsetPoint;
typedef struct xShadowSimpleCache;
typedef struct RxNodeMethods;
typedef struct xMovePoint;
typedef enum en_npcbtyp;
typedef struct zFragParticle;
typedef struct tri_data_1;
typedef struct RpInterpolator;
typedef struct xCoef;
typedef struct xAnimMultiFileBase;
typedef struct _anon7;
typedef struct RyzMemData;
typedef struct _class_3;
typedef struct _class_4;
typedef enum PSY_BRAIN_STATUS;
typedef struct RxCluster;
typedef struct xBaseAsset;
typedef struct xPEVCyl;
typedef struct xFFX;
typedef enum en_GOALSTATE;
typedef enum en_LASSO_STATUS;
typedef struct xModelAssetParam;
typedef struct RxPacket;
typedef struct zFragProjectile;
typedef struct RpMaterialList;
typedef struct xParInterp;
typedef struct iColor_tag;
typedef enum en_dupowavmod;
typedef struct RwRGBAReal;
typedef enum zFragLocType;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwLinkList;

typedef void(*type_0)(xEnt*, xVec3*);
typedef void(*type_1)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_2)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef xBase*(*type_7)(u32);
typedef void(*type_9)(xEnt*, xScene*, f32, xEntCollis*);
typedef s32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef s8*(*type_11)(xBase*);
typedef u32(*type_14)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef s8*(*type_17)(u32);
typedef u32(*type_20)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_23)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_24)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_25)(s32*, en_trantype*);
typedef s32(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_27)(RxNodeDefinition*);
typedef void(*type_28)(zFrag*, zFragAsset*);
typedef void(*type_30)(RxNodeDefinition*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef void(*type_36)(zShrapnelAsset*, xModelInstance*, xVec3*, type_28);
typedef u32(*type_40)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_49)(xGoal*, void*, f32, void*);
typedef void(*type_52)(xEnt*);
typedef RpWorldSector*(*type_53)(RpWorldSector*);
typedef void(*type_54)(xEnt*);
typedef s32(*type_55)(xGoal*, void*, en_trantype*, f32, void*);
typedef s32(*type_59)(xGoal*, void*, en_trantype*, f32, void*);
typedef s32(*type_60)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_63)(xEnt*, xScene*, f32);
typedef void(*type_68)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_70)(xEnt*);
typedef void(*type_73)(xMemPool*, void*);
typedef void(*type_81)(RwResEntry*);
typedef void(*type_82)(zFrag*, f32);

typedef xCollis type_6[18];
typedef f32 type_8[4];
typedef xModelTag type_12[20];
typedef f32 type_13[4];
typedef RwTexCoords* type_15[8];
typedef xVec3 type_18[9];
typedef f32 type_19[16];
typedef s32 type_21[5];
typedef xVec3 type_29[2];
typedef u16 type_31[3];
typedef xParInterp type_32[1];
typedef u8 type_33[4];
typedef s8 type_34[3];
typedef f32 type_37[2];
typedef f32 type_38[2];
typedef f32 type_39[2];
typedef f32 type_41[2];
typedef xParInterp type_42[4];
typedef s8 type_43[16];
typedef xParInterp type_44[4];
typedef s8 type_45[4];
typedef s8 type_46[16];
typedef RwTexCoords* type_47[8];
typedef f32 type_48[4];
typedef u8 type_50[3];
typedef f32 type_51[4];
typedef f32 type_56[4];
typedef u32 type_57[4];
typedef f32 type_58[4];
typedef xVec3 type_61[3];
typedef zFrag* type_62[21];
typedef u32 type_64[2];
typedef RpLight* type_65[2];
typedef u8 type_66[3];
typedef RwFrame* type_67[2];
typedef f32 type_69[16];
typedef u8 type_71[3];
typedef f32 type_72[2];
typedef u8 type_74[3];
typedef s8 type_75[32];
typedef xGoal* type_76[5];
typedef f32 type_77[4];
typedef s8 type_78[32];
typedef f32 type_79[1];
typedef xVec3 type_80[16];
typedef type_79 type_83[5];
typedef u8 type_84[2];
typedef u8 type_85[3];
typedef xVec3 type_86[16];
typedef zNPCTiki* type_87[4];
typedef u16 type_88[3];
typedef zNPCTiki* type_89[4];
typedef f32 type_90[2];
typedef NPCSndQueue type_91[4];
typedef f32 type_92[16];
typedef xVec3 type_93[4];
typedef u8 type_94[2];
typedef xModelInstance* type_95[2];
typedef xAnimMultiFileEntry type_96[1];
typedef RxCluster type_97[1];

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	u16 idx;
	u16 num_updates;
	u8 flags;
	u8 miscflags;
	u8 subType;
	u8 pflags;
	u8 moreFlags;
	u8 isCulled;
	u8 driving_count;
	u8 num_ffx;
	u8 collType;
	u8 collLev;
	u8 chkby;
	u8 penby;
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	xLightKit* lightKit;
	type_63 update;
	type_63 endUpdate;
	type_0 bupdate;
	type_68 move;
	type_70 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_22 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
};

struct zNPCGoalTikiCount : zNPCGoalCommon
{
	f32 tmr_count;
	s32 beingCarried;
};

struct _tagLightningLine
{
	f32 unused;
};

struct xParGroup
{
};

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	u32 numOutputs;
	u32* outputs;
	RxPipelineCluster** slotClusterRefs;
	u32* slotsContinue;
	void* privateData;
	u32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	u32 initializationDataSize;
};

struct anim_coll_data
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_5 callback;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	f32 delay;
	f32 alivetime;
	f32 lifetime;
	type_82 update;
	type_95 parent;
	zFrag* prev;
	zFrag* next;
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

struct _anon0
{
};

struct RpGeometry
{
	RwObject object;
	u32 flags;
	u16 lockedSinceLastInst;
	s16 refCount;
	s32 numTriangles;
	s32 numVertices;
	s32 numMorphTargets;
	s32 numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	type_47 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_15 texCoords;
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_60 eventFunc;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	u32 parEmitterID;
	zParEmitter* parEmitter;
};

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	s32 goalID;
	en_GOALSTATE stat;
	s32 flg_able;
	type_59 fun_process;
	type_49 fun_precalc;
	type_55 fun_chkRule;
	void* cbdata;
};

struct _anon1
{
};

struct xAnimPlay
{
	xAnimPlay* Next;
	u16 NumSingle;
	u16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_24 BeforeAnimMatrices;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RxNodeDefinition
{
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RpPolygon
{
	u16 matIndex;
	type_88 vertIndex;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_20 Callback;
};

struct zNPCGoalTikiPatrol : zNPCGoalCommon
{
	xVec3 dest_pos;
	xVec3 vel;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
	union
	{
		xParInterp rate;
		type_32 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_42 color_birth;
	type_44 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct zNPCTiki : zNPCCommon
{
	u32 tikiFlag;
	xVec3 lastAt;
	xBound origLocalBound;
	xVec3 deltaPos;
	f32 timeToLive;
	f32 t1;
	f32 t2;
	f32 t3;
	xVec3 v1;
	f32 vel;
	f32 landHt;
	xEnt* nonTikiParent;
	xVec3 nonTikiParentDisp;
	u8 numParents;
	type_87 parents;
	u8 numChildren;
	type_89 children;
	zNPCTiki* nextOrphan;
	u32 updatedParents;
	s32 contactParent;
	void* tikiAnim;
	f32 tikiAnimTime;
};

struct xSpline3
{
	u16 type;
	u16 flags;
	u32 N;
	u32 allocN;
	xVec3* points;
	f32* time;
	xVec3* p12;
	xVec3* bctrl;
	f32* knot;
	xCoef3* coef;
	u32 arcSample;
	f32* arcLength;
};

struct NPCConfig : xListItem_1
{
	u32 modelID;
	s32 flg_config;
	f32 spd_turnMax;
	f32 spd_moveMax;
	f32 fac_accelMax;
	f32 fac_driftMax;
	f32 fac_gravKnock;
	f32 fac_elastic;
	s32 pts_damage;
	s32 useBoxBound;
	xVec3 off_bound;
	xVec3 dim_bound;
	f32 npcMass;
	f32 npcMassInv;
	f32 rad_detect;
	f32 hyt_detect;
	f32 off_detect;
	f32 rad_attack;
	f32 fov_attack;
	xVec3 scl_model;
	f32 tym_attack;
	f32 tym_fidget;
	f32 tym_stun;
	f32 tym_alert;
	f32 dst_castShadow;
	f32 rad_shadowCache;
	f32 rad_shadowRaster;
	f32 rad_dmgSize;
	s32 flg_vert;
	type_12 tag_vert;
	type_18 animFrameRange;
	type_21 cnt_esteem;
	f32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	s32 test_count;
	type_33 talk_filter;
	u8 talk_filter_size;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zNPCGoalTikiIdle : zNPCGoalCommon
{
	f32 tmr_wait;
};

struct zNPCGoalTikiDead : zNPCGoalCommon
{
	f32 tmr_resurrect;
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	s8 allowDetect;
	s8 allowPatrol;
	s8 allowWander;
	s8 reduceCollide;
	s8 useNavSplines;
	type_34 pad;
	s8 allowChase;
	s8 allowAttack;
	s8 assumeLOS;
	s8 assumeFOV;
	en_dupowavmod duploWaveMode;
	f32 duploSpawnDelay;
	s32 duploSpawnLifeMax;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct RxPipeline
{
	s32 locked;
	u32 numNodes;
	RxPipelineNode* nodes;
	u32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	u32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	u32 superBlockSize;
	u32 entryPoint;
	u32 pluginId;
	u32 pluginData;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_72 BilinearLerp;
	xAnimEffect* Effect;
	u32 ActiveCount;
	f32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	f32 BlendFactor;
	u32 pad;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xListItem_0
{
	s32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimState
{
	xAnimState* Next;
	s8* Name;
	u32 ID;
	u32 Flags;
	u32 UserFlags;
	f32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	f32* BoneBlend;
	f32* TimeSnap;
	f32 FadeRecip;
	u16* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_16 BeforeEnter;
	type_1 StateCallback;
	type_24 BeforeAnimMatrices;
};

struct zParEmitter : xParEmitter
{
};

struct _tagLightningRot
{
	type_19 deg;
	f32 degrees;
	f32 height;
};

struct xParSys
{
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

enum en_trantype
{
	GOAL_TRAN_NONE,
	GOAL_TRAN_SET,
	GOAL_TRAN_PUSH,
	GOAL_TRAN_POP,
	GOAL_TRAN_POPTO,
	GOAL_TRAN_POPALL,
	GOAL_TRAN_POPBASE,
	GOAL_TRAN_POPSAFE,
	GOAL_TRAN_SWAP,
	GOAL_TRAN_NOMORE,
	GOAL_TRAN_FORCE = 0x7fffffff
};

struct RxHeap
{
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xAnimTable
{
	xAnimTable* Next;
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_73 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_81 destroyNotify;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zFragBone
{
	s32 index;
	xVec3 offset;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_57 pad;
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	u32 PipeFlags;
	f32 RedMultiplier;
	f32 GreenMultiplier;
	f32 BlueMultiplier;
	f32 Alpha;
	f32 FadeStart;
	f32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	u16 Flags;
	u8 BoneCount;
	u8 BoneIndex;
	u8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	u32 modelID;
	u32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_2 anim_coll;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	u32 startParentID;
	u32 endParentID;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	s8* nam_sound;
	u32 aid_sound;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct NPCSndQueue
{
	u32 sndDirect;
	en_NPC_SOUND sndtype;
	s32 flg_snd;
	f32 tmr_delay;
	f32 radius;
};

struct zNPCGoalCommon : xGoal
{
	s32 flg_npcgauto;
	s32 flg_npcgable;
	u32 anid_played;
	union
	{
		s32 flg_info;
		s32 flg_user;
	};
};

struct _class_1
{
	type_29 endPoint;
	xVec3 direction;
	f32 length;
	f32 scale;
	f32 width;
	type_37 endParam;
	type_38 endVel;
	type_39 paramSpan;
	f32 arc_height;
	xVec3 arc_normal;
};

struct zFragAsset
{
	zFragType type;
	u32 id;
	type_64 parentID;
	f32 lifetime;
	f32 delay;
};

struct RpTriangle
{
	type_31 vertIndex;
	s16 matIndex;
};

struct xPSYNote
{
};

struct xCollis
{
	u32 flags;
	u32 oid;
	void* optr;
	xModelInstance* mptr;
	f32 dist;
	xVec3 norm;
	xVec3 tohit;
	xVec3 depen;
	xVec3 hdng;
	union
	{
		_class_4 tuv;
		tri_data_0 tri;
	};
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_41 radius;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_35 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct zLightning
{
	u32 type;
	u32 flags;
	union
	{
		_class_3 legacy;
		_class_1 func;
	};
	iColor_tag color;
	f32 time_left;
	f32 time_total;
};

struct _tagEmitSphere
{
	f32 radius;
};

struct zShrapnelAsset
{
	s32 fassetCount;
	u32 shrapnelID;
	type_36 initCB;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_67 light_frame;
	s32 memlvl;
};

struct _tagLightningZeus
{
	f32 normal_offset;
	f32 back_offset;
	f32 side_offset;
};

struct zNPCCommon : xNPCBasic
{
	xEntAsset* entass;
	xEntNPCAsset* npcass;
	zNPCSettings* npcsetass;
	s32 flg_vuln;
	s32 flg_move;
	s32 flg_misc;
	s32 flg_able;
	NPCConfig* cfg_npc;
	zNPCSettings npcset;
	zMovePoint* nav_past;
	zMovePoint* nav_curr;
	zMovePoint* nav_dest;
	zMovePoint* nav_lead;
	xSpline3* spl_mvptspline;
	f32 len_mvptspline;
	f32 dst_curspline;
	xEntDrive* drv_data;
	xPsyche* psy_instinct;
	zNPCCommon* npc_duplodude;
	f32 spd_throttle;
	s32 flg_xtrarend;
	f32 tmr_fidget;
	f32 tmr_invuln;
	zShrapnelAsset* explosion;
	xModelAssetParam* parmdata;
	u32 pdatsize;
	zNPCLassoInfo* lassdata;
	type_91 snd_queue;
};

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_94 NumAnims;
	void** RawData;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct RwMatrixTag
{
	RwV3d right;
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct rxReq
{
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	u16 wt;
	u8 on;
	u8 bezIndex;
	u8 flg_props;
	u8 pad;
	u16 numPoints;
	f32 delay;
	f32 zoneRadius;
	f32 arenaRadius;
};

enum en_NPC_SOUND
{
	NPC_STYP_BOGUS = 0xfffffffe,
	NPC_STYP_LISTEND = 0,
	NPC_STYP_ENCOUNTER,
	NPC_STYP_CLANKING,
	NPC_STYP_EXCLAIM,
	NPC_STYP_OUCH,
	NPC_STYP_CHEERING,
	NPC_STYP_RESPAWN,
	NPC_STYP_ALERT,
	NPC_STYP_DIZZY,
	NPC_STYP_DANCE,
	NPC_STYP_LAUGH,
	NPC_STYP_ATTACK,
	NPC_STYP_PUNCH,
	NPC_STYP_WEPLAUNCH,
	NPC_STYP_LIGHTNING,
	NPC_STYP_WARNBANG,
	NPC_STYP_DEATH,
	NPC_STYP_DEATHJELLY,
	NPC_STYP_BONKED,
	NPC_STYP_UNBONKED,
	NPC_STYP_TIKISTACK,
	NPC_STYP_TIKIEXPLODE,
	NPC_STYP_TIKITHUNDER,
	NPC_STYP_XSFXTALK,
	NPC_STYP_ONELINER,
	NPC_STYP_ONELINERTOO,
	NPC_STYP_NOMORE,
	NPC_STYP_FORCE = 0x7fffffff
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	u32 soundID;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_40 Conditional;
	type_40 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct _anon2
{
};

struct RwRaster
{
	RwRaster* parent;
	u8* cpPixels;
	u8* palette;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	s16 nOffsetX;
	s16 nOffsetY;
	u8 cType;
	u8 cFlags;
	u8 privateFlags;
	u8 cFormat;
	u8* originalPixels;
	s32 originalWidth;
	s32 originalHeight;
	s32 originalStride;
};

struct xQCData
{
	s8 xmin;
	s8 ymin;
	s8 zmin;
	s8 zmin_dup;
	s8 xmax;
	s8 ymax;
	s8 zmax;
	s8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zFragProjectileAsset : zFragAsset
{
	u32 modelInfoID;
	RpAtomic* modelFile;
	zFragLocation launch;
	zFragLocation vel;
	f32 bounce;
	s32 maxBounces;
	u32 flags;
	u32 childID;
	zShrapnelAsset* child;
	f32 minScale;
	f32 maxScale;
	u32 scaleCurveID;
	xCurveAsset* scaleCurve;
	f32 gravity;
};

struct zFragSoundAsset : zFragAsset
{
	u32 assetID;
	zFragLocation source;
	f32 volume;
	f32 innerRadius;
	f32 outerRadius;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_48 wt;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_51 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	s32 flg_psyche;
	xGoal* goallist;
	type_76 goalstak;
	type_83 tmr_stack;
	s32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	s32 gid_safegoal;
	type_25 fun_remap;
	void* userContext;
	s32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	f32 gravity;
	f32 minTime;
	f32 maxTime;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_50 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xSurface : xBase
{
	u32 idx;
	u32 type;
	union
	{
		u32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	f32 friction;
	u8 state;
	type_66 pad;
	void* moprops;
};

struct _anon3
{
};

struct xJSPHeader
{
	type_45 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct _anon4
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct zNPCLassoInfo
{
	en_LASSO_STATUS stage;
	xEnt* lassoee;
	xAnimState* holdGuideAnim;
	xModelInstance* holdGuideModel;
	xAnimState* grabGuideAnim;
	xModelInstance* grabGuideModel;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_96 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_75 name;
	type_78 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xEntAsset : xBaseAsset
{
	u8 flags;
	u8 subtype;
	u8 pflags;
	u8 moreFlags;
	u8 pad;
	u32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	f32 redMult;
	f32 greenMult;
	f32 blueMult;
	f32 seeThru;
	f32 seeThruSpeed;
	u32 modelInfoID;
	u32 animListID;
};

struct zNPCGoalTikiHide : zNPCGoalCommon
{
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	f32 currSize;
	f32 currVelocity;
	f32 deltVelocity;
	f32 currSpin;
	f32 deltSpin;
	type_56 currColor;
	type_58 deltColor;
};

struct zNPCGoalTikiDying : zNPCGoalCommon
{
	f32 tmr_dying;
};

struct RpSector
{
	s32 type;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_85 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct zFragShockwaveAsset : zFragAsset
{
	u32 modelInfoID;
	f32 birthRadius;
	f32 deathRadius;
	f32 birthVelocity;
	f32 deathVelocity;
	f32 birthSpin;
	f32 deathSpin;
	type_8 birthColor;
	type_13 deathColor;
};

struct RyzMemGrow
{
	s32 flg_grow;
	s32 amt;
	s8* ptr;
	xBase* user;
	s32 amt_last;
	s8* ptr_last;
	xBase* user_last;
};

struct xEntNPCAsset
{
	s32 npcFlags;
	s32 npcModel;
	s32 npcProps;
	u32 movepoint;
	u32 taskWidgetPrime;
	u32 taskWidgetSecond;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xCurveAsset
{
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct RpLight
{
	RwObjectHasFrame object;
	f32 radius;
	RwRGBAReal color;
	f32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	u16 lightFrame;
	u16 pad;
};

struct xEntFrame
{
	xMat4x3 mat;
	xMat4x3 oldmat;
	xVec3 oldvel;
	xRot oldrot;
	xRot drot;
	xRot rot;
	xVec3 dpos;
	xVec3 dvel;
	xVec3 vel;
	u32 mode;
};

struct xEntDrive
{
	u32 flags;
	f32 otm;
	f32 otmr;
	f32 os;
	f32 tm;
	f32 tmr;
	f32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	f32 yaw;
	xVec3 dloc;
	tri_data_1 tri;
};

struct RpWorld
{
	RwObject object;
	u32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	s32 numTexCoordSets;
	s32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	type_53 renderCallBack;
	RxPipeline* pipeline;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_52 f_setup;
	type_54 f_reset;
	union
	{
		s32 flg_basenpc;
		s32 inUpdate;
		s32 flg_upward;
	};
	s32 colFreq;
	s32 colFreqReset;
	union
	{
		u32 flg_colCheck;
		u32 flg_penCheck;
		u32 flg_unused;
	};
	s32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

enum en_pendtype
{
	PEND_TRAN_NONE,
	PEND_TRAN_SET,
	PEND_TRAN_PUSH,
	PEND_TRAN_POP,
	PEND_TRAN_POPTO,
	PEND_TRAN_POPALL,
	PEND_TRAN_SWAP,
	PEND_TRAN_INPROG,
	PEND_TRAN_NOMORE
};

struct zMovePoint : xMovePoint
{
};

struct xScene
{
	u32 sceneID;
	u16 flags;
	u16 num_ents;
	u16 num_trigs;
	u16 num_stats;
	u16 num_dyns;
	u16 num_npcs;
	u16 num_act_ents;
	u16 num_nact_ents;
	f32 gravity;
	f32 drag;
	f32 friction;
	u16 num_ents_allocd;
	u16 num_trigs_allocd;
	u16 num_stats_allocd;
	u16 num_dyns_allocd;
	u16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	type_7 resolvID;
	type_11 base2Name;
	type_17 id2Name;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_71 emit_pad;
	type_74 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xShadowSimplePoly
{
	type_61 vert;
	xVec3 norm;
};

struct xGridBound
{
	void* data;
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct zFragGroup
{
	type_62 list;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xListItem_1
{
	s32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

union zFragInfo
{
	zFragGroup group;
	zFragParticle particle;
	zFragProjectile projectile;
	zFragLightning lightning;
	zFragSound sound;
	zFragShockwave shockwave;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct _class_2
{
	xVec3* verts;
};

struct _anon5
{
};

struct _anon6
{
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_69 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xEntCollis
{
	u8 chk;
	u8 pen;
	u8 env_sidx;
	u8 env_eidx;
	u8 npc_sidx;
	u8 npc_eidx;
	u8 dyn_sidx;
	u8 dyn_eidx;
	u8 stat_sidx;
	u8 stat_eidx;
	u8 idx;
	type_6 colls;
	type_9 post;
	type_14 depenq;
};

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xShadowSimpleCache
{
	u16 flags;
	u8 alpha;
	u8 pad;
	u32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	f32 envHeight;
	f32 shadowHeight;
	u32 raster;
	f32 dydx;
	f32 dydz;
	type_93 corner;
};

struct RxNodeMethods
{
	type_26 nodeBody;
	type_27 nodeInit;
	type_30 nodeTerm;
	type_2 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_23 configMsgHandler;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_84 pad;
	f32 delay;
	xSpline3* spl;
};

enum en_npcbtyp
{
	NPCP_BASIS_NONE,
	NPCP_BASIS_EVILROBOT,
	NPCP_BASIS_FRIENDLYROBOT,
	NPCP_BASIS_LOVINGCITIZEN,
	NPCP_BASIS_GRUMPYCITIZEN,
	NPCP_BASIS_NOMORE,
	NPCP_BASIS_FORCE = 0x7fffffff
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct xCoef
{
	type_77 a;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct _anon7
{
};

struct RyzMemData
{
};

struct _class_3
{
	type_80 base_point;
	type_86 point;
	s16 total_points;
	s16 end_points;
	f32 arc_height;
	xVec3 arc_normal;
	type_92 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	f32 rand_radius;
};

struct _class_4
{
	f32 t;
	f32 u;
	f32 v;
};

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
};

struct RxCluster
{
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xFFX
{
};

enum en_GOALSTATE
{
	GOAL_STAT_UNKNOWN,
	GOAL_STAT_PROCESS,
	GOAL_STAT_ENTER,
	GOAL_STAT_EXIT,
	GOAL_STAT_SUSPEND,
	GOAL_STAT_RESUME,
	GOAL_STAT_PAUSED,
	GOAL_STAT_DONE,
	GOAL_STAT_NOMORE,
	GOAL_STAT_FORCE = 0x7fffffff
};

enum en_LASSO_STATUS
{
	LASS_STAT_DONE,
	LASS_STAT_PENDING,
	LASS_STAT_GRABBING,
	LASS_STAT_TOSSING,
	LASS_STAT_NOMORE,
	LASS_STAT_FORCEINT = 0x7fffffff
};

struct xModelAssetParam
{
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_97 clusters;
};

struct zFragProjectile
{
	zFragProjectileAsset* fasset;
	xModelInstance* model;
	xParabola path;
	f32 angVel;
	f32 t;
	f32 tColl;
	s32 numBounces;
	f32 scale;
	f32 parentScale;
	f32 alpha;
	xVec3 N;
	xVec3 axis;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xParInterp
{
	type_90 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

enum zFragLocType
{
	eFragLocBone,
	eFragLocBoneUpdated,
	eFragLocBoneLocal,
	eFragLocBoneLocalUpdated,
	eFragLocTag,
	eFragLocTagUpdated,
	eFragLocCount,
	eFragLocForceSize = 0x7fffffff
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RwLinkList
{
	RwLLLink link;
};

type_43 buffer;
type_46 buffer;
_anon1 __vt__16zNPCGoalTikiDead;
_anon6 __vt__16zNPCGoalTikiIdle;
_anon0 __vt__14zNPCGoalCommon;
_anon3 __vt__5xGoal;
_anon4 __vt__17zNPCGoalTikiDying;
_anon7 __vt__17zNPCGoalTikiCount;
_anon2 __vt__16zNPCGoalTikiHide;
_anon5 __vt__18zNPCGoalTikiPatrol;

s32 Exit(zNPCGoalTikiDead* this);
s32 Enter(zNPCGoalTikiDead* this);
s32 Exit(zNPCGoalTikiDying* this);
s32 Enter(zNPCGoalTikiDying* this);
s32 Enter(zNPCGoalTikiCount* this);
s32 Exit(zNPCGoalTikiHide* this);
s32 Enter(zNPCGoalTikiHide* this);
s32 Enter(zNPCGoalTikiPatrol* this);
s32 Enter(zNPCGoalTikiIdle* this);
xFactoryInst* GOALCreate_Tiki(s32 who, RyzMemGrow* grow);

// Exit__16zNPCGoalTikiDeadFfPv
// Start address: 0x2ca4f0
s32 Exit(zNPCGoalTikiDead* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiDeadFfPv
// Start address: 0x2ca540
s32 Enter(zNPCGoalTikiDead* this)
{
	zNPCTiki* tiki;
}

// Exit__17zNPCGoalTikiDyingFfPv
// Start address: 0x2ca5b0
s32 Exit(zNPCGoalTikiDying* this)
{
	zNPCTiki* tiki;
}

// Enter__17zNPCGoalTikiDyingFfPv
// Start address: 0x2ca5f0
s32 Enter(zNPCGoalTikiDying* this)
{
	zNPCTiki* tiki;
}

// Enter__17zNPCGoalTikiCountFfPv
// Start address: 0x2ca630
s32 Enter(zNPCGoalTikiCount* this)
{
	zNPCTiki* tiki;
}

// Exit__16zNPCGoalTikiHideFfPv
// Start address: 0x2ca670
s32 Exit(zNPCGoalTikiHide* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiHideFfPv
// Start address: 0x2ca6a0
s32 Enter(zNPCGoalTikiHide* this)
{
	zNPCTiki* tiki;
}

// Enter__18zNPCGoalTikiPatrolFfPv
// Start address: 0x2ca6d0
s32 Enter(zNPCGoalTikiPatrol* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiIdleFfPv
// Start address: 0x2ca790
s32 Enter(zNPCGoalTikiIdle* this)
{
	zNPCTiki* tiki;
}

// GOALCreate_Tiki__FiP10RyzMemGrowPv
// Start address: 0x2ca810
xFactoryInst* GOALCreate_Tiki(s32 who, RyzMemGrow* grow)
{
	xGoal* goal;
}

