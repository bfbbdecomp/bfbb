typedef struct xBase;
typedef struct RxPipelineNodeParam;
typedef struct xQCData;
typedef struct RpPolygon;
typedef struct xBBox;
typedef struct RxHeap;
typedef struct _tagPartLink;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpMaterialList;
typedef struct RxPipelineNode;
typedef struct xJSPNodeInfo;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpMaterial;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct _tagPartSpace;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineRequiresCluster;
typedef struct RpClump;
typedef struct RpWorldSector;
typedef struct RxPipeline;
typedef struct xVec3;
typedef struct xJSPHeader;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RpVertexNormal;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct _tagPartition;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xLinkAsset;
typedef struct rxHeapFreeBlock;
typedef struct xVolume;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct iEnv;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xLightKit;
typedef struct RwTexDictionary;
typedef enum RpWorldRenderOrder;
typedef struct RxOutputSpec;
typedef struct xBound;
typedef struct RwTexture;
typedef struct xVolumeAsset;
typedef struct xMat3x3;
typedef struct RpSector;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RpLight;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RpWorld;
typedef struct xClumpCollBSPVertInfo;
typedef struct xLightKitLight;
typedef struct RxNodeDefinition;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct _class;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_4)(RxNodeDefinition*);
typedef void(*type_5)(RxNodeDefinition*);
typedef int32(*type_6)(RxPipelineNode*);
typedef void(*type_7)(RxPipelineNode*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef int32(*type_14)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef void(*type_19)(RwResEntry*);
typedef RwObjectHasFrame*(*type_21)(RwObjectHasFrame*);

typedef uint16 type_1[3];
typedef int8 type_9[4];
typedef RwTexCoords* type_10[8];
typedef uint8 type_11[3];
typedef float32 type_12[4];
typedef uint32 type_13[4];
typedef int8 type_16[32];
typedef float32 type_17[16];
typedef int8 type_18[32];
typedef RxCluster type_20[1];
typedef RpLight* type_22[2];
typedef RwFrame* type_23[2];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct _tagPartSpace
{
	int32 total;
	_tagPartLink head;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xJSPHeader
{
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _tagPartition
{
	xVec3 min;
	xVec3 max;
	xVec3 space_dim;
	int32 total_x;
	int32 total_y;
	int32 total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xVolumeAsset
{
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

struct RpSector
{
	int32 type;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xClumpCollBSPTriangle
{
	_class v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct _class
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct RwLinkList
{
	RwLLLink link;
};

uint32 gActiveHeap;

void xPartitionDump();
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, uint32 data);
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, xVec3* current_pos);
int32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos);
void xPartitionWorld(_tagPartition* part, xEnv* env, int32 x_spaces, int32 y_spaces, int32 z_spaces);
void xPartitionVolume(_tagPartition* part, xVolume* volume, int32 x_spaces, int32 y_spaces, int32 z_spaces);
void xPartitionReset();

// xPartitionDump__FP13_tagPartitionPc
// Start address: 0x1f6880
void xPartitionDump()
{
	// Line 411, Address: 0x1f6880, Func Offset: 0
	// Func End, Address: 0x1f6888, Func Offset: 0x8
}

// xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi
// Start address: 0x1f6890
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, uint32 data)
{
	_tagPartLink* dest_lnk;
	_tagPartLink* src_lnk;
	_tagPartLink* src_pre;
	// Line 323, Address: 0x1f6890, Func Offset: 0
	// Line 326, Address: 0x1f6894, Func Offset: 0x4
	// Line 328, Address: 0x1f68a0, Func Offset: 0x10
	// Line 329, Address: 0x1f68a8, Func Offset: 0x18
	// Line 337, Address: 0x1f68b8, Func Offset: 0x28
	// Line 333, Address: 0x1f68bc, Func Offset: 0x2c
	// Line 337, Address: 0x1f68c0, Func Offset: 0x30
	// Line 339, Address: 0x1f68c8, Func Offset: 0x38
	// Line 340, Address: 0x1f68cc, Func Offset: 0x3c
	// Line 341, Address: 0x1f68d0, Func Offset: 0x40
	// Line 344, Address: 0x1f68e0, Func Offset: 0x50
	// Line 347, Address: 0x1f68e8, Func Offset: 0x58
	// Line 348, Address: 0x1f68ec, Func Offset: 0x5c
	// Line 351, Address: 0x1f68f4, Func Offset: 0x64
	// Line 352, Address: 0x1f6900, Func Offset: 0x70
	// Line 353, Address: 0x1f6908, Func Offset: 0x78
	// Func End, Address: 0x1f6910, Func Offset: 0x80
}

// xPartitionUpdate__FP13_tagPartitionPviP5xVec3
// Start address: 0x1f6910
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, xVec3* current_pos)
{
	int32 cur_idx;
	_tagPartSpace* src;
	// Line 264, Address: 0x1f6910, Func Offset: 0
	// Line 266, Address: 0x1f6924, Func Offset: 0x14
	// Line 272, Address: 0x1f6988, Func Offset: 0x78
	// Line 286, Address: 0x1f6994, Func Offset: 0x84
	// Line 292, Address: 0x1f69f0, Func Offset: 0xe0
	// Line 295, Address: 0x1f69f8, Func Offset: 0xe8
	// Line 302, Address: 0x1f6a00, Func Offset: 0xf0
	// Line 311, Address: 0x1f6a28, Func Offset: 0x118
	// Line 313, Address: 0x1f6a5c, Func Offset: 0x14c
	// Line 314, Address: 0x1f6a60, Func Offset: 0x150
	// Func End, Address: 0x1f6a70, Func Offset: 0x160
}

// xPartitionInsert__FP13_tagPartitionPvP5xVec3
// Start address: 0x1f6a70
int32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos)
{
	// Line 230, Address: 0x1f6a70, Func Offset: 0
	// Line 232, Address: 0x1f6a8c, Func Offset: 0x1c
	// Line 237, Address: 0x1f6af0, Func Offset: 0x80
	// Line 238, Address: 0x1f6b38, Func Offset: 0xc8
	// Line 237, Address: 0x1f6b3c, Func Offset: 0xcc
	// Line 238, Address: 0x1f6b44, Func Offset: 0xd4
	// Line 239, Address: 0x1f6b4c, Func Offset: 0xdc
	// Line 238, Address: 0x1f6b50, Func Offset: 0xe0
	// Line 254, Address: 0x1f6b54, Func Offset: 0xe4
	// Line 256, Address: 0x1f6b5c, Func Offset: 0xec
	// Line 254, Address: 0x1f6b60, Func Offset: 0xf0
	// Line 256, Address: 0x1f6bb4, Func Offset: 0x144
	// Line 258, Address: 0x1f6c10, Func Offset: 0x1a0
	// Line 256, Address: 0x1f6c14, Func Offset: 0x1a4
	// Line 259, Address: 0x1f6c20, Func Offset: 0x1b0
	// Func End, Address: 0x1f6c38, Func Offset: 0x1c8
}

// xPartitionWorld__FP13_tagPartitionP4xEnviii
// Start address: 0x1f6c40
void xPartitionWorld(_tagPartition* part, xEnv* env, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
	xBox* bb;
	float32 dx;
	float32 dy;
	float32 dz;
	int32 z;
	int32 y;
	int32 x;
	// Line 182, Address: 0x1f6c40, Func Offset: 0
	// Line 187, Address: 0x1f6c78, Func Offset: 0x38
	// Line 190, Address: 0x1f6c84, Func Offset: 0x44
	// Line 209, Address: 0x1f6c88, Func Offset: 0x48
	// Line 190, Address: 0x1f6c8c, Func Offset: 0x4c
	// Line 191, Address: 0x1f6c90, Func Offset: 0x50
	// Line 192, Address: 0x1f6ca8, Func Offset: 0x68
	// Line 196, Address: 0x1f6cc0, Func Offset: 0x80
	// Line 195, Address: 0x1f6cc8, Func Offset: 0x88
	// Line 197, Address: 0x1f6cd0, Func Offset: 0x90
	// Line 196, Address: 0x1f6cd8, Func Offset: 0x98
	// Line 200, Address: 0x1f6cdc, Func Offset: 0x9c
	// Line 195, Address: 0x1f6ce0, Func Offset: 0xa0
	// Line 201, Address: 0x1f6ce4, Func Offset: 0xa4
	// Line 202, Address: 0x1f6ce8, Func Offset: 0xa8
	// Line 203, Address: 0x1f6cec, Func Offset: 0xac
	// Line 197, Address: 0x1f6cf0, Func Offset: 0xb0
	// Line 203, Address: 0x1f6cf4, Func Offset: 0xb4
	// Line 204, Address: 0x1f6d00, Func Offset: 0xc0
	// Line 205, Address: 0x1f6d10, Func Offset: 0xd0
	// Line 209, Address: 0x1f6d20, Func Offset: 0xe0
	// Line 211, Address: 0x1f6d48, Func Offset: 0x108
	// Line 209, Address: 0x1f6d4c, Func Offset: 0x10c
	// Line 211, Address: 0x1f6d50, Func Offset: 0x110
	// Line 213, Address: 0x1f6d58, Func Offset: 0x118
	// Line 215, Address: 0x1f6d68, Func Offset: 0x128
	// Line 217, Address: 0x1f6d7c, Func Offset: 0x13c
	// Line 218, Address: 0x1f6d80, Func Offset: 0x140
	// Line 217, Address: 0x1f6d8c, Func Offset: 0x14c
	// Line 218, Address: 0x1f6da0, Func Offset: 0x160
	// Line 219, Address: 0x1f6db4, Func Offset: 0x174
	// Line 220, Address: 0x1f6dc8, Func Offset: 0x188
	// Line 221, Address: 0x1f6dd8, Func Offset: 0x198
	// Line 224, Address: 0x1f6de8, Func Offset: 0x1a8
	// Line 225, Address: 0x1f6df8, Func Offset: 0x1b8
	// Func End, Address: 0x1f6e20, Func Offset: 0x1e0
}

// xPartitionVolume__FP13_tagPartitionP7xVolumeiii
// Start address: 0x1f6e20
void xPartitionVolume(_tagPartition* part, xVolume* volume, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
	xBound* xb;
	xBox* bb;
	float32 dx;
	float32 dy;
	float32 dz;
	int32 z;
	int32 y;
	int32 x;
	// Line 131, Address: 0x1f6e20, Func Offset: 0
	// Line 138, Address: 0x1f6e58, Func Offset: 0x38
	// Line 141, Address: 0x1f6e64, Func Offset: 0x44
	// Line 143, Address: 0x1f6e6c, Func Offset: 0x4c
	// Line 161, Address: 0x1f6e70, Func Offset: 0x50
	// Line 143, Address: 0x1f6e74, Func Offset: 0x54
	// Line 144, Address: 0x1f6e88, Func Offset: 0x68
	// Line 148, Address: 0x1f6ea0, Func Offset: 0x80
	// Line 147, Address: 0x1f6ea8, Func Offset: 0x88
	// Line 149, Address: 0x1f6eb0, Func Offset: 0x90
	// Line 148, Address: 0x1f6eb8, Func Offset: 0x98
	// Line 152, Address: 0x1f6ebc, Func Offset: 0x9c
	// Line 147, Address: 0x1f6ec0, Func Offset: 0xa0
	// Line 153, Address: 0x1f6ec4, Func Offset: 0xa4
	// Line 154, Address: 0x1f6ec8, Func Offset: 0xa8
	// Line 155, Address: 0x1f6ecc, Func Offset: 0xac
	// Line 149, Address: 0x1f6ed0, Func Offset: 0xb0
	// Line 155, Address: 0x1f6ed4, Func Offset: 0xb4
	// Line 156, Address: 0x1f6ee0, Func Offset: 0xc0
	// Line 157, Address: 0x1f6ef0, Func Offset: 0xd0
	// Line 161, Address: 0x1f6f00, Func Offset: 0xe0
	// Line 163, Address: 0x1f6f28, Func Offset: 0x108
	// Line 161, Address: 0x1f6f2c, Func Offset: 0x10c
	// Line 163, Address: 0x1f6f30, Func Offset: 0x110
	// Line 165, Address: 0x1f6f38, Func Offset: 0x118
	// Line 167, Address: 0x1f6f48, Func Offset: 0x128
	// Line 169, Address: 0x1f6f5c, Func Offset: 0x13c
	// Line 170, Address: 0x1f6f60, Func Offset: 0x140
	// Line 169, Address: 0x1f6f6c, Func Offset: 0x14c
	// Line 170, Address: 0x1f6f80, Func Offset: 0x160
	// Line 171, Address: 0x1f6f94, Func Offset: 0x174
	// Line 172, Address: 0x1f6fa8, Func Offset: 0x188
	// Line 173, Address: 0x1f6fb8, Func Offset: 0x198
	// Line 176, Address: 0x1f6fc8, Func Offset: 0x1a8
	// Line 177, Address: 0x1f6fd8, Func Offset: 0x1b8
	// Func End, Address: 0x1f7000, Func Offset: 0x1e0
}

// xPartitionReset__Fv
// Start address: 0x1f7000
void xPartitionReset()
{
	// Line 60, Address: 0x1f7000, Func Offset: 0
	// Func End, Address: 0x1f7008, Func Offset: 0x8
}

