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
typedef struct _class_2;

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
typedef int8 type_83[128][6];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint8 pad[2];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	float32 radius[2];
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
	uint8 NumAnims[2];
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
	RwTexCoords* texCoords[8];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	RpClump*(*callback)(RpClump*, void*);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	float32 wt[4];
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
	uint32 markerid[2];
	uint8 cam_type;
	uint8 pad[3];
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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
	xCutsceneZbuffer times[4];
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
	float32 matrix[12];
	float32 aperture[2];
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
	uint16 vertIndex[3];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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

struct zAssetPickupTable
{
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
	xAnimMultiFileEntry Files[1];
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

struct xJSPHeader
{
	int8 idtag[4];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
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
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	xVec3 vert[3];
	xVec3 norm;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
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
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
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
	float32 matrix[16];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	uint16 vertIndex[3];
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
	uint8 pad[2];
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
	int8 SoundLeft[16];
	int8 SoundRight[16];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	float32 a[4];
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
	RxCluster clusters[1];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

int8 buffer[16];
int8 buffer[16];
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
	// Line 1484, Address: 0x12b310, Func Offset: 0
	// Line 1492, Address: 0x12b370, Func Offset: 0x60
	// Line 1496, Address: 0x12b378, Func Offset: 0x68
	// Line 1499, Address: 0x12b380, Func Offset: 0x70
	// Func End, Address: 0x12b388, Func Offset: 0x78
}

// zCameraMinTargetHeightClear__Fv
// Start address: 0x12b390
void zCameraMinTargetHeightClear()
{
	// Line 1477, Address: 0x12b390, Func Offset: 0
	// Line 1478, Address: 0x12b398, Func Offset: 0x8
	// Func End, Address: 0x12b3a0, Func Offset: 0x10
}

// zCameraMinTargetHeightSet__Ff
// Start address: 0x12b3a0
void zCameraMinTargetHeightSet(float32 height)
{
	// Line 1473, Address: 0x12b3a0, Func Offset: 0
	// Func End, Address: 0x12b3a8, Func Offset: 0x8
}

// zCameraSetReward__Fi
// Start address: 0x12b3b0
void zCameraSetReward(int32 on)
{
	// Line 1449, Address: 0x12b3b0, Func Offset: 0
	// Line 1451, Address: 0x12b3bc, Func Offset: 0xc
	// Line 1452, Address: 0x12b3c4, Func Offset: 0x14
	// Line 1453, Address: 0x12b3c8, Func Offset: 0x18
	// Line 1454, Address: 0x12b3cc, Func Offset: 0x1c
	// Func End, Address: 0x12b3d8, Func Offset: 0x28
}

// zCameraDisableWallJump__FP7xCamera
// Start address: 0x12b3e0
void zCameraDisableWallJump()
{
	// Line 1443, Address: 0x12b3e0, Func Offset: 0
	// Line 1444, Address: 0x12b3ec, Func Offset: 0xc
	// Line 1445, Address: 0x12b3f0, Func Offset: 0x10
	// Func End, Address: 0x12b3f8, Func Offset: 0x18
}

// zCameraEnableWallJump__FP7xCameraRC5xVec3
// Start address: 0x12b400
void zCameraEnableWallJump(xVec3& collNormal)
{
	xVec3 up;
	// Line 1424, Address: 0x12b400, Func Offset: 0
	// Line 1425, Address: 0x12b404, Func Offset: 0x4
	// Line 1424, Address: 0x12b408, Func Offset: 0x8
	// Line 1425, Address: 0x12b40c, Func Offset: 0xc
	// Line 1426, Address: 0x12b418, Func Offset: 0x18
	// Line 1427, Address: 0x12b41c, Func Offset: 0x1c
	// Line 1430, Address: 0x12b420, Func Offset: 0x20
	// Line 1431, Address: 0x12b434, Func Offset: 0x34
	// Line 1430, Address: 0x12b438, Func Offset: 0x38
	// Line 1434, Address: 0x12b43c, Func Offset: 0x3c
	// Line 1430, Address: 0x12b440, Func Offset: 0x40
	// Line 1434, Address: 0x12b444, Func Offset: 0x44
	// Line 1430, Address: 0x12b448, Func Offset: 0x48
	// Line 1431, Address: 0x12b44c, Func Offset: 0x4c
	// Line 1430, Address: 0x12b450, Func Offset: 0x50
	// Line 1431, Address: 0x12b454, Func Offset: 0x54
	// Line 1434, Address: 0x12b494, Func Offset: 0x94
	// Line 1437, Address: 0x12b4a8, Func Offset: 0xa8
	// Line 1438, Address: 0x12b4f8, Func Offset: 0xf8
	// Line 1439, Address: 0x12b530, Func Offset: 0x130
	// Func End, Address: 0x12b53c, Func Offset: 0x13c
}

// zCameraTranslate__FP7xCamerafff
// Start address: 0x12b540
void zCameraTranslate(xCamera* cam, float32 dposx, float32 dposy, float32 dposz)
{
	// Line 1419, Address: 0x12b540, Func Offset: 0
	// Line 1420, Address: 0x12b564, Func Offset: 0x24
	// Line 1421, Address: 0x12b584, Func Offset: 0x44
	// Func End, Address: 0x12b58c, Func Offset: 0x4c
}

// zCameraDoTrans__FP9xCamAssetf
// Start address: 0x12b590
void zCameraDoTrans(xCamAsset* asset, float32 ttime)
{
	xMat3x3 m;
	// Line 1392, Address: 0x12b590, Func Offset: 0
	// Line 1398, Address: 0x12b594, Func Offset: 0x4
	// Line 1392, Address: 0x12b598, Func Offset: 0x8
	// Line 1398, Address: 0x12b5a4, Func Offset: 0x14
	// Line 1400, Address: 0x12b5bc, Func Offset: 0x2c
	// Line 1398, Address: 0x12b5c0, Func Offset: 0x30
	// Line 1400, Address: 0x12b5c4, Func Offset: 0x34
	// Line 1401, Address: 0x12b5d0, Func Offset: 0x40
	// Line 1402, Address: 0x12b5f4, Func Offset: 0x64
	// Line 1403, Address: 0x12b618, Func Offset: 0x88
	// Line 1404, Address: 0x12b63c, Func Offset: 0xac
	// Line 1405, Address: 0x12b660, Func Offset: 0xd0
	// Line 1406, Address: 0x12b668, Func Offset: 0xd8
	// Line 1407, Address: 0x12b66c, Func Offset: 0xdc
	// Line 1412, Address: 0x12b678, Func Offset: 0xe8
	// Line 1409, Address: 0x12b67c, Func Offset: 0xec
	// Line 1412, Address: 0x12b680, Func Offset: 0xf0
	// Line 1409, Address: 0x12b688, Func Offset: 0xf8
	// Line 1410, Address: 0x12b69c, Func Offset: 0x10c
	// Line 1411, Address: 0x12b6b4, Func Offset: 0x124
	// Line 1412, Address: 0x12b6c8, Func Offset: 0x138
	// Line 1413, Address: 0x12b6d0, Func Offset: 0x140
	// Line 1415, Address: 0x12b6d8, Func Offset: 0x148
	// Func End, Address: 0x12b6e8, Func Offset: 0x158
}

// zCameraSetConvers__Fi
// Start address: 0x12b6f0
void zCameraSetConvers(int32 on)
{
	xCamera& cam;
	uint8 saved;
	// Line 1364, Address: 0x12b6f0, Func Offset: 0
	// Line 1367, Address: 0x12b6fc, Func Offset: 0xc
	// Line 1365, Address: 0x12b700, Func Offset: 0x10
	// Line 1369, Address: 0x12b704, Func Offset: 0x14
	// Line 1372, Address: 0x12b70c, Func Offset: 0x1c
	// Line 1373, Address: 0x12bc10, Func Offset: 0x520
	// Line 1374, Address: 0x12bc14, Func Offset: 0x524
	// Line 1373, Address: 0x12bc18, Func Offset: 0x528
	// Line 1376, Address: 0x12bc1c, Func Offset: 0x52c
	// Line 1380, Address: 0x12bc28, Func Offset: 0x538
	// Line 1382, Address: 0x12bc3c, Func Offset: 0x54c
	// Line 1381, Address: 0x12bc40, Func Offset: 0x550
	// Line 1382, Address: 0x12bc44, Func Offset: 0x554
	// Line 1383, Address: 0x12bc4c, Func Offset: 0x55c
	// Line 1384, Address: 0x12bc58, Func Offset: 0x568
	// Line 1386, Address: 0x12bc80, Func Offset: 0x590
	// Line 1387, Address: 0x12bc84, Func Offset: 0x594
	// Line 1388, Address: 0x12bc88, Func Offset: 0x598
	// Func End, Address: 0x12bc98, Func Offset: 0x5a8
}

// zCameraGetConvers__Fv
// Start address: 0x12bce0
int32 zCameraGetConvers()
{
	// Line 1361, Address: 0x12bce0, Func Offset: 0
	// Func End, Address: 0x12bce8, Func Offset: 0x8
}

// zCameraGetLassoCamFactor__Fv
// Start address: 0x12bcf0
float32 zCameraGetLassoCamFactor()
{
	// Line 1356, Address: 0x12bcf0, Func Offset: 0
	// Func End, Address: 0x12bcf8, Func Offset: 0x8
}

// zCameraSetLassoCamFactor__Ff
// Start address: 0x12bd00
void zCameraSetLassoCamFactor(float32 factor)
{
	// Line 1352, Address: 0x12bd00, Func Offset: 0
	// Func End, Address: 0x12bd08, Func Offset: 0x8
}

// zCameraEnableLassoCam__Fv
// Start address: 0x12bd10
void zCameraEnableLassoCam()
{
	// Line 1346, Address: 0x12bd10, Func Offset: 0
	// Line 1348, Address: 0x12bd14, Func Offset: 0x4
	// Func End, Address: 0x12bd1c, Func Offset: 0xc
}

// zCameraDisableLassoCam__Fv
// Start address: 0x12bd20
void zCameraDisableLassoCam()
{
	// Line 1343, Address: 0x12bd20, Func Offset: 0
	// Func End, Address: 0x12bd28, Func Offset: 0x8
}

// zCameraEnableInput__Fv
// Start address: 0x12bd30
void zCameraEnableInput()
{
	// Line 1333, Address: 0x12bd30, Func Offset: 0
	// Line 1334, Address: 0x12bd34, Func Offset: 0x4
	// Func End, Address: 0x12bd3c, Func Offset: 0xc
}

// zCameraDisableInput__Fv
// Start address: 0x12bd40
void zCameraDisableInput()
{
	// Line 1330, Address: 0x12bd40, Func Offset: 0
	// Func End, Address: 0x12bd48, Func Offset: 0x8
}

// zCameraIsTrackingDisabled__Fv
// Start address: 0x12bd50
uint32 zCameraIsTrackingDisabled()
{
	// Line 1322, Address: 0x12bd50, Func Offset: 0
	// Func End, Address: 0x12bd58, Func Offset: 0x8
}

// zCameraEnableTracking__F17camera_owner_enum
// Start address: 0x12bd60
void zCameraEnableTracking(camera_owner_enum owner)
{
	// Line 1316, Address: 0x12bd60, Func Offset: 0
	// Line 1317, Address: 0x12bd6c, Func Offset: 0xc
	// Func End, Address: 0x12bd74, Func Offset: 0x14
}

// zCameraDisableTracking__F17camera_owner_enum
// Start address: 0x12bd80
void zCameraDisableTracking(camera_owner_enum owner)
{
	// Line 1311, Address: 0x12bd80, Func Offset: 0
	// Line 1312, Address: 0x12bd88, Func Offset: 0x8
	// Func End, Address: 0x12bd90, Func Offset: 0x10
}

// zCameraSetPlayerVel__FP5xVec3
// Start address: 0x12bd90
void zCameraSetPlayerVel(xVec3* vel)
{
	// Line 1286, Address: 0x12bd90, Func Offset: 0
	// Func End, Address: 0x12bd98, Func Offset: 0x8
}

// zCameraSetHighbounce__Fi
// Start address: 0x12bda0
void zCameraSetHighbounce(int32 hbounce)
{
	// Line 1276, Address: 0x12bda0, Func Offset: 0
	// Line 1277, Address: 0x12bdb8, Func Offset: 0x18
	// Line 1278, Address: 0x12bdbc, Func Offset: 0x1c
	// Line 1279, Address: 0x12bdc0, Func Offset: 0x20
	// Line 1281, Address: 0x12bdc4, Func Offset: 0x24
	// Func End, Address: 0x12bdcc, Func Offset: 0x2c
}

// zCameraSetLongbounce__Fi
// Start address: 0x12bdd0
void zCameraSetLongbounce(int32 lbounce)
{
	// Line 1264, Address: 0x12bdd0, Func Offset: 0
	// Line 1265, Address: 0x12bde8, Func Offset: 0x18
	// Line 1266, Address: 0x12bdec, Func Offset: 0x1c
	// Line 1267, Address: 0x12bdf0, Func Offset: 0x20
	// Line 1269, Address: 0x12bdf4, Func Offset: 0x24
	// Func End, Address: 0x12bdfc, Func Offset: 0x2c
}

// zCameraSetBbounce__Fi
// Start address: 0x12be00
void zCameraSetBbounce(int32 bbouncing)
{
	// Line 1257, Address: 0x12be00, Func Offset: 0
	// Func End, Address: 0x12be08, Func Offset: 0x8
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
	// Line 658, Address: 0x12be10, Func Offset: 0
	// Line 663, Address: 0x12be14, Func Offset: 0x4
	// Line 658, Address: 0x12be18, Func Offset: 0x8
	// Line 663, Address: 0x12be1c, Func Offset: 0xc
	// Line 658, Address: 0x12be20, Func Offset: 0x10
	// Line 663, Address: 0x12be24, Func Offset: 0x14
	// Line 658, Address: 0x12be28, Func Offset: 0x18
	// Line 663, Address: 0x12be4c, Func Offset: 0x3c
	// Line 671, Address: 0x12bea8, Func Offset: 0x98
	// Line 672, Address: 0x12beb0, Func Offset: 0xa0
	// Line 673, Address: 0x12beb8, Func Offset: 0xa8
	// Line 674, Address: 0x12bec4, Func Offset: 0xb4
	// Line 677, Address: 0x12bec8, Func Offset: 0xb8
	// Line 680, Address: 0x12bed0, Func Offset: 0xc0
	// Line 685, Address: 0x12bedc, Func Offset: 0xcc
	// Line 680, Address: 0x12bee0, Func Offset: 0xd0
	// Line 681, Address: 0x12bef0, Func Offset: 0xe0
	// Line 682, Address: 0x12bef4, Func Offset: 0xe4
	// Line 683, Address: 0x12bef8, Func Offset: 0xe8
	// Line 685, Address: 0x12befc, Func Offset: 0xec
	// Line 688, Address: 0x12bf18, Func Offset: 0x108
	// Line 689, Address: 0x12bf30, Func Offset: 0x120
	// Line 691, Address: 0x12bf34, Func Offset: 0x124
	// Line 692, Address: 0x12bf3c, Func Offset: 0x12c
	// Line 693, Address: 0x12bf44, Func Offset: 0x134
	// Line 695, Address: 0x12bf50, Func Offset: 0x140
	// Line 694, Address: 0x12bf54, Func Offset: 0x144
	// Line 695, Address: 0x12bf58, Func Offset: 0x148
	// Line 710, Address: 0x12bf68, Func Offset: 0x158
	// Line 711, Address: 0x12bf74, Func Offset: 0x164
	// Line 712, Address: 0x12c5c8, Func Offset: 0x7b8
	// Line 714, Address: 0x12c5d0, Func Offset: 0x7c0
	// Line 715, Address: 0x12c5e4, Func Offset: 0x7d4
	// Line 716, Address: 0x12c5f0, Func Offset: 0x7e0
	// Line 717, Address: 0x12c5f8, Func Offset: 0x7e8
	// Line 718, Address: 0x12c604, Func Offset: 0x7f4
	// Line 719, Address: 0x12c60c, Func Offset: 0x7fc
	// Line 720, Address: 0x12c620, Func Offset: 0x810
	// Line 721, Address: 0x12c624, Func Offset: 0x814
	// Line 723, Address: 0x12c628, Func Offset: 0x818
	// Line 733, Address: 0x12c634, Func Offset: 0x824
	// Line 734, Address: 0x12c63c, Func Offset: 0x82c
	// Line 735, Address: 0x12c648, Func Offset: 0x838
	// Line 736, Address: 0x12c658, Func Offset: 0x848
	// Line 737, Address: 0x12c65c, Func Offset: 0x84c
	// Line 738, Address: 0x12c664, Func Offset: 0x854
	// Line 741, Address: 0x12c668, Func Offset: 0x858
	// Line 744, Address: 0x12c674, Func Offset: 0x864
	// Line 745, Address: 0x12c680, Func Offset: 0x870
	// Line 747, Address: 0x12c690, Func Offset: 0x880
	// Line 752, Address: 0x12c6a0, Func Offset: 0x890
	// Line 750, Address: 0x12c6a4, Func Offset: 0x894
	// Line 752, Address: 0x12c6ac, Func Offset: 0x89c
	// Line 750, Address: 0x12c6b0, Func Offset: 0x8a0
	// Line 752, Address: 0x12c6b4, Func Offset: 0x8a4
	// Line 754, Address: 0x12c6bc, Func Offset: 0x8ac
	// Line 755, Address: 0x12c6c8, Func Offset: 0x8b8
	// Line 757, Address: 0x12c6d0, Func Offset: 0x8c0
	// Line 758, Address: 0x12c6dc, Func Offset: 0x8cc
	// Line 762, Address: 0x12c6e0, Func Offset: 0x8d0
	// Line 763, Address: 0x12c6ec, Func Offset: 0x8dc
	// Line 765, Address: 0x12c6fc, Func Offset: 0x8ec
	// Line 766, Address: 0x12c708, Func Offset: 0x8f8
	// Line 773, Address: 0x12c710, Func Offset: 0x900
	// Line 774, Address: 0x12c71c, Func Offset: 0x90c
	// Line 775, Address: 0x12c724, Func Offset: 0x914
	// Line 776, Address: 0x12c728, Func Offset: 0x918
	// Line 778, Address: 0x12c738, Func Offset: 0x928
	// Line 783, Address: 0x12c740, Func Offset: 0x930
	// Line 784, Address: 0x12c74c, Func Offset: 0x93c
	// Line 785, Address: 0x12c754, Func Offset: 0x944
	// Line 787, Address: 0x12c760, Func Offset: 0x950
	// Line 786, Address: 0x12c764, Func Offset: 0x954
	// Line 787, Address: 0x12c768, Func Offset: 0x958
	// Line 800, Address: 0x12c778, Func Offset: 0x968
	// Line 802, Address: 0x12c784, Func Offset: 0x974
	// Line 803, Address: 0x12c790, Func Offset: 0x980
	// Line 805, Address: 0x12c7a0, Func Offset: 0x990
	// Line 807, Address: 0x12c7b0, Func Offset: 0x9a0
	// Line 882, Address: 0x12c7b8, Func Offset: 0x9a8
	// Line 883, Address: 0x12c7bc, Func Offset: 0x9ac
	// Line 884, Address: 0x12c7c0, Func Offset: 0x9b0
	// Line 882, Address: 0x12c7c4, Func Offset: 0x9b4
	// Line 884, Address: 0x12c7c8, Func Offset: 0x9b8
	// Line 885, Address: 0x12c7d4, Func Offset: 0x9c4
	// Line 886, Address: 0x12c7e0, Func Offset: 0x9d0
	// Line 896, Address: 0x12c7f8, Func Offset: 0x9e8
	// Line 897, Address: 0x12c818, Func Offset: 0xa08
	// Line 896, Address: 0x12c81c, Func Offset: 0xa0c
	// Line 897, Address: 0x12c820, Func Offset: 0xa10
	// Line 896, Address: 0x12c824, Func Offset: 0xa14
	// Line 897, Address: 0x12c828, Func Offset: 0xa18
	// Line 898, Address: 0x12c888, Func Offset: 0xa78
	// Line 900, Address: 0x12c8bc, Func Offset: 0xaac
	// Line 898, Address: 0x12c8c0, Func Offset: 0xab0
	// Line 900, Address: 0x12c8fc, Func Offset: 0xaec
	// Line 901, Address: 0x12c960, Func Offset: 0xb50
	// Line 902, Address: 0x12c980, Func Offset: 0xb70
	// Line 906, Address: 0x12c994, Func Offset: 0xb84
	// Line 907, Address: 0x12c9a0, Func Offset: 0xb90
	// Line 908, Address: 0x12c9a4, Func Offset: 0xb94
	// Line 906, Address: 0x12c9a8, Func Offset: 0xb98
	// Line 907, Address: 0x12c9c0, Func Offset: 0xbb0
	// Line 909, Address: 0x12c9c4, Func Offset: 0xbb4
	// Line 907, Address: 0x12c9c8, Func Offset: 0xbb8
	// Line 908, Address: 0x12c9e4, Func Offset: 0xbd4
	// Line 909, Address: 0x12ca04, Func Offset: 0xbf4
	// Line 910, Address: 0x12ca10, Func Offset: 0xc00
	// Line 911, Address: 0x12ca20, Func Offset: 0xc10
	// Line 912, Address: 0x12ca30, Func Offset: 0xc20
	// Line 924, Address: 0x12ca48, Func Offset: 0xc38
	// Line 916, Address: 0x12ca4c, Func Offset: 0xc3c
	// Line 924, Address: 0x12ca50, Func Offset: 0xc40
	// Line 928, Address: 0x12ca68, Func Offset: 0xc58
	// Line 926, Address: 0x12ca6c, Func Offset: 0xc5c
	// Line 928, Address: 0x12ca74, Func Offset: 0xc64
	// Line 926, Address: 0x12ca78, Func Offset: 0xc68
	// Line 928, Address: 0x12ca7c, Func Offset: 0xc6c
	// Line 929, Address: 0x12ca84, Func Offset: 0xc74
	// Line 931, Address: 0x12ca8c, Func Offset: 0xc7c
	// Line 935, Address: 0x12ca90, Func Offset: 0xc80
	// Line 934, Address: 0x12ca98, Func Offset: 0xc88
	// Line 935, Address: 0x12ca9c, Func Offset: 0xc8c
	// Line 937, Address: 0x12caac, Func Offset: 0xc9c
	// Line 945, Address: 0x12cac8, Func Offset: 0xcb8
	// Line 938, Address: 0x12cacc, Func Offset: 0xcbc
	// Line 939, Address: 0x12cad0, Func Offset: 0xcc0
	// Line 948, Address: 0x12cadc, Func Offset: 0xccc
	// Line 951, Address: 0x12caf8, Func Offset: 0xce8
	// Line 949, Address: 0x12cafc, Func Offset: 0xcec
	// Line 953, Address: 0x12cb04, Func Offset: 0xcf4
	// Line 955, Address: 0x12cb10, Func Offset: 0xd00
	// Line 956, Address: 0x12cb30, Func Offset: 0xd20
	// Line 958, Address: 0x12cb34, Func Offset: 0xd24
	// Line 959, Address: 0x12cb40, Func Offset: 0xd30
	// Line 967, Address: 0x12cb44, Func Offset: 0xd34
	// Line 997, Address: 0x12cb48, Func Offset: 0xd38
	// Line 998, Address: 0x12cb80, Func Offset: 0xd70
	// Line 997, Address: 0x12cb84, Func Offset: 0xd74
	// Line 998, Address: 0x12cb94, Func Offset: 0xd84
	// Line 1001, Address: 0x12cbc8, Func Offset: 0xdb8
	// Line 998, Address: 0x12cbcc, Func Offset: 0xdbc
	// Line 1001, Address: 0x12cbe0, Func Offset: 0xdd0
	// Line 1007, Address: 0x12cbf8, Func Offset: 0xde8
	// Line 1003, Address: 0x12cbfc, Func Offset: 0xdec
	// Line 1007, Address: 0x12cc00, Func Offset: 0xdf0
	// Line 1009, Address: 0x12cc14, Func Offset: 0xe04
	// Line 1010, Address: 0x12cc1c, Func Offset: 0xe0c
	// Line 1009, Address: 0x12cc24, Func Offset: 0xe14
	// Line 1010, Address: 0x12cc2c, Func Offset: 0xe1c
	// Line 1009, Address: 0x12cc30, Func Offset: 0xe20
	// Line 1010, Address: 0x12cc34, Func Offset: 0xe24
	// Line 1009, Address: 0x12cc38, Func Offset: 0xe28
	// Line 1010, Address: 0x12cc3c, Func Offset: 0xe2c
	// Line 1009, Address: 0x12cc40, Func Offset: 0xe30
	// Line 1010, Address: 0x12cc44, Func Offset: 0xe34
	// Line 1014, Address: 0x12cc48, Func Offset: 0xe38
	// Line 1015, Address: 0x12cc60, Func Offset: 0xe50
	// Line 1016, Address: 0x12cc74, Func Offset: 0xe64
	// Line 1017, Address: 0x12ccd4, Func Offset: 0xec4
	// Line 1019, Address: 0x12cce8, Func Offset: 0xed8
	// Line 1017, Address: 0x12ccec, Func Offset: 0xedc
	// Line 1019, Address: 0x12ccf4, Func Offset: 0xee4
	// Line 1020, Address: 0x12cd08, Func Offset: 0xef8
	// Line 1028, Address: 0x12cd18, Func Offset: 0xf08
	// Line 1023, Address: 0x12cd1c, Func Offset: 0xf0c
	// Line 1028, Address: 0x12cd20, Func Offset: 0xf10
	// Line 1023, Address: 0x12cd2c, Func Offset: 0xf1c
	// Line 1024, Address: 0x12cd34, Func Offset: 0xf24
	// Line 1028, Address: 0x12cd40, Func Offset: 0xf30
	// Line 1029, Address: 0x12cd50, Func Offset: 0xf40
	// Line 1030, Address: 0x12cd54, Func Offset: 0xf44
	// Line 1031, Address: 0x12cd60, Func Offset: 0xf50
	// Line 1033, Address: 0x12cd64, Func Offset: 0xf54
	// Line 1036, Address: 0x12cd68, Func Offset: 0xf58
	// Line 1038, Address: 0x12cd70, Func Offset: 0xf60
	// Line 1039, Address: 0x12cd84, Func Offset: 0xf74
	// Line 1040, Address: 0x12cde4, Func Offset: 0xfd4
	// Line 1042, Address: 0x12cdf8, Func Offset: 0xfe8
	// Line 1040, Address: 0x12cdfc, Func Offset: 0xfec
	// Line 1042, Address: 0x12ce04, Func Offset: 0xff4
	// Line 1043, Address: 0x12ce18, Func Offset: 0x1008
	// Line 1051, Address: 0x12ce28, Func Offset: 0x1018
	// Line 1046, Address: 0x12ce2c, Func Offset: 0x101c
	// Line 1051, Address: 0x12ce30, Func Offset: 0x1020
	// Line 1046, Address: 0x12ce3c, Func Offset: 0x102c
	// Line 1047, Address: 0x12ce44, Func Offset: 0x1034
	// Line 1051, Address: 0x12ce50, Func Offset: 0x1040
	// Line 1052, Address: 0x12ce60, Func Offset: 0x1050
	// Line 1053, Address: 0x12ce64, Func Offset: 0x1054
	// Line 1054, Address: 0x12ce70, Func Offset: 0x1060
	// Line 1056, Address: 0x12ce74, Func Offset: 0x1064
	// Line 1059, Address: 0x12ce78, Func Offset: 0x1068
	// Line 1061, Address: 0x12ce84, Func Offset: 0x1074
	// Line 1066, Address: 0x12ce88, Func Offset: 0x1078
	// Line 1067, Address: 0x12ceac, Func Offset: 0x109c
	// Line 1068, Address: 0x12cec0, Func Offset: 0x10b0
	// Line 1069, Address: 0x12cf24, Func Offset: 0x1114
	// Line 1070, Address: 0x12cf38, Func Offset: 0x1128
	// Line 1069, Address: 0x12cf3c, Func Offset: 0x112c
	// Line 1070, Address: 0x12cf44, Func Offset: 0x1134
	// Line 1069, Address: 0x12cf4c, Func Offset: 0x113c
	// Line 1070, Address: 0x12cf50, Func Offset: 0x1140
	// Line 1071, Address: 0x12cf5c, Func Offset: 0x114c
	// Line 1075, Address: 0x12cf60, Func Offset: 0x1150
	// Line 1077, Address: 0x12cf68, Func Offset: 0x1158
	// Line 1078, Address: 0x12cf7c, Func Offset: 0x116c
	// Line 1079, Address: 0x12cfdc, Func Offset: 0x11cc
	// Line 1080, Address: 0x12cff0, Func Offset: 0x11e0
	// Line 1079, Address: 0x12cff4, Func Offset: 0x11e4
	// Line 1080, Address: 0x12cffc, Func Offset: 0x11ec
	// Line 1079, Address: 0x12d004, Func Offset: 0x11f4
	// Line 1080, Address: 0x12d008, Func Offset: 0x11f8
	// Line 1081, Address: 0x12d014, Func Offset: 0x1204
	// Line 1085, Address: 0x12d018, Func Offset: 0x1208
	// Line 1087, Address: 0x12d024, Func Offset: 0x1214
	// Line 1090, Address: 0x12d028, Func Offset: 0x1218
	// Line 1095, Address: 0x12d074, Func Offset: 0x1264
	// Line 1096, Address: 0x12d080, Func Offset: 0x1270
	// Line 1097, Address: 0x12d088, Func Offset: 0x1278
	// Line 1096, Address: 0x12d08c, Func Offset: 0x127c
	// Line 1103, Address: 0x12d090, Func Offset: 0x1280
	// Line 1095, Address: 0x12d094, Func Offset: 0x1284
	// Line 1096, Address: 0x12d09c, Func Offset: 0x128c
	// Line 1095, Address: 0x12d0a4, Func Offset: 0x1294
	// Line 1097, Address: 0x12d0a8, Func Offset: 0x1298
	// Line 1098, Address: 0x12d0ac, Func Offset: 0x129c
	// Line 1095, Address: 0x12d0b0, Func Offset: 0x12a0
	// Line 1098, Address: 0x12d0b4, Func Offset: 0x12a4
	// Line 1096, Address: 0x12d0bc, Func Offset: 0x12ac
	// Line 1098, Address: 0x12d0c4, Func Offset: 0x12b4
	// Line 1096, Address: 0x12d0c8, Func Offset: 0x12b8
	// Line 1097, Address: 0x12d0cc, Func Offset: 0x12bc
	// Line 1099, Address: 0x12d0d0, Func Offset: 0x12c0
	// Line 1097, Address: 0x12d0d4, Func Offset: 0x12c4
	// Line 1099, Address: 0x12d0d8, Func Offset: 0x12c8
	// Line 1095, Address: 0x12d0e0, Func Offset: 0x12d0
	// Line 1099, Address: 0x12d0e4, Func Offset: 0x12d4
	// Line 1100, Address: 0x12d0e8, Func Offset: 0x12d8
	// Line 1103, Address: 0x12d0f8, Func Offset: 0x12e8
	// Line 1104, Address: 0x12d120, Func Offset: 0x1310
	// Line 1105, Address: 0x12d128, Func Offset: 0x1318
	// Line 1106, Address: 0x12d13c, Func Offset: 0x132c
	// Line 1107, Address: 0x12d14c, Func Offset: 0x133c
	// Line 1109, Address: 0x12d150, Func Offset: 0x1340
	// Line 1110, Address: 0x12d154, Func Offset: 0x1344
	// Line 1109, Address: 0x12d15c, Func Offset: 0x134c
	// Line 1110, Address: 0x12d160, Func Offset: 0x1350
	// Line 1111, Address: 0x12d16c, Func Offset: 0x135c
	// Line 1119, Address: 0x12d170, Func Offset: 0x1360
	// Line 1124, Address: 0x12d1ac, Func Offset: 0x139c
	// Line 1128, Address: 0x12d1b8, Func Offset: 0x13a8
	// Line 1126, Address: 0x12d1bc, Func Offset: 0x13ac
	// Line 1125, Address: 0x12d1c0, Func Offset: 0x13b0
	// Line 1127, Address: 0x12d1c4, Func Offset: 0x13b4
	// Line 1128, Address: 0x12d1c8, Func Offset: 0x13b8
	// Line 1129, Address: 0x12d250, Func Offset: 0x1440
	// Line 1130, Address: 0x12d254, Func Offset: 0x1444
	// Line 1133, Address: 0x12d25c, Func Offset: 0x144c
	// Line 1138, Address: 0x12d27c, Func Offset: 0x146c
	// Line 1139, Address: 0x12d28c, Func Offset: 0x147c
	// Line 1140, Address: 0x12d29c, Func Offset: 0x148c
	// Line 1141, Address: 0x12d2a8, Func Offset: 0x1498
	// Line 1142, Address: 0x12d2b4, Func Offset: 0x14a4
	// Line 1144, Address: 0x12d2b8, Func Offset: 0x14a8
	// Line 1143, Address: 0x12d2bc, Func Offset: 0x14ac
	// Line 1144, Address: 0x12d2c4, Func Offset: 0x14b4
	// Line 1143, Address: 0x12d2cc, Func Offset: 0x14bc
	// Line 1144, Address: 0x12d2e0, Func Offset: 0x14d0
	// Line 1146, Address: 0x12d340, Func Offset: 0x1530
	// Line 1145, Address: 0x12d344, Func Offset: 0x1534
	// Line 1146, Address: 0x12d350, Func Offset: 0x1540
	// Line 1145, Address: 0x12d358, Func Offset: 0x1548
	// Line 1146, Address: 0x12d36c, Func Offset: 0x155c
	// Line 1154, Address: 0x12d3c8, Func Offset: 0x15b8
	// Line 1153, Address: 0x12d3cc, Func Offset: 0x15bc
	// Line 1154, Address: 0x12d3d8, Func Offset: 0x15c8
	// Line 1155, Address: 0x12d3ec, Func Offset: 0x15dc
	// Line 1156, Address: 0x12d3fc, Func Offset: 0x15ec
	// Line 1157, Address: 0x12d400, Func Offset: 0x15f0
	// Line 1159, Address: 0x12d414, Func Offset: 0x1604
	// Line 1158, Address: 0x12d418, Func Offset: 0x1608
	// Line 1159, Address: 0x12d41c, Func Offset: 0x160c
	// Line 1160, Address: 0x12d424, Func Offset: 0x1614
	// Line 1161, Address: 0x12d42c, Func Offset: 0x161c
	// Line 1163, Address: 0x12d438, Func Offset: 0x1628
	// Line 1162, Address: 0x12d43c, Func Offset: 0x162c
	// Line 1163, Address: 0x12d440, Func Offset: 0x1630
	// Line 1164, Address: 0x12d448, Func Offset: 0x1638
	// Line 1168, Address: 0x12d454, Func Offset: 0x1644
	// Line 1170, Address: 0x12d458, Func Offset: 0x1648
	// Line 1178, Address: 0x12d478, Func Offset: 0x1668
	// Line 1179, Address: 0x12d540, Func Offset: 0x1730
	// Line 1184, Address: 0x12d550, Func Offset: 0x1740
	// Line 1185, Address: 0x12d568, Func Offset: 0x1758
	// Line 1193, Address: 0x12d58c, Func Offset: 0x177c
	// Line 1194, Address: 0x12d598, Func Offset: 0x1788
	// Line 1202, Address: 0x12d5bc, Func Offset: 0x17ac
	// Line 1203, Address: 0x12d5c0, Func Offset: 0x17b0
	// Line 1214, Address: 0x12d5e4, Func Offset: 0x17d4
	// Line 1216, Address: 0x12d5f4, Func Offset: 0x17e4
	// Line 1225, Address: 0x12d61c, Func Offset: 0x180c
	// Line 1223, Address: 0x12d620, Func Offset: 0x1810
	// Line 1225, Address: 0x12d624, Func Offset: 0x1814
	// Line 1228, Address: 0x12d628, Func Offset: 0x1818
	// Line 1219, Address: 0x12d62c, Func Offset: 0x181c
	// Line 1228, Address: 0x12d630, Func Offset: 0x1820
	// Line 1219, Address: 0x12d644, Func Offset: 0x1834
	// Line 1225, Address: 0x12d648, Func Offset: 0x1838
	// Line 1223, Address: 0x12d64c, Func Offset: 0x183c
	// Line 1225, Address: 0x12d654, Func Offset: 0x1844
	// Line 1223, Address: 0x12d658, Func Offset: 0x1848
	// Line 1224, Address: 0x12d670, Func Offset: 0x1860
	// Line 1223, Address: 0x12d674, Func Offset: 0x1864
	// Line 1224, Address: 0x12d678, Func Offset: 0x1868
	// Line 1223, Address: 0x12d67c, Func Offset: 0x186c
	// Line 1224, Address: 0x12d688, Func Offset: 0x1878
	// Line 1225, Address: 0x12d6b4, Func Offset: 0x18a4
	// Line 1224, Address: 0x12d6b8, Func Offset: 0x18a8
	// Line 1225, Address: 0x12d6bc, Func Offset: 0x18ac
	// Line 1224, Address: 0x12d6c0, Func Offset: 0x18b0
	// Line 1228, Address: 0x12d6c4, Func Offset: 0x18b4
	// Line 1231, Address: 0x12d6cc, Func Offset: 0x18bc
	// Line 1232, Address: 0x12d6d4, Func Offset: 0x18c4
	// Line 1233, Address: 0x12d6ec, Func Offset: 0x18dc
	// Line 1234, Address: 0x12d6f4, Func Offset: 0x18e4
	// Line 1235, Address: 0x12d6fc, Func Offset: 0x18ec
	// Line 1237, Address: 0x12d704, Func Offset: 0x18f4
	// Line 1240, Address: 0x12d708, Func Offset: 0x18f8
	// Line 1242, Address: 0x12d714, Func Offset: 0x1904
	// Line 1243, Address: 0x12d72c, Func Offset: 0x191c
	// Line 1246, Address: 0x12d730, Func Offset: 0x1920
	// Line 1249, Address: 0x12d738, Func Offset: 0x1928
	// Line 1250, Address: 0x12d740, Func Offset: 0x1930
	// Line 1251, Address: 0x12d748, Func Offset: 0x1938
	// Func End, Address: 0x12d778, Func Offset: 0x1968
}

// zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff
// Start address: 0x12d780
void zCameraFreeLookSetGoals(xCamera* cam, float32 pitch_s, float32& dgoal, float32& hgoal, float32& pitch_goal, float32& lktm, float32 dt)
{
	float32 s;
	// Line 588, Address: 0x12d780, Func Offset: 0
	// Line 589, Address: 0x12d7c0, Func Offset: 0x40
	// Line 591, Address: 0x12d7d4, Func Offset: 0x54
	// Line 592, Address: 0x12d7dc, Func Offset: 0x5c
	// Line 593, Address: 0x12d824, Func Offset: 0xa4
	// Line 594, Address: 0x12d86c, Func Offset: 0xec
	// Line 595, Address: 0x12d888, Func Offset: 0x108
	// Line 598, Address: 0x12d890, Func Offset: 0x110
	// Line 599, Address: 0x12d8ec, Func Offset: 0x16c
	// Line 600, Address: 0x12d954, Func Offset: 0x1d4
	// Line 602, Address: 0x12d968, Func Offset: 0x1e8
	// Line 600, Address: 0x12d96c, Func Offset: 0x1ec
	// Line 601, Address: 0x12d974, Func Offset: 0x1f4
	// Line 602, Address: 0x12d990, Func Offset: 0x210
	// Line 608, Address: 0x12da04, Func Offset: 0x284
	// Line 609, Address: 0x12da60, Func Offset: 0x2e0
	// Line 610, Address: 0x12da68, Func Offset: 0x2e8
	// Line 611, Address: 0x12da94, Func Offset: 0x314
	// Line 612, Address: 0x12da98, Func Offset: 0x318
	// Line 616, Address: 0x12daa0, Func Offset: 0x320
	// Line 617, Address: 0x12dad8, Func Offset: 0x358
	// Line 616, Address: 0x12dadc, Func Offset: 0x35c
	// Line 617, Address: 0x12dae8, Func Offset: 0x368
	// Line 618, Address: 0x12db18, Func Offset: 0x398
	// Line 617, Address: 0x12db1c, Func Offset: 0x39c
	// Line 618, Address: 0x12db28, Func Offset: 0x3a8
	// Line 622, Address: 0x12db40, Func Offset: 0x3c0
	// Line 623, Address: 0x12db5c, Func Offset: 0x3dc
	// Line 624, Address: 0x12db74, Func Offset: 0x3f4
	// Line 625, Address: 0x12db8c, Func Offset: 0x40c
	// Line 627, Address: 0x12db9c, Func Offset: 0x41c
	// Line 628, Address: 0x12dba4, Func Offset: 0x424
	// Line 631, Address: 0x12dba8, Func Offset: 0x428
	// Line 633, Address: 0x12dbbc, Func Offset: 0x43c
	// Line 634, Address: 0x12dbd0, Func Offset: 0x450
	// Line 635, Address: 0x12dbe4, Func Offset: 0x464
	// Line 637, Address: 0x12dbfc, Func Offset: 0x47c
	// Line 639, Address: 0x12dc08, Func Offset: 0x488
	// Line 638, Address: 0x12dc0c, Func Offset: 0x48c
	// Line 639, Address: 0x12dc10, Func Offset: 0x490
	// Line 640, Address: 0x12dc20, Func Offset: 0x4a0
	// Line 641, Address: 0x12dc34, Func Offset: 0x4b4
	// Line 646, Address: 0x12dc48, Func Offset: 0x4c8
	// Line 647, Address: 0x12dc68, Func Offset: 0x4e8
	// Line 648, Address: 0x12dc6c, Func Offset: 0x4ec
	// Line 651, Address: 0x12dc78, Func Offset: 0x4f8
	// Line 652, Address: 0x12dc80, Func Offset: 0x500
	// Line 653, Address: 0x12dc84, Func Offset: 0x504
	// Line 654, Address: 0x12dc88, Func Offset: 0x508
	// Func End, Address: 0x12dcb8, Func Offset: 0x538
}

// zCameraRewardUpdate__FP7xCameraf
// Start address: 0x12dcc0
int32 zCameraRewardUpdate(xCamera* cam, float32 dt)
{
	xVec3 v;
	// Line 494, Address: 0x12dcc0, Func Offset: 0
	// Line 495, Address: 0x12dcd4, Func Offset: 0x14
	// Line 497, Address: 0x12dcdc, Func Offset: 0x1c
	// Line 499, Address: 0x12dd04, Func Offset: 0x44
	// Line 497, Address: 0x12dd08, Func Offset: 0x48
	// Line 499, Address: 0x12dd0c, Func Offset: 0x4c
	// Line 498, Address: 0x12dd14, Func Offset: 0x54
	// Line 499, Address: 0x12dd38, Func Offset: 0x78
	// Line 506, Address: 0x12dd44, Func Offset: 0x84
	// Line 508, Address: 0x12dd58, Func Offset: 0x98
	// Line 510, Address: 0x12dd60, Func Offset: 0xa0
	// Line 511, Address: 0x12dd64, Func Offset: 0xa4
	// Line 510, Address: 0x12dd68, Func Offset: 0xa8
	// Line 511, Address: 0x12dd6c, Func Offset: 0xac
	// Line 510, Address: 0x12dd70, Func Offset: 0xb0
	// Line 512, Address: 0x12dd74, Func Offset: 0xb4
	// Line 511, Address: 0x12dd78, Func Offset: 0xb8
	// Line 512, Address: 0x12dd7c, Func Offset: 0xbc
	// Line 513, Address: 0x12dd84, Func Offset: 0xc4
	// Line 514, Address: 0x12dd8c, Func Offset: 0xcc
	// Line 515, Address: 0x12dd94, Func Offset: 0xd4
	// Line 517, Address: 0x12dd9c, Func Offset: 0xdc
	// Line 519, Address: 0x12ddb4, Func Offset: 0xf4
	// Line 520, Address: 0x12ddb8, Func Offset: 0xf8
	// Line 519, Address: 0x12ddbc, Func Offset: 0xfc
	// Line 520, Address: 0x12ddc0, Func Offset: 0x100
	// Line 519, Address: 0x12ddc4, Func Offset: 0x104
	// Line 521, Address: 0x12ddc8, Func Offset: 0x108
	// Line 520, Address: 0x12ddcc, Func Offset: 0x10c
	// Line 521, Address: 0x12ddd0, Func Offset: 0x110
	// Line 522, Address: 0x12ddd8, Func Offset: 0x118
	// Line 523, Address: 0x12dde0, Func Offset: 0x120
	// Line 524, Address: 0x12dde8, Func Offset: 0x128
	// Line 526, Address: 0x12ddec, Func Offset: 0x12c
	// Line 528, Address: 0x12de04, Func Offset: 0x144
	// Line 529, Address: 0x12de08, Func Offset: 0x148
	// Line 528, Address: 0x12de0c, Func Offset: 0x14c
	// Line 529, Address: 0x12de10, Func Offset: 0x150
	// Line 528, Address: 0x12de14, Func Offset: 0x154
	// Line 530, Address: 0x12de18, Func Offset: 0x158
	// Line 529, Address: 0x12de1c, Func Offset: 0x15c
	// Line 530, Address: 0x12de20, Func Offset: 0x160
	// Line 531, Address: 0x12de28, Func Offset: 0x168
	// Line 532, Address: 0x12de30, Func Offset: 0x170
	// Line 533, Address: 0x12de38, Func Offset: 0x178
	// Line 535, Address: 0x12de40, Func Offset: 0x180
	// Line 538, Address: 0x12de54, Func Offset: 0x194
	// Line 540, Address: 0x12de5c, Func Offset: 0x19c
	// Line 541, Address: 0x12de60, Func Offset: 0x1a0
	// Line 540, Address: 0x12de64, Func Offset: 0x1a4
	// Line 541, Address: 0x12de68, Func Offset: 0x1a8
	// Line 542, Address: 0x12de6c, Func Offset: 0x1ac
	// Line 544, Address: 0x12de70, Func Offset: 0x1b0
	// Line 542, Address: 0x12de74, Func Offset: 0x1b4
	// Line 543, Address: 0x12de7c, Func Offset: 0x1bc
	// Line 545, Address: 0x12de84, Func Offset: 0x1c4
	// Line 547, Address: 0x12de8c, Func Offset: 0x1cc
	// Line 549, Address: 0x12dea4, Func Offset: 0x1e4
	// Line 550, Address: 0x12dea8, Func Offset: 0x1e8
	// Line 549, Address: 0x12deac, Func Offset: 0x1ec
	// Line 550, Address: 0x12deb0, Func Offset: 0x1f0
	// Line 551, Address: 0x12deb4, Func Offset: 0x1f4
	// Line 553, Address: 0x12deb8, Func Offset: 0x1f8
	// Line 551, Address: 0x12debc, Func Offset: 0x1fc
	// Line 552, Address: 0x12dec4, Func Offset: 0x204
	// Line 554, Address: 0x12decc, Func Offset: 0x20c
	// Line 556, Address: 0x12ded4, Func Offset: 0x214
	// Line 558, Address: 0x12deec, Func Offset: 0x22c
	// Line 559, Address: 0x12def0, Func Offset: 0x230
	// Line 558, Address: 0x12def4, Func Offset: 0x234
	// Line 559, Address: 0x12def8, Func Offset: 0x238
	// Line 560, Address: 0x12defc, Func Offset: 0x23c
	// Line 562, Address: 0x12df00, Func Offset: 0x240
	// Line 560, Address: 0x12df04, Func Offset: 0x244
	// Line 561, Address: 0x12df0c, Func Offset: 0x24c
	// Line 563, Address: 0x12df14, Func Offset: 0x254
	// Line 571, Address: 0x12df20, Func Offset: 0x260
	// Line 572, Address: 0x12df44, Func Offset: 0x284
	// Line 571, Address: 0x12df48, Func Offset: 0x288
	// Line 572, Address: 0x12df5c, Func Offset: 0x29c
	// Line 574, Address: 0x12df78, Func Offset: 0x2b8
	// Line 575, Address: 0x12df8c, Func Offset: 0x2cc
	// Line 580, Address: 0x12dfa0, Func Offset: 0x2e0
	// Line 584, Address: 0x12dfd4, Func Offset: 0x314
	// Line 583, Address: 0x12dfe0, Func Offset: 0x320
	// Line 584, Address: 0x12dfe4, Func Offset: 0x324
	// Func End, Address: 0x12dfec, Func Offset: 0x32c
}

// zCameraFlyRestoreBackup__FP7xCamera
// Start address: 0x12dff0
void zCameraFlyRestoreBackup(xCamera* backup)
{
	// Line 444, Address: 0x12dff0, Func Offset: 0
	// Line 445, Address: 0x12dff4, Func Offset: 0x4
	// Line 444, Address: 0x12dff8, Func Offset: 0x8
	// Line 445, Address: 0x12dffc, Func Offset: 0xc
	// Line 444, Address: 0x12e000, Func Offset: 0x10
	// Line 446, Address: 0x12e004, Func Offset: 0x14
	// Line 444, Address: 0x12e008, Func Offset: 0x18
	// Line 445, Address: 0x12e00c, Func Offset: 0x1c
	// Line 446, Address: 0x12e01c, Func Offset: 0x2c
	// Line 445, Address: 0x12e020, Func Offset: 0x30
	// Line 446, Address: 0x12e028, Func Offset: 0x38
	// Line 447, Address: 0x12e030, Func Offset: 0x40
	// Line 448, Address: 0x12e03c, Func Offset: 0x4c
	// Line 467, Address: 0x12e048, Func Offset: 0x58
	// Line 468, Address: 0x12e04c, Func Offset: 0x5c
	// Line 445, Address: 0x12e050, Func Offset: 0x60
	// Line 469, Address: 0x12e06c, Func Offset: 0x7c
	// Line 445, Address: 0x12e070, Func Offset: 0x80
	// Line 446, Address: 0x12e074, Func Offset: 0x84
	// Line 447, Address: 0x12e084, Func Offset: 0x94
	// Line 448, Address: 0x12e090, Func Offset: 0xa0
	// Line 445, Address: 0x12e098, Func Offset: 0xa8
	// Line 448, Address: 0x12e09c, Func Offset: 0xac
	// Line 445, Address: 0x12e0a0, Func Offset: 0xb0
	// Line 467, Address: 0x12e0ac, Func Offset: 0xbc
	// Line 445, Address: 0x12e0b0, Func Offset: 0xc0
	// Line 468, Address: 0x12e0b4, Func Offset: 0xc4
	// Line 469, Address: 0x12e0b8, Func Offset: 0xc8
	// Line 445, Address: 0x12e0bc, Func Offset: 0xcc
	// Line 446, Address: 0x12e118, Func Offset: 0x128
	// Line 447, Address: 0x12e1a8, Func Offset: 0x1b8
	// Line 448, Address: 0x12e214, Func Offset: 0x224
	// Line 449, Address: 0x12e2cc, Func Offset: 0x2dc
	// Line 450, Address: 0x12e2f0, Func Offset: 0x300
	// Line 451, Address: 0x12e2fc, Func Offset: 0x30c
	// Line 452, Address: 0x12e308, Func Offset: 0x318
	// Line 453, Address: 0x12e314, Func Offset: 0x324
	// Line 454, Address: 0x12e320, Func Offset: 0x330
	// Line 455, Address: 0x12e32c, Func Offset: 0x33c
	// Line 456, Address: 0x12e338, Func Offset: 0x348
	// Line 457, Address: 0x12e344, Func Offset: 0x354
	// Line 458, Address: 0x12e374, Func Offset: 0x384
	// Line 459, Address: 0x12e3a4, Func Offset: 0x3b4
	// Line 460, Address: 0x12e3d4, Func Offset: 0x3e4
	// Line 461, Address: 0x12e3e0, Func Offset: 0x3f0
	// Line 462, Address: 0x12e3ec, Func Offset: 0x3fc
	// Line 463, Address: 0x12e3f8, Func Offset: 0x408
	// Line 464, Address: 0x12e404, Func Offset: 0x414
	// Line 465, Address: 0x12e410, Func Offset: 0x420
	// Line 466, Address: 0x12e41c, Func Offset: 0x42c
	// Line 467, Address: 0x12e428, Func Offset: 0x438
	// Line 468, Address: 0x12e44c, Func Offset: 0x45c
	// Line 469, Address: 0x12e470, Func Offset: 0x480
	// Line 470, Address: 0x12e494, Func Offset: 0x4a4
	// Line 471, Address: 0x12e4a0, Func Offset: 0x4b0
	// Line 472, Address: 0x12e4ac, Func Offset: 0x4bc
	// Line 473, Address: 0x12e4b8, Func Offset: 0x4c8
	// Line 474, Address: 0x12e4c4, Func Offset: 0x4d4
	// Line 475, Address: 0x12e4d0, Func Offset: 0x4e0
	// Line 476, Address: 0x12e4dc, Func Offset: 0x4ec
	// Line 477, Address: 0x12e50c, Func Offset: 0x51c
	// Line 478, Address: 0x12e53c, Func Offset: 0x54c
	// Line 479, Address: 0x12e56c, Func Offset: 0x57c
	// Line 480, Address: 0x12e59c, Func Offset: 0x5ac
	// Line 481, Address: 0x12e5cc, Func Offset: 0x5dc
	// Line 482, Address: 0x12e5fc, Func Offset: 0x60c
	// Line 483, Address: 0x12e62c, Func Offset: 0x63c
	// Func End, Address: 0x12e640, Func Offset: 0x650
}

// zCameraFlyStart__FUi
// Start address: 0x12e640
void zCameraFlyStart(uint32 assetID)
{
	st_PKR_ASSET_TOCINFO ainfo;
	// Line 410, Address: 0x12e640, Func Offset: 0
	// Line 413, Address: 0x12e648, Func Offset: 0x8
	// Line 410, Address: 0x12e64c, Func Offset: 0xc
	// Line 413, Address: 0x12e650, Func Offset: 0x10
	// Line 415, Address: 0x12e660, Func Offset: 0x20
	// Line 417, Address: 0x12e664, Func Offset: 0x24
	// Line 415, Address: 0x12e668, Func Offset: 0x28
	// Line 421, Address: 0x12e66c, Func Offset: 0x2c
	// Line 419, Address: 0x12e670, Func Offset: 0x30
	// Line 420, Address: 0x12e674, Func Offset: 0x34
	// Line 419, Address: 0x12e678, Func Offset: 0x38
	// Line 416, Address: 0x12e67c, Func Offset: 0x3c
	// Line 419, Address: 0x12e680, Func Offset: 0x40
	// Line 418, Address: 0x12e684, Func Offset: 0x44
	// Line 417, Address: 0x12e688, Func Offset: 0x48
	// Line 421, Address: 0x12e68c, Func Offset: 0x4c
	// Line 422, Address: 0x12e694, Func Offset: 0x54
	// Line 423, Address: 0x12e69c, Func Offset: 0x5c
	// Line 430, Address: 0x12ecf8, Func Offset: 0x6b8
	// Line 431, Address: 0x12ed70, Func Offset: 0x730
	// Line 433, Address: 0x12ed8c, Func Offset: 0x74c
	// Line 434, Address: 0x12ed90, Func Offset: 0x750
	// Func End, Address: 0x12eda0, Func Offset: 0x760
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
	zFlyKey keys[4];
	float32 matdiff1;
	float32 matdiff2;
	float32 matdiff3;
	xMat3x3 tmpMat;
	xQuat quats[2];
	xQuat qresult;
	// Line 327, Address: 0x12eda0, Func Offset: 0
	// Line 329, Address: 0x12eda4, Func Offset: 0x4
	// Line 327, Address: 0x12eda8, Func Offset: 0x8
	// Line 329, Address: 0x12edac, Func Offset: 0xc
	// Line 327, Address: 0x12edb0, Func Offset: 0x10
	// Line 329, Address: 0x12ede8, Func Offset: 0x48
	// Line 330, Address: 0x12ee10, Func Offset: 0x70
	// Line 335, Address: 0x12ee58, Func Offset: 0xb8
	// Line 336, Address: 0x12ee6c, Func Offset: 0xcc
	// Line 337, Address: 0x12ee7c, Func Offset: 0xdc
	// Line 338, Address: 0x12ee84, Func Offset: 0xe4
	// Line 339, Address: 0x12ee8c, Func Offset: 0xec
	// Line 340, Address: 0x12ee9c, Func Offset: 0xfc
	// Line 346, Address: 0x12eea4, Func Offset: 0x104
	// Line 347, Address: 0x12eec8, Func Offset: 0x128
	// Line 348, Address: 0x12eecc, Func Offset: 0x12c
	// Line 346, Address: 0x12eed4, Func Offset: 0x134
	// Line 347, Address: 0x12eedc, Func Offset: 0x13c
	// Line 348, Address: 0x12eee8, Func Offset: 0x148
	// Line 346, Address: 0x12eef0, Func Offset: 0x150
	// Line 347, Address: 0x12eef4, Func Offset: 0x154
	// Line 346, Address: 0x12eef8, Func Offset: 0x158
	// Line 348, Address: 0x12eefc, Func Offset: 0x15c
	// Line 349, Address: 0x12ef00, Func Offset: 0x160
	// Line 348, Address: 0x12ef04, Func Offset: 0x164
	// Line 349, Address: 0x12ef08, Func Offset: 0x168
	// Line 346, Address: 0x12ef10, Func Offset: 0x170
	// Line 347, Address: 0x12ef8c, Func Offset: 0x1ec
	// Line 348, Address: 0x12f00c, Func Offset: 0x26c
	// Line 349, Address: 0x12f08c, Func Offset: 0x2ec
	// Line 369, Address: 0x12f118, Func Offset: 0x378
	// Line 370, Address: 0x12f128, Func Offset: 0x388
	// Line 373, Address: 0x12f140, Func Offset: 0x3a0
	// Line 370, Address: 0x12f144, Func Offset: 0x3a4
	// Line 371, Address: 0x12f158, Func Offset: 0x3b8
	// Line 372, Address: 0x12f160, Func Offset: 0x3c0
	// Line 371, Address: 0x12f168, Func Offset: 0x3c8
	// Line 372, Address: 0x12f17c, Func Offset: 0x3dc
	// Line 371, Address: 0x12f184, Func Offset: 0x3e4
	// Line 372, Address: 0x12f18c, Func Offset: 0x3ec
	// Line 370, Address: 0x12f198, Func Offset: 0x3f8
	// Line 372, Address: 0x12f1a0, Func Offset: 0x400
	// Line 370, Address: 0x12f1a8, Func Offset: 0x408
	// Line 371, Address: 0x12f1ac, Func Offset: 0x40c
	// Line 370, Address: 0x12f1b4, Func Offset: 0x414
	// Line 371, Address: 0x12f1b8, Func Offset: 0x418
	// Line 372, Address: 0x12f1bc, Func Offset: 0x41c
	// Line 371, Address: 0x12f1c4, Func Offset: 0x424
	// Line 372, Address: 0x12f1c8, Func Offset: 0x428
	// Line 370, Address: 0x12f1cc, Func Offset: 0x42c
	// Line 371, Address: 0x12f1d4, Func Offset: 0x434
	// Line 372, Address: 0x12f1d8, Func Offset: 0x438
	// Line 371, Address: 0x12f1dc, Func Offset: 0x43c
	// Line 373, Address: 0x12f1e0, Func Offset: 0x440
	// Line 372, Address: 0x12f1ec, Func Offset: 0x44c
	// Line 373, Address: 0x12f1f8, Func Offset: 0x458
	// Line 374, Address: 0x12f22c, Func Offset: 0x48c
	// Line 375, Address: 0x12f230, Func Offset: 0x490
	// Line 376, Address: 0x12f238, Func Offset: 0x498
	// Line 377, Address: 0x12f240, Func Offset: 0x4a0
	// Line 378, Address: 0x12f24c, Func Offset: 0x4ac
	// Line 379, Address: 0x12f258, Func Offset: 0x4b8
	// Line 380, Address: 0x12f29c, Func Offset: 0x4fc
	// Line 388, Address: 0x12f2a0, Func Offset: 0x500
	// Line 395, Address: 0x12f2c0, Func Offset: 0x520
	// Line 389, Address: 0x12f2c4, Func Offset: 0x524
	// Line 398, Address: 0x12f2c8, Func Offset: 0x528
	// Line 389, Address: 0x12f2d0, Func Offset: 0x530
	// Line 390, Address: 0x12f2d8, Func Offset: 0x538
	// Line 391, Address: 0x12f2e4, Func Offset: 0x544
	// Line 392, Address: 0x12f2f0, Func Offset: 0x550
	// Line 393, Address: 0x12f2f8, Func Offset: 0x558
	// Line 394, Address: 0x12f300, Func Offset: 0x560
	// Line 395, Address: 0x12f308, Func Offset: 0x568
	// Line 396, Address: 0x12f314, Func Offset: 0x574
	// Line 397, Address: 0x12f324, Func Offset: 0x584
	// Line 398, Address: 0x12f330, Func Offset: 0x590
	// Line 399, Address: 0x12f338, Func Offset: 0x598
	// Line 398, Address: 0x12f33c, Func Offset: 0x59c
	// Line 399, Address: 0x12f340, Func Offset: 0x5a0
	// Line 400, Address: 0x12f34c, Func Offset: 0x5ac
	// Line 401, Address: 0x12f360, Func Offset: 0x5c0
	// Line 407, Address: 0x12f378, Func Offset: 0x5d8
	// Line 402, Address: 0x12f37c, Func Offset: 0x5dc
	// Line 406, Address: 0x12f3c0, Func Offset: 0x620
	// Line 407, Address: 0x12f3cc, Func Offset: 0x62c
	// Line 408, Address: 0x12f3d0, Func Offset: 0x630
	// Func End, Address: 0x12f410, Func Offset: 0x670
}

// MatrixSpeed__FP7zFlyKey
// Start address: 0x12f410
float32 MatrixSpeed(zFlyKey* keys)
{
	float32 dot;
	// Line 315, Address: 0x12f410, Func Offset: 0
	// Line 317, Address: 0x12f418, Func Offset: 0x8
	// Line 318, Address: 0x12f440, Func Offset: 0x30
	// Line 317, Address: 0x12f458, Func Offset: 0x48
	// Line 318, Address: 0x12f45c, Func Offset: 0x4c
	// Line 319, Address: 0x12f4b8, Func Offset: 0xa8
	// Line 322, Address: 0x12f528, Func Offset: 0x118
	// Line 323, Address: 0x12f55c, Func Offset: 0x14c
	// Line 322, Address: 0x12f560, Func Offset: 0x150
	// Line 323, Address: 0x12f570, Func Offset: 0x160
	// Func End, Address: 0x12f578, Func Offset: 0x168
}

// zCameraConversUpdate__FP7xCameraf
// Start address: 0x12f580
void zCameraConversUpdate(xCamera* cam, float32 dt)
{
	float32 s;
	xQuat a;
	xQuat c;
	// Line 273, Address: 0x12f580, Func Offset: 0
	// Line 274, Address: 0x12f59c, Func Offset: 0x1c
	// Line 277, Address: 0x12f5a8, Func Offset: 0x28
	// Line 279, Address: 0x12f5bc, Func Offset: 0x3c
	// Line 280, Address: 0x12f5c4, Func Offset: 0x44
	// Line 282, Address: 0x12f5c8, Func Offset: 0x48
	// Line 283, Address: 0x12f5e8, Func Offset: 0x68
	// Line 284, Address: 0x12f600, Func Offset: 0x80
	// Line 285, Address: 0x12f61c, Func Offset: 0x9c
	// Line 286, Address: 0x12f638, Func Offset: 0xb8
	// Line 287, Address: 0x12f654, Func Offset: 0xd4
	// Line 288, Address: 0x12f658, Func Offset: 0xd8
	// Line 290, Address: 0x12f660, Func Offset: 0xe0
	// Line 288, Address: 0x12f664, Func Offset: 0xe4
	// Line 290, Address: 0x12f668, Func Offset: 0xe8
	// Line 291, Address: 0x12f66c, Func Offset: 0xec
	// Line 294, Address: 0x12f670, Func Offset: 0xf0
	// Line 290, Address: 0x12f678, Func Offset: 0xf8
	// Line 291, Address: 0x12f684, Func Offset: 0x104
	// Line 290, Address: 0x12f688, Func Offset: 0x108
	// Line 291, Address: 0x12f68c, Func Offset: 0x10c
	// Line 290, Address: 0x12f690, Func Offset: 0x110
	// Line 292, Address: 0x12f6ac, Func Offset: 0x12c
	// Line 294, Address: 0x12f6d4, Func Offset: 0x154
	// Line 295, Address: 0x12f6dc, Func Offset: 0x15c
	// Line 296, Address: 0x12f6f4, Func Offset: 0x174
	// Line 298, Address: 0x12f700, Func Offset: 0x180
	// Line 297, Address: 0x12f704, Func Offset: 0x184
	// Line 298, Address: 0x12f708, Func Offset: 0x188
	// Line 297, Address: 0x12f70c, Func Offset: 0x18c
	// Line 298, Address: 0x12f710, Func Offset: 0x190
	// Line 297, Address: 0x12f714, Func Offset: 0x194
	// Line 298, Address: 0x12f758, Func Offset: 0x1d8
	// Line 299, Address: 0x12f76c, Func Offset: 0x1ec
	// Line 300, Address: 0x12f770, Func Offset: 0x1f0
	// Line 301, Address: 0x12f77c, Func Offset: 0x1fc
	// Func End, Address: 0x12f798, Func Offset: 0x218
}

// zCameraReset__FP7xCamera
// Start address: 0x12f7a0
void zCameraReset(xCamera* cam)
{
	// Line 198, Address: 0x12f7a0, Func Offset: 0
	// Line 216, Address: 0x12f7a4, Func Offset: 0x4
	// Line 198, Address: 0x12f7a8, Func Offset: 0x8
	// Line 211, Address: 0x12f7ac, Func Offset: 0xc
	// Line 198, Address: 0x12f7b0, Func Offset: 0x10
	// Line 216, Address: 0x12f7b4, Func Offset: 0x14
	// Line 198, Address: 0x12f7b8, Func Offset: 0x18
	// Line 200, Address: 0x12f7c4, Func Offset: 0x24
	// Line 211, Address: 0x12f7c8, Func Offset: 0x28
	// Line 201, Address: 0x12f7cc, Func Offset: 0x2c
	// Line 202, Address: 0x12f7d0, Func Offset: 0x30
	// Line 203, Address: 0x12f7d4, Func Offset: 0x34
	// Line 204, Address: 0x12f7d8, Func Offset: 0x38
	// Line 205, Address: 0x12f7dc, Func Offset: 0x3c
	// Line 216, Address: 0x12f7e0, Func Offset: 0x40
	// Line 206, Address: 0x12f7e4, Func Offset: 0x44
	// Line 207, Address: 0x12f7e8, Func Offset: 0x48
	// Line 208, Address: 0x12f7ec, Func Offset: 0x4c
	// Line 209, Address: 0x12f7f0, Func Offset: 0x50
	// Line 210, Address: 0x12f7f4, Func Offset: 0x54
	// Line 211, Address: 0x12f7f8, Func Offset: 0x58
	// Line 212, Address: 0x12f7fc, Func Offset: 0x5c
	// Line 213, Address: 0x12f800, Func Offset: 0x60
	// Line 214, Address: 0x12f804, Func Offset: 0x64
	// Line 215, Address: 0x12f808, Func Offset: 0x68
	// Line 219, Address: 0x12f80c, Func Offset: 0x6c
	// Line 222, Address: 0x12f818, Func Offset: 0x78
	// Line 226, Address: 0x12f824, Func Offset: 0x84
	// Line 228, Address: 0x12f8d4, Func Offset: 0x134
	// Line 232, Address: 0x12f8d8, Func Offset: 0x138
	// Line 228, Address: 0x12f8dc, Func Offset: 0x13c
	// Line 231, Address: 0x12f8e0, Func Offset: 0x140
	// Line 234, Address: 0x12f8e4, Func Offset: 0x144
	// Line 231, Address: 0x12f8e8, Func Offset: 0x148
	// Line 233, Address: 0x12f8ec, Func Offset: 0x14c
	// Line 235, Address: 0x12f8f0, Func Offset: 0x150
	// Func End, Address: 0x12f908, Func Offset: 0x168
}

