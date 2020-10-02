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
typedef int32(*type_2)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef xBase*(*type_7)(uint32);
typedef void(*type_9)(xEnt*, xScene*, float32, xEntCollis*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_11)(xBase*);
typedef uint32(*type_14)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef int8*(*type_17)(uint32);
typedef uint32(*type_20)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_23)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_24)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_25)(int32*, en_trantype*);
typedef int32(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_27)(RxNodeDefinition*);
typedef void(*type_28)(zFrag*, zFragAsset*);
typedef void(*type_30)(RxNodeDefinition*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef void(*type_36)(zShrapnelAsset*, xModelInstance*, xVec3*, type_28);
typedef uint32(*type_40)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_49)(xGoal*, void*, float32, void*);
typedef void(*type_52)(xEnt*);
typedef RpWorldSector*(*type_53)(RpWorldSector*);
typedef void(*type_54)(xEnt*);
typedef int32(*type_55)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_59)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_60)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_63)(xEnt*, xScene*, float32);
typedef void(*type_68)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_70)(xEnt*);
typedef void(*type_73)(xMemPool*, void*);
typedef void(*type_81)(RwResEntry*);
typedef void(*type_82)(zFrag*, float32);

typedef xCollis type_6[18];
typedef float32 type_8[4];
typedef xModelTag type_12[20];
typedef float32 type_13[4];
typedef RwTexCoords* type_15[8];
typedef xVec3 type_18[9];
typedef float32 type_19[16];
typedef int32 type_21[5];
typedef xVec3 type_29[2];
typedef uint16 type_31[3];
typedef xParInterp type_32[1];
typedef uint8 type_33[4];
typedef int8 type_34[3];
typedef float32 type_37[2];
typedef float32 type_38[2];
typedef float32 type_39[2];
typedef float32 type_41[2];
typedef xParInterp type_42[4];
typedef int8 type_43[16];
typedef xParInterp type_44[4];
typedef int8 type_45[4];
typedef int8 type_46[16];
typedef RwTexCoords* type_47[8];
typedef float32 type_48[4];
typedef uint8 type_50[3];
typedef float32 type_51[4];
typedef float32 type_56[4];
typedef uint32 type_57[4];
typedef float32 type_58[4];
typedef xVec3 type_61[3];
typedef zFrag* type_62[21];
typedef uint32 type_64[2];
typedef RpLight* type_65[2];
typedef uint8 type_66[3];
typedef RwFrame* type_67[2];
typedef float32 type_69[16];
typedef uint8 type_71[3];
typedef float32 type_72[2];
typedef uint8 type_74[3];
typedef int8 type_75[32];
typedef xGoal* type_76[5];
typedef float32 type_77[4];
typedef int8 type_78[32];
typedef float32 type_79[1];
typedef xVec3 type_80[16];
typedef type_79 type_83[5];
typedef uint8 type_84[2];
typedef uint8 type_85[3];
typedef xVec3 type_86[16];
typedef zNPCTiki* type_87[4];
typedef uint16 type_88[3];
typedef zNPCTiki* type_89[4];
typedef float32 type_90[2];
typedef NPCSndQueue type_91[4];
typedef float32 type_92[16];
typedef xVec3 type_93[4];
typedef uint8 type_94[2];
typedef xModelInstance* type_95[2];
typedef xAnimMultiFileEntry type_96[1];
typedef RxCluster type_97[1];

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	uint16 idx;
	uint16 num_updates;
	uint8 flags;
	uint8 miscflags;
	uint8 subType;
	uint8 pflags;
	uint8 moreFlags;
	uint8 isCulled;
	uint8 driving_count;
	uint8 num_ffx;
	uint8 collType;
	uint8 collLev;
	uint8 chkby;
	uint8 penby;
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
	int32 driveMode;
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
	float32 tmr_count;
	int32 beingCarried;
};

struct _tagLightningLine
{
	float32 unused;
};

struct xParGroup
{
};

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	uint32 numOutputs;
	uint32* outputs;
	RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	uint32 initializationDataSize;
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
	float32 delay;
	float32 alivetime;
	float32 lifetime;
	type_82 update;
	type_95 parent;
	zFrag* prev;
	zFrag* next;
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

struct _anon0
{
};

struct RpGeometry
{
	RwObject object;
	uint32 flags;
	uint16 lockedSinceLastInst;
	int16 refCount;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	int32 numTexCoordSets;
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
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_60 eventFunc;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	uint32 parEmitterID;
	zParEmitter* parEmitter;
};

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
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
	uint16 NumSingle;
	uint16 BoneCount;
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
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RpPolygon
{
	uint16 matIndex;
	type_88 vertIndex;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_20 Callback;
};

struct zNPCGoalTikiPatrol : zNPCGoalCommon
{
	xVec3 dest_pos;
	xVec3 vel;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
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
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct zNPCTiki : zNPCCommon
{
	uint32 tikiFlag;
	xVec3 lastAt;
	xBound origLocalBound;
	xVec3 deltaPos;
	float32 timeToLive;
	float32 t1;
	float32 t2;
	float32 t3;
	xVec3 v1;
	float32 vel;
	float32 landHt;
	xEnt* nonTikiParent;
	xVec3 nonTikiParentDisp;
	uint8 numParents;
	type_87 parents;
	uint8 numChildren;
	type_89 children;
	zNPCTiki* nextOrphan;
	uint32 updatedParents;
	int32 contactParent;
	void* tikiAnim;
	float32 tikiAnimTime;
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct NPCConfig : xListItem_1
{
	uint32 modelID;
	int32 flg_config;
	float32 spd_turnMax;
	float32 spd_moveMax;
	float32 fac_accelMax;
	float32 fac_driftMax;
	float32 fac_gravKnock;
	float32 fac_elastic;
	int32 pts_damage;
	int32 useBoxBound;
	xVec3 off_bound;
	xVec3 dim_bound;
	float32 npcMass;
	float32 npcMassInv;
	float32 rad_detect;
	float32 hyt_detect;
	float32 off_detect;
	float32 rad_attack;
	float32 fov_attack;
	xVec3 scl_model;
	float32 tym_attack;
	float32 tym_fidget;
	float32 tym_stun;
	float32 tym_alert;
	float32 dst_castShadow;
	float32 rad_shadowCache;
	float32 rad_shadowRaster;
	float32 rad_dmgSize;
	int32 flg_vert;
	type_12 tag_vert;
	type_18 animFrameRange;
	type_21 cnt_esteem;
	float32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int32 test_count;
	type_33 talk_filter;
	uint8 talk_filter_size;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zNPCGoalTikiIdle : zNPCGoalCommon
{
	float32 tmr_wait;
};

struct zNPCGoalTikiDead : zNPCGoalCommon
{
	float32 tmr_resurrect;
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	int8 allowDetect;
	int8 allowPatrol;
	int8 allowWander;
	int8 reduceCollide;
	int8 useNavSplines;
	type_34 pad;
	int8 allowChase;
	int8 allowAttack;
	int8 assumeLOS;
	int8 assumeFOV;
	en_dupowavmod duploWaveMode;
	float32 duploSpawnDelay;
	int32 duploSpawnLifeMax;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RxPipeline
{
	int32 locked;
	uint32 numNodes;
	RxPipelineNode* nodes;
	uint32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	uint32 superBlockSize;
	uint32 entryPoint;
	uint32 pluginId;
	uint32 pluginData;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_72 BilinearLerp;
	xAnimEffect* Effect;
	uint32 ActiveCount;
	float32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
	uint32 pad;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xListItem_0
{
	int32 flg_travFilter;
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
	int8* Name;
	uint32 ID;
	uint32 Flags;
	uint32 UserFlags;
	float32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float32* BoneBlend;
	float32* TimeSnap;
	float32 FadeRecip;
	uint16* FadeOffset;
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
	float32 degrees;
	float32 height;
};

struct xParSys
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_73 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
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
	int32 index;
	xVec3 offset;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
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
	uint32 PipeFlags;
	float32 RedMultiplier;
	float32 GreenMultiplier;
	float32 BlueMultiplier;
	float32 Alpha;
	float32 FadeStart;
	float32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	uint16 Flags;
	uint8 BoneCount;
	uint8 BoneIndex;
	uint8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	uint32 modelID;
	uint32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_2 anim_coll;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	uint32 startParentID;
	uint32 endParentID;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct NPCSndQueue
{
	uint32 sndDirect;
	en_NPC_SOUND sndtype;
	int32 flg_snd;
	float32 tmr_delay;
	float32 radius;
};

struct zNPCGoalCommon : xGoal
{
	int32 flg_npcgauto;
	int32 flg_npcgable;
	uint32 anid_played;
	union
	{
		int32 flg_info;
		int32 flg_user;
	};
};

struct _class_1
{
	type_29 endPoint;
	xVec3 direction;
	float32 length;
	float32 scale;
	float32 width;
	type_37 endParam;
	type_38 endVel;
	type_39 paramSpan;
	float32 arc_height;
	xVec3 arc_normal;
};

struct zFragAsset
{
	zFragType type;
	uint32 id;
	type_64 parentID;
	float32 lifetime;
	float32 delay;
};

struct RpTriangle
{
	type_31 vertIndex;
	int16 matIndex;
};

struct xPSYNote
{
};

struct xCollis
{
	uint32 flags;
	uint32 oid;
	void* optr;
	xModelInstance* mptr;
	float32 dist;
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
	float32 dst_cast;
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct zLightning
{
	uint32 type;
	uint32 flags;
	union
	{
		_class_3 legacy;
		_class_1 func;
	};
	iColor_tag color;
	float32 time_left;
	float32 time_total;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
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
	int32 memlvl;
};

struct _tagLightningZeus
{
	float32 normal_offset;
	float32 back_offset;
	float32 side_offset;
};

struct zNPCCommon : xNPCBasic
{
	xEntAsset* entass;
	xEntNPCAsset* npcass;
	zNPCSettings* npcsetass;
	int32 flg_vuln;
	int32 flg_move;
	int32 flg_misc;
	int32 flg_able;
	NPCConfig* cfg_npc;
	zNPCSettings npcset;
	zMovePoint* nav_past;
	zMovePoint* nav_curr;
	zMovePoint* nav_dest;
	zMovePoint* nav_lead;
	xSpline3* spl_mvptspline;
	float32 len_mvptspline;
	float32 dst_curspline;
	xEntDrive* drv_data;
	xPsyche* psy_instinct;
	zNPCCommon* npc_duplodude;
	float32 spd_throttle;
	int32 flg_xtrarend;
	float32 tmr_fidget;
	float32 tmr_invuln;
	zShrapnelAsset* explosion;
	xModelAssetParam* parmdata;
	uint32 pdatsize;
	zNPCLassoInfo* lassdata;
	type_91 snd_queue;
};

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
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
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct rxReq
{
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
	float32 zoneRadius;
	float32 arenaRadius;
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
	uint32 soundID;
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
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct _anon2
{
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct xQCData
{
	int8 xmin;
	int8 ymin;
	int8 zmin;
	int8 zmin_dup;
	int8 xmax;
	int8 ymax;
	int8 zmax;
	int8 zmax_dup;
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
	uint32 modelInfoID;
	RpAtomic* modelFile;
	zFragLocation launch;
	zFragLocation vel;
	float32 bounce;
	int32 maxBounces;
	uint32 flags;
	uint32 childID;
	zShrapnelAsset* child;
	float32 minScale;
	float32 maxScale;
	uint32 scaleCurveID;
	xCurveAsset* scaleCurve;
	float32 gravity;
};

struct zFragSoundAsset : zFragAsset
{
	uint32 assetID;
	zFragLocation source;
	float32 volume;
	float32 innerRadius;
	float32 outerRadius;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_48 wt;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_51 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	type_76 goalstak;
	type_83 tmr_stack;
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	type_25 fun_remap;
	void* userContext;
	int32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float32 gravity;
	float32 minTime;
	float32 maxTime;
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
	uint32 type;
	uint16 version;
	uint16 handle;
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
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_50 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
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
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	type_66 pad;
	void* moprops;
};

struct _anon3
{
};

struct xJSPHeader
{
	type_45 idtag;
	uint32 version;
	uint32 jspNodeCount;
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
	int16 refCount;
	int16 pad;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct _anon4
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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
	uint32 filterAddressing;
	int32 refCount;
};

struct xEntAsset : xBaseAsset
{
	uint8 flags;
	uint8 subtype;
	uint8 pflags;
	uint8 moreFlags;
	uint8 pad;
	uint32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	float32 redMult;
	float32 greenMult;
	float32 blueMult;
	float32 seeThru;
	float32 seeThruSpeed;
	uint32 modelInfoID;
	uint32 animListID;
};

struct zNPCGoalTikiHide : zNPCGoalCommon
{
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float32 currSize;
	float32 currVelocity;
	float32 deltVelocity;
	float32 currSpin;
	float32 deltSpin;
	type_56 currColor;
	type_58 deltColor;
};

struct zNPCGoalTikiDying : zNPCGoalCommon
{
	float32 tmr_dying;
};

struct RpSector
{
	int32 type;
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
	float32 r;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
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
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct zFragShockwaveAsset : zFragAsset
{
	uint32 modelInfoID;
	float32 birthRadius;
	float32 deathRadius;
	float32 birthVelocity;
	float32 deathVelocity;
	float32 birthSpin;
	float32 deathSpin;
	type_8 birthColor;
	type_13 deathColor;
};

struct RyzMemGrow
{
	int32 flg_grow;
	int32 amt;
	int8* ptr;
	xBase* user;
	int32 amt_last;
	int8* ptr_last;
	xBase* user_last;
};

struct xEntNPCAsset
{
	int32 npcFlags;
	int32 npcModel;
	int32 npcProps;
	uint32 movepoint;
	uint32 taskWidgetPrime;
	uint32 taskWidgetSecond;
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
	float32 radius;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
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
	float32 r;
	float32 h;
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
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpLight
{
	RwObjectHasFrame object;
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
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
	uint32 mode;
};

struct xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float32 yaw;
	xVec3 dloc;
	tri_data_1 tri;
};

struct RpWorld
{
	RwObject object;
	uint32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int32 numTexCoordSets;
	int32 numClumpsInWorld;
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
		int32 flg_basenpc;
		int32 inUpdate;
		int32 flg_upward;
	};
	int32 colFreq;
	int32 colFreqReset;
	union
	{
		uint32 flg_colCheck;
		uint32 flg_penCheck;
		uint32 flg_unused;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
	uint32 sceneID;
	uint16 flags;
	uint16 num_ents;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	uint16 num_nact_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
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
	uint32 emit_volumeID;
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	uint8 rate_mode;
	float32 rate;
	float32 rate_time;
	float32 rate_fraction;
	float32 rate_fraction_cull;
	uint8 emit_flags;
	type_71 emit_pad;
	type_74 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RxOutputSpec
{
	int8* name;
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
	uint16 gx;
	uint16 gz;
	uint8 ingrid;
	uint8 oversize;
	uint8 deleted;
	uint8 gpad;
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
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xListItem_1
{
	int32 flg_travFilter;
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
	uint32 ID;
	xAnimFile* File;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_69 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xEntCollis
{
	uint8 chk;
	uint8 pen;
	uint8 env_sidx;
	uint8 env_eidx;
	uint8 npc_sidx;
	uint8 npc_eidx;
	uint8 dyn_sidx;
	uint8 dyn_eidx;
	uint8 stat_sidx;
	uint8 stat_eidx;
	uint8 idx;
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
	uint16 flags;
	uint8 alpha;
	uint8 pad;
	uint32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	float32 envHeight;
	float32 shadowHeight;
	uint32 raster;
	float32 dydx;
	float32 dydz;
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
	uint32 node_wt_sum;
	uint8 on;
	type_84 pad;
	float32 delay;
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
	float32 yaw;
	xCollis* coll;
};

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xCoef
{
	type_77 a;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	type_92 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float32 rand_radius;
};

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
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
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	RxPipelineCluster* clusterRef;
	uint32 attributes;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
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
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_97 clusters;
};

struct zFragProjectile
{
	zFragProjectileAsset* fasset;
	xModelInstance* model;
	xParabola path;
	float32 angVel;
	float32 t;
	float32 tColl;
	int32 numBounces;
	float32 scale;
	float32 parentScale;
	float32 alpha;
	xVec3 N;
	xVec3 axis;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xParInterp
{
	type_90 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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
	uint16 atomIndex;
	uint16 meshVertIndex;
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

int32 Exit(zNPCGoalTikiDead* this);
int32 Enter(zNPCGoalTikiDead* this);
int32 Exit(zNPCGoalTikiDying* this);
int32 Enter(zNPCGoalTikiDying* this);
int32 Enter(zNPCGoalTikiCount* this);
int32 Exit(zNPCGoalTikiHide* this);
int32 Enter(zNPCGoalTikiHide* this);
int32 Enter(zNPCGoalTikiPatrol* this);
int32 Enter(zNPCGoalTikiIdle* this);
xFactoryInst* GOALCreate_Tiki(int32 who, RyzMemGrow* grow);

// Exit__16zNPCGoalTikiDeadFfPv
// Start address: 0x2ca4f0
int32 Exit(zNPCGoalTikiDead* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiDeadFfPv
// Start address: 0x2ca540
int32 Enter(zNPCGoalTikiDead* this)
{
	zNPCTiki* tiki;
}

// Exit__17zNPCGoalTikiDyingFfPv
// Start address: 0x2ca5b0
int32 Exit(zNPCGoalTikiDying* this)
{
	zNPCTiki* tiki;
}

// Enter__17zNPCGoalTikiDyingFfPv
// Start address: 0x2ca5f0
int32 Enter(zNPCGoalTikiDying* this)
{
	zNPCTiki* tiki;
}

// Enter__17zNPCGoalTikiCountFfPv
// Start address: 0x2ca630
int32 Enter(zNPCGoalTikiCount* this)
{
	zNPCTiki* tiki;
}

// Exit__16zNPCGoalTikiHideFfPv
// Start address: 0x2ca670
int32 Exit(zNPCGoalTikiHide* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiHideFfPv
// Start address: 0x2ca6a0
int32 Enter(zNPCGoalTikiHide* this)
{
	zNPCTiki* tiki;
}

// Enter__18zNPCGoalTikiPatrolFfPv
// Start address: 0x2ca6d0
int32 Enter(zNPCGoalTikiPatrol* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiIdleFfPv
// Start address: 0x2ca790
int32 Enter(zNPCGoalTikiIdle* this)
{
	zNPCTiki* tiki;
}

// GOALCreate_Tiki__FiP10RyzMemGrowPv
// Start address: 0x2ca810
xFactoryInst* GOALCreate_Tiki(int32 who, RyzMemGrow* grow)
{
	xGoal* goal;
}

