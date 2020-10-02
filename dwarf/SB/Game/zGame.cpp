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
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_17)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_24)(RpWorldSector*);
typedef uint32(*type_27)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_31)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_35)(RxNodeDefinition*);
typedef void(*type_36)(RxNodeDefinition*);
typedef int32(*type_37)(RxPipelineNode*);
typedef uint32(*type_39)(xAnimTransition*, xAnimSingle*, void*);
typedef xBase*(*type_41)(uint32);
typedef int8*(*type_43)(xBase*);
typedef int8*(*type_44)(uint32);
typedef void(*type_46)(xEnt*, xScene*, float32);
typedef int32(*type_47)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_49)(void*);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_52)(xEnt*, xVec3*);
typedef void(*type_55)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_57)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_60)(xEnt*);
typedef uint32(*type_66)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_68)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_80)(jot&, xtextbox&, float32, float32);
typedef RpClump*(*type_90)(RpClump*, void*);
typedef void(*type_95)(jot&, xtextbox&, xtextbox&);
typedef RwCamera*(*type_102)(RwCamera*);
typedef void(*type_108)(xMemPool*, void*);
typedef void(*type_109)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef uint32(*type_110)(void*, void*);
typedef void(*type_117)(RwResEntry*);
typedef RpAtomic*(*type_119)(RpAtomic*);

typedef float32 type_1[2];
typedef RpLight* type_3[2];
typedef xVec3 type_5[60];
typedef <unknown type (0xa510)> type_7[4];
typedef uint32 type_8[72];
typedef RwFrame* type_9[2];
typedef float32 type_10[15];
typedef int8 type_12[5];
typedef xBase* type_13[72];
typedef float32 type_14[15];
typedef float32 type_15[22];
typedef RwTexCoords* type_16[8];
typedef uint32 type_18[15];
typedef float32 type_20[22];
typedef uint32 type_21[15];
typedef uint8 type_22[3];
typedef uint32 type_23[15];
typedef RwFrustumPlane type_25[6];
typedef int8 type_26[16];
typedef float32 type_28[4];
typedef xVec3 type_29[5];
typedef int8 type_30[16];
typedef uint32 type_32[15];
typedef RwV3d type_33[8];
typedef uint8 type_34[5];
typedef analog_data type_38[2];
typedef xVec3 type_40[3];
typedef int8 type_42[16];
typedef int8* type_45[85];
typedef float32 type_48[4];
typedef uint8 type_51[2];
typedef int8 type_53[16];
typedef float32 type_54[16];
typedef uint32 type_56[2];
typedef uint8 type_58[2];
typedef float32 type_59[6];
typedef float32 type_61[3];
typedef int8 type_62[128];
typedef float32 type_63[3];
typedef xModelTag type_64[2];
typedef float32 type_65[3];
typedef int8 type_67[2048];
typedef uint16 type_69[3];
typedef xEnt* type_70[111];
typedef xVec3 type_71[4];
typedef uint32 type_72[4];
typedef float32 type_73[12];
typedef int8 type_74[32];
typedef _tagTRCPadInfo type_75[4];
typedef float32 type_76[12];
typedef float32 type_77[12];
typedef xCutsceneZbuffer type_78[4];
typedef int8 type_79[128];
typedef type_79 type_81[6];
typedef float32 type_82[12];
typedef uint8 type_83[2];
typedef RwSky2DVertex type_84[4];
typedef uint32 type_85[2];
typedef int8* type_86[57];
typedef float32 type_87[12];
typedef uint8 type_88[14];
typedef xModelTag type_89[4];
typedef uint32 type_91[4096];
typedef uint32 type_92[2];
typedef float32 type_93[12];
typedef int8 type_94[4];
typedef uint16 type_96[6];
typedef xModelInstance* type_97[14];
typedef int8 type_98[32];
typedef xCollis type_99[18];
typedef uint32 type_100[2];
typedef float32 type_101[2];
typedef RwTexCoords* type_103[8];
typedef RwSky2DVertex type_104[4];
typedef float32 type_105[4];
typedef uint8 type_106[4];
typedef uint8 type_107[2];
typedef int8 type_111[256];
typedef int8 type_112[32];
typedef int8 type_113[32];
typedef uint16 type_114[3];
typedef uint8 type_115[22];
typedef uint8 type_116[2];
typedef xAnimMultiFileEntry type_118[1];
typedef uint8 type_120[22];
typedef uint8 type_121[3];
typedef int8* type_122[50];
typedef xVec4 type_123[12];
typedef RwSky2DVertex type_124[4];
typedef RxCluster type_125[1];

struct xJSPHeader
{
	type_94 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_4 BeforeEnter;
	type_50 StateCallback;
	type_17 BeforeAnimMatrices;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
		_class_0 tuv;
		tri_data_0 tri;
	};
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct rxHeapFreeBlock
{
	uint32 size;
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
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_28 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xMarkerAsset
{
	xVec3 pos;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_112 name;
	type_113 mask;
	uint32 filterAddressing;
	int32 refCount;
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
	uint16 gx;
	uint16 gz;
	uint8 ingrid;
	uint8 oversize;
	uint8 deleted;
	uint8 gpad;
	xGridBound** head;
	xGridBound* next;
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

struct _tagxPad
{
	type_115 value;
	type_120 last_value;
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
	type_15 up_tmr;
	type_20 down_tmr;
	type_38 analog;
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
	type_41 resolvID;
	type_43 base2Name;
	type_44 id2Name;
};

struct zAssetPickupTable
{
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RpTriangle
{
	type_114 vertIndex;
	int16 matIndex;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_108 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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
	float32 s;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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
	type_121 pad;
	void* moprops;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	_class_3 anim_coll;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RpSector
{
	int32 type;
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
	float32 t;
	float32 u;
	float32 v;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xEntBoulder
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_117 destroyNotify;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_11 Callback;
};

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
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
	type_123 frustplane;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
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
	uint32 mode;
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
	type_116 NumAnims;
	void** RawData;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	type_24 renderCallBack;
	RxPipeline* pipeline;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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
	type_64 BubbleWandTag;
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
	type_89 HangPawTag;
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
	type_21 Inv_PatsSock;
	type_23 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_32 Inv_LevelPickups;
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
	type_56 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_70 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_88 sb_model_indices;
	type_97 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	uint32* TimeChunkOffs;
	uint32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	uint32 Waiting;
	uint32 BadReadPause;
	float32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float32 Time;
	float32 CamTime;
	uint32 PlayIndex;
	uint32 Ready;
	int32 DataLoading;
	uint32 GotData;
	uint32 ShutDownWait;
	float32 PlaybackSpeed;
	uint32 Opened;
	tag_xFile File;
	int32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	uint32 SndStarted;
	uint32 SndNumChannel;
	type_85 SndChannelReq;
	type_92 SndAssetID;
	type_100 SndHandle;
	XCSNNosey* cb_nosey;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct xEntMotionSplineData
{
	int32 unknown;
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
	type_49 activateCB;
	type_49 deactivateCB;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_39 Conditional;
	type_39 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xCutsceneInfo
{
	uint32 Magic;
	uint32 AssetID;
	uint32 NumData;
	uint32 NumTime;
	uint32 MaxModel;
	uint32 MaxBufEven;
	uint32 MaxBufOdd;
	uint32 HeaderSize;
	uint32 VisCount;
	uint32 VisSize;
	uint32 BreakCount;
	uint32 pad;
	type_26 SoundLeft;
	type_30 SoundRight;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_48 wt;
};

struct xCutsceneData
{
	uint32 DataType;
	uint32 AssetID;
	uint32 ChunkSize;
	union
	{
		uint32 FileOffset;
		void* DataPtr;
	};
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	type_106 talk_filter;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_25 frustumPlanes;
	RwBBox frustumBoundBox;
	type_33 frustumCorners;
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
		uint8 invisible;
		uint8 ethereal;
		uint8 merge;
		uint8 word_break;
		uint8 word_end;
		uint8 line_break;
		uint8 stop;
		uint8 tab;
	};
	union
	{
		uint8 insert;
		uint8 dynamic;
		uint8 page_break;
		uint8 stateful;
	};
	uint16 dummy;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
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

struct rxReq
{
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_54 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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
	type_71 corner;
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
	float32 x;
	float32 y;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct tag_iFile
{
	uint32 flags;
	type_62 path;
	int32 fd;
	int32 offset;
	int32 length;
};

struct xEntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
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
	float32 w;
	xMat4x3 omat;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
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
	float32 r;
	float32 h;
};

struct jot
{
	substr s;
	_class_1 flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct RpPolygon
{
	uint16 matIndex;
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
	int32 numMaterials;
	int32 space;
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
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct zEntHangable
{
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_83 pad;
	float32 delay;
	xSpline3* spl;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_81 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_98 sceneStart;
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

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct zPlatFMRunTime
{
	uint32 flags;
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
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xEntMotion
{
	xEntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
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
	float32 dst_cast;
	type_1 radius;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xPlatformAsset
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xCutsceneZbufferHack
{
	int8* name;
	type_78 times;
};

struct xEntMotionAsset
{
	uint8 type;
	uint8 use_banking;
	uint16 flags;
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
	type_16 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	uint32 flags;
	float32 line_space;
	float32 tab_stop;
	float32 left_indent;
	float32 right_indent;
	callback* cb;
	void* context;
	int8** texts;
	uint32* text_sizes;
	uint32 texts_size;
	substr text;
	uint32 text_hash;
};

struct RxOutputSpec
{
	int8* name;
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
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_101 BilinearLerp;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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
	uint32 reserved;
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

struct xEntSplineData
{
	int32 unknown;
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
	uint8 type;
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
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_107 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	iColor_tag color;
	basic_rect clip;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
};

struct xCoef
{
	type_105 a;
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

struct tag_xFile
{
	type_74 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
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
	uint16 state;
	uint16 plat_flags;
	float32 tmr;
	int32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float32 pauseMult;
	float32 pauseDelta;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct xEntMPData
{
	float32 curdist;
	float32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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
	int32 memlvl;
};

struct substr
{
	int8* text;
	uint32 size;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_125 clusters;
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
	type_51 PowerUp;
	type_58 InitialPowerUp;
};

struct _tagiPad
{
	int32 port;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_5 tranTable;
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
uint32 gGameSfxReport;
_CurrentPlayer gPendingPlayer;
uint32 sPlayerMarkerStartID;
uint32 sPlayerMarkerStartCamID;
float32 sPlayerStartAngle;
int32 sPortalling;
float32 sGameOverTimer;
float32 sTimeElapsed;
long32 sTimeLast;
long32 sTimeCurrent;
uint32 gLevelChanged;
int32 g_hiphopReloadHIP;
int32 g_hiphopForcePortal;
int32 g_hiphopResetOnly;
int32 g_hiphopEnabled;
uint32 startPressed;
iColor_tag sFadeColor;
iColor_tag black;
iColor_tag clear;
uint32 gSoak;
type_86 soaklevels_gameorder;
type_122 soaklevels_alphaorder;
int8** soaklevels;
float32 soaktime;
xPortalAsset dummyPortalAsset;
_zPortal dummyPortal;
uint32 loadMeter;
uint32 loadCDMeter;
long32 t0;
long32 t1;
long32 w0;
long32 w1;
long32 gloop_time;
long32 gwait_time;
int32 gloop_ct;
float32 gloop_time_secs;
float32 gwait_time_secs;
float32 gloop_net_time_secs;
float32 snd_radius;
uint32 gLastProfileDump;
RwCamera* sGameScreenTransCam;
RpWorld* World;
RpLight* DirectionalLight;
uint32 bgID;
float32 bgu1;
float32 bgv1;
float32 bgu2;
float32 bgv2;
uint8 bgr;
uint8 bgg;
uint8 bgb;
uint8 bga;
eGameWhereAmI gGameWhereAmI;
type_45 gGameWhereAmI_str;
zGlobals globals;
_CurrentPlayer gCurrentPlayer;
int32 gWaitingToAutoSave;
eGameMode gGameMode;
type_75 gTrcPad;
int32 gGameState;
callback text_cb;
type_91 ourGlobals;
uint32 gBusStopIsRunning;
uint32 gFrameCount;
_zEnv* gCurEnv;

void zGameSetupPlayer();
void zGameScreenTransitionEnd();
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg, uint8* rgba);
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg);
void zGameScreenTransitionBegin();
void zGameUpdateMode();
void zGame_HackPostPortalAutoSaveDraw();
void zGame_HackDrawCard(float32 x, float32 y, float32 w, float32 h, RwRaster* rast);
void zGameStall();
void zGamePauseIfPossible();
int32 zGameIsPaused();
void zGameLoop();
void zGameSetup();
void zGameExit();
void zGameInit(uint32 theSceneID);
uint32 PickNextSoak();

// zGameSetupPlayer__Fv
// Start address: 0x17a4a0
void zGameSetupPlayer()
{
	xEntAsset* asset;
	int32 playerCount;
	uint32 size;
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
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg, uint8* rgba)
{
	RwRGBA back_col;
	RwTexture* tex;
	RwRaster* ras;
	float32 recipCamZ;
	type_124 vx;
	float32 z;
	type_111 meter;
}

// zGameScreenTransitionUpdate__FfPc
// Start address: 0x17ade0
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg)
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
	int8* id;
	uint32 nextSceneID;
	int32 result;
	xBase* sendTo;
	uint32 size;
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
	float32 yextent;
	uint32 i;
	RwTexture* tex;
	RwRaster* rast;
}

// zGame_HackDrawCard__FffffP8RwRaster
// Start address: 0x17bce0
void zGame_HackDrawCard(float32 x, float32 y, float32 w, float32 h, RwRaster* rast)
{
	type_104 quad;
	float32 screenZ;
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
int32 zGameIsPaused()
{
}

// zGameLoop__Fv
// Start address: 0x17c280
void zGameLoop()
{
	int32 ostrich_delay;
	int32 cheats;
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
void zGameInit(uint32 theSceneID)
{
}

// PickNextSoak__Fv
// Start address: 0x17cc40
uint32 PickNextSoak()
{
	uint32 nextsoak;
	int8* name;
	uint32 tag;
	type_12 useme;
	uint32 sumtotal;
	int32 soakcnt;
	en_SOAK_DIR soakdir;
	int32 soakidx;
	int32 justwrap;
}

