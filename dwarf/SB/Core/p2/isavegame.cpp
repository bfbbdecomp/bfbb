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

typedef void(*type_2)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_6)(xEnt*, xScene*, f32, xEntFrame*);
typedef u32(*type_7)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_8)(xEnt*);
typedef void(*type_12)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_13)(void*, en_CHGCODE);
typedef RpAtomic*(*type_15)(RpAtomic*);
typedef u32(*type_20)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_27)(void*);
typedef void(*type_28)(xEnt*, xScene*, f32);
typedef void(*type_29)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_43)(RwCamera*);
typedef u32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef RwCamera*(*type_53)(RwCamera*);
typedef s32(*type_54)(xBase*, xBase*, u32, f32*, xBase*);
typedef xBase*(*type_63)(u32);
typedef void(*type_64)(RwResEntry*);
typedef s32(*type_65)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_66)(xMemPool*, void*);
typedef void(*type_70)(xAnimState*, xAnimSingle*, void*);
typedef s8*(*type_73)(xBase*);
typedef s32(*type_74)(RxNodeDefinition*);
typedef s8*(*type_76)(u32);
typedef void(*type_77)(RxNodeDefinition*);
typedef s32(*type_80)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_81)(RwObjectHasFrame*);
typedef void(*type_82)(RxPipelineNode*);
typedef u32(*type_83)(void*, void*);
typedef s32(*type_87)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_94)(RxPipelineNode*, u32, u32, void*);
typedef RpClump*(*type_106)(RpClump*, void*);

typedef f32 type_0[16];
typedef u8 type_1[4];
typedef u8 type_5[3];
typedef s8 type_9[64];
typedef u32 type_10[4];
typedef f32 type_11[4];
typedef u8 type_14[2];
typedef xVec4 type_16[12];
typedef u8 type_17[68];
typedef u32 type_18[2];
typedef type_121 type_19[4];
typedef u8 type_21[2];
typedef f32 type_22[6];
typedef s8 type_23[25];
typedef s8 type_24[64];
typedef type_23 type_25[3];
typedef type_125 type_26[3];
typedef f32 type_30[3];
typedef type_125 type_31[3];
typedef f32 type_32[3];
typedef s8 type_33[25];
typedef type_33 type_34[3];
typedef xModelTag type_35[2];
typedef f32 type_36[3];
typedef xVec3 type_37[4];
typedef u8 type_38[68];
typedef RwTexCoords* type_39[8];
typedef u8 type_40[64];
typedef s8 type_41[64];
typedef f32 type_42[4];
typedef u8 type_44[64];
typedef s8 type_45[64];
typedef RpLight* type_46[2];
typedef u8 type_47[64];
typedef xEnt* type_48[111];
typedef s8 type_50[64];
typedef RwFrame* type_52[2];
typedef u8 type_55[512];
typedef s8* type_56[3];
typedef s8 type_57[64];
typedef s8 type_58[32];
typedef s8 type_59[128];
typedef xCollis type_60[18];
typedef type_59 type_61[6];
typedef s8 type_62[32];
typedef s8 type_67[64];
typedef u8 type_68[14];
typedef xModelTag type_69[4];
typedef s32 type_71[2];
typedef s8 type_72[32];
typedef xModelInstance* type_75[14];
typedef RxCluster type_78[1];
typedef u8 type_79[4];
typedef u8 type_84[22];
typedef s8 type_85[32];
typedef u8 type_86[22];
typedef s32 type_88[2];
typedef s8 type_89[32];
typedef f32 type_90[2];
typedef RwFrustumPlane type_91[6];
typedef u16 type_92[3];
typedef _tagxPad type_93[4];
typedef type_121 type_95[4];
typedef xVec3 type_96[5];
typedef RwV3d type_97[8];
typedef u8 type_98[32];
typedef u8 type_99[5];
typedef s8 type_100[32];
typedef type_100 type_101[8];
typedef xVec3 type_102[60];
typedef f32 type_103[2];
typedef type_125 type_104[3];
typedef f32 type_105[22];
typedef f32 type_107[22];
typedef s8 type_108[32];
typedef u32 type_109[15];
typedef RwTexCoords* type_110[8];
typedef u32 type_111[15];
typedef u8 type_112[2];
typedef type_125 type_113[3];
typedef xAnimMultiFileEntry type_114[1];
typedef xVec3 type_115[3];
typedef u32 type_116[15];
typedef s8 type_117[64];
typedef u32 type_118[72];
typedef analog_data type_119[2];
typedef s8 type_120[4];
typedef s32 type_121[4];
typedef u16 type_122[3];
typedef s8 type_123[32];
typedef xBase* type_124[72];
typedef f32 type_125[4];
typedef s8 type_126[992];
typedef s8* type_127[8];

struct st_ISGTHUMDATA
{
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_83 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct st_ISG_MEMCARD_DATA
{
	s32 mcport;
	s32 mcslot;
	s32 mcfp;
	en_ISG_IOMODE fmode;
	type_9 gamepath;
	sceMcTblGetDir finfo;
	s32 cur_mcop;
	en_ISGMC_ERRSTATUS mcerr;
	s32 allow_cache;
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
	s32 driveMode;
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
	u32 size;
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
	_class_0 anim_coll;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xEnvAsset : xBaseAsset
{
	u32 bspAssetID;
	u32 startCameraAssetID;
	u32 climateFlags;
	f32 climateStrengthMin;
	f32 climateStrengthMax;
	u32 bspLightKit;
	u32 objectLightKit;
	f32 padF1;
	u32 bspCollisionAssetID;
	u32 bspFXAssetID;
	u32 bspCameraAssetID;
	u32 bspMapperID;
	u32 bspMapperCollisionID;
	u32 bspMapperFXID;
	f32 loldHeight;
};

struct xSurface
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
	u16 NumSingle;
	u16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_12 BeforeAnimMatrices;
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
	type_63 resolvID;
	type_73 base2Name;
	type_76 id2Name;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_66 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	f32 s;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
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
	u32 mode;
};

struct xFFX
{
};

struct rxReq
{
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_22 MoveSpeed;
	type_30 AnimSneak;
	type_32 AnimWalk;
	type_36 AnimRun;
	f32 JumpGravity;
	f32 GravSmooth;
	f32 FloatSpeed;
	f32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	f32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	f32 spin_damp_xz;
	f32 spin_damp_y;
	u8 talk_anims;
	u8 talk_filter_size;
	type_79 talk_filter;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
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
	type_60 colls;
	type_2 post;
	type_20 depenq;
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
		_class_1 tuv;
		tri_data_1 tri;
	};
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct iFogParams
{
	RwFogType type;
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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
	type_3 BeforeEnter;
	type_70 StateCallback;
	type_12 BeforeAnimMatrices;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_7 Callback;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		u32 num_ents;
		u32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	u32 num_update_base;
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
	s32 memlvl;
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

struct RpTriangle
{
	type_122 vertIndex;
	s16 matIndex;
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
	type_51 renderCallBack;
	RxPipeline* pipeline;
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

struct sceCdCLOCK
{
	u8 stat;
	u8 second;
	u8 minute;
	u8 hour;
	u8 pad;
	u8 day;
	u8 month;
	u8 year;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_0 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_58 name;
	type_62 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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
	type_112 NumAnims;
	void** RawData;
};

struct RpSector
{
	s32 type;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_91 frustumPlanes;
	RwBBox frustumBoundBox;
	type_97 frustumCorners;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct zEntHangable
{
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
	type_37 corner;
};

struct sceMcTblGetDir
{
	sceMcStDateTime _Create;
	sceMcStDateTime _Modify;
	u32 FileSizeByte;
	u16 AttrFile;
	u16 Reserve1;
	u32 Reserve2;
	u32 PdaAplNo;
	type_98 EntryName;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	s32 size;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	u32 version;
	u32 jspNodeCount;
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
	f32 dst_cast;
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
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	s32 profile;
	type_61 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_72 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	s32 fog_t0;
	s32 fog_t1;
	s32 option_vibration;
	u32 QuarterSpeed;
	f32 update_dt;
	s32 useHIPHOP;
	u8 NoMusic;
	s8 currentActivePad;
	u8 firstStartPressed;
	u32 minVSyncCnt;
	u8 dontShowPadMessageDuringLoadingOrCutScene;
	u8 autoSaveFeature;
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
	u32 tagID;
	u32 groupID;
	u32 lightCount;
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
	u32 creationAttributes;
};

struct _tagxPad
{
	type_84 value;
	type_86 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_105 up_tmr;
	type_107 down_tmr;
	type_119 analog;
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

struct zCutsceneMgr
{
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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
	f32 distance;
};

struct zAssetPickupTable
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_11 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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
	u8 Resv2;
	u8 Sec;
	u8 Min;
	u8 Hour;
	u8 Day;
	u8 Month;
	u16 Year;
};

struct xUpdateCullMgr
{
	u32 entCount;
	u32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	u32 mgrCount;
	u32 mgrCurr;
	xUpdateCullEnt* mgrList;
	u32 grpCount;
	xUpdateCullGroup* grpList;
	type_27 activateCB;
	type_27 deactivateCB;
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

struct _tagiPad
{
	s32 port;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_78 clusters;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_81 sync;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct sceMcIconSys
{
	type_1 Head;
	u16 Reserv1;
	u16 OffsLF;
	u32 Reserv2;
	u32 TransRate;
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
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct zLasso
{
	u32 flags;
	f32 secsTotal;
	f32 secsLeft;
	f32 stRadius;
	f32 tgRadius;
	f32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	f32 stSlack;
	f32 stSlackDist;
	f32 tgSlack;
	f32 tgSlackDist;
	f32 crSlack;
	f32 currDist;
	f32 lastDist;
	type_96 lastRefs;
	type_99 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
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
	u16 AnalogMin;
	u16 AnalogMax;
	f32 SundaeTime;
	f32 SundaeMult;
	u32 InitialShinyCount;
	u32 InitialSpatulaCount;
	s32 ShinyValuePurple;
	s32 ShinyValueBlue;
	s32 ShinyValueGreen;
	s32 ShinyValueYellow;
	s32 ShinyValueRed;
	s32 ShinyValueCombo0;
	s32 ShinyValueCombo1;
	s32 ShinyValueCombo2;
	s32 ShinyValueCombo3;
	s32 ShinyValueCombo4;
	s32 ShinyValueCombo5;
	s32 ShinyValueCombo6;
	s32 ShinyValueCombo7;
	s32 ShinyValueCombo8;
	s32 ShinyValueCombo9;
	s32 ShinyValueCombo10;
	s32 ShinyValueCombo11;
	s32 ShinyValueCombo12;
	s32 ShinyValueCombo13;
	s32 ShinyValueCombo14;
	s32 ShinyValueCombo15;
	f32 ComboTimer;
	u32 Initial_Specials;
	u32 TakeDamage;
	f32 DamageTimeHit;
	f32 DamageTimeSurface;
	f32 DamageTimeEGen;
	f32 DamageSurfKnock;
	f32 DamageGiveHealthKnock;
	u32 CheatSpongeball;
	u32 CheatPlayerSwitch;
	u32 CheatAlwaysPortal;
	u32 CheatFlyToggle;
	u32 DisableForceConversation;
	f32 StartSlideAngle;
	f32 StopSlideAngle;
	f32 RotMatchMaxAngle;
	f32 RotMatchMatchTime;
	f32 RotMatchRelaxTime;
	f32 Gravity;
	f32 BBashTime;
	f32 BBashHeight;
	f32 BBashDelay;
	f32 BBashCVTime;
	f32 BBounceSpeed;
	f32 BSpinMinFrame;
	f32 BSpinMaxFrame;
	f32 BSpinRadius;
	f32 SandyMeleeMinFrame;
	f32 SandyMeleeMaxFrame;
	f32 SandyMeleeRadius;
	f32 BubbleBowlTimeDelay;
	f32 BubbleBowlLaunchPosLeft;
	f32 BubbleBowlLaunchPosUp;
	f32 BubbleBowlLaunchPosAt;
	f32 BubbleBowlLaunchVelLeft;
	f32 BubbleBowlLaunchVelUp;
	f32 BubbleBowlLaunchVelAt;
	f32 BubbleBowlPercentIncrease;
	f32 BubbleBowlMinSpeed;
	f32 BubbleBowlMinRecoverTime;
	f32 SlideAccelVelMin;
	f32 SlideAccelVelMax;
	f32 SlideAccelStart;
	f32 SlideAccelEnd;
	f32 SlideAccelPlayerFwd;
	f32 SlideAccelPlayerBack;
	f32 SlideAccelPlayerSide;
	f32 SlideVelMaxStart;
	f32 SlideVelMaxEnd;
	f32 SlideVelMaxIncTime;
	f32 SlideVelMaxIncAccel;
	f32 SlideAirHoldTime;
	f32 SlideAirSlowTime;
	f32 SlideAirDblHoldTime;
	f32 SlideAirDblSlowTime;
	f32 SlideVelDblBoost;
	u8 SlideApplyPhysics;
	type_14 PowerUp;
	type_21 InitialPowerUp;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpPolygon
{
	u16 matIndex;
	type_92 vertIndex;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	f32 dist;
	u8 destroy;
	u8 targetGuide;
	f32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	f32 copterTime;
	s32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_103 BilinearLerp;
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

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_102 tranTable;
	s32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	f32 y0det;
	f32 dydet;
	f32 r0det;
	f32 drdet;
	f32 thdet;
	f32 rtime;
	f32 ttime;
	f32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	s32 nrays;
	s32 rrand;
	f32 startrot;
	f32 endrot;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xAnimMultiFileBase
{
	u32 Count;
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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
	f32 rot;
	u32 initCamID;
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
	u32 Visible;
	u32 Health;
	s32 Speed;
	f32 SpeedMult;
	s32 Sneak;
	s32 Teeter;
	f32 SlipFadeTimer;
	s32 Slide;
	f32 SlideTimer;
	s32 Stepping;
	s32 JumpState;
	s32 LastJumpState;
	f32 JumpTimer;
	f32 LookAroundTimer;
	u32 LookAroundRand;
	u32 LastProjectile;
	f32 DecelRun;
	f32 DecelRunSpeed;
	f32 HotsauceTimer;
	f32 LeanLerp;
	f32 ScareTimer;
	xBase* ScareSource;
	f32 CowerTimer;
	f32 DamageTimer;
	f32 SundaeTimer;
	f32 ControlOffTimer;
	f32 HelmetTimer;
	u32 WorldDisguise;
	u32 Bounced;
	f32 FallDeathTimer;
	f32 HeadbuttVel;
	f32 HeadbuttTimer;
	u32 SpecialReceived;
	xEnt* MountChimney;
	f32 MountChimOldY;
	u32 MaxHealth;
	u32 DoMeleeCheck;
	f32 VictoryTimer;
	f32 BadGuyNearTimer;
	f32 ForceSlipperyTimer;
	f32 ForceSlipperyFriction;
	f32 ShockRadius;
	f32 ShockRadiusOld;
	f32 Face_ScareTimer;
	u32 Face_ScareRandom;
	u32 Face_Event;
	f32 Face_EventTimer;
	f32 Face_PantTimer;
	u32 Face_AnimSpecific;
	u32 IdleRand;
	f32 IdleMinorTimer;
	f32 IdleMajorTimer;
	f32 IdleSitTimer;
	s32 Transparent;
	zEnt* FireTarget;
	u32 ControlOff;
	u32 ControlOnEvent;
	u32 AutoMoveSpeed;
	f32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	f32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_35 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	f32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	f32 HangLength;
	xVec3 HangStartPos;
	f32 HangStartLerp;
	type_69 HangPawTag;
	f32 HangPawOffset;
	f32 HangElapsed;
	f32 Jump_CurrGravity;
	f32 Jump_HoldTimer;
	f32 Jump_ChangeTimer;
	s32 Jump_CanDouble;
	s32 Jump_CanFloat;
	s32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	s32 CanJump;
	s32 CanBubbleSpin;
	s32 CanBubbleBounce;
	s32 CanBubbleBash;
	s32 IsJumping;
	s32 IsDJumping;
	s32 IsBubbleSpinning;
	s32 IsBubbleBouncing;
	s32 IsBubbleBashing;
	s32 IsBubbleBowling;
	s32 WasDJumping;
	s32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	s32 cheat_mode;
	u32 Inv_Shiny;
	u32 Inv_Spatula;
	type_109 Inv_PatsSock;
	type_111 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_116 Inv_LevelPickups;
	u32 Inv_LevelPickups_CurrentLevel;
	u32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	s32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_18 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_48 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_68 sb_model_indices;
	type_75 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	u32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	f32 minDist;
	f32 maxDist;
	f32 minHeight;
	f32 maxHeight;
	f32 maxCosAngle;
	f32 throwMinDist;
	f32 throwMaxDist;
	f32 throwMinHeight;
	f32 throwMaxHeight;
	f32 throwMaxStack;
	f32 throwMaxCosAngle;
	f32 throwTargetRotRate;
	f32 targetRot;
	u32 grabTarget;
	xVec3 grabOffset;
	f32 grabLerpMin;
	f32 grabLerpMax;
	f32 grabLerpLast;
	u32 grabYclear;
	f32 throwGravity;
	f32 throwHeight;
	f32 throwDistance;
	f32 fruitFloorDecayMin;
	f32 fruitFloorDecayMax;
	f32 fruitFloorBounce;
	f32 fruitFloorFriction;
	f32 fruitCeilingBounce;
	f32 fruitWallBounce;
	f32 fruitLifetime;
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
	f32 r;
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
	f32 fov;
	u32 flags;
	f32 tmr;
	f32 tm_acc;
	f32 tm_dec;
	f32 ltmr;
	f32 ltm_acc;
	f32 ltm_dec;
	f32 dmin;
	f32 dmax;
	f32 dcur;
	f32 dgoal;
	f32 hmin;
	f32 hmax;
	f32 hcur;
	f32 hgoal;
	f32 pmin;
	f32 pmax;
	f32 pcur;
	f32 pgoal;
	f32 depv;
	f32 hepv;
	f32 pepv;
	f32 orn_epv;
	f32 yaw_epv;
	f32 pitch_epv;
	f32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	f32 yaw_cur;
	f32 yaw_goal;
	f32 pitch_cur;
	f32 pitch_goal;
	f32 roll_cur;
	f32 roll_goal;
	f32 dct;
	f32 dcd;
	f32 dccv;
	f32 dcsv;
	f32 hct;
	f32 hcd;
	f32 hccv;
	f32 hcsv;
	f32 pct;
	f32 pcd;
	f32 pccv;
	f32 pcsv;
	f32 orn_ct;
	f32 orn_cd;
	f32 orn_ccv;
	f32 orn_csv;
	f32 yaw_ct;
	f32 yaw_cd;
	f32 yaw_ccv;
	f32 yaw_csv;
	f32 pitch_ct;
	f32 pitch_cd;
	f32 pitch_ccv;
	f32 pitch_csv;
	f32 roll_ct;
	f32 roll_cd;
	f32 roll_ccv;
	f32 roll_csv;
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
	f32 r;
	f32 h;
};

s8* g_scoobydoo_icon_list;
s32 gIconSize;
s8* g_scoobydoo_icon_copy;
s8* g_scoobydoo_icon_delete;
s32 g_isginit;
st_ISG_MEMCARD_DATA g_mcdata_MAIN;
st_ISGSESSION g_isgdata_MAIN;
st_ISG_MEMCARD_DATA g_mcdata_MONITOR;
st_ISGSESSION g_isgdata_MONITOR;
type_56 g_isg_scemodule;
type_127 g_strz_egotrip;
type_93 mPad;
zGlobals globals;

u8 iSGCheckMemoryCard(s32 index);
u8 iSGCheckForGameFiles(s32 mcPort);
u8 iSGIsGameCorrupt(st_ISGSESSION* sess);
void iSGIconInit(void* iconData, u32 size);
void iSGMakeTimeStamp(s8* str);
s32 iSG_is_MCOP_realerr(s32 mcop, s32 que_rc);
s32 iSG_is_synccode_realerr(s32 mcop, s32 mcopret);
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, s32 block, s32* sync_resval);
s32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, s8* data, s32 n);
s32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, s8* buf, s32 bufsize);
s32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, s8* fname, en_ISG_IOMODE mode);
s32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata);
s32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, s32 force);
s32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, s8* fname, s32* sec, s32* min, s32* hr, s32* mon, s32* day, s32* yr);
s32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, s8* fname, s8* path);
s32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx, s32 fsize, s8* dpath, s8* fname, s32* bytesNeeded, s32* availOnDisk);
s32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx, s8* dpath);
s32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx);
s32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx);
s32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx);
s32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx);
s32 iSG_mcidx_portslot(s32 mcidx, s32* port, s32* slot, s32* concnt);
void SQUIB_init_st_iconsys(sceMcIconSys* icsys);
s32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata);
s32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata);
s32 iSG_start_your_engines();
s32 iSGAutoSave_Monitor(st_ISGSESSION* isg, s32 idx_target);
void iSGAutoSave_Disconnect(st_ISGSESSION* isg);
st_ISGSESSION* iSGAutoSave_Connect(s32 idx_target, void* cltdata, type_13 chg);
void iSGAutoSave_Startup();
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, s8* errmsg);
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, s32 block);
s32 iSGReadLeader(st_ISGSESSION* isgdata, s8* fname, s8* databuf, s32 numbytes, s32 async);
s32 iSGLoadFile(st_ISGSESSION* isgdata, s8* fname, s8* databuf, s32 async);
s32 iSGSaveFile(st_ISGSESSION* isgdata, s8* fname, s8* data, s32 n, s32 async);
s32 iSGSetupGameDir(st_ISGSESSION* isgdata, s8* dname, s32 force_iconfix);
s32 iSGSelectGameDir(st_ISGSESSION* isgdata, s8* dname);
s8* iSGFileModDate(st_ISGSESSION* isgdata, s8* fname, s32* sec, s32* min, s32* hr, s32* mon, s32* day, s32* yr);
s8* iSGFileModDate(st_ISGSESSION* isgdata, s8* fname);
s32 iSGFileSize(st_ISGSESSION* isgdata, s8* fname);
u8 iSGGameExists(st_ISGSESSION* isgdata, s8* fname);
s32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, s32 tidx, s32 fsize, s8* dpath, s8* fname, s32* bytesNeeded, s32* availOnDisk);
s32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, s32 tidx, s32 fsize, s8* dpath, s8* fname, s32* bytesNeeded, s32* availOnDisk);
s32 iSGTgtSetActive(st_ISGSESSION* isgdata, s32 tgtidx);
u32 iSGTgtState(st_ISGSESSION* isgdata, s32 tgtidx, s8* dpath);
s32 iSGTgtFormat(st_ISGSESSION* isgdata, s32 tgtidx, s32 async);
s32 iSGTgtPhysSlotIdx();
s32 iSGTgtCount(s32* max);
void iSGSessionEnd(st_ISGSESSION* isgdata);
st_ISGSESSION* iSGSessionBegin(void* cltdata, type_13 chgfunc, s32 monitor);
s8* iSGMakeName(en_NAMEGEN_TYPE type, s8* base, s32 idx);
s32 iSGShutdown();
s32 iSGStartup();

// iSGCheckMemoryCard__FP13st_ISGSESSIONi
// Start address: 0x1b3230
u8 iSGCheckMemoryCard(s32 index)
{
	s32 result;
}

// iSGCheckForGameFiles__Fi
// Start address: 0x1b32a0
u8 iSGCheckForGameFiles(s32 mcPort)
{
	type_34 fileNames;
	s8* gameDir;
	s32 resultCode;
	s32 i;
}

// iSGIsGameCorrupt__FP13st_ISGSESSIONi
// Start address: 0x1b33b0
u8 iSGIsGameCorrupt(st_ISGSESSION* sess)
{
	type_25 fileNames;
	s8* gameDir;
	s32 resultCode;
	s32 i;
}

// iSGIconInit__FPvUi
// Start address: 0x1b34d0
void iSGIconInit(void* iconData, u32 size)
{
}

// iSGMakeTimeStamp__FPc
// Start address: 0x1b34e0
void iSGMakeTimeStamp(s8* str)
{
}

// iSG_is_MCOP_realerr__Fii
// Start address: 0x1b34f0
s32 iSG_is_MCOP_realerr(s32 mcop, s32 que_rc)
{
	s32 is_ok;
}

// iSG_is_synccode_realerr__FiiP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3540
s32 iSG_is_synccode_realerr(s32 mcop, s32 mcopret)
{
	s32 is_ok;
}

// iSG_mcasync_chkop__FP19st_ISG_MEMCARD_DATAiPi
// Start address: 0x1b3a60
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, s32 block, s32* sync_resval)
{
	en_ISGMCA_STATUS result;
	s32 rc;
	s32 ret;
	s32 mcf;
	u32 on;
}

// iSG_mca_fwrite__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3bf0
s32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, s8* data, s32 n)
{
	s32 result;
	s32 rc;
}

// iSG_mca_fread__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3c60
s32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, s8* buf, s32 bufsize)
{
	s32 result;
	s32 rc;
}

// iSG_mca_fopen__FP19st_ISG_MEMCARD_DATAPCc13en_ISG_IOMODE
// Start address: 0x1b3cd0
s32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, s8* fname, en_ISG_IOMODE mode)
{
	s32 result;
	s32 rc;
	s32 ps2mode;
}

// iSG_mca_unfmt__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3d40
s32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata)
{
	s32 result;
	s32 rc;
}

// iSG_mca_fmt__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b3dc0
s32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, s32 force)
{
	s32 result;
	s32 rc;
}

// iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi
// Start address: 0x1b3e90
s32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, s8* fname, s32* sec, s32* min, s32* hr, s32* mon, s32* day, s32* yr)
{
	s32 result;
	s32 rc;
	sceMcTblGetDir* finf;
}

// iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCcPCc
// Start address: 0x1b3f80
s32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, s8* fname, s8* path)
{
	s32 result;
	s32 rc;
	type_41 str_buf;
	s32 len;
	s32 numfound;
}

// iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiiPCcPCcPiPi
// Start address: 0x1b41a0
s32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx, s32 fsize, s8* dpath, s8* fname, s32* bytesNeeded, s32* availOnDisk)
{
	s32 rc;
	s32 fc_need;
	s32 fEc_need;
	s32 xtra_fent;
	s32 estclust;
	s32 totclust;
	s32 reset_mcpath;
}

// iSG_mc_availDirEnt__FP19st_ISG_MEMCARD_DATAiPCc
// Start address: 0x1b4340
s32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx, s8* dpath)
{
	s32 result;
	s32 rc;
}

// iSG_mc_availclust__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b43f0
s32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx)
{
	s32 result;
	s32 rc;
	s32 clust;
}

// iSG_mc_isPSIIcard__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b44a0
s32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx)
{
	s32 result;
	s32 rc;
	s32 type;
}

// iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4560
s32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx)
{
	s32 result;
	s32 rc;
	s32 is_fmtd;
}

// iSG_mc_exists__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4620
s32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, s32 mcidx)
{
	s32 result;
	s32 rc;
}

// iSG_mcidx_portslot__FiPiPiPi
// Start address: 0x1b46c0
s32 iSG_mcidx_portslot(s32 mcidx, s32* port, s32* slot, s32* concnt)
{
	s32 result;
	s32 rc;
	s32 ret;
	s32 i;
	s32 type;
	s32 tp;
	s32 con_p0;
	s32 con_p1;
	s32 use_port;
	s32 cur_mcop;
}

// SQUIB_init_st_iconsys__FP12sceMcIconSys
// Start address: 0x1b4870
void SQUIB_init_st_iconsys(sceMcIconSys* icsys)
{
	type_95 bgcolor;
	type_104 lightdir;
	type_113 lightcol;
	type_125 ambient;
	s8* iconname;
	type_17 sjistitle;
}

// iSG_add_sysicons__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4a40
s32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata)
{
	sceMcIconSys icsysdata;
	s8* iconname;
}

// iSG_add_cfgholder__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4c20
s32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata)
{
	type_126 cfgdata;
	s8* strptr;
	s8* cfgname;
}

// iSG_start_your_engines__Fv
// Start address: 0x1b4d80
s32 iSG_start_your_engines()
{
	s32 result;
	s32 rc;
}

// iSGAutoSave_Monitor__FP13st_ISGSESSIONi
// Start address: 0x1b4e30
s32 iSGAutoSave_Monitor(st_ISGSESSION* isg, s32 idx_target)
{
	u32 stat;
}

// iSGAutoSave_Disconnect__FP13st_ISGSESSION
// Start address: 0x1b4eb0
void iSGAutoSave_Disconnect(st_ISGSESSION* isg)
{
}

// iSGAutoSave_Connect__FiPvPFPv10en_CHGCODE_v
// Start address: 0x1b4ec0
st_ISGSESSION* iSGAutoSave_Connect(s32 idx_target, void* cltdata, type_13 chg)
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
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, s8* errmsg)
{
}

// iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi
// Start address: 0x1b51e0
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, s32 block)
{
	s32 rc;
	s32 sceResultCode;
}

// iSGReadLeader__FP13st_ISGSESSIONPCcPcii
// Start address: 0x1b5390
s32 iSGReadLeader(st_ISGSESSION* isgdata, s8* fname, s8* databuf, s32 numbytes, s32 async)
{
	s32 result;
	s32 rc;
}

// iSGLoadFile__FP13st_ISGSESSIONPCcPci
// Start address: 0x1b5660
s32 iSGLoadFile(st_ISGSESSION* isgdata, s8* fname, s8* databuf, s32 async)
{
}

// iSGSaveFile__FP13st_ISGSESSIONPCcPciiPc
// Start address: 0x1b56f0
s32 iSGSaveFile(st_ISGSESSION* isgdata, s8* fname, s8* data, s32 n, s32 async)
{
	s32 result;
	s32 rc;
}

// iSGSetupGameDir__FP13st_ISGSESSIONPCci
// Start address: 0x1b5a20
s32 iSGSetupGameDir(st_ISGSESSION* isgdata, s8* dname, s32 force_iconfix)
{
	s32 result;
	s32 rc;
	st_ISG_MEMCARD_DATA* mcdata;
	s32 dir_isnew;
	s8* strptr;
}

// iSGSelectGameDir__FP13st_ISGSESSIONPCc
// Start address: 0x1b5d40
s32 iSGSelectGameDir(st_ISGSESSION* isgdata, s8* dname)
{
}

// iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi
// Start address: 0x1b5e30
s8* iSGFileModDate(st_ISGSESSION* isgdata, s8* fname, s32* sec, s32* min, s32* hr, s32* mon, s32* day, s32* yr)
{
	s32 rc;
	sceMcTblGetDir* finf;
	sceCdCLOCK clock;
	type_24 datestr;
}

// iSGFileModDate__FP13st_ISGSESSIONPCc
// Start address: 0x1b5f90
s8* iSGFileModDate(st_ISGSESSION* isgdata, s8* fname)
{
	s8* date_str;
}

// iSGFileSize__FP13st_ISGSESSIONPCc
// Start address: 0x1b5fb0
s32 iSGFileSize(st_ISGSESSION* isgdata, s8* fname)
{
	s32 size;
}

// iSGGameExists__FP13st_ISGSESSIONPCc
// Start address: 0x1b6000
u8 iSGGameExists(st_ISGSESSION* isgdata, s8* fname)
{
	s32 rc;
	type_117 str_buf;
	s32 len;
	s32 numfound;
	st_ISG_MEMCARD_DATA* mcdata;
	s8* path;
}

// iSGTgtHaveRoomStartup__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61a0
s32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, s32 tidx, s32 fsize, s8* dpath, s8* fname, s32* bytesNeeded, s32* availOnDisk)
{
	s32 result;
}

// iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61b0
s32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, s32 tidx, s32 fsize, s8* dpath, s8* fname, s32* bytesNeeded, s32* availOnDisk)
{
	s32 result;
	s32 i;
	s8* gameName;
}

// iSGTgtSetActive__FP13st_ISGSESSIONi
// Start address: 0x1b62b0
s32 iSGTgtSetActive(st_ISGSESSION* isgdata, s32 tgtidx)
{
}

// iSGTgtState__FP13st_ISGSESSIONiPCc
// Start address: 0x1b6320
u32 iSGTgtState(st_ISGSESSION* isgdata, s32 tgtidx, s8* dpath)
{
	u32 state;
	s32 rc;
}

// iSGTgtFormat__FP13st_ISGSESSIONiiPi
// Start address: 0x1b6460
s32 iSGTgtFormat(st_ISGSESSION* isgdata, s32 tgtidx, s32 async)
{
	s32 result;
	s32 rc;
}

// iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi
// Start address: 0x1b6580
s32 iSGTgtPhysSlotIdx()
{
	type_71 concnt;
	s32 dp;
	s32 ds;
}

// iSGTgtCount__FP13st_ISGSESSIONPi
// Start address: 0x1b65d0
s32 iSGTgtCount(s32* max)
{
	s32 rc;
	s32 tgtmax;
	type_88 concnt;
	s32 dp;
	s32 ds;
}

// iSGSessionEnd__FP13st_ISGSESSION
// Start address: 0x1b6670
void iSGSessionEnd(st_ISGSESSION* isgdata)
{
}

// iSGSessionBegin__FPvPFPv10en_CHGCODE_vi
// Start address: 0x1b6680
st_ISGSESSION* iSGSessionBegin(void* cltdata, type_13 chgfunc, s32 monitor)
{
	st_ISGSESSION* isgdata;
}

// iSGMakeName__F15en_NAMEGEN_TYPEPCci
// Start address: 0x1b6770
s8* iSGMakeName(en_NAMEGEN_TYPE type, s8* base, s32 idx)
{
	s8* use_buf;
	s8* fmt_sb;
	s8* fmt_sd;
	s8* fmt_sbd;
	s32 rotate;
	type_101 rotatebuf;
}

// iSGShutdown__Fv
// Start address: 0x1b6970
s32 iSGShutdown()
{
}

// iSGStartup__Fv
// Start address: 0x1b6990
s32 iSGStartup()
{
}

