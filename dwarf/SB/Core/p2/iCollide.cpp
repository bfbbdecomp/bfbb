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
typedef struct _class_1;
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
typedef struct RpIntersectData;
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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
	uint32 pad[4];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
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
	RwTexCoords* texCoords[8];
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
	void(*InitCB)(xMemPool*, void*);
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	void(*destroyNotify)(RwResEntry*);
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
	uint8 NumAnims[2];
	void** RawData;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	xAnimMultiFileEntry Files[1];
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
	int8 name[32];
	int8 mask[32];
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
RpCollisionTriangle*(*rayHitsModelBackwardCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*rayHitsModelCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*rayHitsEnvBackwardCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*rayHitsEnvCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsModel3CB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsEnv4CB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsEnv3CB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsEnvCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);

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
	// Line 1668, Address: 0x1a54a0, Func Offset: 0
	// Line 1678, Address: 0x1a54c0, Func Offset: 0x20
	// Line 1681, Address: 0x1a54c4, Func Offset: 0x24
	// Line 1686, Address: 0x1a54c8, Func Offset: 0x28
	// Line 1687, Address: 0x1a54d4, Func Offset: 0x34
	// Line 1688, Address: 0x1a54e4, Func Offset: 0x44
	// Line 1689, Address: 0x1a54f4, Func Offset: 0x54
	// Line 1690, Address: 0x1a5504, Func Offset: 0x64
	// Line 1691, Address: 0x1a5514, Func Offset: 0x74
	// Line 1692, Address: 0x1a5524, Func Offset: 0x84
	// Line 1693, Address: 0x1a5530, Func Offset: 0x90
	// Line 1696, Address: 0x1a553c, Func Offset: 0x9c
	// Line 1699, Address: 0x1a5548, Func Offset: 0xa8
	// Line 1704, Address: 0x1a5550, Func Offset: 0xb0
	// Line 1706, Address: 0x1a5554, Func Offset: 0xb4
	// Line 1707, Address: 0x1a5560, Func Offset: 0xc0
	// Line 1708, Address: 0x1a5578, Func Offset: 0xd8
	// Line 1709, Address: 0x1a558c, Func Offset: 0xec
	// Line 1710, Address: 0x1a55a8, Func Offset: 0x108
	// Func End, Address: 0x1a55c8, Func Offset: 0x128
}

// iBoxForModel__FP4xBoxPC14xModelInstance
// Start address: 0x1a55d0
void iBoxForModel(xBox* o, xModelInstance* m)
{
	// Line 1660, Address: 0x1a55d0, Func Offset: 0
	// Line 1661, Address: 0x1a55e4, Func Offset: 0x14
	// Line 1664, Address: 0x1a55ec, Func Offset: 0x1c
	// Line 1665, Address: 0x1a5620, Func Offset: 0x50
	// Line 1666, Address: 0x1a5654, Func Offset: 0x84
	// Func End, Address: 0x1a5668, Func Offset: 0x98
}

// iSphereForModel__FP7xSpherePC14xModelInstance
// Start address: 0x1a5670
void iSphereForModel(xSphere* o, xModelInstance* m)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	uint16 idx;
	// Line 1619, Address: 0x1a5670, Func Offset: 0
	// Line 1628, Address: 0x1a5690, Func Offset: 0x20
	// Line 1631, Address: 0x1a5694, Func Offset: 0x24
	// Line 1636, Address: 0x1a5698, Func Offset: 0x28
	// Line 1637, Address: 0x1a56a4, Func Offset: 0x34
	// Line 1638, Address: 0x1a56ac, Func Offset: 0x3c
	// Line 1639, Address: 0x1a56b4, Func Offset: 0x44
	// Line 1640, Address: 0x1a56bc, Func Offset: 0x4c
	// Line 1641, Address: 0x1a56c0, Func Offset: 0x50
	// Line 1644, Address: 0x1a56cc, Func Offset: 0x5c
	// Line 1647, Address: 0x1a56d8, Func Offset: 0x68
	// Line 1652, Address: 0x1a56e0, Func Offset: 0x70
	// Line 1654, Address: 0x1a56e4, Func Offset: 0x74
	// Line 1655, Address: 0x1a56f0, Func Offset: 0x80
	// Line 1656, Address: 0x1a5708, Func Offset: 0x98
	// Line 1657, Address: 0x1a571c, Func Offset: 0xac
	// Line 1658, Address: 0x1a5738, Func Offset: 0xc8
	// Func End, Address: 0x1a5758, Func Offset: 0xe8
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
	// Line 1543, Address: 0x1a5760, Func Offset: 0
	// Line 1550, Address: 0x1a5788, Func Offset: 0x28
	// Line 1552, Address: 0x1a57d0, Func Offset: 0x70
	// Line 1553, Address: 0x1a57d8, Func Offset: 0x78
	// Line 1556, Address: 0x1a58e0, Func Offset: 0x180
	// Line 1553, Address: 0x1a58e4, Func Offset: 0x184
	// Line 1556, Address: 0x1a58e8, Func Offset: 0x188
	// Line 1553, Address: 0x1a58ec, Func Offset: 0x18c
	// Line 1556, Address: 0x1a58f0, Func Offset: 0x190
	// Line 1553, Address: 0x1a58fc, Func Offset: 0x19c
	// Line 1556, Address: 0x1a5924, Func Offset: 0x1c4
	// Line 1557, Address: 0x1a5974, Func Offset: 0x214
	// Line 1558, Address: 0x1a5984, Func Offset: 0x224
	// Line 1559, Address: 0x1a598c, Func Offset: 0x22c
	// Line 1561, Address: 0x1a5990, Func Offset: 0x230
	// Line 1562, Address: 0x1a59a0, Func Offset: 0x240
	// Line 1570, Address: 0x1a59b8, Func Offset: 0x258
	// Line 1566, Address: 0x1a59bc, Func Offset: 0x25c
	// Line 1570, Address: 0x1a59c0, Func Offset: 0x260
	// Line 1580, Address: 0x1a59d4, Func Offset: 0x274
	// Line 1570, Address: 0x1a59d8, Func Offset: 0x278
	// Line 1583, Address: 0x1a59dc, Func Offset: 0x27c
	// Line 1580, Address: 0x1a59e0, Func Offset: 0x280
	// Line 1582, Address: 0x1a59e4, Func Offset: 0x284
	// Line 1570, Address: 0x1a59e8, Func Offset: 0x288
	// Line 1583, Address: 0x1a59ec, Func Offset: 0x28c
	// Line 1574, Address: 0x1a59f0, Func Offset: 0x290
	// Line 1580, Address: 0x1a59f4, Func Offset: 0x294
	// Line 1574, Address: 0x1a59f8, Func Offset: 0x298
	// Line 1580, Address: 0x1a5a08, Func Offset: 0x2a8
	// Line 1582, Address: 0x1a5a10, Func Offset: 0x2b0
	// Line 1583, Address: 0x1a5a1c, Func Offset: 0x2bc
	// Line 1584, Address: 0x1a5a20, Func Offset: 0x2c0
	// Line 1585, Address: 0x1a5a30, Func Offset: 0x2d0
	// Line 1587, Address: 0x1a5a38, Func Offset: 0x2d8
	// Line 1592, Address: 0x1a5a50, Func Offset: 0x2f0
	// Line 1596, Address: 0x1a5a54, Func Offset: 0x2f4
	// Line 1592, Address: 0x1a5a58, Func Offset: 0x2f8
	// Line 1596, Address: 0x1a5a68, Func Offset: 0x308
	// Line 1592, Address: 0x1a5a6c, Func Offset: 0x30c
	// Line 1593, Address: 0x1a5a74, Func Offset: 0x314
	// Line 1594, Address: 0x1a5a80, Func Offset: 0x320
	// Line 1593, Address: 0x1a5a84, Func Offset: 0x324
	// Line 1594, Address: 0x1a5a90, Func Offset: 0x330
	// Line 1596, Address: 0x1a5aa4, Func Offset: 0x344
	// Line 1601, Address: 0x1a5ab0, Func Offset: 0x350
	// Line 1602, Address: 0x1a5abc, Func Offset: 0x35c
	// Line 1603, Address: 0x1a5acc, Func Offset: 0x36c
	// Line 1604, Address: 0x1a5adc, Func Offset: 0x37c
	// Line 1603, Address: 0x1a5ae0, Func Offset: 0x380
	// Line 1606, Address: 0x1a5ae4, Func Offset: 0x384
	// Line 1609, Address: 0x1a5af8, Func Offset: 0x398
	// Line 1610, Address: 0x1a5b38, Func Offset: 0x3d8
	// Line 1611, Address: 0x1a5b78, Func Offset: 0x418
	// Line 1612, Address: 0x1a5b8c, Func Offset: 0x42c
	// Line 1614, Address: 0x1a5b90, Func Offset: 0x430
	// Line 1616, Address: 0x1a5bb8, Func Offset: 0x458
	// Line 1617, Address: 0x1a5bbc, Func Offset: 0x45c
	// Line 1616, Address: 0x1a5bd4, Func Offset: 0x474
	// Line 1617, Address: 0x1a5bd8, Func Offset: 0x478
	// Func End, Address: 0x1a5be0, Func Offset: 0x480
}

// iRayHitsEnv__FPC5xRay3PC4xEnvP7xCollis
// Start address: 0x1a5be0
uint32 iRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
	float32 len;
	// Line 1423, Address: 0x1a5be0, Func Offset: 0
	// Line 1430, Address: 0x1a5be4, Func Offset: 0x4
	// Line 1423, Address: 0x1a5be8, Func Offset: 0x8
	// Line 1430, Address: 0x1a5c00, Func Offset: 0x20
	// Line 1431, Address: 0x1a5c04, Func Offset: 0x24
	// Line 1434, Address: 0x1a5d08, Func Offset: 0x128
	// Line 1431, Address: 0x1a5d0c, Func Offset: 0x12c
	// Line 1434, Address: 0x1a5d10, Func Offset: 0x130
	// Line 1431, Address: 0x1a5d14, Func Offset: 0x134
	// Line 1437, Address: 0x1a5d18, Func Offset: 0x138
	// Line 1433, Address: 0x1a5d20, Func Offset: 0x140
	// Line 1437, Address: 0x1a5d24, Func Offset: 0x144
	// Line 1431, Address: 0x1a5d30, Func Offset: 0x150
	// Line 1433, Address: 0x1a5d58, Func Offset: 0x178
	// Line 1434, Address: 0x1a5d64, Func Offset: 0x184
	// Line 1437, Address: 0x1a5d68, Func Offset: 0x188
	// Line 1438, Address: 0x1a5db8, Func Offset: 0x1d8
	// Line 1439, Address: 0x1a5dc8, Func Offset: 0x1e8
	// Line 1442, Address: 0x1a5dd0, Func Offset: 0x1f0
	// Line 1443, Address: 0x1a5de0, Func Offset: 0x200
	// Line 1446, Address: 0x1a5dfc, Func Offset: 0x21c
	// Line 1450, Address: 0x1a5e08, Func Offset: 0x228
	// Line 1449, Address: 0x1a5e0c, Func Offset: 0x22c
	// Line 1450, Address: 0x1a5e10, Func Offset: 0x230
	// Line 1453, Address: 0x1a5e2c, Func Offset: 0x24c
	// Line 1454, Address: 0x1a5e38, Func Offset: 0x258
	// Line 1455, Address: 0x1a5e58, Func Offset: 0x278
	// Line 1456, Address: 0x1a5e60, Func Offset: 0x280
	// Line 1476, Address: 0x1a5e70, Func Offset: 0x290
	// Line 1477, Address: 0x1a5e80, Func Offset: 0x2a0
	// Line 1480, Address: 0x1a5e90, Func Offset: 0x2b0
	// Line 1481, Address: 0x1a5e94, Func Offset: 0x2b4
	// Line 1480, Address: 0x1a5ea4, Func Offset: 0x2c4
	// Line 1481, Address: 0x1a5ea8, Func Offset: 0x2c8
	// Func End, Address: 0x1a5eb0, Func Offset: 0x2d0
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
	// Line 1289, Address: 0x1a5eb0, Func Offset: 0
	// Line 1298, Address: 0x1a5ef8, Func Offset: 0x48
	// Line 1300, Address: 0x1a5f44, Func Offset: 0x94
	// Line 1301, Address: 0x1a5f58, Func Offset: 0xa8
	// Line 1302, Address: 0x1a5f68, Func Offset: 0xb8
	// Line 1304, Address: 0x1a5f88, Func Offset: 0xd8
	// Line 1305, Address: 0x1a5f90, Func Offset: 0xe0
	// Line 1312, Address: 0x1a5fa0, Func Offset: 0xf0
	// Line 1308, Address: 0x1a5fa8, Func Offset: 0xf8
	// Line 1312, Address: 0x1a5fac, Func Offset: 0xfc
	// Line 1321, Address: 0x1a5fbc, Func Offset: 0x10c
	// Line 1312, Address: 0x1a5fc0, Func Offset: 0x110
	// Line 1321, Address: 0x1a5fc4, Func Offset: 0x114
	// Line 1312, Address: 0x1a5fc8, Func Offset: 0x118
	// Line 1316, Address: 0x1a5fcc, Func Offset: 0x11c
	// Line 1321, Address: 0x1a5fe8, Func Offset: 0x138
	// Line 1323, Address: 0x1a5ff0, Func Offset: 0x140
	// Line 1324, Address: 0x1a6040, Func Offset: 0x190
	// Line 1326, Address: 0x1a6050, Func Offset: 0x1a0
	// Line 1328, Address: 0x1a606c, Func Offset: 0x1bc
	// Line 1327, Address: 0x1a6070, Func Offset: 0x1c0
	// Line 1328, Address: 0x1a6074, Func Offset: 0x1c4
	// Line 1327, Address: 0x1a6078, Func Offset: 0x1c8
	// Line 1328, Address: 0x1a607c, Func Offset: 0x1cc
	// Line 1327, Address: 0x1a6088, Func Offset: 0x1d8
	// Line 1328, Address: 0x1a6090, Func Offset: 0x1e0
	// Line 1327, Address: 0x1a6098, Func Offset: 0x1e8
	// Line 1328, Address: 0x1a609c, Func Offset: 0x1ec
	// Line 1327, Address: 0x1a60a8, Func Offset: 0x1f8
	// Line 1328, Address: 0x1a60ac, Func Offset: 0x1fc
	// Line 1327, Address: 0x1a60b8, Func Offset: 0x208
	// Line 1328, Address: 0x1a60bc, Func Offset: 0x20c
	// Line 1327, Address: 0x1a60c8, Func Offset: 0x218
	// Line 1328, Address: 0x1a60cc, Func Offset: 0x21c
	// Line 1327, Address: 0x1a60d8, Func Offset: 0x228
	// Line 1328, Address: 0x1a60dc, Func Offset: 0x22c
	// Line 1327, Address: 0x1a60e8, Func Offset: 0x238
	// Line 1328, Address: 0x1a60ec, Func Offset: 0x23c
	// Line 1327, Address: 0x1a60f8, Func Offset: 0x248
	// Line 1328, Address: 0x1a60fc, Func Offset: 0x24c
	// Line 1326, Address: 0x1a6110, Func Offset: 0x260
	// Line 1328, Address: 0x1a6114, Func Offset: 0x264
	// Line 1327, Address: 0x1a6130, Func Offset: 0x280
	// Line 1328, Address: 0x1a6134, Func Offset: 0x284
	// Line 1329, Address: 0x1a613c, Func Offset: 0x28c
	// Line 1327, Address: 0x1a6148, Func Offset: 0x298
	// Line 1328, Address: 0x1a614c, Func Offset: 0x29c
	// Line 1329, Address: 0x1a6154, Func Offset: 0x2a4
	// Line 1336, Address: 0x1a6160, Func Offset: 0x2b0
	// Line 1332, Address: 0x1a6168, Func Offset: 0x2b8
	// Line 1336, Address: 0x1a616c, Func Offset: 0x2bc
	// Line 1334, Address: 0x1a6174, Func Offset: 0x2c4
	// Line 1360, Address: 0x1a6178, Func Offset: 0x2c8
	// Line 1361, Address: 0x1a6180, Func Offset: 0x2d0
	// Line 1360, Address: 0x1a6188, Func Offset: 0x2d8
	// Line 1361, Address: 0x1a618c, Func Offset: 0x2dc
	// Line 1362, Address: 0x1a619c, Func Offset: 0x2ec
	// Line 1363, Address: 0x1a61a4, Func Offset: 0x2f4
	// Line 1364, Address: 0x1a61ac, Func Offset: 0x2fc
	// Line 1363, Address: 0x1a61b0, Func Offset: 0x300
	// Line 1364, Address: 0x1a61b4, Func Offset: 0x304
	// Line 1363, Address: 0x1a61b8, Func Offset: 0x308
	// Line 1365, Address: 0x1a61bc, Func Offset: 0x30c
	// Line 1404, Address: 0x1a61d4, Func Offset: 0x324
	// Line 1405, Address: 0x1a61e4, Func Offset: 0x334
	// Line 1406, Address: 0x1a6224, Func Offset: 0x374
	// Line 1407, Address: 0x1a6230, Func Offset: 0x380
	// Line 1409, Address: 0x1a6250, Func Offset: 0x3a0
	// Line 1407, Address: 0x1a6254, Func Offset: 0x3a4
	// Line 1409, Address: 0x1a6258, Func Offset: 0x3a8
	// Line 1407, Address: 0x1a6264, Func Offset: 0x3b4
	// Line 1409, Address: 0x1a6268, Func Offset: 0x3b8
	// Line 1407, Address: 0x1a6284, Func Offset: 0x3d4
	// Line 1409, Address: 0x1a6288, Func Offset: 0x3d8
	// Line 1410, Address: 0x1a62c8, Func Offset: 0x418
	// Line 1409, Address: 0x1a62cc, Func Offset: 0x41c
	// Line 1410, Address: 0x1a62d0, Func Offset: 0x420
	// Line 1409, Address: 0x1a62dc, Func Offset: 0x42c
	// Line 1410, Address: 0x1a62e0, Func Offset: 0x430
	// Line 1409, Address: 0x1a62fc, Func Offset: 0x44c
	// Line 1410, Address: 0x1a6300, Func Offset: 0x450
	// Line 1411, Address: 0x1a6324, Func Offset: 0x474
	// Line 1410, Address: 0x1a6328, Func Offset: 0x478
	// Line 1411, Address: 0x1a6344, Func Offset: 0x494
	// Line 1410, Address: 0x1a6348, Func Offset: 0x498
	// Line 1411, Address: 0x1a634c, Func Offset: 0x49c
	// Line 1410, Address: 0x1a6350, Func Offset: 0x4a0
	// Line 1411, Address: 0x1a6358, Func Offset: 0x4a8
	// Line 1412, Address: 0x1a63bc, Func Offset: 0x50c
	// Line 1411, Address: 0x1a63c0, Func Offset: 0x510
	// Line 1412, Address: 0x1a63d0, Func Offset: 0x520
	// Line 1411, Address: 0x1a63d4, Func Offset: 0x524
	// Line 1412, Address: 0x1a63d8, Func Offset: 0x528
	// Line 1411, Address: 0x1a63dc, Func Offset: 0x52c
	// Line 1412, Address: 0x1a63e4, Func Offset: 0x534
	// Line 1413, Address: 0x1a6458, Func Offset: 0x5a8
	// Line 1415, Address: 0x1a6464, Func Offset: 0x5b4
	// Line 1418, Address: 0x1a6480, Func Offset: 0x5d0
	// Line 1421, Address: 0x1a64a8, Func Offset: 0x5f8
	// Line 1420, Address: 0x1a64d8, Func Offset: 0x628
	// Line 1421, Address: 0x1a64dc, Func Offset: 0x62c
	// Func End, Address: 0x1a64e4, Func Offset: 0x634
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
	// Line 1163, Address: 0x1a64f0, Func Offset: 0
	// Line 1171, Address: 0x1a64f4, Func Offset: 0x4
	// Line 1163, Address: 0x1a64f8, Func Offset: 0x8
	// Line 1171, Address: 0x1a651c, Func Offset: 0x2c
	// Line 1172, Address: 0x1a6520, Func Offset: 0x30
	// Line 1178, Address: 0x1a6530, Func Offset: 0x40
	// Line 1181, Address: 0x1a6534, Func Offset: 0x44
	// Line 1183, Address: 0x1a6538, Func Offset: 0x48
	// Line 1186, Address: 0x1a6544, Func Offset: 0x54
	// Line 1187, Address: 0x1a6548, Func Offset: 0x58
	// Line 1186, Address: 0x1a654c, Func Offset: 0x5c
	// Line 1187, Address: 0x1a6550, Func Offset: 0x60
	// Line 1190, Address: 0x1a656c, Func Offset: 0x7c
	// Line 1191, Address: 0x1a6578, Func Offset: 0x88
	// Line 1204, Address: 0x1a6590, Func Offset: 0xa0
	// Line 1206, Address: 0x1a659c, Func Offset: 0xac
	// Line 1205, Address: 0x1a65a0, Func Offset: 0xb0
	// Line 1206, Address: 0x1a65b0, Func Offset: 0xc0
	// Line 1208, Address: 0x1a65bc, Func Offset: 0xcc
	// Line 1209, Address: 0x1a65d8, Func Offset: 0xe8
	// Line 1210, Address: 0x1a65e0, Func Offset: 0xf0
	// Line 1211, Address: 0x1a65f0, Func Offset: 0x100
	// Line 1214, Address: 0x1a65fc, Func Offset: 0x10c
	// Line 1212, Address: 0x1a6600, Func Offset: 0x110
	// Line 1213, Address: 0x1a6610, Func Offset: 0x120
	// Line 1214, Address: 0x1a6624, Func Offset: 0x134
	// Line 1215, Address: 0x1a6628, Func Offset: 0x138
	// Line 1216, Address: 0x1a6630, Func Offset: 0x140
	// Line 1219, Address: 0x1a663c, Func Offset: 0x14c
	// Line 1243, Address: 0x1a6650, Func Offset: 0x160
	// Line 1247, Address: 0x1a665c, Func Offset: 0x16c
	// Line 1252, Address: 0x1a6664, Func Offset: 0x174
	// Line 1244, Address: 0x1a6668, Func Offset: 0x178
	// Line 1247, Address: 0x1a6678, Func Offset: 0x188
	// Line 1248, Address: 0x1a667c, Func Offset: 0x18c
	// Line 1247, Address: 0x1a6680, Func Offset: 0x190
	// Line 1248, Address: 0x1a6684, Func Offset: 0x194
	// Line 1249, Address: 0x1a668c, Func Offset: 0x19c
	// Line 1250, Address: 0x1a6698, Func Offset: 0x1a8
	// Line 1252, Address: 0x1a66b0, Func Offset: 0x1c0
	// Line 1253, Address: 0x1a66c0, Func Offset: 0x1d0
	// Line 1254, Address: 0x1a66cc, Func Offset: 0x1dc
	// Line 1255, Address: 0x1a66d8, Func Offset: 0x1e8
	// Line 1256, Address: 0x1a66e4, Func Offset: 0x1f4
	// Line 1258, Address: 0x1a6718, Func Offset: 0x228
	// Line 1259, Address: 0x1a6724, Func Offset: 0x234
	// Line 1260, Address: 0x1a6730, Func Offset: 0x240
	// Line 1263, Address: 0x1a673c, Func Offset: 0x24c
	// Line 1266, Address: 0x1a6750, Func Offset: 0x260
	// Func End, Address: 0x1a676c, Func Offset: 0x27c
}

// iSphereHitsEnv3__FPC7xSpherePC4xEnvP7xCollisUcf
// Start address: 0x1a6770
int32 iSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, uint8 ncolls, float32 sth)
{
	RpIntersection isx;
	uint8 idx;
	// Line 1094, Address: 0x1a6770, Func Offset: 0
	// Line 1103, Address: 0x1a6774, Func Offset: 0x4
	// Line 1094, Address: 0x1a6778, Func Offset: 0x8
	// Line 1104, Address: 0x1a6794, Func Offset: 0x24
	// Line 1103, Address: 0x1a679c, Func Offset: 0x2c
	// Line 1104, Address: 0x1a67a4, Func Offset: 0x34
	// Line 1106, Address: 0x1a67b4, Func Offset: 0x44
	// Line 1108, Address: 0x1a67d0, Func Offset: 0x60
	// Line 1107, Address: 0x1a67d4, Func Offset: 0x64
	// Line 1108, Address: 0x1a67d8, Func Offset: 0x68
	// Line 1107, Address: 0x1a67e0, Func Offset: 0x70
	// Line 1108, Address: 0x1a67e4, Func Offset: 0x74
	// Line 1107, Address: 0x1a67f0, Func Offset: 0x80
	// Line 1108, Address: 0x1a67f8, Func Offset: 0x88
	// Line 1107, Address: 0x1a6800, Func Offset: 0x90
	// Line 1108, Address: 0x1a6804, Func Offset: 0x94
	// Line 1107, Address: 0x1a6810, Func Offset: 0xa0
	// Line 1108, Address: 0x1a6814, Func Offset: 0xa4
	// Line 1107, Address: 0x1a6820, Func Offset: 0xb0
	// Line 1108, Address: 0x1a6824, Func Offset: 0xb4
	// Line 1107, Address: 0x1a6830, Func Offset: 0xc0
	// Line 1108, Address: 0x1a6834, Func Offset: 0xc4
	// Line 1107, Address: 0x1a6840, Func Offset: 0xd0
	// Line 1108, Address: 0x1a6844, Func Offset: 0xd4
	// Line 1107, Address: 0x1a6850, Func Offset: 0xe0
	// Line 1108, Address: 0x1a6854, Func Offset: 0xe4
	// Line 1107, Address: 0x1a6860, Func Offset: 0xf0
	// Line 1108, Address: 0x1a6864, Func Offset: 0xf4
	// Line 1106, Address: 0x1a6878, Func Offset: 0x108
	// Line 1108, Address: 0x1a687c, Func Offset: 0x10c
	// Line 1107, Address: 0x1a6898, Func Offset: 0x128
	// Line 1108, Address: 0x1a689c, Func Offset: 0x12c
	// Line 1109, Address: 0x1a68a4, Func Offset: 0x134
	// Line 1107, Address: 0x1a68b0, Func Offset: 0x140
	// Line 1108, Address: 0x1a68b4, Func Offset: 0x144
	// Line 1109, Address: 0x1a68bc, Func Offset: 0x14c
	// Line 1116, Address: 0x1a68c8, Func Offset: 0x158
	// Line 1112, Address: 0x1a68cc, Func Offset: 0x15c
	// Line 1114, Address: 0x1a68d0, Func Offset: 0x160
	// Line 1113, Address: 0x1a68d4, Func Offset: 0x164
	// Line 1116, Address: 0x1a68d8, Func Offset: 0x168
	// Line 1123, Address: 0x1a68e8, Func Offset: 0x178
	// Line 1127, Address: 0x1a68f4, Func Offset: 0x184
	// Line 1126, Address: 0x1a68f8, Func Offset: 0x188
	// Line 1127, Address: 0x1a68fc, Func Offset: 0x18c
	// Line 1130, Address: 0x1a6918, Func Offset: 0x1a8
	// Line 1131, Address: 0x1a6920, Func Offset: 0x1b0
	// Line 1132, Address: 0x1a6940, Func Offset: 0x1d0
	// Line 1133, Address: 0x1a6948, Func Offset: 0x1d8
	// Line 1161, Address: 0x1a6958, Func Offset: 0x1e8
	// Line 1160, Address: 0x1a696c, Func Offset: 0x1fc
	// Line 1161, Address: 0x1a6970, Func Offset: 0x200
	// Func End, Address: 0x1a6978, Func Offset: 0x208
}

// iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
// Start address: 0x1a6980
uint32 iSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
	// Line 1065, Address: 0x1a6980, Func Offset: 0
	// Line 1072, Address: 0x1a6984, Func Offset: 0x4
	// Line 1065, Address: 0x1a6988, Func Offset: 0x8
	// Line 1073, Address: 0x1a699c, Func Offset: 0x1c
	// Line 1072, Address: 0x1a69a0, Func Offset: 0x20
	// Line 1073, Address: 0x1a69a4, Func Offset: 0x24
	// Line 1074, Address: 0x1a69b0, Func Offset: 0x30
	// Line 1075, Address: 0x1a69b8, Func Offset: 0x38
	// Line 1074, Address: 0x1a69c0, Func Offset: 0x40
	// Line 1075, Address: 0x1a69c8, Func Offset: 0x48
	// Line 1077, Address: 0x1a69d0, Func Offset: 0x50
	// Line 1081, Address: 0x1a69dc, Func Offset: 0x5c
	// Line 1080, Address: 0x1a69e0, Func Offset: 0x60
	// Line 1081, Address: 0x1a69e4, Func Offset: 0x64
	// Line 1084, Address: 0x1a6a00, Func Offset: 0x80
	// Line 1085, Address: 0x1a6a08, Func Offset: 0x88
	// Line 1086, Address: 0x1a6a28, Func Offset: 0xa8
	// Line 1087, Address: 0x1a6a30, Func Offset: 0xb0
	// Line 1091, Address: 0x1a6a40, Func Offset: 0xc0
	// Line 1092, Address: 0x1a6a44, Func Offset: 0xc4
	// Line 1091, Address: 0x1a6a50, Func Offset: 0xd0
	// Line 1092, Address: 0x1a6a54, Func Offset: 0xd4
	// Func End, Address: 0x1a6a5c, Func Offset: 0xdc
}

// rayHitsModelBackwardCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a60
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 1057, Address: 0x1a6a68, Func Offset: 0x8
	// Func End, Address: 0x1a6a74, Func Offset: 0x14
}

// rayHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a80
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 1042, Address: 0x1a6a88, Func Offset: 0x8
	// Func End, Address: 0x1a6a94, Func Offset: 0x14
}

// rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6aa0
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
	// Line 1001, Address: 0x1a6aa0, Func Offset: 0
	// Line 1003, Address: 0x1a6aa4, Func Offset: 0x4
	// Line 1001, Address: 0x1a6aa8, Func Offset: 0x8
	// Line 1003, Address: 0x1a6aac, Func Offset: 0xc
	// Line 1001, Address: 0x1a6ab0, Func Offset: 0x10
	// Line 1006, Address: 0x1a6ab4, Func Offset: 0x14
	// Line 1003, Address: 0x1a6ab8, Func Offset: 0x18
	// Line 1006, Address: 0x1a6abc, Func Offset: 0x1c
	// Line 1007, Address: 0x1a6ac8, Func Offset: 0x28
	// Line 1011, Address: 0x1a6ad0, Func Offset: 0x30
	// Line 1015, Address: 0x1a6ad8, Func Offset: 0x38
	// Line 1017, Address: 0x1a6aec, Func Offset: 0x4c
	// Line 1018, Address: 0x1a6b04, Func Offset: 0x64
	// Line 1019, Address: 0x1a6b0c, Func Offset: 0x6c
	// Line 1020, Address: 0x1a6b18, Func Offset: 0x78
	// Line 1027, Address: 0x1a6b20, Func Offset: 0x80
	// Line 1024, Address: 0x1a6b24, Func Offset: 0x84
	// Line 1025, Address: 0x1a6b28, Func Offset: 0x88
	// Line 1026, Address: 0x1a6b34, Func Offset: 0x94
	// Line 1027, Address: 0x1a6b3c, Func Offset: 0x9c
	// Line 1028, Address: 0x1a6b40, Func Offset: 0xa0
	// Func End, Address: 0x1a6b48, Func Offset: 0xa8
}

// rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6b50
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
	// Line 945, Address: 0x1a6b50, Func Offset: 0
	// Line 948, Address: 0x1a6b58, Func Offset: 0x8
	// Line 945, Address: 0x1a6b5c, Func Offset: 0xc
	// Line 948, Address: 0x1a6b60, Func Offset: 0x10
	// Line 949, Address: 0x1a6b6c, Func Offset: 0x1c
	// Line 950, Address: 0x1a6b74, Func Offset: 0x24
	// Line 953, Address: 0x1a6b78, Func Offset: 0x28
	// Line 957, Address: 0x1a6b80, Func Offset: 0x30
	// Line 959, Address: 0x1a6b94, Func Offset: 0x44
	// Line 960, Address: 0x1a6bac, Func Offset: 0x5c
	// Line 964, Address: 0x1a6bb8, Func Offset: 0x68
	// Line 965, Address: 0x1a6bcc, Func Offset: 0x7c
	// Line 966, Address: 0x1a6bd8, Func Offset: 0x88
	// Line 967, Address: 0x1a6be0, Func Offset: 0x90
	// Line 970, Address: 0x1a6bf0, Func Offset: 0xa0
	// Line 971, Address: 0x1a6bf8, Func Offset: 0xa8
	// Line 975, Address: 0x1a6c00, Func Offset: 0xb0
	// Line 976, Address: 0x1a6c04, Func Offset: 0xb4
	// Line 977, Address: 0x1a6c10, Func Offset: 0xc0
	// Line 980, Address: 0x1a6c18, Func Offset: 0xc8
	// Line 981, Address: 0x1a6c28, Func Offset: 0xd8
	// Line 983, Address: 0x1a6c40, Func Offset: 0xf0
	// Line 984, Address: 0x1a6c48, Func Offset: 0xf8
	// Func End, Address: 0x1a6c50, Func Offset: 0x100
}

// sphereHitsModel3CB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6c50
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 931, Address: 0x1a6c54, Func Offset: 0x4
	// Func End, Address: 0x1a6c68, Func Offset: 0x18
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
	// Line 773, Address: 0x1a6c70, Func Offset: 0
	// Line 798, Address: 0x1a6c74, Func Offset: 0x4
	// Line 773, Address: 0x1a6c78, Func Offset: 0x8
	// Line 798, Address: 0x1a6c7c, Func Offset: 0xc
	// Line 773, Address: 0x1a6c80, Func Offset: 0x10
	// Line 774, Address: 0x1a6c98, Func Offset: 0x28
	// Line 773, Address: 0x1a6c9c, Func Offset: 0x2c
	// Line 803, Address: 0x1a6ca0, Func Offset: 0x30
	// Line 775, Address: 0x1a6ca4, Func Offset: 0x34
	// Line 803, Address: 0x1a6ca8, Func Offset: 0x38
	// Line 798, Address: 0x1a6cb0, Func Offset: 0x40
	// Line 803, Address: 0x1a6cb4, Func Offset: 0x44
	// Line 815, Address: 0x1a6cc0, Func Offset: 0x50
	// Line 819, Address: 0x1a6cd4, Func Offset: 0x64
	// Line 820, Address: 0x1a6cdc, Func Offset: 0x6c
	// Line 822, Address: 0x1a6ce0, Func Offset: 0x70
	// Line 825, Address: 0x1a6cec, Func Offset: 0x7c
	// Line 826, Address: 0x1a6cf4, Func Offset: 0x84
	// Line 829, Address: 0x1a6cf8, Func Offset: 0x88
	// Line 831, Address: 0x1a6d04, Func Offset: 0x94
	// Line 833, Address: 0x1a6d18, Func Offset: 0xa8
	// Line 836, Address: 0x1a6d20, Func Offset: 0xb0
	// Line 837, Address: 0x1a6d28, Func Offset: 0xb8
	// Line 838, Address: 0x1a6d2c, Func Offset: 0xbc
	// Line 844, Address: 0x1a6d30, Func Offset: 0xc0
	// Line 846, Address: 0x1a6d48, Func Offset: 0xd8
	// Line 852, Address: 0x1a6d5c, Func Offset: 0xec
	// Line 853, Address: 0x1a6d60, Func Offset: 0xf0
	// Line 852, Address: 0x1a6d68, Func Offset: 0xf8
	// Line 853, Address: 0x1a6d6c, Func Offset: 0xfc
	// Line 854, Address: 0x1a6da8, Func Offset: 0x138
	// Line 860, Address: 0x1a6db0, Func Offset: 0x140
	// Line 861, Address: 0x1a6db4, Func Offset: 0x144
	// Line 862, Address: 0x1a6dcc, Func Offset: 0x15c
	// Line 863, Address: 0x1a6dd4, Func Offset: 0x164
	// Line 864, Address: 0x1a6ddc, Func Offset: 0x16c
	// Line 865, Address: 0x1a6de4, Func Offset: 0x174
	// Line 867, Address: 0x1a6dec, Func Offset: 0x17c
	// Line 869, Address: 0x1a6df8, Func Offset: 0x188
	// Line 871, Address: 0x1a6e04, Func Offset: 0x194
	// Line 872, Address: 0x1a6e18, Func Offset: 0x1a8
	// Line 878, Address: 0x1a6e28, Func Offset: 0x1b8
	// Line 882, Address: 0x1a6e30, Func Offset: 0x1c0
	// Line 884, Address: 0x1a6e44, Func Offset: 0x1d4
	// Line 885, Address: 0x1a6e5c, Func Offset: 0x1ec
	// Line 886, Address: 0x1a6e64, Func Offset: 0x1f4
	// Line 887, Address: 0x1a6e70, Func Offset: 0x200
	// Line 916, Address: 0x1a6e78, Func Offset: 0x208
	// Line 917, Address: 0x1a6e80, Func Offset: 0x210
	// Func End, Address: 0x1a6e9c, Func Offset: 0x22c
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
	// Line 455, Address: 0x1a6ea0, Func Offset: 0
	// Line 483, Address: 0x1a6ea4, Func Offset: 0x4
	// Line 455, Address: 0x1a6ea8, Func Offset: 0x8
	// Line 483, Address: 0x1a6eac, Func Offset: 0xc
	// Line 455, Address: 0x1a6eb0, Func Offset: 0x10
	// Line 456, Address: 0x1a6ec8, Func Offset: 0x28
	// Line 455, Address: 0x1a6ecc, Func Offset: 0x2c
	// Line 488, Address: 0x1a6ed0, Func Offset: 0x30
	// Line 457, Address: 0x1a6ed4, Func Offset: 0x34
	// Line 488, Address: 0x1a6ed8, Func Offset: 0x38
	// Line 483, Address: 0x1a6ee0, Func Offset: 0x40
	// Line 488, Address: 0x1a6ee4, Func Offset: 0x44
	// Line 500, Address: 0x1a6eec, Func Offset: 0x4c
	// Line 504, Address: 0x1a6f04, Func Offset: 0x64
	// Line 505, Address: 0x1a6f0c, Func Offset: 0x6c
	// Line 507, Address: 0x1a6f10, Func Offset: 0x70
	// Line 510, Address: 0x1a6f1c, Func Offset: 0x7c
	// Line 511, Address: 0x1a6f24, Func Offset: 0x84
	// Line 526, Address: 0x1a6f28, Func Offset: 0x88
	// Line 530, Address: 0x1a6f4c, Func Offset: 0xac
	// Line 532, Address: 0x1a6f5c, Func Offset: 0xbc
	// Line 533, Address: 0x1a6f68, Func Offset: 0xc8
	// Line 534, Address: 0x1a6f70, Func Offset: 0xd0
	// Line 536, Address: 0x1a6f7c, Func Offset: 0xdc
	// Line 542, Address: 0x1a6fe0, Func Offset: 0x140
	// Line 543, Address: 0x1a6fe8, Func Offset: 0x148
	// Line 547, Address: 0x1a6ff0, Func Offset: 0x150
	// Line 553, Address: 0x1a7078, Func Offset: 0x1d8
	// Line 554, Address: 0x1a7080, Func Offset: 0x1e0
	// Line 558, Address: 0x1a7088, Func Offset: 0x1e8
	// Line 560, Address: 0x1a70b8, Func Offset: 0x218
	// Line 562, Address: 0x1a70c0, Func Offset: 0x220
	// Line 564, Address: 0x1a70d0, Func Offset: 0x230
	// Line 567, Address: 0x1a70dc, Func Offset: 0x23c
	// Line 566, Address: 0x1a70e0, Func Offset: 0x240
	// Line 567, Address: 0x1a70e4, Func Offset: 0x244
	// Line 566, Address: 0x1a70f0, Func Offset: 0x250
	// Line 567, Address: 0x1a70fc, Func Offset: 0x25c
	// Line 568, Address: 0x1a7118, Func Offset: 0x278
	// Line 570, Address: 0x1a7120, Func Offset: 0x280
	// Line 577, Address: 0x1a7130, Func Offset: 0x290
	// Line 570, Address: 0x1a713c, Func Offset: 0x29c
	// Line 576, Address: 0x1a7140, Func Offset: 0x2a0
	// Line 570, Address: 0x1a715c, Func Offset: 0x2bc
	// Line 576, Address: 0x1a717c, Func Offset: 0x2dc
	// Line 577, Address: 0x1a71a8, Func Offset: 0x308
	// Line 578, Address: 0x1a71b8, Func Offset: 0x318
	// Line 581, Address: 0x1a71c8, Func Offset: 0x328
	// Line 582, Address: 0x1a71d0, Func Offset: 0x330
	// Line 586, Address: 0x1a71d8, Func Offset: 0x338
	// Line 588, Address: 0x1a71e8, Func Offset: 0x348
	// Line 592, Address: 0x1a71f8, Func Offset: 0x358
	// Line 596, Address: 0x1a7200, Func Offset: 0x360
	// Line 600, Address: 0x1a7204, Func Offset: 0x364
	// Line 603, Address: 0x1a7210, Func Offset: 0x370
	// Line 604, Address: 0x1a7230, Func Offset: 0x390
	// Line 606, Address: 0x1a7238, Func Offset: 0x398
	// Line 607, Address: 0x1a7248, Func Offset: 0x3a8
	// Line 606, Address: 0x1a725c, Func Offset: 0x3bc
	// Line 608, Address: 0x1a727c, Func Offset: 0x3dc
	// Line 607, Address: 0x1a7280, Func Offset: 0x3e0
	// Line 608, Address: 0x1a7294, Func Offset: 0x3f4
	// Line 607, Address: 0x1a7298, Func Offset: 0x3f8
	// Line 608, Address: 0x1a72a8, Func Offset: 0x408
	// Line 610, Address: 0x1a72b0, Func Offset: 0x410
	// Line 611, Address: 0x1a72d0, Func Offset: 0x430
	// Line 612, Address: 0x1a72d4, Func Offset: 0x434
	// Line 611, Address: 0x1a72e0, Func Offset: 0x440
	// Line 612, Address: 0x1a7324, Func Offset: 0x484
	// Line 614, Address: 0x1a7334, Func Offset: 0x494
	// Line 615, Address: 0x1a733c, Func Offset: 0x49c
	// Line 621, Address: 0x1a7340, Func Offset: 0x4a0
	// Line 619, Address: 0x1a7344, Func Offset: 0x4a4
	// Line 617, Address: 0x1a7348, Func Offset: 0x4a8
	// Line 619, Address: 0x1a734c, Func Offset: 0x4ac
	// Line 623, Address: 0x1a7350, Func Offset: 0x4b0
	// Line 624, Address: 0x1a7354, Func Offset: 0x4b4
	// Line 621, Address: 0x1a735c, Func Offset: 0x4bc
	// Line 623, Address: 0x1a7364, Func Offset: 0x4c4
	// Line 624, Address: 0x1a7384, Func Offset: 0x4e4
	// Line 626, Address: 0x1a7398, Func Offset: 0x4f8
	// Line 630, Address: 0x1a73a0, Func Offset: 0x500
	// Line 634, Address: 0x1a73a8, Func Offset: 0x508
	// Line 636, Address: 0x1a73b0, Func Offset: 0x510
	// Line 637, Address: 0x1a73d0, Func Offset: 0x530
	// Line 639, Address: 0x1a73d8, Func Offset: 0x538
	// Line 643, Address: 0x1a73dc, Func Offset: 0x53c
	// Line 682, Address: 0x1a73e0, Func Offset: 0x540
	// Line 686, Address: 0x1a73fc, Func Offset: 0x55c
	// Line 688, Address: 0x1a7414, Func Offset: 0x574
	// Line 689, Address: 0x1a7424, Func Offset: 0x584
	// Line 690, Address: 0x1a743c, Func Offset: 0x59c
	// Line 691, Address: 0x1a7440, Func Offset: 0x5a0
	// Line 692, Address: 0x1a7450, Func Offset: 0x5b0
	// Line 693, Address: 0x1a747c, Func Offset: 0x5dc
	// Line 694, Address: 0x1a7480, Func Offset: 0x5e0
	// Line 695, Address: 0x1a7490, Func Offset: 0x5f0
	// Line 696, Address: 0x1a7494, Func Offset: 0x5f4
	// Line 695, Address: 0x1a74ac, Func Offset: 0x60c
	// Line 696, Address: 0x1a74b0, Func Offset: 0x610
	// Line 697, Address: 0x1a74c4, Func Offset: 0x624
	// Line 701, Address: 0x1a74e8, Func Offset: 0x648
	// Line 712, Address: 0x1a7504, Func Offset: 0x664
	// Line 716, Address: 0x1a750c, Func Offset: 0x66c
	// Line 718, Address: 0x1a7520, Func Offset: 0x680
	// Line 719, Address: 0x1a7534, Func Offset: 0x694
	// Line 720, Address: 0x1a753c, Func Offset: 0x69c
	// Line 721, Address: 0x1a7548, Func Offset: 0x6a8
	// Line 724, Address: 0x1a7550, Func Offset: 0x6b0
	// Line 752, Address: 0x1a756c, Func Offset: 0x6cc
	// Line 754, Address: 0x1a757c, Func Offset: 0x6dc
	// Line 755, Address: 0x1a7584, Func Offset: 0x6e4
	// Line 757, Address: 0x1a7588, Func Offset: 0x6e8
	// Line 758, Address: 0x1a7590, Func Offset: 0x6f0
	// Func End, Address: 0x1a75ac, Func Offset: 0x70c
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
	// Line 313, Address: 0x1a75b0, Func Offset: 0
	// Line 332, Address: 0x1a75cc, Func Offset: 0x1c
	// Line 315, Address: 0x1a75d0, Func Offset: 0x20
	// Line 332, Address: 0x1a75d4, Func Offset: 0x24
	// Line 333, Address: 0x1a75dc, Func Offset: 0x2c
	// Line 334, Address: 0x1a75e0, Func Offset: 0x30
	// Line 335, Address: 0x1a75ec, Func Offset: 0x3c
	// Line 342, Address: 0x1a75f0, Func Offset: 0x40
	// Line 347, Address: 0x1a75f8, Func Offset: 0x48
	// Line 342, Address: 0x1a7600, Func Offset: 0x50
	// Line 347, Address: 0x1a7604, Func Offset: 0x54
	// Line 352, Address: 0x1a7614, Func Offset: 0x64
	// Line 354, Address: 0x1a7628, Func Offset: 0x78
	// Line 357, Address: 0x1a7630, Func Offset: 0x80
	// Line 361, Address: 0x1a763c, Func Offset: 0x8c
	// Line 362, Address: 0x1a7644, Func Offset: 0x94
	// Line 364, Address: 0x1a7648, Func Offset: 0x98
	// Line 366, Address: 0x1a7654, Func Offset: 0xa4
	// Line 367, Address: 0x1a765c, Func Offset: 0xac
	// Line 370, Address: 0x1a7660, Func Offset: 0xb0
	// Line 371, Address: 0x1a7670, Func Offset: 0xc0
	// Line 375, Address: 0x1a7678, Func Offset: 0xc8
	// Line 379, Address: 0x1a767c, Func Offset: 0xcc
	// Line 380, Address: 0x1a768c, Func Offset: 0xdc
	// Line 381, Address: 0x1a76a4, Func Offset: 0xf4
	// Line 382, Address: 0x1a76a8, Func Offset: 0xf8
	// Line 383, Address: 0x1a76b8, Func Offset: 0x108
	// Line 385, Address: 0x1a76d0, Func Offset: 0x120
	// Line 386, Address: 0x1a76e0, Func Offset: 0x130
	// Line 389, Address: 0x1a76e8, Func Offset: 0x138
	// Line 386, Address: 0x1a76ec, Func Offset: 0x13c
	// Line 388, Address: 0x1a76f0, Func Offset: 0x140
	// Line 386, Address: 0x1a76f8, Func Offset: 0x148
	// Line 389, Address: 0x1a76fc, Func Offset: 0x14c
	// Line 386, Address: 0x1a7704, Func Offset: 0x154
	// Line 388, Address: 0x1a7708, Func Offset: 0x158
	// Line 389, Address: 0x1a7710, Func Offset: 0x160
	// Line 388, Address: 0x1a7718, Func Offset: 0x168
	// Line 389, Address: 0x1a771c, Func Offset: 0x16c
	// Line 390, Address: 0x1a7720, Func Offset: 0x170
	// Line 391, Address: 0x1a7744, Func Offset: 0x194
	// Line 392, Address: 0x1a7748, Func Offset: 0x198
	// Line 393, Address: 0x1a7758, Func Offset: 0x1a8
	// Line 438, Address: 0x1a7760, Func Offset: 0x1b0
	// Line 439, Address: 0x1a7764, Func Offset: 0x1b4
	// Line 438, Address: 0x1a7768, Func Offset: 0x1b8
	// Line 440, Address: 0x1a7770, Func Offset: 0x1c0
	// Func End, Address: 0x1a7788, Func Offset: 0x1d8
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
	// Line 219, Address: 0x1a7790, Func Offset: 0
	// Line 226, Address: 0x1a77c8, Func Offset: 0x38
	// Line 222, Address: 0x1a77e0, Func Offset: 0x50
	// Line 226, Address: 0x1a77e4, Func Offset: 0x54
	// Line 237, Address: 0x1a77ec, Func Offset: 0x5c
	// Line 226, Address: 0x1a77f0, Func Offset: 0x60
	// Line 229, Address: 0x1a7818, Func Offset: 0x88
	// Line 232, Address: 0x1a7824, Func Offset: 0x94
	// Line 229, Address: 0x1a782c, Func Offset: 0x9c
	// Line 232, Address: 0x1a7840, Func Offset: 0xb0
	// Line 234, Address: 0x1a7854, Func Offset: 0xc4
	// Line 237, Address: 0x1a7858, Func Offset: 0xc8
	// Line 234, Address: 0x1a785c, Func Offset: 0xcc
	// Line 237, Address: 0x1a7884, Func Offset: 0xf4
	// Line 239, Address: 0x1a7898, Func Offset: 0x108
	// Line 241, Address: 0x1a789c, Func Offset: 0x10c
	// Line 248, Address: 0x1a78a8, Func Offset: 0x118
	// Line 242, Address: 0x1a78ac, Func Offset: 0x11c
	// Line 248, Address: 0x1a78b0, Func Offset: 0x120
	// Line 256, Address: 0x1a78b8, Func Offset: 0x128
	// Line 259, Address: 0x1a78f4, Func Offset: 0x164
	// Line 260, Address: 0x1a7910, Func Offset: 0x180
	// Line 259, Address: 0x1a7914, Func Offset: 0x184
	// Line 260, Address: 0x1a7920, Func Offset: 0x190
	// Line 259, Address: 0x1a7928, Func Offset: 0x198
	// Line 260, Address: 0x1a792c, Func Offset: 0x19c
	// Line 262, Address: 0x1a793c, Func Offset: 0x1ac
	// Line 265, Address: 0x1a7954, Func Offset: 0x1c4
	// Line 263, Address: 0x1a7958, Func Offset: 0x1c8
	// Line 265, Address: 0x1a795c, Func Offset: 0x1cc
	// Line 267, Address: 0x1a796c, Func Offset: 0x1dc
	// Line 268, Address: 0x1a7984, Func Offset: 0x1f4
	// Line 270, Address: 0x1a7988, Func Offset: 0x1f8
	// Line 271, Address: 0x1a798c, Func Offset: 0x1fc
	// Func End, Address: 0x1a79b8, Func Offset: 0x228
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
	// Line 162, Address: 0x1a79c0, Func Offset: 0
	// Line 167, Address: 0x1a79c4, Func Offset: 0x4
	// Line 174, Address: 0x1a79d0, Func Offset: 0x10
	// Line 167, Address: 0x1a79d8, Func Offset: 0x18
	// Line 174, Address: 0x1a79e8, Func Offset: 0x28
	// Line 167, Address: 0x1a79f8, Func Offset: 0x38
	// Line 174, Address: 0x1a79fc, Func Offset: 0x3c
	// Line 176, Address: 0x1a7a14, Func Offset: 0x54
	// Line 181, Address: 0x1a7a28, Func Offset: 0x68
	// Line 182, Address: 0x1a7a30, Func Offset: 0x70
	// Line 187, Address: 0x1a7a38, Func Offset: 0x78
	// Line 189, Address: 0x1a7a48, Func Offset: 0x88
	// Line 195, Address: 0x1a7a54, Func Offset: 0x94
	// Line 197, Address: 0x1a7a60, Func Offset: 0xa0
	// Line 198, Address: 0x1a7a6c, Func Offset: 0xac
	// Line 199, Address: 0x1a7a74, Func Offset: 0xb4
	// Line 205, Address: 0x1a7a80, Func Offset: 0xc0
	// Line 207, Address: 0x1a7a8c, Func Offset: 0xcc
	// Line 209, Address: 0x1a7a90, Func Offset: 0xd0
	// Line 210, Address: 0x1a7a98, Func Offset: 0xd8
	// Func End, Address: 0x1a7aa0, Func Offset: 0xe0
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
	// Line 89, Address: 0x1a7aa0, Func Offset: 0
	// Line 83, Address: 0x1a7aa4, Func Offset: 0x4
	// Line 90, Address: 0x1a7aa8, Func Offset: 0x8
	// Line 91, Address: 0x1a7aac, Func Offset: 0xc
	// Line 90, Address: 0x1a7ab0, Func Offset: 0x10
	// Line 91, Address: 0x1a7ab4, Func Offset: 0x14
	// Line 93, Address: 0x1a7ab8, Func Offset: 0x18
	// Line 96, Address: 0x1a7b08, Func Offset: 0x68
	// Line 98, Address: 0x1a7b2c, Func Offset: 0x8c
	// Line 103, Address: 0x1a7b30, Func Offset: 0x90
	// Line 105, Address: 0x1a7b38, Func Offset: 0x98
	// Line 110, Address: 0x1a7c00, Func Offset: 0x160
	// Line 112, Address: 0x1a7c0c, Func Offset: 0x16c
	// Line 114, Address: 0x1a7c24, Func Offset: 0x184
	// Line 117, Address: 0x1a7c2c, Func Offset: 0x18c
	// Line 119, Address: 0x1a7c30, Func Offset: 0x190
	// Line 121, Address: 0x1a7c38, Func Offset: 0x198
	// Line 126, Address: 0x1a7d00, Func Offset: 0x260
	// Line 128, Address: 0x1a7d0c, Func Offset: 0x26c
	// Line 130, Address: 0x1a7d24, Func Offset: 0x284
	// Line 133, Address: 0x1a7d2c, Func Offset: 0x28c
	// Line 135, Address: 0x1a7d30, Func Offset: 0x290
	// Line 137, Address: 0x1a7d38, Func Offset: 0x298
	// Line 142, Address: 0x1a7e00, Func Offset: 0x360
	// Line 144, Address: 0x1a7e0c, Func Offset: 0x36c
	// Line 148, Address: 0x1a7e24, Func Offset: 0x384
	// Line 151, Address: 0x1a7e28, Func Offset: 0x388
	// Func End, Address: 0x1a7e30, Func Offset: 0x390
}

// iCollideInit__FP6xScene
// Start address: 0x1a7e30
void iCollideInit()
{
	// Line 45, Address: 0x1a7e30, Func Offset: 0
	// Func End, Address: 0x1a7e38, Func Offset: 0x8
}

