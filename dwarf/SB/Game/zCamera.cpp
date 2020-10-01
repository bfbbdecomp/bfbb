typedef struct xModelInstance;
typedef struct RwObjectHasFrame;
typedef struct xEntMotionOrbitData;
typedef struct xUpdateCullEnt;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct xMovePoint;
typedef struct RpAtomic;
typedef enum _zPlayerWallJumpState;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RpMeshHeader;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xCutsceneZbuffer;
typedef struct xModelPool;
typedef struct zScene;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxPipeline;
typedef struct RwV2d;
typedef struct xEntShadow;
typedef struct xEnt;
typedef struct xMovePointAsset;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xVec3;
typedef struct xAnimFile;
typedef struct zJumpParam;
typedef struct RpGeometry;
typedef struct xAnimPlay;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct iEnv;
typedef enum _tagRumbleType;
typedef struct RxPipelineCluster;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xCamera;
typedef struct zEntHangable;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct RxHeap;
typedef struct xAnimState;
typedef struct zEnt;
typedef struct xJSPNodeInfo;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct xEntMechData;
typedef struct xQuat;
typedef struct analog_data;
typedef struct zPlatform;
typedef struct xEntMotionSplineData;
typedef enum _tagTransType;
typedef struct RwTexCoords;
typedef struct xCamAsset;
typedef struct rxHeapBlockHeader;
typedef struct xSpline3;
typedef struct _tagxCamPathAsset;
typedef struct xCutsceneZbufferHack;
typedef struct xGroup;
typedef enum RpWorldRenderOrder;
typedef struct zFlyKey;
typedef struct zCutsceneMgr;
typedef struct RxPipelineRequiresCluster;
typedef struct xBaseAsset;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpTriangle;
typedef struct RpMaterial;
typedef struct xScene;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct zAssetPickupTable;
typedef struct xBound;
typedef struct xVec2;
typedef struct RpSector;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct xEntBoulder;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct xVec4;
typedef struct xCutsceneBreak;
typedef struct xEntAsset;
typedef struct xBBox;
typedef struct RwSurfaceProperties;
typedef struct xEntDrive;
typedef struct RpWorldSector;
typedef struct zPlayerSettings;
typedef struct RpMorphTarget;
typedef struct RwMatrixTag;
typedef struct XCSNNosey;
typedef struct rxReq;
typedef struct RwCamera;
typedef struct xCutsceneMgr;
typedef struct _zEnv;
typedef struct RpLight;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPTree;
typedef struct xCutsceneMgrAsset;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct RpWorld;
typedef struct xCutscene;
typedef struct xEnvAsset;
typedef struct _zPortal;
typedef struct xEntFrame;
typedef struct basic_rect;
typedef struct xAnimTable;
typedef struct xMat4x3;
typedef struct xEntMotionMechData;
typedef struct st_PACKER_ASSETTYPE;
typedef struct xCoef3;
typedef enum RxNodeDefEditable;
typedef struct xEntPenData;
typedef enum RxClusterValid;
typedef struct xGridBound;
typedef struct xRot;
typedef struct _tagxRumble;
typedef struct zLasso;
typedef struct iFogParams;
typedef struct xShadowSimplePoly;
typedef struct tag_iFile;
typedef struct RwLLLink;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntOrbitData;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RwCameraProjection;
typedef struct _tagxCamFollowAsset;
typedef enum RxClusterForcePresent;
typedef struct tag_xFile;
typedef struct zPlatFMRunTime;
typedef struct xCylinder;
typedef struct tri_data_0;
typedef struct tri_data_1;
typedef struct xEntMotion;
typedef struct _class_0;
typedef struct RpVertexNormal;
typedef enum _tagPadState;
typedef struct xLightKitLight;
typedef struct xBox;
typedef struct xAnimSingle;
typedef struct xPlatformAsset;
typedef struct RxClusterDefinition;
typedef struct xEntMotionAsset;
typedef struct xCollis;
typedef struct xGlobals;
typedef struct xShadowSimpleCache;
typedef enum camera_owner_enum;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct RpInterpolator;
typedef struct _tagxPad;
typedef struct RwSphere;
typedef struct xAnimMultiFileBase;
typedef struct RwTexDictionary;
typedef struct xEntSplineData;
typedef struct xEnv;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RpPolygon;
typedef struct _class_1;
typedef struct xEntMotionPenData;
typedef struct RxClusterRef;
typedef struct xCutsceneInfo;
typedef struct _tagiPad;
typedef struct RpMaterialList;
typedef struct _tagxCamShoulderAsset;
typedef struct RwObject;
typedef struct xFFX;
typedef struct RxIoSpec;
typedef struct xEntMPData;
typedef struct xCutsceneTime;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xCutsceneData;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwFrustumPlane;
typedef struct anim_coll_data;
typedef struct xEntMotionERData;
typedef struct RwPlane;
typedef struct xCoef;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef struct zGlobals;
typedef struct _tagp2CamStaticAsset;
typedef struct RxPacket;
typedef struct xQCData;
typedef struct zGlobalSettings;
typedef enum WallJumpViewState;
typedef enum RwFogType;
typedef struct zPlayerLassoInfo;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct zLedgeGrabParams;
typedef union _class_2;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef void(*type_4)(void*, uint32);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef RpAtomic*(*type_6)(RpAtomic*);
typedef void(*type_7)(void*, uint32, void*, int8*);
typedef void(*type_9)(RxPipelineNode*);
typedef xBase*(*type_11)(uint32);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_17)(xBase*);
typedef uint32(*type_20)(RxPipelineNode*, uint32, uint32, void*);
typedef int8*(*type_21)(uint32);
typedef int32(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_27)(RxNodeDefinition*);
typedef void(*type_30)(RxNodeDefinition*);
typedef int32(*type_34)(RxPipelineNode*);
typedef void(*type_35)(xAnimPlay*, xAnimState*);
typedef void(*type_42)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_45)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_46)(RpWorldSector*);
typedef void*(*type_50)(void*, uint32, void*, uint32, uint32*);
typedef void(*type_53)(void*);
typedef void*(*type_60)(void*, uint32, void*, void*, uint32, uint32*);
typedef void(*type_62)(xEnt*, xScene*, float32);
typedef void(*type_68)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_69)(xEnt*, xVec3*);
typedef uint32(*type_70)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_74)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_77)(xEnt*);
typedef int32(*type_80)(void*, uint32, void*, int32);
typedef uint32(*type_84)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_86)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void*(*type_98)(void*, uint32, void*, int32*, int32*);
typedef void(*type_104)(void*, uint32, void*);
typedef void(*type_106)(xMemPool*, void*);
typedef RpClump*(*type_108)(RpClump*, void*);
typedef uint32(*type_112)(void*, void*);
typedef void(*type_114)(RwResEntry*);

typedef uint16 type_2[3];
typedef xVec3 type_3[5];
typedef uint8 type_8[5];
typedef xVec3 type_10[60];
typedef float32 type_12[22];
typedef float32 type_14[22];
typedef uint8 type_15[2];
typedef uint32 type_18[15];
typedef RwFrustumPlane type_19[6];
typedef uint32 type_22[15];
typedef float32 type_23[2];
typedef RwV3d type_25[8];
typedef xCutsceneZbuffer type_26[4];
typedef float32 type_28[12];
typedef uint32 type_29[15];
typedef float32 type_31[2];
typedef uint32 type_32[2];
typedef RwTexCoords* type_33[8];
typedef uint32 type_36[2];
typedef zFlyKey type_37[4];
typedef analog_data type_38[2];
typedef uint32 type_39[72];
typedef int8 type_40[4];
typedef float32 type_41[4];
typedef uint32 type_43[2];
typedef xBase* type_44[72];
typedef xVec4 type_47[12];
typedef uint8 type_48[2];
typedef uint32 type_49[2];
typedef float32 type_51[6];
typedef uint8 type_52[2];
typedef float32 type_54[3];
typedef xVec3 type_55[3];
typedef float32 type_56[3];
typedef int8 type_57[128];
typedef xModelTag type_58[2];
typedef float32 type_59[3];
typedef float32 type_61[12];
typedef float32 type_63[12];
typedef RpLight* type_64[2];
typedef float32 type_65[12];
typedef float32 type_66[16];
typedef xEnt* type_67[111];
typedef RwFrame* type_71[2];
typedef uint32 type_72[4];
typedef float32 type_73[12];
typedef float32 type_75[2];
typedef float32 type_76[12];
typedef int8 type_78[32];
typedef float32 type_79[12];
typedef uint8 type_81[3];
typedef int8 type_82[128];
typedef type_82 type_83[6];
typedef int8 type_85[16];
typedef uint16 type_87[3];
typedef uint8 type_88[14];
typedef xModelTag type_89[4];
typedef uint8 type_90[2];
typedef int8 type_91[32];
typedef xModelInstance* type_93[14];
typedef uint8 type_94[2];
typedef int8 type_95[16];
typedef uint32 type_96[2];
typedef xVec3 type_97[4];
typedef xAnimMultiFileEntry type_99[1];
typedef float32 type_100[15];
typedef uint8 type_101[3];
typedef uint8 type_102[4];
typedef float32 type_103[15];
typedef uint32 type_105[15];
typedef float32 type_107[4];
typedef int8 type_109[32];
typedef int8 type_110[32];
typedef float32 type_111[4];
typedef uint8 type_113[22];
typedef xQuat type_115[2];
typedef RwTexCoords* type_116[8];
typedef int8 type_117[16];
typedef uint8 type_118[22];
typedef xCollis type_119[18];
typedef int8 type_120[16];
typedef uint8 type_121[3];
typedef RxCluster type_122[1];

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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_112 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_70 Callback;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_15 pad;
	float32 delay;
	xSpline3* spl;
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
	type_6 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	type_39 baseCount;
	type_44 baseList;
	_zEnv* zen;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_23 radius;
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
	type_62 update;
	type_62 endUpdate;
	type_69 bupdate;
	type_74 move;
	type_77 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_86 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_114 destroyNotify;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_107 param;
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
	type_0 eventFunc;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	type_94 NumAnims;
	void** RawData;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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
	type_45 BeforeAnimMatrices;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_64 light;
	type_71 light_frame;
	int32 memlvl;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_16 Conditional;
	type_16 Callback;
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
	type_47 frustplane;
};

struct zEntHangable
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_108 callback;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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
	type_35 BeforeEnter;
	type_42 StateCallback;
	type_45 BeforeAnimMatrices;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_41 wt;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct xEntMotionSplineData
{
	int32 unknown;
};

enum _tagTransType
{
	eTransType_None,
	eTransType_Interp1,
	eTransType_Interp2,
	eTransType_Interp3,
	eTransType_Interp4,
	eTransType_Linear,
	eTransType_Interp1Rev,
	eTransType_Interp2Rev,
	eTransType_Interp3Rev,
	eTransType_Interp4Rev,
	eTransType_Total
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xCamAsset : xBaseAsset
{
	xVec3 pos;
	xVec3 at;
	xVec3 up;
	xVec3 right;
	xVec3 view_offset;
	int16 offset_start_frames;
	int16 offset_end_frames;
	float32 fov;
	float32 trans_time;
	_tagTransType trans_type;
	uint32 flags;
	float32 fade_up;
	float32 fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	uint32 valid_flags;
	type_96 markerid;
	uint8 cam_type;
	type_101 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_72 pad;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct xCutsceneZbufferHack
{
	int8* name;
	type_26 times;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zFlyKey
{
	int32 frame;
	type_28 matrix;
	type_31 aperture;
	float32 focal;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RpTriangle
{
	type_2 vertIndex;
	int16 matIndex;
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
	type_11 resolvID;
	type_17 base2Name;
	type_21 id2Name;
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
	type_58 BubbleWandTag;
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
	type_18 Inv_PatsSock;
	type_22 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_29 Inv_LevelPickups;
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
	type_49 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_67 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_88 sb_model_indices;
	type_93 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
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

struct zAssetPickupTable
{
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_81 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RpSector
{
	int32 type;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_99 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_109 name;
	type_110 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xJSPHeader
{
	type_40 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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

struct xEntBoulder
{
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
	type_53 activateCB;
	type_53 deactivateCB;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_116 texCoords;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_51 MoveSpeed;
	type_54 AnimSneak;
	type_56 AnimWalk;
	type_59 AnimRun;
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
	type_102 talk_filter;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
};

struct rxReq
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_92 beginUpdate;
	type_1 endUpdate;
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
	type_19 frustumPlanes;
	RwBBox frustumBoundBox;
	type_25 frustumCorners;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	type_100 startTime;
	type_103 endTime;
	type_105 emitID;
};

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	st_PACKER_ASSETTYPE* typeref;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
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
	type_46 renderCallBack;
	RxPipeline* pipeline;
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
	type_32 SndChannelReq;
	type_36 SndAssetID;
	type_43 SndHandle;
	XCSNNosey* cb_nosey;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	type_50 readXForm;
	type_60 writeXForm;
	type_80 assetLoaded;
	type_98 makeData;
	type_104 cleanup;
	type_4 assetUnloaded;
	type_7 writePeek;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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
	type_3 lastRefs;
	type_8 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct xShadowSimplePoly
{
	type_55 vert;
	xVec3 norm;
};

struct tag_iFile
{
	uint32 flags;
	type_57 path;
	int32 fd;
	int32 offset;
	int32 length;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_xFile
{
	type_78 relname;
	tag_iFile ps;
	void* user_data;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_61 tmrs;
	type_63 ttms;
	type_65 atms;
	type_73 dtms;
	type_76 vms;
	type_79 dss;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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

struct _class_0
{
	xVec3* verts;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_66 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_75 BilinearLerp;
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

struct xPlatformAsset
{
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_83 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_91 sceneStart;
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
	type_97 corner;
};

enum camera_owner_enum
{
	CO_BOULDER = 0x1,
	CO_CRUISE_BUBBLE,
	CO_BUNGEE = 0x4,
	CO_BOSS = 0x8,
	CO_OOB = 0x10,
	CO_ZIPLINE = 0x20,
	CO_TURRET = 0x40,
	CO_REWARDANIM = 0x80
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
	type_119 colls;
	type_68 post;
	type_84 depenq;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct _tagxPad
{
	type_113 value;
	type_118 last_value;
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
	type_12 up_tmr;
	type_14 down_tmr;
	type_38 analog;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xEntSplineData
{
	int32 unknown;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RpPolygon
{
	uint16 matIndex;
	type_87 vertIndex;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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
	type_117 SoundLeft;
	type_120 SoundRight;
};

struct _tagiPad
{
	int32 port;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xFFX
{
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RxNodeMethods
{
	type_24 nodeBody;
	type_27 nodeInit;
	type_30 nodeTerm;
	type_34 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_20 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_106 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct anim_coll_data
{
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xCoef
{
	type_111 a;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
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
	type_48 PowerUp;
	type_52 InitialPowerUp;
};

enum WallJumpViewState
{
	WJVS_DISABLED,
	WJVS_DISABLING,
	WJVS_ENABLED,
	WJVS_ENABLING
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_10 tranTable;
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

type_85 buffer;
type_95 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
float32 zcam_pad_pyaw_scale;
float32 zcam_pad_pitch_scale;
float32 zcam_near_d;
float32 zcam_near_h;
float32 zcam_near_pitch;
float32 zcam_far_d;
float32 zcam_far_h;
float32 zcam_far_pitch;
float32 zcam_wall_d;
float32 zcam_wall_h;
float32 zcam_wall_pitch;
float32 zcam_above_d;
float32 zcam_above_h;
float32 zcam_above_pitch;
float32 zcam_below_d;
float32 zcam_below_h;
float32 zcam_below_pitch;
float32 zcam_highbounce_d;
float32 zcam_highbounce_h;
float32 zcam_highbounce_pitch;
float32 zcam_overrot_min;
float32 zcam_overrot_mid;
float32 zcam_overrot_max;
float32 zcam_overrot_rate;
float32 zcam_overrot_tstart;
float32 zcam_overrot_tend;
float32 zcam_overrot_velmin;
float32 zcam_overrot_velmax;
float32 zcam_overrot_tmanual;
float32 zcam_overrot_tmr;
xCamera zcam_backupcam;
xCamera zcam_backupconvers;
int32 zcam_near;
int32 zcam_mode;
int32 zcam_bbounce;
int32 zcam_lbbounce;
int32 zcam_convers;
int32 zcam_lconvers;
int32 zcam_longbounce;
int32 zcam_highbounce;
int32 zcam_cutscene;
int32 zcam_reward;
xVec3* zcam_playervel;
float32 zcam_mintgtheight;
int32 zcam_fly;
int32 zcam_flypaused;
void* zcam_flydata;
uint32 zcam_flysize;
float32 zcam_flytime;
uint32 zcam_flyasset_current;
xCamAsset* zcam_dest;
xQuat zcam_quat;
float32 zcam_tmr;
float32 zcam_ttm;
float32 zcam_fovcurr;
float32 zcam_fovdest;
uint32 stop_track;
uint8 input_enabled;
uint8 lassocam_enabled;
float32 lassocam_factor;
WallJumpViewState wall_jump_enabled;
xVec3 wall_jump_view;
float32 dMultiplier;
float32 dOffset;
float32 hMultiplier;
float32 hOffset;
float32 rewardMove;
float32 rewardMoveSpeed;
float32 rewardZoomSpeed;
float32 rewardZoomAmount;
float32 rewardTiltTime;
float32 rewardTiltAmount;
zGlobals globals;
xVec3 g_O3;
float32 gSkipTimeFlythrough;

uint32 zCamera_FlyOnly();
void zCameraMinTargetHeightClear();
void zCameraMinTargetHeightSet(float32 height);
void zCameraSetReward(int32 on);
void zCameraDisableWallJump();
void zCameraEnableWallJump(xVec3& collNormal);
void zCameraTranslate(xCamera* cam, float32 dposx, float32 dposy, float32 dposz);
void zCameraDoTrans(xCamAsset* asset, float32 ttime);
void zCameraSetConvers(int32 on);
int32 zCameraGetConvers();
float32 zCameraGetLassoCamFactor();
void zCameraSetLassoCamFactor(float32 factor);
void zCameraEnableLassoCam();
void zCameraDisableLassoCam();
void zCameraEnableInput();
void zCameraDisableInput();
uint32 zCameraIsTrackingDisabled();
void zCameraEnableTracking(camera_owner_enum owner);
void zCameraDisableTracking(camera_owner_enum owner);
void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetHighbounce(int32 hbounce);
void zCameraSetLongbounce(int32 lbounce);
void zCameraSetBbounce(int32 bbouncing);
void zCameraUpdate(xCamera* cam, float32 dt);
void zCameraFreeLookSetGoals(xCamera* cam, float32 pitch_s, float32& dgoal, float32& hgoal, float32& pitch_goal, float32& lktm, float32 dt);
int32 zCameraRewardUpdate(xCamera* cam, float32 dt);
void zCameraFlyRestoreBackup(xCamera* backup);
void zCameraFlyStart(uint32 assetID);
int32 zCameraFlyUpdate(xCamera* cam, float32 dt);
float32 MatrixSpeed(zFlyKey* keys);
void zCameraConversUpdate(xCamera* cam, float32 dt);
void zCameraReset(xCamera* cam);

// zCamera_FlyOnly__Fv
// Start address: 0x12b310
uint32 zCamera_FlyOnly()
{
}

// zCameraMinTargetHeightClear__Fv
// Start address: 0x12b390
void zCameraMinTargetHeightClear()
{
}

// zCameraMinTargetHeightSet__Ff
// Start address: 0x12b3a0
void zCameraMinTargetHeightSet(float32 height)
{
}

// zCameraSetReward__Fi
// Start address: 0x12b3b0
void zCameraSetReward(int32 on)
{
}

// zCameraDisableWallJump__FP7xCamera
// Start address: 0x12b3e0
void zCameraDisableWallJump()
{
}

// zCameraEnableWallJump__FP7xCameraRC5xVec3
// Start address: 0x12b400
void zCameraEnableWallJump(xVec3& collNormal)
{
	xVec3 up;
}

// zCameraTranslate__FP7xCamerafff
// Start address: 0x12b540
void zCameraTranslate(xCamera* cam, float32 dposx, float32 dposy, float32 dposz)
{
}

// zCameraDoTrans__FP9xCamAssetf
// Start address: 0x12b590
void zCameraDoTrans(xCamAsset* asset, float32 ttime)
{
	xMat3x3 m;
}

// zCameraSetConvers__Fi
// Start address: 0x12b6f0
void zCameraSetConvers(int32 on)
{
	xCamera& cam;
	uint8 saved;
}

// zCameraGetConvers__Fv
// Start address: 0x12bce0
int32 zCameraGetConvers()
{
}

// zCameraGetLassoCamFactor__Fv
// Start address: 0x12bcf0
float32 zCameraGetLassoCamFactor()
{
}

// zCameraSetLassoCamFactor__Ff
// Start address: 0x12bd00
void zCameraSetLassoCamFactor(float32 factor)
{
}

// zCameraEnableLassoCam__Fv
// Start address: 0x12bd10
void zCameraEnableLassoCam()
{
}

// zCameraDisableLassoCam__Fv
// Start address: 0x12bd20
void zCameraDisableLassoCam()
{
}

// zCameraEnableInput__Fv
// Start address: 0x12bd30
void zCameraEnableInput()
{
}

// zCameraDisableInput__Fv
// Start address: 0x12bd40
void zCameraDisableInput()
{
}

// zCameraIsTrackingDisabled__Fv
// Start address: 0x12bd50
uint32 zCameraIsTrackingDisabled()
{
}

// zCameraEnableTracking__F17camera_owner_enum
// Start address: 0x12bd60
void zCameraEnableTracking(camera_owner_enum owner)
{
}

// zCameraDisableTracking__F17camera_owner_enum
// Start address: 0x12bd80
void zCameraDisableTracking(camera_owner_enum owner)
{
}

// zCameraSetPlayerVel__FP5xVec3
// Start address: 0x12bd90
void zCameraSetPlayerVel(xVec3* vel)
{
}

// zCameraSetHighbounce__Fi
// Start address: 0x12bda0
void zCameraSetHighbounce(int32 hbounce)
{
}

// zCameraSetLongbounce__Fi
// Start address: 0x12bdd0
void zCameraSetLongbounce(int32 lbounce)
{
}

// zCameraSetBbounce__Fi
// Start address: 0x12be00
void zCameraSetBbounce(int32 bbouncing)
{
}

// zCameraUpdate__FP7xCameraf
// Start address: 0x12be10
void zCameraUpdate(xCamera* cam, float32 dt)
{
	xVec3 tran_accum;
	float32 minDist;
	float32 dist;
	float32 tgtHeight;
	float32 oldTgtHeight;
	float32 plerp;
	float32 dlerp;
	float32 vertical_lerp;
	xVec3 delta;
	float32 mvtm_acc;
	float32 mvtm_dec;
	float32 lktm_acc;
	float32 lktm_dec;
	uint32 button;
	float32 dgoal;
	float32 hgoal;
	float32 pgoal;
	float32 yaw_goal;
	float32 pitch_goal;
	float32 roll_goal;
	int32 x;
	float32 dp;
	int32 x;
	float32 dp;
	int32 y;
	int32 y;
	float32 velx;
	float32 velz;
	float32 camx;
	float32 camz;
	float32 cammag;
	float32 velmag;
	float32 velcos;
	float32 velsin;
	float32 velang;
	float32 angle_factor;
	float32 vel_factor;
	float32 time_factor;
	float32 dp;
	float32 dist;
	float32 dirx;
	float32 diry;
	float32 dirz;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
	xVec3 destPosition;
	float32 lktm;
	float32 mvtm;
	float32 pitch_s;
}

// zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff
// Start address: 0x12d780
void zCameraFreeLookSetGoals(xCamera* cam, float32 pitch_s, float32& dgoal, float32& hgoal, float32& pitch_goal, float32& lktm, float32 dt)
{
	float32 s;
}

// zCameraRewardUpdate__FP7xCameraf
// Start address: 0x12dcc0
int32 zCameraRewardUpdate(xCamera* cam, float32 dt)
{
	xVec3 v;
}

// zCameraFlyRestoreBackup__FP7xCamera
// Start address: 0x12dff0
void zCameraFlyRestoreBackup(xCamera* backup)
{
}

// zCameraFlyStart__FUi
// Start address: 0x12e640
void zCameraFlyStart(uint32 assetID)
{
	st_PKR_ASSET_TOCINFO ainfo;
}

// zCameraFlyUpdate__FP7xCameraf
// Start address: 0x12eda0
int32 zCameraFlyUpdate(xCamera* cam, float32 dt)
{
	int32 i;
	int32 flyIdx;
	int32 numKeys;
	float32 flyLerp;
	float32 flyFrame;
	type_37 keys;
	float32 matdiff1;
	float32 matdiff2;
	float32 matdiff3;
	xMat3x3 tmpMat;
	type_115 quats;
	xQuat qresult;
}

// MatrixSpeed__FP7zFlyKey
// Start address: 0x12f410
float32 MatrixSpeed(zFlyKey* keys)
{
	float32 dot;
}

// zCameraConversUpdate__FP7xCameraf
// Start address: 0x12f580
void zCameraConversUpdate(xCamera* cam, float32 dt)
{
	float32 s;
	xQuat a;
	xQuat c;
}

// zCameraReset__FP7xCamera
// Start address: 0x12f7a0
void zCameraReset(xCamera* cam)
{
}

