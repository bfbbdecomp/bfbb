typedef struct RxHeap;
typedef struct RpAtomic;
typedef struct RwRGBA;
typedef struct xVec3;
typedef struct RxPipelineNode;
typedef struct xBound;
typedef struct xQuat;
typedef struct xCollis;
typedef struct RpClump;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct xSphere;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQCControl;
typedef struct RwResEntry;
typedef struct rxReq;
typedef struct xModelBucket;
typedef struct RwRaster;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct xAnimTransitionList;
typedef struct xRay3;
typedef struct xBox;
typedef struct xAnimTable;
typedef struct xModelInstance;
typedef struct xMat4x3;
typedef struct xAnimTransition;
typedef enum RxNodeDefEditable;
typedef struct xLightKit;
typedef enum RxClusterValid;
typedef struct xQCData;
typedef struct rxHeapFreeBlock;
typedef struct xIsect;
typedef struct xAnimState;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimFile;
typedef struct xAnimSingle;
typedef struct RxClusterDefinition;
typedef struct xAnimMultiFileBase;
typedef struct _class_0;
typedef struct RwSphere;
typedef struct tri_data;
typedef struct RpInterpolator;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct RxIoSpec;
typedef struct _class_1;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xModelPool;
typedef struct RxNodeDefinition;
typedef struct RpGeometry;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xBBox;

typedef uint32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_1)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_2)(RpAtomic*);
typedef int32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_4)(RxNodeDefinition*);
typedef void(*type_5)(RxNodeDefinition*);
typedef void(*type_6)(xAnimPlay*, xAnimState*);
typedef int32(*type_7)(RxPipelineNode*);
typedef void(*type_8)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_10)(RxPipelineNode*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_14)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_19)(xMemPool*, void*);
typedef RpClump*(*type_22)(RpClump*, void*);
typedef void(*type_23)(RwResEntry*);
typedef RwObjectHasFrame*(*type_25)(RwObjectHasFrame*);

typedef RwTexCoords* type_9[8];
typedef uint8 type_13[3];
typedef uint32 type_15[4];
typedef float32 type_16[2];
typedef uint8 type_17[2];
typedef xAnimMultiFileEntry type_18[1];
typedef int8 type_20[32];
typedef int8 type_21[32];
typedef RxCluster type_24[1];
typedef uint16 type_26[3];

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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
		tri_data tri;
	};
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
	uint32 pad[4];
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct xSurface
{
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

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rxReq
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKit
{
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_0
{
	xVec3* verts;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	RxCluster clusters[1];
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwLinkList
{
	RwLLLink link;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

xQCControl xqc_def_ctrl;

void xBoundDraw();
void xVecHitsBound(xVec3* v, xBound* b, xCollis* c);
void xSphereHitsBound(xSphere* o, xBound* b, xCollis* c);
void xRayHitsBound(xRay3* r, xBound* b, xCollis* c);
void xBoundOBBIsectRay(xBox* b, xMat4x3* m, xRay3* r, xIsect* isect);
void xBoundHitsBound(xBound* a, xBound* b, xCollis* c);
void xBoundGetSphere(xSphere& o, xBound& bound);
void xBoundGetBox(xBox& box, xBound& bound);
void xBoundUpdate(xBound* b);

// xBoundDraw__FPC6xBound
// Start address: 0x1c0530
void xBoundDraw()
{
	// Line 408, Address: 0x1c0530, Func Offset: 0
	// Func End, Address: 0x1c0538, Func Offset: 0x8
}

// xVecHitsBound__FPC5xVec3PC6xBoundP7xCollis
// Start address: 0x1c0540
void xVecHitsBound(xVec3* v, xBound* b, xCollis* c)
{
	xIsect isect;
	xVec3 lv;
	// Line 368, Address: 0x1c0540, Func Offset: 0
	// Line 375, Address: 0x1c054c, Func Offset: 0xc
	// Line 368, Address: 0x1c0550, Func Offset: 0x10
	// Line 375, Address: 0x1c0560, Func Offset: 0x20
	// Line 376, Address: 0x1c0568, Func Offset: 0x28
	// Line 377, Address: 0x1c0578, Func Offset: 0x38
	// Line 379, Address: 0x1c058c, Func Offset: 0x4c
	// Line 380, Address: 0x1c05cc, Func Offset: 0x8c
	// Line 381, Address: 0x1c05dc, Func Offset: 0x9c
	// Line 382, Address: 0x1c05f4, Func Offset: 0xb4
	// Line 387, Address: 0x1c0604, Func Offset: 0xc4
	// Line 388, Address: 0x1c0608, Func Offset: 0xc8
	// Line 389, Address: 0x1c0620, Func Offset: 0xe0
	// Line 390, Address: 0x1c0628, Func Offset: 0xe8
	// Line 391, Address: 0x1c0630, Func Offset: 0xf0
	// Line 393, Address: 0x1c0640, Func Offset: 0x100
	// Func End, Address: 0x1c0654, Func Offset: 0x114
}

// xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
// Start address: 0x1c0660
void xSphereHitsBound(xSphere* o, xBound* b, xCollis* c)
{
	// Line 338, Address: 0x1c0660, Func Offset: 0
	// Line 340, Address: 0x1c066c, Func Offset: 0xc
	// Line 342, Address: 0x1c06a4, Func Offset: 0x44
	// Line 343, Address: 0x1c06a8, Func Offset: 0x48
	// Line 344, Address: 0x1c06b0, Func Offset: 0x50
	// Line 346, Address: 0x1c06b8, Func Offset: 0x58
	// Line 347, Address: 0x1c06c4, Func Offset: 0x64
	// Line 348, Address: 0x1c06cc, Func Offset: 0x6c
	// Line 349, Address: 0x1c06d0, Func Offset: 0x70
	// Line 356, Address: 0x1c06d8, Func Offset: 0x78
	// Func End, Address: 0x1c06e4, Func Offset: 0x84
}

// xRayHitsBound__FPC5xRay3PC6xBoundP7xCollis
// Start address: 0x1c06f0
void xRayHitsBound(xRay3* r, xBound* b, xCollis* c)
{
	xIsect isect;
	// Line 290, Address: 0x1c06f0, Func Offset: 0
	// Line 297, Address: 0x1c06fc, Func Offset: 0xc
	// Line 290, Address: 0x1c0700, Func Offset: 0x10
	// Line 297, Address: 0x1c0708, Func Offset: 0x18
	// Line 298, Address: 0x1c0710, Func Offset: 0x20
	// Line 300, Address: 0x1c0720, Func Offset: 0x30
	// Line 302, Address: 0x1c0734, Func Offset: 0x44
	// Line 307, Address: 0x1c0748, Func Offset: 0x58
	// Line 308, Address: 0x1c075c, Func Offset: 0x6c
	// Line 315, Address: 0x1c076c, Func Offset: 0x7c
	// Line 316, Address: 0x1c0770, Func Offset: 0x80
	// Line 317, Address: 0x1c0788, Func Offset: 0x98
	// Line 321, Address: 0x1c0794, Func Offset: 0xa4
	// Line 323, Address: 0x1c0798, Func Offset: 0xa8
	// Line 324, Address: 0x1c07a0, Func Offset: 0xb0
	// Line 326, Address: 0x1c07b0, Func Offset: 0xc0
	// Func End, Address: 0x1c07c0, Func Offset: 0xd0
}

// xBoundOBBIsectRay__FPC4xBoxPC7xMat4x3PC5xRay3P6xIsect
// Start address: 0x1c07c0
void xBoundOBBIsectRay(xBox* b, xMat4x3* m, xRay3* r, xIsect* isect)
{
	xRay3 xfr;
	xBox sbox;
	xVec3 scale;
	xMat4x3 mnormal;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	// Line 229, Address: 0x1c07c0, Func Offset: 0
	// Line 240, Address: 0x1c07c4, Func Offset: 0x4
	// Line 229, Address: 0x1c07c8, Func Offset: 0x8
	// Line 240, Address: 0x1c07cc, Func Offset: 0xc
	// Line 229, Address: 0x1c07d0, Func Offset: 0x10
	// Line 240, Address: 0x1c07dc, Func Offset: 0x1c
	// Line 241, Address: 0x1c08b0, Func Offset: 0xf0
	// Line 242, Address: 0x1c0998, Func Offset: 0x1d8
	// Line 243, Address: 0x1c0a80, Func Offset: 0x2c0
	// Line 244, Address: 0x1c0a84, Func Offset: 0x2c4
	// Line 243, Address: 0x1c0a90, Func Offset: 0x2d0
	// Line 246, Address: 0x1c0a98, Func Offset: 0x2d8
	// Line 243, Address: 0x1c0a9c, Func Offset: 0x2dc
	// Line 246, Address: 0x1c0aa4, Func Offset: 0x2e4
	// Line 243, Address: 0x1c0aa8, Func Offset: 0x2e8
	// Line 246, Address: 0x1c0aac, Func Offset: 0x2ec
	// Line 244, Address: 0x1c0ab0, Func Offset: 0x2f0
	// Line 246, Address: 0x1c0ab4, Func Offset: 0x2f4
	// Line 244, Address: 0x1c0ab8, Func Offset: 0x2f8
	// Line 245, Address: 0x1c0ad8, Func Offset: 0x318
	// Line 246, Address: 0x1c0af8, Func Offset: 0x338
	// Line 245, Address: 0x1c0b00, Func Offset: 0x340
	// Line 246, Address: 0x1c0b04, Func Offset: 0x344
	// Line 247, Address: 0x1c0b2c, Func Offset: 0x36c
	// Line 257, Address: 0x1c0b3c, Func Offset: 0x37c
	// Line 260, Address: 0x1c0b40, Func Offset: 0x380
	// Line 257, Address: 0x1c0b4c, Func Offset: 0x38c
	// Line 258, Address: 0x1c0b50, Func Offset: 0x390
	// Line 259, Address: 0x1c0b58, Func Offset: 0x398
	// Line 260, Address: 0x1c0b5c, Func Offset: 0x39c
	// Line 286, Address: 0x1c0b64, Func Offset: 0x3a4
	// Func End, Address: 0x1c0b78, Func Offset: 0x3b8
}

// xBoundHitsBound__FPC6xBoundPC6xBoundP7xCollis
// Start address: 0x1c0b80
void xBoundHitsBound(xBound* a, xBound* b, xCollis* c)
{
	// Line 142, Address: 0x1c0b80, Func Offset: 0
	// Line 148, Address: 0x1c0b9c, Func Offset: 0x1c
	// Line 149, Address: 0x1c0bac, Func Offset: 0x2c
	// Line 156, Address: 0x1c0bb8, Func Offset: 0x38
	// Line 160, Address: 0x1c0bc0, Func Offset: 0x40
	// Line 163, Address: 0x1c0c78, Func Offset: 0xf8
	// Line 164, Address: 0x1c0c88, Func Offset: 0x108
	// Line 167, Address: 0x1c0c90, Func Offset: 0x110
	// Line 171, Address: 0x1c0ca4, Func Offset: 0x124
	// Line 172, Address: 0x1c0cac, Func Offset: 0x12c
	// Line 173, Address: 0x1c0cb0, Func Offset: 0x130
	// Line 174, Address: 0x1c0cc0, Func Offset: 0x140
	// Line 176, Address: 0x1c0cc8, Func Offset: 0x148
	// Line 177, Address: 0x1c0cd8, Func Offset: 0x158
	// Line 179, Address: 0x1c0ce0, Func Offset: 0x160
	// Line 195, Address: 0x1c0cf4, Func Offset: 0x174
	// Line 196, Address: 0x1c0cf8, Func Offset: 0x178
	// Func End, Address: 0x1c0d10, Func Offset: 0x190
}

// xBoundGetSphere__FR7xSphereRC6xBound
// Start address: 0x1c0d10
void xBoundGetSphere(xSphere& o, xBound& bound)
{
	xMat4x3& mat;
	xVec3 v;
	// Line 67, Address: 0x1c0d10, Func Offset: 0
	// Line 70, Address: 0x1c0d48, Func Offset: 0x38
	// Line 71, Address: 0x1c0d64, Func Offset: 0x54
	// Line 72, Address: 0x1c0d6c, Func Offset: 0x5c
	// Line 74, Address: 0x1c0d70, Func Offset: 0x60
	// Line 73, Address: 0x1c0d74, Func Offset: 0x64
	// Line 74, Address: 0x1c0d78, Func Offset: 0x68
	// Line 73, Address: 0x1c0d7c, Func Offset: 0x6c
	// Line 74, Address: 0x1c0d90, Func Offset: 0x80
	// Line 75, Address: 0x1c0e10, Func Offset: 0x100
	// Line 78, Address: 0x1c0e18, Func Offset: 0x108
	// Line 79, Address: 0x1c0e1c, Func Offset: 0x10c
	// Line 83, Address: 0x1c0ed4, Func Offset: 0x1c4
	// Line 79, Address: 0x1c0efc, Func Offset: 0x1ec
	// Line 83, Address: 0x1c0f00, Func Offset: 0x1f0
	// Line 79, Address: 0x1c0f0c, Func Offset: 0x1fc
	// Line 83, Address: 0x1c0f14, Func Offset: 0x204
	// Line 79, Address: 0x1c0f18, Func Offset: 0x208
	// Line 83, Address: 0x1c0f20, Func Offset: 0x210
	// Line 84, Address: 0x1c0f44, Func Offset: 0x234
	// Line 91, Address: 0x1c0f5c, Func Offset: 0x24c
	// Line 92, Address: 0x1c0f60, Func Offset: 0x250
	// Func End, Address: 0x1c0f68, Func Offset: 0x258
}

// xBoundGetBox__FR4xBoxRC6xBound
// Start address: 0x1c0f70
void xBoundGetBox(xBox& box, xBound& bound)
{
	xSphere& o;
	// Line 42, Address: 0x1c0f70, Func Offset: 0
	// Line 43, Address: 0x1c0f7c, Func Offset: 0xc
	// Line 47, Address: 0x1c0fb0, Func Offset: 0x40
	// Line 48, Address: 0x1c0fb4, Func Offset: 0x44
	// Line 49, Address: 0x1c0fdc, Func Offset: 0x6c
	// Line 51, Address: 0x1c0ffc, Func Offset: 0x8c
	// Line 52, Address: 0x1c1004, Func Offset: 0x94
	// Line 53, Address: 0x1c1008, Func Offset: 0x98
	// Line 54, Address: 0x1c1034, Func Offset: 0xc4
	// Line 55, Address: 0x1c103c, Func Offset: 0xcc
	// Line 56, Address: 0x1c1040, Func Offset: 0xd0
	// Line 62, Address: 0x1c104c, Func Offset: 0xdc
	// Line 63, Address: 0x1c1050, Func Offset: 0xe0
	// Func End, Address: 0x1c105c, Func Offset: 0xec
}

// xBoundUpdate__FP6xBound
// Start address: 0x1c1060
void xBoundUpdate(xBound* b)
{
	// Line 22, Address: 0x1c1060, Func Offset: 0
	// Line 23, Address: 0x1c106c, Func Offset: 0xc
	// Line 22, Address: 0x1c1070, Func Offset: 0x10
	// Line 23, Address: 0x1c1074, Func Offset: 0x14
	// Line 24, Address: 0x1c107c, Func Offset: 0x1c
	// Line 25, Address: 0x1c10d8, Func Offset: 0x78
	// Line 26, Address: 0x1c10ec, Func Offset: 0x8c
	// Line 27, Address: 0x1c114c, Func Offset: 0xec
	// Line 28, Address: 0x1c11ec, Func Offset: 0x18c
	// Line 30, Address: 0x1c11f0, Func Offset: 0x190
	// Line 32, Address: 0x1c11fc, Func Offset: 0x19c
	// Line 39, Address: 0x1c1208, Func Offset: 0x1a8
	// Func End, Address: 0x1c1214, Func Offset: 0x1b4
}

