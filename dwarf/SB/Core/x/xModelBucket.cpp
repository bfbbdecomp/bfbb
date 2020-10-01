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

typedef s32(*type_2)(void*);
typedef u32(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_4)(RxPipelineNode*, u32, u32, void*);
typedef u32(*type_5)(void*, void*, u32);
typedef u32(*type_6)(void*, void*);
typedef void(*type_7)(xEnt*, xVec3*);
typedef s32(*type_8)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_9)(void*, void*, u32);
typedef s32(*type_11)(RxNodeDefinition*);
typedef s32(*type_12)(void*, u32);
typedef void(*type_13)(void*);
typedef RpWorldSector*(*type_16)(RpWorldSector*);
typedef void(*type_19)(RxNodeDefinition*);
typedef xBase*(*type_21)(u32);
typedef s32(*type_24)(RxPipelineNode*);
typedef void(*type_25)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_26)(RxPipelineNode*);
typedef void(*type_28)(xEnt*, xScene*, f32, xEntCollis*);
typedef s8*(*type_30)(xBase*);
typedef s32(*type_31)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_32)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s8*(*type_33)(u32);
typedef void(*type_34)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_36)(xMemPool*, void*);
typedef void(*type_37)(xAnimPlay*, xAnimState*);
typedef s32(*type_38)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_40)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_43)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpClump*(*type_49)(RpClump*, void*);
typedef RwCamera*(*type_51)(RwCamera*);
typedef RwCamera*(*type_53)(RwCamera*);
typedef void(*type_54)(RwResEntry*);
typedef void(*type_57)(xEnt*, xScene*, f32);
typedef RpAtomic*(*type_59)(RpAtomic*);
typedef void(*type_60)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);
typedef s32(*type_67)(void*, void*);

typedef f32 type_0[2];
typedef RwTexCoords* type_1[8];
typedef u8 type_10[22];
typedef u8 type_14[22];
typedef u8 type_15[3];
typedef f32 type_17[4];
typedef xVec4 type_18[12];
typedef u8 type_20[2];
typedef xAnimMultiFileEntry type_22[1];
typedef RwFrustumPlane type_23[6];
typedef xCollis type_27[18];
typedef RwV3d type_29[8];
typedef s32 type_35[2];
typedef f32 type_39[16];
typedef f32 type_41[22];
typedef f32 type_42[22];
typedef f32 type_44[2];
typedef u32 type_45[4];
typedef analog_data type_46[2];
typedef u16 type_47[3];
typedef u32 type_48[4096];
typedef RwTexCoords* type_50[8];
typedef xVec3 type_52[3];
typedef s8 type_55[32];
typedef s8 type_56[32];
typedef u16 type_58[3];
typedef RxCluster type_61[1];
typedef s8 type_63[128];
typedef type_63 type_64[6];
typedef s8 type_65[32];
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_23 frustumPlanes;
	RwBBox frustumBoundBox;
	type_29 frustumCorners;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_20 NumAnims;
	void** RawData;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct xFFX
{
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
	type_68 corner;
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

struct RpSector
{
	s32 type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_40 Callback;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_0 BilinearLerp;
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

struct _tagxPad
{
	type_10 value;
	type_14 last_value;
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
	type_41 up_tmr;
	type_42 down_tmr;
	type_46 analog;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_44 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_45 pad;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	u16 renderFrame;
	u16 pad;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_54 destroyNotify;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct anim_coll_data
{
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	u32 Handle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_38 eventFunc;
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
	type_43 BeforeAnimMatrices;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xModelAlphaBucket
{
	RpAtomic* Data;
	xModelInstance* MInst;
	f32 AlphaFade;
	f32 SortValue;
	u32 Layer;
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

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u32 last_index;
	s32 flg_group;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_6 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_16 renderCallBack;
	RxPipeline* pipeline;
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
	type_21 resolvID;
	type_30 base2Name;
	type_33 id2Name;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_36 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	u32 type;
	RwRGBAReal color;
	type_39 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	s32 profile;
	type_64 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_65 sceneStart;
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
	u32 index;
	f32 r;
	f32 d;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xEnv
{
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

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	s32 position;
	RwStreamUnion Type;
	s32 rwOwned;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_17 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	f32 t;
	f32 u;
	f32 v;
};

struct RpPolygon
{
	u16 matIndex;
	type_47 vertIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xSurface
{
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
	type_13 activateCB;
	type_13 deactivateCB;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwMemory
{
	u8* start;
	u32 length;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwStreamMemory
{
	u32 position;
	u32 nSize;
	u8* memBlock;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
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
	u32 reserved;
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
	type_1 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xVec2
{
	f32 x;
	f32 y;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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
	u32 creationAttributes;
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
	u32 filterAddressing;
	s32 refCount;
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

struct xShadowSimplePoly
{
	type_52 vert;
	xVec3 norm;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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
	s16 matIndex;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_61 clusters;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct _class_1
{
	xVec3* verts;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
	f32 x;
	f32 y;
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
	type_27 colls;
	type_28 post;
	type_32 depenq;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_66 sync;
};

struct _tagiPad
{
	s32 port;
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
	type_18 frustplane;
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

struct xAnimMultiFileBase
{
	u32 Count;
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
s32 sBucketCurr;
s32 sBucketCount;
xModelBucket* sBucketList;
s32 sBucketClipCullCurr;
s32 sBucketClipCullCount;
xModelBucket** sBucketClipCullList;
s32 sAlphaCurr;
s32 sAlphaStart;
s32 sAlphaCount;
xModelAlphaBucket* sAlphaList;
RpMaterial* s_pMaterial;
xGlobals* xglobals;
s32 iModelHack_DisablePrelight;
s32 skyTest_1;
type_67 CmpAlphaBucket;
s32 xModelBucketEnabled;
<unknown type (0xa510)>* _rwDMAPktPtr;
s32 skyFrame_1;
xLightKit* gLastLightKit;
type_48 ourGlobals;
u32 gActiveHeap;

void xModelBucket_PreAllocModelPipe(RpAtomic* m);
void xModelBucket_Deinit();
void xModelBucket_RenderAlphaEnd();
void xModelBucket_RenderAlphaLayer(s32 maxLayer);
void xModelBucket_RenderAlphaBegin();
u8 PS2_MaskFrameBuffer_AlphaCompare(u32 mask, u8 alphaCompare);
void xModelBucket_RenderOpaque();
void xModelBucket_Add(xModelInstance* minst);
void xModelBucket_Begin();
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data);
void xModelBucket_Init();
void xModelBucket_InsertBucket(RpAtomic* data, u32 pipeFlags, u32 subObjects);
void FullAtomicDupe(RpAtomic* atomic, s32 count, RpAtomic** output);
void xModelBucket_PreCountAlloc(s32 maxAlphaModels);
void xModelBucket_PreCountBucket(RpAtomic* data, u32 pipeFlags, u32 subObjects);
void xModelBucket_PreCountReset();
s32 CmpAlphaBucket(void* _a, void* _b);

// xModelBucket_PreAllocModelPipe__FP8RpAtomic
// Start address: 0x310a10
void xModelBucket_PreAllocModelPipe(RpAtomic* m)
{
}

// xModelBucket_Deinit__Fv
// Start address: 0x310a70
void xModelBucket_Deinit()
{
	s32 i;
	RwFrame* tframe;
}

// xModelBucket_RenderAlphaEnd__Fv
// Start address: 0x310b50
void xModelBucket_RenderAlphaEnd()
{
}

// xModelBucket_RenderAlphaLayer__Fi
// Start address: 0x310b60
void xModelBucket_RenderAlphaLayer(s32 maxLayer)
{
	u32 pipeMask;
	u32 curPipeFlags;
	u32 lastPipeFlags;
	RwFogType oldfogtype;
	xModelInstance* minst;
	RpAtomic* oldmodel;
	s32 oldHack;
	f32 oldAlpha;
	f32 fade;
	u8 skyOldFade;
	u32 xorPipeFlags;
	u8 oldcmp;
}

// xModelBucket_RenderAlphaBegin__Fv
// Start address: 0x311040
void xModelBucket_RenderAlphaBegin()
{
}

// PS2_MaskFrameBuffer_AlphaCompare__FUiUc
// Start address: 0x311080
u8 PS2_MaskFrameBuffer_AlphaCompare(u32 mask, u8 alphaCompare)
{
	u8 retval;
	s32 tmpframe;
}

// xModelBucket_RenderOpaque__Fv
// Start address: 0x311150
void xModelBucket_RenderOpaque()
{
	s32 i;
	xModelBucket* bucket;
	RpAtomic* data;
	xModelInstance* minst;
	s32 oldHack;
	RpAtomic* oldmodel;
	RwFogType oldfogtype;
}

// xModelBucket_Add__FP14xModelInstance
// Start address: 0x311310
void xModelBucket_Add(xModelInstance* minst)
{
	RpAtomic* model;
	xMat4x3* cammat;
	f32 camdist2;
	xModelBucket* bucket;
	f32 camdot;
	f32 alphaFade;
}

// xModelBucket_Begin__Fv
// Start address: 0x3115e0
void xModelBucket_Begin()
{
	s32 i;
}

// xModelBucket_GetBuckets__FP8RpAtomic
// Start address: 0x311630
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data)
{
	s32 i;
}

// xModelBucket_Init__Fv
// Start address: 0x311680
void xModelBucket_Init()
{
}

// xModelBucket_InsertBucket__FP8RpAtomicUiUi
// Start address: 0x3116d0
void xModelBucket_InsertBucket(RpAtomic* data, u32 pipeFlags, u32 subObjects)
{
	s32 numbuckets;
	type_35 pipeSetting;
	s32 i;
	u32 subObjTemp;
	RpAtomic* dataTemp;
	RpAtomic* extraData;
}

// FullAtomicDupe__FP8RpAtomiciPP8RpAtomic
// Start address: 0x311a70
void FullAtomicDupe(RpAtomic* atomic, s32 count, RpAtomic** output)
{
	s32 i;
	RwStream* stream;
	RwMemory rwmemA;
	RpAtomic* tempAtom;
	RwMemory rwmemB;
	RwFrame* temp_frame;
}

// xModelBucket_PreCountAlloc__Fi
// Start address: 0x311d30
void xModelBucket_PreCountAlloc(s32 maxAlphaModels)
{
	RwBBox bbox;
}

// xModelBucket_PreCountBucket__FP8RpAtomicUiUi
// Start address: 0x311e00
void xModelBucket_PreCountBucket(RpAtomic* data, u32 pipeFlags, u32 subObjects)
{
	s32 numbuckets;
	s32 modelcount;
}

// xModelBucket_PreCountReset__Fv
// Start address: 0x311f00
void xModelBucket_PreCountReset()
{
}

// CmpAlphaBucket__FPCvPCv
// Start address: 0x311f30
s32 CmpAlphaBucket(void* _a, void* _b)
{
	xModelAlphaBucket* a;
	xModelAlphaBucket* b;
}

