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
typedef s32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef u32(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_9)(xMemPool*, void*);
typedef s32(*type_10)(RxNodeDefinition*);
typedef u32(*type_11)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_13)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_15)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_16)(RxNodeDefinition*);
typedef void(*type_18)(xEnt*, xScene*, f32);
typedef u32(*type_20)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_22)(RwCamera*);
typedef s32(*type_23)(RxPipelineNode*);
typedef RwCamera*(*type_24)(RwCamera*);
typedef RwObjectHasFrame*(*type_27)(RwObjectHasFrame*);
typedef void(*type_31)(RxPipelineNode*);
typedef u32(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_36)(xAnimPlay*, xAnimState*);
typedef u32(*type_38)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_39)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_42)(RxPipelineNode*, RxPipeline*);
typedef void(*type_43)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpWorldSector*(*type_44)(RpWorldSector*);
typedef u32(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_48)(RxPipelineNode*, u32, u32, void*);
typedef u32(*type_52)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_53)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_59)(void*);
typedef xBase*(*type_63)(u32);
typedef s8*(*type_67)(xBase*);
typedef s8*(*type_72)(u32);
typedef u32(*type_76)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_78)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_79)(xEnt*, xScene*, f32);
typedef void(*type_84)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_85)(xEnt*, xVec3*);
typedef void(*type_86)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_87)(xEnt*);
typedef u32(*type_89)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_96)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_100)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_104)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_106)(xAnimPlay*, xAnimState*);
typedef s32(*type_109)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_111)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_116)(void*, void*);
typedef u32(*type_117)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_118)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_120)(RpClump*, void*);
typedef u32(*type_125)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_127)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_130)(u32, xAnimActiveEffect*, xAnimSingle*, void*);

typedef u8 type_0[2];
typedef s8 type_2[32];
typedef s8 type_3[32];
typedef f32 type_4[22];
typedef f32 type_7[22];
typedef u8 type_12[3];
typedef u32 type_14[15];
typedef u32 type_17[15];
typedef RxCluster type_19[1];
typedef f32 type_21[2];
typedef f32 type_25[4];
typedef u32 type_26[15];
typedef u8 type_28[3];
typedef u32 type_29[72];
typedef s8 type_30[4];
typedef analog_data type_32[2];
typedef RwTexCoords* type_33[8];
typedef xBase* type_34[72];
typedef s8 type_37[16];
typedef f32 type_40[4];
typedef s8 type_46[16];
typedef RwFrustumPlane type_47[6];
typedef xVec4 type_49[12];
typedef u16 type_50[2];
typedef u8 type_51[2];
typedef RwV3d type_54[8];
typedef u32 type_55[2];
typedef u8 type_56[2];
typedef f32 type_57[2];
typedef f32 type_58[6];
typedef f32 type_60[2];
typedef f32 type_61[3];
typedef xVec3 type_62[3];
typedef f32 type_64[12];
typedef f32 type_65[2];
typedef f32 type_66[3];
typedef f32 type_68[12];
typedef f32 type_69[2];
typedef xModelTag type_70[2];
typedef f32 type_71[3];
typedef f32 type_73[12];
typedef f32 type_74[12];
typedef RpLight* type_75[2];
typedef f32 type_77[12];
typedef RwFrame* type_80[2];
typedef f32 type_81[12];
typedef xEnt* type_82[111];
typedef f32 type_83[16];
typedef u8 type_88[4];
typedef u8 type_90[2];
typedef f32 type_91[2];
typedef u8 type_92[4];
typedef s8 type_93[128];
typedef type_93 type_94[6];
typedef u16 type_95[4];
typedef u16 type_97[2];
typedef f32 type_98[4];
typedef u16 type_99[2];
typedef u8 type_101[14];
typedef xModelTag type_102[4];
typedef s8 type_103[32];
typedef u16 type_105[3];
typedef xModelInstance* type_107[14];
typedef xVec3 type_108[4];
typedef u8 type_110[2];
typedef xAnimMultiFileEntry type_112[1];
typedef u8 type_113[4];
typedef xBox type_114[2];
typedef u32 type_115[4];
typedef u8 type_119[22];
typedef u8 type_121[22];
typedef xCollis type_122[18];
typedef RwTexCoords* type_123[8];
typedef xVec3 type_124[5];
typedef u8 type_126[5];
typedef u16 type_128[3];
typedef xVec3 type_129[60];

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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_75 light;
	type_80 light_frame;
	s32 memlvl;
};

struct xEntMotionSplineData
{
	s32 unknown;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_5 destroyNotify;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_25 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_53 eventFunc;
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
	u32 status;
	teleport_asset* tasset;
	zEnt* target;
	u32 currPlrState;
	u32 prevPlrState;
	u32 jumpInAnim;
	u32 jumpOutAnim;
	u32 JOtoOpenAnim;
	u32 JItoOpenAnim;
	type_114 trig;
	u32 currPlayerIn;
	u32 prevPlayerIn;
	u32 currPlayerNear;
	u32 prevPlayerNear;
	f32 lastdt;
	f32 plrCtrlTimer;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_15 Conditional;
	type_15 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	u16 NumSingle;
	u16 BoneCount;
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
	type_33 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
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
	type_67 base2Name;
	type_72 id2Name;
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
	type_110 NumAnims;
	void** RawData;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_91 BilinearLerp;
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

struct teleport_asset : xDynAsset
{
	u32 marker;
	u32 opened;
	u32 launchAngle;
	u32 camAngle;
	u32 targetID;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_19 clusters;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_89 Callback;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	type_36 BeforeEnter;
	type_41 StateCallback;
	type_43 BeforeAnimMatrices;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_40 wt;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	u32 last_index;
	s32 flg_group;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_27 sync;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	type_70 BubbleWandTag;
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
	type_102 HangPawTag;
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
	type_14 Inv_PatsSock;
	type_17 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_26 Inv_LevelPickups;
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
	type_55 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_82 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_101 sb_model_indices;
	type_107 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xJSPHeader
{
	type_30 idtag;
	u32 version;
	u32 jspNodeCount;
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
	s16 refCount;
	s16 pad;
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
	s16 matIndex;
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
	type_28 pad;
	void* moprops;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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
	u32 filterAddressing;
	s32 refCount;
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

struct RwTexCoords
{
	f32 u;
	f32 v;
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

struct RpSector
{
	s32 type;
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
	type_113 talk_filter;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_47 frustumPlanes;
	RwBBox frustumBoundBox;
	type_54 frustumCorners;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpWorldSector
{
	s32 type;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_116 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xQuat
{
	xVec3 v;
	f32 s;
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
	u32 mode;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_115 pad;
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
	type_29 baseCount;
	type_34 baseList;
	_zEnv* zen;
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

struct xVec2
{
	f32 x;
	f32 y;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zPlatFMRunTime
{
	u32 flags;
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
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
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
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
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
	u32 type;
	RwRGBAReal color;
	type_83 matrix;
	f32 radius;
	f32 angle;
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
	s32 unknown;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_94 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_103 sceneStart;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct zAssetPickupTable
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
	type_108 corner;
};

struct st_SERIAL_CLIENTINFO
{
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
	type_122 colls;
	type_84 post;
	type_96 depenq;
};

struct _tagxPad
{
	type_119 value;
	type_121 last_value;
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
	type_4 up_tmr;
	type_7 down_tmr;
	type_32 analog;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_90 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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

struct xFFX
{
};

struct xCoef
{
	type_98 a;
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
	u32 uiFlags;
	type_50 dim;
	u32 textureID;
	type_57 uva;
	type_60 uvb;
	type_65 uvc;
	type_69 uvd;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _tagiPad
{
	s32 port;
};

struct RpPolygon
{
	u16 matIndex;
	type_105 vertIndex;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_0 pad;
	f32 delay;
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
	s32 numMaterials;
	s32 space;
};

struct zUIFontAsset : zUIAsset
{
	u16 uiFontFlags;
	u8 mode;
	u8 fontID;
	u32 textAssetID;
	type_88 bcolor;
	type_92 color;
	type_95 inset;
	type_97 space;
	type_99 cdim;
	u32 max_height;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	u16 uiFontFlags;
	u16 uiFontHackFlags;
	u32 text_id;
	f32 yscroll;
	u32 text_index;
	s8* text;
};

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
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
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_21 radius;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	u32 reserved;
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
	type_56 InitialPowerUp;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_9 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_129 tranTable;
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
	u32 uiFlags;
	u32 uiButton;
	u16 preUpdateIndex;
	u16 updateIndex;
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

type_37 buffer;
type_46 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
s32 sPlayerIn;
u32 sPlayerNear;
zUIFont* sTeleportUI;
f32 sTeleportCamPitch;
f32 fudgex;
f32 fudgez;
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
u32 gActiveHeap;

s32 zEntTeleportBoxEventCB(xBase* to, u32 toEvent);
s32 zEntTeleportBox_playerIn();
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, f32 dt);
void zEntTeleportBox_Setup(_zEntTeleportBox* ent);
void zEntTeleportBox_InitAll();
void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset);
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset);
u32 JumpOutEffectJOAnimCB(void* object);
u32 JumpOutEffectPlrEjectCB(void* object);
u32 JumpOutEffectPlrVisibleCB();
u32 CtoOEffectTboxEnableCB(void* object);
u32 JumpInEffectJIAnimCB(void* object);
u32 JumpInEffectPlrTeleportCB(void* object);
u32 JumpInEffectPlrInvisibleCB();
u32 CtoOCB(void* object);
u32 CtoOCheck(void* object);
u32 JOtoOCB(void* object);
u32 JOtoOCheck(void* object);
u32 JItoOCB(void* object);
u32 JItoOCheck(void* object);
u32 JumpOutCB(void* object);
u32 JumpOutCheck(void* object);
u32 JumpInCB(void* object);
u32 JumpInCheck(void* object);
u32 OpenCheck(void* object);

// zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x317f00
s32 zEntTeleportBoxEventCB(xBase* to, u32 toEvent)
{
	_zEntTeleportBox* s;
}

// zEntTeleportBox_playerIn__Fv
// Start address: 0x318020
s32 zEntTeleportBox_playerIn()
{
}

// zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x318030
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s)
{
	s32 open;
}

// zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x3180b0
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s)
{
}

// zEntTeleportBox_Update__FP4xEntP6xScenef
// Start address: 0x318120
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, f32 dt)
{
	_zEntTeleportBox* ent;
	_zEntTeleportBox* target;
	f32 dx__;
	f32 dy__;
	f32 dz__;
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
	u32 size;
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
u32 JumpOutEffectJOAnimCB(void* object)
{
}

// JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319550
u32 JumpOutEffectPlrEjectCB(void* object)
{
	_zEntTeleportBox* tbox;
	xVec3 tmp;
}

// JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195c0
u32 JumpOutEffectPlrVisibleCB()
{
}

// CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195f0
u32 CtoOEffectTboxEnableCB(void* object)
{
	_zEntTeleportBox* tbox;
}

// JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319610
u32 JumpInEffectJIAnimCB(void* object)
{
}

// JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319620
u32 JumpInEffectPlrTeleportCB(void* object)
{
}

// JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319630
u32 JumpInEffectPlrInvisibleCB()
{
}

// CtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319660
u32 CtoOCB(void* object)
{
	xVec3 tmp;
}

// CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319700
u32 CtoOCheck(void* object)
{
	zEnt* player;
	f32 dx__;
	f32 dy__;
	f32 dz__;
}

// JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319770
u32 JOtoOCB(void* object)
{
}

// JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319780
u32 JOtoOCheck(void* object)
{
}

// JItoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319790
u32 JItoOCB(void* object)
{
	_zEntTeleportBox* tbox;
}

// JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197a0
u32 JItoOCheck(void* object)
{
}

// JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197b0
u32 JumpOutCB(void* object)
{
}

// JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197c0
u32 JumpOutCheck(void* object)
{
}

// JumpInCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197d0
u32 JumpInCB(void* object)
{
}

// JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197e0
u32 JumpInCheck(void* object)
{
}

// OpenCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197f0
u32 OpenCheck(void* object)
{
}

