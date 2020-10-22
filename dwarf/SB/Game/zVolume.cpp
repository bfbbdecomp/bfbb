typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RwObjectHasFrame;
typedef struct xBase;
typedef struct xVec3;
typedef struct xAnimPlay;
typedef struct zEntHangable;
typedef struct xUpdateCullMgr;
typedef struct anim_coll_data;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct zPlayerCarryInfo;
typedef struct xAnimTransition;
typedef struct RwRaster;
typedef struct _zEnv;
typedef struct RpPolygon;
typedef struct xCamera;
typedef struct RpClump;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimSingle;
typedef struct RwV2d;
typedef struct xScene;
typedef struct RxNodeDefinition;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct zPlatform;
typedef struct xEnt;
typedef struct RpMaterialList;
typedef struct RwCamera;
typedef struct zEnt;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xJSPNodeInfo;
typedef struct xEnvAsset;
typedef struct xSurface;
typedef struct RpAtomic;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct RxPipelineCluster;
typedef struct zCutsceneMgr;
typedef struct xUpdateCullEnt;
typedef struct RxPipelineNodeParam;
typedef struct zVolume;
typedef struct xGridBound;
typedef struct xModelPool;
typedef struct xVolumeAsset;
typedef struct RxHeap;
typedef struct xModelInstance;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xQuat;
typedef struct zAssetPickupTable;
typedef struct xAnimEffect;
typedef struct xMat4x3;
typedef struct xBaseAsset;
typedef struct RpGeometry;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpWorldSector;
typedef struct rxHeapBlockHeader;
typedef struct iFogParams;
typedef struct xEntBoulder;
typedef struct xVolume;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct iEnv;
typedef struct xUpdateCullGroup;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMorphTarget;
typedef struct RpWorld;
typedef struct tri_data_0;
typedef struct RpVertexNormal;
typedef struct xEntShadow;
typedef struct xMemPool;
typedef struct xVec4;
typedef struct xJSPHeader;
typedef struct xCollis;
typedef struct RwSurfaceProperties;
typedef struct RpLight;
typedef struct RpMeshHeader;
typedef struct RwMatrixTag;
typedef enum _tagPadState;
typedef struct RwResEntry;
typedef struct rxReq;
typedef struct RwFrame;
typedef struct xGlobals;
typedef enum RxClusterValidityReq;
typedef struct xEntAsset;
typedef struct xPortalAsset;
typedef struct zLasso;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef struct _tagxPad;
typedef struct xLinkAsset;
typedef struct xAnimTransitionList;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct PreCalcOcclude;
typedef struct _tagiPad;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEnv;
typedef struct xModelTag;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xVec2;
typedef struct xBox;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPBranchNode;
typedef struct xEntCollis;
typedef enum RpWorldRenderOrder;
typedef struct xClumpCollBSPTriangle;
typedef struct _zPortal;
typedef struct xEntFrame;
typedef struct xFFX;
typedef struct RwSphere;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xModelBucket;
typedef struct xShadowSimplePoly;
typedef struct zGlobals;
typedef struct xMat3x3;
typedef struct zGlobalSettings;
typedef struct RxClusterRef;
typedef struct xGroup;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct zPlayerLassoInfo;
typedef struct _class_0;
typedef struct xLightKit;
typedef struct RxIoSpec;
typedef struct zScene;
typedef struct tri_data_1;
typedef struct xLightKitLight;
typedef struct zLedgeGrabParams;
typedef struct xAnimMultiFileEntry;
typedef struct RxNodeMethods;
typedef struct xAnimActiveEffect;
typedef struct xShadowSimpleCache;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef enum _tagRumbleType;
typedef struct RxCluster;
typedef enum _zPlayerType;
typedef struct _class_1;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct analog_data;
typedef struct _class_2;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct RpInterpolator;
typedef struct xQCData;
typedef struct zCheckPoint;
typedef struct RwLinkList;
typedef struct xBBox;
typedef struct zJumpParam;
typedef struct zPlayerGlobals;
typedef struct xEntDrive;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef int8*(*type_3)(uint32);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_7)(RxPipelineNode*);
typedef void(*type_9)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_10)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef void(*type_14)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_15)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef uint32(*type_19)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_21)(xAnimPlay*, xAnimState*);
typedef void(*type_22)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_28)(void*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef int32(*type_30)(RxNodeDefinition*);
typedef uint32(*type_31)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_33)(RxNodeDefinition*);
typedef int32(*type_35)(RxPipelineNode*);
typedef void(*type_36)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_43)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_48)(RpAtomic*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef xBase*(*type_57)(uint32);
typedef int8*(*type_58)(xBase*);
typedef uint32(*type_63)(void*, void*);
typedef RpWorldSector*(*type_69)(RpWorldSector*);
typedef RwCamera*(*type_71)(RwCamera*);
typedef void(*type_74)(xEnt*, xScene*, float32);
typedef void(*type_76)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_79)(xMemPool*, void*);
typedef void(*type_80)(xEnt*);
typedef void(*type_84)(RwResEntry*);

typedef xBase* type_1[72];
typedef analog_data type_5[2];
typedef uint8 type_6[2];
typedef xAnimMultiFileEntry type_8[1];
typedef uint16 type_11[3];
typedef xCollis type_13[18];
typedef float32 type_16[4];
typedef RwFrustumPlane type_17[6];
typedef xVec4 type_18[12];
typedef uint8 type_20[2];
typedef uint32 type_24[2];
typedef uint8 type_25[2];
typedef float32 type_26[6];
typedef RwV3d type_27[8];
typedef float32 type_32[3];
typedef float32 type_34[3];
typedef RwTexCoords* type_37[8];
typedef xModelTag type_38[2];
typedef float32 type_39[3];
typedef RpLight* type_40[2];
typedef xVec3 type_41[5];
typedef RwFrame* type_42[2];
typedef uint8 type_44[3];
typedef xEnt* type_45[111];
typedef uint16 type_46[3];
typedef float32 type_47[2];
typedef int8 type_50[128];
typedef int8 type_51[128][6];
typedef uint8 type_52[14];
typedef xModelTag type_53[4];
typedef xVec4 type_54[4];
typedef int8 type_55[32];
typedef xModelInstance* type_56[14];
typedef uint8 type_59[4];
typedef uint32 type_60[4];
typedef int8 type_61[16];
typedef RwTexCoords* type_62[8];
typedef uint8 type_64[22];
typedef float32 type_65[4];
typedef uint8 type_66[22];
typedef int8 type_67[16];
typedef xVec3 type_68[3];
typedef PreCalcOcclude type_70[10];
typedef xVec3 type_72[5];
typedef uint8 type_73[5];
typedef float32 type_75[16];
typedef xVec3 type_77[60];
typedef xVec4 type_78[4];
typedef int8 type_81[32];
typedef float32 type_82[22];
typedef int8 type_83[32];
typedef float32 type_85[22];
typedef float32 type_86[2];
typedef zVolume* type_87[10];
typedef uint32 type_88[15];
typedef uint32 type_89[15];
typedef xVec3 type_90[4];
typedef RxCluster type_91[1];
typedef uint32 type_92[72];
typedef int8 type_93[4];
typedef uint32 type_94[15];

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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct zEntHangable
{
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

struct anim_coll_data
{
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zPlatform
{
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xSurface
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct zCutsceneMgr
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zVolume : xVolume
{
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xVolumeAsset : xBaseAsset
{
	uint32 flags;
	xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
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
	_class_2 anim_coll;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct zAssetPickupTable
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xEntBoulder
{
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rxReq
{
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct PreCalcOcclude
{
	xVec4 DepthVec;
	xVec4 FrustVec[4];
};

struct _tagiPad
{
	int32 port;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct xFFX
{
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RpSector
{
	int32 type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct _class_2
{
	xVec3* verts;
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
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

int8 buffer[16];
int8 buffer[16];
zVolume* vols;
uint16 nvols;
int32 gOccludeCount;
zVolume* gOccludeList[10];
int32 gOccludeCalcCount;
PreCalcOcclude gOccludeCalc[10];
int32 occludeAlwaysFalse;
zGlobals globals;
int32(*zVolumeEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

int32 zVolumeEventCB(xBase* to, uint32 toEvent);
void zVolume_OccludePrecalc(xVec3* camPos);
zVolume* zVolumeGetVolume(uint16 n);
void zVolumeSetup();
void zVolumeInit();

// zVolumeEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x1a39a0
int32 zVolumeEventCB(xBase* to, uint32 toEvent)
{
	zVolume* vol;
	int32 i;
	// Line 352, Address: 0x1a39a0, Func Offset: 0
	// Line 360, Address: 0x1a39a4, Func Offset: 0x4
	// Line 362, Address: 0x1a39cc, Func Offset: 0x2c
	// Line 363, Address: 0x1a39d0, Func Offset: 0x30
	// Line 364, Address: 0x1a39d8, Func Offset: 0x38
	// Line 367, Address: 0x1a39e4, Func Offset: 0x44
	// Line 368, Address: 0x1a39f0, Func Offset: 0x50
	// Line 369, Address: 0x1a39f8, Func Offset: 0x58
	// Line 370, Address: 0x1a3a10, Func Offset: 0x70
	// Line 371, Address: 0x1a3a1c, Func Offset: 0x7c
	// Line 372, Address: 0x1a3a24, Func Offset: 0x84
	// Line 373, Address: 0x1a3a38, Func Offset: 0x98
	// Line 374, Address: 0x1a3a4c, Func Offset: 0xac
	// Line 375, Address: 0x1a3a54, Func Offset: 0xb4
	// Line 377, Address: 0x1a3a5c, Func Offset: 0xbc
	// Line 378, Address: 0x1a3a60, Func Offset: 0xc0
	// Line 379, Address: 0x1a3a78, Func Offset: 0xd8
	// Line 380, Address: 0x1a3a88, Func Offset: 0xe8
	// Line 382, Address: 0x1a3aa0, Func Offset: 0x100
	// Line 380, Address: 0x1a3aa4, Func Offset: 0x104
	// Line 381, Address: 0x1a3aa8, Func Offset: 0x108
	// Line 382, Address: 0x1a3ab0, Func Offset: 0x110
	// Line 383, Address: 0x1a3ab8, Func Offset: 0x118
	// Line 386, Address: 0x1a3ac8, Func Offset: 0x128
	// Line 387, Address: 0x1a3ad0, Func Offset: 0x130
	// Func End, Address: 0x1a3adc, Func Offset: 0x13c
}

// zVolume_OccludePrecalc__FP5xVec3
// Start address: 0x1a3ae0
void zVolume_OccludePrecalc(xVec3* camPos)
{
	int32 i;
	int32 j;
	xVec3 corner[5];
	zVolume* vol;
	xVolumeAsset* a;
	float32 c;
	float32 s;
	PreCalcOcclude* calc;
	xVec3 d1;
	xVec3 d2;
	xVec4 locFrustVec[4];
	float32 depthdot;
	float32 camdot;
	float32 testdot1;
	float32 testdot2;
	// Line 126, Address: 0x1a3ae0, Func Offset: 0
	// Line 134, Address: 0x1a3af8, Func Offset: 0x18
	// Line 126, Address: 0x1a3afc, Func Offset: 0x1c
	// Line 134, Address: 0x1a3b04, Func Offset: 0x24
	// Line 136, Address: 0x1a3b10, Func Offset: 0x30
	// Line 137, Address: 0x1a3b24, Func Offset: 0x44
	// Line 138, Address: 0x1a3b28, Func Offset: 0x48
	// Line 139, Address: 0x1a3b30, Func Offset: 0x50
	// Line 143, Address: 0x1a3b3c, Func Offset: 0x5c
	// Line 140, Address: 0x1a3b40, Func Offset: 0x60
	// Line 143, Address: 0x1a3b44, Func Offset: 0x64
	// Line 140, Address: 0x1a3b48, Func Offset: 0x68
	// Line 143, Address: 0x1a3b54, Func Offset: 0x74
	// Line 140, Address: 0x1a3b58, Func Offset: 0x78
	// Line 168, Address: 0x1a3b64, Func Offset: 0x84
	// Line 143, Address: 0x1a3b6c, Func Offset: 0x8c
	// Line 144, Address: 0x1a3b78, Func Offset: 0x98
	// Line 159, Address: 0x1a3b7c, Func Offset: 0x9c
	// Line 144, Address: 0x1a3b80, Func Offset: 0xa0
	// Line 145, Address: 0x1a3b84, Func Offset: 0xa4
	// Line 159, Address: 0x1a3b90, Func Offset: 0xb0
	// Line 145, Address: 0x1a3b94, Func Offset: 0xb4
	// Line 147, Address: 0x1a3ba4, Func Offset: 0xc4
	// Line 159, Address: 0x1a3bac, Func Offset: 0xcc
	// Line 147, Address: 0x1a3bb0, Func Offset: 0xd0
	// Line 148, Address: 0x1a3bc0, Func Offset: 0xe0
	// Line 165, Address: 0x1a3bc4, Func Offset: 0xe4
	// Line 148, Address: 0x1a3bc8, Func Offset: 0xe8
	// Line 149, Address: 0x1a3bcc, Func Offset: 0xec
	// Line 165, Address: 0x1a3bd4, Func Offset: 0xf4
	// Line 149, Address: 0x1a3bd8, Func Offset: 0xf8
	// Line 151, Address: 0x1a3bec, Func Offset: 0x10c
	// Line 165, Address: 0x1a3bf4, Func Offset: 0x114
	// Line 151, Address: 0x1a3bf8, Func Offset: 0x118
	// Line 152, Address: 0x1a3c08, Func Offset: 0x128
	// Line 165, Address: 0x1a3c0c, Func Offset: 0x12c
	// Line 152, Address: 0x1a3c14, Func Offset: 0x134
	// Line 153, Address: 0x1a3c18, Func Offset: 0x138
	// Line 165, Address: 0x1a3c24, Func Offset: 0x144
	// Line 153, Address: 0x1a3c28, Func Offset: 0x148
	// Line 155, Address: 0x1a3c38, Func Offset: 0x158
	// Line 166, Address: 0x1a3c40, Func Offset: 0x160
	// Line 155, Address: 0x1a3c44, Func Offset: 0x164
	// Line 156, Address: 0x1a3c54, Func Offset: 0x174
	// Line 166, Address: 0x1a3c58, Func Offset: 0x178
	// Line 156, Address: 0x1a3c60, Func Offset: 0x180
	// Line 157, Address: 0x1a3c64, Func Offset: 0x184
	// Line 166, Address: 0x1a3c70, Func Offset: 0x190
	// Line 157, Address: 0x1a3c74, Func Offset: 0x194
	// Line 166, Address: 0x1a3c78, Func Offset: 0x198
	// Line 157, Address: 0x1a3c7c, Func Offset: 0x19c
	// Line 166, Address: 0x1a3c80, Func Offset: 0x1a0
	// Line 157, Address: 0x1a3c84, Func Offset: 0x1a4
	// Line 165, Address: 0x1a3c88, Func Offset: 0x1a8
	// Line 166, Address: 0x1a3c8c, Func Offset: 0x1ac
	// Line 165, Address: 0x1a3c98, Func Offset: 0x1b8
	// Line 157, Address: 0x1a3c9c, Func Offset: 0x1bc
	// Line 167, Address: 0x1a3ca0, Func Offset: 0x1c0
	// Line 159, Address: 0x1a3cb0, Func Offset: 0x1d0
	// Line 167, Address: 0x1a3cbc, Func Offset: 0x1dc
	// Line 165, Address: 0x1a3cc0, Func Offset: 0x1e0
	// Line 167, Address: 0x1a3cc4, Func Offset: 0x1e4
	// Line 168, Address: 0x1a3d00, Func Offset: 0x220
	// Line 169, Address: 0x1a3d08, Func Offset: 0x228
	// Line 170, Address: 0x1a3d10, Func Offset: 0x230
	// Line 169, Address: 0x1a3d14, Func Offset: 0x234
	// Line 170, Address: 0x1a3d1c, Func Offset: 0x23c
	// Line 169, Address: 0x1a3d20, Func Offset: 0x240
	// Line 170, Address: 0x1a3d34, Func Offset: 0x254
	// Line 169, Address: 0x1a3d40, Func Offset: 0x260
	// Line 170, Address: 0x1a3d44, Func Offset: 0x264
	// Line 174, Address: 0x1a3d4c, Func Offset: 0x26c
	// Line 175, Address: 0x1a3d58, Func Offset: 0x278
	// Line 176, Address: 0x1a3d60, Func Offset: 0x280
	// Line 177, Address: 0x1a3d64, Func Offset: 0x284
	// Line 175, Address: 0x1a3d68, Func Offset: 0x288
	// Line 178, Address: 0x1a3d7c, Func Offset: 0x29c
	// Line 181, Address: 0x1a3d80, Func Offset: 0x2a0
	// Line 183, Address: 0x1a3da0, Func Offset: 0x2c0
	// Line 186, Address: 0x1a3da4, Func Offset: 0x2c4
	// Line 187, Address: 0x1a3db0, Func Offset: 0x2d0
	// Line 189, Address: 0x1a3dc0, Func Offset: 0x2e0
	// Line 187, Address: 0x1a3dc4, Func Offset: 0x2e4
	// Line 189, Address: 0x1a3dc8, Func Offset: 0x2e8
	// Line 187, Address: 0x1a3dcc, Func Offset: 0x2ec
	// Line 190, Address: 0x1a3dd0, Func Offset: 0x2f0
	// Line 187, Address: 0x1a3dd8, Func Offset: 0x2f8
	// Line 189, Address: 0x1a3df8, Func Offset: 0x318
	// Line 187, Address: 0x1a3dfc, Func Offset: 0x31c
	// Line 188, Address: 0x1a3e04, Func Offset: 0x324
	// Line 189, Address: 0x1a3e0c, Func Offset: 0x32c
	// Line 188, Address: 0x1a3e10, Func Offset: 0x330
	// Line 189, Address: 0x1a3e30, Func Offset: 0x350
	// Line 188, Address: 0x1a3e34, Func Offset: 0x354
	// Line 189, Address: 0x1a3e3c, Func Offset: 0x35c
	// Line 190, Address: 0x1a3e80, Func Offset: 0x3a0
	// Line 191, Address: 0x1a3e88, Func Offset: 0x3a8
	// Line 194, Address: 0x1a3e9c, Func Offset: 0x3bc
	// Line 195, Address: 0x1a3ea4, Func Offset: 0x3c4
	// Line 194, Address: 0x1a3ea8, Func Offset: 0x3c8
	// Line 195, Address: 0x1a3eb0, Func Offset: 0x3d0
	// Line 194, Address: 0x1a3eb4, Func Offset: 0x3d4
	// Line 195, Address: 0x1a3ec8, Func Offset: 0x3e8
	// Line 194, Address: 0x1a3ed4, Func Offset: 0x3f4
	// Line 195, Address: 0x1a3ed8, Func Offset: 0x3f8
	// Line 196, Address: 0x1a3ee0, Func Offset: 0x400
	// Line 197, Address: 0x1a3eec, Func Offset: 0x40c
	// Line 198, Address: 0x1a3ef8, Func Offset: 0x418
	// Line 199, Address: 0x1a3f00, Func Offset: 0x420
	// Line 198, Address: 0x1a3f04, Func Offset: 0x424
	// Line 199, Address: 0x1a3f28, Func Offset: 0x448
	// Line 200, Address: 0x1a3f34, Func Offset: 0x454
	// Line 203, Address: 0x1a3f38, Func Offset: 0x458
	// Line 204, Address: 0x1a3f40, Func Offset: 0x460
	// Line 205, Address: 0x1a3f54, Func Offset: 0x474
	// Line 204, Address: 0x1a3f58, Func Offset: 0x478
	// Line 205, Address: 0x1a3f88, Func Offset: 0x4a8
	// Line 209, Address: 0x1a3f94, Func Offset: 0x4b4
	// Line 210, Address: 0x1a3f9c, Func Offset: 0x4bc
	// Line 211, Address: 0x1a3fa4, Func Offset: 0x4c4
	// Line 212, Address: 0x1a3fac, Func Offset: 0x4cc
	// Line 214, Address: 0x1a3fb4, Func Offset: 0x4d4
	// Line 215, Address: 0x1a3fbc, Func Offset: 0x4dc
	// Line 216, Address: 0x1a3fc4, Func Offset: 0x4e4
	// Line 217, Address: 0x1a3fcc, Func Offset: 0x4ec
	// Line 219, Address: 0x1a3fd4, Func Offset: 0x4f4
	// Line 220, Address: 0x1a3fdc, Func Offset: 0x4fc
	// Line 221, Address: 0x1a3fe4, Func Offset: 0x504
	// Line 222, Address: 0x1a3fec, Func Offset: 0x50c
	// Line 224, Address: 0x1a3ff4, Func Offset: 0x514
	// Line 225, Address: 0x1a3ffc, Func Offset: 0x51c
	// Line 226, Address: 0x1a4004, Func Offset: 0x524
	// Line 227, Address: 0x1a400c, Func Offset: 0x52c
	// Line 229, Address: 0x1a4014, Func Offset: 0x534
	// Line 230, Address: 0x1a4020, Func Offset: 0x540
	// Line 236, Address: 0x1a4038, Func Offset: 0x558
	// Func End, Address: 0x1a4058, Func Offset: 0x578
}

// zVolumeGetVolume__FUs
// Start address: 0x1a4060
zVolume* zVolumeGetVolume(uint16 n)
{
	// Line 95, Address: 0x1a4060, Func Offset: 0
	// Line 96, Address: 0x1a4074, Func Offset: 0x14
	// Func End, Address: 0x1a407c, Func Offset: 0x1c
}

// zVolumeSetup__Fv
// Start address: 0x1a4080
void zVolumeSetup()
{
	uint32 i;
	// Line 66, Address: 0x1a4080, Func Offset: 0
	// Line 68, Address: 0x1a4090, Func Offset: 0x10
	// Line 78, Address: 0x1a40a8, Func Offset: 0x28
	// Line 80, Address: 0x1a40bc, Func Offset: 0x3c
	// Line 81, Address: 0x1a40d0, Func Offset: 0x50
	// Func End, Address: 0x1a40e4, Func Offset: 0x64
}

// zVolumeInit__Fv
// Start address: 0x1a40f0
void zVolumeInit()
{
	uint16 i;
	uint32 size;
	xVolumeAsset* asset;
	// Line 45, Address: 0x1a40f0, Func Offset: 0
	// Line 46, Address: 0x1a40f4, Func Offset: 0x4
	// Line 45, Address: 0x1a40f8, Func Offset: 0x8
	// Line 46, Address: 0x1a40fc, Func Offset: 0xc
	// Line 45, Address: 0x1a4100, Func Offset: 0x10
	// Line 46, Address: 0x1a4108, Func Offset: 0x18
	// Line 49, Address: 0x1a4118, Func Offset: 0x28
	// Line 50, Address: 0x1a4120, Func Offset: 0x30
	// Line 53, Address: 0x1a413c, Func Offset: 0x4c
	// Line 55, Address: 0x1a4158, Func Offset: 0x68
	// Line 58, Address: 0x1a416c, Func Offset: 0x7c
	// Line 59, Address: 0x1a418c, Func Offset: 0x9c
	// Line 60, Address: 0x1a41a4, Func Offset: 0xb4
	// Line 61, Address: 0x1a41b0, Func Offset: 0xc0
	// Line 62, Address: 0x1a41b4, Func Offset: 0xc4
	// Line 63, Address: 0x1a41b8, Func Offset: 0xc8
	// Func End, Address: 0x1a41d0, Func Offset: 0xe0
}

