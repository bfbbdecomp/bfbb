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
typedef struct RxColorUnion;
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
typedef int8 type_15[128][6];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	int8 relname[32];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint8 NumAnims[2];
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
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
	XCSNNosey* cb_nosey;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xShadowPoly
{
	xVec3 vert[3];
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
	float32 Translate[3];
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
	uint16 vertIndex[3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	xAnimMultiFileEntry Files[1];
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
	float32 polyRayDepth[5];
	uint16 castOnEnt;
	uint16 castOnPoly;
	xEnt* ent[16];
	xShadowPoly poly[256];
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
	RpClump*(*callback)(RpClump*, void*);
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
	uint32 pad[4];
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

struct JDeltaTarget
{
	int32 skipSize;
	int32 numRuns;
	int32 numVerts;
	float32 scale;
	JDeltaRun runs[1];
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
	float32 param[4];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
};

struct tagiRenderArrays
{
	uint16 m_index[960];
	RxObjSpace3DVertex m_vertex[480];
	float32 m_vertexTZ[480];
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
	void(*destroyNotify)(RwResEntry*);
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
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xFFX
{
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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
	int8 name[32];
	int8 mask[32];
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
	float32 matrix[16];
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
	xVec3 corner[4];
};

struct zFlyKey
{
	int32 frame;
	float32 matrix[12];
	float32 aperture[2];
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
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
	int16* v_array[4];
	int16 weight[4];
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
	xVec4 frustplane[12];
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
	float32 radius[2];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	uint8 pad[3];
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
	RxCluster clusters[1];
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
	int8 path[128];
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

int8 buffer[16];
int8 buffer[16];
xCutscene sActiveCutscene;
uint32 sCutTocCount;
xCutsceneInfo* sCutTocInfo;
xEnt sCutsceneFakeEntity[8];
xModelInstance sCutsceneFakeModel[8];
float32 ShadowStrength;
void(*CutsceneShadowRender)(CutsceneShadowModel*);
tagiRenderArrays gRenderArr;
uint32 ourGlobals[4096];
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
	RwMatrixTag animMat[65];
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
	int16* v_array[4];
	int16 weight[4];
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
	// Line 778, Address: 0x1ce970, Func Offset: 0
	// Line 789, Address: 0x1ce974, Func Offset: 0x4
	// Line 778, Address: 0x1ce978, Func Offset: 0x8
	// Line 785, Address: 0x1ce984, Func Offset: 0x14
	// Line 778, Address: 0x1ce988, Func Offset: 0x18
	// Line 795, Address: 0x1ce9b4, Func Offset: 0x44
	// Line 789, Address: 0x1ce9b8, Func Offset: 0x48
	// Line 795, Address: 0x1ce9bc, Func Offset: 0x4c
	// Line 798, Address: 0x1ce9c0, Func Offset: 0x50
	// Line 795, Address: 0x1ce9c4, Func Offset: 0x54
	// Line 799, Address: 0x1ce9c8, Func Offset: 0x58
	// Line 797, Address: 0x1ce9cc, Func Offset: 0x5c
	// Line 789, Address: 0x1ce9d0, Func Offset: 0x60
	// Line 800, Address: 0x1ce9d4, Func Offset: 0x64
	// Line 789, Address: 0x1ce9d8, Func Offset: 0x68
	// Line 800, Address: 0x1ce9dc, Func Offset: 0x6c
	// Line 802, Address: 0x1cea00, Func Offset: 0x90
	// Line 805, Address: 0x1cea14, Func Offset: 0xa4
	// Line 815, Address: 0x1cea90, Func Offset: 0x120
	// Line 809, Address: 0x1cea94, Func Offset: 0x124
	// Line 812, Address: 0x1cea98, Func Offset: 0x128
	// Line 815, Address: 0x1cea9c, Func Offset: 0x12c
	// Line 811, Address: 0x1ceaa4, Func Offset: 0x134
	// Line 815, Address: 0x1ceaa8, Func Offset: 0x138
	// Line 816, Address: 0x1ceabc, Func Offset: 0x14c
	// Line 820, Address: 0x1ceae4, Func Offset: 0x174
	// Line 816, Address: 0x1ceae8, Func Offset: 0x178
	// Line 821, Address: 0x1ceaec, Func Offset: 0x17c
	// Line 819, Address: 0x1ceaf0, Func Offset: 0x180
	// Line 822, Address: 0x1ceaf4, Func Offset: 0x184
	// Line 819, Address: 0x1ceaf8, Func Offset: 0x188
	// Line 820, Address: 0x1ceafc, Func Offset: 0x18c
	// Line 821, Address: 0x1ceb00, Func Offset: 0x190
	// Line 820, Address: 0x1ceb04, Func Offset: 0x194
	// Line 822, Address: 0x1ceb08, Func Offset: 0x198
	// Line 823, Address: 0x1ceb0c, Func Offset: 0x19c
	// Line 824, Address: 0x1ceb14, Func Offset: 0x1a4
	// Line 823, Address: 0x1ceb20, Func Offset: 0x1b0
	// Line 824, Address: 0x1ceb24, Func Offset: 0x1b4
	// Line 825, Address: 0x1ceb30, Func Offset: 0x1c0
	// Line 827, Address: 0x1ceb38, Func Offset: 0x1c8
	// Line 829, Address: 0x1ceb48, Func Offset: 0x1d8
	// Line 832, Address: 0x1ceb50, Func Offset: 0x1e0
	// Line 836, Address: 0x1ceb54, Func Offset: 0x1e4
	// Line 837, Address: 0x1ceb58, Func Offset: 0x1e8
	// Line 838, Address: 0x1ceb60, Func Offset: 0x1f0
	// Line 839, Address: 0x1ceb6c, Func Offset: 0x1fc
	// Line 840, Address: 0x1ceb84, Func Offset: 0x214
	// Line 841, Address: 0x1ceb90, Func Offset: 0x220
	// Line 851, Address: 0x1ceb98, Func Offset: 0x228
	// Line 852, Address: 0x1ceba8, Func Offset: 0x238
	// Line 857, Address: 0x1cebb0, Func Offset: 0x240
	// Line 871, Address: 0x1cec04, Func Offset: 0x294
	// Line 857, Address: 0x1cec08, Func Offset: 0x298
	// Line 859, Address: 0x1cec0c, Func Offset: 0x29c
	// Line 863, Address: 0x1cec14, Func Offset: 0x2a4
	// Line 860, Address: 0x1cec18, Func Offset: 0x2a8
	// Line 861, Address: 0x1cec1c, Func Offset: 0x2ac
	// Line 863, Address: 0x1cec20, Func Offset: 0x2b0
	// Line 867, Address: 0x1cec2c, Func Offset: 0x2bc
	// Line 868, Address: 0x1cec38, Func Offset: 0x2c8
	// Line 870, Address: 0x1cec40, Func Offset: 0x2d0
	// Line 871, Address: 0x1cec64, Func Offset: 0x2f4
	// Line 875, Address: 0x1cec78, Func Offset: 0x308
	// Line 876, Address: 0x1cec80, Func Offset: 0x310
	// Line 875, Address: 0x1cec84, Func Offset: 0x314
	// Line 877, Address: 0x1cec8c, Func Offset: 0x31c
	// Line 878, Address: 0x1cec94, Func Offset: 0x324
	// Line 881, Address: 0x1cec98, Func Offset: 0x328
	// Line 884, Address: 0x1cecb8, Func Offset: 0x348
	// Line 885, Address: 0x1cecd4, Func Offset: 0x364
	// Line 892, Address: 0x1cecf8, Func Offset: 0x388
	// Line 901, Address: 0x1cecfc, Func Offset: 0x38c
	// Line 904, Address: 0x1ced20, Func Offset: 0x3b0
	// Line 909, Address: 0x1ced38, Func Offset: 0x3c8
	// Line 911, Address: 0x1ced3c, Func Offset: 0x3cc
	// Line 913, Address: 0x1ced48, Func Offset: 0x3d8
	// Line 916, Address: 0x1ced90, Func Offset: 0x420
	// Line 918, Address: 0x1ced98, Func Offset: 0x428
	// Line 920, Address: 0x1cedac, Func Offset: 0x43c
	// Line 922, Address: 0x1cedc0, Func Offset: 0x450
	// Line 924, Address: 0x1cedc8, Func Offset: 0x458
	// Line 929, Address: 0x1ceddc, Func Offset: 0x46c
	// Line 930, Address: 0x1cede4, Func Offset: 0x474
	// Line 934, Address: 0x1cedf0, Func Offset: 0x480
	// Line 1074, Address: 0x1cedf4, Func Offset: 0x484
	// Line 934, Address: 0x1cedf8, Func Offset: 0x488
	// Line 930, Address: 0x1cedfc, Func Offset: 0x48c
	// Line 933, Address: 0x1cee04, Func Offset: 0x494
	// Line 932, Address: 0x1cee08, Func Offset: 0x498
	// Line 934, Address: 0x1cee0c, Func Offset: 0x49c
	// Line 939, Address: 0x1cee34, Func Offset: 0x4c4
	// Line 941, Address: 0x1cee40, Func Offset: 0x4d0
	// Line 943, Address: 0x1cee44, Func Offset: 0x4d4
	// Line 942, Address: 0x1cee48, Func Offset: 0x4d8
	// Line 945, Address: 0x1cee4c, Func Offset: 0x4dc
	// Line 952, Address: 0x1cee50, Func Offset: 0x4e0
	// Line 944, Address: 0x1cee58, Func Offset: 0x4e8
	// Line 945, Address: 0x1cee5c, Func Offset: 0x4ec
	// Line 944, Address: 0x1cee60, Func Offset: 0x4f0
	// Line 945, Address: 0x1cee64, Func Offset: 0x4f4
	// Line 952, Address: 0x1cee7c, Func Offset: 0x50c
	// Line 953, Address: 0x1cee9c, Func Offset: 0x52c
	// Line 956, Address: 0x1ceec0, Func Offset: 0x550
	// Line 957, Address: 0x1ceed8, Func Offset: 0x568
	// Line 958, Address: 0x1ceee8, Func Offset: 0x578
	// Line 961, Address: 0x1ceef8, Func Offset: 0x588
	// Line 962, Address: 0x1ceefc, Func Offset: 0x58c
	// Line 961, Address: 0x1cef00, Func Offset: 0x590
	// Line 962, Address: 0x1cef0c, Func Offset: 0x59c
	// Line 961, Address: 0x1cef10, Func Offset: 0x5a0
	// Line 962, Address: 0x1cef14, Func Offset: 0x5a4
	// Line 963, Address: 0x1cef1c, Func Offset: 0x5ac
	// Line 965, Address: 0x1cef20, Func Offset: 0x5b0
	// Line 966, Address: 0x1cef2c, Func Offset: 0x5bc
	// Line 967, Address: 0x1cef3c, Func Offset: 0x5cc
	// Line 966, Address: 0x1cef40, Func Offset: 0x5d0
	// Line 965, Address: 0x1cef48, Func Offset: 0x5d8
	// Line 967, Address: 0x1cef50, Func Offset: 0x5e0
	// Line 965, Address: 0x1cef58, Func Offset: 0x5e8
	// Line 966, Address: 0x1cef60, Func Offset: 0x5f0
	// Line 967, Address: 0x1cef6c, Func Offset: 0x5fc
	// Line 970, Address: 0x1cef94, Func Offset: 0x624
	// Line 971, Address: 0x1cefb0, Func Offset: 0x640
	// Line 975, Address: 0x1cefb8, Func Offset: 0x648
	// Line 971, Address: 0x1cefc0, Func Offset: 0x650
	// Line 980, Address: 0x1cefc4, Func Offset: 0x654
	// Line 971, Address: 0x1cefd8, Func Offset: 0x668
	// Line 980, Address: 0x1cefe0, Func Offset: 0x670
	// Line 982, Address: 0x1ceff8, Func Offset: 0x688
	// Line 986, Address: 0x1cf004, Func Offset: 0x694
	// Line 987, Address: 0x1cf008, Func Offset: 0x698
	// Line 986, Address: 0x1cf00c, Func Offset: 0x69c
	// Line 987, Address: 0x1cf014, Func Offset: 0x6a4
	// Line 988, Address: 0x1cf024, Func Offset: 0x6b4
	// Line 989, Address: 0x1cf02c, Func Offset: 0x6bc
	// Line 991, Address: 0x1cf058, Func Offset: 0x6e8
	// Line 990, Address: 0x1cf05c, Func Offset: 0x6ec
	// Line 991, Address: 0x1cf060, Func Offset: 0x6f0
	// Line 990, Address: 0x1cf064, Func Offset: 0x6f4
	// Line 991, Address: 0x1cf120, Func Offset: 0x7b0
	// Line 992, Address: 0x1cf148, Func Offset: 0x7d8
	// Line 991, Address: 0x1cf14c, Func Offset: 0x7dc
	// Line 992, Address: 0x1cf150, Func Offset: 0x7e0
	// Line 991, Address: 0x1cf154, Func Offset: 0x7e4
	// Line 992, Address: 0x1cf16c, Func Offset: 0x7fc
	// Line 993, Address: 0x1cf178, Func Offset: 0x808
	// Line 994, Address: 0x1cf188, Func Offset: 0x818
	// Line 996, Address: 0x1cf190, Func Offset: 0x820
	// Line 1001, Address: 0x1cf198, Func Offset: 0x828
	// Line 999, Address: 0x1cf19c, Func Offset: 0x82c
	// Line 1000, Address: 0x1cf1a0, Func Offset: 0x830
	// Line 1001, Address: 0x1cf1a4, Func Offset: 0x834
	// Line 1002, Address: 0x1cf1c0, Func Offset: 0x850
	// Line 1001, Address: 0x1cf1c4, Func Offset: 0x854
	// Line 1002, Address: 0x1cf1c8, Func Offset: 0x858
	// Line 1004, Address: 0x1cf1ec, Func Offset: 0x87c
	// Line 1005, Address: 0x1cf1f4, Func Offset: 0x884
	// Line 1006, Address: 0x1cf1fc, Func Offset: 0x88c
	// Line 1005, Address: 0x1cf208, Func Offset: 0x898
	// Line 1006, Address: 0x1cf20c, Func Offset: 0x89c
	// Line 1010, Address: 0x1cf218, Func Offset: 0x8a8
	// Line 1011, Address: 0x1cf224, Func Offset: 0x8b4
	// Line 1013, Address: 0x1cf228, Func Offset: 0x8b8
	// Line 1015, Address: 0x1cf230, Func Offset: 0x8c0
	// Line 1039, Address: 0x1cf248, Func Offset: 0x8d8
	// Line 1015, Address: 0x1cf24c, Func Offset: 0x8dc
	// Line 1039, Address: 0x1cf258, Func Offset: 0x8e8
	// Line 1041, Address: 0x1cf264, Func Offset: 0x8f4
	// Line 1042, Address: 0x1cf274, Func Offset: 0x904
	// Line 1043, Address: 0x1cf278, Func Offset: 0x908
	// Line 1042, Address: 0x1cf27c, Func Offset: 0x90c
	// Line 1043, Address: 0x1cf280, Func Offset: 0x910
	// Line 1044, Address: 0x1cf284, Func Offset: 0x914
	// Line 1045, Address: 0x1cf288, Func Offset: 0x918
	// Line 1046, Address: 0x1cf294, Func Offset: 0x924
	// Line 1047, Address: 0x1cf2d4, Func Offset: 0x964
	// Line 1046, Address: 0x1cf2d8, Func Offset: 0x968
	// Line 1047, Address: 0x1cf2ec, Func Offset: 0x97c
	// Line 1053, Address: 0x1cf2f4, Func Offset: 0x984
	// Line 1055, Address: 0x1cf300, Func Offset: 0x990
	// Line 1056, Address: 0x1cf30c, Func Offset: 0x99c
	// Line 1066, Address: 0x1cf318, Func Offset: 0x9a8
	// Line 1067, Address: 0x1cf330, Func Offset: 0x9c0
	// Line 1071, Address: 0x1cf33c, Func Offset: 0x9cc
	// Line 1072, Address: 0x1cf344, Func Offset: 0x9d4
	// Line 1074, Address: 0x1cf348, Func Offset: 0x9d8
	// Line 1075, Address: 0x1cf34c, Func Offset: 0x9dc
	// Line 1076, Address: 0x1cf350, Func Offset: 0x9e0
	// Line 1074, Address: 0x1cf354, Func Offset: 0x9e4
	// Line 1076, Address: 0x1cf360, Func Offset: 0x9f0
	// Line 1078, Address: 0x1cf368, Func Offset: 0x9f8
	// Line 1080, Address: 0x1cf370, Func Offset: 0xa00
	// Line 1096, Address: 0x1cf388, Func Offset: 0xa18
	// Line 1080, Address: 0x1cf38c, Func Offset: 0xa1c
	// Line 1096, Address: 0x1cf398, Func Offset: 0xa28
	// Line 1098, Address: 0x1cf3a4, Func Offset: 0xa34
	// Line 1099, Address: 0x1cf3b4, Func Offset: 0xa44
	// Line 1100, Address: 0x1cf3b8, Func Offset: 0xa48
	// Line 1099, Address: 0x1cf3bc, Func Offset: 0xa4c
	// Line 1100, Address: 0x1cf3c0, Func Offset: 0xa50
	// Line 1101, Address: 0x1cf3c4, Func Offset: 0xa54
	// Line 1102, Address: 0x1cf3c8, Func Offset: 0xa58
	// Line 1103, Address: 0x1cf3d4, Func Offset: 0xa64
	// Line 1104, Address: 0x1cf414, Func Offset: 0xaa4
	// Line 1103, Address: 0x1cf418, Func Offset: 0xaa8
	// Line 1104, Address: 0x1cf42c, Func Offset: 0xabc
	// Line 1109, Address: 0x1cf434, Func Offset: 0xac4
	// Line 1112, Address: 0x1cf440, Func Offset: 0xad0
	// Line 1113, Address: 0x1cf44c, Func Offset: 0xadc
	// Line 1123, Address: 0x1cf458, Func Offset: 0xae8
	// Line 1124, Address: 0x1cf470, Func Offset: 0xb00
	// Line 1130, Address: 0x1cf480, Func Offset: 0xb10
	// Line 1131, Address: 0x1cf490, Func Offset: 0xb20
	// Line 1137, Address: 0x1cf498, Func Offset: 0xb28
	// Line 1142, Address: 0x1cf528, Func Offset: 0xbb8
	// Line 1158, Address: 0x1cf52c, Func Offset: 0xbbc
	// Line 1142, Address: 0x1cf530, Func Offset: 0xbc0
	// Line 1158, Address: 0x1cf53c, Func Offset: 0xbcc
	// Line 1143, Address: 0x1cf540, Func Offset: 0xbd0
	// Line 1142, Address: 0x1cf548, Func Offset: 0xbd8
	// Line 1143, Address: 0x1cf550, Func Offset: 0xbe0
	// Line 1147, Address: 0x1cf554, Func Offset: 0xbe4
	// Line 1143, Address: 0x1cf558, Func Offset: 0xbe8
	// Line 1158, Address: 0x1cf55c, Func Offset: 0xbec
	// Line 1142, Address: 0x1cf560, Func Offset: 0xbf0
	// Line 1158, Address: 0x1cf568, Func Offset: 0xbf8
	// Line 1142, Address: 0x1cf56c, Func Offset: 0xbfc
	// Line 1146, Address: 0x1cf570, Func Offset: 0xc00
	// Line 1147, Address: 0x1cf578, Func Offset: 0xc08
	// Line 1148, Address: 0x1cf580, Func Offset: 0xc10
	// Line 1158, Address: 0x1cf588, Func Offset: 0xc18
	// Line 1159, Address: 0x1cf590, Func Offset: 0xc20
	// Line 1160, Address: 0x1cf5b4, Func Offset: 0xc44
	// Line 1161, Address: 0x1cf5d0, Func Offset: 0xc60
	// Line 1169, Address: 0x1cf5ec, Func Offset: 0xc7c
	// Line 1170, Address: 0x1cf5f0, Func Offset: 0xc80
	// Line 1171, Address: 0x1cf5fc, Func Offset: 0xc8c
	// Line 1174, Address: 0x1cf600, Func Offset: 0xc90
	// Line 1173, Address: 0x1cf604, Func Offset: 0xc94
	// Line 1174, Address: 0x1cf60c, Func Offset: 0xc9c
	// Line 1173, Address: 0x1cf614, Func Offset: 0xca4
	// Line 1175, Address: 0x1cf618, Func Offset: 0xca8
	// Line 1173, Address: 0x1cf61c, Func Offset: 0xcac
	// Line 1175, Address: 0x1cf624, Func Offset: 0xcb4
	// Line 1178, Address: 0x1cf638, Func Offset: 0xcc8
	// Line 1179, Address: 0x1cf654, Func Offset: 0xce4
	// Line 1180, Address: 0x1cf66c, Func Offset: 0xcfc
	// Line 1183, Address: 0x1cf670, Func Offset: 0xd00
	// Func End, Address: 0x1cf6ac, Func Offset: 0xd3c
}

// CutsceneShadowRender__FP19CutsceneShadowModel
// Start address: 0x1cf6b0
void CutsceneShadowRender(CutsceneShadowModel* smod)
{
	RpAtomic* model;
	uint32 bits;
	// Line 763, Address: 0x1cf6b0, Func Offset: 0
	// Line 764, Address: 0x1cf6c4, Func Offset: 0x14
	// Line 765, Address: 0x1cf6c8, Func Offset: 0x18
	// Line 766, Address: 0x1cf6cc, Func Offset: 0x1c
	// Line 767, Address: 0x1cf6d8, Func Offset: 0x28
	// Line 768, Address: 0x1cf6e4, Func Offset: 0x34
	// Line 770, Address: 0x1cf6f0, Func Offset: 0x40
	// Line 772, Address: 0x1cf6fc, Func Offset: 0x4c
	// Line 773, Address: 0x1cf708, Func Offset: 0x58
	// Func End, Address: 0x1cf720, Func Offset: 0x70
}

// JDeltaEval__FP8RpAtomicPvPvf
// Start address: 0x1cf720
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, float32 time)
{
	float32 outweight[128];
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
	// Line 637, Address: 0x1cf720, Func Offset: 0
	// Line 655, Address: 0x1cf724, Func Offset: 0x4
	// Line 637, Address: 0x1cf728, Func Offset: 0x8
	// Line 659, Address: 0x1cf740, Func Offset: 0x20
	// Line 652, Address: 0x1cf744, Func Offset: 0x24
	// Line 653, Address: 0x1cf748, Func Offset: 0x28
	// Line 659, Address: 0x1cf74c, Func Offset: 0x2c
	// Line 660, Address: 0x1cf768, Func Offset: 0x48
	// Line 661, Address: 0x1cf774, Func Offset: 0x54
	// Line 662, Address: 0x1cf790, Func Offset: 0x70
	// Line 663, Address: 0x1cf7a8, Func Offset: 0x88
	// Line 668, Address: 0x1cf7b0, Func Offset: 0x90
	// Line 669, Address: 0x1cf7b4, Func Offset: 0x94
	// Line 670, Address: 0x1cf7bc, Func Offset: 0x9c
	// Line 672, Address: 0x1cf7cc, Func Offset: 0xac
	// Line 673, Address: 0x1cf7d4, Func Offset: 0xb4
	// Line 671, Address: 0x1cf7d8, Func Offset: 0xb8
	// Line 673, Address: 0x1cf7e8, Func Offset: 0xc8
	// Line 674, Address: 0x1cf808, Func Offset: 0xe8
	// Line 675, Address: 0x1cf958, Func Offset: 0x238
	// Line 674, Address: 0x1cf95c, Func Offset: 0x23c
	// Line 675, Address: 0x1cf96c, Func Offset: 0x24c
	// Line 674, Address: 0x1cf970, Func Offset: 0x250
	// Line 675, Address: 0x1cf97c, Func Offset: 0x25c
	// Line 676, Address: 0x1cf984, Func Offset: 0x264
	// Line 680, Address: 0x1cf988, Func Offset: 0x268
	// Line 688, Address: 0x1cf994, Func Offset: 0x274
	// Line 689, Address: 0x1cf99c, Func Offset: 0x27c
	// Line 684, Address: 0x1cf9a0, Func Offset: 0x280
	// Line 688, Address: 0x1cf9a4, Func Offset: 0x284
	// Line 689, Address: 0x1cf9a8, Func Offset: 0x288
	// Line 688, Address: 0x1cf9ac, Func Offset: 0x28c
	// Line 689, Address: 0x1cf9b0, Func Offset: 0x290
	// Line 691, Address: 0x1cf9b8, Func Offset: 0x298
	// Line 692, Address: 0x1cf9c4, Func Offset: 0x2a4
	// Line 691, Address: 0x1cf9c8, Func Offset: 0x2a8
	// Line 692, Address: 0x1cf9cc, Func Offset: 0x2ac
	// Line 691, Address: 0x1cf9d0, Func Offset: 0x2b0
	// Line 692, Address: 0x1cf9dc, Func Offset: 0x2bc
	// Line 693, Address: 0x1cf9ec, Func Offset: 0x2cc
	// Line 694, Address: 0x1cf9f4, Func Offset: 0x2d4
	// Line 695, Address: 0x1cfa10, Func Offset: 0x2f0
	// Line 699, Address: 0x1cfa14, Func Offset: 0x2f4
	// Line 695, Address: 0x1cfa1c, Func Offset: 0x2fc
	// Line 696, Address: 0x1cfa30, Func Offset: 0x310
	// Line 697, Address: 0x1cfa48, Func Offset: 0x328
	// Line 698, Address: 0x1cfa50, Func Offset: 0x330
	// Line 697, Address: 0x1cfa54, Func Offset: 0x334
	// Line 699, Address: 0x1cfa60, Func Offset: 0x340
	// Line 700, Address: 0x1cfa68, Func Offset: 0x348
	// Line 701, Address: 0x1cfa78, Func Offset: 0x358
	// Line 702, Address: 0x1cfa80, Func Offset: 0x360
	// Line 703, Address: 0x1cfa88, Func Offset: 0x368
	// Line 702, Address: 0x1cfa8c, Func Offset: 0x36c
	// Line 703, Address: 0x1cfa98, Func Offset: 0x378
	// Line 702, Address: 0x1cfa9c, Func Offset: 0x37c
	// Line 703, Address: 0x1cfaa4, Func Offset: 0x384
	// Line 704, Address: 0x1cfab4, Func Offset: 0x394
	// Line 705, Address: 0x1cfabc, Func Offset: 0x39c
	// Line 708, Address: 0x1cfad8, Func Offset: 0x3b8
	// Line 706, Address: 0x1cfadc, Func Offset: 0x3bc
	// Line 708, Address: 0x1cfae0, Func Offset: 0x3c0
	// Line 706, Address: 0x1cfae4, Func Offset: 0x3c4
	// Line 707, Address: 0x1cfaf8, Func Offset: 0x3d8
	// Line 708, Address: 0x1cfafc, Func Offset: 0x3dc
	// Line 709, Address: 0x1cfb08, Func Offset: 0x3e8
	// Line 715, Address: 0x1cfb18, Func Offset: 0x3f8
	// Line 713, Address: 0x1cfb1c, Func Offset: 0x3fc
	// Line 717, Address: 0x1cfb20, Func Offset: 0x400
	// Line 720, Address: 0x1cfb28, Func Offset: 0x408
	// Line 735, Address: 0x1cfb2c, Func Offset: 0x40c
	// Line 719, Address: 0x1cfb30, Func Offset: 0x410
	// Line 720, Address: 0x1cfb34, Func Offset: 0x414
	// Line 721, Address: 0x1cfb44, Func Offset: 0x424
	// Line 724, Address: 0x1cfb50, Func Offset: 0x430
	// Line 723, Address: 0x1cfb54, Func Offset: 0x434
	// Line 724, Address: 0x1cfb58, Func Offset: 0x438
	// Line 723, Address: 0x1cfb5c, Func Offset: 0x43c
	// Line 722, Address: 0x1cfb6c, Func Offset: 0x44c
	// Line 724, Address: 0x1cfb70, Func Offset: 0x450
	// Line 725, Address: 0x1cfb84, Func Offset: 0x464
	// Line 726, Address: 0x1cfb8c, Func Offset: 0x46c
	// Line 727, Address: 0x1cfba8, Func Offset: 0x488
	// Line 731, Address: 0x1cfbac, Func Offset: 0x48c
	// Line 727, Address: 0x1cfbb0, Func Offset: 0x490
	// Line 731, Address: 0x1cfbb4, Func Offset: 0x494
	// Line 727, Address: 0x1cfbb8, Func Offset: 0x498
	// Line 728, Address: 0x1cfbd0, Func Offset: 0x4b0
	// Line 729, Address: 0x1cfbf0, Func Offset: 0x4d0
	// Line 730, Address: 0x1cfbfc, Func Offset: 0x4dc
	// Line 729, Address: 0x1cfc00, Func Offset: 0x4e0
	// Line 731, Address: 0x1cfc10, Func Offset: 0x4f0
	// Line 732, Address: 0x1cfc18, Func Offset: 0x4f8
	// Line 733, Address: 0x1cfc28, Func Offset: 0x508
	// Line 735, Address: 0x1cfc30, Func Offset: 0x510
	// Line 736, Address: 0x1cfc38, Func Offset: 0x518
	// Line 735, Address: 0x1cfc3c, Func Offset: 0x51c
	// Line 736, Address: 0x1cfc40, Func Offset: 0x520
	// Line 735, Address: 0x1cfc44, Func Offset: 0x524
	// Line 736, Address: 0x1cfc50, Func Offset: 0x530
	// Line 737, Address: 0x1cfc64, Func Offset: 0x544
	// Line 738, Address: 0x1cfc6c, Func Offset: 0x54c
	// Line 743, Address: 0x1cfc88, Func Offset: 0x568
	// Line 739, Address: 0x1cfc8c, Func Offset: 0x56c
	// Line 743, Address: 0x1cfc90, Func Offset: 0x570
	// Line 739, Address: 0x1cfc94, Func Offset: 0x574
	// Line 740, Address: 0x1cfca4, Func Offset: 0x584
	// Line 741, Address: 0x1cfcb8, Func Offset: 0x598
	// Line 742, Address: 0x1cfcc4, Func Offset: 0x5a4
	// Line 741, Address: 0x1cfcc8, Func Offset: 0x5a8
	// Line 743, Address: 0x1cfcd0, Func Offset: 0x5b0
	// Line 744, Address: 0x1cfcd8, Func Offset: 0x5b8
	// Line 748, Address: 0x1cfce8, Func Offset: 0x5c8
	// Line 750, Address: 0x1cfcec, Func Offset: 0x5cc
	// Line 749, Address: 0x1cfcf0, Func Offset: 0x5d0
	// Line 751, Address: 0x1cfcf4, Func Offset: 0x5d4
	// Line 753, Address: 0x1cfd00, Func Offset: 0x5e0
	// Line 754, Address: 0x1cfd08, Func Offset: 0x5e8
	// Func End, Address: 0x1cfd30, Func Offset: 0x610
}

// xcsCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrfUi
// Start address: 0x1cfd30
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float32 time, uint32 tworoot)
{
	xQuat quatresult[65];
	xVec3 tranresult[65];
	void* afile;
	xMat4x3 m1;
	xMat4x3 m2;
	uint32 numbone;
	uint32 boneidx;
	xQuat* qqq;
	xVec3* ttt;
	xVec3 addtran;
	// Line 541, Address: 0x1cfd30, Func Offset: 0
	// Line 545, Address: 0x1cfd58, Func Offset: 0x28
	// Line 544, Address: 0x1cfd5c, Func Offset: 0x2c
	// Line 545, Address: 0x1cfd60, Func Offset: 0x30
	// Line 548, Address: 0x1cfd6c, Func Offset: 0x3c
	// Line 551, Address: 0x1cfd7c, Func Offset: 0x4c
	// Line 552, Address: 0x1cfd8c, Func Offset: 0x5c
	// Line 553, Address: 0x1cfd94, Func Offset: 0x64
	// Line 554, Address: 0x1cfd9c, Func Offset: 0x6c
	// Line 557, Address: 0x1cfda0, Func Offset: 0x70
	// Line 561, Address: 0x1cfda8, Func Offset: 0x78
	// Line 563, Address: 0x1cfdac, Func Offset: 0x7c
	// Line 562, Address: 0x1cfdb0, Func Offset: 0x80
	// Line 563, Address: 0x1cfdb4, Func Offset: 0x84
	// Line 561, Address: 0x1cfdb8, Func Offset: 0x88
	// Line 562, Address: 0x1cfdbc, Func Offset: 0x8c
	// Line 561, Address: 0x1cfdc0, Func Offset: 0x90
	// Line 563, Address: 0x1cfdc4, Func Offset: 0x94
	// Line 564, Address: 0x1cfdcc, Func Offset: 0x9c
	// Line 565, Address: 0x1cfdd8, Func Offset: 0xa8
	// Line 567, Address: 0x1cfddc, Func Offset: 0xac
	// Line 565, Address: 0x1cfde0, Func Offset: 0xb0
	// Line 567, Address: 0x1cfde4, Func Offset: 0xb4
	// Line 565, Address: 0x1cfde8, Func Offset: 0xb8
	// Line 567, Address: 0x1cfdec, Func Offset: 0xbc
	// Line 566, Address: 0x1cfdf0, Func Offset: 0xc0
	// Line 565, Address: 0x1cfdfc, Func Offset: 0xcc
	// Line 566, Address: 0x1cfe08, Func Offset: 0xd8
	// Line 567, Address: 0x1cfe10, Func Offset: 0xe0
	// Line 574, Address: 0x1cfe18, Func Offset: 0xe8
	// Line 575, Address: 0x1cfe1c, Func Offset: 0xec
	// Line 574, Address: 0x1cfe20, Func Offset: 0xf0
	// Line 575, Address: 0x1cfe24, Func Offset: 0xf4
	// Line 568, Address: 0x1cfe28, Func Offset: 0xf8
	// Line 569, Address: 0x1cfe2c, Func Offset: 0xfc
	// Line 570, Address: 0x1cfe30, Func Offset: 0x100
	// Line 571, Address: 0x1cfe34, Func Offset: 0x104
	// Line 572, Address: 0x1cfe38, Func Offset: 0x108
	// Line 575, Address: 0x1cfe3c, Func Offset: 0x10c
	// Line 576, Address: 0x1cfe44, Func Offset: 0x114
	// Line 577, Address: 0x1cfe48, Func Offset: 0x118
	// Line 576, Address: 0x1cfe54, Func Offset: 0x124
	// Line 577, Address: 0x1cfe5c, Func Offset: 0x12c
	// Line 582, Address: 0x1cfe68, Func Offset: 0x138
	// Line 584, Address: 0x1cfe70, Func Offset: 0x140
	// Line 582, Address: 0x1cfe74, Func Offset: 0x144
	// Line 583, Address: 0x1cfe78, Func Offset: 0x148
	// Line 584, Address: 0x1cfe7c, Func Offset: 0x14c
	// Line 585, Address: 0x1cfea0, Func Offset: 0x170
	// Line 586, Address: 0x1cfeb8, Func Offset: 0x188
	// Line 587, Address: 0x1cfec8, Func Offset: 0x198
	// Line 588, Address: 0x1cfed8, Func Offset: 0x1a8
	// Line 589, Address: 0x1cfee8, Func Offset: 0x1b8
	// Line 590, Address: 0x1cfeec, Func Offset: 0x1bc
	// Line 591, Address: 0x1cfef0, Func Offset: 0x1c0
	// Line 592, Address: 0x1cfef4, Func Offset: 0x1c4
	// Line 594, Address: 0x1cff08, Func Offset: 0x1d8
	// Line 595, Address: 0x1cff0c, Func Offset: 0x1dc
	// Line 596, Address: 0x1cff10, Func Offset: 0x1e0
	// Line 597, Address: 0x1cff14, Func Offset: 0x1e4
	// Line 599, Address: 0x1cff38, Func Offset: 0x208
	// Line 601, Address: 0x1cff4c, Func Offset: 0x21c
	// Line 602, Address: 0x1cff58, Func Offset: 0x228
	// Line 603, Address: 0x1cff64, Func Offset: 0x234
	// Line 604, Address: 0x1cff74, Func Offset: 0x244
	// Line 605, Address: 0x1cff84, Func Offset: 0x254
	// Line 606, Address: 0x1cff94, Func Offset: 0x264
	// Line 607, Address: 0x1cff98, Func Offset: 0x268
	// Func End, Address: 0x1cffb4, Func Offset: 0x284
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
	xQuat quats[2];
	xQuat qresult;
	float32 invlerp;
	float32 lerp;
	int32 frame;
	uint32 count;
	zFlyKey* keys;
	// Line 411, Address: 0x1cffc0, Func Offset: 0
	// Line 424, Address: 0x1cffd4, Func Offset: 0x14
	// Line 411, Address: 0x1cffd8, Func Offset: 0x18
	// Line 423, Address: 0x1d0000, Func Offset: 0x40
	// Line 425, Address: 0x1d0004, Func Offset: 0x44
	// Line 467, Address: 0x1d0018, Func Offset: 0x58
	// Line 471, Address: 0x1d0028, Func Offset: 0x68
	// Line 474, Address: 0x1d0040, Func Offset: 0x80
	// Line 472, Address: 0x1d0044, Func Offset: 0x84
	// Line 471, Address: 0x1d0048, Func Offset: 0x88
	// Line 474, Address: 0x1d0050, Func Offset: 0x90
	// Line 475, Address: 0x1d005c, Func Offset: 0x9c
	// Line 476, Address: 0x1d0060, Func Offset: 0xa0
	// Line 477, Address: 0x1d0080, Func Offset: 0xc0
	// Line 478, Address: 0x1d0084, Func Offset: 0xc4
	// Line 477, Address: 0x1d0088, Func Offset: 0xc8
	// Line 479, Address: 0x1d008c, Func Offset: 0xcc
	// Line 480, Address: 0x1d0098, Func Offset: 0xd8
	// Line 481, Address: 0x1d00b8, Func Offset: 0xf8
	// Line 480, Address: 0x1d00bc, Func Offset: 0xfc
	// Line 481, Address: 0x1d00c0, Func Offset: 0x100
	// Line 480, Address: 0x1d00c8, Func Offset: 0x108
	// Line 481, Address: 0x1d00cc, Func Offset: 0x10c
	// Line 483, Address: 0x1d00d0, Func Offset: 0x110
	// Line 484, Address: 0x1d00d8, Func Offset: 0x118
	// Line 483, Address: 0x1d00e4, Func Offset: 0x124
	// Line 486, Address: 0x1d00e8, Func Offset: 0x128
	// Line 485, Address: 0x1d00ec, Func Offset: 0x12c
	// Line 494, Address: 0x1d00f0, Func Offset: 0x130
	// Line 485, Address: 0x1d00f8, Func Offset: 0x138
	// Line 486, Address: 0x1d0100, Func Offset: 0x140
	// Line 487, Address: 0x1d010c, Func Offset: 0x14c
	// Line 488, Address: 0x1d011c, Func Offset: 0x15c
	// Line 489, Address: 0x1d0128, Func Offset: 0x168
	// Line 490, Address: 0x1d0134, Func Offset: 0x174
	// Line 491, Address: 0x1d0140, Func Offset: 0x180
	// Line 492, Address: 0x1d0150, Func Offset: 0x190
	// Line 493, Address: 0x1d0160, Func Offset: 0x1a0
	// Line 494, Address: 0x1d016c, Func Offset: 0x1ac
	// Line 495, Address: 0x1d0174, Func Offset: 0x1b4
	// Line 494, Address: 0x1d0178, Func Offset: 0x1b8
	// Line 495, Address: 0x1d017c, Func Offset: 0x1bc
	// Line 496, Address: 0x1d0188, Func Offset: 0x1c8
	// Line 497, Address: 0x1d019c, Func Offset: 0x1dc
	// Line 503, Address: 0x1d01ac, Func Offset: 0x1ec
	// Line 498, Address: 0x1d01b0, Func Offset: 0x1f0
	// Line 503, Address: 0x1d01b4, Func Offset: 0x1f4
	// Line 498, Address: 0x1d01bc, Func Offset: 0x1fc
	// Line 503, Address: 0x1d0204, Func Offset: 0x244
	// Line 505, Address: 0x1d024c, Func Offset: 0x28c
	// Line 503, Address: 0x1d0250, Func Offset: 0x290
	// Line 505, Address: 0x1d0254, Func Offset: 0x294
	// Line 503, Address: 0x1d0258, Func Offset: 0x298
	// Line 505, Address: 0x1d025c, Func Offset: 0x29c
	// Line 503, Address: 0x1d0264, Func Offset: 0x2a4
	// Line 505, Address: 0x1d0270, Func Offset: 0x2b0
	// Line 506, Address: 0x1d02fc, Func Offset: 0x33c
	// Line 507, Address: 0x1d0304, Func Offset: 0x344
	// Line 512, Address: 0x1d0310, Func Offset: 0x350
	// Line 510, Address: 0x1d0314, Func Offset: 0x354
	// Line 511, Address: 0x1d031c, Func Offset: 0x35c
	// Line 512, Address: 0x1d0320, Func Offset: 0x360
	// Line 510, Address: 0x1d0324, Func Offset: 0x364
	// Line 512, Address: 0x1d0330, Func Offset: 0x370
	// Line 513, Address: 0x1d0340, Func Offset: 0x380
	// Func End, Address: 0x1d0378, Func Offset: 0x3b8
}

// xCutscene_SetSpeed__FP9xCutscenef
// Start address: 0x1d0380
void xCutscene_SetSpeed(xCutscene* csn, float32 speed)
{
	float32 semitones;
	int32 i;
	// Line 379, Address: 0x1d0380, Func Offset: 0
	// Line 381, Address: 0x1d0398, Func Offset: 0x18
	// Line 386, Address: 0x1d03a4, Func Offset: 0x24
	// Line 387, Address: 0x1d03c0, Func Offset: 0x40
	// Line 392, Address: 0x1d03e0, Func Offset: 0x60
	// Line 393, Address: 0x1d03f4, Func Offset: 0x74
	// Line 394, Address: 0x1d0400, Func Offset: 0x80
	// Line 395, Address: 0x1d0408, Func Offset: 0x88
	// Line 396, Address: 0x1d0424, Func Offset: 0xa4
	// Line 397, Address: 0x1d0428, Func Offset: 0xa8
	// Line 398, Address: 0x1d0440, Func Offset: 0xc0
	// Line 399, Address: 0x1d044c, Func Offset: 0xcc
	// Line 400, Address: 0x1d0460, Func Offset: 0xe0
	// Func End, Address: 0x1d047c, Func Offset: 0xfc
}

// xCutscene_Update__FP9xCutscenef
// Start address: 0x1d0480
int32 xCutscene_Update(xCutscene* csn, float32 dt)
{
	xCutsceneTime* oldChunk;
	// Line 280, Address: 0x1d0480, Func Offset: 0
	// Line 289, Address: 0x1d0494, Func Offset: 0x14
	// Line 291, Address: 0x1d04a4, Func Offset: 0x24
	// Line 292, Address: 0x1d04ac, Func Offset: 0x2c
	// Line 293, Address: 0x1d04b4, Func Offset: 0x34
	// Line 294, Address: 0x1d04c0, Func Offset: 0x40
	// Line 295, Address: 0x1d04d4, Func Offset: 0x54
	// Line 296, Address: 0x1d04e4, Func Offset: 0x64
	// Line 297, Address: 0x1d04e8, Func Offset: 0x68
	// Line 310, Address: 0x1d04f0, Func Offset: 0x70
	// Line 313, Address: 0x1d0504, Func Offset: 0x84
	// Line 315, Address: 0x1d0590, Func Offset: 0x110
	// Line 313, Address: 0x1d0594, Func Offset: 0x114
	// Line 315, Address: 0x1d0598, Func Offset: 0x118
	// Line 318, Address: 0x1d05b0, Func Offset: 0x130
	// Line 319, Address: 0x1d05c8, Func Offset: 0x148
	// Line 320, Address: 0x1d05cc, Func Offset: 0x14c
	// Line 321, Address: 0x1d05d4, Func Offset: 0x154
	// Line 324, Address: 0x1d05d8, Func Offset: 0x158
	// Line 328, Address: 0x1d05f0, Func Offset: 0x170
	// Line 329, Address: 0x1d05f4, Func Offset: 0x174
	// Line 333, Address: 0x1d0600, Func Offset: 0x180
	// Line 334, Address: 0x1d0614, Func Offset: 0x194
	// Line 335, Address: 0x1d061c, Func Offset: 0x19c
	// Line 338, Address: 0x1d0620, Func Offset: 0x1a0
	// Line 339, Address: 0x1d062c, Func Offset: 0x1ac
	// Line 340, Address: 0x1d0638, Func Offset: 0x1b8
	// Line 341, Address: 0x1d06c4, Func Offset: 0x244
	// Line 345, Address: 0x1d06d0, Func Offset: 0x250
	// Line 346, Address: 0x1d06d4, Func Offset: 0x254
	// Line 347, Address: 0x1d06e4, Func Offset: 0x264
	// Line 348, Address: 0x1d06ec, Func Offset: 0x26c
	// Line 349, Address: 0x1d06f0, Func Offset: 0x270
	// Line 353, Address: 0x1d06f8, Func Offset: 0x278
	// Line 354, Address: 0x1d06fc, Func Offset: 0x27c
	// Line 355, Address: 0x1d0704, Func Offset: 0x284
	// Line 356, Address: 0x1d0708, Func Offset: 0x288
	// Line 364, Address: 0x1d0714, Func Offset: 0x294
	// Line 356, Address: 0x1d0718, Func Offset: 0x298
	// Line 364, Address: 0x1d071c, Func Offset: 0x29c
	// Line 365, Address: 0x1d0738, Func Offset: 0x2b8
	// Line 370, Address: 0x1d0754, Func Offset: 0x2d4
	// Line 372, Address: 0x1d0758, Func Offset: 0x2d8
	// Line 373, Address: 0x1d0760, Func Offset: 0x2e0
	// Func End, Address: 0x1d0774, Func Offset: 0x2f4
}

// xCutscene_LoadStart__FP9xCutscene
// Start address: 0x1d0780
int32 xCutscene_LoadStart(xCutscene* csn)
{
	// Line 246, Address: 0x1d0780, Func Offset: 0
	// Line 250, Address: 0x1d078c, Func Offset: 0xc
	// Line 251, Address: 0x1d079c, Func Offset: 0x1c
	// Line 252, Address: 0x1d07a4, Func Offset: 0x24
	// Line 253, Address: 0x1d07a8, Func Offset: 0x28
	// Line 255, Address: 0x1d07b0, Func Offset: 0x30
	// Func End, Address: 0x1d07c0, Func Offset: 0x40
}

// xCutscene_Destroy__FP9xCutscene
// Start address: 0x1d07c0
int32 xCutscene_Destroy(xCutscene* csn)
{
	uint32 i;
	// Line 161, Address: 0x1d07c0, Func Offset: 0
	// Line 183, Address: 0x1d07dc, Func Offset: 0x1c
	// Line 186, Address: 0x1d07e0, Func Offset: 0x20
	// Line 189, Address: 0x1d07e8, Func Offset: 0x28
	// Line 193, Address: 0x1d07f4, Func Offset: 0x34
	// Line 194, Address: 0x1d07fc, Func Offset: 0x3c
	// Line 195, Address: 0x1d080c, Func Offset: 0x4c
	// Line 196, Address: 0x1d0814, Func Offset: 0x54
	// Line 197, Address: 0x1d0818, Func Offset: 0x58
	// Line 199, Address: 0x1d0820, Func Offset: 0x60
	// Line 200, Address: 0x1d0824, Func Offset: 0x64
	// Line 202, Address: 0x1d0828, Func Offset: 0x68
	// Line 203, Address: 0x1d0834, Func Offset: 0x74
	// Line 206, Address: 0x1d083c, Func Offset: 0x7c
	// Line 208, Address: 0x1d0848, Func Offset: 0x88
	// Line 213, Address: 0x1d0850, Func Offset: 0x90
	// Line 214, Address: 0x1d0874, Func Offset: 0xb4
	// Line 213, Address: 0x1d0878, Func Offset: 0xb8
	// Line 214, Address: 0x1d0880, Func Offset: 0xc0
	// Line 216, Address: 0x1d0890, Func Offset: 0xd0
	// Line 222, Address: 0x1d0898, Func Offset: 0xd8
	// Line 223, Address: 0x1d08ac, Func Offset: 0xec
	// Line 224, Address: 0x1d08b8, Func Offset: 0xf8
	// Line 225, Address: 0x1d08c0, Func Offset: 0x100
	// Line 227, Address: 0x1d08c8, Func Offset: 0x108
	// Line 229, Address: 0x1d08e0, Func Offset: 0x120
	// Line 235, Address: 0x1d08f8, Func Offset: 0x138
	// Line 239, Address: 0x1d0908, Func Offset: 0x148
	// Line 242, Address: 0x1d0918, Func Offset: 0x158
	// Line 241, Address: 0x1d091c, Func Offset: 0x15c
	// Line 242, Address: 0x1d0920, Func Offset: 0x160
	// Func End, Address: 0x1d0938, Func Offset: 0x178
}

// xCutscene_Create__FUi
// Start address: 0x1d0940
xCutscene* xCutscene_Create(uint32 id)
{
	xCutscene* csn;
	uint32 i;
	xCutsceneInfo* cnfo;
	uint32 maxload;
	// Line 105, Address: 0x1d0940, Func Offset: 0
	// Line 106, Address: 0x1d0954, Func Offset: 0x14
	// Line 105, Address: 0x1d0958, Func Offset: 0x18
	// Line 106, Address: 0x1d095c, Func Offset: 0x1c
	// Line 110, Address: 0x1d0964, Func Offset: 0x24
	// Line 111, Address: 0x1d0968, Func Offset: 0x28
	// Line 110, Address: 0x1d096c, Func Offset: 0x2c
	// Line 111, Address: 0x1d0970, Func Offset: 0x30
	// Line 116, Address: 0x1d097c, Func Offset: 0x3c
	// Line 112, Address: 0x1d0980, Func Offset: 0x40
	// Line 115, Address: 0x1d0988, Func Offset: 0x48
	// Line 112, Address: 0x1d098c, Func Offset: 0x4c
	// Line 116, Address: 0x1d0990, Func Offset: 0x50
	// Line 117, Address: 0x1d09a0, Func Offset: 0x60
	// Line 122, Address: 0x1d09ac, Func Offset: 0x6c
	// Line 123, Address: 0x1d09bc, Func Offset: 0x7c
	// Line 124, Address: 0x1d09c8, Func Offset: 0x88
	// Line 125, Address: 0x1d09cc, Func Offset: 0x8c
	// Line 133, Address: 0x1d09d0, Func Offset: 0x90
	// Line 134, Address: 0x1d09e8, Func Offset: 0xa8
	// Line 137, Address: 0x1d09f4, Func Offset: 0xb4
	// Line 138, Address: 0x1d0a00, Func Offset: 0xc0
	// Line 141, Address: 0x1d0a18, Func Offset: 0xd8
	// Line 142, Address: 0x1d0a1c, Func Offset: 0xdc
	// Line 150, Address: 0x1d0a20, Func Offset: 0xe0
	// Line 142, Address: 0x1d0a24, Func Offset: 0xe4
	// Line 143, Address: 0x1d0a28, Func Offset: 0xe8
	// Line 144, Address: 0x1d0a3c, Func Offset: 0xfc
	// Line 145, Address: 0x1d0a54, Func Offset: 0x114
	// Line 146, Address: 0x1d0a68, Func Offset: 0x128
	// Line 147, Address: 0x1d0a70, Func Offset: 0x130
	// Line 150, Address: 0x1d0a7c, Func Offset: 0x13c
	// Line 151, Address: 0x1d0a84, Func Offset: 0x144
	// Line 152, Address: 0x1d0a88, Func Offset: 0x148
	// Line 153, Address: 0x1d0a8c, Func Offset: 0x14c
	// Line 154, Address: 0x1d0aa0, Func Offset: 0x160
	// Line 155, Address: 0x1d0aa8, Func Offset: 0x168
	// Func End, Address: 0x1d0ac0, Func Offset: 0x180
}

// xCutscene_Init__FPv
// Start address: 0x1d0ac0
void xCutscene_Init(void* toc)
{
	int32 i;
	// Line 81, Address: 0x1d0ac0, Func Offset: 0
	// Line 82, Address: 0x1d0ac4, Func Offset: 0x4
	// Line 81, Address: 0x1d0ac8, Func Offset: 0x8
	// Line 82, Address: 0x1d0acc, Func Offset: 0xc
	// Line 81, Address: 0x1d0ad0, Func Offset: 0x10
	// Line 82, Address: 0x1d0adc, Func Offset: 0x1c
	// Line 83, Address: 0x1d0ae8, Func Offset: 0x28
	// Line 85, Address: 0x1d0aec, Func Offset: 0x2c
	// Line 86, Address: 0x1d0af4, Func Offset: 0x34
	// Line 87, Address: 0x1d0af8, Func Offset: 0x38
	// Line 86, Address: 0x1d0afc, Func Offset: 0x3c
	// Line 87, Address: 0x1d0b00, Func Offset: 0x40
	// Line 88, Address: 0x1d0b04, Func Offset: 0x44
	// Line 89, Address: 0x1d0b08, Func Offset: 0x48
	// Line 90, Address: 0x1d0b18, Func Offset: 0x58
	// Line 91, Address: 0x1d0b2c, Func Offset: 0x6c
	// Line 92, Address: 0x1d0b40, Func Offset: 0x80
	// Line 101, Address: 0x1d0b54, Func Offset: 0x94
	// Line 94, Address: 0x1d0b58, Func Offset: 0x98
	// Line 97, Address: 0x1d0b5c, Func Offset: 0x9c
	// Line 101, Address: 0x1d0b60, Func Offset: 0xa0
	// Line 92, Address: 0x1d0b64, Func Offset: 0xa4
	// Line 93, Address: 0x1d0b6c, Func Offset: 0xac
	// Line 94, Address: 0x1d0b74, Func Offset: 0xb4
	// Line 97, Address: 0x1d0b78, Func Offset: 0xb8
	// Line 98, Address: 0x1d0b7c, Func Offset: 0xbc
	// Line 99, Address: 0x1d0b80, Func Offset: 0xc0
	// Line 100, Address: 0x1d0b84, Func Offset: 0xc4
	// Line 101, Address: 0x1d0b88, Func Offset: 0xc8
	// Line 102, Address: 0x1d0b90, Func Offset: 0xd0
	// Func End, Address: 0x1d0ba4, Func Offset: 0xe4
}

