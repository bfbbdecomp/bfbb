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
typedef struct RwStreamUnion;
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
typedef struct RwStreamFile;
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
typedef int8 type_64[128][6];
typedef int8 type_65[32];
typedef xVec3 type_68[4];

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
	uint8 NumAnims[2];
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
	xVec3 corner[4];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint8 pad[3];
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
	uint32(*cb)(void*, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
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
	float32 matrix[16];
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
	float32 param[4];
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
	uint16 vertIndex[3];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	RpClump*(*callback)(RpClump*, void*);
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
	RwTexCoords* texCoords[8];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
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
	xVec3 vert[3];
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
	uint16 vertIndex[3];
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
	RxCluster clusters[1];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	xVec4 frustplane[12];
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
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
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
int32(*CmpAlphaBucket)(void*, void*);
int32 xModelBucketEnabled;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
long32 skyFrame_1;
xLightKit* gLastLightKit;
uint32 ourGlobals[4096];
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
	// Line 1164, Address: 0x310a10, Func Offset: 0
	// Line 1166, Address: 0x310a20, Func Offset: 0x10
	// Line 1167, Address: 0x310a28, Func Offset: 0x18
	// Line 1168, Address: 0x310a38, Func Offset: 0x28
	// Line 1170, Address: 0x310a40, Func Offset: 0x30
	// Line 1171, Address: 0x310a4c, Func Offset: 0x3c
	// Line 1173, Address: 0x310a58, Func Offset: 0x48
	// Func End, Address: 0x310a68, Func Offset: 0x58
}

// xModelBucket_Deinit__Fv
// Start address: 0x310a70
void xModelBucket_Deinit()
{
	int32 i;
	RwFrame* tframe;
	// Line 1140, Address: 0x310a70, Func Offset: 0
	// Line 1143, Address: 0x310a84, Func Offset: 0x14
	// Line 1144, Address: 0x310aa0, Func Offset: 0x30
	// Line 1148, Address: 0x310ab0, Func Offset: 0x40
	// Line 1149, Address: 0x310ac4, Func Offset: 0x54
	// Line 1150, Address: 0x310ac8, Func Offset: 0x58
	// Line 1151, Address: 0x310ad0, Func Offset: 0x60
	// Line 1152, Address: 0x310ad8, Func Offset: 0x68
	// Line 1154, Address: 0x310ae0, Func Offset: 0x70
	// Line 1156, Address: 0x310af0, Func Offset: 0x80
	// Line 1159, Address: 0x310b08, Func Offset: 0x98
	// Line 1160, Address: 0x310b2c, Func Offset: 0xbc
	// Func End, Address: 0x310b44, Func Offset: 0xd4
}

// xModelBucket_RenderAlphaEnd__Fv
// Start address: 0x310b50
void xModelBucket_RenderAlphaEnd()
{
	// Line 1133, Address: 0x310b50, Func Offset: 0
	// Func End, Address: 0x310b58, Func Offset: 0x8
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
	// Line 863, Address: 0x310b60, Func Offset: 0
	// Line 864, Address: 0x310b64, Func Offset: 0x4
	// Line 863, Address: 0x310b68, Func Offset: 0x8
	// Line 864, Address: 0x310b74, Func Offset: 0x14
	// Line 863, Address: 0x310b78, Func Offset: 0x18
	// Line 870, Address: 0x310b9c, Func Offset: 0x3c
	// Line 871, Address: 0x310ba8, Func Offset: 0x48
	// Line 872, Address: 0x310bb0, Func Offset: 0x50
	// Line 876, Address: 0x310bb8, Func Offset: 0x58
	// Line 878, Address: 0x310bc4, Func Offset: 0x64
	// Line 881, Address: 0x310be8, Func Offset: 0x88
	// Line 885, Address: 0x310bec, Func Offset: 0x8c
	// Line 884, Address: 0x310bf0, Func Offset: 0x90
	// Line 885, Address: 0x310bf4, Func Offset: 0x94
	// Line 888, Address: 0x310bf8, Func Offset: 0x98
	// Line 890, Address: 0x310c08, Func Offset: 0xa8
	// Line 891, Address: 0x310c1c, Func Offset: 0xbc
	// Line 895, Address: 0x310c24, Func Offset: 0xc4
	// Line 896, Address: 0x310c2c, Func Offset: 0xcc
	// Line 897, Address: 0x310c34, Func Offset: 0xd4
	// Line 900, Address: 0x310c38, Func Offset: 0xd8
	// Line 901, Address: 0x310c3c, Func Offset: 0xdc
	// Line 902, Address: 0x310c50, Func Offset: 0xf0
	// Line 915, Address: 0x310c60, Func Offset: 0x100
	// Line 906, Address: 0x310c64, Func Offset: 0x104
	// Line 915, Address: 0x310c68, Func Offset: 0x108
	// Line 906, Address: 0x310c6c, Func Offset: 0x10c
	// Line 903, Address: 0x310c70, Func Offset: 0x110
	// Line 906, Address: 0x310c74, Func Offset: 0x114
	// Line 915, Address: 0x310c8c, Func Offset: 0x12c
	// Line 907, Address: 0x310c90, Func Offset: 0x130
	// Line 915, Address: 0x310c94, Func Offset: 0x134
	// Line 916, Address: 0x310cac, Func Offset: 0x14c
	// Line 917, Address: 0x310cb0, Func Offset: 0x150
	// Line 916, Address: 0x310cb8, Func Offset: 0x158
	// Line 917, Address: 0x310cc0, Func Offset: 0x160
	// Line 918, Address: 0x310d00, Func Offset: 0x1a0
	// Line 919, Address: 0x310d44, Func Offset: 0x1e4
	// Line 926, Address: 0x310d48, Func Offset: 0x1e8
	// Line 927, Address: 0x310d4c, Func Offset: 0x1ec
	// Line 930, Address: 0x310d54, Func Offset: 0x1f4
	// Line 931, Address: 0x310d5c, Func Offset: 0x1fc
	// Line 932, Address: 0x310d6c, Func Offset: 0x20c
	// Line 933, Address: 0x310d70, Func Offset: 0x210
	// Line 934, Address: 0x310d7c, Func Offset: 0x21c
	// Line 938, Address: 0x310d88, Func Offset: 0x228
	// Line 939, Address: 0x310d94, Func Offset: 0x234
	// Line 940, Address: 0x310da0, Func Offset: 0x240
	// Line 941, Address: 0x310da8, Func Offset: 0x248
	// Line 942, Address: 0x310db0, Func Offset: 0x250
	// Line 944, Address: 0x310dbc, Func Offset: 0x25c
	// Line 947, Address: 0x310dc0, Func Offset: 0x260
	// Line 948, Address: 0x310dcc, Func Offset: 0x26c
	// Line 949, Address: 0x310dd8, Func Offset: 0x278
	// Line 950, Address: 0x310de0, Func Offset: 0x280
	// Line 951, Address: 0x310df4, Func Offset: 0x294
	// Line 953, Address: 0x310dfc, Func Offset: 0x29c
	// Line 989, Address: 0x310e00, Func Offset: 0x2a0
	// Line 990, Address: 0x310e10, Func Offset: 0x2b0
	// Line 991, Address: 0x310e18, Func Offset: 0x2b8
	// Line 992, Address: 0x310e1c, Func Offset: 0x2bc
	// Line 993, Address: 0x310e24, Func Offset: 0x2c4
	// Line 994, Address: 0x310e30, Func Offset: 0x2d0
	// Line 995, Address: 0x310e34, Func Offset: 0x2d4
	// Line 997, Address: 0x310e3c, Func Offset: 0x2dc
	// Line 1000, Address: 0x310e40, Func Offset: 0x2e0
	// Line 1001, Address: 0x310e44, Func Offset: 0x2e4
	// Line 1025, Address: 0x310e48, Func Offset: 0x2e8
	// Line 1026, Address: 0x310e58, Func Offset: 0x2f8
	// Line 1027, Address: 0x310e60, Func Offset: 0x300
	// Line 1028, Address: 0x310e68, Func Offset: 0x308
	// Line 1029, Address: 0x310e74, Func Offset: 0x314
	// Line 1030, Address: 0x310e7c, Func Offset: 0x31c
	// Line 1031, Address: 0x310e88, Func Offset: 0x328
	// Line 1034, Address: 0x310e98, Func Offset: 0x338
	// Line 1035, Address: 0x310ea4, Func Offset: 0x344
	// Line 1036, Address: 0x310eac, Func Offset: 0x34c
	// Line 1045, Address: 0x310eb8, Func Offset: 0x358
	// Line 1046, Address: 0x310ec0, Func Offset: 0x360
	// Line 1049, Address: 0x310ec8, Func Offset: 0x368
	// Line 1055, Address: 0x310ed0, Func Offset: 0x370
	// Line 1056, Address: 0x310ef8, Func Offset: 0x398
	// Line 1057, Address: 0x310f00, Func Offset: 0x3a0
	// Line 1056, Address: 0x310f08, Func Offset: 0x3a8
	// Line 1057, Address: 0x310f0c, Func Offset: 0x3ac
	// Line 1058, Address: 0x310f14, Func Offset: 0x3b4
	// Line 1057, Address: 0x310f18, Func Offset: 0x3b8
	// Line 1062, Address: 0x310f1c, Func Offset: 0x3bc
	// Line 1063, Address: 0x310f24, Func Offset: 0x3c4
	// Line 1064, Address: 0x310f2c, Func Offset: 0x3cc
	// Line 1070, Address: 0x310f30, Func Offset: 0x3d0
	// Line 1073, Address: 0x310f34, Func Offset: 0x3d4
	// Line 1076, Address: 0x310f38, Func Offset: 0x3d8
	// Line 1077, Address: 0x310f44, Func Offset: 0x3e4
	// Line 1076, Address: 0x310f48, Func Offset: 0x3e8
	// Line 1077, Address: 0x310f4c, Func Offset: 0x3ec
	// Line 1080, Address: 0x310f60, Func Offset: 0x400
	// Line 1084, Address: 0x310f6c, Func Offset: 0x40c
	// Line 1085, Address: 0x310f7c, Func Offset: 0x41c
	// Line 1086, Address: 0x310f84, Func Offset: 0x424
	// Line 1087, Address: 0x310f88, Func Offset: 0x428
	// Line 1088, Address: 0x310f9c, Func Offset: 0x43c
	// Line 1089, Address: 0x310fa4, Func Offset: 0x444
	// Line 1092, Address: 0x310fa8, Func Offset: 0x448
	// Line 1093, Address: 0x310fb8, Func Offset: 0x458
	// Line 1097, Address: 0x310fc4, Func Offset: 0x464
	// Line 1099, Address: 0x310fd8, Func Offset: 0x478
	// Line 1100, Address: 0x310fe4, Func Offset: 0x484
	// Line 1118, Address: 0x310fe8, Func Offset: 0x488
	// Line 1119, Address: 0x310ff8, Func Offset: 0x498
	// Line 1120, Address: 0x310ffc, Func Offset: 0x49c
	// Line 1122, Address: 0x311004, Func Offset: 0x4a4
	// Line 1123, Address: 0x311008, Func Offset: 0x4a8
	// Func End, Address: 0x311040, Func Offset: 0x4e0
}

// xModelBucket_RenderAlphaBegin__Fv
// Start address: 0x311040
void xModelBucket_RenderAlphaBegin()
{
	// Line 846, Address: 0x311040, Func Offset: 0
	// Line 850, Address: 0x311048, Func Offset: 0x8
	// Line 848, Address: 0x31104c, Func Offset: 0xc
	// Line 851, Address: 0x311050, Func Offset: 0x10
	// Line 852, Address: 0x311058, Func Offset: 0x18
	// Line 853, Address: 0x311070, Func Offset: 0x30
	// Func End, Address: 0x31107c, Func Offset: 0x3c
}

// PS2_MaskFrameBuffer_AlphaCompare__FUiUc
// Start address: 0x311080
uint8 PS2_MaskFrameBuffer_AlphaCompare(uint32 mask, uint8 alphaCompare)
{
	uint8 retval;
	long32 tmpframe;
	// Line 809, Address: 0x311080, Func Offset: 0
	// Line 813, Address: 0x311084, Func Offset: 0x4
	// Line 809, Address: 0x311088, Func Offset: 0x8
	// Line 813, Address: 0x31108c, Func Offset: 0xc
	// Line 809, Address: 0x311090, Func Offset: 0x10
	// Line 816, Address: 0x311094, Func Offset: 0x14
	// Line 809, Address: 0x311098, Func Offset: 0x18
	// Line 816, Address: 0x31109c, Func Offset: 0x1c
	// Line 811, Address: 0x3110a0, Func Offset: 0x20
	// Line 812, Address: 0x3110a4, Func Offset: 0x24
	// Line 816, Address: 0x3110a8, Func Offset: 0x28
	// Line 820, Address: 0x3110bc, Func Offset: 0x3c
	// Line 812, Address: 0x3110c0, Func Offset: 0x40
	// Line 816, Address: 0x3110c4, Func Offset: 0x44
	// Line 811, Address: 0x3110c8, Func Offset: 0x48
	// Line 813, Address: 0x3110cc, Func Offset: 0x4c
	// Line 811, Address: 0x3110d0, Func Offset: 0x50
	// Line 813, Address: 0x3110d4, Func Offset: 0x54
	// Line 816, Address: 0x3110d8, Func Offset: 0x58
	// Line 820, Address: 0x3110dc, Func Offset: 0x5c
	// Line 832, Address: 0x3110e4, Func Offset: 0x64
	// Line 833, Address: 0x3110f4, Func Offset: 0x74
	// Line 832, Address: 0x3110f8, Func Offset: 0x78
	// Line 837, Address: 0x311100, Func Offset: 0x80
	// Line 841, Address: 0x311104, Func Offset: 0x84
	// Line 837, Address: 0x311108, Func Offset: 0x88
	// Line 833, Address: 0x31110c, Func Offset: 0x8c
	// Line 838, Address: 0x31111c, Func Offset: 0x9c
	// Line 842, Address: 0x311130, Func Offset: 0xb0
	// Func End, Address: 0x311144, Func Offset: 0xc4
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
	// Line 684, Address: 0x311150, Func Offset: 0
	// Line 702, Address: 0x311168, Func Offset: 0x18
	// Line 684, Address: 0x31116c, Func Offset: 0x1c
	// Line 702, Address: 0x31117c, Func Offset: 0x2c
	// Line 704, Address: 0x311190, Func Offset: 0x40
	// Line 706, Address: 0x311198, Func Offset: 0x48
	// Line 708, Address: 0x31119c, Func Offset: 0x4c
	// Line 711, Address: 0x3111a8, Func Offset: 0x58
	// Line 713, Address: 0x3111b8, Func Offset: 0x68
	// Line 714, Address: 0x3111cc, Func Offset: 0x7c
	// Line 718, Address: 0x3111d4, Func Offset: 0x84
	// Line 719, Address: 0x3111dc, Func Offset: 0x8c
	// Line 720, Address: 0x3111e4, Func Offset: 0x94
	// Line 723, Address: 0x3111e8, Func Offset: 0x98
	// Line 727, Address: 0x3111ec, Func Offset: 0x9c
	// Line 724, Address: 0x3111f0, Func Offset: 0xa0
	// Line 727, Address: 0x3111f4, Func Offset: 0xa4
	// Line 728, Address: 0x311204, Func Offset: 0xb4
	// Line 729, Address: 0x31120c, Func Offset: 0xbc
	// Line 733, Address: 0x311210, Func Offset: 0xc0
	// Line 735, Address: 0x311238, Func Offset: 0xe8
	// Line 736, Address: 0x31123c, Func Offset: 0xec
	// Line 737, Address: 0x311244, Func Offset: 0xf4
	// Line 762, Address: 0x311248, Func Offset: 0xf8
	// Line 765, Address: 0x311250, Func Offset: 0x100
	// Line 766, Address: 0x31126c, Func Offset: 0x11c
	// Line 767, Address: 0x311270, Func Offset: 0x120
	// Line 771, Address: 0x311278, Func Offset: 0x128
	// Line 772, Address: 0x31128c, Func Offset: 0x13c
	// Line 773, Address: 0x311294, Func Offset: 0x144
	// Line 772, Address: 0x311298, Func Offset: 0x148
	// Line 776, Address: 0x31129c, Func Offset: 0x14c
	// Line 777, Address: 0x3112a4, Func Offset: 0x154
	// Line 778, Address: 0x3112ac, Func Offset: 0x15c
	// Line 783, Address: 0x3112b0, Func Offset: 0x160
	// Line 786, Address: 0x3112b4, Func Offset: 0x164
	// Line 789, Address: 0x3112b8, Func Offset: 0x168
	// Line 791, Address: 0x3112bc, Func Offset: 0x16c
	// Line 793, Address: 0x3112c8, Func Offset: 0x178
	// Line 794, Address: 0x3112cc, Func Offset: 0x17c
	// Line 803, Address: 0x3112e0, Func Offset: 0x190
	// Func End, Address: 0x31130c, Func Offset: 0x1bc
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
	// Line 506, Address: 0x311310, Func Offset: 0
	// Line 508, Address: 0x311314, Func Offset: 0x4
	// Line 506, Address: 0x311318, Func Offset: 0x8
	// Line 508, Address: 0x311328, Func Offset: 0x18
	// Line 513, Address: 0x311338, Func Offset: 0x28
	// Line 514, Address: 0x31133c, Func Offset: 0x2c
	// Line 519, Address: 0x311350, Func Offset: 0x40
	// Line 520, Address: 0x311354, Func Offset: 0x44
	// Line 519, Address: 0x311358, Func Offset: 0x48
	// Line 523, Address: 0x311370, Func Offset: 0x60
	// Line 520, Address: 0x311380, Func Offset: 0x70
	// Line 523, Address: 0x311390, Func Offset: 0x80
	// Line 560, Address: 0x31139c, Func Offset: 0x8c
	// Line 561, Address: 0x3113b0, Func Offset: 0xa0
	// Line 573, Address: 0x3113b8, Func Offset: 0xa8
	// Line 567, Address: 0x3113bc, Func Offset: 0xac
	// Line 573, Address: 0x3113e4, Func Offset: 0xd4
	// Line 567, Address: 0x3113ec, Func Offset: 0xdc
	// Line 573, Address: 0x311400, Func Offset: 0xf0
	// Line 567, Address: 0x311404, Func Offset: 0xf4
	// Line 573, Address: 0x311408, Func Offset: 0xf8
	// Line 577, Address: 0x311428, Func Offset: 0x118
	// Line 578, Address: 0x311438, Func Offset: 0x128
	// Line 579, Address: 0x311448, Func Offset: 0x138
	// Line 580, Address: 0x311468, Func Offset: 0x158
	// Line 583, Address: 0x31147c, Func Offset: 0x16c
	// Line 584, Address: 0x31149c, Func Offset: 0x18c
	// Line 587, Address: 0x3114a0, Func Offset: 0x190
	// Line 591, Address: 0x3114dc, Func Offset: 0x1cc
	// Line 592, Address: 0x3114ec, Func Offset: 0x1dc
	// Line 599, Address: 0x311500, Func Offset: 0x1f0
	// Line 592, Address: 0x311508, Func Offset: 0x1f8
	// Line 593, Address: 0x311510, Func Offset: 0x200
	// Line 594, Address: 0x31152c, Func Offset: 0x21c
	// Line 599, Address: 0x31154c, Func Offset: 0x23c
	// Line 604, Address: 0x311560, Func Offset: 0x250
	// Line 599, Address: 0x311564, Func Offset: 0x254
	// Line 604, Address: 0x31157c, Func Offset: 0x26c
	// Line 605, Address: 0x3115a4, Func Offset: 0x294
	// Line 620, Address: 0x3115ac, Func Offset: 0x29c
	// Line 623, Address: 0x3115b8, Func Offset: 0x2a8
	// Line 624, Address: 0x3115c0, Func Offset: 0x2b0
	// Line 625, Address: 0x3115c4, Func Offset: 0x2b4
	// Line 626, Address: 0x3115c8, Func Offset: 0x2b8
	// Func End, Address: 0x3115dc, Func Offset: 0x2cc
}

// xModelBucket_Begin__Fv
// Start address: 0x3115e0
void xModelBucket_Begin()
{
	int32 i;
	// Line 495, Address: 0x3115e0, Func Offset: 0
	// Line 496, Address: 0x3115f8, Func Offset: 0x18
	// Line 497, Address: 0x3115fc, Func Offset: 0x1c
	// Line 496, Address: 0x311600, Func Offset: 0x20
	// Line 497, Address: 0x311608, Func Offset: 0x28
	// Line 500, Address: 0x311618, Func Offset: 0x38
	// Line 501, Address: 0x31161c, Func Offset: 0x3c
	// Func End, Address: 0x311624, Func Offset: 0x44
}

// xModelBucket_GetBuckets__FP8RpAtomic
// Start address: 0x311630
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data)
{
	int32 i;
	// Line 480, Address: 0x311630, Func Offset: 0
	// Line 481, Address: 0x311648, Func Offset: 0x18
	// Line 482, Address: 0x311658, Func Offset: 0x28
	// Line 484, Address: 0x311660, Func Offset: 0x30
	// Line 485, Address: 0x311670, Func Offset: 0x40
	// Line 486, Address: 0x311678, Func Offset: 0x48
	// Func End, Address: 0x311680, Func Offset: 0x50
}

// xModelBucket_Init__Fv
// Start address: 0x311680
void xModelBucket_Init()
{
	// Line 462, Address: 0x311680, Func Offset: 0
	// Line 467, Address: 0x31168c, Func Offset: 0xc
	// Line 468, Address: 0x311694, Func Offset: 0x14
	// Line 469, Address: 0x31169c, Func Offset: 0x1c
	// Line 470, Address: 0x3116a4, Func Offset: 0x24
	// Line 471, Address: 0x3116ac, Func Offset: 0x2c
	// Line 472, Address: 0x3116b0, Func Offset: 0x30
	// Line 473, Address: 0x3116b4, Func Offset: 0x34
	// Line 474, Address: 0x3116b8, Func Offset: 0x38
	// Func End, Address: 0x3116c4, Func Offset: 0x44
}

// xModelBucket_InsertBucket__FP8RpAtomicUiUi
// Start address: 0x3116d0
void xModelBucket_InsertBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects)
{
	int32 numbuckets;
	int32 pipeSetting[2];
	int32 i;
	uint32 subObjTemp;
	RpAtomic* dataTemp;
	RpAtomic* extraData;
	// Line 348, Address: 0x3116d0, Func Offset: 0
	// Line 356, Address: 0x3116d4, Func Offset: 0x4
	// Line 348, Address: 0x3116d8, Func Offset: 0x8
	// Line 356, Address: 0x311704, Func Offset: 0x34
	// Line 360, Address: 0x311730, Func Offset: 0x60
	// Line 363, Address: 0x311738, Func Offset: 0x68
	// Line 364, Address: 0x31173c, Func Offset: 0x6c
	// Line 365, Address: 0x311744, Func Offset: 0x74
	// Line 366, Address: 0x311748, Func Offset: 0x78
	// Line 368, Address: 0x31174c, Func Offset: 0x7c
	// Line 367, Address: 0x311750, Func Offset: 0x80
	// Line 369, Address: 0x311754, Func Offset: 0x84
	// Line 371, Address: 0x31175c, Func Offset: 0x8c
	// Line 372, Address: 0x311760, Func Offset: 0x90
	// Line 375, Address: 0x311770, Func Offset: 0xa0
	// Line 376, Address: 0x311778, Func Offset: 0xa8
	// Line 378, Address: 0x31177c, Func Offset: 0xac
	// Line 377, Address: 0x311780, Func Offset: 0xb0
	// Line 378, Address: 0x311784, Func Offset: 0xb4
	// Line 386, Address: 0x311788, Func Offset: 0xb8
	// Line 387, Address: 0x31178c, Func Offset: 0xbc
	// Line 389, Address: 0x311790, Func Offset: 0xc0
	// Line 390, Address: 0x31179c, Func Offset: 0xcc
	// Line 391, Address: 0x3117a8, Func Offset: 0xd8
	// Line 399, Address: 0x3117b8, Func Offset: 0xe8
	// Line 402, Address: 0x3117d0, Func Offset: 0x100
	// Line 403, Address: 0x3117f4, Func Offset: 0x124
	// Line 404, Address: 0x3117fc, Func Offset: 0x12c
	// Line 409, Address: 0x311804, Func Offset: 0x134
	// Line 413, Address: 0x311818, Func Offset: 0x148
	// Line 414, Address: 0x311828, Func Offset: 0x158
	// Line 417, Address: 0x311830, Func Offset: 0x160
	// Line 422, Address: 0x311838, Func Offset: 0x168
	// Line 429, Address: 0x311844, Func Offset: 0x174
	// Line 437, Address: 0x311848, Func Offset: 0x178
	// Line 429, Address: 0x31184c, Func Offset: 0x17c
	// Line 430, Address: 0x311874, Func Offset: 0x1a4
	// Line 432, Address: 0x3118a0, Func Offset: 0x1d0
	// Line 433, Address: 0x3118bc, Func Offset: 0x1ec
	// Line 434, Address: 0x3118d8, Func Offset: 0x208
	// Line 435, Address: 0x3118f4, Func Offset: 0x224
	// Line 436, Address: 0x311914, Func Offset: 0x244
	// Line 437, Address: 0x31192c, Func Offset: 0x25c
	// Line 439, Address: 0x311934, Func Offset: 0x264
	// Line 440, Address: 0x311944, Func Offset: 0x274
	// Line 441, Address: 0x311964, Func Offset: 0x294
	// Line 442, Address: 0x311980, Func Offset: 0x2b0
	// Line 443, Address: 0x31199c, Func Offset: 0x2cc
	// Line 444, Address: 0x3119b8, Func Offset: 0x2e8
	// Line 447, Address: 0x3119d4, Func Offset: 0x304
	// Line 448, Address: 0x311a04, Func Offset: 0x334
	// Line 452, Address: 0x311a08, Func Offset: 0x338
	// Line 453, Address: 0x311a0c, Func Offset: 0x33c
	// Line 452, Address: 0x311a10, Func Offset: 0x340
	// Line 453, Address: 0x311a14, Func Offset: 0x344
	// Line 452, Address: 0x311a18, Func Offset: 0x348
	// Line 453, Address: 0x311a1c, Func Offset: 0x34c
	// Line 456, Address: 0x311a20, Func Offset: 0x350
	// Line 458, Address: 0x311a30, Func Offset: 0x360
	// Line 459, Address: 0x311a38, Func Offset: 0x368
	// Func End, Address: 0x311a64, Func Offset: 0x394
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
	// Line 196, Address: 0x311a70, Func Offset: 0
	// Line 199, Address: 0x311a74, Func Offset: 0x4
	// Line 196, Address: 0x311a78, Func Offset: 0x8
	// Line 199, Address: 0x311a7c, Func Offset: 0xc
	// Line 196, Address: 0x311a80, Func Offset: 0x10
	// Line 199, Address: 0x311aa0, Func Offset: 0x30
	// Line 223, Address: 0x311ac0, Func Offset: 0x50
	// Line 225, Address: 0x311ad4, Func Offset: 0x64
	// Line 226, Address: 0x311adc, Func Offset: 0x6c
	// Line 227, Address: 0x311ae4, Func Offset: 0x74
	// Line 231, Address: 0x311af0, Func Offset: 0x80
	// Line 235, Address: 0x311b08, Func Offset: 0x98
	// Line 237, Address: 0x311b1c, Func Offset: 0xac
	// Line 239, Address: 0x311b30, Func Offset: 0xc0
	// Line 242, Address: 0x311b3c, Func Offset: 0xcc
	// Line 245, Address: 0x311b48, Func Offset: 0xd8
	// Line 250, Address: 0x311b5c, Func Offset: 0xec
	// Line 251, Address: 0x311b74, Func Offset: 0x104
	// Line 252, Address: 0x311b84, Func Offset: 0x114
	// Line 253, Address: 0x311b8c, Func Offset: 0x11c
	// Line 255, Address: 0x311b94, Func Offset: 0x124
	// Line 259, Address: 0x311b98, Func Offset: 0x128
	// Line 260, Address: 0x311ba8, Func Offset: 0x138
	// Line 261, Address: 0x311bb0, Func Offset: 0x140
	// Line 265, Address: 0x311bb8, Func Offset: 0x148
	// Line 266, Address: 0x311bdc, Func Offset: 0x16c
	// Line 268, Address: 0x311bf0, Func Offset: 0x180
	// Line 269, Address: 0x311bf8, Func Offset: 0x188
	// Line 270, Address: 0x311c00, Func Offset: 0x190
	// Line 271, Address: 0x311c0c, Func Offset: 0x19c
	// Line 272, Address: 0x311c10, Func Offset: 0x1a0
	// Line 274, Address: 0x311c24, Func Offset: 0x1b4
	// Line 275, Address: 0x311c2c, Func Offset: 0x1bc
	// Line 286, Address: 0x311c3c, Func Offset: 0x1cc
	// Line 287, Address: 0x311c48, Func Offset: 0x1d8
	// Line 288, Address: 0x311c54, Func Offset: 0x1e4
	// Line 289, Address: 0x311c60, Func Offset: 0x1f0
	// Line 290, Address: 0x311c64, Func Offset: 0x1f4
	// Line 291, Address: 0x311c68, Func Offset: 0x1f8
	// Line 299, Address: 0x311c74, Func Offset: 0x204
	// Line 300, Address: 0x311c7c, Func Offset: 0x20c
	// Line 301, Address: 0x311c80, Func Offset: 0x210
	// Line 302, Address: 0x311c88, Func Offset: 0x218
	// Line 303, Address: 0x311c90, Func Offset: 0x220
	// Line 306, Address: 0x311c98, Func Offset: 0x228
	// Line 313, Address: 0x311ca0, Func Offset: 0x230
	// Line 317, Address: 0x311cc4, Func Offset: 0x254
	// Line 318, Address: 0x311cdc, Func Offset: 0x26c
	// Line 320, Address: 0x311ce4, Func Offset: 0x274
	// Line 323, Address: 0x311cf8, Func Offset: 0x288
	// Line 345, Address: 0x311d08, Func Offset: 0x298
	// Func End, Address: 0x311d2c, Func Offset: 0x2bc
}

// xModelBucket_PreCountAlloc__Fi
// Start address: 0x311d30
void xModelBucket_PreCountAlloc(int32 maxAlphaModels)
{
	RwBBox bbox;
	// Line 160, Address: 0x311d30, Func Offset: 0
	// Line 162, Address: 0x311d34, Func Offset: 0x4
	// Line 160, Address: 0x311d38, Func Offset: 0x8
	// Line 162, Address: 0x311d3c, Func Offset: 0xc
	// Line 161, Address: 0x311d40, Func Offset: 0x10
	// Line 162, Address: 0x311d44, Func Offset: 0x14
	// Line 163, Address: 0x311d5c, Func Offset: 0x2c
	// Line 164, Address: 0x311d70, Func Offset: 0x40
	// Line 163, Address: 0x311d78, Func Offset: 0x48
	// Line 164, Address: 0x311d7c, Func Offset: 0x4c
	// Line 176, Address: 0x311d94, Func Offset: 0x64
	// Line 170, Address: 0x311d98, Func Offset: 0x68
	// Line 173, Address: 0x311da0, Func Offset: 0x70
	// Line 170, Address: 0x311da4, Func Offset: 0x74
	// Line 173, Address: 0x311da8, Func Offset: 0x78
	// Line 171, Address: 0x311dac, Func Offset: 0x7c
	// Line 172, Address: 0x311db0, Func Offset: 0x80
	// Line 173, Address: 0x311db4, Func Offset: 0x84
	// Line 174, Address: 0x311db8, Func Offset: 0x88
	// Line 176, Address: 0x311dbc, Func Offset: 0x8c
	// Line 180, Address: 0x311dc8, Func Offset: 0x98
	// Line 182, Address: 0x311ddc, Func Offset: 0xac
	// Line 183, Address: 0x311de8, Func Offset: 0xb8
	// Func End, Address: 0x311df4, Func Offset: 0xc4
}

// xModelBucket_PreCountBucket__FP8RpAtomicUiUi
// Start address: 0x311e00
void xModelBucket_PreCountBucket(RpAtomic* data, uint32 pipeFlags, uint32 subObjects)
{
	int32 numbuckets;
	int32 modelcount;
	// Line 115, Address: 0x311e00, Func Offset: 0
	// Line 123, Address: 0x311e04, Func Offset: 0x4
	// Line 115, Address: 0x311e08, Func Offset: 0x8
	// Line 123, Address: 0x311e20, Func Offset: 0x20
	// Line 124, Address: 0x311e4c, Func Offset: 0x4c
	// Line 126, Address: 0x311e50, Func Offset: 0x50
	// Line 129, Address: 0x311e58, Func Offset: 0x58
	// Line 132, Address: 0x311e60, Func Offset: 0x60
	// Line 135, Address: 0x311e68, Func Offset: 0x68
	// Line 137, Address: 0x311e78, Func Offset: 0x78
	// Line 138, Address: 0x311e80, Func Offset: 0x80
	// Line 141, Address: 0x311e84, Func Offset: 0x84
	// Line 144, Address: 0x311e88, Func Offset: 0x88
	// Line 145, Address: 0x311e8c, Func Offset: 0x8c
	// Line 146, Address: 0x311e90, Func Offset: 0x90
	// Line 147, Address: 0x311e9c, Func Offset: 0x9c
	// Line 150, Address: 0x311ea0, Func Offset: 0xa0
	// Line 151, Address: 0x311eb0, Func Offset: 0xb0
	// Line 154, Address: 0x311eb8, Func Offset: 0xb8
	// Line 155, Address: 0x311ec0, Func Offset: 0xc0
	// Line 154, Address: 0x311ec8, Func Offset: 0xc8
	// Line 155, Address: 0x311ecc, Func Offset: 0xcc
	// Line 154, Address: 0x311ed0, Func Offset: 0xd0
	// Line 155, Address: 0x311ed4, Func Offset: 0xd4
	// Line 156, Address: 0x311ed8, Func Offset: 0xd8
	// Func End, Address: 0x311ef4, Func Offset: 0xf4
}

// xModelBucket_PreCountReset__Fv
// Start address: 0x311f00
void xModelBucket_PreCountReset()
{
	// Line 103, Address: 0x311f00, Func Offset: 0
	// Line 104, Address: 0x311f04, Func Offset: 0x4
	// Line 105, Address: 0x311f08, Func Offset: 0x8
	// Line 106, Address: 0x311f0c, Func Offset: 0xc
	// Line 107, Address: 0x311f10, Func Offset: 0x10
	// Line 108, Address: 0x311f14, Func Offset: 0x14
	// Line 109, Address: 0x311f18, Func Offset: 0x18
	// Line 110, Address: 0x311f1c, Func Offset: 0x1c
	// Line 112, Address: 0x311f20, Func Offset: 0x20
	// Func End, Address: 0x311f28, Func Offset: 0x28
}

// CmpAlphaBucket__FPCvPCv
// Start address: 0x311f30
int32 CmpAlphaBucket(void* _a, void* _b)
{
	xModelAlphaBucket* a;
	xModelAlphaBucket* b;
	// Line 81, Address: 0x311f30, Func Offset: 0
	// Line 83, Address: 0x311f38, Func Offset: 0x8
	// Line 84, Address: 0x311f44, Func Offset: 0x14
	// Line 85, Address: 0x311f50, Func Offset: 0x20
	// Line 86, Address: 0x311f5c, Func Offset: 0x2c
	// Line 87, Address: 0x311f70, Func Offset: 0x40
	// Line 88, Address: 0x311f7c, Func Offset: 0x4c
	// Line 90, Address: 0x311f88, Func Offset: 0x58
	// Line 92, Address: 0x311fa0, Func Offset: 0x70
	// Func End, Address: 0x311fa8, Func Offset: 0x78
}

