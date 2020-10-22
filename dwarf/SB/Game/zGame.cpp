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
typedef struct _class_2;
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
typedef struct RwSky2DVertexAlignmentOverlay;

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
typedef <unknown fundamental type (0xa510)> type_7[4];
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
typedef int8 type_81[128][6];
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
	int8 idtag[4];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	float32 param[4];
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
	int8 name[32];
	int8 mask[32];
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
	uint8 value[22];
	uint8 last_value[22];
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
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
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
	uint16 vertIndex[3];
	int16 matIndex;
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
	uint8 pad[3];
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
	void(*destroyNotify)(RwResEntry*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint32 pad[4];
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
	xVec4 frustplane[12];
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
	uint8 NumAnims[2];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	xModelTag BubbleWandTag[2];
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
	xModelTag HangPawTag[4];
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
	uint32 Inv_PatsSock[15];
	uint32 Inv_PatsSock_Max[15];
	uint32 Inv_PatsSock_CurrentLevel;
	uint32 Inv_LevelPickups[15];
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
	uint32 TongueFlags[2];
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	xEnt* SlideTrackEnt[111];
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	uint8 sb_model_indices[14];
	xModelInstance* sb_models[14];
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
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	int8 SoundLeft[16];
	int8 SoundRight[16];
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
	float32 wt[4];
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
	xVec3 vert[3];
	xVec3 norm;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	float32 MoveSpeed[6];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 AnimRun[3];
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
	uint8 talk_filter[4];
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
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _class_1
{
	struct
	{
		uint8 invisible : 1;
		uint8 ethereal : 1;
		uint8 merge : 1;
		uint8 word_break : 1;
		uint8 word_end : 1;
		uint8 line_break : 1;
		uint8 stop : 1;
		uint8 tab : 1;
	};
	struct
	{
		uint8 insert : 1;
		uint8 dynamic : 1;
		uint8 page_break : 1;
		uint8 stateful : 1;
	};
	uint16 dummy : 4;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
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
	xAnimMultiFileEntry Files[1];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	float32 matrix[16];
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	xVec3 corner[4];
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
	int8 path[128];
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
	uint16 vertIndex[3];
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
	uint8 pad[2];
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
	int8 profFunc[128][6];
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	int8 sceneStart[32];
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
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
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
	float32 radius[2];
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
	xCutsceneZbuffer times[4];
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
	RpClump*(*callback)(RpClump*, void*);
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
	RwTexCoords* texCoords[8];
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
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
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
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
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
	uint8 pad[3];
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
	uint8 pad[2];
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
	float32 a[4];
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
	uint32 baseCount[72];
	xBase* baseList[72];
	_zEnv* zen;
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
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	RxCluster clusters[1];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	xVec3 tranTable[60];
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

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
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
int8* soaklevels_gameorder[57];
int8* soaklevels_alphaorder[50];
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
int8* gGameWhereAmI_str[85];
zGlobals globals;
_CurrentPlayer gCurrentPlayer;
int32 gWaitingToAutoSave;
eGameMode gGameMode;
_tagTRCPadInfo gTrcPad[4];
int32 gGameState;
callback text_cb;
uint32 ourGlobals[4096];
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
	// Line 3066, Address: 0x17a4a0, Func Offset: 0
	// Line 3075, Address: 0x17a4a4, Func Offset: 0x4
	// Line 3066, Address: 0x17a4a8, Func Offset: 0x8
	// Line 3075, Address: 0x17a4ac, Func Offset: 0xc
	// Line 3080, Address: 0x17a4b4, Func Offset: 0x14
	// Line 3083, Address: 0x17a4c8, Func Offset: 0x28
	// Line 3084, Address: 0x17a4d0, Func Offset: 0x30
	// Line 3086, Address: 0x17a4e0, Func Offset: 0x40
	// Line 3087, Address: 0x17a4fc, Func Offset: 0x5c
	// Line 3088, Address: 0x17a520, Func Offset: 0x80
	// Line 3089, Address: 0x17a524, Func Offset: 0x84
	// Line 3090, Address: 0x17a528, Func Offset: 0x88
	// Line 3091, Address: 0x17a52c, Func Offset: 0x8c
	// Line 3103, Address: 0x17a530, Func Offset: 0x90
	// Line 3093, Address: 0x17a534, Func Offset: 0x94
	// Line 3103, Address: 0x17a538, Func Offset: 0x98
	// Line 3107, Address: 0x17a54c, Func Offset: 0xac
	// Line 3110, Address: 0x17a554, Func Offset: 0xb4
	// Line 3111, Address: 0x17a55c, Func Offset: 0xbc
	// Line 3118, Address: 0x17a564, Func Offset: 0xc4
	// Line 3114, Address: 0x17a568, Func Offset: 0xc8
	// Line 3115, Address: 0x17a574, Func Offset: 0xd4
	// Line 3114, Address: 0x17a578, Func Offset: 0xd8
	// Line 3115, Address: 0x17a588, Func Offset: 0xe8
	// Line 3116, Address: 0x17a594, Func Offset: 0xf4
	// Line 3115, Address: 0x17a598, Func Offset: 0xf8
	// Line 3116, Address: 0x17a5a8, Func Offset: 0x108
	// Line 3118, Address: 0x17a5b4, Func Offset: 0x114
	// Line 3116, Address: 0x17a5b8, Func Offset: 0x118
	// Line 3118, Address: 0x17a5cc, Func Offset: 0x12c
	// Line 3119, Address: 0x17a5dc, Func Offset: 0x13c
	// Line 3120, Address: 0x17a5e0, Func Offset: 0x140
	// Line 3121, Address: 0x17a5e4, Func Offset: 0x144
	// Line 3123, Address: 0x17a5e8, Func Offset: 0x148
	// Line 3126, Address: 0x17a5ec, Func Offset: 0x14c
	// Line 3123, Address: 0x17a5f0, Func Offset: 0x150
	// Line 3126, Address: 0x17a5f4, Func Offset: 0x154
	// Line 3129, Address: 0x17a604, Func Offset: 0x164
	// Line 3133, Address: 0x17a618, Func Offset: 0x178
	// Line 3134, Address: 0x17a620, Func Offset: 0x180
	// Func End, Address: 0x17a62c, Func Offset: 0x18c
}

// zGameScreenTransitionEnd__Fv
// Start address: 0x17a630
void zGameScreenTransitionEnd()
{
	RwFrame* frame;
	// Line 3003, Address: 0x17a630, Func Offset: 0
	// Line 3006, Address: 0x17a634, Func Offset: 0x4
	// Line 3003, Address: 0x17a638, Func Offset: 0x8
	// Line 3010, Address: 0x17a63c, Func Offset: 0xc
	// Line 3024, Address: 0x17a648, Func Offset: 0x18
	// Line 3026, Address: 0x17a650, Func Offset: 0x20
	// Line 3027, Address: 0x17a654, Func Offset: 0x24
	// Line 3029, Address: 0x17a65c, Func Offset: 0x2c
	// Line 3030, Address: 0x17a664, Func Offset: 0x34
	// Line 3031, Address: 0x17a668, Func Offset: 0x38
	// Line 3032, Address: 0x17a670, Func Offset: 0x40
	// Line 3033, Address: 0x17a674, Func Offset: 0x44
	// Line 3032, Address: 0x17a678, Func Offset: 0x48
	// Line 3034, Address: 0x17a67c, Func Offset: 0x4c
	// Line 3036, Address: 0x17a688, Func Offset: 0x58
	// Line 3038, Address: 0x17a690, Func Offset: 0x60
	// Line 3039, Address: 0x17a698, Func Offset: 0x68
	// Line 3040, Address: 0x17a6a0, Func Offset: 0x70
	// Line 3041, Address: 0x17a6a4, Func Offset: 0x74
	// Line 3043, Address: 0x17a6a8, Func Offset: 0x78
	// Line 3044, Address: 0x17a6b0, Func Offset: 0x80
	// Line 3045, Address: 0x17a6b4, Func Offset: 0x84
	// Line 3056, Address: 0x17a6b8, Func Offset: 0x88
	// Line 3058, Address: 0x17a6c0, Func Offset: 0x90
	// Func End, Address: 0x17a6cc, Func Offset: 0x9c
}

// zGameScreenTransitionUpdate__FfPcPUc
// Start address: 0x17a6d0
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg, uint8* rgba)
{
	RwRGBA back_col;
	RwTexture* tex;
	RwRaster* ras;
	float32 recipCamZ;
	RwSky2DVertex vx[4];
	float32 z;
	int8 meter[256];
	// Line 2641, Address: 0x17a6d0, Func Offset: 0
	// Line 2642, Address: 0x17a6d4, Func Offset: 0x4
	// Line 2641, Address: 0x17a6d8, Func Offset: 0x8
	// Line 2650, Address: 0x17a6f8, Func Offset: 0x28
	// Line 2654, Address: 0x17a708, Func Offset: 0x38
	// Line 2685, Address: 0x17a710, Func Offset: 0x40
	// Line 2686, Address: 0x17a718, Func Offset: 0x48
	// Line 2687, Address: 0x17a720, Func Offset: 0x50
	// Line 2688, Address: 0x17a728, Func Offset: 0x58
	// Line 2689, Address: 0x17a730, Func Offset: 0x60
	// Line 2695, Address: 0x17a738, Func Offset: 0x68
	// Line 2692, Address: 0x17a744, Func Offset: 0x74
	// Line 2695, Address: 0x17a748, Func Offset: 0x78
	// Line 2698, Address: 0x17a754, Func Offset: 0x84
	// Line 2709, Address: 0x17a75c, Func Offset: 0x8c
	// Line 2704, Address: 0x17a760, Func Offset: 0x90
	// Line 2709, Address: 0x17a764, Func Offset: 0x94
	// Line 2723, Address: 0x17a76c, Func Offset: 0x9c
	// Line 2720, Address: 0x17a770, Func Offset: 0xa0
	// Line 2723, Address: 0x17a774, Func Offset: 0xa4
	// Line 2729, Address: 0x17a77c, Func Offset: 0xac
	// Line 2725, Address: 0x17a780, Func Offset: 0xb0
	// Line 2729, Address: 0x17a788, Func Offset: 0xb8
	// Line 2730, Address: 0x17a790, Func Offset: 0xc0
	// Line 2731, Address: 0x17a798, Func Offset: 0xc8
	// Line 2732, Address: 0x17a79c, Func Offset: 0xcc
	// Line 2733, Address: 0x17a7a4, Func Offset: 0xd4
	// Line 2742, Address: 0x17a7b0, Func Offset: 0xe0
	// Line 2733, Address: 0x17a7b8, Func Offset: 0xe8
	// Line 2742, Address: 0x17a7c8, Func Offset: 0xf8
	// Line 2743, Address: 0x17a7d0, Func Offset: 0x100
	// Line 2744, Address: 0x17a7dc, Func Offset: 0x10c
	// Line 2745, Address: 0x17a7e8, Func Offset: 0x118
	// Line 2746, Address: 0x17a7f4, Func Offset: 0x124
	// Line 2749, Address: 0x17a800, Func Offset: 0x130
	// Line 2753, Address: 0x17a808, Func Offset: 0x138
	// Line 2751, Address: 0x17a810, Func Offset: 0x140
	// Line 2754, Address: 0x17a814, Func Offset: 0x144
	// Line 2755, Address: 0x17a8e0, Func Offset: 0x210
	// Line 2760, Address: 0x17a8e4, Func Offset: 0x214
	// Line 2756, Address: 0x17a8e8, Func Offset: 0x218
	// Line 2760, Address: 0x17a8ec, Func Offset: 0x21c
	// Line 2754, Address: 0x17a8f0, Func Offset: 0x220
	// Line 2759, Address: 0x17a8f4, Func Offset: 0x224
	// Line 2755, Address: 0x17a8f8, Func Offset: 0x228
	// Line 2761, Address: 0x17a8fc, Func Offset: 0x22c
	// Line 2756, Address: 0x17a900, Func Offset: 0x230
	// Line 2762, Address: 0x17a904, Func Offset: 0x234
	// Line 2764, Address: 0x17a9c4, Func Offset: 0x2f4
	// Line 2767, Address: 0x17a9c8, Func Offset: 0x2f8
	// Line 2764, Address: 0x17a9cc, Func Offset: 0x2fc
	// Line 2767, Address: 0x17a9d0, Func Offset: 0x300
	// Line 2762, Address: 0x17a9d4, Func Offset: 0x304
	// Line 2768, Address: 0x17a9d8, Func Offset: 0x308
	// Line 2763, Address: 0x17a9dc, Func Offset: 0x30c
	// Line 2769, Address: 0x17a9e0, Func Offset: 0x310
	// Line 2770, Address: 0x17a9e4, Func Offset: 0x314
	// Line 2775, Address: 0x17aaa8, Func Offset: 0x3d8
	// Line 2771, Address: 0x17aaac, Func Offset: 0x3dc
	// Line 2776, Address: 0x17aab0, Func Offset: 0x3e0
	// Line 2773, Address: 0x17aab4, Func Offset: 0x3e4
	// Line 2775, Address: 0x17aab8, Func Offset: 0x3e8
	// Line 2776, Address: 0x17aabc, Func Offset: 0x3ec
	// Line 2777, Address: 0x17aac0, Func Offset: 0x3f0
	// Line 2771, Address: 0x17aac4, Func Offset: 0x3f4
	// Line 2778, Address: 0x17aac8, Func Offset: 0x3f8
	// Line 2783, Address: 0x17ab88, Func Offset: 0x4b8
	// Line 2778, Address: 0x17ab90, Func Offset: 0x4c0
	// Line 2783, Address: 0x17ab94, Func Offset: 0x4c4
	// Line 2780, Address: 0x17ab98, Func Offset: 0x4c8
	// Line 2781, Address: 0x17ab9c, Func Offset: 0x4cc
	// Line 2783, Address: 0x17aba0, Func Offset: 0x4d0
	// Line 2785, Address: 0x17aba8, Func Offset: 0x4d8
	// Line 2786, Address: 0x17abb4, Func Offset: 0x4e4
	// Line 2787, Address: 0x17abc0, Func Offset: 0x4f0
	// Line 2791, Address: 0x17abcc, Func Offset: 0x4fc
	// Line 2793, Address: 0x17abd0, Func Offset: 0x500
	// Line 2794, Address: 0x17abe8, Func Offset: 0x518
	// Line 2795, Address: 0x17abf0, Func Offset: 0x520
	// Line 2798, Address: 0x17abf8, Func Offset: 0x528
	// Line 2799, Address: 0x17ac28, Func Offset: 0x558
	// Line 2801, Address: 0x17ac94, Func Offset: 0x5c4
	// Line 2802, Address: 0x17ac98, Func Offset: 0x5c8
	// Line 2803, Address: 0x17aca8, Func Offset: 0x5d8
	// Line 2805, Address: 0x17acb0, Func Offset: 0x5e0
	// Line 2806, Address: 0x17acc0, Func Offset: 0x5f0
	// Line 2808, Address: 0x17acc8, Func Offset: 0x5f8
	// Line 2809, Address: 0x17acd8, Func Offset: 0x608
	// Line 2811, Address: 0x17ace0, Func Offset: 0x610
	// Line 2812, Address: 0x17acf0, Func Offset: 0x620
	// Line 2814, Address: 0x17acf8, Func Offset: 0x628
	// Line 2819, Address: 0x17acfc, Func Offset: 0x62c
	// Line 2825, Address: 0x17ad00, Func Offset: 0x630
	// Line 2832, Address: 0x17ad08, Func Offset: 0x638
	// Line 2834, Address: 0x17ad10, Func Offset: 0x640
	// Line 2838, Address: 0x17ad14, Func Offset: 0x644
	// Line 2847, Address: 0x17ad1c, Func Offset: 0x64c
	// Line 2857, Address: 0x17ad28, Func Offset: 0x658
	// Line 2863, Address: 0x17ad88, Func Offset: 0x6b8
	// Line 2860, Address: 0x17ad8c, Func Offset: 0x6bc
	// Line 2863, Address: 0x17ad90, Func Offset: 0x6c0
	// Line 2868, Address: 0x17ad98, Func Offset: 0x6c8
	// Line 2865, Address: 0x17ad9c, Func Offset: 0x6cc
	// Line 2868, Address: 0x17ada4, Func Offset: 0x6d4
	// Line 2872, Address: 0x17adb0, Func Offset: 0x6e0
	// Line 2873, Address: 0x17adb8, Func Offset: 0x6e8
	// Func End, Address: 0x17add4, Func Offset: 0x704
}

// zGameScreenTransitionUpdate__FfPc
// Start address: 0x17ade0
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg)
{
	// Line 2617, Address: 0x17ade0, Func Offset: 0
	// Line 2618, Address: 0x17adf4, Func Offset: 0x14
	// Line 2621, Address: 0x17ae04, Func Offset: 0x24
	// Line 2623, Address: 0x17ae10, Func Offset: 0x30
	// Func End, Address: 0x17ae24, Func Offset: 0x44
}

// zGameScreenTransitionBegin__Fv
// Start address: 0x17ae30
void zGameScreenTransitionBegin()
{
	RwFrame* frame;
	RwRGBAReal col;
	RwBBox box;
	// Line 2550, Address: 0x17ae30, Func Offset: 0
	// Line 2556, Address: 0x17ae34, Func Offset: 0x4
	// Line 2550, Address: 0x17ae38, Func Offset: 0x8
	// Line 2558, Address: 0x17ae3c, Func Offset: 0xc
	// Line 2559, Address: 0x17ae48, Func Offset: 0x18
	// Line 2566, Address: 0x17ae4c, Func Offset: 0x1c
	// Line 2567, Address: 0x17ae64, Func Offset: 0x34
	// Line 2575, Address: 0x17ae70, Func Offset: 0x40
	// Line 2577, Address: 0x17ae80, Func Offset: 0x50
	// Line 2582, Address: 0x17ae88, Func Offset: 0x58
	// Line 2584, Address: 0x17ae8c, Func Offset: 0x5c
	// Line 2582, Address: 0x17ae90, Func Offset: 0x60
	// Line 2584, Address: 0x17ae9c, Func Offset: 0x6c
	// Line 2586, Address: 0x17aea4, Func Offset: 0x74
	// Line 2588, Address: 0x17aeac, Func Offset: 0x7c
	// Line 2592, Address: 0x17aeb8, Func Offset: 0x88
	// Line 2595, Address: 0x17aebc, Func Offset: 0x8c
	// Line 2592, Address: 0x17aec0, Func Offset: 0x90
	// Line 2595, Address: 0x17aec4, Func Offset: 0x94
	// Line 2592, Address: 0x17aec8, Func Offset: 0x98
	// Line 2599, Address: 0x17aecc, Func Offset: 0x9c
	// Line 2593, Address: 0x17aed0, Func Offset: 0xa0
	// Line 2594, Address: 0x17aed4, Func Offset: 0xa4
	// Line 2595, Address: 0x17aed8, Func Offset: 0xa8
	// Line 2596, Address: 0x17aedc, Func Offset: 0xac
	// Line 2599, Address: 0x17aee0, Func Offset: 0xb0
	// Line 2602, Address: 0x17aeec, Func Offset: 0xbc
	// Line 2609, Address: 0x17aef8, Func Offset: 0xc8
	// Line 2614, Address: 0x17af00, Func Offset: 0xd0
	// Func End, Address: 0x17af0c, Func Offset: 0xdc
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
	// Line 2076, Address: 0x17af10, Func Offset: 0
	// Line 2088, Address: 0x17af14, Func Offset: 0x4
	// Line 2076, Address: 0x17af18, Func Offset: 0x8
	// Line 2088, Address: 0x17af20, Func Offset: 0x10
	// Line 2090, Address: 0x17af2c, Func Offset: 0x1c
	// Line 2093, Address: 0x17af38, Func Offset: 0x28
	// Line 2095, Address: 0x17af54, Func Offset: 0x44
	// Line 2096, Address: 0x17af64, Func Offset: 0x54
	// Line 2095, Address: 0x17af6c, Func Offset: 0x5c
	// Line 2096, Address: 0x17af70, Func Offset: 0x60
	// Line 2098, Address: 0x17af7c, Func Offset: 0x6c
	// Line 2102, Address: 0x17af98, Func Offset: 0x88
	// Line 2100, Address: 0x17af9c, Func Offset: 0x8c
	// Line 2102, Address: 0x17afa0, Func Offset: 0x90
	// Line 2103, Address: 0x17afa4, Func Offset: 0x94
	// Line 2100, Address: 0x17afa8, Func Offset: 0x98
	// Line 2103, Address: 0x17afac, Func Offset: 0x9c
	// Line 2104, Address: 0x17afb0, Func Offset: 0xa0
	// Line 2105, Address: 0x17afb4, Func Offset: 0xa4
	// Line 2109, Address: 0x17afc0, Func Offset: 0xb0
	// Line 2105, Address: 0x17afc4, Func Offset: 0xb4
	// Line 2109, Address: 0x17afc8, Func Offset: 0xb8
	// Line 2108, Address: 0x17afcc, Func Offset: 0xbc
	// Line 2109, Address: 0x17afdc, Func Offset: 0xcc
	// Line 2113, Address: 0x17afe4, Func Offset: 0xd4
	// Line 2118, Address: 0x17b014, Func Offset: 0x104
	// Line 2121, Address: 0x17b020, Func Offset: 0x110
	// Line 2126, Address: 0x17b028, Func Offset: 0x118
	// Line 2128, Address: 0x17b040, Func Offset: 0x130
	// Line 2130, Address: 0x17b144, Func Offset: 0x234
	// Line 2131, Address: 0x17b148, Func Offset: 0x238
	// Line 2132, Address: 0x17b150, Func Offset: 0x240
	// Line 2133, Address: 0x17b154, Func Offset: 0x244
	// Line 2134, Address: 0x17b15c, Func Offset: 0x24c
	// Line 2133, Address: 0x17b160, Func Offset: 0x250
	// Line 2135, Address: 0x17b164, Func Offset: 0x254
	// Line 2136, Address: 0x17b2b4, Func Offset: 0x3a4
	// Line 2137, Address: 0x17b2bc, Func Offset: 0x3ac
	// Line 2136, Address: 0x17b2c0, Func Offset: 0x3b0
	// Line 2138, Address: 0x17b2c4, Func Offset: 0x3b4
	// Line 2141, Address: 0x17b348, Func Offset: 0x438
	// Line 2169, Address: 0x17b350, Func Offset: 0x440
	// Line 2170, Address: 0x17b358, Func Offset: 0x448
	// Line 2174, Address: 0x17b364, Func Offset: 0x454
	// Line 2176, Address: 0x17b36c, Func Offset: 0x45c
	// Line 2203, Address: 0x17b378, Func Offset: 0x468
	// Line 2194, Address: 0x17b37c, Func Offset: 0x46c
	// Line 2203, Address: 0x17b384, Func Offset: 0x474
	// Line 2214, Address: 0x17b3e0, Func Offset: 0x4d0
	// Line 2228, Address: 0x17b408, Func Offset: 0x4f8
	// Line 2233, Address: 0x17b40c, Func Offset: 0x4fc
	// Line 2231, Address: 0x17b410, Func Offset: 0x500
	// Line 2233, Address: 0x17b414, Func Offset: 0x504
	// Line 2228, Address: 0x17b41c, Func Offset: 0x50c
	// Line 2229, Address: 0x17b420, Func Offset: 0x510
	// Line 2230, Address: 0x17b428, Func Offset: 0x518
	// Line 2231, Address: 0x17b430, Func Offset: 0x520
	// Line 2236, Address: 0x17b434, Func Offset: 0x524
	// Line 2237, Address: 0x17b43c, Func Offset: 0x52c
	// Line 2238, Address: 0x17b444, Func Offset: 0x534
	// Line 2240, Address: 0x17b448, Func Offset: 0x538
	// Line 2243, Address: 0x17b44c, Func Offset: 0x53c
	// Line 2267, Address: 0x17b454, Func Offset: 0x544
	// Line 2270, Address: 0x17b458, Func Offset: 0x548
	// Line 2272, Address: 0x17b464, Func Offset: 0x554
	// Line 2274, Address: 0x17b468, Func Offset: 0x558
	// Line 2283, Address: 0x17b470, Func Offset: 0x560
	// Line 2276, Address: 0x17b474, Func Offset: 0x564
	// Line 2283, Address: 0x17b478, Func Offset: 0x568
	// Line 2284, Address: 0x17b480, Func Offset: 0x570
	// Line 2285, Address: 0x17b488, Func Offset: 0x578
	// Line 2287, Address: 0x17b490, Func Offset: 0x580
	// Line 2289, Address: 0x17b498, Func Offset: 0x588
	// Line 2291, Address: 0x17b4a0, Func Offset: 0x590
	// Line 2295, Address: 0x17b4b0, Func Offset: 0x5a0
	// Line 2297, Address: 0x17b4b8, Func Offset: 0x5a8
	// Line 2300, Address: 0x17b4c0, Func Offset: 0x5b0
	// Line 2302, Address: 0x17b4d4, Func Offset: 0x5c4
	// Line 2304, Address: 0x17b4dc, Func Offset: 0x5cc
	// Line 2305, Address: 0x17b4e4, Func Offset: 0x5d4
	// Line 2306, Address: 0x17b4e8, Func Offset: 0x5d8
	// Line 2307, Address: 0x17b4f0, Func Offset: 0x5e0
	// Line 2308, Address: 0x17b4f4, Func Offset: 0x5e4
	// Line 2310, Address: 0x17b4f8, Func Offset: 0x5e8
	// Line 2314, Address: 0x17b504, Func Offset: 0x5f4
	// Line 2315, Address: 0x17b50c, Func Offset: 0x5fc
	// Line 2317, Address: 0x17b514, Func Offset: 0x604
	// Line 2321, Address: 0x17b524, Func Offset: 0x614
	// Line 2324, Address: 0x17b52c, Func Offset: 0x61c
	// Line 2325, Address: 0x17b534, Func Offset: 0x624
	// Line 2328, Address: 0x17b53c, Func Offset: 0x62c
	// Line 2330, Address: 0x17b558, Func Offset: 0x648
	// Line 2332, Address: 0x17b55c, Func Offset: 0x64c
	// Line 2336, Address: 0x17b560, Func Offset: 0x650
	// Line 2338, Address: 0x17b56c, Func Offset: 0x65c
	// Line 2339, Address: 0x17b578, Func Offset: 0x668
	// Line 2340, Address: 0x17b57c, Func Offset: 0x66c
	// Line 2343, Address: 0x17b588, Func Offset: 0x678
	// Line 2344, Address: 0x17b594, Func Offset: 0x684
	// Line 2348, Address: 0x17b59c, Func Offset: 0x68c
	// Line 2352, Address: 0x17b5a4, Func Offset: 0x694
	// Line 2353, Address: 0x17b5b0, Func Offset: 0x6a0
	// Line 2355, Address: 0x17b5b8, Func Offset: 0x6a8
	// Line 2357, Address: 0x17b5c4, Func Offset: 0x6b4
	// Line 2359, Address: 0x17b5c8, Func Offset: 0x6b8
	// Line 2362, Address: 0x17b5cc, Func Offset: 0x6bc
	// Line 2364, Address: 0x17b5d8, Func Offset: 0x6c8
	// Line 2362, Address: 0x17b5dc, Func Offset: 0x6cc
	// Line 2364, Address: 0x17b5e0, Func Offset: 0x6d0
	// Line 2367, Address: 0x17b5ec, Func Offset: 0x6dc
	// Line 2371, Address: 0x17b5f0, Func Offset: 0x6e0
	// Line 2372, Address: 0x17b600, Func Offset: 0x6f0
	// Line 2373, Address: 0x17b604, Func Offset: 0x6f4
	// Line 2377, Address: 0x17b608, Func Offset: 0x6f8
	// Line 2379, Address: 0x17b614, Func Offset: 0x704
	// Line 2377, Address: 0x17b618, Func Offset: 0x708
	// Line 2379, Address: 0x17b620, Func Offset: 0x710
	// Line 2386, Address: 0x17b628, Func Offset: 0x718
	// Line 2387, Address: 0x17b630, Func Offset: 0x720
	// Line 2389, Address: 0x17b63c, Func Offset: 0x72c
	// Line 2392, Address: 0x17b640, Func Offset: 0x730
	// Line 2394, Address: 0x17b648, Func Offset: 0x738
	// Line 2396, Address: 0x17b64c, Func Offset: 0x73c
	// Line 2397, Address: 0x17b658, Func Offset: 0x748
	// Line 2398, Address: 0x17b660, Func Offset: 0x750
	// Line 2402, Address: 0x17b66c, Func Offset: 0x75c
	// Line 2404, Address: 0x17b684, Func Offset: 0x774
	// Line 2406, Address: 0x17b688, Func Offset: 0x778
	// Line 2404, Address: 0x17b68c, Func Offset: 0x77c
	// Line 2406, Address: 0x17b690, Func Offset: 0x780
	// Line 2407, Address: 0x17b6a0, Func Offset: 0x790
	// Line 2410, Address: 0x17b6a8, Func Offset: 0x798
	// Line 2411, Address: 0x17b6b0, Func Offset: 0x7a0
	// Line 2412, Address: 0x17b6c8, Func Offset: 0x7b8
	// Line 2414, Address: 0x17b6e0, Func Offset: 0x7d0
	// Line 2415, Address: 0x17b6e4, Func Offset: 0x7d4
	// Line 2419, Address: 0x17b6ec, Func Offset: 0x7dc
	// Line 2420, Address: 0x17b6f8, Func Offset: 0x7e8
	// Line 2424, Address: 0x17b704, Func Offset: 0x7f4
	// Line 2427, Address: 0x17b708, Func Offset: 0x7f8
	// Func End, Address: 0x17b718, Func Offset: 0x808
}

// zGame_HackPostPortalAutoSaveDraw__Fv
// Start address: 0x17b720
void zGame_HackPostPortalAutoSaveDraw()
{
	RwCamera* cam;
	RwCamera* ccam;
	RwRGBA bg;
	int8 str[2048];
	xtextbox tb;
	float32 yextent;
	uint32 i;
	RwTexture* tex;
	RwRaster* rast;
	// Line 1953, Address: 0x17b720, Func Offset: 0
	// Line 1956, Address: 0x17b724, Func Offset: 0x4
	// Line 1953, Address: 0x17b728, Func Offset: 0x8
	// Line 1956, Address: 0x17b72c, Func Offset: 0xc
	// Line 1953, Address: 0x17b730, Func Offset: 0x10
	// Line 1956, Address: 0x17b750, Func Offset: 0x30
	// Line 1960, Address: 0x17b770, Func Offset: 0x50
	// Line 1961, Address: 0x17b778, Func Offset: 0x58
	// Line 1962, Address: 0x17b780, Func Offset: 0x60
	// Line 1966, Address: 0x17b788, Func Offset: 0x68
	// Line 1969, Address: 0x17b798, Func Offset: 0x78
	// Line 1971, Address: 0x17b7ac, Func Offset: 0x8c
	// Line 1975, Address: 0x17b944, Func Offset: 0x224
	// Line 1974, Address: 0x17b94c, Func Offset: 0x22c
	// Line 1976, Address: 0x17b950, Func Offset: 0x230
	// Line 1975, Address: 0x17b954, Func Offset: 0x234
	// Line 1976, Address: 0x17b958, Func Offset: 0x238
	// Line 1975, Address: 0x17b95c, Func Offset: 0x23c
	// Line 1976, Address: 0x17b960, Func Offset: 0x240
	// Line 1975, Address: 0x17b964, Func Offset: 0x244
	// Line 1976, Address: 0x17b968, Func Offset: 0x248
	// Line 1971, Address: 0x17b970, Func Offset: 0x250
	// Line 1976, Address: 0x17b974, Func Offset: 0x254
	// Line 1974, Address: 0x17b978, Func Offset: 0x258
	// Line 1975, Address: 0x17b97c, Func Offset: 0x25c
	// Line 1977, Address: 0x17b984, Func Offset: 0x264
	// Line 1974, Address: 0x17b98c, Func Offset: 0x26c
	// Line 1975, Address: 0x17b994, Func Offset: 0x274
	// Line 1976, Address: 0x17b9a4, Func Offset: 0x284
	// Line 1977, Address: 0x17b9d0, Func Offset: 0x2b0
	// Line 1978, Address: 0x17b9d8, Func Offset: 0x2b8
	// Line 1979, Address: 0x17ba0c, Func Offset: 0x2ec
	// Line 1981, Address: 0x17ba14, Func Offset: 0x2f4
	// Line 1979, Address: 0x17ba18, Func Offset: 0x2f8
	// Line 1981, Address: 0x17ba1c, Func Offset: 0x2fc
	// Line 1980, Address: 0x17ba20, Func Offset: 0x300
	// Line 1981, Address: 0x17ba28, Func Offset: 0x308
	// Line 1980, Address: 0x17ba2c, Func Offset: 0x30c
	// Line 1981, Address: 0x17ba30, Func Offset: 0x310
	// Line 1983, Address: 0x17ba38, Func Offset: 0x318
	// Line 1979, Address: 0x17ba40, Func Offset: 0x320
	// Line 1980, Address: 0x17ba50, Func Offset: 0x330
	// Line 1981, Address: 0x17ba54, Func Offset: 0x334
	// Line 1980, Address: 0x17ba5c, Func Offset: 0x33c
	// Line 1981, Address: 0x17ba78, Func Offset: 0x358
	// Line 1983, Address: 0x17baa4, Func Offset: 0x384
	// Line 1986, Address: 0x17bad4, Func Offset: 0x3b4
	// Line 1988, Address: 0x17bae8, Func Offset: 0x3c8
	// Line 1989, Address: 0x17baf8, Func Offset: 0x3d8
	// Line 2000, Address: 0x17bb00, Func Offset: 0x3e0
	// Line 2005, Address: 0x17bb18, Func Offset: 0x3f8
	// Line 2007, Address: 0x17bb24, Func Offset: 0x404
	// Line 2008, Address: 0x17bb44, Func Offset: 0x424
	// Line 2009, Address: 0x17bb64, Func Offset: 0x444
	// Line 2010, Address: 0x17bb84, Func Offset: 0x464
	// Line 2014, Address: 0x17bba8, Func Offset: 0x488
	// Line 2015, Address: 0x17bbc0, Func Offset: 0x4a0
	// Line 2016, Address: 0x17bbc8, Func Offset: 0x4a8
	// Line 2021, Address: 0x17bbdc, Func Offset: 0x4bc
	// Line 2023, Address: 0x17bbe0, Func Offset: 0x4c0
	// Line 2025, Address: 0x17bc18, Func Offset: 0x4f8
	// Line 2026, Address: 0x17bc2c, Func Offset: 0x50c
	// Line 2027, Address: 0x17bc4c, Func Offset: 0x52c
	// Line 2028, Address: 0x17bc6c, Func Offset: 0x54c
	// Line 2030, Address: 0x17bc70, Func Offset: 0x550
	// Line 2033, Address: 0x17bc78, Func Offset: 0x558
	// Line 2034, Address: 0x17bc88, Func Offset: 0x568
	// Line 2036, Address: 0x17bc98, Func Offset: 0x578
	// Line 2039, Address: 0x17bca0, Func Offset: 0x580
	// Line 2040, Address: 0x17bca8, Func Offset: 0x588
	// Line 2050, Address: 0x17bcb0, Func Offset: 0x590
	// Func End, Address: 0x17bce0, Func Offset: 0x5c0
}

// zGame_HackDrawCard__FffffP8RwRaster
// Start address: 0x17bce0
void zGame_HackDrawCard(float32 x, float32 y, float32 w, float32 h, RwRaster* rast)
{
	RwSky2DVertex quad[4];
	float32 screenZ;
	// Line 1905, Address: 0x17bce0, Func Offset: 0
	// Line 1907, Address: 0x17bd0c, Func Offset: 0x2c
	// Line 1913, Address: 0x17bd18, Func Offset: 0x38
	// Line 1914, Address: 0x17bd1c, Func Offset: 0x3c
	// Line 1913, Address: 0x17bd20, Func Offset: 0x40
	// Line 1914, Address: 0x17bd24, Func Offset: 0x44
	// Line 1913, Address: 0x17bd28, Func Offset: 0x48
	// Line 1924, Address: 0x17bd2c, Func Offset: 0x4c
	// Line 1942, Address: 0x17bd30, Func Offset: 0x50
	// Line 1913, Address: 0x17bd38, Func Offset: 0x58
	// Line 1942, Address: 0x17bd3c, Func Offset: 0x5c
	// Line 1913, Address: 0x17bd40, Func Offset: 0x60
	// Line 1914, Address: 0x17bd44, Func Offset: 0x64
	// Line 1921, Address: 0x17bd48, Func Offset: 0x68
	// Line 1912, Address: 0x17bd4c, Func Offset: 0x6c
	// Line 1921, Address: 0x17bd50, Func Offset: 0x70
	// Line 1919, Address: 0x17bd54, Func Offset: 0x74
	// Line 1921, Address: 0x17bd58, Func Offset: 0x78
	// Line 1935, Address: 0x17bd5c, Func Offset: 0x7c
	// Line 1921, Address: 0x17bd60, Func Offset: 0x80
	// Line 1920, Address: 0x17bd64, Func Offset: 0x84
	// Line 1922, Address: 0x17bd68, Func Offset: 0x88
	// Line 1924, Address: 0x17bd6c, Func Offset: 0x8c
	// Line 1926, Address: 0x17bd70, Func Offset: 0x90
	// Line 1934, Address: 0x17bd74, Func Offset: 0x94
	// Line 1929, Address: 0x17bd78, Func Offset: 0x98
	// Line 1928, Address: 0x17bd7c, Func Offset: 0x9c
	// Line 1929, Address: 0x17bd80, Func Offset: 0xa0
	// Line 1936, Address: 0x17bd84, Func Offset: 0xa4
	// Line 1929, Address: 0x17bd88, Func Offset: 0xa8
	// Line 1910, Address: 0x17bd90, Func Offset: 0xb0
	// Line 1930, Address: 0x17bd94, Func Offset: 0xb4
	// Line 1911, Address: 0x17bd98, Func Offset: 0xb8
	// Line 1938, Address: 0x17bd9c, Func Offset: 0xbc
	// Line 1927, Address: 0x17bda0, Func Offset: 0xc0
	// Line 1931, Address: 0x17bda4, Func Offset: 0xc4
	// Line 1918, Address: 0x17bda8, Func Offset: 0xc8
	// Line 1937, Address: 0x17bdac, Func Offset: 0xcc
	// Line 1939, Address: 0x17bdbc, Func Offset: 0xdc
	// Line 1940, Address: 0x17bdc0, Func Offset: 0xe0
	// Line 1915, Address: 0x17bdc4, Func Offset: 0xe4
	// Line 1916, Address: 0x17bdc8, Func Offset: 0xe8
	// Line 1923, Address: 0x17bdcc, Func Offset: 0xec
	// Line 1942, Address: 0x17bdd0, Func Offset: 0xf0
	// Line 1943, Address: 0x17bdd8, Func Offset: 0xf8
	// Line 1944, Address: 0x17bde4, Func Offset: 0x104
	// Line 1945, Address: 0x17bdf0, Func Offset: 0x110
	// Line 1948, Address: 0x17bdfc, Func Offset: 0x11c
	// Line 1950, Address: 0x17be08, Func Offset: 0x128
	// Line 1951, Address: 0x17be18, Func Offset: 0x138
	// Func End, Address: 0x17be38, Func Offset: 0x158
}

// zGameStall__Fv
// Start address: 0x17be40
void zGameStall()
{
	// Line 1892, Address: 0x17be40, Func Offset: 0
	// Line 1893, Address: 0x17be44, Func Offset: 0x4
	// Line 1892, Address: 0x17be48, Func Offset: 0x8
	// Line 1893, Address: 0x17be50, Func Offset: 0x10
	// Line 1895, Address: 0x17bea0, Func Offset: 0x60
	// Line 1897, Address: 0x17bea8, Func Offset: 0x68
	// Line 1900, Address: 0x17beb4, Func Offset: 0x74
	// Line 1902, Address: 0x17bec0, Func Offset: 0x80
	// Line 1903, Address: 0x17bed0, Func Offset: 0x90
	// Func End, Address: 0x17bedc, Func Offset: 0x9c
}

// zGamePauseIfPossible__Fv
// Start address: 0x17bee0
void zGamePauseIfPossible()
{
	// Line 1827, Address: 0x17bee0, Func Offset: 0
	// Line 1829, Address: 0x17bee8, Func Offset: 0x8
	// Line 1833, Address: 0x17befc, Func Offset: 0x1c
	// Line 1837, Address: 0x17bf0c, Func Offset: 0x2c
	// Line 1838, Address: 0x17bf38, Func Offset: 0x58
	// Line 1844, Address: 0x17bf40, Func Offset: 0x60
	// Line 1848, Address: 0x17bf4c, Func Offset: 0x6c
	// Line 1856, Address: 0x17bf5c, Func Offset: 0x7c
	// Line 1848, Address: 0x17bf60, Func Offset: 0x80
	// Line 1856, Address: 0x17bf64, Func Offset: 0x84
	// Line 1848, Address: 0x17bf68, Func Offset: 0x88
	// Line 1856, Address: 0x17bf6c, Func Offset: 0x8c
	// Line 1874, Address: 0x17bf7c, Func Offset: 0x9c
	// Line 1876, Address: 0x17bf84, Func Offset: 0xa4
	// Line 1878, Address: 0x17bf94, Func Offset: 0xb4
	// Line 1882, Address: 0x17c018, Func Offset: 0x138
	// Line 1884, Address: 0x17c048, Func Offset: 0x168
	// Line 1886, Address: 0x17c0d0, Func Offset: 0x1f0
	// Line 1888, Address: 0x17c0dc, Func Offset: 0x1fc
	// Line 1889, Address: 0x17c228, Func Offset: 0x348
	// Func End, Address: 0x17c234, Func Offset: 0x354
}

// zGameIsPaused__Fv
// Start address: 0x17c240
int32 zGameIsPaused()
{
	// Line 1679, Address: 0x17c240, Func Offset: 0
	// Line 1680, Address: 0x17c244, Func Offset: 0x4
	// Line 1681, Address: 0x17c250, Func Offset: 0x10
	// Line 1683, Address: 0x17c258, Func Offset: 0x18
	// Line 1685, Address: 0x17c264, Func Offset: 0x24
	// Line 1686, Address: 0x17c26c, Func Offset: 0x2c
	// Line 1689, Address: 0x17c270, Func Offset: 0x30
	// Line 1703, Address: 0x17c278, Func Offset: 0x38
	// Func End, Address: 0x17c280, Func Offset: 0x40
}

// zGameLoop__Fv
// Start address: 0x17c280
void zGameLoop()
{
	int32 ostrich_delay;
	int32 cheats;
	xMat4x3 playerMat;
	// Line 819, Address: 0x17c280, Func Offset: 0
	// Line 824, Address: 0x17c284, Func Offset: 0x4
	// Line 819, Address: 0x17c288, Func Offset: 0x8
	// Line 833, Address: 0x17c28c, Func Offset: 0xc
	// Line 819, Address: 0x17c290, Func Offset: 0x10
	// Line 830, Address: 0x17c298, Func Offset: 0x18
	// Line 819, Address: 0x17c29c, Func Offset: 0x1c
	// Line 833, Address: 0x17c2a4, Func Offset: 0x24
	// Line 835, Address: 0x17c2ac, Func Offset: 0x2c
	// Line 841, Address: 0x17c2b4, Func Offset: 0x34
	// Line 835, Address: 0x17c2b8, Func Offset: 0x38
	// Line 841, Address: 0x17c2bc, Func Offset: 0x3c
	// Line 835, Address: 0x17c2c4, Func Offset: 0x44
	// Line 841, Address: 0x17c2c8, Func Offset: 0x48
	// Line 835, Address: 0x17c2cc, Func Offset: 0x4c
	// Line 844, Address: 0x17c2d0, Func Offset: 0x50
	// Line 845, Address: 0x17c2d8, Func Offset: 0x58
	// Line 858, Address: 0x17c2ec, Func Offset: 0x6c
	// Line 896, Address: 0x17c2f0, Func Offset: 0x70
	// Line 899, Address: 0x17c2f4, Func Offset: 0x74
	// Line 900, Address: 0x17c2fc, Func Offset: 0x7c
	// Line 982, Address: 0x17c30c, Func Offset: 0x8c
	// Line 983, Address: 0x17c31c, Func Offset: 0x9c
	// Line 1005, Address: 0x17c338, Func Offset: 0xb8
	// Line 983, Address: 0x17c33c, Func Offset: 0xbc
	// Line 1005, Address: 0x17c340, Func Offset: 0xc0
	// Line 1008, Address: 0x17c358, Func Offset: 0xd8
	// Line 1009, Address: 0x17c35c, Func Offset: 0xdc
	// Line 1010, Address: 0x17c368, Func Offset: 0xe8
	// Line 1015, Address: 0x17c384, Func Offset: 0x104
	// Line 1058, Address: 0x17c388, Func Offset: 0x108
	// Line 1060, Address: 0x17c38c, Func Offset: 0x10c
	// Line 1058, Address: 0x17c390, Func Offset: 0x110
	// Line 1061, Address: 0x17c394, Func Offset: 0x114
	// Line 1063, Address: 0x17c39c, Func Offset: 0x11c
	// Line 1064, Address: 0x17c3a4, Func Offset: 0x124
	// Line 1061, Address: 0x17c3a8, Func Offset: 0x128
	// Line 1063, Address: 0x17c3ac, Func Offset: 0x12c
	// Line 1064, Address: 0x17c3b4, Func Offset: 0x134
	// Line 1063, Address: 0x17c3b8, Func Offset: 0x138
	// Line 1065, Address: 0x17c3bc, Func Offset: 0x13c
	// Line 1066, Address: 0x17c3c8, Func Offset: 0x148
	// Line 1065, Address: 0x17c3d0, Func Offset: 0x150
	// Line 1066, Address: 0x17c3d4, Func Offset: 0x154
	// Line 1065, Address: 0x17c3d8, Func Offset: 0x158
	// Line 1066, Address: 0x17c3e4, Func Offset: 0x164
	// Line 1074, Address: 0x17c3f0, Func Offset: 0x170
	// Line 1072, Address: 0x17c3f4, Func Offset: 0x174
	// Line 1074, Address: 0x17c3f8, Func Offset: 0x178
	// Line 1072, Address: 0x17c400, Func Offset: 0x180
	// Line 1066, Address: 0x17c404, Func Offset: 0x184
	// Line 1074, Address: 0x17c414, Func Offset: 0x194
	// Line 1076, Address: 0x17c41c, Func Offset: 0x19c
	// Line 1077, Address: 0x17c424, Func Offset: 0x1a4
	// Line 1079, Address: 0x17c438, Func Offset: 0x1b8
	// Line 1077, Address: 0x17c43c, Func Offset: 0x1bc
	// Line 1079, Address: 0x17c448, Func Offset: 0x1c8
	// Line 1080, Address: 0x17c454, Func Offset: 0x1d4
	// Line 1082, Address: 0x17c460, Func Offset: 0x1e0
	// Line 1084, Address: 0x17c468, Func Offset: 0x1e8
	// Line 1086, Address: 0x17c47c, Func Offset: 0x1fc
	// Line 1084, Address: 0x17c480, Func Offset: 0x200
	// Line 1086, Address: 0x17c48c, Func Offset: 0x20c
	// Line 1087, Address: 0x17c498, Func Offset: 0x218
	// Line 1089, Address: 0x17c4a0, Func Offset: 0x220
	// Line 1092, Address: 0x17c4a8, Func Offset: 0x228
	// Line 1095, Address: 0x17c4c0, Func Offset: 0x240
	// Line 1096, Address: 0x17c4cc, Func Offset: 0x24c
	// Line 1097, Address: 0x17c4e0, Func Offset: 0x260
	// Line 1098, Address: 0x17c4ec, Func Offset: 0x26c
	// Line 1099, Address: 0x17c504, Func Offset: 0x284
	// Line 1100, Address: 0x17c510, Func Offset: 0x290
	// Line 1101, Address: 0x17c520, Func Offset: 0x2a0
	// Line 1102, Address: 0x17c52c, Func Offset: 0x2ac
	// Line 1103, Address: 0x17c534, Func Offset: 0x2b4
	// Line 1105, Address: 0x17c538, Func Offset: 0x2b8
	// Line 1166, Address: 0x17c554, Func Offset: 0x2d4
	// Line 1168, Address: 0x17c558, Func Offset: 0x2d8
	// Line 1171, Address: 0x17c55c, Func Offset: 0x2dc
	// Line 1166, Address: 0x17c560, Func Offset: 0x2e0
	// Line 1168, Address: 0x17c564, Func Offset: 0x2e4
	// Line 1171, Address: 0x17c568, Func Offset: 0x2e8
	// Line 1174, Address: 0x17c570, Func Offset: 0x2f0
	// Line 1240, Address: 0x17c578, Func Offset: 0x2f8
	// Line 1252, Address: 0x17c584, Func Offset: 0x304
	// Line 1263, Address: 0x17c5d0, Func Offset: 0x350
	// Line 1266, Address: 0x17c5d4, Func Offset: 0x354
	// Line 1269, Address: 0x17c5e0, Func Offset: 0x360
	// Line 1300, Address: 0x17c5e4, Func Offset: 0x364
	// Line 1301, Address: 0x17c5ec, Func Offset: 0x36c
	// Line 1302, Address: 0x17c60c, Func Offset: 0x38c
	// Line 1311, Address: 0x17c610, Func Offset: 0x390
	// Line 1314, Address: 0x17c618, Func Offset: 0x398
	// Line 1315, Address: 0x17c648, Func Offset: 0x3c8
	// Line 1316, Address: 0x17c654, Func Offset: 0x3d4
	// Line 1315, Address: 0x17c658, Func Offset: 0x3d8
	// Line 1316, Address: 0x17c65c, Func Offset: 0x3dc
	// Line 1315, Address: 0x17c664, Func Offset: 0x3e4
	// Line 1316, Address: 0x17c668, Func Offset: 0x3e8
	// Line 1317, Address: 0x17c670, Func Offset: 0x3f0
	// Line 1318, Address: 0x17c67c, Func Offset: 0x3fc
	// Line 1320, Address: 0x17c684, Func Offset: 0x404
	// Line 1322, Address: 0x17c688, Func Offset: 0x408
	// Line 1329, Address: 0x17c690, Func Offset: 0x410
	// Line 1324, Address: 0x17c694, Func Offset: 0x414
	// Line 1329, Address: 0x17c698, Func Offset: 0x418
	// Line 1332, Address: 0x17c6a0, Func Offset: 0x420
	// Line 1338, Address: 0x17c6a4, Func Offset: 0x424
	// Line 1339, Address: 0x17c6ac, Func Offset: 0x42c
	// Line 1340, Address: 0x17c6bc, Func Offset: 0x43c
	// Line 1342, Address: 0x17c6c0, Func Offset: 0x440
	// Line 1344, Address: 0x17c6c4, Func Offset: 0x444
	// Line 1342, Address: 0x17c6c8, Func Offset: 0x448
	// Line 1344, Address: 0x17c6cc, Func Offset: 0x44c
	// Line 1345, Address: 0x17c6d4, Func Offset: 0x454
	// Line 1349, Address: 0x17c6e4, Func Offset: 0x464
	// Line 1347, Address: 0x17c6e8, Func Offset: 0x468
	// Line 1349, Address: 0x17c6ec, Func Offset: 0x46c
	// Line 1368, Address: 0x17c6f4, Func Offset: 0x474
	// Line 1371, Address: 0x17c6f8, Func Offset: 0x478
	// Line 1372, Address: 0x17c700, Func Offset: 0x480
	// Line 1371, Address: 0x17c704, Func Offset: 0x484
	// Line 1372, Address: 0x17c708, Func Offset: 0x488
	// Line 1373, Address: 0x17c714, Func Offset: 0x494
	// Line 1374, Address: 0x17c71c, Func Offset: 0x49c
	// Line 1373, Address: 0x17c724, Func Offset: 0x4a4
	// Line 1374, Address: 0x17c728, Func Offset: 0x4a8
	// Line 1375, Address: 0x17c730, Func Offset: 0x4b0
	// Line 1390, Address: 0x17c73c, Func Offset: 0x4bc
	// Line 1375, Address: 0x17c744, Func Offset: 0x4c4
	// Line 1390, Address: 0x17c754, Func Offset: 0x4d4
	// Line 1392, Address: 0x17c75c, Func Offset: 0x4dc
	// Line 1396, Address: 0x17c760, Func Offset: 0x4e0
	// Line 1436, Address: 0x17c768, Func Offset: 0x4e8
	// Line 1507, Address: 0x17c770, Func Offset: 0x4f0
	// Line 1505, Address: 0x17c774, Func Offset: 0x4f4
	// Line 1507, Address: 0x17c778, Func Offset: 0x4f8
	// Line 1505, Address: 0x17c77c, Func Offset: 0x4fc
	// Line 1507, Address: 0x17c780, Func Offset: 0x500
	// Line 1508, Address: 0x17c78c, Func Offset: 0x50c
	// Line 1524, Address: 0x17c794, Func Offset: 0x514
	// Line 1540, Address: 0x17c7a0, Func Offset: 0x520
	// Line 1542, Address: 0x17c7a4, Func Offset: 0x524
	// Line 1544, Address: 0x17c7b4, Func Offset: 0x534
	// Line 1546, Address: 0x17c7b8, Func Offset: 0x538
	// Line 1551, Address: 0x17c7c8, Func Offset: 0x548
	// Line 1548, Address: 0x17c7cc, Func Offset: 0x54c
	// Line 1551, Address: 0x17c7d0, Func Offset: 0x550
	// Line 1555, Address: 0x17c7d8, Func Offset: 0x558
	// Line 1557, Address: 0x17c7dc, Func Offset: 0x55c
	// Line 1561, Address: 0x17c7e4, Func Offset: 0x564
	// Line 1563, Address: 0x17c7ec, Func Offset: 0x56c
	// Line 1566, Address: 0x17c7f4, Func Offset: 0x574
	// Line 1569, Address: 0x17c800, Func Offset: 0x580
	// Line 1573, Address: 0x17c808, Func Offset: 0x588
	// Line 1582, Address: 0x17c858, Func Offset: 0x5d8
	// Line 1583, Address: 0x17c85c, Func Offset: 0x5dc
	// Line 1582, Address: 0x17c860, Func Offset: 0x5e0
	// Line 1583, Address: 0x17c864, Func Offset: 0x5e4
	// Line 1584, Address: 0x17c86c, Func Offset: 0x5ec
	// Line 1586, Address: 0x17c870, Func Offset: 0x5f0
	// Line 1661, Address: 0x17c87c, Func Offset: 0x5fc
	// Line 1663, Address: 0x17c900, Func Offset: 0x680
	// Line 1670, Address: 0x17c908, Func Offset: 0x688
	// Func End, Address: 0x17c924, Func Offset: 0x6a4
}

// zGameSetup__Fv
// Start address: 0x17c930
void zGameSetup()
{
	RpWorld* world;
	// Line 645, Address: 0x17c930, Func Offset: 0
	// Line 646, Address: 0x17c934, Func Offset: 0x4
	// Line 645, Address: 0x17c938, Func Offset: 0x8
	// Line 650, Address: 0x17c940, Func Offset: 0x10
	// Line 654, Address: 0x17c948, Func Offset: 0x18
	// Line 652, Address: 0x17c94c, Func Offset: 0x1c
	// Line 654, Address: 0x17c950, Func Offset: 0x20
	// Line 652, Address: 0x17c954, Func Offset: 0x24
	// Line 654, Address: 0x17c958, Func Offset: 0x28
	// Line 655, Address: 0x17c964, Func Offset: 0x34
	// Line 656, Address: 0x17c96c, Func Offset: 0x3c
	// Line 658, Address: 0x17c974, Func Offset: 0x44
	// Line 661, Address: 0x17c978, Func Offset: 0x48
	// Line 667, Address: 0x17c980, Func Offset: 0x50
	// Line 663, Address: 0x17c984, Func Offset: 0x54
	// Line 667, Address: 0x17c988, Func Offset: 0x58
	// Line 669, Address: 0x17c990, Func Offset: 0x60
	// Line 671, Address: 0x17c994, Func Offset: 0x64
	// Line 676, Address: 0x17c99c, Func Offset: 0x6c
	// Line 673, Address: 0x17c9a0, Func Offset: 0x70
	// Line 676, Address: 0x17c9a4, Func Offset: 0x74
	// Line 678, Address: 0x17c9b4, Func Offset: 0x84
	// Line 681, Address: 0x17c9b8, Func Offset: 0x88
	// Line 710, Address: 0x17c9c4, Func Offset: 0x94
	// Line 713, Address: 0x17c9c8, Func Offset: 0x98
	// Line 715, Address: 0x17c9d0, Func Offset: 0xa0
	// Line 720, Address: 0x17c9d8, Func Offset: 0xa8
	// Line 725, Address: 0x17c9dc, Func Offset: 0xac
	// Line 727, Address: 0x17c9e4, Func Offset: 0xb4
	// Line 730, Address: 0x17c9e8, Func Offset: 0xb8
	// Line 727, Address: 0x17c9ec, Func Offset: 0xbc
	// Line 730, Address: 0x17c9f0, Func Offset: 0xc0
	// Line 733, Address: 0x17ca00, Func Offset: 0xd0
	// Line 736, Address: 0x17ca14, Func Offset: 0xe4
	// Line 739, Address: 0x17ca28, Func Offset: 0xf8
	// Line 740, Address: 0x17ca34, Func Offset: 0x104
	// Line 742, Address: 0x17ca48, Func Offset: 0x118
	// Line 746, Address: 0x17ca54, Func Offset: 0x124
	// Line 747, Address: 0x17ca5c, Func Offset: 0x12c
	// Line 748, Address: 0x17ca64, Func Offset: 0x134
	// Line 750, Address: 0x17ca68, Func Offset: 0x138
	// Line 753, Address: 0x17ca70, Func Offset: 0x140
	// Line 755, Address: 0x17ca78, Func Offset: 0x148
	// Line 758, Address: 0x17ca7c, Func Offset: 0x14c
	// Line 760, Address: 0x17ca84, Func Offset: 0x154
	// Line 761, Address: 0x17ca8c, Func Offset: 0x15c
	// Func End, Address: 0x17ca9c, Func Offset: 0x16c
}

// zGameExit__Fv
// Start address: 0x17caa0
void zGameExit()
{
	// Line 586, Address: 0x17caa0, Func Offset: 0
	// Line 587, Address: 0x17caa4, Func Offset: 0x4
	// Line 586, Address: 0x17caa8, Func Offset: 0x8
	// Line 596, Address: 0x17caac, Func Offset: 0xc
	// Line 601, Address: 0x17cab4, Func Offset: 0x14
	// Line 598, Address: 0x17cab8, Func Offset: 0x18
	// Line 601, Address: 0x17cabc, Func Offset: 0x1c
	// Line 606, Address: 0x17cac8, Func Offset: 0x28
	// Line 611, Address: 0x17cacc, Func Offset: 0x2c
	// Line 614, Address: 0x17cad4, Func Offset: 0x34
	// Line 616, Address: 0x17cad8, Func Offset: 0x38
	// Line 617, Address: 0x17cae0, Func Offset: 0x40
	// Line 618, Address: 0x17cae8, Func Offset: 0x48
	// Line 620, Address: 0x17caf0, Func Offset: 0x50
	// Line 622, Address: 0x17caf4, Func Offset: 0x54
	// Line 628, Address: 0x17cb04, Func Offset: 0x64
	// Line 624, Address: 0x17cb08, Func Offset: 0x68
	// Line 628, Address: 0x17cb0c, Func Offset: 0x6c
	// Line 629, Address: 0x17cb28, Func Offset: 0x88
	// Line 631, Address: 0x17cb30, Func Offset: 0x90
	// Line 632, Address: 0x17cb38, Func Offset: 0x98
	// Func End, Address: 0x17cb44, Func Offset: 0xa4
}

// zGameInit__FUi
// Start address: 0x17cb50
void zGameInit(uint32 theSceneID)
{
	// Line 501, Address: 0x17cb50, Func Offset: 0
	// Line 502, Address: 0x17cb54, Func Offset: 0x4
	// Line 501, Address: 0x17cb58, Func Offset: 0x8
	// Line 506, Address: 0x17cb64, Func Offset: 0x14
	// Line 516, Address: 0x17cb6c, Func Offset: 0x1c
	// Line 519, Address: 0x17cb80, Func Offset: 0x30
	// Line 520, Address: 0x17cb88, Func Offset: 0x38
	// Line 540, Address: 0x17cb90, Func Offset: 0x40
	// Line 534, Address: 0x17cb94, Func Offset: 0x44
	// Line 540, Address: 0x17cb98, Func Offset: 0x48
	// Line 541, Address: 0x17cbb8, Func Offset: 0x68
	// Line 547, Address: 0x17cbc8, Func Offset: 0x78
	// Line 549, Address: 0x17cbcc, Func Offset: 0x7c
	// Line 547, Address: 0x17cbd0, Func Offset: 0x80
	// Line 549, Address: 0x17cbd4, Func Offset: 0x84
	// Line 544, Address: 0x17cbe0, Func Offset: 0x90
	// Line 549, Address: 0x17cbe4, Func Offset: 0x94
	// Line 550, Address: 0x17cbec, Func Offset: 0x9c
	// Line 551, Address: 0x17cbf8, Func Offset: 0xa8
	// Line 556, Address: 0x17cc0c, Func Offset: 0xbc
	// Line 559, Address: 0x17cc10, Func Offset: 0xc0
	// Line 561, Address: 0x17cc18, Func Offset: 0xc8
	// Line 567, Address: 0x17cc1c, Func Offset: 0xcc
	// Line 574, Address: 0x17cc24, Func Offset: 0xd4
	// Line 575, Address: 0x17cc2c, Func Offset: 0xdc
	// Func End, Address: 0x17cc3c, Func Offset: 0xec
}

// PickNextSoak__Fv
// Start address: 0x17cc40
uint32 PickNextSoak()
{
	uint32 nextsoak;
	int8* name;
	uint32 tag;
	int8 useme[5];
	uint32 sumtotal;
	int32 soakcnt;
	en_SOAK_DIR soakdir;
	int32 soakidx;
	int32 justwrap;
	// Line 405, Address: 0x17cc40, Func Offset: 0
	// Line 411, Address: 0x17cc50, Func Offset: 0x10
	// Line 415, Address: 0x17cc54, Func Offset: 0x14
	// Line 417, Address: 0x17cc9c, Func Offset: 0x5c
	// Line 424, Address: 0x17ccb0, Func Offset: 0x70
	// Line 428, Address: 0x17ccd8, Func Offset: 0x98
	// Line 430, Address: 0x17cce8, Func Offset: 0xa8
	// Line 428, Address: 0x17ccec, Func Offset: 0xac
	// Line 430, Address: 0x17ccf0, Func Offset: 0xb0
	// Line 432, Address: 0x17ccf4, Func Offset: 0xb4
	// Line 434, Address: 0x17cd04, Func Offset: 0xc4
	// Line 436, Address: 0x17cd18, Func Offset: 0xd8
	// Line 437, Address: 0x17cd1c, Func Offset: 0xdc
	// Line 440, Address: 0x17cd20, Func Offset: 0xe0
	// Line 445, Address: 0x17cd28, Func Offset: 0xe8
	// Line 447, Address: 0x17cd38, Func Offset: 0xf8
	// Line 445, Address: 0x17cd3c, Func Offset: 0xfc
	// Line 447, Address: 0x17cd40, Func Offset: 0x100
	// Line 449, Address: 0x17cd44, Func Offset: 0x104
	// Line 451, Address: 0x17cd50, Func Offset: 0x110
	// Line 454, Address: 0x17cd68, Func Offset: 0x128
	// Line 457, Address: 0x17cd6c, Func Offset: 0x12c
	// Line 460, Address: 0x17cd74, Func Offset: 0x134
	// Line 457, Address: 0x17cd78, Func Offset: 0x138
	// Line 465, Address: 0x17cd80, Func Offset: 0x140
	// Line 467, Address: 0x17cd98, Func Offset: 0x158
	// Line 469, Address: 0x17ce18, Func Offset: 0x1d8
	// Line 468, Address: 0x17ce20, Func Offset: 0x1e0
	// Line 469, Address: 0x17ce30, Func Offset: 0x1f0
	// Line 468, Address: 0x17ce34, Func Offset: 0x1f4
	// Line 469, Address: 0x17ce4c, Func Offset: 0x20c
	// Line 471, Address: 0x17ce54, Func Offset: 0x214
	// Line 475, Address: 0x17ce58, Func Offset: 0x218
	// Line 476, Address: 0x17ce7c, Func Offset: 0x23c
	// Line 478, Address: 0x17ce90, Func Offset: 0x250
	// Line 481, Address: 0x17ce9c, Func Offset: 0x25c
	// Line 478, Address: 0x17cea0, Func Offset: 0x260
	// Line 481, Address: 0x17ceb4, Func Offset: 0x274
	// Line 478, Address: 0x17ceb8, Func Offset: 0x278
	// Line 481, Address: 0x17cec0, Func Offset: 0x280
	// Line 485, Address: 0x17cec4, Func Offset: 0x284
	// Line 486, Address: 0x17cec8, Func Offset: 0x288
	// Func End, Address: 0x17cedc, Func Offset: 0x29c
}

