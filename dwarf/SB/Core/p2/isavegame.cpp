typedef struct st_ISGTHUMDATA;
typedef struct xUpdateCullEnt;
typedef struct RpGeometry;
typedef struct RpAtomic;
typedef struct st_ISG_MEMCARD_DATA;
typedef struct xEnt;
typedef struct xBox;
typedef struct rxHeapBlockHeader;
typedef struct xModelInstance;
typedef struct xJSPNodeInfo;
typedef struct RxClusterDefinition;
typedef struct _zPortal;
typedef struct xEnvAsset;
typedef struct xSurface;
typedef struct xAnimTable;
typedef struct st_ISGSESSION;
typedef struct xAnimPlay;
typedef struct xScene;
typedef struct RpLight;
typedef struct xMemPool;
typedef struct RpClump;
typedef struct xQuat;
typedef struct xPortalAsset;
typedef struct rxHeapFreeBlock;
typedef struct xModelTag;
typedef struct xEntFrame;
typedef struct xFFX;
typedef struct rxReq;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct zPlayerSettings;
typedef struct RwSphere;
typedef struct xBase;
typedef struct xEntCollis;
typedef struct xCollis;
typedef struct _tagxRumble;
typedef struct iFogParams;
typedef struct zEnt;
typedef struct xAnimState;
typedef struct xUpdateCullGroup;
typedef struct xBound;
typedef struct RwTexDictionary;
typedef enum RpWorldRenderOrder;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct zScene;
typedef struct iEnv;
typedef struct RpMaterial;
typedef struct RpTriangle;
typedef struct RpWorld;
typedef struct xMat3x3;
typedef struct RxPipeline;
typedef struct sceCdCLOCK;
typedef struct RwRGBA;
typedef struct RxClusterRef;
typedef struct zJumpParam;
typedef struct xLightKitLight;
typedef struct tri_data_0;
typedef struct xModelBucket;
typedef struct RwTexture;
typedef struct RwTexCoords;
typedef struct xAnimFile;
typedef struct RpSector;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMeshHeader;
typedef struct zEntHangable;
typedef struct xShadowSimpleCache;
typedef struct sceMcTblGetDir;
typedef struct RxIoSpec;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct RwResEntry;
typedef struct xAnimTransition;
typedef enum en_ASYNC_OPCODE;
typedef struct xJSPHeader;
typedef struct xAnimTransitionList;
typedef struct xEntShadow;
typedef enum RxClusterValidityReq;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xGlobals;
typedef struct zPlatform;
typedef struct anim_coll_data;
typedef struct RxNodeMethods;
typedef struct xLightKit;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct _tagxPad;
typedef struct RwRaster;
typedef struct zCutsceneMgr;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef enum en_CHGCODE;
typedef struct xEnv;
typedef struct RwPlane;
typedef struct zAssetPickupTable;
typedef struct RxPipelineNode;
typedef struct xLinkAsset;
typedef enum en_NAMEGEN_TYPE;
typedef struct RxCluster;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeParam;
typedef struct sceMcStDateTime;
typedef struct xUpdateCullMgr;
typedef struct RwMatrixTag;
typedef struct _tagiPad;
typedef struct RxPacket;
typedef struct RxPipelineRequiresCluster;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xBaseAsset;
typedef struct RwObjectHasFrame;
typedef struct xClumpCollBSPTree;
typedef struct _class_0;
typedef struct tri_data_1;
typedef struct RwLinkList;
typedef struct RpVertexNormal;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct sceMcIconSys;
typedef enum en_ISGMC_ERRSTATUS;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct zLasso;
typedef struct RpInterpolator;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobals;
typedef struct zGlobalSettings;
typedef struct xAnimMultiFileEntry;
typedef struct xGroup;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct _class_1;
typedef struct RwBBox;
typedef struct RpPolygon;
typedef struct xVec2;
typedef struct zPlayerLassoInfo;
typedef struct RpMaterialList;
typedef struct xQCData;
typedef struct RwV3d;
typedef struct xModelPool;
typedef struct xBBox;
typedef struct xAnimSingle;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef enum en_ISGMCA_STATUS;
typedef struct xEntAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xAnimMultiFileBase;
typedef enum en_ASYNC_OPSTAT;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef enum en_ISG_IOMODE;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xGridBound;
typedef struct analog_data;
typedef enum en_ASYNC_OPERR;
typedef enum en_MEMCARD_SEEKPT;
typedef struct xShadowSimplePoly;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xRot;
typedef struct zPlayerCarryInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntDrive;
typedef struct xCamera;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct _zEnv;
typedef struct xCylinder;

typedef void(*type_2)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_6)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_7)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_8)(xEnt*);
typedef void(*type_12)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_13)(void*, en_CHGCODE);
typedef RpAtomic*(*type_15)(RpAtomic*);
typedef uint32(*type_20)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_27)(void*);
typedef void(*type_28)(xEnt*, xScene*, float32);
typedef void(*type_29)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_43)(RwCamera*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef RwCamera*(*type_53)(RwCamera*);
typedef int32(*type_54)(xBase*, xBase*, uint32, float32*, xBase*);
typedef xBase*(*type_63)(uint32);
typedef void(*type_64)(RwResEntry*);
typedef int32(*type_65)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_66)(xMemPool*, void*);
typedef void(*type_70)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_73)(xBase*);
typedef int32(*type_74)(RxNodeDefinition*);
typedef int8*(*type_76)(uint32);
typedef void(*type_77)(RxNodeDefinition*);
typedef int32(*type_80)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_81)(RwObjectHasFrame*);
typedef void(*type_82)(RxPipelineNode*);
typedef uint32(*type_83)(void*, void*);
typedef int32(*type_87)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_94)(RxPipelineNode*, uint32, uint32, void*);
typedef RpClump*(*type_106)(RpClump*, void*);

typedef float32 type_0[16];
typedef uint8 type_1[4];
typedef uint8 type_5[3];
typedef int8 type_9[64];
typedef uint32 type_10[4];
typedef float32 type_11[4];
typedef uint8 type_14[2];
typedef xVec4 type_16[12];
typedef uint8 type_17[68];
typedef uint32 type_18[2];
typedef type_121 type_19[4];
typedef uint8 type_21[2];
typedef float32 type_22[6];
typedef int8 type_23[25];
typedef int8 type_24[64];
typedef type_23 type_25[3];
typedef type_125 type_26[3];
typedef float32 type_30[3];
typedef type_125 type_31[3];
typedef float32 type_32[3];
typedef int8 type_33[25];
typedef type_33 type_34[3];
typedef xModelTag type_35[2];
typedef float32 type_36[3];
typedef xVec3 type_37[4];
typedef uint8 type_38[68];
typedef RwTexCoords* type_39[8];
typedef uint8 type_40[64];
typedef int8 type_41[64];
typedef float32 type_42[4];
typedef uint8 type_44[64];
typedef int8 type_45[64];
typedef RpLight* type_46[2];
typedef uint8 type_47[64];
typedef xEnt* type_48[111];
typedef int8 type_50[64];
typedef RwFrame* type_52[2];
typedef uint8 type_55[512];
typedef int8* type_56[3];
typedef int8 type_57[64];
typedef int8 type_58[32];
typedef int8 type_59[128];
typedef xCollis type_60[18];
typedef type_59 type_61[6];
typedef int8 type_62[32];
typedef int8 type_67[64];
typedef uint8 type_68[14];
typedef xModelTag type_69[4];
typedef int32 type_71[2];
typedef int8 type_72[32];
typedef xModelInstance* type_75[14];
typedef RxCluster type_78[1];
typedef uint8 type_79[4];
typedef uint8 type_84[22];
typedef int8 type_85[32];
typedef uint8 type_86[22];
typedef int32 type_88[2];
typedef int8 type_89[32];
typedef float32 type_90[2];
typedef RwFrustumPlane type_91[6];
typedef uint16 type_92[3];
typedef _tagxPad type_93[4];
typedef type_121 type_95[4];
typedef xVec3 type_96[5];
typedef RwV3d type_97[8];
typedef uint8 type_98[32];
typedef uint8 type_99[5];
typedef int8 type_100[32];
typedef type_100 type_101[8];
typedef xVec3 type_102[60];
typedef float32 type_103[2];
typedef type_125 type_104[3];
typedef float32 type_105[22];
typedef float32 type_107[22];
typedef int8 type_108[32];
typedef uint32 type_109[15];
typedef RwTexCoords* type_110[8];
typedef uint32 type_111[15];
typedef uint8 type_112[2];
typedef type_125 type_113[3];
typedef xAnimMultiFileEntry type_114[1];
typedef xVec3 type_115[3];
typedef uint32 type_116[15];
typedef int8 type_117[64];
typedef uint32 type_118[72];
typedef analog_data type_119[2];
typedef int8 type_120[4];
typedef int32 type_121[4];
typedef uint16 type_122[3];
typedef int8 type_123[32];
typedef xBase* type_124[72];
typedef float32 type_125[4];
typedef int8 type_126[992];
typedef int8* type_127[8];

struct st_ISGTHUMDATA
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_83 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_39 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_15 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct st_ISG_MEMCARD_DATA
{
	int32 mcport;
	int32 mcslot;
	int32 mcfp;
	en_ISG_IOMODE fmode;
	type_9 gamepath;
	sceMcTblGetDir finfo;
	int32 cur_mcop;
	en_ISGMC_ERRSTATUS mcerr;
	int32 allow_cache;
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
	type_28 update;
	type_28 endUpdate;
	type_4 bupdate;
	type_6 move;
	type_8 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_29 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_10 pad;
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
	_class_0 anim_coll;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	float32 padF1;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
};

struct xSurface
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

struct st_ISGSESSION
{
	st_ISG_MEMCARD_DATA* mcdata;
	type_45 gameroot;
	type_50 gamedir;
	en_ASYNC_OPCODE as_curop;
	en_ASYNC_OPSTAT as_opstat;
	en_ASYNC_OPERR as_operr;
	void* cltdata;
	en_CHGCODE chgcode;
	type_13 chgfunc;
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
	type_12 BeforeAnimMatrices;
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
	type_63 resolvID;
	type_73 base2Name;
	type_76 id2Name;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_66 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_106 callback;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_42 wt;
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

struct xFFX
{
};

struct rxReq
{
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_22 MoveSpeed;
	type_30 AnimSneak;
	type_32 AnimWalk;
	type_36 AnimRun;
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	type_79 talk_filter;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
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
	type_60 colls;
	type_2 post;
	type_20 depenq;
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
		_class_1 tuv;
		tri_data_1 tri;
	};
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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
	type_3 BeforeEnter;
	type_70 StateCallback;
	type_12 BeforeAnimMatrices;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_5 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_7 Callback;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	uint32 num_update_base;
	xBase** update_base;
	type_118 baseCount;
	type_124 baseList;
	_zEnv* zen;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_46 light;
	type_52 light_frame;
	int32 memlvl;
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

struct RpTriangle
{
	type_122 vertIndex;
	int16 matIndex;
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
	type_51 renderCallBack;
	RxPipeline* pipeline;
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

struct sceCdCLOCK
{
	uint8 stat;
	uint8 second;
	uint8 minute;
	uint8 hour;
	uint8 pad;
	uint8 day;
	uint8 month;
	uint8 year;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_0 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_58 name;
	type_62 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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
	type_112 NumAnims;
	void** RawData;
};

struct RpSector
{
	int32 type;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_43 beginUpdate;
	type_53 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_91 frustumPlanes;
	RwBBox frustumBoundBox;
	type_97 frustumCorners;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct zEntHangable
{
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
	type_37 corner;
};

struct sceMcTblGetDir
{
	sceMcStDateTime _Create;
	sceMcStDateTime _Modify;
	uint32 FileSizeByte;
	uint16 AttrFile;
	uint16 Reserve1;
	uint32 Reserve2;
	uint32 PdaAplNo;
	type_98 EntryName;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xEntBoulder
{
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_64 destroyNotify;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_49 Conditional;
	type_49 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

enum en_ASYNC_OPCODE
{
	ISG_OPER_NOOP,
	ISG_OPER_INIT,
	ISG_OPER_SAVE,
	ISG_OPER_LOAD
};

struct xJSPHeader
{
	type_120 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_90 radius;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_110 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_61 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_72 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	int32 option_vibration;
	uint32 QuarterSpeed;
	float32 update_dt;
	int32 useHIPHOP;
	uint8 NoMusic;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
};

struct zPlatform
{
};

struct anim_coll_data
{
};

struct RxNodeMethods
{
	type_65 nodeBody;
	type_74 nodeInit;
	type_77 nodeTerm;
	type_80 pipelineNodeInit;
	type_82 pipelineNodeTerm;
	type_87 pipelineNodeConfig;
	type_94 configMsgHandler;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _tagxPad
{
	type_84 value;
	type_86 last_value;
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	type_105 up_tmr;
	type_107 down_tmr;
	type_119 analog;
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

struct zCutsceneMgr
{
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

enum en_CHGCODE
{
	ISG_CHG_NONE,
	ISG_CHG_TARGET,
	ISG_CHG_GAMELIST
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct zAssetPickupTable
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_11 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum en_NAMEGEN_TYPE
{
	ISG_NGTYP_GAMEDIR,
	ISG_NGTYP_GAMEFILE,
	ISG_NGTYP_CONFIG,
	ISG_NGTYP_ICONTHUM
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_114 Files;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct sceMcStDateTime
{
	uint8 Resv2;
	uint8 Sec;
	uint8 Min;
	uint8 Hour;
	uint8 Day;
	uint8 Month;
	uint16 Year;
};

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	type_27 activateCB;
	type_27 deactivateCB;
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

struct _tagiPad
{
	int32 port;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_78 clusters;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_81 sync;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct sceMcIconSys
{
	type_1 Head;
	uint16 Reserv1;
	uint16 OffsLF;
	uint32 Reserv2;
	uint32 TransRate;
	type_19 BgColor;
	type_26 LightDir;
	type_31 LightColor;
	type_125 Ambient;
	type_38 TitleName;
	type_40 FnameView;
	type_44 FnameCopy;
	type_47 FnameDel;
	type_55 Reserve3;
};

enum en_ISGMC_ERRSTATUS
{
	ISGMC_ERR_NONE,
	ISGMC_ERR_NOMEMCARD,
	ISGMC_ERR_MKDIR,
	ISGMC_ERR_OPEN,
	ISGMC_ERR_CLOSE,
	ISGMC_ERR_READ,
	ISGMC_ERR_WRITE
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	type_96 lastRefs;
	type_99 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 DisableForceConversation;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 SandyMeleeMinFrame;
	float32 SandyMeleeMaxFrame;
	float32 SandyMeleeRadius;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	type_14 PowerUp;
	type_21 InitialPowerUp;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpPolygon
{
	uint16 matIndex;
	type_92 vertIndex;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float32 dist;
	uint8 destroy;
	uint8 targetGuide;
	float32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float32 copterTime;
	int32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_103 BilinearLerp;
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

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_102 tranTable;
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

enum en_ISGMCA_STATUS
{
	ISG_MCA_STAT_DONE_ERR = 0xffffffff,
	ISG_MCA_STAT_INPROG,
	ISG_MCA_STAT_DONE
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

enum en_ISG_IOMODE
{
	ISG_IOMODE_READ = 0x1,
	ISG_IOMODE_WRITE,
	ISG_IOMODE_APPEND
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum en_ASYNC_OPERR
{
	ISG_OPERR_NONE,
	ISG_OPERR_NOOPER,
	ISG_OPERR_MULTIOPER,
	ISG_OPERR_INITFAIL,
	ISG_OPERR_GAMEDIR,
	ISG_OPERR_NOCARD,
	ISG_OPERR_NOROOM,
	ISG_OPERR_DAMAGE,
	ISG_OPERR_CORRUPT,
	ISG_OPERR_OTHER,
	ISG_OPERR_SVNOSPACE,
	ISG_OPERR_SVINIT,
	ISG_OPERR_SVWRITE,
	ISG_OPERR_SVOPEN,
	ISG_OPERR_LDINIT,
	ISG_OPERR_LDREAD,
	ISG_OPERR_LDOPEN,
	ISG_OPERR_TGTERR,
	ISG_OPERR_TGTREM,
	ISG_OPERR_TGTPREP,
	ISG_OPERR_UNKNOWN,
	ISG_OPERR_NOMORE
};

enum en_MEMCARD_SEEKPT
{
	ISG_MCSEEK_TOP,
	ISG_MCSEEK_CUR,
	ISG_MCSEEK_END
};

struct xShadowSimplePoly
{
	type_115 vert;
	xVec3 norm;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	xEnt* MountChimney;
	float32 MountChimOldY;
	uint32 MaxHealth;
	uint32 DoMeleeCheck;
	float32 VictoryTimer;
	float32 BadGuyNearTimer;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	zEnt* FireTarget;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_35 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	type_69 HangPawTag;
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	int32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	uint32 Inv_Shiny;
	uint32 Inv_Spatula;
	type_109 Inv_PatsSock;
	type_111 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_116 Inv_LevelPickups;
	uint32 Inv_LevelPickups_CurrentLevel;
	uint32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_18 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_48 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_68 sb_model_indices;
	type_75 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
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
	tri_data_0 tri;
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	type_16 frustplane;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

int8* g_scoobydoo_icon_list;
int32 gIconSize;
int8* g_scoobydoo_icon_copy;
int8* g_scoobydoo_icon_delete;
int32 g_isginit;
st_ISG_MEMCARD_DATA g_mcdata_MAIN;
st_ISGSESSION g_isgdata_MAIN;
st_ISG_MEMCARD_DATA g_mcdata_MONITOR;
st_ISGSESSION g_isgdata_MONITOR;
type_56 g_isg_scemodule;
type_127 g_strz_egotrip;
type_93 mPad;
zGlobals globals;

uint8 iSGCheckMemoryCard(int32 index);
uint8 iSGCheckForGameFiles(int32 mcPort);
uint8 iSGIsGameCorrupt(st_ISGSESSION* sess);
void iSGIconInit(void* iconData, uint32 size);
void iSGMakeTimeStamp(int8* str);
int32 iSG_is_MCOP_realerr(int32 mcop, int32 que_rc);
int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret);
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval);
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n);
int32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, int8* buf, int32 bufsize);
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode);
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force);
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr);
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path);
int32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath);
int32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mcidx_portslot(int32 mcidx, int32* port, int32* slot, int32* concnt);
void SQUIB_init_st_iconsys(sceMcIconSys* icsys);
int32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_start_your_engines();
int32 iSGAutoSave_Monitor(st_ISGSESSION* isg, int32 idx_target);
void iSGAutoSave_Disconnect(st_ISGSESSION* isg);
st_ISGSESSION* iSGAutoSave_Connect(int32 idx_target, void* cltdata, type_13 chg);
void iSGAutoSave_Startup();
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg);
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block);
int32 iSGReadLeader(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 numbytes, int32 async);
int32 iSGLoadFile(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 async);
int32 iSGSaveFile(st_ISGSESSION* isgdata, int8* fname, int8* data, int32 n, int32 async);
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, int8* dname, int32 force_iconfix);
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, int8* dname);
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr);
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname);
int32 iSGFileSize(st_ISGSESSION* isgdata, int8* fname);
uint8 iSGGameExists(st_ISGSESSION* isgdata, int8* fname);
int32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx);
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath);
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async);
int32 iSGTgtPhysSlotIdx();
int32 iSGTgtCount(int32* max);
void iSGSessionEnd(st_ISGSESSION* isgdata);
st_ISGSESSION* iSGSessionBegin(void* cltdata, type_13 chgfunc, int32 monitor);
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx);
int32 iSGShutdown();
int32 iSGStartup();

// iSGCheckMemoryCard__FP13st_ISGSESSIONi
// Start address: 0x1b3230
uint8 iSGCheckMemoryCard(int32 index)
{
	int32 result;
}

// iSGCheckForGameFiles__Fi
// Start address: 0x1b32a0
uint8 iSGCheckForGameFiles(int32 mcPort)
{
	type_34 fileNames;
	int8* gameDir;
	int32 resultCode;
	int32 i;
}

// iSGIsGameCorrupt__FP13st_ISGSESSIONi
// Start address: 0x1b33b0
uint8 iSGIsGameCorrupt(st_ISGSESSION* sess)
{
	type_25 fileNames;
	int8* gameDir;
	int32 resultCode;
	int32 i;
}

// iSGIconInit__FPvUi
// Start address: 0x1b34d0
void iSGIconInit(void* iconData, uint32 size)
{
}

// iSGMakeTimeStamp__FPc
// Start address: 0x1b34e0
void iSGMakeTimeStamp(int8* str)
{
}

// iSG_is_MCOP_realerr__Fii
// Start address: 0x1b34f0
int32 iSG_is_MCOP_realerr(int32 mcop, int32 que_rc)
{
	int32 is_ok;
}

// iSG_is_synccode_realerr__FiiP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3540
int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret)
{
	int32 is_ok;
}

// iSG_mcasync_chkop__FP19st_ISG_MEMCARD_DATAiPi
// Start address: 0x1b3a60
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval)
{
	en_ISGMCA_STATUS result;
	int32 rc;
	int32 ret;
	int32 mcf;
	uint32 on;
}

// iSG_mca_fwrite__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3bf0
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n)
{
	int32 result;
	int32 rc;
}

// iSG_mca_fread__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3c60
int32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, int8* buf, int32 bufsize)
{
	int32 result;
	int32 rc;
}

// iSG_mca_fopen__FP19st_ISG_MEMCARD_DATAPCc13en_ISG_IOMODE
// Start address: 0x1b3cd0
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode)
{
	int32 result;
	int32 rc;
	int32 ps2mode;
}

// iSG_mca_unfmt__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3d40
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata)
{
	int32 result;
	int32 rc;
}

// iSG_mca_fmt__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b3dc0
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force)
{
	int32 result;
	int32 rc;
}

// iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi
// Start address: 0x1b3e90
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	int32 result;
	int32 rc;
	sceMcTblGetDir* finf;
}

// iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCcPCc
// Start address: 0x1b3f80
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path)
{
	int32 result;
	int32 rc;
	type_41 str_buf;
	int32 len;
	int32 numfound;
}

// iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiiPCcPCcPiPi
// Start address: 0x1b41a0
int32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 rc;
	int32 fc_need;
	int32 fEc_need;
	int32 xtra_fent;
	int32 estclust;
	int32 totclust;
	int32 reset_mcpath;
}

// iSG_mc_availDirEnt__FP19st_ISG_MEMCARD_DATAiPCc
// Start address: 0x1b4340
int32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath)
{
	int32 result;
	int32 rc;
}

// iSG_mc_availclust__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b43f0
int32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 clust;
}

// iSG_mc_isPSIIcard__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b44a0
int32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 type;
}

// iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4560
int32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 is_fmtd;
}

// iSG_mc_exists__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4620
int32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
}

// iSG_mcidx_portslot__FiPiPiPi
// Start address: 0x1b46c0
int32 iSG_mcidx_portslot(int32 mcidx, int32* port, int32* slot, int32* concnt)
{
	int32 result;
	int32 rc;
	int32 ret;
	int32 i;
	int32 type;
	int32 tp;
	int32 con_p0;
	int32 con_p1;
	int32 use_port;
	int32 cur_mcop;
}

// SQUIB_init_st_iconsys__FP12sceMcIconSys
// Start address: 0x1b4870
void SQUIB_init_st_iconsys(sceMcIconSys* icsys)
{
	type_95 bgcolor;
	type_104 lightdir;
	type_113 lightcol;
	type_125 ambient;
	int8* iconname;
	type_17 sjistitle;
}

// iSG_add_sysicons__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4a40
int32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata)
{
	sceMcIconSys icsysdata;
	int8* iconname;
}

// iSG_add_cfgholder__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4c20
int32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata)
{
	type_126 cfgdata;
	int8* strptr;
	int8* cfgname;
}

// iSG_start_your_engines__Fv
// Start address: 0x1b4d80
int32 iSG_start_your_engines()
{
	int32 result;
	int32 rc;
}

// iSGAutoSave_Monitor__FP13st_ISGSESSIONi
// Start address: 0x1b4e30
int32 iSGAutoSave_Monitor(st_ISGSESSION* isg, int32 idx_target)
{
	uint32 stat;
}

// iSGAutoSave_Disconnect__FP13st_ISGSESSION
// Start address: 0x1b4eb0
void iSGAutoSave_Disconnect(st_ISGSESSION* isg)
{
}

// iSGAutoSave_Connect__FiPvPFPv10en_CHGCODE_v
// Start address: 0x1b4ec0
st_ISGSESSION* iSGAutoSave_Connect(int32 idx_target, void* cltdata, type_13 chg)
{
	st_ISGSESSION* isg;
}

// iSGAutoSave_Startup__Fv
// Start address: 0x1b4f80
void iSGAutoSave_Startup()
{
}

// iSGOpError__FP13st_ISGSESSIONPc
// Start address: 0x1b4f90
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg)
{
}

// iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi
// Start address: 0x1b51e0
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block)
{
	int32 rc;
	int32 sceResultCode;
}

// iSGReadLeader__FP13st_ISGSESSIONPCcPcii
// Start address: 0x1b5390
int32 iSGReadLeader(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 numbytes, int32 async)
{
	int32 result;
	int32 rc;
}

// iSGLoadFile__FP13st_ISGSESSIONPCcPci
// Start address: 0x1b5660
int32 iSGLoadFile(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 async)
{
}

// iSGSaveFile__FP13st_ISGSESSIONPCcPciiPc
// Start address: 0x1b56f0
int32 iSGSaveFile(st_ISGSESSION* isgdata, int8* fname, int8* data, int32 n, int32 async)
{
	int32 result;
	int32 rc;
}

// iSGSetupGameDir__FP13st_ISGSESSIONPCci
// Start address: 0x1b5a20
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, int8* dname, int32 force_iconfix)
{
	int32 result;
	int32 rc;
	st_ISG_MEMCARD_DATA* mcdata;
	int32 dir_isnew;
	int8* strptr;
}

// iSGSelectGameDir__FP13st_ISGSESSIONPCc
// Start address: 0x1b5d40
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, int8* dname)
{
}

// iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi
// Start address: 0x1b5e30
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	int32 rc;
	sceMcTblGetDir* finf;
	sceCdCLOCK clock;
	type_24 datestr;
}

// iSGFileModDate__FP13st_ISGSESSIONPCc
// Start address: 0x1b5f90
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname)
{
	int8* date_str;
}

// iSGFileSize__FP13st_ISGSESSIONPCc
// Start address: 0x1b5fb0
int32 iSGFileSize(st_ISGSESSION* isgdata, int8* fname)
{
	int32 size;
}

// iSGGameExists__FP13st_ISGSESSIONPCc
// Start address: 0x1b6000
uint8 iSGGameExists(st_ISGSESSION* isgdata, int8* fname)
{
	int32 rc;
	type_117 str_buf;
	int32 len;
	int32 numfound;
	st_ISG_MEMCARD_DATA* mcdata;
	int8* path;
}

// iSGTgtHaveRoomStartup__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61a0
int32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 result;
}

// iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61b0
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 result;
	int32 i;
	int8* gameName;
}

// iSGTgtSetActive__FP13st_ISGSESSIONi
// Start address: 0x1b62b0
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx)
{
}

// iSGTgtState__FP13st_ISGSESSIONiPCc
// Start address: 0x1b6320
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath)
{
	uint32 state;
	int32 rc;
}

// iSGTgtFormat__FP13st_ISGSESSIONiiPi
// Start address: 0x1b6460
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async)
{
	int32 result;
	int32 rc;
}

// iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi
// Start address: 0x1b6580
int32 iSGTgtPhysSlotIdx()
{
	type_71 concnt;
	int32 dp;
	int32 ds;
}

// iSGTgtCount__FP13st_ISGSESSIONPi
// Start address: 0x1b65d0
int32 iSGTgtCount(int32* max)
{
	int32 rc;
	int32 tgtmax;
	type_88 concnt;
	int32 dp;
	int32 ds;
}

// iSGSessionEnd__FP13st_ISGSESSION
// Start address: 0x1b6670
void iSGSessionEnd(st_ISGSESSION* isgdata)
{
}

// iSGSessionBegin__FPvPFPv10en_CHGCODE_vi
// Start address: 0x1b6680
st_ISGSESSION* iSGSessionBegin(void* cltdata, type_13 chgfunc, int32 monitor)
{
	st_ISGSESSION* isgdata;
}

// iSGMakeName__F15en_NAMEGEN_TYPEPCci
// Start address: 0x1b6770
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx)
{
	int8* use_buf;
	int8* fmt_sb;
	int8* fmt_sd;
	int8* fmt_sbd;
	int32 rotate;
	type_101 rotatebuf;
}

// iSGShutdown__Fv
// Start address: 0x1b6970
int32 iSGShutdown()
{
}

// iSGStartup__Fv
// Start address: 0x1b6990
int32 iSGStartup()
{
}

