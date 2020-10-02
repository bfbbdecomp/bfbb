typedef struct tri_data_0;
typedef struct xAnimFile;
typedef struct RxPipelineNodeParam;
typedef struct xEntDrive;
typedef struct xAnimSingle;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct xEntAsset;
typedef struct xQuat;
typedef struct xCollis;
typedef struct RwMatrixTag;
typedef struct xEnt;
typedef struct xBaseAsset;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct xAnimMultiFileBase;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTransition;
typedef struct RpAtomic;
typedef struct tri_data_1;
typedef struct xEnv;
typedef struct _class_0;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct xEntFrame;
typedef struct xVec3;
typedef struct RpInterpolator;
typedef struct RwSurfaceProperties;
typedef struct xAnimActiveEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimMultiFile;
typedef struct rxReq;
typedef struct xAnimPlay;
typedef struct xShadowSimplePoly;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xBBox;
typedef struct RpMaterialList;
typedef struct _class_1;
typedef struct RpMaterial;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct rxHeapFreeBlock;
typedef struct xModelPool;
typedef struct xRot;
typedef struct xScene;
typedef struct RpClump;
typedef struct xShadowSimpleCache;
typedef struct xBound;
typedef struct RpGeometry;
typedef struct xEntCollis;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGridBound;
typedef struct RpLight;
typedef struct RpMorphTarget;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xQCData;
typedef struct xAnimTable;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xMemPool;
typedef struct RpMeshHeader;
typedef struct xFFX;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xLinkAsset;
typedef struct RpTriangle;
typedef struct xEntShadow;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xAnimTransitionList;
typedef struct anim_coll_data;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RwResEntry;
typedef struct xBase;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xSurface;
typedef struct RwRGBAReal;
typedef struct xModelBucket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_1)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_4)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef int32(*type_7)(RxPipelineNode*);
typedef uint32(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_9)(RxPipelineNode*);
typedef xBase*(*type_10)(uint32);
typedef int8*(*type_14)(xBase*);
typedef void(*type_15)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_16)(uint32);
typedef void(*type_17)(xEnt*, xScene*, float32);
typedef void(*type_19)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_20)(xEnt*, xVec3*);
typedef void(*type_21)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_22)(xAnimPlay*, xAnimState*);
typedef void(*type_23)(xEnt*);
typedef RpClump*(*type_24)(RpClump*, void*);
typedef uint32(*type_25)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef RpAtomic*(*type_31)(RpAtomic*);
typedef void(*type_35)(xMemPool*, void*);
typedef void(*type_38)(RwResEntry*);
typedef int32(*type_41)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef float32 type_5[2];
typedef uint8 type_11[2];
typedef xAnimMultiFileEntry type_12[1];
typedef xVec3 type_13[3];
typedef float32 type_18[16];
typedef uint32 type_28[4];
typedef xVec3 type_29[4];
typedef uint16 type_30[3];
typedef uint8 type_32[3];
typedef xCollis type_33[18];
typedef float32 type_34[4];
typedef int8 type_36[32];
typedef int8 type_37[32];
typedef RwTexCoords* type_39[8];
typedef RxCluster type_40[1];
typedef float32 type_43[2];

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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
	type_11 NumAnims;
	void** RawData;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_5 BilinearLerp;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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
	type_17 update;
	type_17 endUpdate;
	type_20 bupdate;
	type_21 move;
	type_23 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_27 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	type_28 pad;
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
	type_22 BeforeEnter;
	type_15 StateCallback;
	type_26 BeforeAnimMatrices;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_8 Conditional;
	type_8 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	type_31 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xEnv
{
};

struct _class_0
{
	xVec3* verts;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_1 Callback;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_12 Files;
};

struct rxReq
{
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
	type_26 BeforeAnimMatrices;
};

struct xShadowSimplePoly
{
	type_13 vert;
	xVec3 norm;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_18 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	type_10 resolvID;
	type_14 base2Name;
	type_16 id2Name;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_24 callback;
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
	type_29 corner;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_32 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_39 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_33 colls;
	type_19 post;
	type_25 depenq;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xFFX
{
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_34 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RpTriangle
{
	type_30 vertIndex;
	int16 matIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_43 radius;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct anim_coll_data
{
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_38 destroyNotify;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_41 eventFunc;
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

struct RxNodeMethods
{
	type_3 nodeBody;
	type_4 nodeInit;
	type_6 nodeTerm;
	type_7 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xSurface
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_42 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};


void xEntDriveUpdate(xEntDrive* drv, float32 dt);
void xEntDriveDismount(xEntDrive* drv, float32 dmt);
void xEntDriveMount(xEntDrive* drv, xEnt* driver, float32 mt, xCollis* coll);
void xEntDriveInit(xEntDrive* drv, xEnt* driven);

// xEntDriveUpdate__FP9xEntDriveP6xScenefPC7xCollis
// Start address: 0x1d5810
void xEntDriveUpdate(xEntDrive* drv, float32 dt)
{
	xVec3 euler;
	xMat3x3 rot;
	xMat3x3 a_descaled;
	float32 dummy;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	xVec3 newq;
	xModelInstance& m;
	xVec3 world_loc;
	xVec3 new_loc;
	xMat4x3 oldmat;
}

// xEntDriveDismount__FP9xEntDrivef
// Start address: 0x1d66d0
void xEntDriveDismount(xEntDrive* drv, float32 dmt)
{
}

// xEntDriveMount__FP9xEntDriveP4xEntfPC7xCollis
// Start address: 0x1d6820
void xEntDriveMount(xEntDrive* drv, xEnt* driver, float32 mt, xCollis* coll)
{
	xVec3 euler;
	xMat3x3 a_descaled;
	float32 dummy;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
}

// xEntDriveInit__FP9xEntDriveP4xEnt
// Start address: 0x1d6e20
void xEntDriveInit(xEntDrive* drv, xEnt* driven)
{
}

