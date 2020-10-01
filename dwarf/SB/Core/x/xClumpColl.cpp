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
typedef u32(*type_1)(void*, void*, u32);
typedef s32(*type_2)(xClumpCollBSPTriangle*, void*);
typedef void(*type_3)(RxPipelineNode*);
typedef RpAtomic*(*type_4)(RpAtomic*);
typedef s32(*type_6)(xClumpCollBSPTriangle*, void*);
typedef s32(*type_7)(void*, void*, u32);
typedef s32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef s32(*type_9)(void*, u32);
typedef s32(*type_10)(xClumpCollBSPTriangle*, void*);
typedef RpWorldSector*(*type_11)(RpIntersection*, RpWorldSector*, void*);
typedef RpCollisionTriangle*(*type_13)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef u32(*type_14)(RxPipelineNode*, u32, u32, void*);
typedef RpAtomic*(*type_15)(RpIntersection*, RpWorldSector*, RpAtomic*, f32, void*);
typedef s32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_18)(void*);
typedef s32(*type_19)(RxNodeDefinition*);
typedef void(*type_21)(RxNodeDefinition*);
typedef s32(*type_22)(RxPipelineNode*);
typedef s32(*type_25)(xClumpCollBSPTriangle*, void*);
typedef RpClump*(*type_37)(RpClump*, void*);
typedef void(*type_41)(RwResEntry*);
typedef RpAtomic*(*type_44)(RpAtomic*, void*);

typedef u8 type_5[1];
typedef RwTexCoords* type_12[8];
typedef RwV3d* type_17[3];
typedef nodeInfo type_20[33];
typedef RwLine type_23[33];
typedef u32 type_24[3];
typedef nodeInfo type_26[33];
typedef RwLine type_27[33];
typedef RwResEntry* type_28[1];
typedef nodeInfo type_29[33];
typedef u32 type_30[4];
typedef u16 type_31[3];
typedef RwV3d type_32[3];
typedef nodeInfo type_33[33];
typedef u32 type_34[4096];
typedef rwPS2AllClusterQuickInfo type_35[12];
typedef rwPS2AllFieldRec type_36[12];
typedef RwTexCoords* type_38[8];
typedef s8 type_39[32];
typedef s8 type_40[32];
typedef u16 type_42[3];
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
	f32 dydx;
	f32 dzdx;
	f32 dxdy;
	f32 dzdy;
	f32 dxdz;
	f32 dydz;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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

struct xClumpCollBSPTriangle
{
	_class v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
};

struct RpTriangle
{
	type_42 vertIndex;
	s16 matIndex;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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
	u32 filterAddressing;
	s32 refCount;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	s32 index;
	type_17 vertices;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
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
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_41 destroyNotify;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	u32 stride;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	s32 position;
	RwStreamUnion Type;
	s32 rwOwned;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	f32 recipRadius;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct CallBackParam
{
	RpIntersection* intersection;
	IntersectionCallBack u;
	void* data;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	u16 renderFrame;
	u16 pad;
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
	u32 lengthOfMeshesArray;
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
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct RpMesh
{
	u16* indices;
	u32 numIndices;
	RpMaterial* material;
};

struct rwPS2AllResEntryHeader
{
	s32 refCnt;
	s32 clrCnt;
	<unknown type (0xa510)>* data;
	u32 numVerts;
	u32 objIdentifier;
	u32 meshIdentifier;
	s32 batchSize;
	s32 numBatches;
	s32 batchesPerTag;
	s32 morphStart;
	s32 morphFinish;
	s32 morphNum;
	type_35 clquickinfo;
	type_36 fieldRec;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	u16 matIndex;
	type_31 vertIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

union RwSplitBits
{
	f32 nReal;
	s32 nInt;
	u32 nUInt;
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

struct RwStreamMemory
{
	u32 position;
	u32 nSize;
	u8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
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
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_43 clusters;
};

struct rwPS2AllFieldRec
{
	s32 numVerts;
	s32 morphNumVerts;
	s32 dataoffset;
	s32 morphDataoffset;
	s16 skip;
	s16 morphSkip;
	s16 reverse;
	u8 vuoffset;
	type_5 pad;
};

struct RwLinkList
{
	RwLLLink link;
};

struct nodeInfo
{
	u32 type;
	u32 index;
};

u8 xClumpColl_FilterFlags;
type_25 LeafNodeBoxPolyIntersect;
type_10 LeafNodeSpherePolyIntersect;
type_6 LeafNodeLinePolyIntersect;
type_44 AddAtomicCB;
s32 rwPip2GeometryOffset;
s32 rwPip2AtomicOffset;
type_34 ourGlobals;

s32 FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, f32* distance, RwV3d* vc);
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, type_13 callBack, void* data);
s32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
s32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
s32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, f32 radius, xClumpCollV3dGradient* grad, type_2 callBack, void* data);
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, type_2 callBack, void* data);
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, type_2 callBack, void* data);
void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump);
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data);
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data);

// FastIntersectSphereTriangle__FP8RwSphereP5RwV3dP5RwV3dP5RwV3dP5RwV3dPfP5RwV3d
// Start address: 0x301c40
s32 FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, f32* distance, RwV3d* vc)
{
	f32 nDotN;
	f32 distToPlane;
	f32 sphereRadiusSquared;
	f32 length2;
	f32 factor;
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
s32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v1;
	RwV3d* v2;
	RpCollisionTriangle collisionTri;
	f32 lengthSq;
}

// LeafNodeSpherePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302660
s32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	TestSphere* testSphere;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	f32 distance;
	RpCollisionTriangle collisionTri;
	type_32 vc;
}

// LeafNodeLinePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302860
s32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyLineTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	f32 distance;
	s32 result;
	RpCollisionTriangle collisionTri;
	RwV3d vTmp;
	RwV3d vTmp2;
	f32 recipLength;
	f32 lengthSq;
	f32 _result;
}

// xClumpColl_ForAllCapsuleLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLinefP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x302c00
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, f32 radius, xClumpCollV3dGradient* grad, type_2 callBack, void* data)
{
	s32 nStack;
	type_20 nodeStack;
	type_23 lineStack;
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	f32 delta;
	f32 delta;
	f32 delta;
	f32 delta;
}

// xClumpColl_ForAllLineLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLineP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x303610
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, type_2 callBack, void* data)
{
	s32 nStack;
	type_26 nodeStack;
	type_27 lineStack;
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	f32 delta;
	f32 delta;
	f32 delta;
	f32 delta;
}

// xClumpColl_ForAllBoxLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwBBoxPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x304010
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, type_2 callBack, void* data)
{
	s32 nStack;
	type_33 nodeStack;
	xClumpCollBSPBranchNode* branch;
}

// xClumpColl_InstancePointers__FP17xClumpCollBSPTreeP7RpClump
// Start address: 0x304150
void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump)
{
	s32 i;
	s32 numAtom;
	TempAtomicList* atomicList;
	TempAtomicList* iterList;
	TempAtomicList* alist;
	s32 vertIndex;
	s32 numMeshes;
	s32 meshIndex;
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
	u32* header;
	u32 numBranchNodes;
	u32 numTriangles;
	xClumpCollBSPTree* tree;
}

