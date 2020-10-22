typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct DirtyMorph;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RpAtomic;
typedef struct RpGeometry;
typedef struct RwMatrixTag;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterialList;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RwSurfaceProperties;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct RpUserDataArray;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpMeshHeader;
typedef struct rxHeapFreeBlock;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RpTriangle;
typedef struct RxClusterDefinition;
typedef struct RwResEntry;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpUserDataFormat;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct RpInterpolator;

typedef uint32(*type_0)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_1)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_2)(RxNodeDefinition*);
typedef void(*type_3)(RxNodeDefinition*);
typedef int32(*type_4)(RxPipelineNode*);
typedef void(*type_5)(RxPipelineNode*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef RpAtomic*(*type_11)(RpAtomic*);
typedef void(*type_18)(RwResEntry*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);

typedef int16 type_7[4];
typedef int16* type_9[4];
typedef uint16 type_10[3];
typedef uint32 type_12[4];
typedef int16 type_13[4];
typedef int16* type_14[4];
typedef RwTexCoords* type_15[8];
typedef int8 type_16[32];
typedef int8 type_17[32];
typedef RxCluster type_19[1];

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

struct DirtyMorph
{
	uint32 count;
	float32 scale;
	int16 weight[4];
	int16* v_array[4];
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RpUserDataArray
{
	int8* name;
	RpUserDataFormat format;
	int32 numElements;
	void* data;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

enum RpUserDataFormat
{
	rpNAUSERDATAFORMAT,
	rpINTUSERDATA,
	rpREALUSERDATA,
	rpSTRINGUSERDATA,
	rpUSERDATAFORCEENUMSIZEINT = 0x7fffffff
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

RpGeometry* s_geom;
RpMorphTarget* s_tgt;
float32* s_alloc;
float32* s_vTemp;
float32* s_nTemp;
int32 s_numV;

void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale);
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale);
void iMorphOptimize(RpAtomic* model, int32 normals);
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender);

// FastS16weight4__FPfPPsPsif
// Start address: 0x1af420
void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
	// Line 547, Address: 0x1af420, Func Offset: 0
	// Line 548, Address: 0x1af424, Func Offset: 0x4
	// Line 549, Address: 0x1af428, Func Offset: 0x8
	// Line 550, Address: 0x1af42c, Func Offset: 0xc
	// Line 551, Address: 0x1af430, Func Offset: 0x10
	// Line 552, Address: 0x1af434, Func Offset: 0x14
	// Line 553, Address: 0x1af438, Func Offset: 0x18
	// Line 554, Address: 0x1af43c, Func Offset: 0x1c
	// Line 555, Address: 0x1af440, Func Offset: 0x20
	// Line 556, Address: 0x1af444, Func Offset: 0x24
	// Line 558, Address: 0x1af448, Func Offset: 0x28
	// Line 559, Address: 0x1af44c, Func Offset: 0x2c
	// Line 560, Address: 0x1af450, Func Offset: 0x30
	// Line 561, Address: 0x1af454, Func Offset: 0x34
	// Line 563, Address: 0x1af458, Func Offset: 0x38
	// Line 564, Address: 0x1af464, Func Offset: 0x44
	// Line 565, Address: 0x1af468, Func Offset: 0x48
	// Line 566, Address: 0x1af46c, Func Offset: 0x4c
	// Line 568, Address: 0x1af470, Func Offset: 0x50
	// Line 572, Address: 0x1af478, Func Offset: 0x58
	// Line 573, Address: 0x1af47c, Func Offset: 0x5c
	// Line 574, Address: 0x1af480, Func Offset: 0x60
	// Line 576, Address: 0x1af484, Func Offset: 0x64
	// Line 577, Address: 0x1af488, Func Offset: 0x68
	// Line 578, Address: 0x1af48c, Func Offset: 0x6c
	// Line 579, Address: 0x1af490, Func Offset: 0x70
	// Line 580, Address: 0x1af494, Func Offset: 0x74
	// Line 581, Address: 0x1af498, Func Offset: 0x78
	// Line 582, Address: 0x1af49c, Func Offset: 0x7c
	// Line 583, Address: 0x1af4a0, Func Offset: 0x80
	// Line 584, Address: 0x1af4a4, Func Offset: 0x84
	// Line 585, Address: 0x1af4a8, Func Offset: 0x88
	// Line 586, Address: 0x1af4ac, Func Offset: 0x8c
	// Line 587, Address: 0x1af4b0, Func Offset: 0x90
	// Line 588, Address: 0x1af4b4, Func Offset: 0x94
	// Line 589, Address: 0x1af4b8, Func Offset: 0x98
	// Line 590, Address: 0x1af4bc, Func Offset: 0x9c
	// Line 591, Address: 0x1af4c0, Func Offset: 0xa0
	// Line 592, Address: 0x1af4c4, Func Offset: 0xa4
	// Line 593, Address: 0x1af4c8, Func Offset: 0xa8
	// Line 594, Address: 0x1af4cc, Func Offset: 0xac
	// Line 595, Address: 0x1af4d0, Func Offset: 0xb0
	// Line 596, Address: 0x1af4d4, Func Offset: 0xb4
	// Line 597, Address: 0x1af4d8, Func Offset: 0xb8
	// Line 598, Address: 0x1af4dc, Func Offset: 0xbc
	// Line 599, Address: 0x1af4e0, Func Offset: 0xc0
	// Line 601, Address: 0x1af4e4, Func Offset: 0xc4
	// Line 602, Address: 0x1af4ec, Func Offset: 0xcc
	// Line 604, Address: 0x1af4f0, Func Offset: 0xd0
	// Line 605, Address: 0x1af4f4, Func Offset: 0xd4
	// Line 606, Address: 0x1af4fc, Func Offset: 0xdc
	// Line 607, Address: 0x1af500, Func Offset: 0xe0
	// Line 608, Address: 0x1af508, Func Offset: 0xe8
	// Line 610, Address: 0x1af50c, Func Offset: 0xec
	// Line 611, Address: 0x1af510, Func Offset: 0xf0
	// Line 613, Address: 0x1af514, Func Offset: 0xf4
	// Line 616, Address: 0x1af51c, Func Offset: 0xfc
	// Line 617, Address: 0x1af520, Func Offset: 0x100
	// Line 618, Address: 0x1af524, Func Offset: 0x104
	// Line 619, Address: 0x1af528, Func Offset: 0x108
	// Line 620, Address: 0x1af52c, Func Offset: 0x10c
	// Line 621, Address: 0x1af534, Func Offset: 0x114
	// Line 622, Address: 0x1af538, Func Offset: 0x118
	// Line 623, Address: 0x1af53c, Func Offset: 0x11c
	// Line 624, Address: 0x1af540, Func Offset: 0x120
	// Line 625, Address: 0x1af544, Func Offset: 0x124
	// Line 626, Address: 0x1af548, Func Offset: 0x128
	// Line 627, Address: 0x1af54c, Func Offset: 0x12c
	// Line 628, Address: 0x1af554, Func Offset: 0x134
	// Line 630, Address: 0x1af558, Func Offset: 0x138
	// Line 634, Address: 0x1af560, Func Offset: 0x140
	// Line 635, Address: 0x1af564, Func Offset: 0x144
	// Line 641, Address: 0x1af568, Func Offset: 0x148
	// Func End, Address: 0x1af570, Func Offset: 0x150
}

// FastS16weight2__FPfPPsPsif
// Start address: 0x1af570
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
	// Line 418, Address: 0x1af570, Func Offset: 0
	// Line 419, Address: 0x1af574, Func Offset: 0x4
	// Line 420, Address: 0x1af578, Func Offset: 0x8
	// Line 421, Address: 0x1af57c, Func Offset: 0xc
	// Line 422, Address: 0x1af580, Func Offset: 0x10
	// Line 424, Address: 0x1af584, Func Offset: 0x14
	// Line 425, Address: 0x1af588, Func Offset: 0x18
	// Line 426, Address: 0x1af58c, Func Offset: 0x1c
	// Line 427, Address: 0x1af590, Func Offset: 0x20
	// Line 429, Address: 0x1af594, Func Offset: 0x24
	// Line 430, Address: 0x1af5a0, Func Offset: 0x30
	// Line 432, Address: 0x1af5a4, Func Offset: 0x34
	// Line 435, Address: 0x1af5ac, Func Offset: 0x3c
	// Line 436, Address: 0x1af5b0, Func Offset: 0x40
	// Line 437, Address: 0x1af5b4, Func Offset: 0x44
	// Line 438, Address: 0x1af5b8, Func Offset: 0x48
	// Line 440, Address: 0x1af5bc, Func Offset: 0x4c
	// Line 441, Address: 0x1af5c0, Func Offset: 0x50
	// Line 442, Address: 0x1af5c4, Func Offset: 0x54
	// Line 443, Address: 0x1af5c8, Func Offset: 0x58
	// Line 444, Address: 0x1af5cc, Func Offset: 0x5c
	// Line 445, Address: 0x1af5d0, Func Offset: 0x60
	// Line 446, Address: 0x1af5d4, Func Offset: 0x64
	// Line 447, Address: 0x1af5d8, Func Offset: 0x68
	// Line 448, Address: 0x1af5dc, Func Offset: 0x6c
	// Line 449, Address: 0x1af5e0, Func Offset: 0x70
	// Line 450, Address: 0x1af5e4, Func Offset: 0x74
	// Line 451, Address: 0x1af5e8, Func Offset: 0x78
	// Line 452, Address: 0x1af5ec, Func Offset: 0x7c
	// Line 453, Address: 0x1af5f0, Func Offset: 0x80
	// Line 455, Address: 0x1af5f4, Func Offset: 0x84
	// Line 456, Address: 0x1af5fc, Func Offset: 0x8c
	// Line 458, Address: 0x1af600, Func Offset: 0x90
	// Line 459, Address: 0x1af604, Func Offset: 0x94
	// Line 460, Address: 0x1af60c, Func Offset: 0x9c
	// Line 461, Address: 0x1af610, Func Offset: 0xa0
	// Line 462, Address: 0x1af618, Func Offset: 0xa8
	// Line 464, Address: 0x1af61c, Func Offset: 0xac
	// Line 465, Address: 0x1af620, Func Offset: 0xb0
	// Line 467, Address: 0x1af624, Func Offset: 0xb4
	// Line 470, Address: 0x1af62c, Func Offset: 0xbc
	// Line 471, Address: 0x1af630, Func Offset: 0xc0
	// Line 472, Address: 0x1af634, Func Offset: 0xc4
	// Line 473, Address: 0x1af638, Func Offset: 0xc8
	// Line 474, Address: 0x1af63c, Func Offset: 0xcc
	// Line 475, Address: 0x1af644, Func Offset: 0xd4
	// Line 476, Address: 0x1af648, Func Offset: 0xd8
	// Line 477, Address: 0x1af64c, Func Offset: 0xdc
	// Line 478, Address: 0x1af650, Func Offset: 0xe0
	// Line 479, Address: 0x1af654, Func Offset: 0xe4
	// Line 480, Address: 0x1af658, Func Offset: 0xe8
	// Line 481, Address: 0x1af65c, Func Offset: 0xec
	// Line 482, Address: 0x1af664, Func Offset: 0xf4
	// Line 484, Address: 0x1af668, Func Offset: 0xf8
	// Line 488, Address: 0x1af670, Func Offset: 0x100
	// Line 489, Address: 0x1af674, Func Offset: 0x104
	// Line 495, Address: 0x1af678, Func Offset: 0x108
	// Func End, Address: 0x1af680, Func Offset: 0x110
}

// FastS16unpack__FPfPsif
// Start address: 0x1af680
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale)
{
	// Line 290, Address: 0x1af680, Func Offset: 0
	// Line 292, Address: 0x1af690, Func Offset: 0x10
	// Line 293, Address: 0x1af694, Func Offset: 0x14
	// Line 294, Address: 0x1af698, Func Offset: 0x18
	// Line 295, Address: 0x1af69c, Func Offset: 0x1c
	// Line 296, Address: 0x1af6a0, Func Offset: 0x20
	// Line 297, Address: 0x1af6a4, Func Offset: 0x24
	// Line 300, Address: 0x1af6ac, Func Offset: 0x2c
	// Line 301, Address: 0x1af6b0, Func Offset: 0x30
	// Line 302, Address: 0x1af6b4, Func Offset: 0x34
	// Line 303, Address: 0x1af6b8, Func Offset: 0x38
	// Line 305, Address: 0x1af6bc, Func Offset: 0x3c
	// Line 306, Address: 0x1af6c0, Func Offset: 0x40
	// Line 307, Address: 0x1af6c4, Func Offset: 0x44
	// Line 308, Address: 0x1af6c8, Func Offset: 0x48
	// Line 309, Address: 0x1af6cc, Func Offset: 0x4c
	// Line 310, Address: 0x1af6d0, Func Offset: 0x50
	// Line 311, Address: 0x1af6d4, Func Offset: 0x54
	// Line 312, Address: 0x1af6d8, Func Offset: 0x58
	// Line 313, Address: 0x1af6dc, Func Offset: 0x5c
	// Line 314, Address: 0x1af6e0, Func Offset: 0x60
	// Line 316, Address: 0x1af6e4, Func Offset: 0x64
	// Line 317, Address: 0x1af6ec, Func Offset: 0x6c
	// Line 319, Address: 0x1af6f0, Func Offset: 0x70
	// Line 320, Address: 0x1af6f4, Func Offset: 0x74
	// Line 321, Address: 0x1af6fc, Func Offset: 0x7c
	// Line 322, Address: 0x1af700, Func Offset: 0x80
	// Line 323, Address: 0x1af708, Func Offset: 0x88
	// Line 325, Address: 0x1af70c, Func Offset: 0x8c
	// Line 326, Address: 0x1af710, Func Offset: 0x90
	// Line 328, Address: 0x1af714, Func Offset: 0x94
	// Line 331, Address: 0x1af71c, Func Offset: 0x9c
	// Line 332, Address: 0x1af720, Func Offset: 0xa0
	// Line 333, Address: 0x1af724, Func Offset: 0xa4
	// Line 334, Address: 0x1af728, Func Offset: 0xa8
	// Line 335, Address: 0x1af72c, Func Offset: 0xac
	// Line 336, Address: 0x1af734, Func Offset: 0xb4
	// Line 337, Address: 0x1af738, Func Offset: 0xb8
	// Line 338, Address: 0x1af73c, Func Offset: 0xbc
	// Line 339, Address: 0x1af740, Func Offset: 0xc0
	// Line 340, Address: 0x1af744, Func Offset: 0xc4
	// Line 341, Address: 0x1af748, Func Offset: 0xc8
	// Line 342, Address: 0x1af74c, Func Offset: 0xcc
	// Line 343, Address: 0x1af754, Func Offset: 0xd4
	// Line 345, Address: 0x1af758, Func Offset: 0xd8
	// Line 349, Address: 0x1af760, Func Offset: 0xe0
	// Line 350, Address: 0x1af764, Func Offset: 0xe4
	// Line 356, Address: 0x1af768, Func Offset: 0xe8
	// Func End, Address: 0x1af770, Func Offset: 0xf0
}

// iMorphRender__FP8RpAtomicP11RwMatrixTagPPsPsUif
// Start address: 0x1af770
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale)
{
	// Line 243, Address: 0x1af770, Func Offset: 0
	// Line 246, Address: 0x1af778, Func Offset: 0x8
	// Line 249, Address: 0x1af784, Func Offset: 0x14
	// Line 250, Address: 0x1af78c, Func Offset: 0x1c
	// Line 251, Address: 0x1af794, Func Offset: 0x24
	// Line 253, Address: 0x1af798, Func Offset: 0x28
	// Func End, Address: 0x1af7a4, Func Offset: 0x34
}

// iMorphOptimize__FP8RpAtomici
// Start address: 0x1af7b0
void iMorphOptimize(RpAtomic* model, int32 normals)
{
	RpGeometry* geom;
	int32 usridx;
	RpUserDataArray* usr;
	// Line 209, Address: 0x1af7b0, Func Offset: 0
	// Line 218, Address: 0x1af7c4, Func Offset: 0x14
	// Line 211, Address: 0x1af7c8, Func Offset: 0x18
	// Line 219, Address: 0x1af7cc, Func Offset: 0x1c
	// Line 223, Address: 0x1af7dc, Func Offset: 0x2c
	// Line 226, Address: 0x1af80c, Func Offset: 0x5c
	// Line 227, Address: 0x1af818, Func Offset: 0x68
	// Line 228, Address: 0x1af828, Func Offset: 0x78
	// Func End, Address: 0x1af83c, Func Offset: 0x8c
}

// MorphCommon__FP8RpAtomicP11RwMatrixTagPPsPsUifi
// Start address: 0x1af840
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender)
{
	uint32 i;
	uint32 a;
	int16 wa[4];
	int16* va[4];
	int32 wsum;
	RwV3d* vold;
	RwV3d* nold;
	int32 lockMode;
	RpUserDataArray* usr;
	DirtyMorph* dm;
	// Line 40, Address: 0x1af840, Func Offset: 0
	// Line 44, Address: 0x1af85c, Func Offset: 0x1c
	// Line 40, Address: 0x1af860, Func Offset: 0x20
	// Line 53, Address: 0x1af870, Func Offset: 0x30
	// Line 40, Address: 0x1af874, Func Offset: 0x34
	// Line 48, Address: 0x1af890, Func Offset: 0x50
	// Line 49, Address: 0x1af89c, Func Offset: 0x5c
	// Line 50, Address: 0x1af8a4, Func Offset: 0x64
	// Line 51, Address: 0x1af8ac, Func Offset: 0x6c
	// Line 53, Address: 0x1af8b0, Func Offset: 0x70
	// Line 54, Address: 0x1af8c4, Func Offset: 0x84
	// Line 53, Address: 0x1af8c8, Func Offset: 0x88
	// Line 54, Address: 0x1af8cc, Func Offset: 0x8c
	// Line 55, Address: 0x1af8d8, Func Offset: 0x98
	// Line 56, Address: 0x1af8dc, Func Offset: 0x9c
	// Line 61, Address: 0x1af8ec, Func Offset: 0xac
	// Line 59, Address: 0x1af8f4, Func Offset: 0xb4
	// Line 60, Address: 0x1af8f8, Func Offset: 0xb8
	// Line 61, Address: 0x1af8fc, Func Offset: 0xbc
	// Line 62, Address: 0x1af90c, Func Offset: 0xcc
	// Line 63, Address: 0x1af920, Func Offset: 0xe0
	// Line 66, Address: 0x1af924, Func Offset: 0xe4
	// Line 63, Address: 0x1af928, Func Offset: 0xe8
	// Line 68, Address: 0x1af940, Func Offset: 0x100
	// Line 66, Address: 0x1af948, Func Offset: 0x108
	// Line 68, Address: 0x1af94c, Func Offset: 0x10c
	// Line 72, Address: 0x1af954, Func Offset: 0x114
	// Line 73, Address: 0x1af964, Func Offset: 0x124
	// Line 74, Address: 0x1af96c, Func Offset: 0x12c
	// Line 77, Address: 0x1af970, Func Offset: 0x130
	// Line 78, Address: 0x1af97c, Func Offset: 0x13c
	// Line 79, Address: 0x1af988, Func Offset: 0x148
	// Line 80, Address: 0x1af9a0, Func Offset: 0x160
	// Line 79, Address: 0x1af9a4, Func Offset: 0x164
	// Line 82, Address: 0x1af9a8, Func Offset: 0x168
	// Line 83, Address: 0x1af9b0, Func Offset: 0x170
	// Line 84, Address: 0x1af9d0, Func Offset: 0x190
	// Line 85, Address: 0x1af9e0, Func Offset: 0x1a0
	// Line 86, Address: 0x1af9f8, Func Offset: 0x1b8
	// Line 85, Address: 0x1af9fc, Func Offset: 0x1bc
	// Line 86, Address: 0x1afa00, Func Offset: 0x1c0
	// Line 87, Address: 0x1afa04, Func Offset: 0x1c4
	// Line 90, Address: 0x1afa08, Func Offset: 0x1c8
	// Line 94, Address: 0x1afa44, Func Offset: 0x204
	// Line 95, Address: 0x1afa60, Func Offset: 0x220
	// Line 97, Address: 0x1afa80, Func Offset: 0x240
	// Line 95, Address: 0x1afa84, Func Offset: 0x244
	// Line 97, Address: 0x1afa88, Func Offset: 0x248
	// Line 95, Address: 0x1afa8c, Func Offset: 0x24c
	// Line 97, Address: 0x1afa94, Func Offset: 0x254
	// Line 99, Address: 0x1afaa0, Func Offset: 0x260
	// Line 101, Address: 0x1afaa8, Func Offset: 0x268
	// Line 102, Address: 0x1afab4, Func Offset: 0x274
	// Line 104, Address: 0x1afac0, Func Offset: 0x280
	// Line 105, Address: 0x1afac8, Func Offset: 0x288
	// Line 106, Address: 0x1afad8, Func Offset: 0x298
	// Line 111, Address: 0x1afae0, Func Offset: 0x2a0
	// Line 113, Address: 0x1afae4, Func Offset: 0x2a4
	// Line 114, Address: 0x1afb10, Func Offset: 0x2d0
	// Line 115, Address: 0x1afb14, Func Offset: 0x2d4
	// Line 114, Address: 0x1afb1c, Func Offset: 0x2dc
	// Line 115, Address: 0x1afb20, Func Offset: 0x2e0
	// Line 113, Address: 0x1afbdc, Func Offset: 0x39c
	// Line 115, Address: 0x1afbe0, Func Offset: 0x3a0
	// Line 116, Address: 0x1afbe4, Func Offset: 0x3a4
	// Line 115, Address: 0x1afbec, Func Offset: 0x3ac
	// Line 116, Address: 0x1afc04, Func Offset: 0x3c4
	// Line 119, Address: 0x1afc10, Func Offset: 0x3d0
	// Line 120, Address: 0x1afc1c, Func Offset: 0x3dc
	// Line 123, Address: 0x1afc20, Func Offset: 0x3e0
	// Line 124, Address: 0x1afc2c, Func Offset: 0x3ec
	// Line 125, Address: 0x1afc30, Func Offset: 0x3f0
	// Line 124, Address: 0x1afc34, Func Offset: 0x3f4
	// Line 129, Address: 0x1afc38, Func Offset: 0x3f8
	// Line 131, Address: 0x1afc44, Func Offset: 0x404
	// Line 134, Address: 0x1afc4c, Func Offset: 0x40c
	// Line 136, Address: 0x1afc58, Func Offset: 0x418
	// Line 138, Address: 0x1afc74, Func Offset: 0x434
	// Line 139, Address: 0x1afc9c, Func Offset: 0x45c
	// Line 142, Address: 0x1afca0, Func Offset: 0x460
	// Line 145, Address: 0x1afcc0, Func Offset: 0x480
	// Line 148, Address: 0x1afcc8, Func Offset: 0x488
	// Line 150, Address: 0x1afcd0, Func Offset: 0x490
	// Line 151, Address: 0x1afce8, Func Offset: 0x4a8
	// Line 152, Address: 0x1afcf8, Func Offset: 0x4b8
	// Line 158, Address: 0x1afd20, Func Offset: 0x4e0
	// Line 159, Address: 0x1afd58, Func Offset: 0x518
	// Line 160, Address: 0x1afd90, Func Offset: 0x550
	// Line 162, Address: 0x1afdb0, Func Offset: 0x570
	// Line 163, Address: 0x1afdbc, Func Offset: 0x57c
	// Line 164, Address: 0x1afdd0, Func Offset: 0x590
	// Line 163, Address: 0x1afdd4, Func Offset: 0x594
	// Line 164, Address: 0x1afdec, Func Offset: 0x5ac
	// Line 166, Address: 0x1afee8, Func Offset: 0x6a8
	// Line 167, Address: 0x1aff20, Func Offset: 0x6e0
	// Line 168, Address: 0x1aff58, Func Offset: 0x718
	// Line 172, Address: 0x1aff78, Func Offset: 0x738
	// Line 173, Address: 0x1aff80, Func Offset: 0x740
	// Line 174, Address: 0x1aff88, Func Offset: 0x748
	// Line 175, Address: 0x1aff94, Func Offset: 0x754
	// Line 177, Address: 0x1affa0, Func Offset: 0x760
	// Line 178, Address: 0x1affa8, Func Offset: 0x768
	// Line 179, Address: 0x1affb4, Func Offset: 0x774
	// Line 181, Address: 0x1affc0, Func Offset: 0x780
	// Line 182, Address: 0x1affcc, Func Offset: 0x78c
	// Line 184, Address: 0x1affdc, Func Offset: 0x79c
	// Line 183, Address: 0x1affe0, Func Offset: 0x7a0
	// Line 185, Address: 0x1affe4, Func Offset: 0x7a4
	// Line 187, Address: 0x1afff0, Func Offset: 0x7b0
	// Line 186, Address: 0x1afff4, Func Offset: 0x7b4
	// Line 187, Address: 0x1afff8, Func Offset: 0x7b8
	// Line 188, Address: 0x1afffc, Func Offset: 0x7bc
	// Line 189, Address: 0x1b0000, Func Offset: 0x7c0
	// Line 192, Address: 0x1b0008, Func Offset: 0x7c8
	// Line 195, Address: 0x1b0014, Func Offset: 0x7d4
	// Line 196, Address: 0x1b0018, Func Offset: 0x7d8
	// Line 199, Address: 0x1b0028, Func Offset: 0x7e8
	// Func End, Address: 0x1b006c, Func Offset: 0x82c
}

