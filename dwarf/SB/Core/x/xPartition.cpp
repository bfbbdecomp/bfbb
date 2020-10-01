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
typedef union _class;
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
	type_14 eventFunc;
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
	type_1 vertIndex;
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
	type_13 pad;
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
	type_8 callback;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_10 texCoords;
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
	type_9 idtag;
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
	type_19 destroyNotify;
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
	type_12 param;
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
	type_22 light;
	type_23 light_frame;
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
	type_11 pad;
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
	type_16 name;
	type_18 mask;
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
	type_3 nodeBody;
	type_4 nodeInit;
	type_5 nodeTerm;
	type_6 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_2 configMsgHandler;
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
	type_15 renderCallBack;
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
	type_17 matrix;
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
	type_20 clusters;
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
	type_21 sync;
};

union _class
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
}

// xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi
// Start address: 0x1f6890
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, uint32 data)
{
	_tagPartLink* dest_lnk;
	_tagPartLink* src_lnk;
	_tagPartLink* src_pre;
}

// xPartitionUpdate__FP13_tagPartitionPviP5xVec3
// Start address: 0x1f6910
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, xVec3* current_pos)
{
	int32 cur_idx;
	_tagPartSpace* src;
}

// xPartitionInsert__FP13_tagPartitionPvP5xVec3
// Start address: 0x1f6a70
int32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos)
{
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
}

// xPartitionReset__Fv
// Start address: 0x1f7000
void xPartitionReset()
{
}

