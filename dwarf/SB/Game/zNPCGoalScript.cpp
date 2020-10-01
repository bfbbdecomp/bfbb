typedef struct xModelAssetParam;
typedef struct xFFX;
typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct _anon0;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct _tagLightningLine;
typedef struct xEntShadow;
typedef struct RpClump;
typedef struct zParEmitter;
typedef struct xVec3;
typedef struct xBase;
typedef struct xEntNPCAsset;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpGeometry;
typedef struct xParGroup;
typedef struct anim_coll_data;
typedef enum en_NPC_MSG_ID;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpWorldSector;
typedef struct rxHeapFreeBlock;
typedef struct zFragLightning;
typedef struct xPEEntBone;
typedef struct RxPipelineNodeTopSortData;
typedef struct _anon1;
typedef struct zFragBone;
typedef struct xEnv;
typedef struct xClumpCollBSPTriangle;
typedef struct RxNodeDefinition;
typedef struct zFragLightningAsset;
typedef struct xGoal;
typedef struct _anon2;
typedef struct xAnimPlay;
typedef struct NPCTargetInfo;
typedef struct xParEmitterAsset;
typedef struct RpMorphTarget;
typedef struct xMat4x3;
typedef struct RpPolygon;
typedef struct _anon3;
typedef struct xModelInstance;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct NPCSndTrax;
typedef struct NPCSndQueue;
typedef struct xAnimEffect;
typedef struct zFrag;
typedef struct RwV3d;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct zFragAsset;
typedef struct RxPipelineNodeParam;
typedef struct xParEmitterPropsAsset;
typedef struct RpVertexNormal;
typedef struct xListItem_0;
typedef struct xSpline3;
typedef struct _tagLightningRot;
typedef struct zLightning;
typedef struct RxHeap;
typedef struct xAnimState;
typedef struct xFactoryInst;
typedef struct zNPCGoalScript;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwTexCoords;
typedef enum en_trantype;
typedef struct zShrapnelAsset;
typedef struct xQuat;
typedef struct xParSys;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xPECircle;
typedef union zFragLocInfo;
typedef struct rxHeapBlockHeader;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct NPCDamageInfo;
typedef struct RxPipelineRequiresCluster;
typedef enum en_NPC_SOUND;
typedef struct zFragSound;
typedef union _class_0;
typedef struct _class_1;
typedef struct xCollis;
typedef struct zFragProjectileAsset;
typedef struct zFragSoundAsset;
typedef struct RpTriangle;
typedef struct xPSYNote;
typedef struct RpAtomic;
typedef struct zNPCGoalCommon;
typedef struct NPCMsg;
typedef struct xModelPool;
typedef struct _tagLightningZeus;
typedef struct zNPCCommon;
typedef struct xCoef3;
typedef struct _anon4;
typedef struct zFragLocation;
typedef struct RwSurfaceProperties;
typedef struct _tagEmitSphere;
typedef struct xDynAsset;
typedef struct RwMatrixTag;
typedef struct xAnimFile;
typedef struct iEnv;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xLightKit;
typedef struct xQCData;
typedef struct NPCStunInfo;
typedef struct zNPCLassoInfo;
typedef enum RxClusterValidityReq;
typedef struct xAnimTransitionList;
typedef struct xAnimTransition;
typedef struct xJSPNodeInfo;
typedef struct zFragShockwave;
typedef struct xMovePointAsset;
typedef struct _anon5;
typedef struct xEntAsset;
typedef struct xModelTag;
typedef struct xLinkAsset;
typedef struct zFragShockwaveAsset;
typedef struct xPsyche;
typedef enum zFragType;
typedef struct zNPCSettings;
typedef enum RxNodeDefEditable;
typedef struct RyzMemGrow;
typedef struct _tagEmitRect;
typedef struct xParabola;
typedef enum RxClusterValid;
typedef enum RpWorldRenderOrder;
typedef struct xNPCBasic;
typedef struct xRot;
typedef struct xCurveAsset;
typedef struct _anon6;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xParEmitterCustomSettings;
typedef struct NPCSysEvent;
typedef struct xJSPHeader;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimMultiFile;
typedef struct xSphere;
typedef struct RwTexture;
typedef struct NPCConfig;
typedef struct NPCScriptInfo;
typedef struct xModelBucket;
typedef struct RpSector;
typedef struct xBound;
typedef enum en_NPC_DAMAGE_TYPE;
typedef enum RxClusterForcePresent;
typedef struct zMovePoint;
typedef struct xCylinder;
typedef struct xPEEntBound;
typedef struct xBBox;
typedef struct _tagEmitLine;
typedef struct xBox;
typedef struct xClumpCollBSPTree;
typedef struct RxClusterDefinition;
typedef struct zFragGroup;
typedef struct RpLight;
typedef struct xListItem_1;
typedef union zFragInfo;
typedef struct NPCMountInfo;
typedef struct xEntFrame;
typedef struct RpWorld;
typedef struct xEntDrive;
typedef struct RwSphere;
typedef enum en_pendtype;
typedef struct xScene;
typedef struct RwTexDictionary;
typedef struct _anon7;
typedef struct NPCBlastInfo;
typedef struct RxOutputSpec;
typedef struct xGridBound;
typedef enum en_npcbtyp;
typedef struct zFragParticle;
typedef struct xMat3x3;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct xShadowSimplePoly;
typedef struct RxClusterRef;
typedef struct zFragParticleAsset;
typedef struct NPCAreaInfo;
typedef struct RwLLLink;
typedef struct _anon8;
typedef struct RwObject;
typedef struct xCoef;
typedef struct xAnimMultiFileEntry;
typedef struct RxIoSpec;
typedef struct xAnimActiveEffect;
typedef struct tri_data_0;
typedef enum en_NPC_MSG_DATA;
typedef struct _class_2;
typedef struct RxNodeMethods;
typedef struct NPCChatInfo;
typedef enum en_LASSO_STATUS;
typedef struct RwFrame;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct zFragProjectile;
typedef struct _tagEmitOffsetPoint;
typedef struct xShadowSimpleCache;
typedef struct xMovePoint;
typedef struct tri_data_1;
typedef enum en_dupowavmod;
typedef struct RpInterpolator;
typedef struct RyzMemData;
typedef struct xAnimMultiFileBase;
typedef struct _class_3;
typedef struct RxCluster;
typedef enum zFragLocType;
typedef enum PSY_BRAIN_STATUS;
typedef struct xBaseAsset;
typedef struct _class_4;
typedef enum en_NPC_CARRY_STATE;
typedef struct RxPacket;
typedef struct NPCSpawnInfo;
typedef enum en_GOALSTATE;
typedef struct xPEVCyl;
typedef struct _anon9;
typedef struct RpMaterialList;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct xParInterp;
typedef struct RwLinkList;

typedef s32(*type_3)(RxPipelineNode*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef void(*type_7)(xEnt*, xVec3*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpClump*(*type_10)(RpClump*, void*);
typedef xBase*(*type_11)(u32);
typedef s32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef void(*type_13)(zFrag*, zFragAsset*);
typedef s8*(*type_14)(xBase*);
typedef s8*(*type_16)(u32);
typedef void(*type_18)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef u32(*type_23)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef u32(*type_24)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_25)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_26)(zShrapnelAsset*, xModelInstance*, xVec3*, type_13);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_30)(s32*, en_trantype*);
typedef s32(*type_31)(RxNodeDefinition*);
typedef void(*type_32)(RxNodeDefinition*);
typedef RpAtomic*(*type_36)(RpAtomic*);
typedef void(*type_42)(xEnt*);
typedef u32(*type_43)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_44)(xEnt*);
typedef s32(*type_52)(xGoal*, void*, f32, void*);
typedef RpWorldSector*(*type_57)(RpWorldSector*);
typedef s32(*type_58)(xGoal*, void*, en_trantype*, f32, void*);
typedef s32(*type_63)(xGoal*, void*, en_trantype*, f32, void*);
typedef s32(*type_64)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_67)(xEnt*, xScene*, f32);
typedef void(*type_68)(zFrag*, f32);
typedef void(*type_71)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_73)(xMemPool*, void*);
typedef void(*type_74)(xEnt*);
typedef void(*type_83)(RwResEntry*);

typedef xVec3 type_0[4];
typedef xModelTag type_1[20];
typedef f32 type_2[4];
typedef xVec3 type_5[9];
typedef s32 type_9[5];
typedef xCollis type_15[18];
typedef u8 type_17[4];
typedef RwTexCoords* type_19[8];
typedef s8 type_21[3];
typedef f32 type_22[16];
typedef xVec3 type_33[2];
typedef u16 type_34[3];
typedef s8 type_35[16];
typedef xParInterp type_37[1];
typedef f32 type_38[2];
typedef f32 type_39[2];
typedef s8 type_40[16];
typedef f32 type_41[2];
typedef f32 type_45[2];
typedef xParInterp type_46[4];
typedef xParInterp type_47[4];
typedef f32 type_48[4];
typedef s8 type_49[4];
typedef RwTexCoords* type_50[8];
typedef f32 type_51[4];
typedef f32 type_53[4];
typedef f32 type_54[4];
typedef u8 type_55[3];
typedef f32 type_56[4];
typedef zFrag* type_59[21];
typedef u32 type_60[4];
typedef u32 type_61[2];
typedef u8 type_62[3];
typedef xVec3 type_65[3];
typedef f32 type_66[4];
typedef RpLight* type_69[2];
typedef RwFrame* type_70[2];
typedef f32 type_72[16];
typedef NPCSndQueue type_75[4];
typedef f32 type_76[2];
typedef s8 type_77[32];
typedef xModelInstance* type_78[2];
typedef u8 type_79[3];
typedef s8 type_80[32];
typedef xGoal* type_81[5];
typedef u8 type_82[3];
typedef xVec3 type_84[16];
typedef f32 type_85[1];
typedef type_85 type_86[5];
typedef xVec3 type_87[16];
typedef u8 type_88[3];
typedef u8 type_89[2];
typedef u16 type_90[3];
typedef f32 type_91[16];
typedef f32 type_92[4];
typedef f32 type_93[2];
typedef u8 type_94[2];
typedef RxCluster type_95[1];
typedef xAnimMultiFileEntry type_96[1];

struct xModelAssetParam
{
};

struct xFFX
{
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
	type_67 update;
	type_67 endUpdate;
	type_7 bupdate;
	type_71 move;
	type_74 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_27 transl;
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
	type_6 sync;
};

struct _anon0
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_76 BilinearLerp;
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

struct _tagLightningLine
{
	f32 unused;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_45 radius;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_10 callback;
};

struct zParEmitter : xParEmitter
{
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_64 eventFunc;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	type_50 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xParGroup
{
};

struct anim_coll_data
{
};

enum en_NPC_MSG_ID
{
	NPC_MID_NONE,
	NPC_MID_SYSEVENT,
	NPC_MID_RESPAWN,
	NPC_MID_DAMAGE,
	NPC_MID_EXPLOSION,
	NPC_MID_BUNNYHOP,
	NPC_MID_DTRON_NPCEMIT,
	NPC_MID_DTRON_NPCAVAIL,
	NPC_MID_DTRON_ISDEAD,
	NPC_MID_CHAT_REQUEST,
	NPC_MID_CHAT_DECLINE,
	NPC_MID_CHAT_ACCEPT,
	NPC_MID_CHAT_DONE,
	NPC_MID_CHAT_ABORT,
	NPC_MID_TALKSTART,
	NPC_MID_TALKON,
	NPC_MID_TALKOFF,
	NPC_MID_SAWPLYR,
	NPC_MID_NEEDMEDIC,
	NPC_MID_UNDERATTACK,
	NPC_MID_NPCDIED,
	NPC_MID_PLYRSPATULA,
	NPC_MID_BECOMESCARED,
	NPC_MID_NOLONGERSCARED,
	NPC_MID_CELEBRATE,
	NPC_MID_STUN,
	NPC_MID_SCRIPTBEGIN,
	NPC_MID_SCRIPTEND,
	NPC_MID_SCRIPTHALT,
	NPC_MID_DEV_ANIMSPIN,
	NPC_MID_DEV_ANIMCYCLE,
	NPC_MID_DEV_HEROMODE,
	NPC_MID_DEV_DONE,
	NPC_MID_NOMORE,
	NPC_MID_FORCE = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_19 texCoords;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct _anon1
{
};

struct zFragBone
{
	s32 index;
	xVec3 offset;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	u32 startParentID;
	u32 endParentID;
};

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	s32 goalID;
	en_GOALSTATE stat;
	s32 flg_able;
	type_63 fun_process;
	type_52 fun_precalc;
	type_58 fun_chkRule;
	void* cbdata;
};

struct _anon2
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
	type_29 BeforeAnimMatrices;
};

struct NPCTargetInfo
{
	xBase* bas_tgt;
	xVec3 pos_tgt;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RpPolygon
{
	u16 matIndex;
	type_90 vertIndex;
};

struct _anon3
{
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	s8* nam_sound;
	u32 aid_sound;
};

struct NPCSndQueue
{
	u32 sndDirect;
	en_NPC_SOUND sndtype;
	s32 flg_snd;
	f32 tmr_delay;
	f32 radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_24 Callback;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	f32 delay;
	f32 alivetime;
	f32 lifetime;
	type_68 update;
	type_78 parent;
	zFrag* prev;
	zFrag* next;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct zFragAsset
{
	zFragType type;
	u32 id;
	type_61 parentID;
	f32 lifetime;
	f32 delay;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
	union
	{
		xParInterp rate;
		type_37 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_46 color_birth;
	type_47 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xListItem_0
{
	s32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
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

struct _tagLightningRot
{
	type_22 deg;
	f32 degrees;
	f32 height;
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
	type_20 BeforeEnter;
	type_4 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct zNPCGoalScript : zNPCGoalCommon
{
	s32 flg_script;
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

struct zShrapnelAsset
{
	s32 fassetCount;
	u32 shrapnelID;
	type_26 initCB;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xParSys
{
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

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_60 pad;
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
	type_83 destroyNotify;
};

struct NPCDamageInfo
{
	en_NPC_DAMAGE_TYPE dmg_type;
	xBase* dmg_from;
	xVec3 vec_dmghit;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct _class_1
{
	type_33 endPoint;
	xVec3 direction;
	f32 length;
	f32 scale;
	f32 width;
	type_38 endParam;
	type_39 endVel;
	type_41 paramSpan;
	f32 arc_height;
	xVec3 arc_normal;
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

struct RpTriangle
{
	type_34 vertIndex;
	s16 matIndex;
};

struct xPSYNote
{
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
	type_36 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct NPCMsg
{
	en_NPC_MSG_ID msgid;
	u32 sendto;
	u32 from;
	en_NPC_MSG_DATA infotype;
	union
	{
		NPCSysEvent sysevent;
		NPCBlastInfo blastarea;
		NPCChatInfo chatter;
		NPCSpawnInfo spawning;
		NPCTargetInfo target;
		NPCDamageInfo dmgdata;
		NPCStunInfo stundata;
		NPCScriptInfo scriptdata;
		NPCMountInfo mountdata;
		NPCAreaInfo areadata;
	};
	void* attached;
	NPCMsg* next;
	f32 tmr_delay;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	type_75 snd_queue;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct _anon4
{
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct _tagEmitSphere
{
	f32 radius;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_69 light;
	type_70 light_frame;
	s32 memlvl;
};

struct rxReq
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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

struct NPCStunInfo
{
	f32 tym_stuntime;
	en_NPC_CARRY_STATE carrystate;
	s32 allowStun;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_43 Conditional;
	type_43 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	f32 currSize;
	f32 currVelocity;
	f32 deltVelocity;
	f32 currSpin;
	f32 deltSpin;
	type_48 currColor;
	type_51 deltColor;
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

struct _anon5
{
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_53 wt;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_54 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	type_92 birthColor;
	type_2 deathColor;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	s32 flg_psyche;
	xGoal* goallist;
	type_81 goalstak;
	type_86 tmr_stack;
	s32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	s32 gid_safegoal;
	type_30 fun_remap;
	void* userContext;
	s32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
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

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	s8 allowDetect;
	s8 allowPatrol;
	s8 allowWander;
	s8 reduceCollide;
	s8 useNavSplines;
	type_21 pad;
	s8 allowChase;
	s8 allowAttack;
	s8 assumeLOS;
	s8 assumeFOV;
	en_dupowavmod duploWaveMode;
	f32 duploSpawnDelay;
	s32 duploSpawnLifeMax;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_42 f_setup;
	type_44 f_reset;
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

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xCurveAsset
{
};

struct _anon6
{
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
	type_62 pad;
	void* moprops;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_55 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
};

struct NPCSysEvent
{
	s32 doLinkEvents;
	s32 handled;
	xBase* from;
	xBase* to;
	u32 toEvent;
	type_56 toParam;
	xBase* toParamWidget;
};

struct xJSPHeader
{
	type_49 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_96 Files;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_77 name;
	type_80 mask;
	u32 filterAddressing;
	s32 refCount;
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
	type_1 tag_vert;
	type_5 animFrameRange;
	type_9 cnt_esteem;
	f32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	s32 test_count;
	type_17 talk_filter;
	u8 talk_filter_size;
};

struct NPCScriptInfo
{
	u32 aid_playanim;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RpSector
{
	s32 type;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_88 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum en_NPC_DAMAGE_TYPE
{
	DMGTYP_UNDECIDED,
	DMGTYP_ABOVE,
	DMGTYP_BELOW,
	DMGTYP_SIDE,
	DMGTYP_INSTAKILL,
	DMGTYP_KILLEVENT,
	DMGTYP_HITBYTOSS,
	DMGTYP_NPCATTACK,
	DMGTYP_ROPE,
	DMGTYP_CRUISEBUBBLE,
	DMGTYP_PROJECTILE,
	DMGTYP_BOULDER,
	DMGTYP_BUBBOWL,
	DMGTYP_THUNDER_TIKI_EXPLOSION,
	DMGTYP_DAMAGE_SURFACE,
	DMGTYP_BUNGEED,
	DMGTYP_SURFACE,
	DMGTYP_NOMORE,
	DMGTYP_FORCEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct zMovePoint : xMovePoint
{
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct zFragGroup
{
	type_59 list;
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

struct xListItem_1
{
	s32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
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

struct NPCMountInfo
{
	xEnt* ent_toMount;
	xCollis* col_forMount;
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
	type_57 renderCallBack;
	RxPipeline* pipeline;
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
	type_11 resolvID;
	type_14 base2Name;
	type_16 id2Name;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _anon7
{
};

struct NPCBlastInfo
{
	xVec3 pos_blast;
	f32 rad_blast;
	f32 spd_expand;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
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
	type_79 emit_pad;
	type_82 rot;
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
	type_65 vert;
	xVec3 norm;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	u32 parEmitterID;
	zParEmitter* parEmitter;
};

struct NPCAreaInfo
{
	zNPCCommon* npc_origin;
	xVec3 pos_origin;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _anon8
{
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xCoef
{
	type_66 a;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
};

enum en_NPC_MSG_DATA
{
	NPC_MDAT_BLANK,
	NPC_MDAT_SYSEVENT,
	NPC_MDAT_BLAST,
	NPC_MDAT_CHAT,
	NPC_MDAT_SPAWN,
	NPC_MDAT_TARGET,
	NPC_MDAT_DAMAGE,
	NPC_MDAT_STUN,
	NPC_MDAT_SCRIPT,
	NPC_MDAT_MOUNT,
	NPC_MDAT_AREANOTIFY,
	NPC_MDAT_NOMORE,
	NPC_MDAT_FORCE = 0x7fffffff
};

struct _class_2
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_28 nodeBody;
	type_31 nodeInit;
	type_32 nodeTerm;
	type_3 pipelineNodeInit;
	type_8 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct NPCChatInfo
{
	xVec3 pos_chat;
	f32 tym_chat;
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_72 matrix;
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
	type_15 colls;
	type_18 post;
	type_23 depenq;
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
	type_0 corner;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_89 pad;
	f32 delay;
	xSpline3* spl;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
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

struct RyzMemData
{
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct _class_3
{
	type_84 base_point;
	type_87 point;
	s16 total_points;
	s16 end_points;
	f32 arc_height;
	xVec3 arc_normal;
	type_91 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	f32 rand_radius;
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

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _class_4
{
	f32 t;
	f32 u;
	f32 v;
};

enum en_NPC_CARRY_STATE
{
	zNPCCARRY_NONE,
	zNPCCARRY_PICKUP,
	zNPCCARRY_THROW,
	zNPCCARRY_ATTEMPTPICKUP,
	zNPCCARRY_FORCEINT = 0x7fffffff
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

struct NPCSpawnInfo
{
	xVec3 pos_spawn;
	zMovePoint* nav_firstMovepoint;
	zMovePoint* nav_spawnReference;
	s32 spawnSuccess;
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

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct _anon9
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct xParInterp
{
	type_93 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct RwLinkList
{
	RwLLLink link;
};

type_35 buffer;
type_40 buffer;
_anon3 __vt__14zNPCGoalScript;
_anon2 __vt__18zNPCGoalScriptWait;
_anon1 __vt__14zNPCGoalCommon;
_anon6 __vt__5xGoal;
_anon8 __vt__18zNPCGoalScriptLead;
_anon5 __vt__20zNPCGoalScriptFollow;
_anon7 __vt__18zNPCGoalScriptTalk;
_anon4 __vt__18zNPCGoalScriptMove;
_anon0 __vt__20zNPCGoalScriptAttack;
_anon9 __vt__18zNPCGoalScriptAnim;

s32 NPCMessage(zNPCGoalScript* this, NPCMsg* mail);
s32 SysEvent();
s32 Exit();
s32 Enter(zNPCGoalScript* this, f32 dt, void* updCtxt);
xFactoryInst* GOALCreate_Script(s32 who, RyzMemGrow* grow);

// NPCMessage__14zNPCGoalScriptFP6NPCMsg
// Start address: 0x30fdc0
s32 NPCMessage(zNPCGoalScript* this, NPCMsg* mail)
{
	s32 handled;
}

// SysEvent__14zNPCGoalScriptFP5xBaseP5xBaseUiPCfP5xBasePi
// Start address: 0x30fe50
s32 SysEvent()
{
}

// Exit__14zNPCGoalScriptFfPv
// Start address: 0x30fe60
s32 Exit()
{
}

// Enter__14zNPCGoalScriptFfPv
// Start address: 0x30fe70
s32 Enter(zNPCGoalScript* this, f32 dt, void* updCtxt)
{
	zNPCCommon* npc;
}

// GOALCreate_Script__FiP10RyzMemGrowPv
// Start address: 0x30fed0
xFactoryInst* GOALCreate_Script(s32 who, RyzMemGrow* grow)
{
	xGoal* goal;
}

