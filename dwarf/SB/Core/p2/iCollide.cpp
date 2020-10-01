typedef struct xAnimPlay;
typedef struct RpCollisionTriangle;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct RpIntersection;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct RpWorldSector;
typedef struct xQuat;
typedef struct _class_0;
typedef struct xMat4x3;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xCollis;
typedef struct RpAtomic;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xVec3;
typedef struct xAnimEffect;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct xLightKitLight;
typedef enum Dimension;
typedef struct xClumpCollBSPTree;
typedef struct RpGeometry;
typedef struct xRay3;
typedef struct xEnv;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMorphTarget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct xClumpCollBSPTriangle;
typedef struct RwRaster;
typedef struct xSphere;
typedef struct RpLight;
typedef enum RxClusterValidityReq;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xMemPool;
typedef struct iEnv;
typedef struct RpMeshHeader;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef struct RwResEntry;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef struct xJSPHeader;
typedef enum rxEmbeddedPacketState;
typedef union _class_1;
typedef struct xAnimTransitionList;
typedef enum RxClusterForcePresent;
typedef struct RwFrame;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef enum RpIntersectType;
typedef struct RwSphere;
typedef struct xJSPNodeInfo;
typedef struct xAnimMultiFile;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RwLine;
typedef union RpIntersectData;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct xLightKit;
typedef struct RxCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct tri_data;
typedef struct _class_2;
typedef struct RpInterpolator;

typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_3)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef uint32(*type_4)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_7)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef int32(*type_9)(RxPipelineNode*);
typedef void(*type_10)(RxPipelineNode*);
typedef void(*type_11)(xAnimPlay*, xAnimState*);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef uint32(*type_15)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_16)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpCollisionTriangle*(*type_18)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef uint32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_24)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_26)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef RpWorldSector*(*type_29)(RpWorldSector*);
typedef void(*type_30)(xMemPool*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RpCollisionTriangle*(*type_34)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_36)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RwObjectHasFrame*(*type_37)(RwObjectHasFrame*);
typedef RpCollisionTriangle*(*type_38)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_40)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);

typedef uint8 type_0[2];
typedef xAnimMultiFileEntry type_1[1];
typedef uint16 type_5[3];
typedef float32 type_12[16];
typedef RwTexCoords* type_17[8];
typedef RpLight* type_19[2];
typedef uint16 type_20[3];
typedef RwFrame* type_21[2];
typedef uint32 type_25[4];
typedef RwTexCoords* type_27[8];
typedef int8 type_28[4];
typedef int8 type_31[32];
typedef int8 type_32[32];
typedef RxCluster type_35[1];
typedef float32 type_39[2];
typedef RwV3d* type_41[3];

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
	type_16 BeforeAnimMatrices;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	type_41 vertices;
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
	type_11 BeforeEnter;
	type_2 StateCallback;
	type_16 BeforeAnimMatrices;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_23 Conditional;
	type_23 Callback;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_39 BilinearLerp;
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

struct RpPolygon
{
	uint16 matIndex;
	type_5 vertIndex;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_17 texCoords;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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
	type_25 pad;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_22 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	_class_2 anim_coll;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_15 Callback;
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
	type_14 callback;
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

enum Dimension
{
	XDIM,
	YDIM,
	ZDIM
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_27 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct xSphere
{
	xVec3 center;
	float32 r;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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
	type_30 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_19 light;
	type_21 light_frame;
	int32 memlvl;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	type_29 renderCallBack;
	RxPipeline* pipeline;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_33 destroyNotify;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_0 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_20 vertIndex;
	int16 matIndex;
};

struct xJSPHeader
{
	type_28 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_1 Files;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_31 name;
	type_32 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RpSector
{
	int32 type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct RxNodeMethods
{
	type_6 nodeBody;
	type_7 nodeInit;
	type_8 nodeTerm;
	type_9 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_4 configMsgHandler;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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
	type_35 clusters;
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
	type_37 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_2
{
	xVec3* verts;
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

int32 sCollidingJSP;
float32 cbath;
xRay3 cbray;
xMat3x3* cbmat;
RpIntersection cbisx_local;
uint8 cbnumcs;
uint8 cbmaxcs;
uint8 FLOOR;
uint8 NEXT2;
uint8 OTHER;
long32 build_mytime;
long32 build_rwtime;
long32 collide_mytime;
long32 collide_rwtime;
int32 build_myct;
int32 build_rwct;
int32 collide_myct;
int32 collide_rwct;
float32 build_mytime_secs;
float32 build_rwtime_secs;
float32 collide_mytime_secs;
float32 collide_rwtime_secs;
RpMorphTarget anim_coll_old_mt;
type_24 rayHitsModelBackwardCB;
type_38 rayHitsModelCB;
type_34 rayHitsEnvBackwardCB;
type_40 rayHitsEnvCB;
type_26 sphereHitsModel3CB;
type_3 sphereHitsEnv4CB;
type_36 sphereHitsEnv3CB;
type_18 sphereHitsEnvCB;

void iBoxForModelLocal(xBox* o, xModelInstance* m);
void iBoxForModel(xBox* o, xModelInstance* m);
void iSphereForModel(xSphere* o, xModelInstance* m);
uint32 iRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll);
uint32 iRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll);
int32 iSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, uint8 ncolls, float32 sth);
int32 iSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls);
int32 iSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, uint8 ncolls, float32 sth);
uint32 iSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll);
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data);
void properSphereIsectTri(xVec3* center, float32 radius, xVec3* tohit, float32* dist_ptr, RpCollisionTriangle* tri);
void FindNearestPointOnLine(xVec3* _result, xVec3* _point, xVec3* _start, xVec3* _end);
int32 PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal);
void iCollideInit();

// iBoxForModelLocal__FP4xBoxPC14xModelInstance
// Start address: 0x1a54a0
void iBoxForModelLocal(xBox* o, xModelInstance* m)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	uint16 idx;
}

// iBoxForModel__FP4xBoxPC14xModelInstance
// Start address: 0x1a55d0
void iBoxForModel(xBox* o, xModelInstance* m)
{
}

// iSphereForModel__FP7xSpherePC14xModelInstance
// Start address: 0x1a5670
void iSphereForModel(xSphere* o, xModelInstance* m)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	uint16 idx;
}

// iRayHitsModel__FPC5xRay3PC14xModelInstanceP7xCollis
// Start address: 0x1a5760
uint32 iRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	float32 len;
	xMat4x3* mat;
	RwV3d temp;
	xVec3 center;
	xVec3 heading;
}

// iRayHitsEnv__FPC5xRay3PC4xEnvP7xCollis
// Start address: 0x1a5be0
uint32 iRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
	float32 len;
}

// iSphereHitsModel3__FPC7xSpherePC14xModelInstanceP7xCollisUcf
// Start address: 0x1a5eb0
int32 iSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, uint8 ncolls, float32 sth)
{
	RpIntersection isx;
	uint8 idx;
	uint8 i;
	xMat4x3* mat;
	float32 mscale;
	xMat3x3 mnormal;
	long32 t0;
	long32 t1;
}

// iSphereHitsEnv4__FPC7xSpherePC4xEnvPC7xMat3x3P7xCollis
// Start address: 0x1a64f0
int32 iSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls)
{
	RpIntersection isx;
	xCollis* c;
	xCollis* cend;
	int32 numcs;
	float32 s;
}

// iSphereHitsEnv3__FPC7xSpherePC4xEnvP7xCollisUcf
// Start address: 0x1a6770
int32 iSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, uint8 ncolls, float32 sth)
{
	RpIntersection isx;
	uint8 idx;
}

// iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
// Start address: 0x1a6980
uint32 iSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
}

// rayHitsModelBackwardCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a60
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
}

// rayHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a80
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
}

// rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6aa0
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
}

// rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6b50
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
}

// sphereHitsModel3CB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6c50
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float32 dist, void* data)
{
}

// sphereHitsEnv4CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6c70
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* colls;
	float32 radius;
	xVec3 tohit;
	xCollis temp;
	uint8 idx;
	xCollis* c;
	float32 ddist;
}

// sphereHitsEnv3CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6ea0
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* colls;
	float32 radius;
	xVec3* center;
	xVec3 tohit;
	xVec3 hdng;
	uint8 idx;
	float32 dot;
	float32 odot;
	float32 ndot;
	float32 scale;
}

// sphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a75b0
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
	float32 radius;
	xVec3* center;
	xVec3 tohit;
	float32 scale;
}

// properSphereIsectTri__FPC5xVec3fP5xVec3PfP19RpCollisionTriangle
// Start address: 0x1a7790
void properSphereIsectTri(xVec3* center, float32 radius, xVec3* tohit, float32* dist_ptr, RpCollisionTriangle* tri)
{
	xVec3 projPoint;
	float32 dist2plane;
	float32 dist;
	float32 dist2;
	float32 radius2;
	uint32 i;
	xVec3 vertClosestPoint;
	float32 vertDist2;
	xVec3 temp;
}

// FindNearestPointOnLine__FP5xVec3P5xVec3P5xVec3P5xVec3
// Start address: 0x1a79c0
void FindNearestPointOnLine(xVec3* _result, xVec3* _point, xVec3* _start, xVec3* _end)
{
	RwV3d* result;
	RwV3d* point;
	RwV3d* start;
	RwV3d* end;
	float32 mu;
	float32 lineLength2;
}

// PointWithinTriangle__FP5xVec3PP5xVec3P5xVec3
// Start address: 0x1a7aa0
int32 PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal)
{
	RwV3d* pt;
	RwV3d** tri;
	RwV3d* normal;
	Dimension dimension;
	float32 absX;
	float32 absY;
	float32 absZ;
	int32 inside;
	int32 i;
	int32 j;
}

// iCollideInit__FP6xScene
// Start address: 0x1a7e30
void iCollideInit()
{
}

