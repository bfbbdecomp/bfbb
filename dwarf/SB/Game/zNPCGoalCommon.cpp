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
typedef s32(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_4)(s32*, en_trantype*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpAtomic*(*type_14)(RpAtomic*);
typedef s32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef void(*type_17)(zFrag*, zFragAsset*);
typedef u32(*type_22)(RxPipelineNode*, u32, u32, void*);
typedef u32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_25)(zShrapnelAsset*, xModelInstance*, xVec3*, type_17);
typedef s32(*type_27)(RxNodeDefinition*);
typedef void(*type_29)(RxNodeDefinition*);
typedef void(*type_33)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_37)(xGoal*, void*, f32, void*);
typedef xBase*(*type_38)(u32);
typedef RpWorldSector*(*type_42)(RpWorldSector*);
typedef s8*(*type_43)(xBase*);
typedef s32(*type_44)(xGoal*, void*, en_trantype*, f32, void*);
typedef void(*type_45)(xEnt*);
typedef s8*(*type_46)(u32);
typedef void(*type_47)(xEnt*);
typedef s32(*type_48)(xGoal*, void*, en_trantype*, f32, void*);
typedef s32(*type_50)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_53)(xEnt*, xScene*, f32);
typedef void(*type_55)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_56)(xEnt*, xVec3*);
typedef void(*type_60)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef u32(*type_63)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_69)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_83)(zFrag*, f32);
typedef void(*type_85)(xMemPool*, void*);
typedef void(*type_90)(RwResEntry*);
typedef RpClump*(*type_91)(RpClump*, void*);

typedef f32 type_1[4];
typedef xModelTag type_5[20];
typedef f32 type_6[4];
typedef xVec3 type_9[9];
typedef xVec3 type_10[2];
typedef s32 type_11[5];
typedef u16 type_12[3];
typedef xParInterp type_13[1];
typedef f32 type_16[2];
typedef f32 type_18[2];
typedef u8 type_19[4];
typedef s8 type_20[3];
typedef f32 type_21[2];
typedef f32 type_26[2];
typedef xParInterp type_28[4];
typedef xParInterp type_30[4];
typedef s8 type_31[4];
typedef RwTexCoords* type_32[8];
typedef s8 type_34[16];
typedef f32 type_35[4];
typedef u8 type_39[3];
typedef f32 type_40[4];
typedef s8 type_41[16];
typedef f32 type_49[4];
typedef xVec3 type_51[3];
typedef f32 type_52[4];
typedef RpLight* type_54[2];
typedef RwFrame* type_57[2];
typedef u32 type_58[4];
typedef zFrag* type_59[21];
typedef f32 type_61[16];
typedef u32 type_64[2];
typedef f32 type_65[2];
typedef u8 type_66[3];
typedef u8 type_67[3];
typedef u8 type_68[3];
typedef xGoal* type_70[5];
typedef xVec3 type_71[16];
typedef f32 type_72[1];
typedef xVec3 type_73[16];
typedef type_72 type_74[5];
typedef u8 type_75[3];
typedef u8 type_76[2];
typedef u16 type_77[3];
typedef f32 type_78[4];
typedef f32 type_79[16];
typedef f32 type_80[2];
typedef xVec3 type_81[4];
typedef u8 type_82[2];
typedef xAnimMultiFileEntry type_84[1];
typedef s8 type_86[32];
typedef NPCSndQueue type_87[4];
typedef s8 type_88[32];
typedef xModelInstance* type_89[2];
typedef xCollis type_92[18];
typedef RwTexCoords* type_93[8];
typedef f32 type_94[16];
typedef RxCluster type_95[1];

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
	type_5 tag_vert;
	type_9 animFrameRange;
	type_11 cnt_esteem;
	f32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	s32 test_count;
	type_19 talk_filter;
	u8 talk_filter_size;
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

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	s8 allowDetect;
	s8 allowPatrol;
	s8 allowWander;
	s8 reduceCollide;
	s8 useNavSplines;
	type_20 pad;
	s8 allowChase;
	s8 allowAttack;
	s8 assumeLOS;
	s8 assumeFOV;
	en_dupowavmod duploWaveMode;
	f32 duploSpawnDelay;
	s32 duploSpawnLifeMax;
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
	f32 length;
	f32 scale;
	f32 width;
	type_16 endParam;
	type_18 endVel;
	type_21 paramSpan;
	f32 arc_height;
	xVec3 arc_normal;
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
	type_33 BeforeEnter;
	type_36 StateCallback;
	type_3 BeforeAnimMatrices;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct zParEmitter : xParEmitter
{
};

struct RpTriangle
{
	type_12 vertIndex;
	s16 matIndex;
};

struct xPSYNote
{
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_26 radius;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
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
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct _tagLightningZeus
{
	f32 normal_offset;
	f32 back_offset;
	f32 side_offset;
};

struct zFragBone
{
	s32 index;
	xVec3 offset;
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
	type_87 snd_queue;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	u32 startParentID;
	u32 endParentID;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _tagEmitSphere
{
	f32 radius;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_54 light;
	type_57 light_frame;
	s32 memlvl;
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
	type_3 BeforeAnimMatrices;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	s8* nam_sound;
	u32 aid_sound;
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
	type_82 NumAnims;
	void** RawData;
};

struct NPCSndQueue
{
	u32 sndDirect;
	en_NPC_SOUND sndtype;
	s32 flg_snd;
	f32 tmr_delay;
	f32 radius;
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
	f32 delay;
	f32 alivetime;
	f32 lifetime;
	type_83 update;
	type_89 parent;
	zFrag* prev;
	zFrag* next;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_90 destroyNotify;
};

struct zFragAsset
{
	zFragType type;
	u32 id;
	type_64 parentID;
	f32 lifetime;
	f32 delay;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct zShrapnelAsset
{
	s32 fassetCount;
	u32 shrapnelID;
	type_25 initCB;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
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
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_58 pad;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_40 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	s32 flg_psyche;
	xGoal* goallist;
	type_70 goalstak;
	type_74 tmr_stack;
	s32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	s32 gid_safegoal;
	type_4 fun_remap;
	void* userContext;
	s32 cnt_transLastTimestep;
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
	f32 x_len;
	f32 z_len;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	f32 gravity;
	f32 minTime;
	f32 maxTime;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	s32 goalID;
	en_GOALSTATE stat;
	s32 flg_able;
	type_48 fun_process;
	type_37 fun_precalc;
	type_44 fun_chkRule;
	void* cbdata;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	u32 soundID;
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_39 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct zFragSoundAsset : zFragAsset
{
	u32 assetID;
	zFragLocation source;
	f32 volume;
	f32 innerRadius;
	f32 outerRadius;
};

struct xJSPHeader
{
	type_31 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_84 Files;
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
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

struct RpSector
{
	s32 type;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_50 eventFunc;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
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
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct rxReq
{
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
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
	f32 currSize;
	f32 currVelocity;
	f32 deltVelocity;
	f32 currSpin;
	f32 deltSpin;
	type_49 currColor;
	type_52 deltColor;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_1 birthColor;
	type_6 deathColor;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
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
	f32 angle;
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
	type_67 emit_pad;
	type_68 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
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
	s32 flg_travFilter;
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
	f32 r;
	f32 h;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct zMovePoint : xMovePoint
{
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xParGroup
{
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct zFragGroup
{
	type_59 list;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_61 matrix;
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
	type_92 colls;
	type_55 post;
	type_69 depenq;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_65 BilinearLerp;
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
	s32 flg_travFilter;
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
	type_81 corner;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_76 pad;
	f32 delay;
	xSpline3* spl;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
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
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RyzMemData
{
};

struct _class_3
{
	type_71 base_point;
	type_73 point;
	s16 total_points;
	s16 end_points;
	f32 arc_height;
	xVec3 arc_normal;
	type_79 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	f32 rand_radius;
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

struct _class_4
{
	f32 t;
	f32 u;
	f32 v;
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
	u32 reserved;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RpPolygon
{
	u16 matIndex;
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
	u32 parEmitterID;
	zParEmitter* parEmitter;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xCoef
{
	type_78 a;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xParInterp
{
	type_80 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_85 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	f32 unused;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct anim_coll_data
{
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
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_95 clusters;
};

struct _tagLightningRot
{
	type_94 deg;
	f32 degrees;
	f32 height;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct _anon0
{
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct RwLinkList
{
	RwLLLink link;
};

type_34 buffer;
type_41 buffer;
_anon0 __vt__14zNPCGoalCommon;

u32 DoExplicitAnim(zNPCGoalCommon* this, u32 anid, s32 forceRestart);
u32 DoAutoAnim(zNPCGoalCommon* this, en_NPC_GOAL_SPOT gspot, s32 forceRestart);
s32 PreCalc(zNPCGoalCommon* this, f32 dt, void* updCtxt);
s32 Resume(zNPCGoalCommon* this);
s32 Enter(zNPCGoalCommon* this);

// DoExplicitAnim__14zNPCGoalCommonFUii
// Start address: 0x2cac10
u32 DoExplicitAnim(zNPCGoalCommon* this, u32 anid, s32 forceRestart)
{
	s32 rc;
}

// DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
// Start address: 0x2cac90
u32 DoAutoAnim(zNPCGoalCommon* this, en_NPC_GOAL_SPOT gspot, s32 forceRestart)
{
	u32 anid;
}

// PreCalc__14zNPCGoalCommonFfPv
// Start address: 0x2cad50
s32 PreCalc(zNPCGoalCommon* this, f32 dt, void* updCtxt)
{
	zNPCCommon* npc;
	u32 curid;
}

// Resume__14zNPCGoalCommonFfPv
// Start address: 0x2cae30
s32 Resume(zNPCGoalCommon* this)
{
	s32 gid;
}

// Enter__14zNPCGoalCommonFfPv
// Start address: 0x2caf10
s32 Enter(zNPCGoalCommon* this)
{
	s32 gid;
}

