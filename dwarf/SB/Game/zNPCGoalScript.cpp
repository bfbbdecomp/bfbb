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
typedef struct zFragLocInfo;
typedef struct rxHeapBlockHeader;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct NPCDamageInfo;
typedef struct RxPipelineRequiresCluster;
typedef enum en_NPC_SOUND;
typedef struct zFragSound;
typedef struct _class_0;
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
typedef struct zFragInfo;
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

typedef int32(*type_3)(RxPipelineNode*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef void(*type_7)(xEnt*, xVec3*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpClump*(*type_10)(RpClump*, void*);
typedef xBase*(*type_11)(uint32);
typedef int32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef void(*type_13)(zFrag*, zFragAsset*);
typedef int8*(*type_14)(xBase*);
typedef int8*(*type_16)(uint32);
typedef void(*type_18)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef uint32(*type_23)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef uint32(*type_24)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_25)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_26)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_30)(int32*, en_trantype*);
typedef int32(*type_31)(RxNodeDefinition*);
typedef void(*type_32)(RxNodeDefinition*);
typedef RpAtomic*(*type_36)(RpAtomic*);
typedef void(*type_42)(xEnt*);
typedef uint32(*type_43)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_44)(xEnt*);
typedef int32(*type_52)(xGoal*, void*, float32, void*);
typedef RpWorldSector*(*type_57)(RpWorldSector*);
typedef int32(*type_58)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_63)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_64)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_67)(xEnt*, xScene*, float32);
typedef void(*type_68)(zFrag*, float32);
typedef void(*type_71)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_73)(xMemPool*, void*);
typedef void(*type_74)(xEnt*);
typedef void(*type_83)(RwResEntry*);

typedef xVec3 type_0[4];
typedef xModelTag type_1[20];
typedef float32 type_2[4];
typedef xVec3 type_5[9];
typedef int32 type_9[5];
typedef xCollis type_15[18];
typedef uint8 type_17[4];
typedef RwTexCoords* type_19[8];
typedef int8 type_21[3];
typedef float32 type_22[16];
typedef xVec3 type_33[2];
typedef uint16 type_34[3];
typedef int8 type_35[16];
typedef xParInterp type_37[1];
typedef float32 type_38[2];
typedef float32 type_39[2];
typedef int8 type_40[16];
typedef float32 type_41[2];
typedef float32 type_45[2];
typedef xParInterp type_46[4];
typedef xParInterp type_47[4];
typedef float32 type_48[4];
typedef int8 type_49[4];
typedef RwTexCoords* type_50[8];
typedef float32 type_51[4];
typedef float32 type_53[4];
typedef float32 type_54[4];
typedef uint8 type_55[3];
typedef float32 type_56[4];
typedef zFrag* type_59[21];
typedef uint32 type_60[4];
typedef uint32 type_61[2];
typedef uint8 type_62[3];
typedef xVec3 type_65[3];
typedef float32 type_66[4];
typedef RpLight* type_69[2];
typedef RwFrame* type_70[2];
typedef float32 type_72[16];
typedef NPCSndQueue type_75[4];
typedef float32 type_76[2];
typedef int8 type_77[32];
typedef xModelInstance* type_78[2];
typedef uint8 type_79[3];
typedef int8 type_80[32];
typedef xGoal* type_81[5];
typedef uint8 type_82[3];
typedef xVec3 type_84[16];
typedef float32 type_85[1];
typedef float32 type_86[1][5];
typedef xVec3 type_87[16];
typedef uint8 type_88[3];
typedef uint8 type_89[2];
typedef uint16 type_90[3];
typedef float32 type_91[16];
typedef float32 type_92[4];
typedef float32 type_93[2];
typedef uint8 type_94[2];
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
	void(*update)(xEnt*, xScene*, float32);
	void(*endUpdate)(xEnt*, xScene*, float32);
	void(*bupdate)(xEnt*, xVec3*);
	void(*move)(xEnt*, xScene*, float32, xEntFrame*);
	void(*render)(xEnt*);
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	void(*transl)(xEnt*, xVec3*, xMat4x3*);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _anon0
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	float32 BilinearLerp[2];
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

struct _tagLightningLine
{
	float32 unused;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct zParEmitter : xParEmitter
{
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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
	RwTexCoords* texCoords[8];
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
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	RwTexCoords* texCoords[8];
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

struct rxHeapFreeBlock
{
	uint32 size;
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
	uint8 flags;
	uint8 type;
	uint8 bone;
	uint8 pad1;
	xVec3 offset;
	float32 radius;
	float32 deflection;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct _anon1
{
};

struct zFragBone
{
	int32 index;
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
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	uint32 startParentID;
	uint32 endParentID;
};

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	int32(*fun_process)(xGoal*, void*, en_trantype*, float32, void*);
	int32(*fun_precalc)(xGoal*, void*, float32, void*);
	int32(*fun_chkRule)(xGoal*, void*, en_trantype*, float32, void*);
	void* cbdata;
};

struct _anon2
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct NPCTargetInfo
{
	xBase* bas_tgt;
	xVec3 pos_tgt;
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
	uint32 pad3;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
};

struct NPCSndQueue
{
	uint32 sndDirect;
	en_NPC_SOUND sndtype;
	int32 flg_snd;
	float32 tmr_delay;
	float32 radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float32 delay;
	float32 alivetime;
	float32 lifetime;
	void(*update)(zFrag*, float32);
	xModelInstance* parent[2];
	zFrag* prev;
	zFrag* next;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct zFragAsset
{
	zFragType type;
	uint32 id;
	uint32 parentID[2];
	float32 lifetime;
	float32 delay;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		xParInterp value[1];
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	xParInterp color_birth[4];
	xParInterp color_death[4];
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xListItem_0
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
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

struct _tagLightningRot
{
	float32 deg[16];
	float32 degrees;
	float32 height;
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct zNPCGoalScript : zNPCGoalCommon
{
	int32 flg_script;

	int32 NPCMessage(NPCMsg* mail);
	int32 SysEvent();
	int32 Exit();
	int32 Enter(float32 dt, void* updCtxt);
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

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	void(*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xParSys
{
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

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct zFragLocInfo
{
	union
	{
		zFragBone bone;
		xModelTag tag;
	};
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	void(*InitCB)(xMemPool*, void*);
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
	void(*destroyNotify)(RwResEntry*);
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
	uint32 slotIndex;
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct _class_1
{
	xVec3 endPoint[2];
	xVec3 direction;
	float32 length;
	float32 scale;
	float32 width;
	float32 endParam[2];
	float32 endVel[2];
	float32 paramSpan[2];
	float32 arc_height;
	xVec3 arc_normal;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct zNPCGoalCommon : xGoal
{
	int32 flg_npcgauto;
	int32 flg_npcgable;
	uint32 anid_played;
	struct
	{
		int32 flg_info : 16;
		int32 flg_user : 16;
	};
};

struct NPCMsg
{
	en_NPC_MSG_ID msgid;
	uint32 sendto;
	uint32 from;
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
	float32 tmr_delay;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	NPCSndQueue snd_queue[4];
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
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	uint8 NumAnims[2];
	void** RawData;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
};

struct rxReq
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct NPCStunInfo
{
	float32 tym_stuntime;
	en_NPC_CARRY_STATE carrystate;
	int32 allowStun;
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
	uint32(*Conditional)(xAnimTransition*, xAnimSingle*, void*);
	uint32(*Callback)(xAnimTransition*, xAnimSingle*, void*);
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float32 currSize;
	float32 currVelocity;
	float32 deltVelocity;
	float32 currSpin;
	float32 deltSpin;
	float32 currColor[4];
	float32 deltColor[4];
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

struct _anon5
{
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	float32 birthColor[4];
	float32 deathColor[4];
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	xGoal* goalstak[5];
	float32 tmr_stack[1][5];
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	void(*fun_remap)(int32*, en_trantype*);
	void* userContext;
	int32 cnt_transLastTimestep;
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
	int8 allowDetect;
	int8 allowPatrol;
	int8 allowWander;
	int8 reduceCollide;
	int8 useNavSplines;
	int8 pad[3];
	int8 allowChase;
	int8 allowAttack;
	int8 assumeLOS;
	int8 assumeFOV;
	en_dupowavmod duploWaveMode;
	float32 duploSpawnDelay;
	int32 duploSpawnLifeMax;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	void(*f_setup)(xEnt*);
	void(*f_reset)(xEnt*);
	struct
	{
		int32 flg_basenpc : 16;
		int32 inUpdate : 8;
		int32 flg_upward : 8;
	};
	int32 colFreq;
	int32 colFreqReset;
	struct
	{
		uint32 flg_colCheck : 8;
		uint32 flg_penCheck : 8;
		uint32 flg_unused : 16;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	int16 refCount;
	int16 pad;
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
	uint8 pad[3];
	void* moprops;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint8 rot[3];
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

struct NPCSysEvent
{
	int32 doLinkEvents;
	int32 handled;
	xBase* from;
	xBase* to;
	uint32 toEvent;
	float32 toParam[4];
	xBase* toParamWidget;
};

struct xJSPHeader
{
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
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
	xAnimMultiFileEntry Files[1];
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
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
	xModelTag tag_vert[20];
	xVec3 animFrameRange[9];
	int32 cnt_esteem[5];
	float32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int32 test_count;
	uint8 talk_filter[4];
	uint8 talk_filter_size;
};

struct NPCScriptInfo
{
	uint32 aid_playanim;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RpSector
{
	int32 type;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	uint8 pad[3];
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
	float32 r;
	float32 h;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zFragGroup
{
	zFrag* list[21];
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

struct xListItem_1
{
	int32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct zFragInfo
{
	union
	{
		zFragGroup group;
		zFragParticle particle;
		zFragProjectile projectile;
		zFragLightning lightning;
		zFragSound sound;
		zFragShockwave shockwave;
	};
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
	uint32 mode;
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	float32 rad_blast;
	float32 spd_expand;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
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
	uint8 emit_pad[3];
	uint8 rot[3];
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
	xVec3 vert[3];
	xVec3 norm;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	uint32 parEmitterID;
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
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xCoef
{
	float32 a[4];
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
};

struct NPCChatInfo
{
	xVec3 pos_chat;
	float32 tym_chat;
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
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	xVec3 corner[4];
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
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
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RyzMemData
{
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_3
{
	xVec3 base_point[16];
	xVec3 point[16];
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	float32 thickness[16];
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float32 rand_radius;
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
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
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
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	RxCluster clusters[1];
};

struct NPCSpawnInfo
{
	xVec3 pos_spawn;
	zMovePoint* nav_firstMovepoint;
	zMovePoint* nav_spawnReference;
	int32 spawnSuccess;
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
	float32 height;
	float32 radius;
	float32 deflection;
};

struct _anon9
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct RwLinkList
{
	RwLLLink link;
};

int8 buffer[16];
int8 buffer[16];
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

int32 NPCMessage(NPCMsg* mail);
int32 SysEvent();
int32 Exit();
int32 Enter(float32 dt, void* updCtxt);
xFactoryInst* GOALCreate_Script(int32 who, RyzMemGrow* grow);

// NPCMessage__14zNPCGoalScriptFP6NPCMsg
// Start address: 0x30fdc0
int32 zNPCGoalScript::NPCMessage(NPCMsg* mail)
{
	int32 handled;
	// Line 117, Address: 0x30fdc0, Func Offset: 0
	// Line 121, Address: 0x30fdc4, Func Offset: 0x4
	// Line 117, Address: 0x30fdc8, Func Offset: 0x8
	// Line 121, Address: 0x30fdd0, Func Offset: 0x10
	// Line 118, Address: 0x30fdd4, Func Offset: 0x14
	// Line 121, Address: 0x30fdd8, Func Offset: 0x18
	// Line 125, Address: 0x30fdfc, Func Offset: 0x3c
	// Line 126, Address: 0x30fe00, Func Offset: 0x40
	// Line 127, Address: 0x30fe10, Func Offset: 0x50
	// Line 129, Address: 0x30fe18, Func Offset: 0x58
	// Line 130, Address: 0x30fe28, Func Offset: 0x68
	// Line 132, Address: 0x30fe30, Func Offset: 0x70
	// Line 134, Address: 0x30fe34, Func Offset: 0x74
	// Line 136, Address: 0x30fe38, Func Offset: 0x78
	// Line 137, Address: 0x30fe3c, Func Offset: 0x7c
	// Func End, Address: 0x30fe4c, Func Offset: 0x8c
}

// SysEvent__14zNPCGoalScriptFP5xBaseP5xBaseUiPCfP5xBasePi
// Start address: 0x30fe50
int32 zNPCGoalScript::SysEvent()
{
	// Line 114, Address: 0x30fe50, Func Offset: 0
	// Func End, Address: 0x30fe58, Func Offset: 0x8
}

// Exit__14zNPCGoalScriptFfPv
// Start address: 0x30fe60
int32 zNPCGoalScript::Exit()
{
	// Line 106, Address: 0x30fe60, Func Offset: 0
	// Func End, Address: 0x30fe68, Func Offset: 0x8
}

// Enter__14zNPCGoalScriptFfPv
// Start address: 0x30fe70
int32 zNPCGoalScript::Enter(float32 dt, void* updCtxt)
{
	zNPCCommon* npc;
	// Line 91, Address: 0x30fe70, Func Offset: 0
	// Line 96, Address: 0x30fe74, Func Offset: 0x4
	// Line 91, Address: 0x30fe78, Func Offset: 0x8
	// Line 92, Address: 0x30fe90, Func Offset: 0x20
	// Line 96, Address: 0x30fe9c, Func Offset: 0x2c
	// Line 98, Address: 0x30fea4, Func Offset: 0x34
	// Line 99, Address: 0x30feb4, Func Offset: 0x44
	// Func End, Address: 0x30fecc, Func Offset: 0x5c
}

// GOALCreate_Script__FiP10RyzMemGrowPv
// Start address: 0x30fed0
xFactoryInst* GOALCreate_Script(int32 who, RyzMemGrow* grow)
{
	xGoal* goal;
	// Line 52, Address: 0x30fed0, Func Offset: 0
	// Line 54, Address: 0x30fed4, Func Offset: 0x4
	// Line 52, Address: 0x30fed8, Func Offset: 0x8
	// Line 54, Address: 0x30fedc, Func Offset: 0xc
	// Line 52, Address: 0x30fee0, Func Offset: 0x10
	// Line 54, Address: 0x30feec, Func Offset: 0x1c
	// Line 56, Address: 0x30ff18, Func Offset: 0x48
	// Line 57, Address: 0x30ff90, Func Offset: 0xc0
	// Line 59, Address: 0x30ff98, Func Offset: 0xc8
	// Line 60, Address: 0x310010, Func Offset: 0x140
	// Line 62, Address: 0x310018, Func Offset: 0x148
	// Line 63, Address: 0x310090, Func Offset: 0x1c0
	// Line 65, Address: 0x310098, Func Offset: 0x1c8
	// Line 66, Address: 0x310110, Func Offset: 0x240
	// Line 68, Address: 0x310118, Func Offset: 0x248
	// Line 69, Address: 0x310190, Func Offset: 0x2c0
	// Line 71, Address: 0x310198, Func Offset: 0x2c8
	// Line 72, Address: 0x310210, Func Offset: 0x340
	// Line 74, Address: 0x310218, Func Offset: 0x348
	// Line 75, Address: 0x310290, Func Offset: 0x3c0
	// Line 77, Address: 0x310298, Func Offset: 0x3c8
	// Line 82, Address: 0x310310, Func Offset: 0x440
	// Line 83, Address: 0x310320, Func Offset: 0x450
	// Func End, Address: 0x310330, Func Offset: 0x460
}

