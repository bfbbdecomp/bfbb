typedef struct RwLine;
typedef struct RwObjectHasFrame;
typedef struct RpIntersection;
typedef struct xClumpCollV3dGradient;
typedef struct RpClump;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPTree;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct xClumpCollBSPTriangle;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpMaterial;
typedef struct RxPipelineNodeParam;
typedef union IntersectionCallBack;
typedef struct RxHeap;
typedef struct RpTriangle;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct RwTexture;
typedef struct RpCollisionTriangle;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct RpMeshHeader;
typedef struct TempAtomicList;
typedef struct RwResEntry;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct RwStream;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMorphTarget;
typedef struct PolyLineTestParam;
typedef struct TestSphere;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwSurfaceProperties;
typedef struct RwSphere;
typedef struct CallBackParam;
typedef struct xClumpCollBSPBranchNode;
typedef struct PolyTestParam;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef union RwStreamUnion;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum RwStreamType;
typedef struct RpWorldSector;
typedef struct RpVertexNormal;
typedef union _class;
typedef struct RpAtomic;
typedef enum rxEmbeddedPacketState;
typedef struct RwMeshCache;
typedef enum RxClusterForcePresent;
typedef struct RpInterpolator;
typedef struct RpMesh;
typedef struct rwPS2AllResEntryHeader;
typedef struct RxClusterDefinition;
typedef enum RwStreamAccessType;
typedef struct RpPolygon;
typedef struct RpMaterialList;
typedef union RwSplitBits;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct RpGeometry;
typedef enum RpIntersectType;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef union RwStreamFile;
typedef struct RxCluster;
typedef union RpIntersectData;
typedef struct RxPacket;
typedef struct rwPS2AllFieldRec;
typedef struct RwLinkList;
typedef struct nodeInfo;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef uint32(*type_1)(void*, void*, uint32);
typedef int32(*type_2)(xClumpCollBSPTriangle*, void*);
typedef void(*type_3)(RxPipelineNode*);
typedef RpAtomic*(*type_4)(RpAtomic*);
typedef int32(*type_6)(xClumpCollBSPTriangle*, void*);
typedef int32(*type_7)(void*, void*, uint32);
typedef int32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_9)(void*, uint32);
typedef int32(*type_10)(xClumpCollBSPTriangle*, void*);
typedef RpWorldSector*(*type_11)(RpIntersection*, RpWorldSector*, void*);
typedef RpCollisionTriangle*(*type_13)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef uint32(*type_14)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_15)(RpIntersection*, RpWorldSector*, RpAtomic*, float32, void*);
typedef int32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_18)(void*);
typedef int32(*type_19)(RxNodeDefinition*);
typedef void(*type_21)(RxNodeDefinition*);
typedef int32(*type_22)(RxPipelineNode*);
typedef int32(*type_25)(xClumpCollBSPTriangle*, void*);
typedef RpClump*(*type_37)(RpClump*, void*);
typedef void(*type_41)(RwResEntry*);
typedef RpAtomic*(*type_44)(RpAtomic*, void*);

typedef uint8 type_5[1];
typedef RwTexCoords* type_12[8];
typedef RwV3d* type_17[3];
typedef nodeInfo type_20[33];
typedef RwLine type_23[33];
typedef uint32 type_24[3];
typedef nodeInfo type_26[33];
typedef RwLine type_27[33];
typedef RwResEntry* type_28[1];
typedef nodeInfo type_29[33];
typedef uint32 type_30[4];
typedef uint16 type_31[3];
typedef RwV3d type_32[3];
typedef nodeInfo type_33[33];
typedef uint32 type_34[4096];
typedef rwPS2AllClusterQuickInfo type_35[12];
typedef rwPS2AllFieldRec type_36[12];
typedef RwTexCoords* type_38[8];
typedef int8 type_39[32];
typedef int8 type_40[32];
typedef uint16 type_42[3];
typedef RxCluster type_43[1];

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

struct xClumpCollV3dGradient
{
	float32 dydx;
	float32 dzdx;
	float32 dxdy;
	float32 dzdy;
	float32 dxdz;
	float32 dydz;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_37 callback;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

union IntersectionCallBack
{
	type_11 sectorCB;
	type_13 worldCB;
	type_15 atomicCB;
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

struct RpTriangle
{
	type_42 vertIndex;
	int16 matIndex;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_39 name;
	type_40 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	type_17 vertices;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_30 pad;
};

struct RwStreamCustom
{
	type_18 sfnclose;
	type_1 sfnread;
	type_7 sfnwrite;
	type_9 sfnskip;
	void* data;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct TempAtomicList
{
	RpAtomic* atomic;
	RpGeometry* geom;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_41 destroyNotify;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	uint32 stride;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct PolyLineTestParam
{
	RwV3d start;
	RpWorldSector* worldSector;
	RwV3d delta;
	xClumpCollV3dGradient grad;
	RwLine line;
	CallBackParam* cbParam;
};

struct TestSphere
{
	RwSphere* sphere;
	float32 recipRadius;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct CallBackParam
{
	RpIntersection* intersection;
	IntersectionCallBack u;
	void* data;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct PolyTestParam
{
	RwBBox bbox;
	RpWorldSector* worldSector;
	void* leafTestData;
	CallBackParam* cbParam;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
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

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_38 texCoords;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

union _class
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_4 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	type_28 meshes;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
};

struct rwPS2AllResEntryHeader
{
	int32 refCnt;
	int32 clrCnt;
	<unknown type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	type_35 clquickinfo;
	type_36 fieldRec;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	type_31 vertIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

union RwSplitBits
{
	float32 nReal;
	int32 nInt;
	uint32 nUInt;
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

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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
	type_12 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RxNodeMethods
{
	type_16 nodeBody;
	type_19 nodeInit;
	type_21 nodeTerm;
	type_22 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_14 configMsgHandler;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
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

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_43 clusters;
};

struct rwPS2AllFieldRec
{
	int32 numVerts;
	int32 morphNumVerts;
	int32 dataoffset;
	int32 morphDataoffset;
	int16 skip;
	int16 morphSkip;
	int16 reverse;
	uint8 vuoffset;
	type_5 pad;
};

struct RwLinkList
{
	RwLLLink link;
};

struct nodeInfo
{
	uint32 type;
	uint32 index;
};

uint8 xClumpColl_FilterFlags;
type_25 LeafNodeBoxPolyIntersect;
type_10 LeafNodeSpherePolyIntersect;
type_6 LeafNodeLinePolyIntersect;
type_44 AddAtomicCB;
int32 rwPip2GeometryOffset;
int32 rwPip2AtomicOffset;
type_34 ourGlobals;

int32 FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance, RwV3d* vc);
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, type_13 callBack, void* data);
int32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float32 radius, xClumpCollV3dGradient* grad, type_2 callBack, void* data);
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, type_2 callBack, void* data);
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, type_2 callBack, void* data);
void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump);
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data);
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data);

// FastIntersectSphereTriangle__FP8RwSphereP5RwV3dP5RwV3dP5RwV3dP5RwV3dPfP5RwV3d
// Start address: 0x301c40
int32 FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance, RwV3d* vc)
{
	float32 nDotN;
	float32 distToPlane;
	float32 sphereRadiusSquared;
	float32 length2;
	float32 factor;
}

// xClumpColl_ForAllIntersections__FP17xClumpCollBSPTreeP14RpIntersectionPFP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv_P19RpCollisionTrianglePv
// Start address: 0x3020f0
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, type_13 callBack, void* data)
{
	CallBackParam cbParam;
	PolyLineTestParam isData;
	PolyTestParam isData;
	TestSphere testSphere;
	PolyTestParam isData;
}

// LeafNodeBoxPolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302430
int32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v1;
	RwV3d* v2;
	RpCollisionTriangle collisionTri;
	float32 lengthSq;
}

// LeafNodeSpherePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302660
int32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	TestSphere* testSphere;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	float32 distance;
	RpCollisionTriangle collisionTri;
	type_32 vc;
}

// LeafNodeLinePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302860
int32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyLineTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	float32 distance;
	int32 result;
	RpCollisionTriangle collisionTri;
	RwV3d vTmp;
	RwV3d vTmp2;
	float32 recipLength;
	float32 lengthSq;
	float32 _result;
}

// xClumpColl_ForAllCapsuleLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLinefP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x302c00
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float32 radius, xClumpCollV3dGradient* grad, type_2 callBack, void* data)
{
	int32 nStack;
	type_20 nodeStack;
	type_23 lineStack;
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	float32 delta;
	float32 delta;
	float32 delta;
	float32 delta;
}

// xClumpColl_ForAllLineLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLineP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x303610
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, type_2 callBack, void* data)
{
	int32 nStack;
	type_26 nodeStack;
	type_27 lineStack;
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	float32 delta;
	float32 delta;
	float32 delta;
	float32 delta;
}

// xClumpColl_ForAllBoxLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwBBoxPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x304010
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, type_2 callBack, void* data)
{
	int32 nStack;
	type_33 nodeStack;
	xClumpCollBSPBranchNode* branch;
}

// xClumpColl_InstancePointers__FP17xClumpCollBSPTreeP7RpClump
// Start address: 0x304150
void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump)
{
	int32 i;
	int32 numAtom;
	TempAtomicList* atomicList;
	TempAtomicList* iterList;
	TempAtomicList* alist;
	int32 vertIndex;
	int32 numMeshes;
	int32 meshIndex;
	RpMesh* mesh;
}

// AddAtomicCB__FP8RpAtomicPv
// Start address: 0x3042c0
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data)
{
	TempAtomicList** tmpList;
}

// xClumpColl_StaticBufferInit__FPvUi
// Start address: 0x304400
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data)
{
	uint32* header;
	uint32 numBranchNodes;
	uint32 numTriangles;
	xClumpCollBSPTree* tree;
}

