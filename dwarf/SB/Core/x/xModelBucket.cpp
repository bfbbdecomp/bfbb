typedef struct RwCamera;
typedef struct RxPipeline;
typedef struct xAnimFile;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct xGridBound;
typedef struct xFFX;
typedef struct RwRaster;
typedef struct xShadowSimpleCache;
typedef struct xModelInstance;
typedef struct RpSector;
typedef struct xAnimTransition;
typedef struct RwTexCoords;
typedef struct xAnimEffect;
typedef struct xAnimSingle;
typedef struct _tagxPad;
typedef struct xEntShadow;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMeshHeader;
typedef struct RpAtomic;
typedef struct RwBBox;
typedef struct xEnt;
typedef struct RwResEntry;
typedef struct xVec3;
typedef struct RpMaterial;
typedef struct anim_coll_data;
typedef struct RwSurfaceProperties;
typedef struct RxPipelineRequiresCluster;
typedef struct RpWorldSector;
typedef struct xMat4x3;
typedef struct RpMorphTarget;
typedef struct xAnimActiveEffect;
typedef struct _tagxRumble;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct xMat3x3;
typedef struct xBase;
typedef struct xAnimPlay;
typedef struct xModelBucket;
typedef struct xModelAlphaBucket;
typedef struct RpLight;
typedef struct xBound;
typedef struct xGroup;
typedef struct RwMatrixTag;
typedef struct xUpdateCullEnt;
typedef struct RpWorld;
typedef struct xScene;
typedef struct xGroupAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef union RwStreamUnion;
typedef enum RxClusterValidityReq;
typedef struct xMemPool;
typedef enum RwStreamType;
typedef struct RwLLLink;
typedef struct xLightKitLight;
typedef struct xModelPool;
typedef struct RxHeap;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xGlobals;
typedef struct RwFrame;
typedef struct tri_data;
typedef struct rxHeapFreeBlock;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct xQuat;
typedef struct RpVertexNormal;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RwStream;
typedef enum rxEmbeddedPacketState;
typedef struct xLinkAsset;
typedef struct analog_data;
typedef struct xCollis;
typedef struct xQCData;
typedef enum RxClusterForcePresent;
typedef struct RwSphere;
typedef struct RpInterpolator;
typedef enum RwStreamAccessType;
typedef struct RxClusterDefinition;
typedef enum RwCameraProjection;
typedef struct _class_0;
typedef struct RpPolygon;
typedef struct RpMaterialList;
typedef struct xSurface;
typedef struct xUpdateCullMgr;
typedef struct xBaseAsset;
typedef struct xEntAsset;
typedef struct xAnimTransitionList;
typedef struct RwMemory;
typedef struct RwObject;
typedef struct RxOutputSpec;
typedef struct RwStreamMemory;
typedef struct xLightKit;
typedef struct RwTexDictionary;
typedef struct RpClump;
typedef struct RxClusterRef;
typedef struct RpGeometry;
typedef struct RxIoSpec;
typedef struct xVec2;
typedef struct xEntFrame;
typedef struct RwV3d;
typedef struct RwPlane;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef union RwStreamFile;
typedef struct RwTexture;
typedef struct RxNodeDefinition;
typedef struct xShadowSimplePoly;
typedef struct xVec4;
typedef struct RxCluster;
typedef struct xBBox;
typedef enum _tagPadState;
typedef struct RxPipelineNodeParam;
typedef struct RwLinkList;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct RwFrustumPlane;
typedef struct _class_1;
typedef struct RwRGBAReal;
typedef enum RwFogType;
typedef struct RwV2d;
typedef struct xEntCollis;
typedef struct xSphere;
typedef struct xRot;
typedef struct xAnimMultiFileEntry;
typedef struct xCylinder;
typedef struct _tagPadAnalog;
typedef struct RwObjectHasFrame;
typedef struct _tagiPad;
typedef struct xBox;
typedef enum RpWorldRenderOrder;
typedef struct xCamera;
typedef struct iFogParams;
typedef struct xAnimMultiFileBase;
typedef struct RwStreamCustom;

typedef int32(*type_2)(void*);
typedef uint32(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_4)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_5)(void*, void*, uint32);
typedef uint32(*type_6)(void*, void*);
typedef void(*type_7)(xEnt*, xVec3*);
typedef int32(*type_8)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_9)(void*, void*, uint32);
typedef int32(*type_11)(RxNodeDefinition*);
typedef int32(*type_12)(void*, uint32);
typedef void(*type_13)(void*);
typedef RpWorldSector*(*type_16)(RpWorldSector*);
typedef void(*type_19)(RxNodeDefinition*);
typedef xBase*(*type_21)(uint32);
typedef int32(*type_24)(RxPipelineNode*);
typedef void(*type_25)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_26)(RxPipelineNode*);
typedef void(*type_28)(xEnt*, xScene*, float32, xEntCollis*);
typedef int8*(*type_30)(xBase*);
typedef int32(*type_31)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_32)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_33)(uint32);
typedef void(*type_34)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_36)(xMemPool*, void*);
typedef void(*type_37)(xAnimPlay*, xAnimState*);
typedef int32(*type_38)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_40)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_43)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpClump*(*type_49)(RpClump*, void*);
typedef RwCamera*(*type_51)(RwCamera*);
typedef RwCamera*(*type_53)(RwCamera*);
typedef void(*type_54)(RwResEntry*);
typedef void(*type_57)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_59)(RpAtomic*);
typedef void(*type_60)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);
typedef int32(*type_67)(void*, void*);

typedef float32 type_0[2];
typedef RwTexCoords* type_1[8];
typedef uint8 type_10[22];
typedef uint8 type_14[22];
typedef uint8 type_15[3];
typedef float32 type_17[4];
typedef xVec4 type_18[12];
typedef uint8 type_20[2];
typedef xAnimMultiFileEntry type_22[1];
typedef RwFrustumPlane type_23[6];
typedef xCollis type_27[18];
typedef RwV3d type_29[8];
typedef int32 type_35[2];
typedef float32 type_39[16];
typedef float32 type_41[22];
typedef float32 type_42[22];
typedef float32 type_44[2];
typedef uint32 type_45[4];
typedef analog_data type_46[2];
typedef uint16 type_47[3];
typedef uint32 type_48[4096];
typedef RwTexCoords* type_50[8];
typedef xVec3 type_52[3];
typedef int8 type_55[32];
typedef int8 type_56[32];
typedef uint16 type_58[3];
typedef RxCluster type_61[1];
typedef int8 type_63[128];
typedef type_63 type_64[6];
typedef int8 type_65[32];
typedef xVec3 type_68[4];

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_51 beginUpdate;
	type_53 endUpdate;
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
	type_23 frustumPlanes;
	RwBBox frustumBoundBox;
	type_29 frustumCorners;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_20 NumAnims;
	void** RawData;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xFFX
{
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
	type_68 corner;
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

struct RpSector
{
	int32 type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_40 Callback;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_0 BilinearLerp;
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

struct _tagxPad
{
	type_10 value;
	type_14 last_value;
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
	type_41 up_tmr;
	type_42 down_tmr;
	type_46 analog;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_44 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_45 pad;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	type_59 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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
	type_57 update;
	type_57 endUpdate;
	type_7 bupdate;
	type_60 move;
	type_62 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_34 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_54 destroyNotify;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct anim_coll_data
{
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_50 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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
	type_37 BeforeEnter;
	type_25 StateCallback;
	type_43 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_22 Files;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_38 eventFunc;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xModelAlphaBucket
{
	RpAtomic* Data;
	xModelInstance* MInst;
	float32 AlphaFade;
	float32 SortValue;
	uint32 Layer;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_15 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_6 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_16 renderCallBack;
	RxPipeline* pipeline;
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
	type_21 resolvID;
	type_30 base2Name;
	type_33 id2Name;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
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
	type_36 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_39 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_64 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_65 sceneStart;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xEnv
{
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

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_17 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpPolygon
{
	uint16 matIndex;
	type_47 vertIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xSurface
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
	type_13 activateCB;
	type_13 deactivateCB;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwMemory
{
	uint8* start;
	uint32 length;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_49 callback;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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
	type_1 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xVec2
{
	float32 x;
	float32 y;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RxNodeMethods
{
	type_8 nodeBody;
	type_11 nodeInit;
	type_19 nodeTerm;
	type_24 pipelineNodeInit;
	type_26 pipelineNodeTerm;
	type_31 pipelineNodeConfig;
	type_4 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_55 name;
	type_56 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct xShadowSimplePoly
{
	type_52 vert;
	xVec3 norm;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpTriangle
{
	type_58 vertIndex;
	int16 matIndex;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_61 clusters;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _class_1
{
	xVec3* verts;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV2d
{
	float32 x;
	float32 y;
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
	type_27 colls;
	type_28 post;
	type_32 depenq;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_66 sync;
};

struct _tagiPad
{
	int32 port;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_18 frustplane;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwStreamCustom
{
	type_2 sfnclose;
	type_5 sfnread;
	type_9 sfnwrite;
	type_12 sfnskip;
	void* data;
};

RpWorld* sBucketDummyWorld;
RwCamera* sBucketDummyCamera;
int32 sBucketCurr;
int32 sBucketCount;
xModelBucket* sBucketList;
int32 sBucketClipCullCurr;
int32 sBucketClipCullCount;
xModelBucket** sBucketClipCullList;
int32 sAlphaCurr;
int32 sAlphaStart;
int32 sAlphaCount;
xModelAlphaBucket* sAlphaList;
RpMaterial* s_pMaterial;
xGlobals* xglobals;
int32 iModelHack_DisablePrelight;
long32 skyTest_1;
type_67 CmpAlphaBucket;
int32 xModelBucketEnabled;
<unknown type (0xa510)>* _rwDMAPktPtr;
long32 skyFrame_1;
xLightKit* gLastLightKit;
type_48 ourGlobals;
uint32 gActiveHeap;

void xModelBucket_PreAllocModelPipe(RpAtomic* m);
void xModelBucket_Deinit();
void xModelBucket_RenderAlphaEnd();
void xModelBucket_RenderAlphaLayer(int32 maxLayer);
void xModelBucket_RenderAlphaBegin();
uint8 PS2_MaskFrameBuffer_AlphaCompare(uint32 mask, uint8 alphaCompare);
void xModelBucket_RenderOpaque();
void xModelBucket_Add(xModelInstance* minst);
void xModelBucket_Begin();
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data);
void xModelBucket_Init();
void xModelBucket_InsertBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects);
void FullAtomicDupe(RpAtomic* atomic, int32 count, RpAtomic** output);
void xModelBucket_PreCountAlloc(int32 maxAlphaModels);
void xModelBucket_PreCountBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects);
void xModelBucket_PreCountReset();
int32 CmpAlphaBucket(void* _a, void* _b);

// xModelBucket_PreAllocModelPipe__FP8RpAtomic
// Start address: 0x310a10
void xModelBucket_PreAllocModelPipe(RpAtomic* m)
{
}

// xModelBucket_Deinit__Fv
// Start address: 0x310a70
void xModelBucket_Deinit()
{
	int32 i;
	RwFrame* tframe;
}

// xModelBucket_RenderAlphaEnd__Fv
// Start address: 0x310b50
void xModelBucket_RenderAlphaEnd()
{
}

// xModelBucket_RenderAlphaLayer__Fi
// Start address: 0x310b60
void xModelBucket_RenderAlphaLayer(int32 maxLayer)
{
	uint32 pipeMask;
	uint32 curPipeFlags;
	uint32 lastPipeFlags;
	RwFogType oldfogtype;
	xModelInstance* minst;
	RpAtomic* oldmodel;
	int32 oldHack;
	float32 oldAlpha;
	float32 fade;
	uint8 skyOldFade;
	uint32 xorPipeFlags;
	uint8 oldcmp;
}

// xModelBucket_RenderAlphaBegin__Fv
// Start address: 0x311040
void xModelBucket_RenderAlphaBegin()
{
}

// PS2_MaskFrameBuffer_AlphaCompare__FUiUc
// Start address: 0x311080
uint8 PS2_MaskFrameBuffer_AlphaCompare(uint32 mask, uint8 alphaCompare)
{
	uint8 retval;
	long32 tmpframe;
}

// xModelBucket_RenderOpaque__Fv
// Start address: 0x311150
void xModelBucket_RenderOpaque()
{
	int32 i;
	xModelBucket* bucket;
	RpAtomic* data;
	xModelInstance* minst;
	int32 oldHack;
	RpAtomic* oldmodel;
	RwFogType oldfogtype;
}

// xModelBucket_Add__FP14xModelInstance
// Start address: 0x311310
void xModelBucket_Add(xModelInstance* minst)
{
	RpAtomic* model;
	xMat4x3* cammat;
	float32 camdist2;
	xModelBucket* bucket;
	float32 camdot;
	float32 alphaFade;
}

// xModelBucket_Begin__Fv
// Start address: 0x3115e0
void xModelBucket_Begin()
{
	int32 i;
}

// xModelBucket_GetBuckets__FP8RpAtomic
// Start address: 0x311630
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data)
{
	int32 i;
}

// xModelBucket_Init__Fv
// Start address: 0x311680
void xModelBucket_Init()
{
}

// xModelBucket_InsertBucket__FP8RpAtomicUiUi
// Start address: 0x3116d0
void xModelBucket_InsertBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects)
{
	int32 numbuckets;
	type_35 pipeSetting;
	int32 i;
	uint32 subObjTemp;
	RpAtomic* dataTemp;
	RpAtomic* extraData;
}

// FullAtomicDupe__FP8RpAtomiciPP8RpAtomic
// Start address: 0x311a70
void FullAtomicDupe(RpAtomic* atomic, int32 count, RpAtomic** output)
{
	int32 i;
	RwStream* stream;
	RwMemory rwmemA;
	RpAtomic* tempAtom;
	RwMemory rwmemB;
	RwFrame* temp_frame;
}

// xModelBucket_PreCountAlloc__Fi
// Start address: 0x311d30
void xModelBucket_PreCountAlloc(int32 maxAlphaModels)
{
	RwBBox bbox;
}

// xModelBucket_PreCountBucket__FP8RpAtomicUiUi
// Start address: 0x311e00
void xModelBucket_PreCountBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects)
{
	int32 numbuckets;
	int32 modelcount;
}

// xModelBucket_PreCountReset__Fv
// Start address: 0x311f00
void xModelBucket_PreCountReset()
{
}

// CmpAlphaBucket__FPCvPCv
// Start address: 0x311f30
int32 CmpAlphaBucket(void* _a, void* _b)
{
	xModelAlphaBucket* a;
	xModelAlphaBucket* b;
}

