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
typedef RpCollisionTriangle*(*type_3)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef u32(*type_4)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_7)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef s32(*type_9)(RxPipelineNode*);
typedef void(*type_10)(RxPipelineNode*);
typedef void(*type_11)(xAnimPlay*, xAnimState*);
typedef s32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef u32(*type_15)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_16)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpCollisionTriangle*(*type_18)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef u32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_24)(RpIntersection*, RpCollisionTriangle*, f32, void*);
typedef RpCollisionTriangle*(*type_26)(RpIntersection*, RpCollisionTriangle*, f32, void*);
typedef RpWorldSector*(*type_29)(RpWorldSector*);
typedef void(*type_30)(xMemPool*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RpCollisionTriangle*(*type_34)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef RpCollisionTriangle*(*type_36)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef RwObjectHasFrame*(*type_37)(RwObjectHasFrame*);
typedef RpCollisionTriangle*(*type_38)(RpIntersection*, RpCollisionTriangle*, f32, void*);
typedef RpCollisionTriangle*(*type_40)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);

typedef u8 type_0[2];
typedef xAnimMultiFileEntry type_1[1];
typedef u16 type_5[3];
typedef f32 type_12[16];
typedef RwTexCoords* type_17[8];
typedef RpLight* type_19[2];
typedef u16 type_20[3];
typedef RwFrame* type_21[2];
typedef u32 type_25[4];
typedef RwTexCoords* type_27[8];
typedef s8 type_28[4];
typedef s8 type_31[32];
typedef s8 type_32[32];
typedef RxCluster type_35[1];
typedef f32 type_39[2];
typedef RwV3d* type_41[3];

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
	type_16 BeforeAnimMatrices;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	s32 index;
	type_41 vertices;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_39 BilinearLerp;
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

struct RpPolygon
{
	u16 matIndex;
	type_5 vertIndex;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_25 pad;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	_class_2 anim_coll;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_15 Callback;
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
	u32 type;
	RwRGBAReal color;
	type_12 matrix;
	f32 radius;
	f32 angle;
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
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_27 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct xSphere
{
	xVec3 center;
	f32 r;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_30 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	s32 memlvl;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	s32 size;
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
	u32 size;
	rxHeapBlockHeader* ptr;
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
	type_0 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_20 vertIndex;
	s16 matIndex;
};

struct xJSPHeader
{
	type_28 idtag;
	u32 version;
	u32 jspNodeCount;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	f32 radius;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	s8* name;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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
	u32 filterAddressing;
	s32 refCount;
};

struct RpSector
{
	s32 type;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	u32 creationAttributes;
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_35 clusters;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
	u32 Count;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct _class_2
{
	xVec3* verts;
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

s32 sCollidingJSP;
f32 cbath;
xRay3 cbray;
xMat3x3* cbmat;
RpIntersection cbisx_local;
u8 cbnumcs;
u8 cbmaxcs;
u8 FLOOR;
u8 NEXT2;
u8 OTHER;
s32 build_mytime;
s32 build_rwtime;
s32 collide_mytime;
s32 collide_rwtime;
s32 build_myct;
s32 build_rwct;
s32 collide_myct;
s32 collide_rwct;
f32 build_mytime_secs;
f32 build_rwtime_secs;
f32 collide_mytime_secs;
f32 collide_rwtime_secs;
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
u32 iRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll);
u32 iRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll);
s32 iSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, u8 ncolls, f32 sth);
s32 iSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls);
s32 iSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, u8 ncolls, f32 sth);
u32 iSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll);
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, f32 dist, void* data);
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, f32 dist, void* data);
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data);
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data);
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, f32 dist, void* data);
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data);
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data);
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpCollisionTriangle* tri, f32 dist, void* data);
void properSphereIsectTri(xVec3* center, f32 radius, xVec3* tohit, f32* dist_ptr, RpCollisionTriangle* tri);
void FindNearestPointOnLine(xVec3* _result, xVec3* _point, xVec3* _start, xVec3* _end);
s32 PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal);
void iCollideInit();

// iBoxForModelLocal__FP4xBoxPC14xModelInstance
// Start address: 0x1a54a0
void iBoxForModelLocal(xBox* o, xModelInstance* m)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	u16 idx;
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
	u16 idx;
}

// iRayHitsModel__FPC5xRay3PC14xModelInstanceP7xCollis
// Start address: 0x1a5760
u32 iRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	f32 len;
	xMat4x3* mat;
	RwV3d temp;
	xVec3 center;
	xVec3 heading;
}

// iRayHitsEnv__FPC5xRay3PC4xEnvP7xCollis
// Start address: 0x1a5be0
u32 iRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
	f32 len;
}

// iSphereHitsModel3__FPC7xSpherePC14xModelInstanceP7xCollisUcf
// Start address: 0x1a5eb0
s32 iSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, u8 ncolls, f32 sth)
{
	RpIntersection isx;
	u8 idx;
	u8 i;
	xMat4x3* mat;
	f32 mscale;
	xMat3x3 mnormal;
	s32 t0;
	s32 t1;
}

// iSphereHitsEnv4__FPC7xSpherePC4xEnvPC7xMat3x3P7xCollis
// Start address: 0x1a64f0
s32 iSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls)
{
	RpIntersection isx;
	xCollis* c;
	xCollis* cend;
	s32 numcs;
	f32 s;
}

// iSphereHitsEnv3__FPC7xSpherePC4xEnvP7xCollisUcf
// Start address: 0x1a6770
s32 iSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, u8 ncolls, f32 sth)
{
	RpIntersection isx;
	u8 idx;
}

// iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
// Start address: 0x1a6980
u32 iSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
}

// rayHitsModelBackwardCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a60
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, f32 dist, void* data)
{
}

// rayHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a80
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, f32 dist, void* data)
{
}

// rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6aa0
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data)
{
	xCollis* coll;
}

// rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6b50
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data)
{
	xCollis* coll;
}

// sphereHitsModel3CB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6c50
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, f32 dist, void* data)
{
}

// sphereHitsEnv4CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6c70
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data)
{
	xCollis* colls;
	f32 radius;
	xVec3 tohit;
	xCollis temp;
	u8 idx;
	xCollis* c;
	f32 ddist;
}

// sphereHitsEnv3CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6ea0
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, f32 dist, void* data)
{
	xCollis* colls;
	f32 radius;
	xVec3* center;
	xVec3 tohit;
	xVec3 hdng;
	u8 idx;
	f32 dot;
	f32 odot;
	f32 ndot;
	f32 scale;
}

// sphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a75b0
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpCollisionTriangle* tri, f32 dist, void* data)
{
	xCollis* coll;
	f32 radius;
	xVec3* center;
	xVec3 tohit;
	f32 scale;
}

// properSphereIsectTri__FPC5xVec3fP5xVec3PfP19RpCollisionTriangle
// Start address: 0x1a7790
void properSphereIsectTri(xVec3* center, f32 radius, xVec3* tohit, f32* dist_ptr, RpCollisionTriangle* tri)
{
	xVec3 projPoint;
	f32 dist2plane;
	f32 dist;
	f32 dist2;
	f32 radius2;
	u32 i;
	xVec3 vertClosestPoint;
	f32 vertDist2;
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
	f32 mu;
	f32 lineLength2;
}

// PointWithinTriangle__FP5xVec3PP5xVec3P5xVec3
// Start address: 0x1a7aa0
s32 PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal)
{
	RwV3d* pt;
	RwV3d** tri;
	RwV3d* normal;
	Dimension dimension;
	f32 absX;
	f32 absY;
	f32 absZ;
	s32 inside;
	s32 i;
	s32 j;
}

// iCollideInit__FP6xScene
// Start address: 0x1a7e30
void iCollideInit()
{
}

