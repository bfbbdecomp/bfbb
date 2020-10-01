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

typedef u32(*type_0)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef s32(*type_2)(RxPipelineNode*);
typedef RwCamera*(*type_4)(RwCamera*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_7)(RxPipelineNode*);
typedef u32(*type_9)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_23)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_24)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_25)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_27)(RxNodeDefinition*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef void(*type_30)(RxNodeDefinition*);
typedef u32(*type_35)(void*, void*);
typedef void(*type_40)(xAnimPlay*, xAnimState*);
typedef void(*type_42)(void*);
typedef xBase*(*type_45)(u32);
typedef s8*(*type_47)(xBase*);
typedef void(*type_49)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s8*(*type_51)(u32);
typedef RpAtomic*(*type_54)(RpAtomic*);
typedef void(*type_55)(xEnt*, xScene*, f32);
typedef void(*type_57)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_58)(xEnt*, xVec3*);
typedef void(*type_59)(CutsceneShadowModel*);
typedef void(*type_60)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef s32(*type_67)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_68)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_79)(RpWorldSector*);
typedef void(*type_85)(xMemPool*, void*);
typedef void(*type_90)(RwResEntry*);

typedef f32 type_3[2];
typedef RwMatrixTag type_6[65];
typedef xVec3 type_8[3];
typedef f32 type_10[2];
typedef s8 type_11[128];
typedef f32 type_12[3];
typedef u16 type_14[3];
typedef type_11 type_15[6];
typedef s16* type_16[4];
typedef s8 type_17[32];
typedef u8 type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef s8 type_20[32];
typedef RwFrustumPlane type_21[6];
typedef s16 type_22[4];
typedef RwV3d type_26[8];
typedef f32 type_28[5];
typedef JDeltaRun type_31[1];
typedef xQuat type_32[2];
typedef xEnt* type_33[16];
typedef u16 type_34[960];
typedef xShadowPoly type_36[256];
typedef RwTexCoords* type_37[8];
typedef RxObjSpace3DVertex type_38[480];
typedef u8 type_39[22];
typedef u8 type_41[3];
typedef f32 type_43[480];
typedef u8 type_44[22];
typedef xVec3 type_46[3];
typedef f32 type_48[4];
typedef s8 type_50[16];
typedef s8 type_52[16];
typedef u16 type_53[3];
typedef f32 type_56[16];
typedef xQuat type_61[65];
typedef f32 type_63[22];
typedef xVec3 type_64[65];
typedef RwMatrixTag type_65[65];
typedef f32 type_66[22];
typedef u32 type_70[4];
typedef f32 type_71[128];
typedef RwTexCoords* type_72[8];
typedef xVec3 type_73[4];
typedef u32 type_74[2];
typedef u32 type_75[4096];
typedef f32 type_76[12];
typedef u32 type_77[2];
typedef analog_data type_78[2];
typedef s8 type_80[16];
typedef f32 type_81[2];
typedef u32 type_82[2];
typedef s8 type_83[16];
typedef xCollis type_84[18];
typedef s8 type_86[32];
typedef s8 type_87[32];
typedef s16* type_88[4];
typedef xVec4 type_89[12];
typedef s16 type_91[4];
typedef xModelInstance type_92[8];
typedef s8 type_93[128];
typedef RxCluster type_94[1];
typedef xEnt type_95[8];

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
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

struct tag_xFile
{
	type_17 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneMphRun
{
	s32 VertIdx;
	s32 VertCt;
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
	u16 renderFrame;
	u16 pad;
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
	s32 profile;
	type_15 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_20 sceneStart;
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

struct xAnimMultiFileBase
{
	u32 Count;
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
	type_18 NumAnims;
	void** RawData;
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
	type_74 SndChannelReq;
	type_77 SndAssetID;
	type_82 SndHandle;
	XCSNNosey* cb_nosey;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_0 Callback;
};

struct xShadowPoly
{
	type_8 vert;
	xVec3 norm;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_9 Conditional;
	type_9 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct _tagxPad
{
	type_39 value;
	type_44 last_value;
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
	type_63 up_tmr;
	type_66 down_tmr;
	type_78 analog;
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

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xMorphTargetFile
{
	u32 Magic;
	u16 NumTargets;
	u16 NumVerts;
	u32 Flags;
	f32 Scale;
	xVec3 Center;
	f32 Radius;
};

struct xCutsceneAnimHdr
{
	u32 RootIndex;
	type_12 Translate;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct JDeltaRun
{
	s32 VertIdx;
	s32 VertCt;
};

struct RpPolygon
{
	u16 matIndex;
	type_14 vertIndex;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_3 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	type_49 BeforeAnimMatrices;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	_class_1 anim_coll;
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

struct _tagiPad
{
	s32 port;
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
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_19 Files;
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
	type_42 activateCB;
	type_42 deactivateCB;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
};

struct xShadowCache
{
	xVec3 pos;
	f32 radius;
	u32 entCount;
	u32 polyCount;
	type_28 polyRayDepth;
	u16 castOnEnt;
	u16 castOnPoly;
	type_33 ent;
	type_36 poly;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_70 pad;
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
	type_50 SoundLeft;
	type_52 SoundRight;
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
	type_84 colls;
	type_57 post;
	type_68 depenq;
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
	type_72 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct JDeltaTarget
{
	s32 skipSize;
	s32 numRuns;
	s32 numVerts;
	f32 scale;
	type_31 runs;
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
	type_79 renderCallBack;
	RxPipeline* pipeline;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_48 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	u32 mode;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
};

struct rxReq
{
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xEnv
{
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xSurface
{
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_85 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	u32 last_index;
	s32 flg_group;
};

struct CutsceneShadowModel
{
	RpAtomic* model;
	RwMatrixTag* animMat;
	u32 shadowBits;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
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
	s16 matIndex;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_67 eventFunc;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	u32 filterAddressing;
	s32 refCount;
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
	f32 angle;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_56 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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
	type_73 corner;
};

struct zFlyKey
{
	s32 frame;
	type_76 matrix;
	type_81 aperture;
	f32 focal;
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
	f32 r;
	f32 h;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	f32 mag;
	f32 ang;
};

struct FakeEntityInfo
{
	RpAtomic* model;
	xCutsceneAnimHdr* ahdr;
	f32 time;
	type_88 v_array;
	type_91 weight;
	f32 scale;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RpSector
{
	s32 type;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_21 frustumPlanes;
	RwBBox frustumBoundBox;
	type_26 frustumCorners;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
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
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	f32 Time;
	u32 Flags;
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

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
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

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_94 clusters;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct _class_1
{
	xVec3* verts;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
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
	u32 flags;
	type_93 path;
	s32 fd;
	s32 offset;
	s32 length;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
u32 sCutTocCount;
xCutsceneInfo* sCutTocInfo;
type_95 sCutsceneFakeEntity;
type_92 sCutsceneFakeModel;
f32 ShadowStrength;
type_59 CutsceneShadowRender;
tagiRenderArrays gRenderArr;
type_75 ourGlobals;
xMat4x3 g_I3;
xGlobals* xglobals;
f32 gCameraLastFov;
u32 gActiveHeap;

void xCutscene_Render(xCutscene* csn);
void CutsceneShadowRender(CutsceneShadowModel* smod);
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, f32 time);
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, f32 time, u32 tworoot);
void xCutscene_SetCamera(xCutscene* csn, xCamera* cam);
void xCutscene_SetSpeed(xCutscene* csn, f32 speed);
s32 xCutscene_Update(xCutscene* csn, f32 dt);
s32 xCutscene_LoadStart(xCutscene* csn);
s32 xCutscene_Destroy(xCutscene* csn);
xCutscene* xCutscene_Create(u32 id);
void xCutscene_Init(void* toc);

// xCutscene_Render__FP9xCutscenePP4xEntPiPf
// Start address: 0x1ce970
void xCutscene_Render(xCutscene* csn)
{
	u32 i;
	u32 dataIndex;
	u32 animIndex;
	u32 mphIndex;
	u32 visFlags;
	u32 visIdx;
	u32 fakeCount;
	u32 hasAlpha;
	u32 boundhack;
	u32 tworoot;
	u32 noshadow;
	xCutsceneData* data;
	xCutsceneData* mphdata;
	RpAtomic* model;
	RpAtomic* shadowModel;
	type_6 animMat;
	xVec3* camVec;
	XCSNNosey* nosey;
	u32 tempSize;
	RpAtomic* tmpModel;
	f32 maxRadius;
	u32 viscnt;
	u32* currvis;
	u32 subIndex;
	u32 frameMin;
	u32 frameMax;
	u32 frameIndex;
	u32 shadowBits;
	RpGeometry* geom;
	RwTexture* tex;
	s32 matnum;
	u32 morphAnimIndex;
	u32 morphModelIndex;
	u32 numFrame;
	u32 numRun;
	xCutsceneMphFrame* mphFrame;
	xCutsceneMphRun* mphRun;
	xMorphTargetFile* mphFile;
	type_16 v_array;
	type_22 weight;
	u32 skipsize;
	xVec3* csnTmpArray;
	xVec3* currtmp;
	xVec3* outv;
	u32 j;
	u32 cmpval;
	void* deltaAnim;
	void* deltaModel;
	CutsceneShadowModel smod;
	xShadowCache scache;
	xVec3 center;
	f32 radius;
	xVec3 shadVec;
}

// CutsceneShadowRender__FP19CutsceneShadowModel
// Start address: 0x1cf6b0
void CutsceneShadowRender(CutsceneShadowModel* smod)
{
	RpAtomic* model;
	u32 bits;
}

// JDeltaEval__FP8RpAtomicPvPvf
// Start address: 0x1cf720
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, f32 time)
{
	type_71 outweight;
	f32* currweight;
	s32 i;
	s32 numFrames;
	s32 numWeights;
	f32* times;
	f32* weights;
	f32 lerp;
	f32 invlerp;
	RwV3d* outverts;
	s32 numRun;
	JDeltaTarget* dtgt;
	f32 scale;
	s16* svert;
	s32 j;
	s32 cmpval;
	RwV3d* vert;
	s32 j;
	s32 cmpval;
	f32 scale;
	s16* svert;
	s32 j;
	s32 cmpval;
	f32 scale;
	RwV3d* vert;
	s32 j;
	s32 cmpval;
}

// xcsCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrfUi
// Start address: 0x1cfd30
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, f32 time, u32 tworoot)
{
	type_61 quatresult;
	type_64 tranresult;
	void* afile;
	xMat4x3 m1;
	xMat4x3 m2;
	u32 numbone;
	u32 boneidx;
	xQuat* qqq;
	xVec3* ttt;
	xVec3 addtran;
}

// xCutscene_SetCamera__FP9xCutsceneP7xCamera
// Start address: 0x1cffc0
void xCutscene_SetCamera(xCutscene* csn, xCamera* cam)
{
	xCutsceneData* data;
	u32 i;
	u32 dataIndex;
	f32 camFOV;
	xMat4x3 camMat;
	xMat3x3 tmpMat;
	type_32 quats;
	xQuat qresult;
	f32 invlerp;
	f32 lerp;
	s32 frame;
	u32 count;
	zFlyKey* keys;
}

// xCutscene_SetSpeed__FP9xCutscenef
// Start address: 0x1d0380
void xCutscene_SetSpeed(xCutscene* csn, f32 speed)
{
	f32 semitones;
	s32 i;
}

// xCutscene_Update__FP9xCutscenef
// Start address: 0x1d0480
s32 xCutscene_Update(xCutscene* csn, f32 dt)
{
	xCutsceneTime* oldChunk;
}

// xCutscene_LoadStart__FP9xCutscene
// Start address: 0x1d0780
s32 xCutscene_LoadStart(xCutscene* csn)
{
}

// xCutscene_Destroy__FP9xCutscene
// Start address: 0x1d07c0
s32 xCutscene_Destroy(xCutscene* csn)
{
	u32 i;
}

// xCutscene_Create__FUi
// Start address: 0x1d0940
xCutscene* xCutscene_Create(u32 id)
{
	xCutscene* csn;
	u32 i;
	xCutsceneInfo* cnfo;
	u32 maxload;
}

// xCutscene_Init__FPv
// Start address: 0x1d0ac0
void xCutscene_Init(void* toc)
{
	s32 i;
}

