typedef struct xJSPHeader;
typedef struct xAnimPlay;
typedef struct RwObjectHasFrame;
typedef struct xAnimState;
typedef struct xBase;
typedef enum _zPlayerWallJumpState;
typedef struct zCutsceneMgr;
typedef struct xCollis;
typedef struct RpLight;
typedef struct RxPipelineNode;
typedef struct zEnt;
typedef struct rxHeapFreeBlock;
typedef enum RpWorldRenderOrder;
typedef struct xEnt;
typedef struct RwRaster;
typedef struct xLinkAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xMarkerAsset;
typedef struct xAnimTable;
typedef struct RwV2d;
typedef struct RpMaterial;
typedef struct RwTexture;
typedef struct RwFrame;
typedef struct xGridBound;
typedef struct RxNodeDefinition;
typedef struct _tagxPad;
typedef struct xScene;
typedef struct zAssetPickupTable;
typedef struct xUpdateCullGroup;
typedef struct RpTriangle;
typedef struct xMemPool;
typedef enum _tagTRCState;
typedef struct xQuat;
typedef struct zJumpParam;
typedef struct RxPipeline;
typedef struct RwRGBA;
typedef struct xSurface;
typedef struct xVec3;
typedef struct xEntMotionOrbitData;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xModelInstance;
typedef struct RwTexCoords;
typedef struct RpSector;
typedef enum _tagRumbleType;
typedef struct _zEnv;
typedef enum _zPlayerType;
typedef struct _class_0;
typedef struct RxPipelineCluster;
typedef enum _CurrentPlayer;
typedef struct xMovePointAsset;
typedef struct xEntBoulder;
typedef struct xEntAsset;
typedef struct xModelBucket;
typedef struct RxPipelineNodeParam;
typedef struct RpMeshHeader;
typedef struct _tagxRumble;
typedef struct RwResEntry;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xPortalAsset;
typedef struct RwSky2DVertex;
typedef struct xGroup;
typedef struct xAnimEffect;
typedef struct RpWorldSector;
typedef struct analog_data;
typedef struct RpMorphTarget;
typedef struct xEnvAsset;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct xCamera;
typedef struct xClumpCollBSPTree;
typedef struct xLightKit;
typedef struct xEntFrame;
typedef struct xAnimFile;
typedef struct RxPipelineRequiresCluster;
typedef struct RpWorld;
typedef struct xEntMechData;
typedef struct xClumpCollBSPVertInfo;
typedef struct zPlayerGlobals;
typedef struct xCutscene;
typedef struct zCheckPoint;
typedef struct xCutsceneTime;
typedef struct xEntMotionSplineData;
typedef struct xUpdateCullMgr;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xCutsceneInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct xModelTag;
typedef struct xCutsceneData;
typedef struct zPlayerCarryInfo;
typedef struct xClumpCollBSPTriangle;
typedef struct xShadowSimplePoly;
typedef struct zPlayerSettings;
typedef struct xVec4;
typedef struct RwCamera;
typedef struct zLasso;
typedef struct _class_1;
typedef struct xUpdateCullEnt;
typedef struct xEnv;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xCutsceneBreak;
typedef struct RwLLLink;
typedef struct xCoef3;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct xMat4x3;
typedef struct iFogParams;
typedef enum RxClusterValidityReq;
typedef enum eGameMode;
typedef struct xAnimMultiFile;
typedef struct _zPortal;
typedef struct RpAtomic;
typedef struct xLightKitLight;
typedef struct _tagTRCPadInfo;
typedef struct XCSNNosey;
typedef struct RpVertexNormal;
typedef union _class_2;
typedef struct _class_3;
typedef enum pause_ability;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xVec2;
typedef struct xRot;
typedef struct tag_iFile;
typedef struct xEntMotionMechData;
typedef struct RpInterpolator;
typedef enum rxEmbeddedPacketState;
typedef struct xEntPenData;
typedef struct xSphere;
typedef struct xCutsceneZbuffer;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct jot;
typedef struct RpPolygon;
typedef struct xFFX;
typedef enum _tagPadState;
typedef struct RpMaterialList;
typedef struct xBox;
typedef struct xEntOrbitData;
typedef struct RxClusterDefinition;
typedef struct xBaseAsset;
typedef struct zEntHangable;
typedef struct xJSPNodeInfo;
typedef struct xMovePoint;
typedef struct xGlobals;
typedef struct basic_rect;
typedef struct zPlatFMRunTime;
typedef struct xModelPool;
typedef struct xEntMotion;
typedef struct xEntShadow;
typedef struct RwSphere;
typedef struct xAnimMultiFileEntry;
typedef struct xPlatformAsset;
typedef struct xAnimActiveEffect;
typedef struct xCutsceneZbufferHack;
typedef struct xEntMotionAsset;
typedef struct RpClump;
typedef struct split_tag;
typedef struct RwTexDictionary;
typedef struct anim_coll_data;
typedef struct RpGeometry;
typedef struct xGroupAsset;
typedef struct xtextbox;
typedef struct RxOutputSpec;
typedef struct callback;
typedef enum _tagPadInit;
typedef struct xAnimSingle;
typedef struct _tagPadAnalog;
typedef struct xMat3x3;
typedef struct tag_type;
typedef struct RxClusterRef;
typedef struct xSpline3;
typedef struct xEntSplineData;
typedef enum eGameWhereAmI;
typedef struct xBound;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileBase;
typedef struct xEntMotionPenData;
typedef struct xfont;
typedef struct xCutsceneMgr;
typedef struct xCoef;
typedef struct xEntDrive;
typedef struct zScene;
typedef struct RxNodeMethods;
typedef struct xQCData;
typedef struct tag_xFile;
typedef struct xCutsceneMgrAsset;
typedef struct xBBox;
typedef struct zPlatform;
typedef struct RwSky2DVertexFields;
typedef struct xEntMPData;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct _tagiTRCPadInfo;
typedef struct zGlobals;
typedef struct iEnv;
typedef struct substr;
typedef struct xEntMotionERData;
typedef struct RxPacket;
typedef struct zGlobalSettings;
typedef struct _tagiPad;
typedef enum RwFogType;
typedef struct zPlayerLassoInfo;
typedef struct iColor_tag;
typedef struct tri_data_0;
typedef struct RwRGBAReal;
typedef struct tri_data_1;
typedef struct zLedgeGrabParams;
typedef struct RwLinkList;
typedef enum en_SOAK_DIR;
typedef union RwSky2DVertexAlignmentOverlay;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef void(*type_6)(RxPipelineNode*);
typedef u32(*type_11)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_17)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_24)(RpWorldSector*);
typedef u32(*type_27)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_31)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_35)(RxNodeDefinition*);
typedef void(*type_36)(RxNodeDefinition*);
typedef s32(*type_37)(RxPipelineNode*);
typedef u32(*type_39)(xAnimTransition*, xAnimSingle*, void*);
typedef xBase*(*type_41)(u32);
typedef s8*(*type_43)(xBase*);
typedef s8*(*type_44)(u32);
typedef void(*type_46)(xEnt*, xScene*, f32);
typedef s32(*type_47)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_49)(void*);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_52)(xEnt*, xVec3*);
typedef void(*type_55)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_57)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_60)(xEnt*);
typedef u32(*type_66)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_68)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_80)(jot&, xtextbox&, f32, f32);
typedef RpClump*(*type_90)(RpClump*, void*);
typedef void(*type_95)(jot&, xtextbox&, xtextbox&);
typedef RwCamera*(*type_102)(RwCamera*);
typedef void(*type_108)(xMemPool*, void*);
typedef void(*type_109)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef u32(*type_110)(void*, void*);
typedef void(*type_117)(RwResEntry*);
typedef RpAtomic*(*type_119)(RpAtomic*);

typedef f32 type_1[2];
typedef RpLight* type_3[2];
typedef xVec3 type_5[60];
typedef <unknown type (0xa510)> type_7[4];
typedef u32 type_8[72];
typedef RwFrame* type_9[2];
typedef f32 type_10[15];
typedef s8 type_12[5];
typedef xBase* type_13[72];
typedef f32 type_14[15];
typedef f32 type_15[22];
typedef RwTexCoords* type_16[8];
typedef u32 type_18[15];
typedef f32 type_20[22];
typedef u32 type_21[15];
typedef u8 type_22[3];
typedef u32 type_23[15];
typedef RwFrustumPlane type_25[6];
typedef s8 type_26[16];
typedef f32 type_28[4];
typedef xVec3 type_29[5];
typedef s8 type_30[16];
typedef u32 type_32[15];
typedef RwV3d type_33[8];
typedef u8 type_34[5];
typedef analog_data type_38[2];
typedef xVec3 type_40[3];
typedef s8 type_42[16];
typedef s8* type_45[85];
typedef f32 type_48[4];
typedef u8 type_51[2];
typedef s8 type_53[16];
typedef f32 type_54[16];
typedef u32 type_56[2];
typedef u8 type_58[2];
typedef f32 type_59[6];
typedef f32 type_61[3];
typedef s8 type_62[128];
typedef f32 type_63[3];
typedef xModelTag type_64[2];
typedef f32 type_65[3];
typedef s8 type_67[2048];
typedef u16 type_69[3];
typedef xEnt* type_70[111];
typedef xVec3 type_71[4];
typedef u32 type_72[4];
typedef f32 type_73[12];
typedef s8 type_74[32];
typedef _tagTRCPadInfo type_75[4];
typedef f32 type_76[12];
typedef f32 type_77[12];
typedef xCutsceneZbuffer type_78[4];
typedef s8 type_79[128];
typedef type_79 type_81[6];
typedef f32 type_82[12];
typedef u8 type_83[2];
typedef RwSky2DVertex type_84[4];
typedef u32 type_85[2];
typedef s8* type_86[57];
typedef f32 type_87[12];
typedef u8 type_88[14];
typedef xModelTag type_89[4];
typedef u32 type_91[4096];
typedef u32 type_92[2];
typedef f32 type_93[12];
typedef s8 type_94[4];
typedef u16 type_96[6];
typedef xModelInstance* type_97[14];
typedef s8 type_98[32];
typedef xCollis type_99[18];
typedef u32 type_100[2];
typedef f32 type_101[2];
typedef RwTexCoords* type_103[8];
typedef RwSky2DVertex type_104[4];
typedef f32 type_105[4];
typedef u8 type_106[4];
typedef u8 type_107[2];
typedef s8 type_111[256];
typedef s8 type_112[32];
typedef s8 type_113[32];
typedef u16 type_114[3];
typedef u8 type_115[22];
typedef u8 type_116[2];
typedef xAnimMultiFileEntry type_118[1];
typedef u8 type_120[22];
typedef u8 type_121[3];
typedef s8* type_122[50];
typedef xVec4 type_123[12];
typedef RwSky2DVertex type_124[4];
typedef RxCluster type_125[1];

struct xJSPHeader
{
	type_94 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_17 BeforeAnimMatrices;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
	type_4 BeforeEnter;
	type_50 StateCallback;
	type_17 BeforeAnimMatrices;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_47 eventFunc;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct zCutsceneMgr : xCutsceneMgr
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
		_class_0 tuv;
		tri_data_0 tri;
	};
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_46 update;
	type_46 endUpdate;
	type_52 bupdate;
	type_57 move;
	type_60 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_68 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_28 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct xMarkerAsset
{
	xVec3 pos;
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

struct RwV2d
{
	f32 x;
	f32 y;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_112 name;
	type_113 mask;
	u32 filterAddressing;
	s32 refCount;
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

struct RxNodeDefinition
{
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct _tagxPad
{
	type_115 value;
	type_120 last_value;
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
	type_15 up_tmr;
	type_20 down_tmr;
	type_38 analog;
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
	type_41 resolvID;
	type_43 base2Name;
	type_44 id2Name;
};

struct zAssetPickupTable
{
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct RpTriangle
{
	type_114 vertIndex;
	s16 matIndex;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_108 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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
	type_121 pad;
	void* moprops;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	_class_3 anim_coll;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RpSector
{
	s32 type;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
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

struct xEntBoulder
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_117 destroyNotify;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_11 Callback;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_103 texCoords;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_72 pad;
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
	type_123 frustplane;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_116 NumAnims;
	void** RawData;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	type_24 renderCallBack;
	RxPipeline* pipeline;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	f32 arot;
	f32 brot;
	f32 ss;
	f32 sr;
	s32 state;
	f32 tsfd;
	f32 trfd;
	f32 tsbd;
	f32 trbd;
	f32* rotptr;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	type_64 BubbleWandTag;
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
	type_89 HangPawTag;
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
	type_21 Inv_PatsSock;
	type_23 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_32 Inv_LevelPickups;
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
	type_56 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_70 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_88 sb_model_indices;
	type_97 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	u32* TimeChunkOffs;
	u32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	u32 Waiting;
	u32 BadReadPause;
	f32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	f32 Time;
	f32 CamTime;
	u32 PlayIndex;
	u32 Ready;
	s32 DataLoading;
	u32 GotData;
	u32 ShutDownWait;
	f32 PlaybackSpeed;
	u32 Opened;
	tag_xFile File;
	s32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	u32 SndStarted;
	u32 SndNumChannel;
	type_85 SndChannelReq;
	type_92 SndAssetID;
	type_100 SndHandle;
	XCSNNosey* cb_nosey;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
};

struct xEntMotionSplineData
{
	s32 unknown;
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
	type_49 activateCB;
	type_49 deactivateCB;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_39 Conditional;
	type_39 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xCutsceneInfo
{
	u32 Magic;
	u32 AssetID;
	u32 NumData;
	u32 NumTime;
	u32 MaxModel;
	u32 MaxBufEven;
	u32 MaxBufOdd;
	u32 HeaderSize;
	u32 VisCount;
	u32 VisSize;
	u32 BreakCount;
	u32 pad;
	type_26 SoundLeft;
	type_30 SoundRight;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_48 wt;
};

struct xCutsceneData
{
	u32 DataType;
	u32 AssetID;
	u32 ChunkSize;
	union
	{
		u32 FileOffset;
		void* DataPtr;
	};
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xShadowSimplePoly
{
	type_40 vert;
	xVec3 norm;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_59 MoveSpeed;
	type_61 AnimSneak;
	type_63 AnimWalk;
	type_65 AnimRun;
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
	type_106 talk_filter;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_102 beginUpdate;
	type_0 endUpdate;
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
	type_25 frustumPlanes;
	RwBBox frustumBoundBox;
	type_33 frustumCorners;
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
	type_29 lastRefs;
	type_34 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _class_1
{
	union
	{
		u8 invisible;
		u8 ethereal;
		u8 merge;
		u8 word_break;
		u8 word_end;
		u8 line_break;
		u8 stop;
		u8 tab;
	};
	union
	{
		u8 insert;
		u8 dynamic;
		u8 page_break;
		u8 stateful;
	};
	u16 dummy;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_110 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct rxReq
{
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	f32 et;
	f32 wet;
	f32 rt;
	f32 wrt;
	f32 p;
	f32 brt;
	f32 ert;
	s32 state;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_118 Files;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_119 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_54 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	s32 id;
	_tagTRCState state;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct _class_3
{
	xVec3* verts;
};

enum pause_ability
{
	PA_NONE,
	PA_MENU,
	PA_STALL
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
	type_71 corner;
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
	type_99 colls;
	type_55 post;
	type_66 depenq;
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

struct xVec2
{
	f32 x;
	f32 y;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct tag_iFile
{
	u32 flags;
	type_62 path;
	s32 fd;
	s32 offset;
	s32 length;
};

struct xEntMotionMechData
{
	u8 type;
	u8 flags;
	u8 sld_axis;
	u8 rot_axis;
	f32 sld_dist;
	f32 sld_tm;
	f32 sld_acc_tm;
	f32 sld_dec_tm;
	f32 rot_dist;
	f32 rot_tm;
	f32 rot_acc_tm;
	f32 rot_dec_tm;
	f32 ret_delay;
	f32 post_ret_delay;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xCutsceneZbuffer
{
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
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

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct jot
{
	substr s;
	_class_1 flag;
	u16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct RpPolygon
{
	u16 matIndex;
	type_69 vertIndex;
};

struct xFFX
{
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	f32 a;
	f32 b;
	f32 p;
	f32 w;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct zEntHangable
{
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_83 pad;
	f32 delay;
	xSpline3* spl;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_81 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_98 sceneStart;
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

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_73 tmrs;
	type_76 ttms;
	type_77 atms;
	type_82 dtms;
	type_87 vms;
	type_93 dss;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xEntMotion
{
	xEntMotionAsset* asset;
	u8 type;
	u8 pad;
	u16 flags;
	f32 t;
	f32 tmr;
	f32 d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_1 radius;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xPlatformAsset
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xCutsceneZbufferHack
{
	s8* name;
	type_78 times;
};

struct xEntMotionAsset
{
	u8 type;
	u8 use_banking;
	u16 flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_90 callback;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct anim_coll_data
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
	type_16 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	u32 flags;
	f32 line_space;
	f32 tab_stop;
	f32 left_indent;
	f32 right_indent;
	callback* cb;
	void* context;
	s8** texts;
	u32* text_sizes;
	u32 texts_size;
	substr text;
	u32 text_hash;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct callback
{
	type_80 render;
	type_95 layout_update;
	type_95 render_update;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_101 BilinearLerp;
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

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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

struct tag_type
{
	substr name;
	type_109 parse_tag;
	type_109 reset_tag;
	void* context;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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

struct xEntSplineData
{
	s32 unknown;
};

enum eGameWhereAmI
{
	eGameWhere_NA,
	eGameWhere_InitStart,
	eGameWhere_InitScene,
	eGameWhere_InitCamera,
	eGameWhere_InitMusic,
	eGameWhere_InitOther,
	eGameWhere_InitEnd,
	eGameWhere_ExitStart,
	eGameWhere_ExitRumble,
	eGameWhere_ExitHUD,
	eGameWhere_ExitSound,
	eGameWhere_ExitCamera,
	eGameWhere_ExitScene,
	eGameWhere_ExitEnd,
	eGameWhere_SetupScene,
	eGameWhere_SetupZFX,
	eGameWhere_SetupPlayer,
	eGameWhere_SetupCamera,
	eGameWhere_SetupScrFX,
	eGameWhere_SetupSceneLoad,
	eGameWhere_SetupMusicNotify,
	eGameWhere_SetupHudSetup,
	eGameWhere_SetupSkydome,
	eGameWhere_SetupSceneEvents,
	eGameWhere_SetupUpdateCull,
	eGameWhere_SetupLOD,
	eGameWhere_SetupExtras,
	eGameWhere_SetupEnd,
	eGameWhere_LoopStart,
	eGameWhere_CutsceneFinish,
	eGameWhere_LoopDo,
	eGameWhere_LoopCalcTime,
	eGameWhere_LoopPadUpdate,
	eGameWhere_LoopTRCCheck,
	eGameWhere_LoopCheats,
	eGameWhere_LoopSceneUpdate,
	eGameWhere_LoopPlayerUpdate,
	eGameWhere_LoopSoundUpdate,
	eGameWhere_LoopSFXWidgets,
	eGameWhere_LoopHUDUpdate,
	eGameWhere_LoopCameraUpdate,
	eGameWhere_LoopCameraFXUpdate,
	eGameWhere_LoopFlyToInterface,
	eGameWhere_LoopCameraBegin,
	eGameWhere_LoopSceneRender,
	eGameWhere_LoopCameraEnd,
	eGameWhere_LoopCameraShowRaster,
	eGameWhere_LoopCameraFXEnd,
	eGameWhere_LoopMusicUpdate,
	eGameWhere_LoopUpdateMode,
	eGameWhere_LoopContinue,
	eGameWhere_LoopEndGameLoop,
	eGameWhere_SaveLoop,
	eGameWhere_ModeSceneSwitch,
	eGameWhere_ModeCutsceneFinish,
	eGameWhere_ModeGameExit,
	eGameWhere_ModeGameInit,
	eGameWhere_ModeGameSetup,
	eGameWhere_ModeSwitchAutoSave,
	eGameWhere_ModeSwitchCutsceneFinish,
	eGameWhere_ModeStoreCheckpoint,
	eGameWhere_LoseChanceReset,
	eGameWhere_LoseChanceResetDone,
	eGameWhere_TransitionBubbles,
	eGameWhere_TransitionBegin,
	eGameWhere_TransitionSnapShot,
	eGameWhere_TransitionUpdate,
	eGameWhere_TransitionPadUpdate,
	eGameWhere_TransitionTRCCheck,
	eGameWhere_TransitionCameraClear,
	eGameWhere_TransitionCameraBegin,
	eGameWhere_TransitionRenderBackground,
	eGameWhere_TransitionSpawnBubbles,
	eGameWhere_TransitionDrawEnd,
	eGameWhere_TransitionUpdateBubbles,
	eGameWhere_TransitionCameraEnd,
	eGameWhere_TransitionCameraShowRaster,
	eGameWhere_TransitionUpdateEnd,
	eGameWhere_TransitionUIRender,
	eGameWhere_TransitionUIRenderEnd,
	eGameWhere_TransitionEnd,
	eGameWhere_TransitionEnded,
	eGameWhere_SetupPlayerInit,
	eGameWhere_SetupPlayerCamera,
	eGameWhere_SetupPlayerEnd
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_22 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_107 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct xfont
{
	u32 id;
	f32 width;
	f32 height;
	f32 space;
	iColor_tag color;
	basic_rect clip;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
};

struct xCoef
{
	type_105 a;
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
	type_8 baseCount;
	type_13 baseList;
	_zEnv* zen;
};

struct RxNodeMethods
{
	type_31 nodeBody;
	type_35 nodeInit;
	type_36 nodeTerm;
	type_37 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_27 configMsgHandler;
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

struct tag_xFile
{
	type_74 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
	type_10 startTime;
	type_14 endTime;
	type_18 emitID;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	u16 state;
	u16 plat_flags;
	f32 tmr;
	s32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	s32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	f32 pauseMult;
	f32 pauseDelta;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	f32 camVertex_z;
	f32 u;
	f32 v;
	f32 recipZ;
	f32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	f32 pad2;
};

struct xEntMPData
{
	f32 curdist;
	f32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	f32 dist;
	u32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_3 light;
	type_9 light_frame;
	s32 memlvl;
};

struct substr
{
	s8* text;
	u32 size;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	f32 ext_tm;
	f32 ext_wait_tm;
	f32 ret_tm;
	f32 ret_wait_tm;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_125 clusters;
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
	type_51 PowerUp;
	type_58 InitialPowerUp;
};

struct _tagiPad
{
	s32 port;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_5 tranTable;
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

struct RwLinkList
{
	RwLLLink link;
};

enum en_SOAK_DIR
{
	SOAK_FOR,
	SOAK_BACK,
	SOAK_RAND,
	SOAK_NOMORE,
	SOAK_FORCE = 0x7fffffff
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_7 qWords;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_42 buffer;
type_53 buffer;
u32 gGameSfxReport;
_CurrentPlayer gPendingPlayer;
u32 sPlayerMarkerStartID;
u32 sPlayerMarkerStartCamID;
f32 sPlayerStartAngle;
s32 sPortalling;
f32 sGameOverTimer;
f32 sTimeElapsed;
s32 sTimeLast;
s32 sTimeCurrent;
u32 gLevelChanged;
s32 g_hiphopReloadHIP;
s32 g_hiphopForcePortal;
s32 g_hiphopResetOnly;
s32 g_hiphopEnabled;
u32 startPressed;
iColor_tag sFadeColor;
iColor_tag black;
iColor_tag clear;
u32 gSoak;
type_86 soaklevels_gameorder;
type_122 soaklevels_alphaorder;
s8** soaklevels;
f32 soaktime;
xPortalAsset dummyPortalAsset;
_zPortal dummyPortal;
u32 loadMeter;
u32 loadCDMeter;
s32 t0;
s32 t1;
s32 w0;
s32 w1;
s32 gloop_time;
s32 gwait_time;
s32 gloop_ct;
f32 gloop_time_secs;
f32 gwait_time_secs;
f32 gloop_net_time_secs;
f32 snd_radius;
u32 gLastProfileDump;
RwCamera* sGameScreenTransCam;
RpWorld* World;
RpLight* DirectionalLight;
u32 bgID;
f32 bgu1;
f32 bgv1;
f32 bgu2;
f32 bgv2;
u8 bgr;
u8 bgg;
u8 bgb;
u8 bga;
eGameWhereAmI gGameWhereAmI;
type_45 gGameWhereAmI_str;
zGlobals globals;
_CurrentPlayer gCurrentPlayer;
s32 gWaitingToAutoSave;
eGameMode gGameMode;
type_75 gTrcPad;
s32 gGameState;
callback text_cb;
type_91 ourGlobals;
u32 gBusStopIsRunning;
u32 gFrameCount;
_zEnv* gCurEnv;

void zGameSetupPlayer();
void zGameScreenTransitionEnd();
void zGameScreenTransitionUpdate(f32 percentComplete, s8* msg, u8* rgba);
void zGameScreenTransitionUpdate(f32 percentComplete, s8* msg);
void zGameScreenTransitionBegin();
void zGameUpdateMode();
void zGame_HackPostPortalAutoSaveDraw();
void zGame_HackDrawCard(f32 x, f32 y, f32 w, f32 h, RwRaster* rast);
void zGameStall();
void zGamePauseIfPossible();
s32 zGameIsPaused();
void zGameLoop();
void zGameSetup();
void zGameExit();
void zGameInit(u32 theSceneID);
u32 PickNextSoak();

// zGameSetupPlayer__Fv
// Start address: 0x17a4a0
void zGameSetupPlayer()
{
	xEntAsset* asset;
	s32 playerCount;
	u32 size;
	xMarkerAsset* m;
}

// zGameScreenTransitionEnd__Fv
// Start address: 0x17a630
void zGameScreenTransitionEnd()
{
	RwFrame* frame;
}

// zGameScreenTransitionUpdate__FfPcPUc
// Start address: 0x17a6d0
void zGameScreenTransitionUpdate(f32 percentComplete, s8* msg, u8* rgba)
{
	RwRGBA back_col;
	RwTexture* tex;
	RwRaster* ras;
	f32 recipCamZ;
	type_124 vx;
	f32 z;
	type_111 meter;
}

// zGameScreenTransitionUpdate__FfPc
// Start address: 0x17ade0
void zGameScreenTransitionUpdate(f32 percentComplete, s8* msg)
{
}

// zGameScreenTransitionBegin__Fv
// Start address: 0x17ae30
void zGameScreenTransitionBegin()
{
	RwFrame* frame;
	RwRGBAReal col;
	RwBBox box;
}

// zGameUpdateMode__Fv
// Start address: 0x17af10
void zGameUpdateMode()
{
	xPortalAsset* passet;
	s8* id;
	u32 nextSceneID;
	s32 result;
	xBase* sendTo;
	u32 size;
	xMarkerAsset* m;
	xCamera* cam;
}

// zGame_HackPostPortalAutoSaveDraw__Fv
// Start address: 0x17b720
void zGame_HackPostPortalAutoSaveDraw()
{
	RwCamera* cam;
	RwCamera* ccam;
	RwRGBA bg;
	type_67 str;
	xtextbox tb;
	f32 yextent;
	u32 i;
	RwTexture* tex;
	RwRaster* rast;
}

// zGame_HackDrawCard__FffffP8RwRaster
// Start address: 0x17bce0
void zGame_HackDrawCard(f32 x, f32 y, f32 w, f32 h, RwRaster* rast)
{
	type_104 quad;
	f32 screenZ;
}

// zGameStall__Fv
// Start address: 0x17be40
void zGameStall()
{
}

// zGamePauseIfPossible__Fv
// Start address: 0x17bee0
void zGamePauseIfPossible()
{
}

// zGameIsPaused__Fv
// Start address: 0x17c240
s32 zGameIsPaused()
{
}

// zGameLoop__Fv
// Start address: 0x17c280
void zGameLoop()
{
	s32 ostrich_delay;
	s32 cheats;
	xMat4x3 playerMat;
}

// zGameSetup__Fv
// Start address: 0x17c930
void zGameSetup()
{
	RpWorld* world;
}

// zGameExit__Fv
// Start address: 0x17caa0
void zGameExit()
{
}

// zGameInit__FUi
// Start address: 0x17cb50
void zGameInit(u32 theSceneID)
{
}

// PickNextSoak__Fv
// Start address: 0x17cc40
u32 PickNextSoak()
{
	u32 nextsoak;
	s8* name;
	u32 tag;
	type_12 useme;
	u32 sumtotal;
	s32 soakcnt;
	en_SOAK_DIR soakdir;
	s32 soakidx;
	s32 justwrap;
}

