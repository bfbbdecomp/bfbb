typedef struct xRay3;
typedef struct RwResEntry;
typedef struct xAnimPlay;
typedef struct xShadowSimpleCache;
typedef struct RxPipelineNodeParam;
typedef struct xEnv;
typedef struct xEntCollis;
typedef struct xAnimEffect;
typedef struct RpGeometry;
typedef struct RpAtomic;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xScene;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xAnimTransitionList;
typedef struct xEnt;
typedef struct xQuat;
typedef struct xAnimState;
typedef struct RpLight;
typedef struct RpClump;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xEntFrame;
typedef struct xSurface;
typedef struct RxPipelineRequiresCluster;
typedef struct xCollis;
typedef struct xFFX;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct xModelBucket;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xEntShadow;
typedef struct xModelInstance;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct xMat4x3;
typedef struct xBase;
typedef struct xLightKit;
typedef struct anim_coll_data;
typedef enum RxNodeDefEditable;
typedef struct xAnimTable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xIsect;
typedef struct xRot;
typedef struct xBox;
typedef struct xLinkAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxClusterDefinition;
typedef struct xAnimFile;
typedef struct _class_0;
typedef struct tri_data;
typedef struct xAnimSingle;
typedef struct xBaseAsset;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct _class_1;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMaterialList;
typedef struct RxIoSpec;
typedef struct xBound;
typedef struct xModelPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xMemPool;
typedef struct xQCData;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xGridBound;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xShadowSimplePoly;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef void(*type_1)(xEnt*, xScene*, float32);
typedef void(*type_3)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_5)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_6)(xEnt*);
typedef uint32(*type_7)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef int32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_12)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_13)(RxNodeDefinition*);
typedef void(*type_15)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_16)(RxNodeDefinition*);
typedef int32(*type_17)(RxPipelineNode*);
typedef void(*type_18)(RxPipelineNode*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef void(*type_22)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_24)(xBase*, xBase*, uint32, float32*, xBase*);
typedef xBase*(*type_26)(uint32);
typedef int8*(*type_27)(xBase*);
typedef int8*(*type_28)(uint32);
typedef uint32(*type_30)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_35)(xMemPool*, void*);
typedef void(*type_38)(RwResEntry*);
typedef RpClump*(*type_39)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef float32 type_2[16];
typedef uint8 type_8[3];
typedef float32 type_14[4];
typedef RwTexCoords* type_19[8];
typedef xVec3 type_21[4];
typedef xCollis type_25[18];
typedef uint32 type_29[4];
typedef float32 type_31[2];
typedef float32 type_32[2];
typedef uint8 type_33[2];
typedef xAnimMultiFileEntry type_34[1];
typedef int8 type_36[32];
typedef int8 type_37[32];
typedef RxCluster type_40[1];
typedef xVec3 type_41[3];
typedef uint16 type_43[3];

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_38 destroyNotify;
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
	type_23 BeforeAnimMatrices;
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
	type_21 corner;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xEnv
{
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
	type_25 colls;
	type_3 post;
	type_12 depenq;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_30 Callback;
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
	type_19 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_26 resolvID;
	type_27 base2Name;
	type_28 id2Name;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_7 Conditional;
	type_7 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_1 update;
	type_1 endUpdate;
	type_4 bupdate;
	type_5 move;
	type_6 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_15 transl;
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
	type_20 BeforeEnter;
	type_22 StateCallback;
	type_23 BeforeAnimMatrices;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_39 callback;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_29 pad;
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

struct xSurface
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xFFX
{
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

struct RpTriangle
{
	type_43 vertIndex;
	int16 matIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_34 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_36 name;
	type_37 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_2 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_32 radius;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct anim_coll_data
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xIsect
{
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	xVec3 point;
	xVec3 norm;
	float32 dist;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_14 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	type_33 NumAnims;
	void** RawData;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_31 BilinearLerp;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_8 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_13 nodeInit;
	type_16 nodeTerm;
	type_17 pipelineNodeInit;
	type_18 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_35 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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
	type_40 clusters;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_42 sync;
};

struct xShadowSimplePoly
{
	type_41 vert;
	xVec3 norm;
};

struct RwLinkList
{
	RwLLLink link;
};


uint32 xRayHitsBoxFast(xRay3* r, xBox* b);
uint32 xRayHitsSphereFast(xRay3* r, xSphere* s);
void xCollideFastInit(xScene* sc);

// xRayHitsBoxFast__FPC5xRay3PC4xBox
// Start address: 0x1ce800
uint32 xRayHitsBoxFast(xRay3* r, xBox* b)
{
	xIsect isx;
}

// xRayHitsSphereFast__FPC5xRay3PC7xSphere
// Start address: 0x1ce870
uint32 xRayHitsSphereFast(xRay3* r, xSphere* s)
{
	float32 c;
}

// xCollideFastInit__FP6xScene
// Start address: 0x1ce960
void xCollideFastInit(xScene* sc)
{
}

