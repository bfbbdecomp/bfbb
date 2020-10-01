typedef struct RpInterpolator;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct tag_xFile;
typedef struct xCutsceneMphRun;
typedef struct RpAtomic;
typedef struct xGlobals;
typedef struct xAnimMultiFileBase;
typedef struct xAnimFile;
typedef struct xCutscene;
typedef struct xAnimEffect;
typedef struct xShadowPoly;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef struct _tagxPad;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xMorphTargetFile;
typedef struct xCutsceneAnimHdr;
typedef struct RxNodeDefinition;
typedef struct xVec3;
typedef struct JDeltaRun;
typedef struct RpPolygon;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct xGridBound;
typedef struct xAnimActiveEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xGroupAsset;
typedef struct RpMaterialList;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xAnimPlay;
typedef struct _tagPadAnalog;
typedef struct xAnimTable;
typedef struct RxPipelineNodeParam;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct RpMaterial;
typedef struct RxHeap;
typedef struct _tagiPad;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimMultiFile;
typedef struct xUpdateCullMgr;
typedef struct xEnt;
typedef struct xQuat;
typedef struct XCSNNosey;
typedef struct xShadowCache;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct rxHeapBlockHeader;
typedef struct xCutsceneInfo;
typedef struct xEntCollis;
typedef struct RpGeometry;
typedef struct JDeltaTarget;
typedef struct RpWorld;
typedef struct RpWorldSector;
typedef struct xCutsceneTime;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMorphTarget;
typedef struct xLinkAsset;
typedef struct xCutsceneData;
typedef struct xScene;
typedef struct tagiRenderArrays;
typedef struct xEntFrame;
typedef struct RpVertexNormal;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xCutsceneBreak;
typedef struct rxReq;
typedef struct _tagxRumble;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct xSurface;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct xMemPool;
typedef struct xShadowSimplePoly;
typedef struct xGroup;
typedef struct CutsceneShadowModel;
typedef struct xUpdateCullEnt;
typedef struct xFFX;
typedef struct RpTriangle;
typedef struct xBase;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct RwTexture;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xShadowSimpleCache;
typedef struct zFlyKey;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimTransitionList;
typedef struct RpLight;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xCollis;
typedef enum RpWorldRenderOrder;
typedef struct analog_data;
typedef struct FakeEntityInfo;
typedef struct RwSphere;
typedef struct xCamera;
typedef struct RwTexDictionary;
typedef struct xModelBucket;
typedef struct RpSector;
typedef struct RxOutputSpec;
typedef struct RxObjSpace3DVertex;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xEntShadow;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct anim_coll_data;
typedef struct RxIoSpec;
typedef struct xBaseAsset;
typedef struct RxNodeMethods;
typedef struct xCutsceneMphFrame;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xBound;
typedef struct RxCluster;
typedef struct iFogParams;
typedef struct xAnimMultiFileEntry;
typedef struct RxPacket;
typedef struct xVec2;
typedef struct _class_1;
typedef struct tri_data;
typedef struct xQCData;
typedef enum RwFogType;
typedef struct tag_iFile;
typedef struct xBBox;
typedef struct RwRGBAReal;
typedef enum _tagPadState;
typedef struct RwLinkList;

typedef uint32(*type_0)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef int32(*type_2)(RxPipelineNode*);
typedef RwCamera*(*type_4)(RwCamera*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_7)(RxPipelineNode*);
typedef uint32(*type_9)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_23)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_24)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_25)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_27)(RxNodeDefinition*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef void(*type_30)(RxNodeDefinition*);
typedef uint32(*type_35)(void*, void*);
typedef void(*type_40)(xAnimPlay*, xAnimState*);
typedef void(*type_42)(void*);
typedef xBase*(*type_45)(uint32);
typedef int8*(*type_47)(xBase*);
typedef void(*type_49)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_51)(uint32);
typedef RpAtomic*(*type_54)(RpAtomic*);
typedef void(*type_55)(xEnt*, xScene*, float32);
typedef void(*type_57)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_58)(xEnt*, xVec3*);
typedef void(*type_59)(CutsceneShadowModel*);
typedef void(*type_60)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef int32(*type_67)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_68)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_79)(RpWorldSector*);
typedef void(*type_85)(xMemPool*, void*);
typedef void(*type_90)(RwResEntry*);

typedef float32 type_3[2];
typedef RwMatrixTag type_6[65];
typedef xVec3 type_8[3];
typedef float32 type_10[2];
typedef int8 type_11[128];
typedef float32 type_12[3];
typedef uint16 type_14[3];
typedef type_11 type_15[6];
typedef int16* type_16[4];
typedef int8 type_17[32];
typedef uint8 type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef int8 type_20[32];
typedef RwFrustumPlane type_21[6];
typedef int16 type_22[4];
typedef RwV3d type_26[8];
typedef float32 type_28[5];
typedef JDeltaRun type_31[1];
typedef xQuat type_32[2];
typedef xEnt* type_33[16];
typedef uint16 type_34[960];
typedef xShadowPoly type_36[256];
typedef RwTexCoords* type_37[8];
typedef RxObjSpace3DVertex type_38[480];
typedef uint8 type_39[22];
typedef uint8 type_41[3];
typedef float32 type_43[480];
typedef uint8 type_44[22];
typedef xVec3 type_46[3];
typedef float32 type_48[4];
typedef int8 type_50[16];
typedef int8 type_52[16];
typedef uint16 type_53[3];
typedef float32 type_56[16];
typedef xQuat type_61[65];
typedef float32 type_63[22];
typedef xVec3 type_64[65];
typedef RwMatrixTag type_65[65];
typedef float32 type_66[22];
typedef uint32 type_70[4];
typedef float32 type_71[128];
typedef RwTexCoords* type_72[8];
typedef xVec3 type_73[4];
typedef uint32 type_74[2];
typedef uint32 type_75[4096];
typedef float32 type_76[12];
typedef uint32 type_77[2];
typedef analog_data type_78[2];
typedef int8 type_80[16];
typedef float32 type_81[2];
typedef uint32 type_82[2];
typedef int8 type_83[16];
typedef xCollis type_84[18];
typedef int8 type_86[32];
typedef int8 type_87[32];
typedef int16* type_88[4];
typedef xVec4 type_89[12];
typedef int16 type_91[4];
typedef xModelInstance type_92[8];
typedef int8 type_93[128];
typedef RxCluster type_94[1];
typedef xEnt type_95[8];

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
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

struct tag_xFile
{
	type_17 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneMphRun
{
	int32 VertIdx;
	int32 VertCt;
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
	type_54 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_15 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_20 sceneStart;
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

struct xAnimMultiFileBase
{
	uint32 Count;
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
	type_18 NumAnims;
	void** RawData;
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
	type_74 SndChannelReq;
	type_77 SndAssetID;
	type_82 SndHandle;
	XCSNNosey* cb_nosey;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_0 Callback;
};

struct xShadowPoly
{
	type_8 vert;
	xVec3 norm;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_9 Conditional;
	type_9 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct _tagxPad
{
	type_39 value;
	type_44 last_value;
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
	type_63 up_tmr;
	type_66 down_tmr;
	type_78 analog;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xMorphTargetFile
{
	uint32 Magic;
	uint16 NumTargets;
	uint16 NumVerts;
	uint32 Flags;
	float32 Scale;
	xVec3 Center;
	float32 Radius;
};

struct xCutsceneAnimHdr
{
	uint32 RootIndex;
	type_12 Translate;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct JDeltaRun
{
	int32 VertIdx;
	int32 VertCt;
};

struct RpPolygon
{
	uint16 matIndex;
	type_14 vertIndex;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_3 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_49 BeforeAnimMatrices;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	_class_1 anim_coll;
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

struct _tagiPad
{
	int32 port;
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
	type_40 BeforeEnter;
	type_24 StateCallback;
	type_49 BeforeAnimMatrices;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_19 Files;
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
	type_42 activateCB;
	type_42 deactivateCB;
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
	type_55 update;
	type_55 endUpdate;
	type_58 bupdate;
	type_60 move;
	type_62 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_69 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
};

struct xShadowCache
{
	xVec3 pos;
	float32 radius;
	uint32 entCount;
	uint32 polyCount;
	type_28 polyRayDepth;
	uint16 castOnEnt;
	uint16 castOnPoly;
	type_33 ent;
	type_36 poly;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_29 callback;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_70 pad;
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
	type_50 SoundLeft;
	type_52 SoundRight;
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
	type_84 colls;
	type_57 post;
	type_68 depenq;
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
	type_72 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct JDeltaTarget
{
	int32 skipSize;
	int32 numRuns;
	int32 numVerts;
	float32 scale;
	type_31 runs;
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
	type_79 renderCallBack;
	RxPipeline* pipeline;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_37 texCoords;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_48 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	type_45 resolvID;
	type_47 base2Name;
	type_51 id2Name;
};

struct tagiRenderArrays
{
	type_34 m_index;
	type_38 m_vertex;
	type_43 m_vertexTZ;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct rxReq
{
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xEnv
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xSurface
{
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_90 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_85 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xShadowSimplePoly
{
	type_46 vert;
	xVec3 norm;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct CutsceneShadowModel
{
	RpAtomic* model;
	RwMatrixTag* animMat;
	uint32 shadowBits;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_35 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xFFX
{
};

struct RpTriangle
{
	type_53 vertIndex;
	int16 matIndex;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_67 eventFunc;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_87 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_56 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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
	type_73 corner;
};

struct zFlyKey
{
	int32 frame;
	type_76 matrix;
	type_81 aperture;
	float32 focal;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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
		tri_data tri;
	};
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct FakeEntityInfo
{
	RpAtomic* model;
	xCutsceneAnimHdr* ahdr;
	float32 time;
	type_88 v_array;
	type_91 weight;
	float32 scale;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
	type_89 frustplane;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RpSector
{
	int32 type;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_10 radius;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_1 beginUpdate;
	type_4 endUpdate;
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
	type_21 frustumPlanes;
	RwBBox frustumBoundBox;
	type_26 frustumCorners;
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

struct anim_coll_data
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RxNodeMethods
{
	type_25 nodeBody;
	type_27 nodeInit;
	type_30 nodeTerm;
	type_2 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_23 configMsgHandler;
};

struct xCutsceneMphFrame
{
	float32 Time;
	uint32 Flags;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_41 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_94 clusters;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct _class_1
{
	xVec3* verts;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	uint32 flags;
	type_93 path;
	int32 fd;
	int32 offset;
	int32 length;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwLinkList
{
	RwLLLink link;
};

type_80 buffer;
type_83 buffer;
xCutscene sActiveCutscene;
uint32 sCutTocCount;
xCutsceneInfo* sCutTocInfo;
type_95 sCutsceneFakeEntity;
type_92 sCutsceneFakeModel;
float32 ShadowStrength;
type_59 CutsceneShadowRender;
tagiRenderArrays gRenderArr;
type_75 ourGlobals;
xMat4x3 g_I3;
xGlobals* xglobals;
float32 gCameraLastFov;
uint32 gActiveHeap;

void xCutscene_Render(xCutscene* csn);
void CutsceneShadowRender(CutsceneShadowModel* smod);
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, float32 time);
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float32 time, uint32 tworoot);
void xCutscene_SetCamera(xCutscene* csn, xCamera* cam);
void xCutscene_SetSpeed(xCutscene* csn, float32 speed);
int32 xCutscene_Update(xCutscene* csn, float32 dt);
int32 xCutscene_LoadStart(xCutscene* csn);
int32 xCutscene_Destroy(xCutscene* csn);
xCutscene* xCutscene_Create(uint32 id);
void xCutscene_Init(void* toc);

// xCutscene_Render__FP9xCutscenePP4xEntPiPf
// Start address: 0x1ce970
void xCutscene_Render(xCutscene* csn)
{
	uint32 i;
	uint32 dataIndex;
	uint32 animIndex;
	uint32 mphIndex;
	uint32 visFlags;
	uint32 visIdx;
	uint32 fakeCount;
	uint32 hasAlpha;
	uint32 boundhack;
	uint32 tworoot;
	uint32 noshadow;
	xCutsceneData* data;
	xCutsceneData* mphdata;
	RpAtomic* model;
	RpAtomic* shadowModel;
	type_6 animMat;
	xVec3* camVec;
	XCSNNosey* nosey;
	uint32 tempSize;
	RpAtomic* tmpModel;
	float32 maxRadius;
	uint32 viscnt;
	uint32* currvis;
	uint32 subIndex;
	uint32 frameMin;
	uint32 frameMax;
	uint32 frameIndex;
	uint32 shadowBits;
	RpGeometry* geom;
	RwTexture* tex;
	int32 matnum;
	uint32 morphAnimIndex;
	uint32 morphModelIndex;
	uint32 numFrame;
	uint32 numRun;
	xCutsceneMphFrame* mphFrame;
	xCutsceneMphRun* mphRun;
	xMorphTargetFile* mphFile;
	type_16 v_array;
	type_22 weight;
	uint32 skipsize;
	xVec3* csnTmpArray;
	xVec3* currtmp;
	xVec3* outv;
	uint32 j;
	uint32 cmpval;
	void* deltaAnim;
	void* deltaModel;
	CutsceneShadowModel smod;
	xShadowCache scache;
	xVec3 center;
	float32 radius;
	xVec3 shadVec;
}

// CutsceneShadowRender__FP19CutsceneShadowModel
// Start address: 0x1cf6b0
void CutsceneShadowRender(CutsceneShadowModel* smod)
{
	RpAtomic* model;
	uint32 bits;
}

// JDeltaEval__FP8RpAtomicPvPvf
// Start address: 0x1cf720
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, float32 time)
{
	type_71 outweight;
	float32* currweight;
	int32 i;
	int32 numFrames;
	int32 numWeights;
	float32* times;
	float32* weights;
	float32 lerp;
	float32 invlerp;
	RwV3d* outverts;
	int32 numRun;
	JDeltaTarget* dtgt;
	float32 scale;
	int16* svert;
	int32 j;
	int32 cmpval;
	RwV3d* vert;
	int32 j;
	int32 cmpval;
	float32 scale;
	int16* svert;
	int32 j;
	int32 cmpval;
	float32 scale;
	RwV3d* vert;
	int32 j;
	int32 cmpval;
}

// xcsCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrfUi
// Start address: 0x1cfd30
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float32 time, uint32 tworoot)
{
	type_61 quatresult;
	type_64 tranresult;
	void* afile;
	xMat4x3 m1;
	xMat4x3 m2;
	uint32 numbone;
	uint32 boneidx;
	xQuat* qqq;
	xVec3* ttt;
	xVec3 addtran;
}

// xCutscene_SetCamera__FP9xCutsceneP7xCamera
// Start address: 0x1cffc0
void xCutscene_SetCamera(xCutscene* csn, xCamera* cam)
{
	xCutsceneData* data;
	uint32 i;
	uint32 dataIndex;
	float32 camFOV;
	xMat4x3 camMat;
	xMat3x3 tmpMat;
	type_32 quats;
	xQuat qresult;
	float32 invlerp;
	float32 lerp;
	int32 frame;
	uint32 count;
	zFlyKey* keys;
}

// xCutscene_SetSpeed__FP9xCutscenef
// Start address: 0x1d0380
void xCutscene_SetSpeed(xCutscene* csn, float32 speed)
{
	float32 semitones;
	int32 i;
}

// xCutscene_Update__FP9xCutscenef
// Start address: 0x1d0480
int32 xCutscene_Update(xCutscene* csn, float32 dt)
{
	xCutsceneTime* oldChunk;
}

// xCutscene_LoadStart__FP9xCutscene
// Start address: 0x1d0780
int32 xCutscene_LoadStart(xCutscene* csn)
{
}

// xCutscene_Destroy__FP9xCutscene
// Start address: 0x1d07c0
int32 xCutscene_Destroy(xCutscene* csn)
{
	uint32 i;
}

// xCutscene_Create__FUi
// Start address: 0x1d0940
xCutscene* xCutscene_Create(uint32 id)
{
	xCutscene* csn;
	uint32 i;
	xCutsceneInfo* cnfo;
	uint32 maxload;
}

// xCutscene_Init__FPv
// Start address: 0x1d0ac0
void xCutscene_Init(void* toc)
{
	int32 i;
}

