typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct xAnimState;
typedef struct xBase;
typedef struct xModelInstance;
typedef struct RpTriangle;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct xLinkAsset;
typedef enum _tagPadState;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RpMeshHeader;
typedef struct xModelPool;
typedef struct xVec3;
typedef struct RxNodeDefinition;
typedef struct RxPipeline;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct xGlobals;
typedef struct xEnt;
typedef struct RwResEntry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xScene;
typedef struct xAnimPlay;
typedef struct xShadowSimpleCache;
typedef struct RpGeometry;
typedef struct RxPipelineCluster;
typedef struct xEntCollis;
typedef struct xUpdateCullEnt;
typedef struct _tagxPad;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct RpClump;
typedef struct xBaseAsset;
typedef struct RpLight;
typedef struct xQuat;
typedef struct xEntFrame;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct _tagPadAnalog;
typedef struct rxHeapBlockHeader;
typedef struct xGroup;
typedef struct xCollis;
typedef struct xBound;
typedef struct _tagiPad;
typedef enum RpWorldRenderOrder;
typedef struct xUpdateCullMgr;
typedef struct RxPipelineRequiresCluster;
typedef struct xGroupAsset;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xVec2;
typedef struct xAnimMultiFile;
typedef struct xFFX;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RpSector;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct xUpdateCullGroup;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xEntShadow;
typedef enum RxClusterValidityReq;
typedef struct anim_coll_data;
typedef struct xAnimTable;
typedef struct _tagxRumble;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct xGridBound;
typedef enum RxClusterValid;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef struct tri_data;
typedef enum _tagRumbleType;
typedef struct xCamera;
typedef struct RwSphere;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct iFogParams;
typedef struct RwTexDictionary;
typedef struct RwCamera;
typedef struct RxOutputSpec;
typedef struct analog_data;
typedef struct xMat3x3;
typedef struct RpPolygon;
typedef struct RxClusterRef;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xEntAsset;
typedef struct RwFrustumPlane;
typedef union FloatAndVoid;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xEnv;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xShadowSimplePoly;
typedef struct RwLinkList;

typedef int8*(*type_1)(xBase*);
typedef RwCamera*(*type_2)(RwCamera*);
typedef int32(*type_3)(RxPipelineNode*);
typedef int8*(*type_4)(uint32);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef int32(*type_8)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_9)(RxPipelineNode*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef void(*type_11)(xEnt*, xScene*, float32);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef void(*type_14)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef uint32(*type_16)(void*, void*);
typedef void(*type_17)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_19)(xEnt*);
typedef void(*type_20)(void*);
typedef uint32(*type_24)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_25)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_28)(RxNodeDefinition*);
typedef void(*type_29)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_30)(void*, void*);
typedef void(*type_32)(RxNodeDefinition*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_38)(RpWorldSector*);
typedef xBase*(*type_42)(uint32);
typedef uint32(*type_43)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_57)(xMemPool*, void*);
typedef RpClump*(*type_59)(RpClump*, void*);
typedef void(*type_61)(RwResEntry*);

typedef xVec3 type_0[3];
typedef uint16 type_7[3];
typedef float32 type_12[16];
typedef int8 type_21[128];
typedef RwFrustumPlane type_22[6];
typedef type_21 type_23[6];
typedef RwV3d type_27[8];
typedef int8 type_31[32];
typedef RwTexCoords* type_33[8];
typedef xVec3 type_35[4];
typedef uint8 type_39[22];
typedef uint8 type_40[22];
typedef xCollis type_41[18];
typedef uint32 type_44[4];
typedef float32 type_45[22];
typedef float32 type_46[2];
typedef float32 type_47[22];
typedef uint8 type_48[3];
typedef uint32 type_49[4096];
typedef uint16 type_50[3];
typedef float32 type_51[2];
typedef xVec4 type_52[12];
typedef uint8 type_53[2];
typedef xAnimMultiFileEntry type_54[1];
typedef analog_data type_55[2];
typedef float32 type_56[4];
typedef int8 type_58[32];
typedef int8 type_60[32];
typedef RwTexCoords* type_62[8];
typedef RxCluster type_63[1];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_6 sync;
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
	type_34 BeforeEnter;
	type_36 StateCallback;
	type_37 BeforeAnimMatrices;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_8 eventFunc;
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
	_class_0 anim_coll;
};

struct RpTriangle
{
	type_7 vertIndex;
	int16 matIndex;
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
	type_10 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_43 Callback;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_56 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	type_12 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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
	type_53 NumAnims;
	void** RawData;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_23 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_31 sceneStart;
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
	type_11 update;
	type_11 endUpdate;
	type_15 bupdate;
	type_17 move;
	type_19 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_29 transl;
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
	type_61 destroyNotify;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_42 resolvID;
	type_1 base2Name;
	type_4 id2Name;
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
	type_37 BeforeAnimMatrices;
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
	type_35 corner;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_41 colls;
	type_14 post;
	type_25 depenq;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_16 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct _tagxPad
{
	type_39 value;
	type_40 last_value;
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
	type_45 up_tmr;
	type_47 down_tmr;
	type_55 analog;
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
	type_18 Conditional;
	type_18 Callback;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_59 callback;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_44 pad;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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
		tri_data tri;
	};
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_48 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagiPad
{
	int32 port;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_20 activateCB;
	type_20 deactivateCB;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct xSurface
{
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_54 Files;
};

struct xFFX
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_58 name;
	type_60 mask;
	uint32 filterAddressing;
	int32 refCount;
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
	type_38 renderCallBack;
	RxPipeline* pipeline;
};

struct RpSector
{
	int32 type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_62 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct rxReq
{
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_51 radius;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct anim_coll_data
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _class_0
{
	xVec3* verts;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_46 BilinearLerp;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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
	type_52 frustplane;
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

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_2 beginUpdate;
	type_5 endUpdate;
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
	type_22 frustumPlanes;
	RwBBox frustumBoundBox;
	type_27 frustumCorners;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct RpPolygon
{
	uint16 matIndex;
	type_50 vertIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RxNodeMethods
{
	type_26 nodeBody;
	type_28 nodeInit;
	type_32 nodeTerm;
	type_3 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_24 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_57 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

union FloatAndVoid
{
	float32 f;
	void* v;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_63 clusters;
};

struct xEnv
{
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

struct xShadowSimplePoly
{
	type_0 vert;
	xVec3 norm;
};

struct RwLinkList
{
	RwLLLink link;
};

type_49 ourGlobals;
type_30 xUpdateCull_AlwaysTrueCB;
uint32 gActiveHeap;
xGlobals* xglobals;

void xUpdateCull_Reset(xUpdateCullMgr* m);
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, type_16 cb, void* cbdata);
void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update);
xUpdateCullMgr* xUpdateCull_Init(void** ent, uint32 entCount, xGroup** group, uint32 groupCount);
uint32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata);
uint32 xUpdateCull_AlwaysTrueCB();
void xUpdateCull_Swap(xUpdateCullMgr* m, uint32 a, uint32 b);

// xUpdateCull_Reset__FP14xUpdateCullMgr
// Start address: 0x328de0
void xUpdateCull_Reset(xUpdateCullMgr* m)
{
	uint32 i;
}

// xUpdateCull_SetCB__FP14xUpdateCullMgrPvPFPvPv_UiPv
// Start address: 0x328eb0
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, type_16 cb, void* cbdata)
{
	uint32 i;
}

// xUpdateCull_Update__FP14xUpdateCullMgrUi
// Start address: 0x328f20
void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update)
{
	int32 numiters;
	uint32 i;
	xUpdateCullEnt* cent;
	uint32 result;
	xUpdateCullGroup* grp;
	xUpdateCullEnt* curr;
}

// xUpdateCull_Init__FPPvUiPP6xGroupUi
// Start address: 0x3292d0
xUpdateCullMgr* xUpdateCull_Init(void** ent, uint32 entCount, xGroup** group, uint32 groupCount)
{
	void** tempEnt;
	uint32 tempCount;
	uint32 idx;
	uint32 i;
	uint32 j;
	uint32 k;
	uint32 gcnt;
	uint32 entsInThisGroup;
	uint32 entsInGroups;
	uint32 nonEmptyGroups;
	int32 x;
	uint8* inGroupArray;
	xBase* base;
	uint32 mgrCount;
	xUpdateCullMgr* m;
	int32 grpIndex;
	int32 mgrIndex;
	int32 startIndex;
	xBase* base;
	xUpdateCullEnt** prevPtr;
}

// xUpdateCull_DistanceSquaredCB__FPvPv
// Start address: 0x3298a0
uint32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata)
{
	FloatAndVoid fandv;
	xVec3* campos;
}

// xUpdateCull_AlwaysTrueCB__FPvPv
// Start address: 0x329920
uint32 xUpdateCull_AlwaysTrueCB()
{
}

// xUpdateCull_Swap__FP14xUpdateCullMgrUiUi
// Start address: 0x329930
void xUpdateCull_Swap(xUpdateCullMgr* m, uint32 a, uint32 b)
{
	xUpdateCullEnt* cullA;
	xUpdateCullEnt* cullB;
	xUpdateCullEnt* curr;
	void* tmpent;
	xUpdateCullEnt* tmpmgr;
}

