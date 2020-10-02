typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineNodeParam;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xRay3;
typedef struct RxPipelineNode;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xEnv;
typedef enum RpIntersectType;
typedef struct xQuat;
typedef struct RpClump;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimFile;
typedef struct RpAtomic;
typedef struct xJSPHeader;
typedef struct xAnimSingle;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef enum RpWorldRenderOrder;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct xAnimMultiFileBase;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xClumpCollBSPTree;
typedef struct xAnimTransition;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct xJSPNodeInfo;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwResEntry;
typedef struct rxReq;
typedef union RpIntersectData;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct RpLight;
typedef struct xAnimMultiFile;
typedef struct xAnimPlay;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpCollisionTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RpIntersection;
typedef enum rxEmbeddedPacketState;
typedef struct iEnv;
typedef enum RxClusterForcePresent;
typedef struct RwLLLink;
typedef struct xLightKit;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef struct RwSphere;
typedef struct xAnimTable;
typedef struct xMemPool;
typedef struct RwTexDictionary;
typedef struct RpInterpolator;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RpPolygon;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwObject;
typedef struct xLightKitLight;
typedef struct xSurface;
typedef struct RpMaterialList;
typedef struct RxIoSpec;
typedef struct xAnimTransitionList;
typedef struct RwLine;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef union _class_0;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_1;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_1)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_2)(RpAtomic*);
typedef int32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_4)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef uint32(*type_7)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_8)(RxPipelineNode*);
typedef void(*type_10)(RxPipelineNode*);
typedef uint32(*type_12)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_13)(RpWorldSector*);
typedef void(*type_16)(xAnimState*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_17)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_18)(xAnimPlay*, xAnimState*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_24)(xMemPool*, void*);
typedef void(*type_27)(RwResEntry*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_33)(RwObjectHasFrame*);
typedef RpCollisionTriangle*(*type_35)(RpIntersection*, RpCollisionTriangle*, float32, void*);

typedef int8 type_5[4];
typedef RwTexCoords* type_9[8];
typedef float32 type_11[2];
typedef uint8 type_14[2];
typedef xAnimMultiFileEntry type_15[1];
typedef uint32 type_19[4];
typedef RwV3d* type_21[3];
typedef uint16 type_22[3];
typedef float32 type_23[16];
typedef int8 type_25[32];
typedef int8 type_26[32];
typedef RwTexCoords* type_29[8];
typedef RpLight* type_30[2];
typedef RwFrame* type_31[2];
typedef RxCluster type_32[1];
typedef uint16 type_34[3];

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_9 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_18 BeforeEnter;
	type_16 StateCallback;
	type_20 BeforeAnimMatrices;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_28 callback;
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
	type_19 pad;
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
	type_14 NumAnims;
	void** RawData;
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
	type_2 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xJSPHeader
{
	type_5 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_11 BilinearLerp;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_34 vertIndex;
	int16 matIndex;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_25 name;
	type_26 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RpSector
{
	int32 type;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_12 Conditional;
	type_12 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_27 destroyNotify;
};

struct rxReq
{
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_7 Callback;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_29 texCoords;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_15 Files;
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
	type_13 renderCallBack;
	RxPipeline* pipeline;
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	type_21 vertices;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_30 light;
	type_31 light_frame;
	int32 memlvl;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_24 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RpPolygon
{
	uint16 matIndex;
	type_22 vertIndex;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_23 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xSurface
{
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	type_3 nodeBody;
	type_4 nodeInit;
	type_6 nodeTerm;
	type_8 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_1 configMsgHandler;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_32 clusters;
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
	type_33 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_1
{
	xVec3* verts;
};

uint32 hitzhit;
type_17 rayHitsEnvFastCB;
type_35 rayHitsModelFastCB;

void iCollideFastInit();

// iCollideFastInit__FP6xScene
// Start address: 0x1a7e40
void iCollideFastInit()
{
}

