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

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef void(*type_4)(void*, u32);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef RpAtomic*(*type_6)(RpAtomic*);
typedef void(*type_7)(void*, u32, void*, s8*);
typedef void(*type_9)(RxPipelineNode*);
typedef xBase*(*type_11)(u32);
typedef s32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef s8*(*type_17)(xBase*);
typedef u32(*type_20)(RxPipelineNode*, u32, u32, void*);
typedef s8*(*type_21)(u32);
typedef s32(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_27)(RxNodeDefinition*);
typedef void(*type_30)(RxNodeDefinition*);
typedef s32(*type_34)(RxPipelineNode*);
typedef void(*type_35)(xAnimPlay*, xAnimState*);
typedef void(*type_42)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_45)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpWorldSector*(*type_46)(RpWorldSector*);
typedef void*(*type_50)(void*, u32, void*, u32, u32*);
typedef void(*type_53)(void*);
typedef void*(*type_60)(void*, u32, void*, void*, u32, u32*);
typedef void(*type_62)(xEnt*, xScene*, f32);
typedef void(*type_68)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_69)(xEnt*, xVec3*);
typedef u32(*type_70)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_74)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_77)(xEnt*);
typedef s32(*type_80)(void*, u32, void*, s32);
typedef u32(*type_84)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_86)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void*(*type_98)(void*, u32, void*, s32*, s32*);
typedef void(*type_104)(void*, u32, void*);
typedef void(*type_106)(xMemPool*, void*);
typedef RpClump*(*type_108)(RpClump*, void*);
typedef u32(*type_112)(void*, void*);
typedef void(*type_114)(RwResEntry*);

typedef u16 type_2[3];
typedef xVec3 type_3[5];
typedef u8 type_8[5];
typedef xVec3 type_10[60];
typedef f32 type_12[22];
typedef f32 type_14[22];
typedef u8 type_15[2];
typedef u32 type_18[15];
typedef RwFrustumPlane type_19[6];
typedef u32 type_22[15];
typedef f32 type_23[2];
typedef RwV3d type_25[8];
typedef xCutsceneZbuffer type_26[4];
typedef f32 type_28[12];
typedef u32 type_29[15];
typedef f32 type_31[2];
typedef u32 type_32[2];
typedef RwTexCoords* type_33[8];
typedef u32 type_36[2];
typedef zFlyKey type_37[4];
typedef analog_data type_38[2];
typedef u32 type_39[72];
typedef s8 type_40[4];
typedef f32 type_41[4];
typedef u32 type_43[2];
typedef xBase* type_44[72];
typedef xVec4 type_47[12];
typedef u8 type_48[2];
typedef u32 type_49[2];
typedef f32 type_51[6];
typedef u8 type_52[2];
typedef f32 type_54[3];
typedef xVec3 type_55[3];
typedef f32 type_56[3];
typedef s8 type_57[128];
typedef xModelTag type_58[2];
typedef f32 type_59[3];
typedef f32 type_61[12];
typedef f32 type_63[12];
typedef RpLight* type_64[2];
typedef f32 type_65[12];
typedef f32 type_66[16];
typedef xEnt* type_67[111];
typedef RwFrame* type_71[2];
typedef u32 type_72[4];
typedef f32 type_73[12];
typedef f32 type_75[2];
typedef f32 type_76[12];
typedef s8 type_78[32];
typedef f32 type_79[12];
typedef u8 type_81[3];
typedef s8 type_82[128];
typedef type_82 type_83[6];
typedef s8 type_85[16];
typedef u16 type_87[3];
typedef u8 type_88[14];
typedef xModelTag type_89[4];
typedef u8 type_90[2];
typedef s8 type_91[32];
typedef xModelInstance* type_93[14];
typedef u8 type_94[2];
typedef s8 type_95[16];
typedef u32 type_96[2];
typedef xVec3 type_97[4];
typedef xAnimMultiFileEntry type_99[1];
typedef f32 type_100[15];
typedef u8 type_101[3];
typedef u8 type_102[4];
typedef f32 type_103[15];
typedef u32 type_105[15];
typedef f32 type_107[4];
typedef s8 type_109[32];
typedef s8 type_110[32];
typedef f32 type_111[4];
typedef u8 type_113[22];
typedef xQuat type_115[2];
typedef RwTexCoords* type_116[8];
typedef s8 type_117[16];
typedef u8 type_118[22];
typedef xCollis type_119[18];
typedef s8 type_120[16];
typedef u8 type_121[3];
typedef RxCluster type_122[1];

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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_112 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_70 Callback;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_15 pad;
	f32 delay;
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
	u16 renderFrame;
	u16 pad;
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
	f32 rubber_band;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xCutsceneZbuffer
{
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	type_39 baseCount;
	type_44 baseList;
	_zEnv* zen;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_23 radius;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RxNodeDefinition
{
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_114 destroyNotify;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_107 param;
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
	type_0 eventFunc;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	type_94 NumAnims;
	void** RawData;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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
	type_45 BeforeAnimMatrices;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
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
	s32 memlvl;
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
	u32 creationAttributes;
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
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_41 wt;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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

struct xEntMotionSplineData
{
	s32 unknown;
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
	f32 u;
	f32 v;
};

struct xCamAsset : xBaseAsset
{
	xVec3 pos;
	xVec3 at;
	xVec3 up;
	xVec3 right;
	xVec3 view_offset;
	s16 offset_start_frames;
	s16 offset_end_frames;
	f32 fov;
	f32 trans_time;
	_tagTransType trans_type;
	u32 flags;
	f32 fade_up;
	f32 fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	u32 valid_flags;
	type_96 markerid;
	u8 cam_type;
	type_101 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_72 pad;
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

struct _tagxCamPathAsset
{
	u32 assetID;
	f32 time_end;
	f32 time_delay;
};

struct xCutsceneZbufferHack
{
	s8* name;
	type_26 times;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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
	s32 frame;
	type_28 matrix;
	type_31 aperture;
	f32 focal;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RpTriangle
{
	type_2 vertIndex;
	s16 matIndex;
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
	type_11 resolvID;
	type_17 base2Name;
	type_21 id2Name;
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
	type_58 BubbleWandTag;
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
	type_18 Inv_PatsSock;
	type_22 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_29 Inv_LevelPickups;
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
	type_49 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_67 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_88 sb_model_indices;
	type_93 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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

struct zAssetPickupTable
{
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 x;
	f32 y;
};

struct RpSector
{
	s32 type;
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
	u32 filterAddressing;
	s32 refCount;
};

struct xJSPHeader
{
	type_40 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
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

struct xEntBoulder
{
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
	type_53 activateCB;
	type_53 deactivateCB;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_51 MoveSpeed;
	type_54 AnimSneak;
	type_56 AnimWalk;
	type_59 AnimRun;
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
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_19 frustumPlanes;
	RwBBox frustumBoundBox;
	type_25 frustumCorners;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
	type_100 startTime;
	type_103 endTime;
	type_105 emitID;
};

struct st_PKR_ASSET_TOCINFO
{
	u32 aid;
	st_PACKER_ASSETTYPE* typeref;
	u32 sector;
	u32 plus_offset;
	u32 size;
	void* mempos;
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
	type_46 renderCallBack;
	RxPipeline* pipeline;
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
	type_32 SndChannelReq;
	type_36 SndAssetID;
	type_43 SndHandle;
	XCSNNosey* cb_nosey;
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
	u32 mode;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct st_PACKER_ASSETTYPE
{
	u32 typetag;
	u32 tflags;
	s32 typalign;
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
	f32 w;
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
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	type_3 lastRefs;
	type_8 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct xShadowSimplePoly
{
	type_55 vert;
	xVec3 norm;
};

struct tag_iFile
{
	u32 flags;
	type_57 path;
	s32 fd;
	s32 offset;
	s32 length;
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
	f32 r;
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

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
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
	f32 rotation;
	f32 distance;
	f32 height;
	f32 rubber_band;
	f32 start_speed;
	f32 end_speed;
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
	u32 flags;
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
	f32 r;
	f32 h;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
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

struct _class_0
{
	xVec3* verts;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	u32 type;
	RwRGBAReal color;
	type_66 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_75 BilinearLerp;
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

struct xPlatformAsset
{
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_83 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_91 sceneStart;
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
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct _tagxPad
{
	type_113 value;
	type_118 last_value;
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
	type_12 up_tmr;
	type_14 down_tmr;
	type_38 analog;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xEntSplineData
{
	s32 unknown;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RpPolygon
{
	u16 matIndex;
	type_87 vertIndex;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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
	type_117 SoundLeft;
	type_120 SoundRight;
};

struct _tagiPad
{
	s32 port;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct _tagxCamShoulderAsset
{
	f32 distance;
	f32 height;
	f32 realign_speed;
	f32 realign_delay;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xFFX
{
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_106 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct anim_coll_data
{
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct xCoef
{
	type_111 a;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	u32 unused;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_10 tranTable;
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

type_85 buffer;
type_95 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
f32 zcam_pad_pyaw_scale;
f32 zcam_pad_pitch_scale;
f32 zcam_near_d;
f32 zcam_near_h;
f32 zcam_near_pitch;
f32 zcam_far_d;
f32 zcam_far_h;
f32 zcam_far_pitch;
f32 zcam_wall_d;
f32 zcam_wall_h;
f32 zcam_wall_pitch;
f32 zcam_above_d;
f32 zcam_above_h;
f32 zcam_above_pitch;
f32 zcam_below_d;
f32 zcam_below_h;
f32 zcam_below_pitch;
f32 zcam_highbounce_d;
f32 zcam_highbounce_h;
f32 zcam_highbounce_pitch;
f32 zcam_overrot_min;
f32 zcam_overrot_mid;
f32 zcam_overrot_max;
f32 zcam_overrot_rate;
f32 zcam_overrot_tstart;
f32 zcam_overrot_tend;
f32 zcam_overrot_velmin;
f32 zcam_overrot_velmax;
f32 zcam_overrot_tmanual;
f32 zcam_overrot_tmr;
xCamera zcam_backupcam;
xCamera zcam_backupconvers;
s32 zcam_near;
s32 zcam_mode;
s32 zcam_bbounce;
s32 zcam_lbbounce;
s32 zcam_convers;
s32 zcam_lconvers;
s32 zcam_longbounce;
s32 zcam_highbounce;
s32 zcam_cutscene;
s32 zcam_reward;
xVec3* zcam_playervel;
f32 zcam_mintgtheight;
s32 zcam_fly;
s32 zcam_flypaused;
void* zcam_flydata;
u32 zcam_flysize;
f32 zcam_flytime;
u32 zcam_flyasset_current;
xCamAsset* zcam_dest;
xQuat zcam_quat;
f32 zcam_tmr;
f32 zcam_ttm;
f32 zcam_fovcurr;
f32 zcam_fovdest;
u32 stop_track;
u8 input_enabled;
u8 lassocam_enabled;
f32 lassocam_factor;
WallJumpViewState wall_jump_enabled;
xVec3 wall_jump_view;
f32 dMultiplier;
f32 dOffset;
f32 hMultiplier;
f32 hOffset;
f32 rewardMove;
f32 rewardMoveSpeed;
f32 rewardZoomSpeed;
f32 rewardZoomAmount;
f32 rewardTiltTime;
f32 rewardTiltAmount;
zGlobals globals;
xVec3 g_O3;
f32 gSkipTimeFlythrough;

u32 zCamera_FlyOnly();
void zCameraMinTargetHeightClear();
void zCameraMinTargetHeightSet(f32 height);
void zCameraSetReward(s32 on);
void zCameraDisableWallJump();
void zCameraEnableWallJump(xVec3& collNormal);
void zCameraTranslate(xCamera* cam, f32 dposx, f32 dposy, f32 dposz);
void zCameraDoTrans(xCamAsset* asset, f32 ttime);
void zCameraSetConvers(s32 on);
s32 zCameraGetConvers();
f32 zCameraGetLassoCamFactor();
void zCameraSetLassoCamFactor(f32 factor);
void zCameraEnableLassoCam();
void zCameraDisableLassoCam();
void zCameraEnableInput();
void zCameraDisableInput();
u32 zCameraIsTrackingDisabled();
void zCameraEnableTracking(camera_owner_enum owner);
void zCameraDisableTracking(camera_owner_enum owner);
void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetHighbounce(s32 hbounce);
void zCameraSetLongbounce(s32 lbounce);
void zCameraSetBbounce(s32 bbouncing);
void zCameraUpdate(xCamera* cam, f32 dt);
void zCameraFreeLookSetGoals(xCamera* cam, f32 pitch_s, f32& dgoal, f32& hgoal, f32& pitch_goal, f32& lktm, f32 dt);
s32 zCameraRewardUpdate(xCamera* cam, f32 dt);
void zCameraFlyRestoreBackup(xCamera* backup);
void zCameraFlyStart(u32 assetID);
s32 zCameraFlyUpdate(xCamera* cam, f32 dt);
f32 MatrixSpeed(zFlyKey* keys);
void zCameraConversUpdate(xCamera* cam, f32 dt);
void zCameraReset(xCamera* cam);

// zCamera_FlyOnly__Fv
// Start address: 0x12b310
u32 zCamera_FlyOnly()
{
}

// zCameraMinTargetHeightClear__Fv
// Start address: 0x12b390
void zCameraMinTargetHeightClear()
{
}

// zCameraMinTargetHeightSet__Ff
// Start address: 0x12b3a0
void zCameraMinTargetHeightSet(f32 height)
{
}

// zCameraSetReward__Fi
// Start address: 0x12b3b0
void zCameraSetReward(s32 on)
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
void zCameraTranslate(xCamera* cam, f32 dposx, f32 dposy, f32 dposz)
{
}

// zCameraDoTrans__FP9xCamAssetf
// Start address: 0x12b590
void zCameraDoTrans(xCamAsset* asset, f32 ttime)
{
	xMat3x3 m;
}

// zCameraSetConvers__Fi
// Start address: 0x12b6f0
void zCameraSetConvers(s32 on)
{
	xCamera& cam;
	u8 saved;
}

// zCameraGetConvers__Fv
// Start address: 0x12bce0
s32 zCameraGetConvers()
{
}

// zCameraGetLassoCamFactor__Fv
// Start address: 0x12bcf0
f32 zCameraGetLassoCamFactor()
{
}

// zCameraSetLassoCamFactor__Ff
// Start address: 0x12bd00
void zCameraSetLassoCamFactor(f32 factor)
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
u32 zCameraIsTrackingDisabled()
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
void zCameraSetHighbounce(s32 hbounce)
{
}

// zCameraSetLongbounce__Fi
// Start address: 0x12bdd0
void zCameraSetLongbounce(s32 lbounce)
{
}

// zCameraSetBbounce__Fi
// Start address: 0x12be00
void zCameraSetBbounce(s32 bbouncing)
{
}

// zCameraUpdate__FP7xCameraf
// Start address: 0x12be10
void zCameraUpdate(xCamera* cam, f32 dt)
{
	xVec3 tran_accum;
	f32 minDist;
	f32 dist;
	f32 tgtHeight;
	f32 oldTgtHeight;
	f32 plerp;
	f32 dlerp;
	f32 vertical_lerp;
	xVec3 delta;
	f32 mvtm_acc;
	f32 mvtm_dec;
	f32 lktm_acc;
	f32 lktm_dec;
	u32 button;
	f32 dgoal;
	f32 hgoal;
	f32 pgoal;
	f32 yaw_goal;
	f32 pitch_goal;
	f32 roll_goal;
	s32 x;
	f32 dp;
	s32 x;
	f32 dp;
	s32 y;
	s32 y;
	f32 velx;
	f32 velz;
	f32 camx;
	f32 camz;
	f32 cammag;
	f32 velmag;
	f32 velcos;
	f32 velsin;
	f32 velang;
	f32 angle_factor;
	f32 vel_factor;
	f32 time_factor;
	f32 dp;
	f32 dist;
	f32 dirx;
	f32 diry;
	f32 dirz;
	f32 dx__;
	f32 dy__;
	f32 dz__;
	f32 dist2;
	f32 dist_inv;
	xVec3 destPosition;
	f32 lktm;
	f32 mvtm;
	f32 pitch_s;
}

// zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff
// Start address: 0x12d780
void zCameraFreeLookSetGoals(xCamera* cam, f32 pitch_s, f32& dgoal, f32& hgoal, f32& pitch_goal, f32& lktm, f32 dt)
{
	f32 s;
}

// zCameraRewardUpdate__FP7xCameraf
// Start address: 0x12dcc0
s32 zCameraRewardUpdate(xCamera* cam, f32 dt)
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
void zCameraFlyStart(u32 assetID)
{
	st_PKR_ASSET_TOCINFO ainfo;
}

// zCameraFlyUpdate__FP7xCameraf
// Start address: 0x12eda0
s32 zCameraFlyUpdate(xCamera* cam, f32 dt)
{
	s32 i;
	s32 flyIdx;
	s32 numKeys;
	f32 flyLerp;
	f32 flyFrame;
	type_37 keys;
	f32 matdiff1;
	f32 matdiff2;
	f32 matdiff3;
	xMat3x3 tmpMat;
	type_115 quats;
	xQuat qresult;
}

// MatrixSpeed__FP7zFlyKey
// Start address: 0x12f410
f32 MatrixSpeed(zFlyKey* keys)
{
	f32 dot;
}

// zCameraConversUpdate__FP7xCameraf
// Start address: 0x12f580
void zCameraConversUpdate(xCamera* cam, f32 dt)
{
	f32 s;
	xQuat a;
	xQuat c;
}

// zCameraReset__FP7xCamera
// Start address: 0x12f7a0
void zCameraReset(xCamera* cam)
{
}

