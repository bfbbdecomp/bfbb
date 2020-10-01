typedef struct xEntMechData;
typedef struct RpMeshHeader;
typedef struct RxPipelineNode;
typedef struct xGridBound;
typedef struct iEnv;
typedef struct xEntMotionSplineData;
typedef struct RxPipeline;
typedef struct xEnt;
typedef struct xModelPool;
typedef struct RxCluster;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xSpline3;
typedef enum _tagRumbleType;
typedef struct _zEntTeleportBox;
typedef struct xLightKit;
typedef struct xAnimTransition;
typedef enum _zPlayerType;
typedef struct RxPipelineNodeParam;
typedef struct xAnimPlay;
typedef struct RwFrame;
typedef struct RpGeometry;
typedef struct xUpdateCullGroup;
typedef struct xScene;
typedef struct xAnimFile;
typedef struct zEnt;
typedef struct xJSPNodeInfo;
typedef struct xAnimSingle;
typedef struct teleport_asset;
typedef struct RpAtomic;
typedef struct RxPacket;
typedef struct xAnimActiveEffect;
typedef struct xAnimEffect;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct analog_data;
typedef struct RpClump;
typedef struct xAnimTransitionList;
typedef struct xPortalAsset;
typedef struct xModelTag;
typedef struct RxPipelineRequiresCluster;
typedef struct xVec3;
typedef enum RwFogType;
typedef struct xGroup;
typedef struct xEntMotionMPData;
typedef struct RwRGBAReal;
typedef struct xEntERData;
typedef struct RwObjectHasFrame;
typedef struct xClumpCollBSPBranchNode;
typedef struct RwLinkList;
typedef enum RpWorldRenderOrder;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xJSPHeader;
typedef struct RpMaterial;
typedef struct xCoef3;
typedef struct RpTriangle;
typedef struct xSurface;
typedef struct RwRGBA;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct xUpdateCullMgr;
typedef struct RwTexture;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RwTexCoords;
typedef struct xEntAsset;
typedef struct zPlayerCarryInfo;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xAnimMultiFile;
typedef struct xCamera;
typedef struct _zEnv;
typedef struct zPlayerSettings;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntDrive;
typedef struct xEntMotionMechData;
typedef struct RwCamera;
typedef struct xClumpCollBSPTree;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xMat4x3;
typedef struct xModelInstance;
typedef struct xEntPenData;
typedef struct xUpdateCullEnt;
typedef struct xEnvAsset;
typedef struct RxHeap;
typedef struct xAnimTable;
typedef struct RwBBox;
typedef struct RpLight;
typedef struct xQuat;
typedef struct RpWorld;
typedef struct xEntFrame;
typedef struct _zPortal;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct zScene;
typedef struct xEntOrbitData;
typedef struct iFogParams;
typedef struct xVec2;
typedef struct xDynAsset;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct zJumpParam;
typedef struct xEnv;
typedef struct zPlatFMRunTime;
typedef struct xEntMotion;
typedef struct xShadowSimplePoly;
typedef struct xMarkerAsset;
typedef struct zEntHangable;
typedef struct xPlatformAsset;
typedef struct RwMatrixTag;
typedef struct xEntMotionAsset;
typedef struct xMovePointAsset;
typedef struct RwLLLink;
typedef struct zPlatform;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_0;
typedef struct rxReq;
typedef enum _tagPadState;
typedef struct zCutsceneMgr;
typedef struct basic_rect;
typedef struct tri_data_1;
typedef struct xEntBoulder;
typedef struct _class_0;
typedef struct xLightKitLight;
typedef enum RxClusterValidityReq;
typedef struct xEntSplineData;
typedef struct xGlobals;
typedef struct RpVertexNormal;
typedef struct xCollis;
typedef struct zAssetPickupTable;
typedef struct xShadowSimpleCache;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xEntCollis;
typedef struct _tagxPad;
typedef struct xEntMotionPenData;
typedef enum RxNodeDefEditable;
typedef struct RpInterpolator;
typedef enum RxClusterValid;
typedef struct xAnimMultiFileBase;
typedef struct xRot;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xEntMPData;
typedef struct xFFX;
typedef struct xCoef;
typedef struct xQCData;
typedef enum rxEmbeddedPacketState;
typedef struct zUIAsset;
typedef struct xSphere;
typedef struct _class_1;
typedef struct xBaseAsset;
typedef struct _tagiPad;
typedef struct RpPolygon;
typedef struct xMovePoint;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct zUIFontAsset;
typedef struct xCylinder;
typedef struct xEntMotionERData;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct zUIFont;
typedef struct xSerial;
typedef struct zLasso;
typedef struct xBBox;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntShadow;
typedef struct xClumpCollBSPTriangle;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct zGlobals;
typedef struct RxClusterRef;
typedef struct zGlobalSettings;
typedef struct RwObject;
typedef struct xEntMotionOrbitData;
typedef struct RxIoSpec;
typedef struct zPlayerLassoInfo;
typedef union _class_2;
typedef struct xMemPool;
typedef struct zLedgeGrabParams;
typedef struct RxNodeMethods;
typedef struct _zUI;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrustumPlane;
typedef struct RwPlane;

typedef RpAtomic*(*type_1)(RpAtomic*);
typedef void(*type_5)(RwResEntry*);
typedef int32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_9)(xMemPool*, void*);
typedef int32(*type_10)(RxNodeDefinition*);
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_13)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_15)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_16)(RxNodeDefinition*);
typedef void(*type_18)(xEnt*, xScene*, float32);
typedef uint32(*type_20)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_22)(RwCamera*);
typedef int32(*type_23)(RxPipelineNode*);
typedef RwCamera*(*type_24)(RwCamera*);
typedef RwObjectHasFrame*(*type_27)(RwObjectHasFrame*);
typedef void(*type_31)(RxPipelineNode*);
typedef uint32(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_36)(xAnimPlay*, xAnimState*);
typedef uint32(*type_38)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_39)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_42)(RxPipelineNode*, RxPipeline*);
typedef void(*type_43)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_44)(RpWorldSector*);
typedef uint32(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_48)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_52)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_53)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_59)(void*);
typedef xBase*(*type_63)(uint32);
typedef int8*(*type_67)(xBase*);
typedef int8*(*type_72)(uint32);
typedef uint32(*type_76)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_78)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_79)(xEnt*, xScene*, float32);
typedef void(*type_84)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_85)(xEnt*, xVec3*);
typedef void(*type_86)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_87)(xEnt*);
typedef uint32(*type_89)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_96)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_100)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_104)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_106)(xAnimPlay*, xAnimState*);
typedef int32(*type_109)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_111)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_116)(void*, void*);
typedef uint32(*type_117)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_118)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_120)(RpClump*, void*);
typedef uint32(*type_125)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_127)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_130)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);

typedef uint8 type_0[2];
typedef int8 type_2[32];
typedef int8 type_3[32];
typedef float32 type_4[22];
typedef float32 type_7[22];
typedef uint8 type_12[3];
typedef uint32 type_14[15];
typedef uint32 type_17[15];
typedef RxCluster type_19[1];
typedef float32 type_21[2];
typedef float32 type_25[4];
typedef uint32 type_26[15];
typedef uint8 type_28[3];
typedef uint32 type_29[72];
typedef int8 type_30[4];
typedef analog_data type_32[2];
typedef RwTexCoords* type_33[8];
typedef xBase* type_34[72];
typedef int8 type_37[16];
typedef float32 type_40[4];
typedef int8 type_46[16];
typedef RwFrustumPlane type_47[6];
typedef xVec4 type_49[12];
typedef uint16 type_50[2];
typedef uint8 type_51[2];
typedef RwV3d type_54[8];
typedef uint32 type_55[2];
typedef uint8 type_56[2];
typedef float32 type_57[2];
typedef float32 type_58[6];
typedef float32 type_60[2];
typedef float32 type_61[3];
typedef xVec3 type_62[3];
typedef float32 type_64[12];
typedef float32 type_65[2];
typedef float32 type_66[3];
typedef float32 type_68[12];
typedef float32 type_69[2];
typedef xModelTag type_70[2];
typedef float32 type_71[3];
typedef float32 type_73[12];
typedef float32 type_74[12];
typedef RpLight* type_75[2];
typedef float32 type_77[12];
typedef RwFrame* type_80[2];
typedef float32 type_81[12];
typedef xEnt* type_82[111];
typedef float32 type_83[16];
typedef uint8 type_88[4];
typedef uint8 type_90[2];
typedef float32 type_91[2];
typedef uint8 type_92[4];
typedef int8 type_93[128];
typedef type_93 type_94[6];
typedef uint16 type_95[4];
typedef uint16 type_97[2];
typedef float32 type_98[4];
typedef uint16 type_99[2];
typedef uint8 type_101[14];
typedef xModelTag type_102[4];
typedef int8 type_103[32];
typedef uint16 type_105[3];
typedef xModelInstance* type_107[14];
typedef xVec3 type_108[4];
typedef uint8 type_110[2];
typedef xAnimMultiFileEntry type_112[1];
typedef uint8 type_113[4];
typedef xBox type_114[2];
typedef uint32 type_115[4];
typedef uint8 type_119[22];
typedef uint8 type_121[22];
typedef xCollis type_122[18];
typedef RwTexCoords* type_123[8];
typedef xVec3 type_124[5];
typedef uint8 type_126[5];
typedef uint16 type_128[3];
typedef xVec3 type_129[60];

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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_75 light;
	type_80 light_frame;
	int32 memlvl;
};

struct xEntMotionSplineData
{
	int32 unknown;
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
	type_79 update;
	type_79 endUpdate;
	type_85 bupdate;
	type_86 move;
	type_87 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_100 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_5 destroyNotify;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_25 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_53 eventFunc;
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

struct _zEntTeleportBox : zEnt
{
	uint32 status;
	teleport_asset* tasset;
	zEnt* target;
	uint32 currPlrState;
	uint32 prevPlrState;
	uint32 jumpInAnim;
	uint32 jumpOutAnim;
	uint32 JOtoOpenAnim;
	uint32 JItoOpenAnim;
	type_114 trig;
	uint32 currPlayerIn;
	uint32 prevPlayerIn;
	uint32 currPlayerNear;
	uint32 prevPlayerNear;
	float32 lastdt;
	float32 plrCtrlTimer;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_15 Conditional;
	type_15 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_43 BeforeAnimMatrices;
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
	type_33 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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
	type_67 base2Name;
	type_72 id2Name;
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
	type_110 NumAnims;
	void** RawData;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_91 BilinearLerp;
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

struct teleport_asset : xDynAsset
{
	uint32 marker;
	uint32 opened;
	uint32 launchAngle;
	uint32 camAngle;
	uint32 targetID;
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
	type_1 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_19 clusters;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_89 Callback;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_36 BeforeEnter;
	type_41 StateCallback;
	type_43 BeforeAnimMatrices;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_120 callback;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_40 wt;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_27 sync;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_70 BubbleWandTag;
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
	type_102 HangPawTag;
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
	type_14 Inv_PatsSock;
	type_17 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_26 Inv_LevelPickups;
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
	type_55 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_82 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_101 sb_model_indices;
	type_107 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xJSPHeader
{
	type_30 idtag;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpTriangle
{
	type_128 vertIndex;
	int16 matIndex;
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
	type_28 pad;
	void* moprops;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_59 activateCB;
	type_59 deactivateCB;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_2 name;
	type_3 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RpSector
{
	int32 type;
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
	type_112 Files;
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
	type_49 frustplane;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_58 MoveSpeed;
	type_61 AnimSneak;
	type_66 AnimWalk;
	type_71 AnimRun;
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
	type_113 talk_filter;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_22 beginUpdate;
	type_24 endUpdate;
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
	type_47 frustumPlanes;
	RwBBox frustumBoundBox;
	type_54 frustumCorners;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_123 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_116 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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
	type_44 renderCallBack;
	RxPipeline* pipeline;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_115 pad;
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
	type_29 baseCount;
	type_34 baseList;
	_zEnv* zen;
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_12 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_64 tmrs;
	type_68 ttms;
	type_73 atms;
	type_74 dtms;
	type_77 vms;
	type_81 dss;
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

struct xShadowSimplePoly
{
	type_62 vert;
	xVec3 norm;
};

struct xMarkerAsset
{
	xVec3 pos;
};

struct zEntHangable
{
};

struct xPlatformAsset
{
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct rxReq
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

struct zCutsceneMgr
{
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xEntBoulder
{
};

struct _class_0
{
	xVec3* verts;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_83 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntSplineData
{
	int32 unknown;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_94 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_103 sceneStart;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct zAssetPickupTable
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
	type_108 corner;
};

struct st_SERIAL_CLIENTINFO
{
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
	type_122 colls;
	type_84 post;
	type_96 depenq;
};

struct _tagxPad
{
	type_119 value;
	type_121 last_value;
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
	type_4 up_tmr;
	type_7 down_tmr;
	type_32 analog;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_90 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct xFFX
{
};

struct xCoef
{
	type_98 a;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct zUIAsset : xEntAsset
{
	uint32 uiFlags;
	type_50 dim;
	uint32 textureID;
	type_57 uva;
	type_60 uvb;
	type_65 uvc;
	type_69 uvd;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagiPad
{
	int32 port;
};

struct RpPolygon
{
	uint16 matIndex;
	type_105 vertIndex;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_0 pad;
	float32 delay;
	xSpline3* spl;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zUIFontAsset : zUIAsset
{
	uint16 uiFontFlags;
	uint8 mode;
	uint8 fontID;
	uint32 textAssetID;
	type_88 bcolor;
	type_92 color;
	type_95 inset;
	type_97 space;
	type_99 cdim;
	uint32 max_height;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	uint16 uiFontFlags;
	uint16 uiFontHackFlags;
	uint32 text_id;
	float32 yscroll;
	uint32 text_index;
	int8* text;
};

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
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
	type_124 lastRefs;
	type_126 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_21 radius;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct anim_coll_data
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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
	type_56 InitialPowerUp;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_9 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_129 tranTable;
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

struct RxNodeMethods
{
	type_6 nodeBody;
	type_10 nodeInit;
	type_16 nodeTerm;
	type_23 pipelineNodeInit;
	type_31 pipelineNodeTerm;
	type_42 pipelineNodeConfig;
	type_48 configMsgHandler;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
	uint16 preUpdateIndex;
	uint16 updateIndex;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

type_37 buffer;
type_46 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
int32 sPlayerIn;
uint32 sPlayerNear;
zUIFont* sTeleportUI;
float32 sTeleportCamPitch;
float32 fudgex;
float32 fudgez;
zGlobals globals;
xMat4x3 g_I3;
type_118 CtoOEffectTboxEnableCB;
type_11 JumpOutEffectJOAnimCB;
type_130 JumpOutEffectPlrEjectCB;
type_78 JumpOutEffectPlrVisibleCB;
type_39 JumpInEffectJIAnimCB;
type_104 JumpInEffectPlrTeleportCB;
type_38 JumpInEffectPlrInvisibleCB;
type_13 CtoOCB;
type_20 CtoOCheck;
type_45 JOtoOCB;
type_111 JOtoOCheck;
type_8 JItoOCB;
type_76 JItoOCheck;
type_117 JumpInCB;
type_35 JumpInCheck;
type_125 JumpOutCB;
type_52 JumpOutCheck;
type_127 OpenCheck;
type_106 xAnimDefaultBeforeEnter;
type_109 zEntTeleportBoxEventCB;
type_18 zEntTeleportBox_Update;
uint32 gActiveHeap;

int32 zEntTeleportBoxEventCB(xBase* to, uint32 toEvent);
int32 zEntTeleportBox_playerIn();
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, float32 dt);
void zEntTeleportBox_Setup(_zEntTeleportBox* ent);
void zEntTeleportBox_InitAll();
void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset);
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset);
uint32 JumpOutEffectJOAnimCB(void* object);
uint32 JumpOutEffectPlrEjectCB(void* object);
uint32 JumpOutEffectPlrVisibleCB();
uint32 CtoOEffectTboxEnableCB(void* object);
uint32 JumpInEffectJIAnimCB(void* object);
uint32 JumpInEffectPlrTeleportCB(void* object);
uint32 JumpInEffectPlrInvisibleCB();
uint32 CtoOCB(void* object);
uint32 CtoOCheck(void* object);
uint32 JOtoOCB(void* object);
uint32 JOtoOCheck(void* object);
uint32 JItoOCB(void* object);
uint32 JItoOCheck(void* object);
uint32 JumpOutCB(void* object);
uint32 JumpOutCheck(void* object);
uint32 JumpInCB(void* object);
uint32 JumpInCheck(void* object);
uint32 OpenCheck(void* object);

// zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x317f00
int32 zEntTeleportBoxEventCB(xBase* to, uint32 toEvent)
{
	_zEntTeleportBox* s;
}

// zEntTeleportBox_playerIn__Fv
// Start address: 0x318020
int32 zEntTeleportBox_playerIn()
{
}

// zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x318030
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s)
{
	int32 open;
}

// zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x3180b0
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s)
{
}

// zEntTeleportBox_Update__FP4xEntP6xScenef
// Start address: 0x318120
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, float32 dt)
{
	_zEntTeleportBox* ent;
	_zEntTeleportBox* target;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	xVec3 playerMid;
	xMat4x3& mat;
	xVec3 ypr;
	xVec3 dir;
}

// zEntTeleportBox_Setup__FP16_zEntTeleportBox
// Start address: 0x3188f0
void zEntTeleportBox_Setup(_zEntTeleportBox* ent)
{
	_zEntTeleportBox* target;
	xBox wbox;
}

// zEntTeleportBox_InitAll__Fv
// Start address: 0x318b50
void zEntTeleportBox_InitAll()
{
}

// zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset
// Start address: 0x318b60
void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset)
{
	xEntAsset* easset;
	uint32 size;
	xMarkerAsset* marker;
	xAnimTable* table;
	xAnimState* state;
	void* buf;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
}

// zEntTeleportBox_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x319530
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset)
{
}

// JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319540
uint32 JumpOutEffectJOAnimCB(void* object)
{
}

// JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319550
uint32 JumpOutEffectPlrEjectCB(void* object)
{
	_zEntTeleportBox* tbox;
	xVec3 tmp;
}

// JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195c0
uint32 JumpOutEffectPlrVisibleCB()
{
}

// CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195f0
uint32 CtoOEffectTboxEnableCB(void* object)
{
	_zEntTeleportBox* tbox;
}

// JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319610
uint32 JumpInEffectJIAnimCB(void* object)
{
}

// JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319620
uint32 JumpInEffectPlrTeleportCB(void* object)
{
}

// JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319630
uint32 JumpInEffectPlrInvisibleCB()
{
}

// CtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319660
uint32 CtoOCB(void* object)
{
	xVec3 tmp;
}

// CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319700
uint32 CtoOCheck(void* object)
{
	zEnt* player;
	float32 dx__;
	float32 dy__;
	float32 dz__;
}

// JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319770
uint32 JOtoOCB(void* object)
{
}

// JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319780
uint32 JOtoOCheck(void* object)
{
}

// JItoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319790
uint32 JItoOCB(void* object)
{
	_zEntTeleportBox* tbox;
}

// JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197a0
uint32 JItoOCheck(void* object)
{
}

// JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197b0
uint32 JumpOutCB(void* object)
{
}

// JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197c0
uint32 JumpOutCheck(void* object)
{
}

// JumpInCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197d0
uint32 JumpInCB(void* object)
{
}

// JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197e0
uint32 JumpInCheck(void* object)
{
}

// OpenCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197f0
uint32 OpenCheck(void* object)
{
}

