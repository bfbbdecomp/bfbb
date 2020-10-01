typedef struct xGridBound;
typedef struct xSurface;
typedef struct xAnimTransition;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimSingle;
typedef struct RxPipelineNode;
typedef struct xAnimActiveEffect;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimPlay;
typedef struct RxPipelineNodeTopSortData;
typedef struct xBound;
typedef struct rxHeapBlockHeader;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct _class_0;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct xVec3;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xBBox;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct xMat4x3;
typedef struct xEnt;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xBase;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xMemPool;
typedef struct xLinkAsset;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xShadowSimplePoly;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpTriangle;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBox;
typedef struct RwResEntry;
typedef struct RxClusterDefinition;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct xAnimTransitionList;
typedef struct xEntCollis;
typedef struct xGrid;
typedef struct RwSphere;
typedef struct RpLight;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwTexture;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xQCData;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEntShadow;
typedef struct xGridIterator;
typedef struct RxNodeDefinition;
typedef struct anim_coll_data;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xAnimMultiFileEntry;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_1;
typedef struct tri_data;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;

typedef uint32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_10)(RxPipelineNode*);
typedef void(*type_11)(RxPipelineNode*);
typedef int32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef int32(*type_14)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef uint32(*type_19)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_21)(uint32);
typedef int8*(*type_23)(xBase*);
typedef int8*(*type_24)(uint32);
typedef RpAtomic*(*type_26)(RpAtomic*);
typedef void(*type_27)(xEnt*, xScene*, float32);
typedef void(*type_29)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef void(*type_32)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_33)(xEnt*);
typedef uint32(*type_34)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_35)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_38)(xMemPool*, void*);
typedef int32(*type_39)(xEnt*, void*);
typedef void(*type_42)(RwResEntry*);
typedef RwObjectHasFrame*(*type_46)(RwObjectHasFrame*);

typedef float32 type_1[4];
typedef float32 type_3[2];
typedef uint8 type_5[2];
typedef xAnimMultiFileEntry type_7[1];
typedef int32 type_15[2];
typedef type_15 type_17[3];
typedef type_17 type_18[4];
typedef xVec3 type_22[3];
typedef uint16 type_25[3];
typedef float32 type_28[16];
typedef uint32 type_31[4];
typedef RwTexCoords* type_36[8];
typedef xVec3 type_37[4];
typedef int8 type_40[32];
typedef int8 type_41[32];
typedef uint8 type_43[3];
typedef xCollis type_44[18];
typedef RxCluster type_45[1];
typedef float32 type_47[2];
typedef uint8 type_48[3];

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

struct xSurface
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_0 Conditional;
	type_0 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_47 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xFFX
{
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
	type_20 BeforeAnimMatrices;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_31 pad;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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
	type_26 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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
	type_16 BeforeEnter;
	type_9 StateCallback;
	type_20 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_7 Files;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_13 callback;
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
	type_36 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
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
	type_27 update;
	type_27 endUpdate;
	type_30 bupdate;
	type_32 move;
	type_33 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_35 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_14 eventFunc;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_19 Callback;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_38 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_1 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xShadowSimplePoly
{
	type_22 vert;
	xVec3 norm;
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

struct RpTriangle
{
	type_25 vertIndex;
	int16 matIndex;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	type_5 NumAnims;
	void** RawData;
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
	type_28 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_42 destroyNotify;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	type_23 base2Name;
	type_24 id2Name;
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
	type_37 corner;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_44 colls;
	type_29 post;
	type_34 depenq;
};

struct xGrid
{
	uint8 ingrid_id;
	type_43 pad;
	uint16 nx;
	uint16 nz;
	float32 minx;
	float32 minz;
	float32 maxx;
	float32 maxz;
	float32 csizex;
	float32 csizez;
	float32 inv_csizex;
	float32 inv_csizez;
	float32 maxr;
	xGridBound** cells;
	xGridBound* other;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_40 name;
	type_41 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_8 nodeTerm;
	type_10 pipelineNodeInit;
	type_11 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_3 radius;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	uint32 delfound;
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

struct anim_coll_data
{
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_45 clusters;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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
	type_46 sync;
};

struct RwLinkList
{
	RwLLLink link;
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

int32 gGridIterActive;
uint32 gActiveHeap;

void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, type_39 hitCB, void* cbdata);
int32 xGridEntIsTooBig(xGrid* grid, xEnt* ent);
xGridBound* xGridIterFirstCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz, xGridIterator& it);
void xGridGetCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz);
xGridBound** xGridGetCell(xGrid* grid, xEnt* ent, int32& grx, int32& grz);
void xGridUpdate(xGrid* grid, xEnt* ent);
int32 xGridRemove(xGridBound* gridb);
int32 xGridAdd(xGrid* grid, xEnt* ent);
void xGridEmpty(xGrid* grid);
void xGridKill(xGrid* grid);
void xGridInit(xGrid* grid, xBox* bounds, uint16 nx, uint16 nz, uint8 ingrid_id);
void xGridBoundInit(xGridBound* gridb, void* data);

// xGridCheckPosition__FP5xGridP5xVec3P7xQCDataPFP4xEntPv_iPv
// Start address: 0x304480
void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, type_39 hitCB, void* cbdata)
{
	xGridIterator it;
	int32 px;
	int32 pz;
	xGridBound* cell;
	float32 clcenterx;
	float32 clcenterz;
	int32 i;
	int32 _x;
	int32 _z;
	type_18 offs;
	int32 k;
}

// xGridEntIsTooBig__FP5xGridPC4xEnt
// Start address: 0x304c40
int32 xGridEntIsTooBig(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	float32 maxr;
	xBBox* bbox;
	float32 rx;
	float32 ry;
	float32 rz;
	xBBox* bbox;
	float32 rx;
	float32 rz;
}

// xGridIterFirstCell__FP5xGridfffRiRiR13xGridIterator
// Start address: 0x304da0
xGridBound* xGridIterFirstCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz, xGridIterator& it)
{
}

// xGridGetCell__FP5xGridfffRiRi
// Start address: 0x304f30
void xGridGetCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz)
{
	float32 pgridx;
	float32 pgridz;
}

// xGridGetCell__FP5xGridPC4xEntRiRi
// Start address: 0x305030
xGridBound** xGridGetCell(xGrid* grid, xEnt* ent, int32& grx, int32& grz)
{
	xBound* bound;
	xVec3* center;
}

// xGridUpdate__FP5xGridP4xEnt
// Start address: 0x3051b0
void xGridUpdate(xGrid* grid, xEnt* ent)
{
	int32 dx;
	int32 dz;
}

// xGridRemove__FP10xGridBound
// Start address: 0x305280
int32 xGridRemove(xGridBound* gridb)
{
	xGridBound* cur;
	xGridBound** prev;
}

// xGridAdd__FP5xGridP4xEnt
// Start address: 0x305310
int32 xGridAdd(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	xVec3* center;
	float32 maxr;
	xSphere* sph;
	xBBox* bbox;
	float32 rx;
	float32 ry;
	float32 rz;
	xBBox* bbox;
	float32 rx;
	float32 rz;
	float32 cgridx;
	float32 cgridz;
	int32 x;
	int32 z;
}

// xGridEmpty__FP5xGrid
// Start address: 0x305760
void xGridEmpty(xGrid* grid)
{
	xGridBound** head;
	xGridBound* curr;
	int32 x;
	int32 z;
	xGridBound* currnext;
	xGridBound* currnext;
}

// xGridKill__FP5xGrid
// Start address: 0x305860
void xGridKill(xGrid* grid)
{
}

// xGridInit__FP5xGridPC4xBoxUsUsUc
// Start address: 0x305890
void xGridInit(xGrid* grid, xBox* bounds, uint16 nx, uint16 nz, uint8 ingrid_id)
{
	float32 gsizex;
	float32 gsizez;
}

// xGridBoundInit__FP10xGridBoundPv
// Start address: 0x305ae0
void xGridBoundInit(xGridBound* gridb, void* data)
{
}

