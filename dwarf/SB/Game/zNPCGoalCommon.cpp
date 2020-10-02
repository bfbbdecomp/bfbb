typedef struct NPCConfig;
typedef struct xEnv;
typedef struct RwObjectHasFrame;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct zNPCSettings;
typedef union _class_0;
typedef enum en_trantype;
typedef struct _class_1;
typedef struct xAnimState;
typedef struct xCollis;
typedef struct RwV3d;
typedef struct rxHeapFreeBlock;
typedef struct zParEmitter;
typedef struct RpTriangle;
typedef struct xPSYNote;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct xEntShadow;
typedef struct xModelPool;
typedef struct xAnimEffect;
typedef struct zFragLightning;
typedef struct RxNodeDefinition;
typedef struct _tagLightningZeus;
typedef struct zFragBone;
typedef struct zNPCCommon;
typedef struct RpMeshHeader;
typedef struct zFragLightningAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zNPCGoalCommon;
typedef struct _tagEmitSphere;
typedef struct RxPipeline;
typedef struct iEnv;
typedef struct xAnimPlay;
typedef struct RxPipelineCluster;
typedef struct NPCSndTrax;
typedef struct xAnimFile;
typedef struct NPCSndQueue;
typedef struct RxPipelineNodeParam;
typedef struct zFrag;
typedef struct RwResEntry;
typedef struct zFragAsset;
typedef struct xLightKit;
typedef struct RxHeap;
typedef struct RpGeometry;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xJSPNodeInfo;
typedef struct zLightning;
typedef struct xQCData;
typedef struct xMovePointAsset;
typedef struct xAnimTransitionList;
typedef struct xAnimTransition;
typedef struct xQuat;
typedef struct RwTexCoords;
typedef struct zShrapnelAsset;
typedef struct xModelTag;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct xLinkAsset;
typedef struct xVec3;
typedef struct xPsyche;
typedef union zFragLocInfo;
typedef struct _tagEmitRect;
typedef struct RxPipelineRequiresCluster;
typedef struct xParabola;
typedef struct xClumpCollBSPBranchNode;
typedef enum en_NPC_SOUND;
typedef struct xGoal;
typedef struct zFragSound;
typedef enum RpWorldRenderOrder;
typedef struct xSurface;
typedef struct xParEmitterCustomSettings;
typedef struct zFragProjectileAsset;
typedef struct RpMaterial;
typedef struct zFragSoundAsset;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct xAnimMultiFile;
typedef struct xFactoryInst;
typedef struct RwTexture;
typedef struct xEntAsset;
typedef struct RpSector;
typedef struct RwSurfaceProperties;
typedef struct xBase;
typedef struct xBound;
typedef struct RwMatrixTag;
typedef struct xCoef3;
typedef struct zFragLocation;
typedef struct xPEEntBound;
typedef struct rxReq;
typedef struct xDynAsset;
typedef struct RwRaster;
typedef struct _tagEmitLine;
typedef struct RpWorldSector;
typedef enum RxClusterValidityReq;
typedef struct xBBox;
typedef struct xClumpCollBSPTree;
typedef struct RpMorphTarget;
typedef struct zNPCLassoInfo;
typedef struct zFragShockwave;
typedef struct RpLight;
typedef struct xEntFrame;
typedef struct xEnt;
typedef struct zFragShockwaveAsset;
typedef struct xEntNPCAsset;
typedef struct xMat4x3;
typedef struct xEntDrive;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimTable;
typedef enum zFragType;
typedef struct xRot;
typedef enum en_pendtype;
typedef struct xScene;
typedef struct xCurveAsset;
typedef struct xNPCBasic;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGridBound;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct xShadowSimplePoly;
typedef struct xListItem_0;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwLLLink;
typedef struct xParEmitterAsset;
typedef struct zMovePoint;
typedef struct xAnimMultiFileEntry;
typedef struct xParGroup;
typedef struct tri_data_0;
typedef struct xAnimActiveEffect;
typedef struct xBox;
typedef struct _class_2;
typedef struct RxClusterDefinition;
typedef struct xParEmitterPropsAsset;
typedef struct zFragGroup;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct RwFrame;
typedef struct xListItem_1;
typedef struct _tagEmitOffsetPoint;
typedef union zFragInfo;
typedef struct xShadowSimpleCache;
typedef struct RwSphere;
typedef struct xSpline3;
typedef struct xMovePoint;
typedef struct tri_data_1;
typedef struct RwTexDictionary;
typedef struct RpInterpolator;
typedef struct RxOutputSpec;
typedef struct xAnimMultiFileBase;
typedef struct RyzMemData;
typedef struct _class_3;
typedef struct xMat3x3;
typedef struct _class_4;
typedef enum en_NPC_GOAL_SPOT;
typedef enum PSY_BRAIN_STATUS;
typedef enum en_npcbtyp;
typedef struct RxClusterRef;
typedef struct xBaseAsset;
typedef struct zFragParticle;
typedef struct xPEVCyl;
typedef struct RwObject;
typedef struct RpPolygon;
typedef enum en_GOALSTATE;
typedef struct xFFX;
typedef struct zFragParticleAsset;
typedef struct RxIoSpec;
typedef struct xCoef;
typedef struct RpMaterialList;
typedef struct xParInterp;
typedef struct xParSys;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xModelAssetParam;
typedef enum en_LASSO_STATUS;
typedef struct _tagLightningLine;
typedef struct zFragProjectile;
typedef struct xClumpCollBSPVertInfo;
typedef struct anim_coll_data;
typedef struct xPEEntBone;
typedef enum en_dupowavmod;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef enum zFragLocType;
typedef struct RxPacket;
typedef struct _tagLightningRot;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct _anon0;
typedef struct xPECircle;
typedef struct RwLinkList;

typedef void(*type_0)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_4)(int32*, en_trantype*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpAtomic*(*type_14)(RpAtomic*);
typedef int32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef void(*type_17)(zFrag*, zFragAsset*);
typedef uint32(*type_22)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_25)(zShrapnelAsset*, xModelInstance*, xVec3*, type_17);
typedef int32(*type_27)(RxNodeDefinition*);
typedef void(*type_29)(RxNodeDefinition*);
typedef void(*type_33)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_37)(xGoal*, void*, float32, void*);
typedef xBase*(*type_38)(uint32);
typedef RpWorldSector*(*type_42)(RpWorldSector*);
typedef int8*(*type_43)(xBase*);
typedef int32(*type_44)(xGoal*, void*, en_trantype*, float32, void*);
typedef void(*type_45)(xEnt*);
typedef int8*(*type_46)(uint32);
typedef void(*type_47)(xEnt*);
typedef int32(*type_48)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_50)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_53)(xEnt*, xScene*, float32);
typedef void(*type_55)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_56)(xEnt*, xVec3*);
typedef void(*type_60)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef uint32(*type_63)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_69)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_83)(zFrag*, float32);
typedef void(*type_85)(xMemPool*, void*);
typedef void(*type_90)(RwResEntry*);
typedef RpClump*(*type_91)(RpClump*, void*);

typedef float32 type_1[4];
typedef xModelTag type_5[20];
typedef float32 type_6[4];
typedef xVec3 type_9[9];
typedef xVec3 type_10[2];
typedef int32 type_11[5];
typedef uint16 type_12[3];
typedef xParInterp type_13[1];
typedef float32 type_16[2];
typedef float32 type_18[2];
typedef uint8 type_19[4];
typedef int8 type_20[3];
typedef float32 type_21[2];
typedef float32 type_26[2];
typedef xParInterp type_28[4];
typedef xParInterp type_30[4];
typedef int8 type_31[4];
typedef RwTexCoords* type_32[8];
typedef int8 type_34[16];
typedef float32 type_35[4];
typedef uint8 type_39[3];
typedef float32 type_40[4];
typedef int8 type_41[16];
typedef float32 type_49[4];
typedef xVec3 type_51[3];
typedef float32 type_52[4];
typedef RpLight* type_54[2];
typedef RwFrame* type_57[2];
typedef uint32 type_58[4];
typedef zFrag* type_59[21];
typedef float32 type_61[16];
typedef uint32 type_64[2];
typedef float32 type_65[2];
typedef uint8 type_66[3];
typedef uint8 type_67[3];
typedef uint8 type_68[3];
typedef xGoal* type_70[5];
typedef xVec3 type_71[16];
typedef float32 type_72[1];
typedef xVec3 type_73[16];
typedef type_72 type_74[5];
typedef uint8 type_75[3];
typedef uint8 type_76[2];
typedef uint16 type_77[3];
typedef float32 type_78[4];
typedef float32 type_79[16];
typedef float32 type_80[2];
typedef xVec3 type_81[4];
typedef uint8 type_82[2];
typedef xAnimMultiFileEntry type_84[1];
typedef int8 type_86[32];
typedef NPCSndQueue type_87[4];
typedef int8 type_88[32];
typedef xModelInstance* type_89[2];
typedef xCollis type_92[18];
typedef RwTexCoords* type_93[8];
typedef float32 type_94[16];
typedef RxCluster type_95[1];

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
	type_5 tag_vert;
	type_9 animFrameRange;
	type_11 cnt_esteem;
	float32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int32 test_count;
	type_19 talk_filter;
	uint8 talk_filter_size;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_7 sync;
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

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	int8 allowDetect;
	int8 allowPatrol;
	int8 allowWander;
	int8 reduceCollide;
	int8 useNavSplines;
	type_20 pad;
	int8 allowChase;
	int8 allowAttack;
	int8 assumeLOS;
	int8 assumeFOV;
	en_dupowavmod duploWaveMode;
	float32 duploSpawnDelay;
	int32 duploSpawnLifeMax;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct _class_1
{
	type_10 endPoint;
	xVec3 direction;
	float32 length;
	float32 scale;
	float32 width;
	type_16 endParam;
	type_18 endVel;
	type_21 paramSpan;
	float32 arc_height;
	xVec3 arc_normal;
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
	type_33 BeforeEnter;
	type_36 StateCallback;
	type_3 BeforeAnimMatrices;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct zParEmitter : xParEmitter
{
};

struct RpTriangle
{
	type_12 vertIndex;
	int16 matIndex;
};

struct xPSYNote
{
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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
	type_14 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_26 radius;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_63 Callback;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
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

struct _tagLightningZeus
{
	float32 normal_offset;
	float32 back_offset;
	float32 side_offset;
};

struct zFragBone
{
	int32 index;
	xVec3 offset;
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
	type_87 snd_queue;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	uint32 startParentID;
	uint32 endParentID;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_54 light;
	type_57 light_frame;
	int32 memlvl;
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
	type_3 BeforeAnimMatrices;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
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
	type_82 NumAnims;
	void** RawData;
};

struct NPCSndQueue
{
	uint32 sndDirect;
	en_NPC_SOUND sndtype;
	int32 flg_snd;
	float32 tmr_delay;
	float32 radius;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float32 delay;
	float32 alivetime;
	float32 lifetime;
	type_83 update;
	type_89 parent;
	zFrag* prev;
	zFrag* next;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_90 destroyNotify;
};

struct zFragAsset
{
	zFragType type;
	uint32 id;
	type_64 parentID;
	float32 lifetime;
	float32 delay;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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
	type_32 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_23 Conditional;
	type_23 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	type_25 initCB;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_35 wt;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_91 callback;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_58 pad;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_40 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	type_70 goalstak;
	type_74 tmr_stack;
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	type_4 fun_remap;
	void* userContext;
	int32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float32 gravity;
	float32 minTime;
	float32 maxTime;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	type_48 fun_process;
	type_37 fun_precalc;
	type_44 fun_chkRule;
	void* cbdata;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	uint32 soundID;
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_39 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct zFragSoundAsset : zFragAsset
{
	uint32 assetID;
	zFragLocation source;
	float32 volume;
	float32 innerRadius;
	float32 outerRadius;
};

struct xJSPHeader
{
	type_31 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_84 Files;
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_88 mask;
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

struct RpSector
{
	int32 type;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_50 eventFunc;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_75 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct rxReq
{
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_93 texCoords;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float32 currSize;
	float32 currVelocity;
	float32 deltVelocity;
	float32 currSpin;
	float32 deltSpin;
	type_49 currColor;
	type_52 deltColor;
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
	type_53 update;
	type_53 endUpdate;
	type_56 bupdate;
	type_60 move;
	type_62 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_0 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_1 birthColor;
	type_6 deathColor;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	type_42 renderCallBack;
	RxPipeline* pipeline;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	type_38 resolvID;
	type_43 base2Name;
	type_46 id2Name;
};

struct xCurveAsset
{
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_45 f_setup;
	type_47 f_reset;
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
	type_67 emit_pad;
	type_68 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct xShadowSimplePoly
{
	type_51 vert;
	xVec3 norm;
};

struct xListItem_0
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct zMovePoint : xMovePoint
{
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xParGroup
{
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _class_2
{
	xVec3* verts;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_13 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_28 color_birth;
	type_30 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct zFragGroup
{
	type_59 list;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_61 matrix;
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
	type_92 colls;
	type_55 post;
	type_69 depenq;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_65 BilinearLerp;
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

struct xListItem_1
{
	int32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_81 corner;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_76 pad;
	float32 delay;
	xSpline3* spl;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RyzMemData
{
};

struct _class_3
{
	type_71 base_point;
	type_73 point;
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	type_79 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float32 rand_radius;
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

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
};

enum en_NPC_GOAL_SPOT
{
	NPC_GSPOT_START = 0x20,
	NPC_GSPOT_RESUME,
	NPC_GSPOT_FINISH,
	NPC_GSPOT_STARTALT,
	NPC_GSPOT_ALTA,
	NPC_GSPOT_ALTB,
	NPC_GSPOT_PATROLPAUSE,
	NPC_GSPOT_NOMORE,
	NPC_GSPOT_FORCEINT = 0x7fffffff
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RpPolygon
{
	uint16 matIndex;
	type_77 vertIndex;
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

struct xFFX
{
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	uint32 parEmitterID;
	zParEmitter* parEmitter;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xCoef
{
	type_78 a;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xParInterp
{
	type_80 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct xParSys
{
};

struct RxNodeMethods
{
	type_24 nodeBody;
	type_27 nodeInit;
	type_29 nodeTerm;
	type_2 pipelineNodeInit;
	type_8 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_22 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_85 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xModelAssetParam
{
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

struct _tagLightningLine
{
	float32 unused;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct anim_coll_data
{
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

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_95 clusters;
};

struct _tagLightningRot
{
	type_94 deg;
	float32 degrees;
	float32 height;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _anon0
{
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct RwLinkList
{
	RwLLLink link;
};

type_34 buffer;
type_41 buffer;
_anon0 __vt__14zNPCGoalCommon;

uint32 DoExplicitAnim(zNPCGoalCommon* this, uint32 anid, int32 forceRestart);
uint32 DoAutoAnim(zNPCGoalCommon* this, en_NPC_GOAL_SPOT gspot, int32 forceRestart);
int32 PreCalc(zNPCGoalCommon* this, float32 dt, void* updCtxt);
int32 Resume(zNPCGoalCommon* this);
int32 Enter(zNPCGoalCommon* this);

// DoExplicitAnim__14zNPCGoalCommonFUii
// Start address: 0x2cac10
uint32 DoExplicitAnim(zNPCGoalCommon* this, uint32 anid, int32 forceRestart)
{
	int32 rc;
}

// DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
// Start address: 0x2cac90
uint32 DoAutoAnim(zNPCGoalCommon* this, en_NPC_GOAL_SPOT gspot, int32 forceRestart)
{
	uint32 anid;
}

// PreCalc__14zNPCGoalCommonFfPv
// Start address: 0x2cad50
int32 PreCalc(zNPCGoalCommon* this, float32 dt, void* updCtxt)
{
	zNPCCommon* npc;
	uint32 curid;
}

// Resume__14zNPCGoalCommonFfPv
// Start address: 0x2cae30
int32 Resume(zNPCGoalCommon* this)
{
	int32 gid;
}

// Enter__14zNPCGoalCommonFfPv
// Start address: 0x2caf10
int32 Enter(zNPCGoalCommon* this)
{
	int32 gid;
}

