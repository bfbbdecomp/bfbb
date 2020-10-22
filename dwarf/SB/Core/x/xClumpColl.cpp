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
typedef struct IntersectionCallBack;
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
typedef struct RwStreamUnion;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum RwStreamType;
typedef struct RpWorldSector;
typedef struct RpVertexNormal;
typedef struct _class;
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
typedef struct RwSplitBits;
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
typedef struct RwStreamFile;
typedef struct RxCluster;
typedef struct RpIntersectData;
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	RpClump*(*callback)(RpClump*, void*);
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

struct IntersectionCallBack
{
	union
	{
		RpWorldSector*(*sectorCB)(RpIntersection*, RpWorldSector*, void*);
		RpCollisionTriangle*(*worldCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
		RpAtomic*(*atomicCB)(RpIntersection*, RpWorldSector*, RpAtomic*, float32, void*);
	};
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
	uint16 vertIndex[3];
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
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
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
	uint32 pad[4];
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
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
	void(*destroyNotify)(RwResEntry*);
};

struct rwPS2AllClusterQuickInfo
{
	<unknown fundamental type (0xa510)>* data;
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

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _class
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	RwResEntry* meshes[1];
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
	<unknown fundamental type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	rwPS2AllClusterQuickInfo clquickinfo[12];
	rwPS2AllFieldRec fieldRec[12];
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
	uint16 vertIndex[3];
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwSplitBits
{
	union
	{
		float32 nReal;
		int32 nInt;
		uint32 nUInt;
	};
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
	RwTexCoords* texCoords[8];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
};

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
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

struct RpIntersectData
{
	union
	{
		RwLine line;
		RwV3d point;
		RwSphere sphere;
		RwBBox box;
		void* object;
	};
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
	uint8 pad[1];
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
int32(*LeafNodeBoxPolyIntersect)(xClumpCollBSPTriangle*, void*);
int32(*LeafNodeSpherePolyIntersect)(xClumpCollBSPTriangle*, void*);
int32(*LeafNodeLinePolyIntersect)(xClumpCollBSPTriangle*, void*);
RpAtomic*(*AddAtomicCB)(RpAtomic*, void*);
int32 rwPip2GeometryOffset;
int32 rwPip2AtomicOffset;
uint32 ourGlobals[4096];

int32 FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance, RwV3d* vc);
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*), void* data);
int32 LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int32 LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int32 LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float32 radius, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data);
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data);
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data);
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
	// Line 1467, Address: 0x301c40, Func Offset: 0
	// Line 1445, Address: 0x301c48, Func Offset: 0x8
	// Line 1467, Address: 0x301c4c, Func Offset: 0xc
	// Line 1468, Address: 0x301c50, Func Offset: 0x10
	// Line 1467, Address: 0x301c58, Func Offset: 0x18
	// Line 1468, Address: 0x301c64, Func Offset: 0x24
	// Line 1467, Address: 0x301c68, Func Offset: 0x28
	// Line 1468, Address: 0x301c6c, Func Offset: 0x2c
	// Line 1467, Address: 0x301c74, Func Offset: 0x34
	// Line 1468, Address: 0x301c78, Func Offset: 0x38
	// Line 1469, Address: 0x301c7c, Func Offset: 0x3c
	// Line 1472, Address: 0x301cac, Func Offset: 0x6c
	// Line 1471, Address: 0x301cb4, Func Offset: 0x74
	// Line 1472, Address: 0x301cc4, Func Offset: 0x84
	// Line 1475, Address: 0x301cd0, Func Offset: 0x90
	// Line 1479, Address: 0x301cd8, Func Offset: 0x98
	// Line 1480, Address: 0x301d10, Func Offset: 0xd0
	// Line 1483, Address: 0x301d34, Func Offset: 0xf4
	// Line 1486, Address: 0x301d60, Func Offset: 0x120
	// Line 1489, Address: 0x301d80, Func Offset: 0x140
	// Line 1494, Address: 0x301d88, Func Offset: 0x148
	// Line 1497, Address: 0x301d94, Func Offset: 0x154
	// Line 1500, Address: 0x301da4, Func Offset: 0x164
	// Line 1501, Address: 0x301db4, Func Offset: 0x174
	// Line 1504, Address: 0x301dc0, Func Offset: 0x180
	// Line 1506, Address: 0x301dd4, Func Offset: 0x194
	// Line 1507, Address: 0x301de4, Func Offset: 0x1a4
	// Line 1510, Address: 0x301df0, Func Offset: 0x1b0
	// Line 1512, Address: 0x301e04, Func Offset: 0x1c4
	// Line 1513, Address: 0x301e14, Func Offset: 0x1d4
	// Line 1516, Address: 0x301e20, Func Offset: 0x1e0
	// Line 1519, Address: 0x301e28, Func Offset: 0x1e8
	// Line 1521, Address: 0x301e34, Func Offset: 0x1f4
	// Line 1524, Address: 0x301e40, Func Offset: 0x200
	// Line 1527, Address: 0x301e74, Func Offset: 0x234
	// Line 1529, Address: 0x301e7c, Func Offset: 0x23c
	// Line 1533, Address: 0x301e80, Func Offset: 0x240
	// Line 1536, Address: 0x301eb4, Func Offset: 0x274
	// Line 1539, Address: 0x301ebc, Func Offset: 0x27c
	// Line 1542, Address: 0x301ec0, Func Offset: 0x280
	// Line 1545, Address: 0x301ecc, Func Offset: 0x28c
	// Line 1548, Address: 0x301f00, Func Offset: 0x2c0
	// Line 1554, Address: 0x301f08, Func Offset: 0x2c8
	// Line 1557, Address: 0x301f3c, Func Offset: 0x2fc
	// Line 1563, Address: 0x301f44, Func Offset: 0x304
	// Line 1564, Address: 0x301f50, Func Offset: 0x310
	// Line 1563, Address: 0x301f5c, Func Offset: 0x31c
	// Line 1564, Address: 0x301f60, Func Offset: 0x320
	// Line 1567, Address: 0x301f78, Func Offset: 0x338
	// Line 1568, Address: 0x301f84, Func Offset: 0x344
	// Line 1570, Address: 0x301f90, Func Offset: 0x350
	// Line 1572, Address: 0x301fa0, Func Offset: 0x360
	// Line 1576, Address: 0x301fc4, Func Offset: 0x384
	// Line 1580, Address: 0x301fcc, Func Offset: 0x38c
	// Line 1582, Address: 0x301fd8, Func Offset: 0x398
	// Line 1580, Address: 0x301fe4, Func Offset: 0x3a4
	// Line 1582, Address: 0x301fe8, Func Offset: 0x3a8
	// Line 1585, Address: 0x302000, Func Offset: 0x3c0
	// Line 1586, Address: 0x30200c, Func Offset: 0x3cc
	// Line 1588, Address: 0x302018, Func Offset: 0x3d8
	// Line 1590, Address: 0x302028, Func Offset: 0x3e8
	// Line 1594, Address: 0x30204c, Func Offset: 0x40c
	// Line 1598, Address: 0x302054, Func Offset: 0x414
	// Line 1599, Address: 0x302064, Func Offset: 0x424
	// Line 1602, Address: 0x302088, Func Offset: 0x448
	// Line 1603, Address: 0x30208c, Func Offset: 0x44c
	// Line 1602, Address: 0x302090, Func Offset: 0x450
	// Line 1603, Address: 0x302098, Func Offset: 0x458
	// Line 1605, Address: 0x3020a0, Func Offset: 0x460
	// Line 1607, Address: 0x3020b0, Func Offset: 0x470
	// Line 1611, Address: 0x3020d8, Func Offset: 0x498
	// Line 1615, Address: 0x3020e0, Func Offset: 0x4a0
	// Line 1616, Address: 0x3020e8, Func Offset: 0x4a8
	// Func End, Address: 0x3020f0, Func Offset: 0x4b0
}

// xClumpColl_ForAllIntersections__FP17xClumpCollBSPTreeP14RpIntersectionPFP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv_P19RpCollisionTrianglePv
// Start address: 0x3020f0
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*), void* data)
{
	CallBackParam cbParam;
	PolyLineTestParam isData;
	PolyTestParam isData;
	TestSphere testSphere;
	PolyTestParam isData;
	// Line 1347, Address: 0x3020f0, Func Offset: 0
	// Line 1359, Address: 0x3020f4, Func Offset: 0x4
	// Line 1347, Address: 0x3020f8, Func Offset: 0x8
	// Line 1356, Address: 0x302100, Func Offset: 0x10
	// Line 1357, Address: 0x302104, Func Offset: 0x14
	// Line 1355, Address: 0x302108, Func Offset: 0x18
	// Line 1359, Address: 0x30210c, Func Offset: 0x1c
	// Line 1364, Address: 0x302140, Func Offset: 0x50
	// Line 1372, Address: 0x302148, Func Offset: 0x58
	// Line 1373, Address: 0x302150, Func Offset: 0x60
	// Line 1374, Address: 0x302158, Func Offset: 0x68
	// Line 1375, Address: 0x30215c, Func Offset: 0x6c
	// Line 1378, Address: 0x302164, Func Offset: 0x74
	// Line 1372, Address: 0x302168, Func Offset: 0x78
	// Line 1373, Address: 0x30217c, Func Offset: 0x8c
	// Line 1374, Address: 0x3021ac, Func Offset: 0xbc
	// Line 1375, Address: 0x3021b0, Func Offset: 0xc0
	// Line 1378, Address: 0x3021e4, Func Offset: 0xf4
	// Line 1381, Address: 0x30229c, Func Offset: 0x1ac
	// Line 1378, Address: 0x3022a8, Func Offset: 0x1b8
	// Line 1381, Address: 0x3022ac, Func Offset: 0x1bc
	// Line 1378, Address: 0x3022b0, Func Offset: 0x1c0
	// Line 1381, Address: 0x3022bc, Func Offset: 0x1cc
	// Line 1387, Address: 0x3022c4, Func Offset: 0x1d4
	// Line 1396, Address: 0x3022cc, Func Offset: 0x1dc
	// Line 1400, Address: 0x3022d0, Func Offset: 0x1e0
	// Line 1396, Address: 0x3022d4, Func Offset: 0x1e4
	// Line 1406, Address: 0x3022d8, Func Offset: 0x1e8
	// Line 1400, Address: 0x3022dc, Func Offset: 0x1ec
	// Line 1396, Address: 0x3022e0, Func Offset: 0x1f0
	// Line 1402, Address: 0x3022f4, Func Offset: 0x204
	// Line 1403, Address: 0x3022f8, Func Offset: 0x208
	// Line 1406, Address: 0x3022fc, Func Offset: 0x20c
	// Line 1396, Address: 0x302300, Func Offset: 0x210
	// Line 1399, Address: 0x30238c, Func Offset: 0x29c
	// Line 1400, Address: 0x302390, Func Offset: 0x2a0
	// Line 1406, Address: 0x302394, Func Offset: 0x2a4
	// Line 1400, Address: 0x30239c, Func Offset: 0x2ac
	// Line 1402, Address: 0x3023a4, Func Offset: 0x2b4
	// Line 1403, Address: 0x3023a8, Func Offset: 0x2b8
	// Line 1406, Address: 0x3023ac, Func Offset: 0x2bc
	// Line 1411, Address: 0x3023b4, Func Offset: 0x2c4
	// Line 1413, Address: 0x3023bc, Func Offset: 0x2cc
	// Line 1424, Address: 0x3023c0, Func Offset: 0x2d0
	// Line 1418, Address: 0x3023c4, Func Offset: 0x2d4
	// Line 1421, Address: 0x3023d8, Func Offset: 0x2e8
	// Line 1424, Address: 0x3023dc, Func Offset: 0x2ec
	// Line 1418, Address: 0x3023e0, Func Offset: 0x2f0
	// Line 1424, Address: 0x3023fc, Func Offset: 0x30c
	// Line 1418, Address: 0x302400, Func Offset: 0x310
	// Line 1424, Address: 0x302408, Func Offset: 0x318
	// Line 1429, Address: 0x302410, Func Offset: 0x320
	// Line 1434, Address: 0x302418, Func Offset: 0x328
	// Line 1437, Address: 0x302420, Func Offset: 0x330
	// Func End, Address: 0x302430, Func Offset: 0x340
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
	// Line 1292, Address: 0x302430, Func Offset: 0
	// Line 1296, Address: 0x302440, Func Offset: 0x10
	// Line 1292, Address: 0x302444, Func Offset: 0x14
	// Line 1295, Address: 0x302448, Func Offset: 0x18
	// Line 1292, Address: 0x30244c, Func Offset: 0x1c
	// Line 1296, Address: 0x302450, Func Offset: 0x20
	// Line 1292, Address: 0x302454, Func Offset: 0x24
	// Line 1296, Address: 0x302458, Func Offset: 0x28
	// Line 1292, Address: 0x30245c, Func Offset: 0x2c
	// Line 1296, Address: 0x302470, Func Offset: 0x40
	// Line 1298, Address: 0x302474, Func Offset: 0x44
	// Line 1296, Address: 0x302478, Func Offset: 0x48
	// Line 1303, Address: 0x30247c, Func Offset: 0x4c
	// Line 1306, Address: 0x30248c, Func Offset: 0x5c
	// Line 1307, Address: 0x302498, Func Offset: 0x68
	// Line 1309, Address: 0x30249c, Func Offset: 0x6c
	// Line 1310, Address: 0x3024a8, Func Offset: 0x78
	// Line 1311, Address: 0x3024ac, Func Offset: 0x7c
	// Line 1315, Address: 0x3024b0, Func Offset: 0x80
	// Line 1318, Address: 0x3024cc, Func Offset: 0x9c
	// Line 1320, Address: 0x3024d4, Func Offset: 0xa4
	// Line 1318, Address: 0x3024dc, Func Offset: 0xac
	// Line 1319, Address: 0x3024f4, Func Offset: 0xc4
	// Line 1320, Address: 0x3024fc, Func Offset: 0xcc
	// Line 1319, Address: 0x302504, Func Offset: 0xd4
	// Line 1320, Address: 0x302508, Func Offset: 0xd8
	// Line 1321, Address: 0x3025b0, Func Offset: 0x180
	// Line 1320, Address: 0x3025b4, Func Offset: 0x184
	// Line 1326, Address: 0x3025b8, Func Offset: 0x188
	// Line 1320, Address: 0x3025c0, Func Offset: 0x190
	// Line 1321, Address: 0x3025e0, Func Offset: 0x1b0
	// Line 1322, Address: 0x3025e4, Func Offset: 0x1b4
	// Line 1323, Address: 0x3025ec, Func Offset: 0x1bc
	// Line 1326, Address: 0x3025f4, Func Offset: 0x1c4
	// Line 1330, Address: 0x302610, Func Offset: 0x1e0
	// Line 1336, Address: 0x302618, Func Offset: 0x1e8
	// Line 1337, Address: 0x30261c, Func Offset: 0x1ec
	// Line 1339, Address: 0x30262c, Func Offset: 0x1fc
	// Line 1340, Address: 0x302630, Func Offset: 0x200
	// Func End, Address: 0x302660, Func Offset: 0x230
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
	RwV3d vc[3];
	// Line 1221, Address: 0x302660, Func Offset: 0
	// Line 1225, Address: 0x302678, Func Offset: 0x18
	// Line 1226, Address: 0x30267c, Func Offset: 0x1c
	// Line 1235, Address: 0x302680, Func Offset: 0x20
	// Line 1238, Address: 0x302694, Func Offset: 0x34
	// Line 1239, Address: 0x3026a0, Func Offset: 0x40
	// Line 1241, Address: 0x3026a4, Func Offset: 0x44
	// Line 1242, Address: 0x3026b0, Func Offset: 0x50
	// Line 1243, Address: 0x3026b4, Func Offset: 0x54
	// Line 1249, Address: 0x3026b8, Func Offset: 0x58
	// Line 1250, Address: 0x3027b4, Func Offset: 0x154
	// Line 1262, Address: 0x3027cc, Func Offset: 0x16c
	// Line 1269, Address: 0x3027d0, Func Offset: 0x170
	// Line 1262, Address: 0x3027d4, Func Offset: 0x174
	// Line 1264, Address: 0x3027e4, Func Offset: 0x184
	// Line 1262, Address: 0x3027e8, Func Offset: 0x188
	// Line 1265, Address: 0x3027ec, Func Offset: 0x18c
	// Line 1271, Address: 0x3027f0, Func Offset: 0x190
	// Line 1263, Address: 0x3027f4, Func Offset: 0x194
	// Line 1266, Address: 0x3027f8, Func Offset: 0x198
	// Line 1269, Address: 0x3027fc, Func Offset: 0x19c
	// Line 1271, Address: 0x302808, Func Offset: 0x1a8
	// Line 1276, Address: 0x302828, Func Offset: 0x1c8
	// Line 1285, Address: 0x302830, Func Offset: 0x1d0
	// Line 1286, Address: 0x302834, Func Offset: 0x1d4
	// Line 1288, Address: 0x302844, Func Offset: 0x1e4
	// Line 1289, Address: 0x302848, Func Offset: 0x1e8
	// Func End, Address: 0x302860, Func Offset: 0x200
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
	// Line 1150, Address: 0x302860, Func Offset: 0
	// Line 1153, Address: 0x302878, Func Offset: 0x18
	// Line 1154, Address: 0x30287c, Func Offset: 0x1c
	// Line 1163, Address: 0x302880, Func Offset: 0x20
	// Line 1166, Address: 0x302894, Func Offset: 0x34
	// Line 1167, Address: 0x3028a0, Func Offset: 0x40
	// Line 1169, Address: 0x3028a4, Func Offset: 0x44
	// Line 1170, Address: 0x3028b0, Func Offset: 0x50
	// Line 1171, Address: 0x3028b4, Func Offset: 0x54
	// Line 1183, Address: 0x3028b8, Func Offset: 0x58
	// Line 1190, Address: 0x302a4c, Func Offset: 0x1ec
	// Line 1198, Address: 0x302a50, Func Offset: 0x1f0
	// Line 1190, Address: 0x302a58, Func Offset: 0x1f8
	// Line 1192, Address: 0x302a68, Func Offset: 0x208
	// Line 1190, Address: 0x302a6c, Func Offset: 0x20c
	// Line 1194, Address: 0x302a70, Func Offset: 0x210
	// Line 1193, Address: 0x302a74, Func Offset: 0x214
	// Line 1198, Address: 0x302a78, Func Offset: 0x218
	// Line 1191, Address: 0x302a80, Func Offset: 0x220
	// Line 1198, Address: 0x302a84, Func Offset: 0x224
	// Line 1200, Address: 0x302b78, Func Offset: 0x318
	// Line 1198, Address: 0x302b7c, Func Offset: 0x31c
	// Line 1200, Address: 0x302b88, Func Offset: 0x328
	// Line 1198, Address: 0x302b8c, Func Offset: 0x32c
	// Line 1200, Address: 0x302ba4, Func Offset: 0x344
	// Line 1205, Address: 0x302bc0, Func Offset: 0x360
	// Line 1214, Address: 0x302bc8, Func Offset: 0x368
	// Line 1215, Address: 0x302bcc, Func Offset: 0x36c
	// Line 1217, Address: 0x302bdc, Func Offset: 0x37c
	// Line 1218, Address: 0x302be0, Func Offset: 0x380
	// Func End, Address: 0x302bf8, Func Offset: 0x398
}

// xClumpColl_ForAllCapsuleLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLinefP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x302c00
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float32 radius, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data)
{
	int32 nStack;
	nodeInfo nodeStack[33];
	RwLine lineStack[33];
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
	// Line 932, Address: 0x302c00, Func Offset: 0
	// Line 944, Address: 0x302c04, Func Offset: 0x4
	// Line 932, Address: 0x302c08, Func Offset: 0x8
	// Line 947, Address: 0x302c0c, Func Offset: 0xc
	// Line 932, Address: 0x302c10, Func Offset: 0x10
	// Line 946, Address: 0x302c28, Func Offset: 0x28
	// Line 932, Address: 0x302c2c, Func Offset: 0x2c
	// Line 948, Address: 0x302c38, Func Offset: 0x38
	// Line 932, Address: 0x302c3c, Func Offset: 0x3c
	// Line 947, Address: 0x302c40, Func Offset: 0x40
	// Line 932, Address: 0x302c44, Func Offset: 0x44
	// Line 948, Address: 0x302c48, Func Offset: 0x48
	// Line 932, Address: 0x302c4c, Func Offset: 0x4c
	// Line 948, Address: 0x302c50, Func Offset: 0x50
	// Line 932, Address: 0x302c54, Func Offset: 0x54
	// Line 948, Address: 0x302c58, Func Offset: 0x58
	// Line 932, Address: 0x302c5c, Func Offset: 0x5c
	// Line 948, Address: 0x302c60, Func Offset: 0x60
	// Line 932, Address: 0x302c64, Func Offset: 0x64
	// Line 944, Address: 0x302c94, Func Offset: 0x94
	// Line 947, Address: 0x302c98, Func Offset: 0x98
	// Line 944, Address: 0x302ca4, Func Offset: 0xa4
	// Line 947, Address: 0x302cac, Func Offset: 0xac
	// Line 952, Address: 0x302cd0, Func Offset: 0xd0
	// Line 958, Address: 0x302cdc, Func Offset: 0xdc
	// Line 960, Address: 0x302cf8, Func Offset: 0xf8
	// Line 964, Address: 0x302d10, Func Offset: 0x110
	// Line 966, Address: 0x302d24, Func Offset: 0x124
	// Line 964, Address: 0x302d28, Func Offset: 0x128
	// Line 965, Address: 0x302d2c, Func Offset: 0x12c
	// Line 967, Address: 0x302d5c, Func Offset: 0x15c
	// Line 987, Address: 0x302d68, Func Offset: 0x168
	// Line 993, Address: 0x302d88, Func Offset: 0x188
	// Line 987, Address: 0x302d8c, Func Offset: 0x18c
	// Line 993, Address: 0x302d94, Func Offset: 0x194
	// Line 995, Address: 0x302da0, Func Offset: 0x1a0
	// Line 997, Address: 0x302db4, Func Offset: 0x1b4
	// Line 1007, Address: 0x302dbc, Func Offset: 0x1bc
	// Line 999, Address: 0x302dc0, Func Offset: 0x1c0
	// Line 1007, Address: 0x302dc4, Func Offset: 0x1c4
	// Line 1010, Address: 0x302dd8, Func Offset: 0x1d8
	// Line 1012, Address: 0x302ddc, Func Offset: 0x1dc
	// Line 1013, Address: 0x302de8, Func Offset: 0x1e8
	// Line 1016, Address: 0x302e04, Func Offset: 0x204
	// Line 1018, Address: 0x302e08, Func Offset: 0x208
	// Line 1019, Address: 0x302e10, Func Offset: 0x210
	// Line 1023, Address: 0x302e44, Func Offset: 0x244
	// Line 1027, Address: 0x302e58, Func Offset: 0x258
	// Line 1028, Address: 0x302ec8, Func Offset: 0x2c8
	// Line 1030, Address: 0x302ecc, Func Offset: 0x2cc
	// Line 1035, Address: 0x302ed4, Func Offset: 0x2d4
	// Line 1036, Address: 0x302f44, Func Offset: 0x344
	// Line 1039, Address: 0x302f48, Func Offset: 0x348
	// Line 1042, Address: 0x302f50, Func Offset: 0x350
	// Line 1051, Address: 0x302f84, Func Offset: 0x384
	// Line 1053, Address: 0x303038, Func Offset: 0x438
	// Line 1058, Address: 0x303044, Func Offset: 0x444
	// Line 1061, Address: 0x3030b4, Func Offset: 0x4b4
	// Line 1059, Address: 0x3030b8, Func Offset: 0x4b8
	// Line 1061, Address: 0x3030bc, Func Offset: 0x4bc
	// Line 1060, Address: 0x3030c0, Func Offset: 0x4c0
	// Line 1062, Address: 0x3030c4, Func Offset: 0x4c4
	// Line 1068, Address: 0x3030cc, Func Offset: 0x4cc
	// Line 1069, Address: 0x303130, Func Offset: 0x530
	// Line 1072, Address: 0x303134, Func Offset: 0x534
	// Line 1073, Address: 0x303140, Func Offset: 0x540
	// Line 1082, Address: 0x303174, Func Offset: 0x574
	// Line 1084, Address: 0x303228, Func Offset: 0x628
	// Line 1089, Address: 0x303234, Func Offset: 0x634
	// Line 1090, Address: 0x303298, Func Offset: 0x698
	// Line 1092, Address: 0x30329c, Func Offset: 0x69c
	// Line 1098, Address: 0x3032a4, Func Offset: 0x6a4
	// Line 1101, Address: 0x303314, Func Offset: 0x714
	// Line 1099, Address: 0x303318, Func Offset: 0x718
	// Line 1101, Address: 0x30331c, Func Offset: 0x71c
	// Line 1100, Address: 0x303320, Func Offset: 0x720
	// Line 1103, Address: 0x303324, Func Offset: 0x724
	// Line 1112, Address: 0x30332c, Func Offset: 0x72c
	// Line 1116, Address: 0x3033e4, Func Offset: 0x7e4
	// Line 1118, Address: 0x3034a0, Func Offset: 0x8a0
	// Line 1123, Address: 0x3034ac, Func Offset: 0x8ac
	// Line 1126, Address: 0x303510, Func Offset: 0x910
	// Line 1124, Address: 0x303514, Func Offset: 0x914
	// Line 1126, Address: 0x303518, Func Offset: 0x918
	// Line 1125, Address: 0x30351c, Func Offset: 0x91c
	// Line 1127, Address: 0x303520, Func Offset: 0x920
	// Line 1134, Address: 0x303528, Func Offset: 0x928
	// Line 1137, Address: 0x303588, Func Offset: 0x988
	// Line 1135, Address: 0x30358c, Func Offset: 0x98c
	// Line 1137, Address: 0x303590, Func Offset: 0x990
	// Line 1136, Address: 0x303594, Func Offset: 0x994
	// Line 1137, Address: 0x303598, Func Offset: 0x998
	// Line 1143, Address: 0x30359c, Func Offset: 0x99c
	// Line 1147, Address: 0x3035a8, Func Offset: 0x9a8
	// Func End, Address: 0x303608, Func Offset: 0xa08
}

// xClumpColl_ForAllLineLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLineP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x303610
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data)
{
	int32 nStack;
	nodeInfo nodeStack[33];
	RwLine lineStack[33];
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
	// Line 702, Address: 0x303610, Func Offset: 0
	// Line 714, Address: 0x303614, Func Offset: 0x4
	// Line 702, Address: 0x303618, Func Offset: 0x8
	// Line 717, Address: 0x30361c, Func Offset: 0xc
	// Line 702, Address: 0x303620, Func Offset: 0x10
	// Line 716, Address: 0x303638, Func Offset: 0x28
	// Line 702, Address: 0x30363c, Func Offset: 0x2c
	// Line 718, Address: 0x303648, Func Offset: 0x38
	// Line 702, Address: 0x30364c, Func Offset: 0x3c
	// Line 717, Address: 0x303650, Func Offset: 0x40
	// Line 702, Address: 0x303654, Func Offset: 0x44
	// Line 718, Address: 0x303658, Func Offset: 0x48
	// Line 702, Address: 0x30365c, Func Offset: 0x4c
	// Line 718, Address: 0x303660, Func Offset: 0x50
	// Line 702, Address: 0x303664, Func Offset: 0x54
	// Line 718, Address: 0x303668, Func Offset: 0x58
	// Line 702, Address: 0x30366c, Func Offset: 0x5c
	// Line 718, Address: 0x303670, Func Offset: 0x60
	// Line 702, Address: 0x303674, Func Offset: 0x64
	// Line 714, Address: 0x3036a0, Func Offset: 0x90
	// Line 717, Address: 0x3036a4, Func Offset: 0x94
	// Line 714, Address: 0x3036b0, Func Offset: 0xa0
	// Line 717, Address: 0x3036b8, Func Offset: 0xa8
	// Line 720, Address: 0x3036dc, Func Offset: 0xcc
	// Line 722, Address: 0x3036e0, Func Offset: 0xd0
	// Line 728, Address: 0x3036ec, Func Offset: 0xdc
	// Line 730, Address: 0x303708, Func Offset: 0xf8
	// Line 734, Address: 0x303720, Func Offset: 0x110
	// Line 736, Address: 0x303734, Func Offset: 0x124
	// Line 734, Address: 0x303738, Func Offset: 0x128
	// Line 735, Address: 0x30373c, Func Offset: 0x12c
	// Line 737, Address: 0x30376c, Func Offset: 0x15c
	// Line 757, Address: 0x303778, Func Offset: 0x168
	// Line 763, Address: 0x303794, Func Offset: 0x184
	// Line 757, Address: 0x303798, Func Offset: 0x188
	// Line 763, Address: 0x30379c, Func Offset: 0x18c
	// Line 765, Address: 0x3037a8, Func Offset: 0x198
	// Line 767, Address: 0x3037b4, Func Offset: 0x1a4
	// Line 777, Address: 0x3037bc, Func Offset: 0x1ac
	// Line 769, Address: 0x3037c0, Func Offset: 0x1b0
	// Line 777, Address: 0x3037c4, Func Offset: 0x1b4
	// Line 780, Address: 0x3037d8, Func Offset: 0x1c8
	// Line 782, Address: 0x3037dc, Func Offset: 0x1cc
	// Line 783, Address: 0x3037e8, Func Offset: 0x1d8
	// Line 786, Address: 0x303804, Func Offset: 0x1f4
	// Line 788, Address: 0x303808, Func Offset: 0x1f8
	// Line 789, Address: 0x303810, Func Offset: 0x200
	// Line 793, Address: 0x303844, Func Offset: 0x234
	// Line 797, Address: 0x303858, Func Offset: 0x248
	// Line 798, Address: 0x3038c8, Func Offset: 0x2b8
	// Line 800, Address: 0x3038cc, Func Offset: 0x2bc
	// Line 805, Address: 0x3038d4, Func Offset: 0x2c4
	// Line 806, Address: 0x303944, Func Offset: 0x334
	// Line 809, Address: 0x303948, Func Offset: 0x338
	// Line 812, Address: 0x303950, Func Offset: 0x340
	// Line 821, Address: 0x303984, Func Offset: 0x374
	// Line 823, Address: 0x303a38, Func Offset: 0x428
	// Line 828, Address: 0x303a44, Func Offset: 0x434
	// Line 831, Address: 0x303ab4, Func Offset: 0x4a4
	// Line 829, Address: 0x303ab8, Func Offset: 0x4a8
	// Line 831, Address: 0x303abc, Func Offset: 0x4ac
	// Line 830, Address: 0x303ac0, Func Offset: 0x4b0
	// Line 832, Address: 0x303ac4, Func Offset: 0x4b4
	// Line 838, Address: 0x303acc, Func Offset: 0x4bc
	// Line 839, Address: 0x303b30, Func Offset: 0x520
	// Line 842, Address: 0x303b34, Func Offset: 0x524
	// Line 843, Address: 0x303b40, Func Offset: 0x530
	// Line 852, Address: 0x303b74, Func Offset: 0x564
	// Line 854, Address: 0x303c28, Func Offset: 0x618
	// Line 859, Address: 0x303c34, Func Offset: 0x624
	// Line 860, Address: 0x303c98, Func Offset: 0x688
	// Line 862, Address: 0x303c9c, Func Offset: 0x68c
	// Line 868, Address: 0x303ca4, Func Offset: 0x694
	// Line 871, Address: 0x303d14, Func Offset: 0x704
	// Line 869, Address: 0x303d18, Func Offset: 0x708
	// Line 871, Address: 0x303d1c, Func Offset: 0x70c
	// Line 870, Address: 0x303d20, Func Offset: 0x710
	// Line 873, Address: 0x303d24, Func Offset: 0x714
	// Line 882, Address: 0x303d2c, Func Offset: 0x71c
	// Line 886, Address: 0x303de4, Func Offset: 0x7d4
	// Line 888, Address: 0x303ea0, Func Offset: 0x890
	// Line 893, Address: 0x303eac, Func Offset: 0x89c
	// Line 896, Address: 0x303f10, Func Offset: 0x900
	// Line 894, Address: 0x303f14, Func Offset: 0x904
	// Line 896, Address: 0x303f18, Func Offset: 0x908
	// Line 895, Address: 0x303f1c, Func Offset: 0x90c
	// Line 897, Address: 0x303f20, Func Offset: 0x910
	// Line 904, Address: 0x303f28, Func Offset: 0x918
	// Line 907, Address: 0x303f88, Func Offset: 0x978
	// Line 905, Address: 0x303f8c, Func Offset: 0x97c
	// Line 907, Address: 0x303f90, Func Offset: 0x980
	// Line 906, Address: 0x303f94, Func Offset: 0x984
	// Line 907, Address: 0x303f98, Func Offset: 0x988
	// Line 913, Address: 0x303f9c, Func Offset: 0x98c
	// Line 917, Address: 0x303fa8, Func Offset: 0x998
	// Func End, Address: 0x304008, Func Offset: 0x9f8
}

// xClumpColl_ForAllBoxLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwBBoxPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x304010
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, int32(*callBack)(xClumpCollBSPTriangle*, void*), void* data)
{
	int32 nStack;
	nodeInfo nodeStack[33];
	xClumpCollBSPBranchNode* branch;
	// Line 626, Address: 0x304010, Func Offset: 0
	// Line 635, Address: 0x304014, Func Offset: 0x4
	// Line 626, Address: 0x304018, Func Offset: 0x8
	// Line 635, Address: 0x304034, Func Offset: 0x24
	// Line 626, Address: 0x304038, Func Offset: 0x28
	// Line 635, Address: 0x304040, Func Offset: 0x30
	// Line 637, Address: 0x304048, Func Offset: 0x38
	// Line 636, Address: 0x30404c, Func Offset: 0x3c
	// Line 635, Address: 0x304050, Func Offset: 0x40
	// Line 638, Address: 0x304054, Func Offset: 0x44
	// Line 640, Address: 0x304058, Func Offset: 0x48
	// Line 645, Address: 0x304064, Func Offset: 0x54
	// Line 647, Address: 0x304080, Func Offset: 0x70
	// Line 651, Address: 0x304094, Func Offset: 0x84
	// Line 653, Address: 0x30409c, Func Offset: 0x8c
	// Line 659, Address: 0x3040a8, Func Offset: 0x98
	// Line 661, Address: 0x3040b8, Func Offset: 0xa8
	// Line 667, Address: 0x3040d4, Func Offset: 0xc4
	// Line 664, Address: 0x3040d8, Func Offset: 0xc8
	// Line 667, Address: 0x3040dc, Func Offset: 0xcc
	// Line 672, Address: 0x3040ec, Func Offset: 0xdc
	// Line 671, Address: 0x3040f0, Func Offset: 0xe0
	// Line 672, Address: 0x304100, Func Offset: 0xf0
	// Line 673, Address: 0x304108, Func Offset: 0xf8
	// Line 675, Address: 0x304110, Func Offset: 0x100
	// Line 679, Address: 0x30411c, Func Offset: 0x10c
	// Line 680, Address: 0x304120, Func Offset: 0x110
	// Line 683, Address: 0x304124, Func Offset: 0x114
	// Line 687, Address: 0x304130, Func Offset: 0x120
	// Func End, Address: 0x304150, Func Offset: 0x140
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
	// Line 455, Address: 0x304150, Func Offset: 0
	// Line 463, Address: 0x30416c, Func Offset: 0x1c
	// Line 464, Address: 0x304178, Func Offset: 0x28
	// Line 465, Address: 0x304180, Func Offset: 0x30
	// Line 466, Address: 0x304184, Func Offset: 0x34
	// Line 465, Address: 0x304188, Func Offset: 0x38
	// Line 464, Address: 0x30418c, Func Offset: 0x3c
	// Line 465, Address: 0x304190, Func Offset: 0x40
	// Line 466, Address: 0x304194, Func Offset: 0x44
	// Line 465, Address: 0x30419c, Func Offset: 0x4c
	// Line 466, Address: 0x3041a0, Func Offset: 0x50
	// Line 469, Address: 0x3041a8, Func Offset: 0x58
	// Line 496, Address: 0x3041bc, Func Offset: 0x6c
	// Line 469, Address: 0x3041c8, Func Offset: 0x78
	// Line 479, Address: 0x3041cc, Func Offset: 0x7c
	// Line 469, Address: 0x3041d0, Func Offset: 0x80
	// Line 473, Address: 0x3041d4, Func Offset: 0x84
	// Line 474, Address: 0x3041d8, Func Offset: 0x88
	// Line 473, Address: 0x3041dc, Func Offset: 0x8c
	// Line 474, Address: 0x3041e4, Func Offset: 0x94
	// Line 480, Address: 0x3041e8, Func Offset: 0x98
	// Line 478, Address: 0x3041ec, Func Offset: 0x9c
	// Line 480, Address: 0x3041f0, Func Offset: 0xa0
	// Line 483, Address: 0x3041f4, Func Offset: 0xa4
	// Line 484, Address: 0x304204, Func Offset: 0xb4
	// Line 487, Address: 0x304210, Func Offset: 0xc0
	// Line 488, Address: 0x304214, Func Offset: 0xc4
	// Line 489, Address: 0x304218, Func Offset: 0xc8
	// Line 490, Address: 0x30421c, Func Offset: 0xcc
	// Line 496, Address: 0x304228, Func Offset: 0xd8
	// Line 497, Address: 0x304238, Func Offset: 0xe8
	// Line 496, Address: 0x30423c, Func Offset: 0xec
	// Line 497, Address: 0x304288, Func Offset: 0x138
	// Line 500, Address: 0x304298, Func Offset: 0x148
	// Line 515, Address: 0x3042a0, Func Offset: 0x150
	// Func End, Address: 0x3042b8, Func Offset: 0x168
}

// AddAtomicCB__FP8RpAtomicPv
// Start address: 0x3042c0
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data)
{
	TempAtomicList** tmpList;
	// Line 389, Address: 0x3042c0, Func Offset: 0
	// Line 397, Address: 0x3042c4, Func Offset: 0x4
	// Line 389, Address: 0x3042c8, Func Offset: 0x8
	// Line 391, Address: 0x3042d8, Func Offset: 0x18
	// Line 390, Address: 0x3042dc, Func Offset: 0x1c
	// Line 391, Address: 0x3042e0, Func Offset: 0x20
	// Line 392, Address: 0x3042e4, Func Offset: 0x24
	// Line 393, Address: 0x3042f4, Func Offset: 0x34
	// Line 397, Address: 0x304308, Func Offset: 0x48
	// Line 398, Address: 0x304314, Func Offset: 0x54
	// Line 399, Address: 0x304368, Func Offset: 0xa8
	// Line 400, Address: 0x304370, Func Offset: 0xb0
	// Line 401, Address: 0x3043cc, Func Offset: 0x10c
	// Line 403, Address: 0x3043d0, Func Offset: 0x110
	// Line 404, Address: 0x3043d4, Func Offset: 0x114
	// Line 403, Address: 0x3043d8, Func Offset: 0x118
	// Line 405, Address: 0x3043e0, Func Offset: 0x120
	// Func End, Address: 0x3043f4, Func Offset: 0x134
}

// xClumpColl_StaticBufferInit__FPvUi
// Start address: 0x304400
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data)
{
	uint32* header;
	uint32 numBranchNodes;
	uint32 numTriangles;
	xClumpCollBSPTree* tree;
	// Line 352, Address: 0x304400, Func Offset: 0
	// Line 363, Address: 0x304404, Func Offset: 0x4
	// Line 352, Address: 0x304408, Func Offset: 0x8
	// Line 353, Address: 0x304414, Func Offset: 0x14
	// Line 352, Address: 0x304418, Func Offset: 0x18
	// Line 355, Address: 0x30441c, Func Offset: 0x1c
	// Line 356, Address: 0x304420, Func Offset: 0x20
	// Line 363, Address: 0x304424, Func Offset: 0x24
	// Line 365, Address: 0x304430, Func Offset: 0x30
	// Line 367, Address: 0x304438, Func Offset: 0x38
	// Line 366, Address: 0x30443c, Func Offset: 0x3c
	// Line 367, Address: 0x304440, Func Offset: 0x40
	// Line 368, Address: 0x304448, Func Offset: 0x48
	// Line 370, Address: 0x304450, Func Offset: 0x50
	// Line 369, Address: 0x304454, Func Offset: 0x54
	// Line 370, Address: 0x304458, Func Offset: 0x58
	// Line 371, Address: 0x30445c, Func Offset: 0x5c
	// Line 374, Address: 0x304460, Func Offset: 0x60
	// Line 375, Address: 0x304464, Func Offset: 0x64
	// Line 377, Address: 0x304468, Func Offset: 0x68
	// Func End, Address: 0x304480, Func Offset: 0x80
}

