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
typedef struct _class_2;
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
typedef int8 type_94[128][6];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	void(*destroyNotify)(RwResEntry*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	xBox trig[2];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RwTexCoords* texCoords[8];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	RxCluster clusters[1];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RpClump*(*callback)(RpClump*, void*);
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
	float32 wt[4];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xJSPHeader
{
	int8 idtag[4];
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
	uint16 vertIndex[3];
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
	uint8 pad[3];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	xAnimMultiFileEntry Files[1];
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	uint32(*cb)(void*, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	uint32 pad[4];
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
	uint8 pad[3];
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
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
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
	xVec3 vert[3];
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
	float32 matrix[16];
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	float32 a[4];
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
	uint16 dim[2];
	uint32 textureID;
	float32 uva[2];
	float32 uvb[2];
	float32 uvc[2];
	float32 uvd[2];
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
	uint16 vertIndex[3];
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
	uint8 bcolor[4];
	uint8 color[4];
	uint16 inset[4];
	uint16 space[2];
	uint16 cdim[2];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	float32 radius[2];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

int8 buffer[16];
int8 buffer[16];
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
uint32(*CtoOEffectTboxEnableCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*JumpOutEffectJOAnimCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*JumpOutEffectPlrEjectCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*JumpOutEffectPlrVisibleCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*JumpInEffectJIAnimCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*JumpInEffectPlrTeleportCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*JumpInEffectPlrInvisibleCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*CtoOCB)(xAnimTransition*, xAnimSingle*, void*);
uint32(*CtoOCheck)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JOtoOCB)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JOtoOCheck)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JItoOCB)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JItoOCheck)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JumpInCB)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JumpInCheck)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JumpOutCB)(xAnimTransition*, xAnimSingle*, void*);
uint32(*JumpOutCheck)(xAnimTransition*, xAnimSingle*, void*);
uint32(*OpenCheck)(xAnimTransition*, xAnimSingle*, void*);
void(*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*);
int32(*zEntTeleportBoxEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntTeleportBox_Update)(xEnt*, xScene*, float32);
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
	// Line 1051, Address: 0x317f00, Func Offset: 0
	// Line 1054, Address: 0x317f6c, Func Offset: 0x6c
	// Line 1055, Address: 0x317f70, Func Offset: 0x70
	// Line 1056, Address: 0x317f78, Func Offset: 0x78
	// Line 1059, Address: 0x317f80, Func Offset: 0x80
	// Line 1060, Address: 0x317f88, Func Offset: 0x88
	// Line 1062, Address: 0x317f90, Func Offset: 0x90
	// Line 1063, Address: 0x317f98, Func Offset: 0x98
	// Line 1065, Address: 0x317fa0, Func Offset: 0xa0
	// Line 1066, Address: 0x317fa8, Func Offset: 0xa8
	// Line 1068, Address: 0x317fb0, Func Offset: 0xb0
	// Line 1069, Address: 0x317fbc, Func Offset: 0xbc
	// Line 1070, Address: 0x317fc4, Func Offset: 0xc4
	// Line 1071, Address: 0x317fcc, Func Offset: 0xcc
	// Line 1072, Address: 0x317fd0, Func Offset: 0xd0
	// Line 1073, Address: 0x317fdc, Func Offset: 0xdc
	// Line 1074, Address: 0x317fe4, Func Offset: 0xe4
	// Line 1075, Address: 0x317fec, Func Offset: 0xec
	// Line 1076, Address: 0x317ff0, Func Offset: 0xf0
	// Line 1077, Address: 0x318000, Func Offset: 0x100
	// Line 1079, Address: 0x318008, Func Offset: 0x108
	// Line 1088, Address: 0x318018, Func Offset: 0x118
	// Func End, Address: 0x318020, Func Offset: 0x120
}

// zEntTeleportBox_playerIn__Fv
// Start address: 0x318020
int32 zEntTeleportBox_playerIn()
{
	// Line 1028, Address: 0x318020, Func Offset: 0
	// Func End, Address: 0x318028, Func Offset: 0x8
}

// zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x318030
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s)
{
	int32 open;
	// Line 957, Address: 0x318030, Func Offset: 0
	// Line 958, Address: 0x318044, Func Offset: 0x14
	// Line 966, Address: 0x31804c, Func Offset: 0x1c
	// Line 967, Address: 0x31805c, Func Offset: 0x2c
	// Line 968, Address: 0x318068, Func Offset: 0x38
	// Line 970, Address: 0x318080, Func Offset: 0x50
	// Line 972, Address: 0x318090, Func Offset: 0x60
	// Line 973, Address: 0x31809c, Func Offset: 0x6c
	// Func End, Address: 0x3180b0, Func Offset: 0x80
}

// zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x3180b0
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s)
{
	// Line 931, Address: 0x3180b0, Func Offset: 0
	// Line 932, Address: 0x3180c4, Func Offset: 0x14
	// Line 938, Address: 0x3180cc, Func Offset: 0x1c
	// Line 939, Address: 0x3180d8, Func Offset: 0x28
	// Line 941, Address: 0x3180e8, Func Offset: 0x38
	// Line 943, Address: 0x3180f8, Func Offset: 0x48
	// Line 944, Address: 0x318104, Func Offset: 0x54
	// Func End, Address: 0x318118, Func Offset: 0x68
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
	// Line 653, Address: 0x318120, Func Offset: 0
	// Line 654, Address: 0x318130, Func Offset: 0x10
	// Line 653, Address: 0x318134, Func Offset: 0x14
	// Line 655, Address: 0x318140, Func Offset: 0x20
	// Line 659, Address: 0x318144, Func Offset: 0x24
	// Line 663, Address: 0x318150, Func Offset: 0x30
	// Line 664, Address: 0x318154, Func Offset: 0x34
	// Line 663, Address: 0x318158, Func Offset: 0x38
	// Line 664, Address: 0x31815c, Func Offset: 0x3c
	// Line 659, Address: 0x318164, Func Offset: 0x44
	// Line 663, Address: 0x318168, Func Offset: 0x48
	// Line 664, Address: 0x318190, Func Offset: 0x70
	// Line 665, Address: 0x3181ac, Func Offset: 0x8c
	// Line 667, Address: 0x3181b8, Func Offset: 0x98
	// Line 669, Address: 0x3181c4, Func Offset: 0xa4
	// Line 671, Address: 0x3181d0, Func Offset: 0xb0
	// Line 674, Address: 0x3181d8, Func Offset: 0xb8
	// Line 678, Address: 0x3181e0, Func Offset: 0xc0
	// Line 680, Address: 0x3181f4, Func Offset: 0xd4
	// Line 681, Address: 0x3181f8, Func Offset: 0xd8
	// Line 684, Address: 0x318200, Func Offset: 0xe0
	// Line 687, Address: 0x31820c, Func Offset: 0xec
	// Line 689, Address: 0x31821c, Func Offset: 0xfc
	// Line 690, Address: 0x318238, Func Offset: 0x118
	// Line 692, Address: 0x318244, Func Offset: 0x124
	// Line 696, Address: 0x318250, Func Offset: 0x130
	// Line 697, Address: 0x31826c, Func Offset: 0x14c
	// Line 698, Address: 0x31827c, Func Offset: 0x15c
	// Line 708, Address: 0x318288, Func Offset: 0x168
	// Line 709, Address: 0x318290, Func Offset: 0x170
	// Line 708, Address: 0x318298, Func Offset: 0x178
	// Line 710, Address: 0x31829c, Func Offset: 0x17c
	// Line 708, Address: 0x3182a4, Func Offset: 0x184
	// Line 709, Address: 0x3182c0, Func Offset: 0x1a0
	// Line 710, Address: 0x3182c8, Func Offset: 0x1a8
	// Line 715, Address: 0x318320, Func Offset: 0x200
	// Line 726, Address: 0x318388, Func Offset: 0x268
	// Line 727, Address: 0x31838c, Func Offset: 0x26c
	// Line 731, Address: 0x318390, Func Offset: 0x270
	// Line 732, Address: 0x318394, Func Offset: 0x274
	// Line 735, Address: 0x3183a0, Func Offset: 0x280
	// Line 737, Address: 0x3183a4, Func Offset: 0x284
	// Line 738, Address: 0x3183b4, Func Offset: 0x294
	// Line 743, Address: 0x3183bc, Func Offset: 0x29c
	// Line 745, Address: 0x3183c8, Func Offset: 0x2a8
	// Line 746, Address: 0x3183d0, Func Offset: 0x2b0
	// Line 748, Address: 0x3183d8, Func Offset: 0x2b8
	// Line 750, Address: 0x3183dc, Func Offset: 0x2bc
	// Line 751, Address: 0x3183e0, Func Offset: 0x2c0
	// Line 753, Address: 0x3183e4, Func Offset: 0x2c4
	// Line 751, Address: 0x3183e8, Func Offset: 0x2c8
	// Line 753, Address: 0x3183ec, Func Offset: 0x2cc
	// Line 756, Address: 0x3183f8, Func Offset: 0x2d8
	// Line 757, Address: 0x31840c, Func Offset: 0x2ec
	// Line 756, Address: 0x318410, Func Offset: 0x2f0
	// Line 759, Address: 0x318414, Func Offset: 0x2f4
	// Line 761, Address: 0x318420, Func Offset: 0x300
	// Line 768, Address: 0x318458, Func Offset: 0x338
	// Line 769, Address: 0x31845c, Func Offset: 0x33c
	// Line 768, Address: 0x318460, Func Offset: 0x340
	// Line 769, Address: 0x318464, Func Offset: 0x344
	// Line 773, Address: 0x31846c, Func Offset: 0x34c
	// Line 778, Address: 0x318470, Func Offset: 0x350
	// Line 773, Address: 0x318474, Func Offset: 0x354
	// Line 778, Address: 0x318478, Func Offset: 0x358
	// Line 773, Address: 0x31847c, Func Offset: 0x35c
	// Line 774, Address: 0x318480, Func Offset: 0x360
	// Line 775, Address: 0x31848c, Func Offset: 0x36c
	// Line 778, Address: 0x318494, Func Offset: 0x374
	// Line 788, Address: 0x3184e0, Func Offset: 0x3c0
	// Line 790, Address: 0x3184e8, Func Offset: 0x3c8
	// Line 794, Address: 0x3184f0, Func Offset: 0x3d0
	// Line 796, Address: 0x3184f8, Func Offset: 0x3d8
	// Line 797, Address: 0x318500, Func Offset: 0x3e0
	// Line 802, Address: 0x318508, Func Offset: 0x3e8
	// Line 808, Address: 0x318514, Func Offset: 0x3f4
	// Line 802, Address: 0x318518, Func Offset: 0x3f8
	// Line 803, Address: 0x318520, Func Offset: 0x400
	// Line 802, Address: 0x318524, Func Offset: 0x404
	// Line 803, Address: 0x31853c, Func Offset: 0x41c
	// Line 806, Address: 0x318548, Func Offset: 0x428
	// Line 803, Address: 0x31854c, Func Offset: 0x42c
	// Line 806, Address: 0x318564, Func Offset: 0x444
	// Line 808, Address: 0x31856c, Func Offset: 0x44c
	// Line 809, Address: 0x318574, Func Offset: 0x454
	// Line 810, Address: 0x3185ac, Func Offset: 0x48c
	// Line 809, Address: 0x3185b0, Func Offset: 0x490
	// Line 810, Address: 0x3185b4, Func Offset: 0x494
	// Line 809, Address: 0x3185b8, Func Offset: 0x498
	// Line 810, Address: 0x3185d8, Func Offset: 0x4b8
	// Line 812, Address: 0x3185e0, Func Offset: 0x4c0
	// Line 813, Address: 0x3185e8, Func Offset: 0x4c8
	// Line 814, Address: 0x318624, Func Offset: 0x504
	// Line 817, Address: 0x318630, Func Offset: 0x510
	// Line 821, Address: 0x318638, Func Offset: 0x518
	// Line 822, Address: 0x318640, Func Offset: 0x520
	// Line 825, Address: 0x31865c, Func Offset: 0x53c
	// Line 827, Address: 0x318664, Func Offset: 0x544
	// Line 831, Address: 0x318668, Func Offset: 0x548
	// Line 836, Address: 0x318670, Func Offset: 0x550
	// Line 837, Address: 0x3186c8, Func Offset: 0x5a8
	// Line 836, Address: 0x3186cc, Func Offset: 0x5ac
	// Line 837, Address: 0x3186e0, Func Offset: 0x5c0
	// Line 836, Address: 0x3186e8, Func Offset: 0x5c8
	// Line 842, Address: 0x3186ec, Func Offset: 0x5cc
	// Line 844, Address: 0x3186f4, Func Offset: 0x5d4
	// Line 847, Address: 0x3186f8, Func Offset: 0x5d8
	// Line 851, Address: 0x318708, Func Offset: 0x5e8
	// Line 852, Address: 0x3187b4, Func Offset: 0x694
	// Line 856, Address: 0x3187cc, Func Offset: 0x6ac
	// Line 852, Address: 0x3187d4, Func Offset: 0x6b4
	// Line 853, Address: 0x3187d8, Func Offset: 0x6b8
	// Line 852, Address: 0x3187dc, Func Offset: 0x6bc
	// Line 853, Address: 0x3187e0, Func Offset: 0x6c0
	// Line 856, Address: 0x3187f0, Func Offset: 0x6d0
	// Line 864, Address: 0x318834, Func Offset: 0x714
	// Line 873, Address: 0x318880, Func Offset: 0x760
	// Line 882, Address: 0x318888, Func Offset: 0x768
	// Line 888, Address: 0x318898, Func Offset: 0x778
	// Line 889, Address: 0x3188b4, Func Offset: 0x794
	// Line 891, Address: 0x3188c0, Func Offset: 0x7a0
	// Line 892, Address: 0x3188c4, Func Offset: 0x7a4
	// Line 918, Address: 0x3188d0, Func Offset: 0x7b0
	// Func End, Address: 0x3188f0, Func Offset: 0x7d0
}

// zEntTeleportBox_Setup__FP16_zEntTeleportBox
// Start address: 0x3188f0
void zEntTeleportBox_Setup(_zEntTeleportBox* ent)
{
	_zEntTeleportBox* target;
	xBox wbox;
	// Line 574, Address: 0x3188f0, Func Offset: 0
	// Line 575, Address: 0x3188f4, Func Offset: 0x4
	// Line 574, Address: 0x3188f8, Func Offset: 0x8
	// Line 575, Address: 0x318900, Func Offset: 0x10
	// Line 576, Address: 0x31890c, Func Offset: 0x1c
	// Line 577, Address: 0x318914, Func Offset: 0x24
	// Line 578, Address: 0x31891c, Func Offset: 0x2c
	// Line 579, Address: 0x318920, Func Offset: 0x30
	// Line 587, Address: 0x318928, Func Offset: 0x38
	// Line 590, Address: 0x318930, Func Offset: 0x40
	// Line 595, Address: 0x318934, Func Offset: 0x44
	// Line 599, Address: 0x318940, Func Offset: 0x50
	// Line 605, Address: 0x318944, Func Offset: 0x54
	// Line 600, Address: 0x318948, Func Offset: 0x58
	// Line 611, Address: 0x31894c, Func Offset: 0x5c
	// Line 601, Address: 0x318950, Func Offset: 0x60
	// Line 611, Address: 0x318954, Func Offset: 0x64
	// Line 602, Address: 0x318958, Func Offset: 0x68
	// Line 612, Address: 0x31895c, Func Offset: 0x6c
	// Line 603, Address: 0x318960, Func Offset: 0x70
	// Line 612, Address: 0x318964, Func Offset: 0x74
	// Line 604, Address: 0x318968, Func Offset: 0x78
	// Line 611, Address: 0x31896c, Func Offset: 0x7c
	// Line 605, Address: 0x318970, Func Offset: 0x80
	// Line 612, Address: 0x318974, Func Offset: 0x84
	// Line 611, Address: 0x318978, Func Offset: 0x88
	// Line 613, Address: 0x31897c, Func Offset: 0x8c
	// Line 612, Address: 0x318980, Func Offset: 0x90
	// Line 613, Address: 0x318988, Func Offset: 0x98
	// Line 614, Address: 0x318994, Func Offset: 0xa4
	// Line 615, Address: 0x3189a0, Func Offset: 0xb0
	// Line 614, Address: 0x3189a4, Func Offset: 0xb4
	// Line 615, Address: 0x3189a8, Func Offset: 0xb8
	// Line 616, Address: 0x3189b4, Func Offset: 0xc4
	// Line 615, Address: 0x3189b8, Func Offset: 0xc8
	// Line 616, Address: 0x3189c0, Func Offset: 0xd0
	// Line 620, Address: 0x3189c8, Func Offset: 0xd8
	// Line 621, Address: 0x3189cc, Func Offset: 0xdc
	// Line 630, Address: 0x3189d0, Func Offset: 0xe0
	// Line 627, Address: 0x3189d4, Func Offset: 0xe4
	// Line 630, Address: 0x3189d8, Func Offset: 0xe8
	// Line 632, Address: 0x3189dc, Func Offset: 0xec
	// Line 631, Address: 0x3189e0, Func Offset: 0xf0
	// Line 633, Address: 0x3189e4, Func Offset: 0xf4
	// Line 631, Address: 0x3189e8, Func Offset: 0xf8
	// Line 648, Address: 0x3189ec, Func Offset: 0xfc
	// Line 620, Address: 0x3189f0, Func Offset: 0x100
	// Line 648, Address: 0x3189f4, Func Offset: 0x104
	// Line 620, Address: 0x3189f8, Func Offset: 0x108
	// Line 635, Address: 0x3189fc, Func Offset: 0x10c
	// Line 620, Address: 0x318a00, Func Offset: 0x110
	// Line 635, Address: 0x318a04, Func Offset: 0x114
	// Line 620, Address: 0x318a08, Func Offset: 0x118
	// Line 621, Address: 0x318a10, Func Offset: 0x120
	// Line 622, Address: 0x318a18, Func Offset: 0x128
	// Line 623, Address: 0x318a28, Func Offset: 0x138
	// Line 624, Address: 0x318a34, Func Offset: 0x144
	// Line 625, Address: 0x318a40, Func Offset: 0x150
	// Line 626, Address: 0x318a4c, Func Offset: 0x15c
	// Line 627, Address: 0x318a58, Func Offset: 0x168
	// Line 630, Address: 0x318a88, Func Offset: 0x198
	// Line 631, Address: 0x318a8c, Func Offset: 0x19c
	// Line 632, Address: 0x318a90, Func Offset: 0x1a0
	// Line 633, Address: 0x318a94, Func Offset: 0x1a4
	// Line 634, Address: 0x318a98, Func Offset: 0x1a8
	// Line 635, Address: 0x318a9c, Func Offset: 0x1ac
	// Line 638, Address: 0x318aa0, Func Offset: 0x1b0
	// Line 639, Address: 0x318aa4, Func Offset: 0x1b4
	// Line 638, Address: 0x318aa8, Func Offset: 0x1b8
	// Line 639, Address: 0x318ab8, Func Offset: 0x1c8
	// Line 640, Address: 0x318ac0, Func Offset: 0x1d0
	// Line 641, Address: 0x318ad0, Func Offset: 0x1e0
	// Line 642, Address: 0x318adc, Func Offset: 0x1ec
	// Line 643, Address: 0x318ae8, Func Offset: 0x1f8
	// Line 644, Address: 0x318af4, Func Offset: 0x204
	// Line 645, Address: 0x318b00, Func Offset: 0x210
	// Line 648, Address: 0x318b2c, Func Offset: 0x23c
	// Line 650, Address: 0x318b40, Func Offset: 0x250
	// Func End, Address: 0x318b50, Func Offset: 0x260
}

// zEntTeleportBox_InitAll__Fv
// Start address: 0x318b50
void zEntTeleportBox_InitAll()
{
	// Line 568, Address: 0x318b50, Func Offset: 0
	// Func End, Address: 0x318b58, Func Offset: 0x8
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
	// Line 330, Address: 0x318b60, Func Offset: 0
	// Line 335, Address: 0x318b64, Func Offset: 0x4
	// Line 330, Address: 0x318b68, Func Offset: 0x8
	// Line 335, Address: 0x318b80, Func Offset: 0x20
	// Line 336, Address: 0x318b8c, Func Offset: 0x2c
	// Line 352, Address: 0x318b90, Func Offset: 0x30
	// Line 337, Address: 0x318b94, Func Offset: 0x34
	// Line 341, Address: 0x318b98, Func Offset: 0x38
	// Line 345, Address: 0x318b9c, Func Offset: 0x3c
	// Line 335, Address: 0x318ba0, Func Offset: 0x40
	// Line 352, Address: 0x318ba4, Func Offset: 0x44
	// Line 336, Address: 0x318ba8, Func Offset: 0x48
	// Line 337, Address: 0x318bac, Func Offset: 0x4c
	// Line 338, Address: 0x318bb0, Func Offset: 0x50
	// Line 339, Address: 0x318bb4, Func Offset: 0x54
	// Line 340, Address: 0x318bbc, Func Offset: 0x5c
	// Line 341, Address: 0x318bc8, Func Offset: 0x68
	// Line 342, Address: 0x318bcc, Func Offset: 0x6c
	// Line 343, Address: 0x318bd8, Func Offset: 0x78
	// Line 344, Address: 0x318bdc, Func Offset: 0x7c
	// Line 345, Address: 0x318be8, Func Offset: 0x88
	// Line 346, Address: 0x318bec, Func Offset: 0x8c
	// Line 347, Address: 0x318bf0, Func Offset: 0x90
	// Line 348, Address: 0x318bf4, Func Offset: 0x94
	// Line 349, Address: 0x318bf8, Func Offset: 0x98
	// Line 352, Address: 0x318bfc, Func Offset: 0x9c
	// Line 353, Address: 0x318c08, Func Offset: 0xa8
	// Line 357, Address: 0x318c0c, Func Offset: 0xac
	// Line 358, Address: 0x318c18, Func Offset: 0xb8
	// Line 364, Address: 0x318c20, Func Offset: 0xc0
	// Line 370, Address: 0x318c30, Func Offset: 0xd0
	// Line 375, Address: 0x318c34, Func Offset: 0xd4
	// Line 370, Address: 0x318c44, Func Offset: 0xe4
	// Line 371, Address: 0x318c48, Func Offset: 0xe8
	// Line 372, Address: 0x318c50, Func Offset: 0xf0
	// Line 375, Address: 0x318c54, Func Offset: 0xf4
	// Line 377, Address: 0x318c5c, Func Offset: 0xfc
	// Line 385, Address: 0x318c60, Func Offset: 0x100
	// Line 379, Address: 0x318c64, Func Offset: 0x104
	// Line 386, Address: 0x318c68, Func Offset: 0x108
	// Line 385, Address: 0x318c6c, Func Offset: 0x10c
	// Line 386, Address: 0x318c70, Func Offset: 0x110
	// Line 379, Address: 0x318c74, Func Offset: 0x114
	// Line 382, Address: 0x318c7c, Func Offset: 0x11c
	// Line 384, Address: 0x318c88, Func Offset: 0x128
	// Line 385, Address: 0x318c8c, Func Offset: 0x12c
	// Line 386, Address: 0x318c90, Func Offset: 0x130
	// Line 388, Address: 0x318c94, Func Offset: 0x134
	// Line 389, Address: 0x318ca0, Func Offset: 0x140
	// Line 391, Address: 0x318cb0, Func Offset: 0x150
	// Line 393, Address: 0x318cb8, Func Offset: 0x158
	// Line 397, Address: 0x318cc0, Func Offset: 0x160
	// Line 401, Address: 0x318ccc, Func Offset: 0x16c
	// Line 404, Address: 0x318ce4, Func Offset: 0x184
	// Line 405, Address: 0x318d2c, Func Offset: 0x1cc
	// Line 406, Address: 0x318d74, Func Offset: 0x214
	// Line 407, Address: 0x318dbc, Func Offset: 0x25c
	// Line 408, Address: 0x318e04, Func Offset: 0x2a4
	// Line 409, Address: 0x318e4c, Func Offset: 0x2ec
	// Line 411, Address: 0x318e94, Func Offset: 0x334
	// Line 412, Address: 0x318ee0, Func Offset: 0x380
	// Line 413, Address: 0x318f30, Func Offset: 0x3d0
	// Line 414, Address: 0x318f80, Func Offset: 0x420
	// Line 416, Address: 0x318fd0, Func Offset: 0x470
	// Line 417, Address: 0x319020, Func Offset: 0x4c0
	// Line 418, Address: 0x319070, Func Offset: 0x510
	// Line 419, Address: 0x3190c0, Func Offset: 0x560
	// Line 420, Address: 0x319110, Func Offset: 0x5b0
	// Line 423, Address: 0x319160, Func Offset: 0x600
	// Line 426, Address: 0x319174, Func Offset: 0x614
	// Line 432, Address: 0x31919c, Func Offset: 0x63c
	// Line 438, Address: 0x3191c0, Func Offset: 0x660
	// Line 445, Address: 0x3191e8, Func Offset: 0x688
	// Line 448, Address: 0x3191fc, Func Offset: 0x69c
	// Line 454, Address: 0x319224, Func Offset: 0x6c4
	// Line 460, Address: 0x31924c, Func Offset: 0x6ec
	// Line 466, Address: 0x319274, Func Offset: 0x714
	// Line 469, Address: 0x319284, Func Offset: 0x724
	// Line 477, Address: 0x3192a8, Func Offset: 0x748
	// Line 478, Address: 0x3192c0, Func Offset: 0x760
	// Line 480, Address: 0x3192c8, Func Offset: 0x768
	// Line 482, Address: 0x3192dc, Func Offset: 0x77c
	// Line 483, Address: 0x3192f0, Func Offset: 0x790
	// Line 490, Address: 0x31930c, Func Offset: 0x7ac
	// Line 491, Address: 0x319310, Func Offset: 0x7b0
	// Line 492, Address: 0x319328, Func Offset: 0x7c8
	// Line 494, Address: 0x319330, Func Offset: 0x7d0
	// Line 496, Address: 0x319344, Func Offset: 0x7e4
	// Line 497, Address: 0x319358, Func Offset: 0x7f8
	// Line 504, Address: 0x319374, Func Offset: 0x814
	// Line 505, Address: 0x319378, Func Offset: 0x818
	// Line 506, Address: 0x319390, Func Offset: 0x830
	// Line 508, Address: 0x319398, Func Offset: 0x838
	// Line 510, Address: 0x3193ac, Func Offset: 0x84c
	// Line 511, Address: 0x3193c0, Func Offset: 0x860
	// Line 518, Address: 0x3193dc, Func Offset: 0x87c
	// Line 519, Address: 0x3193e0, Func Offset: 0x880
	// Line 520, Address: 0x3193f8, Func Offset: 0x898
	// Line 522, Address: 0x319400, Func Offset: 0x8a0
	// Line 524, Address: 0x319414, Func Offset: 0x8b4
	// Line 525, Address: 0x319428, Func Offset: 0x8c8
	// Line 532, Address: 0x319444, Func Offset: 0x8e4
	// Line 533, Address: 0x319448, Func Offset: 0x8e8
	// Line 534, Address: 0x319460, Func Offset: 0x900
	// Line 536, Address: 0x319468, Func Offset: 0x908
	// Line 538, Address: 0x31947c, Func Offset: 0x91c
	// Line 539, Address: 0x319490, Func Offset: 0x930
	// Line 546, Address: 0x3194ac, Func Offset: 0x94c
	// Line 547, Address: 0x3194b0, Func Offset: 0x950
	// Line 548, Address: 0x3194cc, Func Offset: 0x96c
	// Line 550, Address: 0x3194d4, Func Offset: 0x974
	// Line 552, Address: 0x3194e4, Func Offset: 0x984
	// Line 553, Address: 0x3194f8, Func Offset: 0x998
	// Line 560, Address: 0x319514, Func Offset: 0x9b4
	// Line 563, Address: 0x319518, Func Offset: 0x9b8
	// Func End, Address: 0x319530, Func Offset: 0x9d0
}

// zEntTeleportBox_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x319530
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset)
{
	// Line 326, Address: 0x319530, Func Offset: 0
	// Func End, Address: 0x319538, Func Offset: 0x8
}

// JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319540
uint32 JumpOutEffectJOAnimCB(void* object)
{
	// Line 315, Address: 0x319540, Func Offset: 0
	// Line 318, Address: 0x319548, Func Offset: 0x8
	// Func End, Address: 0x319550, Func Offset: 0x10
}

// JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319550
uint32 JumpOutEffectPlrEjectCB(void* object)
{
	_zEntTeleportBox* tbox;
	xVec3 tmp;
	// Line 295, Address: 0x319550, Func Offset: 0
	// Line 299, Address: 0x319554, Func Offset: 0x4
	// Line 295, Address: 0x319558, Func Offset: 0x8
	// Line 304, Address: 0x31955c, Func Offset: 0xc
	// Line 299, Address: 0x319560, Func Offset: 0x10
	// Line 306, Address: 0x319564, Func Offset: 0x14
	// Line 300, Address: 0x319568, Func Offset: 0x18
	// Line 306, Address: 0x31956c, Func Offset: 0x1c
	// Line 300, Address: 0x319570, Func Offset: 0x20
	// Line 304, Address: 0x319578, Func Offset: 0x28
	// Line 305, Address: 0x31957c, Func Offset: 0x2c
	// Line 304, Address: 0x319584, Func Offset: 0x34
	// Line 305, Address: 0x3195a0, Func Offset: 0x50
	// Line 306, Address: 0x3195a8, Func Offset: 0x58
	// Line 309, Address: 0x3195b0, Func Offset: 0x60
	// Line 308, Address: 0x3195b4, Func Offset: 0x64
	// Line 309, Address: 0x3195b8, Func Offset: 0x68
	// Func End, Address: 0x3195c0, Func Offset: 0x70
}

// JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195c0
uint32 JumpOutEffectPlrVisibleCB()
{
	// Line 289, Address: 0x3195c0, Func Offset: 0
	// Line 290, Address: 0x3195c4, Func Offset: 0x4
	// Line 289, Address: 0x3195c8, Func Offset: 0x8
	// Line 290, Address: 0x3195cc, Func Offset: 0xc
	// Line 291, Address: 0x3195d8, Func Offset: 0x18
	// Line 293, Address: 0x3195e0, Func Offset: 0x20
	// Line 292, Address: 0x3195e4, Func Offset: 0x24
	// Line 293, Address: 0x3195e8, Func Offset: 0x28
	// Func End, Address: 0x3195f0, Func Offset: 0x30
}

// CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195f0
uint32 CtoOEffectTboxEnableCB(void* object)
{
	_zEntTeleportBox* tbox;
	// Line 281, Address: 0x3195f0, Func Offset: 0
	// Line 283, Address: 0x319600, Func Offset: 0x10
	// Line 284, Address: 0x319604, Func Offset: 0x14
	// Line 287, Address: 0x319608, Func Offset: 0x18
	// Func End, Address: 0x319610, Func Offset: 0x20
}

// JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319610
uint32 JumpInEffectJIAnimCB(void* object)
{
	// Line 270, Address: 0x319610, Func Offset: 0
	// Line 273, Address: 0x319618, Func Offset: 0x8
	// Func End, Address: 0x319620, Func Offset: 0x10
}

// JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319620
uint32 JumpInEffectPlrTeleportCB(void* object)
{
	// Line 261, Address: 0x319620, Func Offset: 0
	// Line 264, Address: 0x319628, Func Offset: 0x8
	// Func End, Address: 0x319630, Func Offset: 0x10
}

// JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319630
uint32 JumpInEffectPlrInvisibleCB()
{
	// Line 251, Address: 0x319630, Func Offset: 0
	// Line 252, Address: 0x319634, Func Offset: 0x4
	// Line 251, Address: 0x319638, Func Offset: 0x8
	// Line 252, Address: 0x31963c, Func Offset: 0xc
	// Line 255, Address: 0x319648, Func Offset: 0x18
	// Line 254, Address: 0x31964c, Func Offset: 0x1c
	// Line 255, Address: 0x319650, Func Offset: 0x20
	// Func End, Address: 0x319658, Func Offset: 0x28
}

// CtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319660
uint32 CtoOCB(void* object)
{
	xVec3 tmp;
	// Line 223, Address: 0x319660, Func Offset: 0
	// Line 230, Address: 0x319664, Func Offset: 0x4
	// Line 223, Address: 0x319668, Func Offset: 0x8
	// Line 230, Address: 0x31966c, Func Offset: 0xc
	// Line 229, Address: 0x319670, Func Offset: 0x10
	// Line 232, Address: 0x319674, Func Offset: 0x14
	// Line 229, Address: 0x31967c, Func Offset: 0x1c
	// Line 230, Address: 0x31969c, Func Offset: 0x3c
	// Line 232, Address: 0x3196a4, Func Offset: 0x44
	// Line 235, Address: 0x3196ac, Func Offset: 0x4c
	// Line 246, Address: 0x3196ec, Func Offset: 0x8c
	// Line 245, Address: 0x3196f0, Func Offset: 0x90
	// Line 246, Address: 0x3196f4, Func Offset: 0x94
	// Func End, Address: 0x3196fc, Func Offset: 0x9c
}

// CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319700
uint32 CtoOCheck(void* object)
{
	zEnt* player;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	// Line 211, Address: 0x319700, Func Offset: 0
	// Line 217, Address: 0x31970c, Func Offset: 0xc
	// Line 213, Address: 0x319718, Func Offset: 0x18
	// Line 211, Address: 0x319720, Func Offset: 0x20
	// Line 213, Address: 0x319724, Func Offset: 0x24
	// Line 217, Address: 0x319740, Func Offset: 0x40
	// Line 221, Address: 0x319760, Func Offset: 0x60
	// Func End, Address: 0x319768, Func Offset: 0x68
}

// JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319770
uint32 JOtoOCB(void* object)
{
	// Line 196, Address: 0x319770, Func Offset: 0
	// Line 199, Address: 0x319774, Func Offset: 0x4
	// Func End, Address: 0x31977c, Func Offset: 0xc
}

// JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319780
uint32 JOtoOCheck(void* object)
{
	// Line 187, Address: 0x319780, Func Offset: 0
	// Line 190, Address: 0x319784, Func Offset: 0x4
	// Func End, Address: 0x31978c, Func Offset: 0xc
}

// JItoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319790
uint32 JItoOCB(void* object)
{
	_zEntTeleportBox* tbox;
	// Line 173, Address: 0x319790, Func Offset: 0
	// Line 177, Address: 0x319794, Func Offset: 0x4
	// Line 179, Address: 0x319798, Func Offset: 0x8
	// Func End, Address: 0x3197a0, Func Offset: 0x10
}

// JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197a0
uint32 JItoOCheck(void* object)
{
	// Line 163, Address: 0x3197a0, Func Offset: 0
	// Line 167, Address: 0x3197a4, Func Offset: 0x4
	// Func End, Address: 0x3197ac, Func Offset: 0xc
}

// JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197b0
uint32 JumpOutCB(void* object)
{
	// Line 152, Address: 0x3197b0, Func Offset: 0
	// Line 155, Address: 0x3197b4, Func Offset: 0x4
	// Func End, Address: 0x3197bc, Func Offset: 0xc
}

// JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197c0
uint32 JumpOutCheck(void* object)
{
	// Line 143, Address: 0x3197c0, Func Offset: 0
	// Line 146, Address: 0x3197c4, Func Offset: 0x4
	// Func End, Address: 0x3197cc, Func Offset: 0xc
}

// JumpInCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197d0
uint32 JumpInCB(void* object)
{
	// Line 132, Address: 0x3197d0, Func Offset: 0
	// Line 135, Address: 0x3197d4, Func Offset: 0x4
	// Func End, Address: 0x3197dc, Func Offset: 0xc
}

// JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197e0
uint32 JumpInCheck(void* object)
{
	// Line 123, Address: 0x3197e0, Func Offset: 0
	// Line 126, Address: 0x3197e4, Func Offset: 0x4
	// Func End, Address: 0x3197ec, Func Offset: 0xc
}

// OpenCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197f0
uint32 OpenCheck(void* object)
{
	// Line 112, Address: 0x3197f0, Func Offset: 0
	// Line 115, Address: 0x3197f8, Func Offset: 0x8
	// Func End, Address: 0x319800, Func Offset: 0x10
}

