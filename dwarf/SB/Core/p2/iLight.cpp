typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct iLight;
typedef struct _xFColor;
typedef struct RxPipelineNode;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct xVec3;
typedef enum RpWorldRenderOrder;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct RwTexture;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwFrame;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpWorldSector;
typedef struct RpLight;
typedef enum RxNodeDefEditable;
typedef struct RpWorld;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct RwLLLink;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RpPolygon;
typedef struct RxIoSpec;
typedef struct RpMaterialList;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RpMeshHeader;
typedef struct RwLinkList;

typedef uint32(*type_0)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_1)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_2)(RxNodeDefinition*);
typedef void(*type_3)(RxNodeDefinition*);
typedef int32(*type_4)(RxPipelineNode*);
typedef void(*type_5)(RxPipelineNode*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_7)(RpWorldSector*);
typedef void(*type_12)(RwResEntry*);
typedef RwObjectHasFrame*(*type_15)(RwObjectHasFrame*);

typedef uint32 type_8[4];
typedef uint16 type_9[3];
typedef int8 type_10[32];
typedef int8 type_11[32];
typedef RwTexCoords* type_13[8];
typedef RxCluster type_14[1];

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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct iLight
{
	uint32 type;
	RpLight* hw;
	xSphere sph;
	float32 radius_sq;
	_xFColor color;
	xVec3 dir;
	float32 coneangle;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
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
	uint32 pad[4];
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct RpSector
{
	int32 type;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwLinkList
{
	RwLLLink link;
};

RpWorld* gLightWorld;
xVec3 g_O3;

void iLightEnv(iLight* light, int32 env);
void iLightDestroy(iLight* light);
void iLightSetPos(iLight* light, xVec3* pos);
void iLightSetColor(iLight* light, _xFColor* col);
void iLightModify(iLight* light, uint32 flags);
iLight* iLightCreate(iLight* light, uint32 type);
void iLightInit(RpWorld* world);

// iLightEnv__FP6iLighti
// Start address: 0x1aaf40
void iLightEnv(iLight* light, int32 env)
{
	uint32 flags;
	// Line 205, Address: 0x1aaf40, Func Offset: 0
	// Line 209, Address: 0x1aaf70, Func Offset: 0x30
	// Line 213, Address: 0x1aaf78, Func Offset: 0x38
	// Line 217, Address: 0x1aaf80, Func Offset: 0x40
	// Line 220, Address: 0x1aaf88, Func Offset: 0x48
	// Line 226, Address: 0x1aaf8c, Func Offset: 0x4c
	// Line 228, Address: 0x1aaf90, Func Offset: 0x50
	// Line 229, Address: 0x1aaf94, Func Offset: 0x54
	// Func End, Address: 0x1aaf9c, Func Offset: 0x5c
}

// iLightDestroy__FP6iLight
// Start address: 0x1aafa0
void iLightDestroy(iLight* light)
{
	RwFrame* frame;
	// Line 165, Address: 0x1aafa0, Func Offset: 0
	// Line 169, Address: 0x1aafac, Func Offset: 0xc
	// Line 173, Address: 0x1aafb0, Func Offset: 0x10
	// Line 175, Address: 0x1aafb8, Func Offset: 0x18
	// Line 176, Address: 0x1aafc0, Func Offset: 0x20
	// Line 177, Address: 0x1aafc8, Func Offset: 0x28
	// Line 180, Address: 0x1aafd0, Func Offset: 0x30
	// Line 181, Address: 0x1aafd8, Func Offset: 0x38
	// Func End, Address: 0x1aafe8, Func Offset: 0x48
}

// iLightSetPos__FP6iLightP5xVec3
// Start address: 0x1aaff0
void iLightSetPos(iLight* light, xVec3* pos)
{
	RwFrame* f;
	RwMatrixTag* m;
	// Line 132, Address: 0x1aaff0, Func Offset: 0
	// Line 134, Address: 0x1aaffc, Func Offset: 0xc
	// Line 137, Address: 0x1ab000, Func Offset: 0x10
	// Line 134, Address: 0x1ab004, Func Offset: 0x14
	// Line 137, Address: 0x1ab008, Func Offset: 0x18
	// Line 135, Address: 0x1ab00c, Func Offset: 0x1c
	// Line 138, Address: 0x1ab010, Func Offset: 0x20
	// Line 139, Address: 0x1ab018, Func Offset: 0x28
	// Line 142, Address: 0x1ab01c, Func Offset: 0x2c
	// Line 145, Address: 0x1ab024, Func Offset: 0x34
	// Line 146, Address: 0x1ab02c, Func Offset: 0x3c
	// Func End, Address: 0x1ab03c, Func Offset: 0x4c
}

// iLightSetColor__FP6iLightP8_xFColor
// Start address: 0x1ab040
void iLightSetColor(iLight* light, _xFColor* col)
{
	// Line 127, Address: 0x1ab040, Func Offset: 0
	// Func End, Address: 0x1ab048, Func Offset: 0x8
}

// iLightModify__FP6iLightUi
// Start address: 0x1ab050
void iLightModify(iLight* light, uint32 flags)
{
	RwFrame* frame;
	RwMatrixTag temp;
	// Line 98, Address: 0x1ab050, Func Offset: 0
	// Line 99, Address: 0x1ab054, Func Offset: 0x4
	// Line 98, Address: 0x1ab058, Func Offset: 0x8
	// Line 99, Address: 0x1ab068, Func Offset: 0x18
	// Line 104, Address: 0x1ab070, Func Offset: 0x20
	// Line 102, Address: 0x1ab074, Func Offset: 0x24
	// Line 104, Address: 0x1ab078, Func Offset: 0x28
	// Line 105, Address: 0x1ab080, Func Offset: 0x30
	// Line 106, Address: 0x1ab084, Func Offset: 0x34
	// Line 108, Address: 0x1ab088, Func Offset: 0x38
	// Line 102, Address: 0x1ab090, Func Offset: 0x40
	// Line 104, Address: 0x1ab094, Func Offset: 0x44
	// Line 105, Address: 0x1ab0b0, Func Offset: 0x60
	// Line 106, Address: 0x1ab0cc, Func Offset: 0x7c
	// Line 107, Address: 0x1ab0e4, Func Offset: 0x94
	// Line 108, Address: 0x1ab0f8, Func Offset: 0xa8
	// Line 110, Address: 0x1ab100, Func Offset: 0xb0
	// Line 111, Address: 0x1ab10c, Func Offset: 0xbc
	// Line 113, Address: 0x1ab118, Func Offset: 0xc8
	// Line 114, Address: 0x1ab124, Func Offset: 0xd4
	// Line 116, Address: 0x1ab130, Func Offset: 0xe0
	// Line 120, Address: 0x1ab158, Func Offset: 0x108
	// Line 121, Address: 0x1ab164, Func Offset: 0x114
	// Line 122, Address: 0x1ab168, Func Offset: 0x118
	// Func End, Address: 0x1ab17c, Func Offset: 0x12c
}

// iLightCreate__FP6iLightUi
// Start address: 0x1ab180
iLight* iLightCreate(iLight* light, uint32 type)
{
	RwFrame* frame;
	// Line 37, Address: 0x1ab180, Func Offset: 0
	// Line 39, Address: 0x1ab184, Func Offset: 0x4
	// Line 37, Address: 0x1ab188, Func Offset: 0x8
	// Line 39, Address: 0x1ab19c, Func Offset: 0x1c
	// Line 42, Address: 0x1ab1c0, Func Offset: 0x40
	// Line 43, Address: 0x1ab1c8, Func Offset: 0x48
	// Line 45, Address: 0x1ab1d0, Func Offset: 0x50
	// Line 46, Address: 0x1ab1d8, Func Offset: 0x58
	// Line 48, Address: 0x1ab1e0, Func Offset: 0x60
	// Line 49, Address: 0x1ab1e8, Func Offset: 0x68
	// Line 52, Address: 0x1ab1f0, Func Offset: 0x70
	// Line 55, Address: 0x1ab1f8, Func Offset: 0x78
	// Line 58, Address: 0x1ab204, Func Offset: 0x84
	// Line 59, Address: 0x1ab20c, Func Offset: 0x8c
	// Line 62, Address: 0x1ab210, Func Offset: 0x90
	// Line 63, Address: 0x1ab21c, Func Offset: 0x9c
	// Line 65, Address: 0x1ab224, Func Offset: 0xa4
	// Line 67, Address: 0x1ab22c, Func Offset: 0xac
	// Line 68, Address: 0x1ab234, Func Offset: 0xb4
	// Line 71, Address: 0x1ab238, Func Offset: 0xb8
	// Line 72, Address: 0x1ab244, Func Offset: 0xc4
	// Line 74, Address: 0x1ab250, Func Offset: 0xd0
	// Line 77, Address: 0x1ab258, Func Offset: 0xd8
	// Line 82, Address: 0x1ab25c, Func Offset: 0xdc
	// Line 78, Address: 0x1ab260, Func Offset: 0xe0
	// Line 92, Address: 0x1ab264, Func Offset: 0xe4
	// Line 79, Address: 0x1ab268, Func Offset: 0xe8
	// Line 80, Address: 0x1ab26c, Func Offset: 0xec
	// Line 81, Address: 0x1ab270, Func Offset: 0xf0
	// Line 82, Address: 0x1ab274, Func Offset: 0xf4
	// Line 83, Address: 0x1ab278, Func Offset: 0xf8
	// Line 84, Address: 0x1ab27c, Func Offset: 0xfc
	// Line 85, Address: 0x1ab280, Func Offset: 0x100
	// Line 86, Address: 0x1ab284, Func Offset: 0x104
	// Line 87, Address: 0x1ab288, Func Offset: 0x108
	// Line 88, Address: 0x1ab28c, Func Offset: 0x10c
	// Line 89, Address: 0x1ab290, Func Offset: 0x110
	// Line 92, Address: 0x1ab294, Func Offset: 0x114
	// Line 93, Address: 0x1ab298, Func Offset: 0x118
	// Func End, Address: 0x1ab2b0, Func Offset: 0x130
}

// iLightInit__FP7RpWorld
// Start address: 0x1ab2b0
void iLightInit(RpWorld* world)
{
	// Line 29, Address: 0x1ab2b0, Func Offset: 0
	// Func End, Address: 0x1ab2b8, Func Offset: 0x8
}

