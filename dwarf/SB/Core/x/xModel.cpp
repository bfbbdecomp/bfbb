typedef struct xModelInstance;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpClump;
typedef struct RxPipelineNode;
typedef struct xQuat;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwCamera;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct RwMatrixTag;
typedef struct RpTriangle;
typedef struct RxPipeline;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RpSector;
typedef struct RpMeshHeader;
typedef struct xVec3;
typedef struct xAnimTransitionList;
typedef struct RwResEntry;
typedef struct RwSurfaceProperties;
typedef struct basic_rect;
typedef struct RpWorld;
typedef struct xModelBucket;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct rxReq;
typedef struct xAnimTransition;
typedef struct xModelPipeLookup;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpLight;
typedef struct xModelPool;
typedef struct RwV2d;
typedef enum RwVideoModeFlag;
typedef enum eHudID;
typedef struct RpAtomic;
typedef struct xMat4x3;
typedef struct xLightKit;
typedef struct xAnimState;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct xAnimSingle;
typedef enum rxEmbeddedPacketState;
typedef struct RwLLLink;
typedef struct xLightKitLight;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xAnimMultiFileBase;
typedef struct RpVertexNormal;
typedef struct RxClusterDefinition;
typedef struct _class;
typedef struct xAnimEffect;
typedef struct RwSphere;
typedef struct RpInterpolator;
typedef struct RwTexDictionary;
typedef struct xModelPipeInfo;
typedef struct RwVideoMode;
typedef struct RxOutputSpec;
typedef struct xAnimPlay;
typedef struct xMat3x3;
typedef struct RpPolygon;
typedef struct RxClusterRef;
typedef struct RpMaterialList;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RpGeometry;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;

typedef RpAtomic*(*type_0)(RpAtomic*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_7)(RxNodeDefinition*);
typedef void(*type_8)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_9)(RxNodeDefinition*);
typedef int32(*type_11)(RxPipelineNode*);
typedef void(*type_12)(RxPipelineNode*);
typedef int32(*type_14)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef uint32(*type_17)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_21)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_27)(RwCamera*);
typedef RwCamera*(*type_28)(RwCamera*);
typedef void(*type_29)(xMemPool*, void*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RwObjectHasFrame*(*type_36)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef RwV3d type_6[8];
typedef RwTexCoords* type_10[8];
typedef int32 type_13[16];
typedef RwV2d type_16[2];
typedef float32 type_18[16];
typedef float32 type_19[2];
typedef uint32 type_20[4];
typedef xModelPipeInfo* type_22[16];
typedef uint8 type_23[2];
typedef xAnimMultiFileEntry type_24[1];
typedef uint32 type_25[4096];
typedef uint16 type_26[3];
typedef int8 type_30[32];
typedef int8 type_32[32];
typedef RwTexCoords* type_34[8];
typedef RxCluster type_35[1];
typedef uint16 type_37[3];

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
	_class anim_coll;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RpSector
{
	int32 type;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct rxReq
{
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

struct xModelPipeLookup
{
	RpAtomic* model;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x100,
	rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x200,
	rwVIDEOMODE_XBOX_WIDESCREEN = 0x100,
	rwVIDEOMODE_XBOX_PROGRESSIVE = 0x200,
	rwVIDEOMODE_XBOX_FIELD = 0x400,
	rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x800,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

enum eHudID
{
	eHudIDUnknown,
	eHudIDScoobyHead0,
	eHudIDScoobyHead1,
	eHudIDScoobyHead2,
	eHudIDScoobyHead3,
	eHudIDScoobyHead4,
	eHudIDScoobyHead5,
	eHudIDGumPack,
	eHudIDGumPiece,
	eHudIDSnack,
	eHudIDSnackPiece,
	eHudIDBarSoap,
	eHudIDSoapPiece,
	eHudIDBoxSoap,
	eHudIDHealthBar,
	eHudIDClue,
	eHudIDTotal
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _class
{
	xVec3* verts;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xModelPipeInfo
{
	uint32 ModelHashID;
	uint32 SubObjectBits;
	uint32 PipeFlags;
};

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
	int32 refRate;
	int32 format;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwLinkList
{
	RwLLLink link;
};

RpMorphTarget anim_coll_old_mt;
xModelPool* sxModelPoolList;
RwCamera* subcamera;
int32 xModelPipeNumTables;
int32 xModelPipeCount[16];
xModelPipeInfo* xModelPipeData[16];
int32 xModelLookupCount;
xModelPipeLookup* xModelLookupList;
int32 xModelInstStaticAlloc;
int32 xModelBucketEnabled;
eHudID sHudItem;
int32 sHudItemVisible;
xMat4x3 g_I3;
uint32 gActiveHeap;
RwRaster* ShadowRenderRaster;
uint32 ourGlobals[4096];

void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, uint32 index);
xVec3 xModelGetBoneLocation(xModelInstance& model, uint32 index);
void xModelAnimCollRefresh(xModelInstance& cm);
void xModelAnimCollStart(xModelInstance& m);
void xModel_SceneExit(RpWorld* world);
void xModel_SceneEnter(RpWorld* world);
void xModelSetMaterialAlpha(xModelInstance* modelInst, uint8 alpha);
void CameraDestroy(RwCamera* camera);
void xModelRender2D(xModelInstance& model, basic_rect& r, xVec3& from, xVec3& to);
void xModelRender(xModelInstance* modelInst);
void xModelRenderSingle(xModelInstance* modelInst);
void xModelEval(xModelInstance* modelInst);
void xModelEvalSingle(xModelInstance* modelInst);
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta);
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, uint32 flags);
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent);
void xModelInstanceFree(xModelInstance* modelInst);
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, uint16 flags, uint8 boneIndex, uint8* boneRemap);
void xModelPoolInit(uint32 count, uint32 numMatrices);
void xModelInit();
uint32 xModelGetPipeFlags(RpAtomic* model);

// xModelGetBoneMat__FR7xMat4x3RC14xModelInstanceUi
// Start address: 0x1f0be0
void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, uint32 index)
{
	xMat4x3& root_mat;
	// Line 1205, Address: 0x1f0be0, Func Offset: 0
	// Line 1208, Address: 0x1f0be8, Func Offset: 0x8
	// Line 1212, Address: 0x1f0c78, Func Offset: 0x98
	// Line 1215, Address: 0x1f0c88, Func Offset: 0xa8
	// Func End, Address: 0x1f0c94, Func Offset: 0xb4
}

// xModelGetBoneLocation__FRC14xModelInstanceUi
// Start address: 0x1f0ca0
xVec3 xModelGetBoneLocation(xModelInstance& model, uint32 index)
{
	xMat4x3& root_mat;
	xMat4x3& anim_mat;
	xVec3 ret;
	// Line 1192, Address: 0x1f0ca0, Func Offset: 0
	// Line 1196, Address: 0x1f0ca4, Func Offset: 0x4
	// Line 1192, Address: 0x1f0ca8, Func Offset: 0x8
	// Line 1197, Address: 0x1f0cac, Func Offset: 0xc
	// Line 1200, Address: 0x1f0cd0, Func Offset: 0x30
	// Line 1197, Address: 0x1f0cd4, Func Offset: 0x34
	// Line 1200, Address: 0x1f0cd8, Func Offset: 0x38
	// Line 1197, Address: 0x1f0ce0, Func Offset: 0x40
	// Line 1200, Address: 0x1f0ce4, Func Offset: 0x44
	// Line 1197, Address: 0x1f0ce8, Func Offset: 0x48
	// Line 1200, Address: 0x1f0cec, Func Offset: 0x4c
	// Line 1201, Address: 0x1f0cf4, Func Offset: 0x54
	// Line 1200, Address: 0x1f0cf8, Func Offset: 0x58
	// Line 1201, Address: 0x1f0d78, Func Offset: 0xd8
	// Line 1202, Address: 0x1f0d90, Func Offset: 0xf0
	// Func End, Address: 0x1f0d98, Func Offset: 0xf8
}

// xModelAnimCollRefresh__FRC14xModelInstance
// Start address: 0x1f0da0
void xModelAnimCollRefresh(xModelInstance& cm)
{
	uint32 size;
	xMat4x3& mat;
	xMat4x3 old_mat;
	// Line 1178, Address: 0x1f0da0, Func Offset: 0
	// Line 1181, Address: 0x1f0db4, Func Offset: 0x14
	// Line 1182, Address: 0x1f0dbc, Func Offset: 0x1c
	// Line 1183, Address: 0x1f0dc0, Func Offset: 0x20
	// Line 1184, Address: 0x1f0df0, Func Offset: 0x50
	// Line 1186, Address: 0x1f0e0c, Func Offset: 0x6c
	// Line 1184, Address: 0x1f0e10, Func Offset: 0x70
	// Line 1186, Address: 0x1f0e24, Func Offset: 0x84
	// Line 1184, Address: 0x1f0e28, Func Offset: 0x88
	// Line 1186, Address: 0x1f0ea8, Func Offset: 0x108
	// Line 1187, Address: 0x1f0ebc, Func Offset: 0x11c
	// Line 1188, Address: 0x1f0f4c, Func Offset: 0x1ac
	// Line 1189, Address: 0x1f0f58, Func Offset: 0x1b8
	// Func End, Address: 0x1f0f6c, Func Offset: 0x1cc
}

// xModelAnimCollStart__FR14xModelInstance
// Start address: 0x1f0f70
void xModelAnimCollStart(xModelInstance& m)
{
	uint32 size;
	// Line 1166, Address: 0x1f0f70, Func Offset: 0
	// Line 1167, Address: 0x1f0f74, Func Offset: 0x4
	// Line 1166, Address: 0x1f0f78, Func Offset: 0x8
	// Line 1167, Address: 0x1f0f80, Func Offset: 0x10
	// Line 1168, Address: 0x1f0f90, Func Offset: 0x20
	// Line 1170, Address: 0x1f0f9c, Func Offset: 0x2c
	// Line 1171, Address: 0x1f0fa4, Func Offset: 0x34
	// Line 1172, Address: 0x1f0fac, Func Offset: 0x3c
	// Line 1175, Address: 0x1f0fc8, Func Offset: 0x58
	// Func End, Address: 0x1f0fd8, Func Offset: 0x68
}

// xModel_SceneExit__FP7RpWorld
// Start address: 0x1f0fe0
void xModel_SceneExit(RpWorld* world)
{
	// Line 1161, Address: 0x1f0fe0, Func Offset: 0
	// Func End, Address: 0x1f0fe8, Func Offset: 0x8
}

// xModel_SceneEnter__FP7RpWorld
// Start address: 0x1f0ff0
void xModel_SceneEnter(RpWorld* world)
{
	// Line 1149, Address: 0x1f0ff0, Func Offset: 0
	// Func End, Address: 0x1f0ff8, Func Offset: 0x8
}

// xModelSetMaterialAlpha__FP14xModelInstanceUc
// Start address: 0x1f1000
void xModelSetMaterialAlpha(xModelInstance* modelInst, uint8 alpha)
{
	// Line 1116, Address: 0x1f1000, Func Offset: 0
	// Func End, Address: 0x1f1008, Func Offset: 0x8
}

// CameraDestroy__FP8RwCamera
// Start address: 0x1f1010
void CameraDestroy(RwCamera* camera)
{
	RwRaster* raster;
	RwFrame* frame;
	// Line 1028, Address: 0x1f1010, Func Offset: 0
	// Line 1029, Address: 0x1f1020, Func Offset: 0x10
	// Line 1036, Address: 0x1f1028, Func Offset: 0x18
	// Line 1038, Address: 0x1f1030, Func Offset: 0x20
	// Line 1039, Address: 0x1f1034, Func Offset: 0x24
	// Line 1041, Address: 0x1f103c, Func Offset: 0x2c
	// Line 1043, Address: 0x1f1044, Func Offset: 0x34
	// Line 1044, Address: 0x1f104c, Func Offset: 0x3c
	// Line 1046, Address: 0x1f1050, Func Offset: 0x40
	// Line 1047, Address: 0x1f1054, Func Offset: 0x44
	// Line 1049, Address: 0x1f105c, Func Offset: 0x4c
	// Line 1051, Address: 0x1f1064, Func Offset: 0x54
	// Line 1054, Address: 0x1f1068, Func Offset: 0x58
	// Line 1055, Address: 0x1f106c, Func Offset: 0x5c
	// Line 1057, Address: 0x1f1074, Func Offset: 0x64
	// Line 1059, Address: 0x1f107c, Func Offset: 0x6c
	// Line 1062, Address: 0x1f1080, Func Offset: 0x70
	// Line 1066, Address: 0x1f1088, Func Offset: 0x78
	// Func End, Address: 0x1f109c, Func Offset: 0x8c
}

// xModelRender2D__FRC14xModelInstanceRC13basic_rect<f>RC5xVec3RC5xVec3
// Start address: 0x1f10a0
void xModelRender2D(xModelInstance& model, basic_rect& r, xVec3& from, xVec3& to)
{
	RwCamera* camera;
	RwMatrixTag* cammat;
	xMat4x3 objmat;
	xMat4x3 shearmat;
	xMat4x3 temp1;
	xMat4x3 temp2;
	RwV2d* camvw;
	float32 viewscale;
	float32 shearX;
	float32 shearY;
	// Line 828, Address: 0x1f10a0, Func Offset: 0
	// Line 837, Address: 0x1f10a8, Func Offset: 0x8
	// Line 828, Address: 0x1f10ac, Func Offset: 0xc
	// Line 837, Address: 0x1f10d4, Func Offset: 0x34
	// Line 840, Address: 0x1f1138, Func Offset: 0x98
	// Line 842, Address: 0x1f1140, Func Offset: 0xa0
	// Line 844, Address: 0x1f1148, Func Offset: 0xa8
	// Line 847, Address: 0x1f1150, Func Offset: 0xb0
	// Line 844, Address: 0x1f1154, Func Offset: 0xb4
	// Line 847, Address: 0x1f1158, Func Offset: 0xb8
	// Line 848, Address: 0x1f1190, Func Offset: 0xf0
	// Line 849, Address: 0x1f119c, Func Offset: 0xfc
	// Line 869, Address: 0x1f11a0, Func Offset: 0x100
	// Line 850, Address: 0x1f11a4, Func Offset: 0x104
	// Line 869, Address: 0x1f11a8, Func Offset: 0x108
	// Line 851, Address: 0x1f11ac, Func Offset: 0x10c
	// Line 910, Address: 0x1f11b0, Func Offset: 0x110
	// Line 851, Address: 0x1f11b4, Func Offset: 0x114
	// Line 870, Address: 0x1f11b8, Func Offset: 0x118
	// Line 851, Address: 0x1f11bc, Func Offset: 0x11c
	// Line 910, Address: 0x1f11c0, Func Offset: 0x120
	// Line 851, Address: 0x1f11c4, Func Offset: 0x124
	// Line 910, Address: 0x1f11c8, Func Offset: 0x128
	// Line 851, Address: 0x1f11cc, Func Offset: 0x12c
	// Line 870, Address: 0x1f11d4, Func Offset: 0x134
	// Line 851, Address: 0x1f11dc, Func Offset: 0x13c
	// Line 852, Address: 0x1f11e4, Func Offset: 0x144
	// Line 851, Address: 0x1f11e8, Func Offset: 0x148
	// Line 870, Address: 0x1f1204, Func Offset: 0x164
	// Line 871, Address: 0x1f1208, Func Offset: 0x168
	// Line 867, Address: 0x1f120c, Func Offset: 0x16c
	// Line 871, Address: 0x1f1214, Func Offset: 0x174
	// Line 870, Address: 0x1f121c, Func Offset: 0x17c
	// Line 871, Address: 0x1f1220, Func Offset: 0x180
	// Line 881, Address: 0x1f1224, Func Offset: 0x184
	// Line 874, Address: 0x1f1228, Func Offset: 0x188
	// Line 875, Address: 0x1f122c, Func Offset: 0x18c
	// Line 876, Address: 0x1f1230, Func Offset: 0x190
	// Line 878, Address: 0x1f1234, Func Offset: 0x194
	// Line 871, Address: 0x1f1238, Func Offset: 0x198
	// Line 882, Address: 0x1f123c, Func Offset: 0x19c
	// Line 883, Address: 0x1f1240, Func Offset: 0x1a0
	// Line 884, Address: 0x1f1244, Func Offset: 0x1a4
	// Line 885, Address: 0x1f1248, Func Offset: 0x1a8
	// Line 870, Address: 0x1f124c, Func Offset: 0x1ac
	// Line 869, Address: 0x1f1250, Func Offset: 0x1b0
	// Line 870, Address: 0x1f1258, Func Offset: 0x1b8
	// Line 871, Address: 0x1f125c, Func Offset: 0x1bc
	// Line 870, Address: 0x1f1260, Func Offset: 0x1c0
	// Line 871, Address: 0x1f1264, Func Offset: 0x1c4
	// Line 870, Address: 0x1f1268, Func Offset: 0x1c8
	// Line 871, Address: 0x1f126c, Func Offset: 0x1cc
	// Line 873, Address: 0x1f1270, Func Offset: 0x1d0
	// Line 877, Address: 0x1f1274, Func Offset: 0x1d4
	// Line 879, Address: 0x1f1278, Func Offset: 0x1d8
	// Line 910, Address: 0x1f127c, Func Offset: 0x1dc
	// Line 911, Address: 0x1f1284, Func Offset: 0x1e4
	// Line 912, Address: 0x1f1294, Func Offset: 0x1f4
	// Line 926, Address: 0x1f12a4, Func Offset: 0x204
	// Line 930, Address: 0x1f12b8, Func Offset: 0x218
	// Line 926, Address: 0x1f12c8, Func Offset: 0x228
	// Line 930, Address: 0x1f1348, Func Offset: 0x2a8
	// Line 932, Address: 0x1f13cc, Func Offset: 0x32c
	// Line 933, Address: 0x1f13d8, Func Offset: 0x338
	// Line 934, Address: 0x1f146c, Func Offset: 0x3cc
	// Func End, Address: 0x1f1494, Func Offset: 0x3f4
}

// xModelRender__FP14xModelInstance
// Start address: 0x1f14a0
void xModelRender(xModelInstance* modelInst)
{
	// Line 545, Address: 0x1f14a0, Func Offset: 0
	// Line 548, Address: 0x1f14b0, Func Offset: 0x10
	// Line 549, Address: 0x1f14b8, Func Offset: 0x18
	// Line 550, Address: 0x1f14c4, Func Offset: 0x24
	// Line 552, Address: 0x1f14d8, Func Offset: 0x38
	// Line 553, Address: 0x1f14e0, Func Offset: 0x40
	// Line 554, Address: 0x1f14e4, Func Offset: 0x44
	// Line 557, Address: 0x1f14f0, Func Offset: 0x50
	// Func End, Address: 0x1f1500, Func Offset: 0x60
}

// xModelRenderSingle__FP14xModelInstance
// Start address: 0x1f1500
void xModelRenderSingle(xModelInstance* modelInst)
{
	uint8 reset;
	xMat3x3 tmpmat;
	xAnimPlay* a;
	uint16 i;
	// Line 466, Address: 0x1f1500, Func Offset: 0
	// Line 467, Address: 0x1f1504, Func Offset: 0x4
	// Line 466, Address: 0x1f1508, Func Offset: 0x8
	// Line 467, Address: 0x1f1518, Func Offset: 0x18
	// Line 468, Address: 0x1f1528, Func Offset: 0x28
	// Line 472, Address: 0x1f152c, Func Offset: 0x2c
	// Line 473, Address: 0x1f1544, Func Offset: 0x44
	// Line 474, Address: 0x1f15b0, Func Offset: 0xb0
	// Line 485, Address: 0x1f165c, Func Offset: 0x15c
	// Line 489, Address: 0x1f1660, Func Offset: 0x160
	// Line 492, Address: 0x1f1678, Func Offset: 0x178
	// Line 494, Address: 0x1f16b0, Func Offset: 0x1b0
	// Line 500, Address: 0x1f16c0, Func Offset: 0x1c0
	// Line 503, Address: 0x1f171c, Func Offset: 0x21c
	// Line 506, Address: 0x1f172c, Func Offset: 0x22c
	// Line 508, Address: 0x1f1730, Func Offset: 0x230
	// Line 509, Address: 0x1f1748, Func Offset: 0x248
	// Line 511, Address: 0x1f176c, Func Offset: 0x26c
	// Line 512, Address: 0x1f1774, Func Offset: 0x274
	// Line 516, Address: 0x1f17e8, Func Offset: 0x2e8
	// Line 517, Address: 0x1f17f0, Func Offset: 0x2f0
	// Line 519, Address: 0x1f1804, Func Offset: 0x304
	// Line 525, Address: 0x1f1810, Func Offset: 0x310
	// Line 528, Address: 0x1f181c, Func Offset: 0x31c
	// Line 530, Address: 0x1f1820, Func Offset: 0x320
	// Line 531, Address: 0x1f1828, Func Offset: 0x328
	// Line 534, Address: 0x1f1830, Func Offset: 0x330
	// Line 535, Address: 0x1f1848, Func Offset: 0x348
	// Line 538, Address: 0x1f18b4, Func Offset: 0x3b4
	// Line 539, Address: 0x1f18b8, Func Offset: 0x3b8
	// Func End, Address: 0x1f18cc, Func Offset: 0x3cc
}

// xModelEval__FP14xModelInstance
// Start address: 0x1f18d0
void xModelEval(xModelInstance* modelInst)
{
	// Line 450, Address: 0x1f18d0, Func Offset: 0
	// Line 453, Address: 0x1f18e0, Func Offset: 0x10
	// Line 454, Address: 0x1f18e8, Func Offset: 0x18
	// Line 455, Address: 0x1f18f0, Func Offset: 0x20
	// Line 456, Address: 0x1f18f4, Func Offset: 0x24
	// Line 459, Address: 0x1f1900, Func Offset: 0x30
	// Func End, Address: 0x1f1910, Func Offset: 0x40
}

// xModelEvalSingle__FP14xModelInstance
// Start address: 0x1f1910
void xModelEvalSingle(xModelInstance* modelInst)
{
	int32 i;
	xModelInstance* dad;
	uint8* remap;
	// Line 397, Address: 0x1f1910, Func Offset: 0
	// Line 400, Address: 0x1f192c, Func Offset: 0x1c
	// Line 401, Address: 0x1f1938, Func Offset: 0x28
	// Line 403, Address: 0x1f1944, Func Offset: 0x34
	// Line 405, Address: 0x1f195c, Func Offset: 0x4c
	// Line 409, Address: 0x1f1964, Func Offset: 0x54
	// Line 413, Address: 0x1f196c, Func Offset: 0x5c
	// Line 415, Address: 0x1f1984, Func Offset: 0x74
	// Line 420, Address: 0x1f199c, Func Offset: 0x8c
	// Line 418, Address: 0x1f19a4, Func Offset: 0x94
	// Line 420, Address: 0x1f19a8, Func Offset: 0x98
	// Line 422, Address: 0x1f19b0, Func Offset: 0xa0
	// Line 424, Address: 0x1f19c0, Func Offset: 0xb0
	// Line 425, Address: 0x1f19f0, Func Offset: 0xe0
	// Line 427, Address: 0x1f1a04, Func Offset: 0xf4
	// Line 430, Address: 0x1f1a1c, Func Offset: 0x10c
	// Line 432, Address: 0x1f1a38, Func Offset: 0x128
	// Line 433, Address: 0x1f1a50, Func Offset: 0x140
	// Line 434, Address: 0x1f1a58, Func Offset: 0x148
	// Line 438, Address: 0x1f1a68, Func Offset: 0x158
	// Line 439, Address: 0x1f1a74, Func Offset: 0x164
	// Line 438, Address: 0x1f1a78, Func Offset: 0x168
	// Line 439, Address: 0x1f1a7c, Func Offset: 0x16c
	// Line 444, Address: 0x1f1a90, Func Offset: 0x180
	// Func End, Address: 0x1f1aac, Func Offset: 0x19c
}

// xModelUpdate__FP14xModelInstancef
// Start address: 0x1f1ab0
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta)
{
	// Line 372, Address: 0x1f1ab0, Func Offset: 0
	// Line 375, Address: 0x1f1ac4, Func Offset: 0x14
	// Line 377, Address: 0x1f1ad4, Func Offset: 0x24
	// Line 379, Address: 0x1f1aec, Func Offset: 0x3c
	// Line 380, Address: 0x1f1af8, Func Offset: 0x48
	// Line 382, Address: 0x1f1b00, Func Offset: 0x50
	// Line 383, Address: 0x1f1b0c, Func Offset: 0x5c
	// Line 385, Address: 0x1f1b10, Func Offset: 0x60
	// Line 386, Address: 0x1f1b14, Func Offset: 0x64
	// Line 389, Address: 0x1f1b20, Func Offset: 0x70
	// Func End, Address: 0x1f1b34, Func Offset: 0x84
}

// xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi
// Start address: 0x1f1b40
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, uint32 flags)
{
	uint32 boneCount;
	RwMatrixTag* allocmats;
	// Line 351, Address: 0x1f1b40, Func Offset: 0
	// Line 352, Address: 0x1f1b54, Func Offset: 0x14
	// Line 357, Address: 0x1f1b70, Func Offset: 0x30
	// Line 361, Address: 0x1f1b78, Func Offset: 0x38
	// Line 362, Address: 0x1f1b98, Func Offset: 0x58
	// Line 363, Address: 0x1f1b9c, Func Offset: 0x5c
	// Line 365, Address: 0x1f1ba0, Func Offset: 0x60
	// Func End, Address: 0x1f1bb4, Func Offset: 0x74
}

// xModelInstanceAttach__FP14xModelInstanceP14xModelInstance
// Start address: 0x1f1bc0
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent)
{
	xModelInstance* curr;
	// Line 335, Address: 0x1f1bc0, Func Offset: 0
	// Line 336, Address: 0x1f1bd0, Func Offset: 0x10
	// Line 337, Address: 0x1f1bd4, Func Offset: 0x14
	// Line 338, Address: 0x1f1be8, Func Offset: 0x28
	// Line 339, Address: 0x1f1bec, Func Offset: 0x2c
	// Line 342, Address: 0x1f1bf0, Func Offset: 0x30
	// Line 343, Address: 0x1f1c00, Func Offset: 0x40
	// Line 345, Address: 0x1f1c08, Func Offset: 0x48
	// Func End, Address: 0x1f1c10, Func Offset: 0x50
}

// xModelInstanceFree__FP14xModelInstance
// Start address: 0x1f1c10
void xModelInstanceFree(xModelInstance* modelInst)
{
	xModelInstance* curr;
	xModelInstance** prev;
	// Line 273, Address: 0x1f1c10, Func Offset: 0
	// Line 276, Address: 0x1f1c1c, Func Offset: 0xc
	// Line 277, Address: 0x1f1c28, Func Offset: 0x18
	// Line 278, Address: 0x1f1c30, Func Offset: 0x20
	// Line 281, Address: 0x1f1c7c, Func Offset: 0x6c
	// Line 286, Address: 0x1f1c84, Func Offset: 0x74
	// Line 287, Address: 0x1f1c90, Func Offset: 0x80
	// Line 288, Address: 0x1f1c94, Func Offset: 0x84
	// Line 289, Address: 0x1f1c98, Func Offset: 0x88
	// Line 291, Address: 0x1f1cb0, Func Offset: 0xa0
	// Line 295, Address: 0x1f1cbc, Func Offset: 0xac
	// Line 296, Address: 0x1f1cc4, Func Offset: 0xb4
	// Line 297, Address: 0x1f1ccc, Func Offset: 0xbc
	// Line 300, Address: 0x1f1cd4, Func Offset: 0xc4
	// Line 302, Address: 0x1f1cdc, Func Offset: 0xcc
	// Line 303, Address: 0x1f1ce4, Func Offset: 0xd4
	// Line 304, Address: 0x1f1cec, Func Offset: 0xdc
	// Line 305, Address: 0x1f1cf0, Func Offset: 0xe0
	// Func End, Address: 0x1f1d00, Func Offset: 0xf0
}

// xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
// Start address: 0x1f1d00
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, uint16 flags, uint8 boneIndex, uint8* boneRemap)
{
	int32 i;
	uint32 boneCount;
	uint32 matCount;
	xModelPool* curr;
	xModelPool* found;
	xModelInstance* dude;
	RwMatrixTag* allocmats;
	// Line 143, Address: 0x1f1d00, Func Offset: 0
	// Line 158, Address: 0x1f1d40, Func Offset: 0x40
	// Line 159, Address: 0x1f1d50, Func Offset: 0x50
	// Line 161, Address: 0x1f1d5c, Func Offset: 0x5c
	// Line 164, Address: 0x1f1d68, Func Offset: 0x68
	// Line 168, Address: 0x1f1d74, Func Offset: 0x74
	// Line 169, Address: 0x1f1d84, Func Offset: 0x84
	// Line 168, Address: 0x1f1d88, Func Offset: 0x88
	// Line 172, Address: 0x1f1d8c, Func Offset: 0x8c
	// Line 175, Address: 0x1f1d98, Func Offset: 0x98
	// Line 176, Address: 0x1f1dac, Func Offset: 0xac
	// Line 177, Address: 0x1f1db0, Func Offset: 0xb0
	// Line 181, Address: 0x1f1db4, Func Offset: 0xb4
	// Line 184, Address: 0x1f1dc0, Func Offset: 0xc0
	// Line 185, Address: 0x1f1dcc, Func Offset: 0xcc
	// Line 186, Address: 0x1f1dd0, Func Offset: 0xd0
	// Line 191, Address: 0x1f1ddc, Func Offset: 0xdc
	// Line 192, Address: 0x1f1de8, Func Offset: 0xe8
	// Line 193, Address: 0x1f1e04, Func Offset: 0x104
	// Line 195, Address: 0x1f1e08, Func Offset: 0x108
	// Line 196, Address: 0x1f1e0c, Func Offset: 0x10c
	// Line 199, Address: 0x1f1e18, Func Offset: 0x118
	// Line 201, Address: 0x1f1e20, Func Offset: 0x120
	// Line 203, Address: 0x1f1e28, Func Offset: 0x128
	// Line 204, Address: 0x1f1e2c, Func Offset: 0x12c
	// Line 205, Address: 0x1f1e34, Func Offset: 0x134
	// Line 208, Address: 0x1f1e38, Func Offset: 0x138
	// Line 209, Address: 0x1f1e3c, Func Offset: 0x13c
	// Line 213, Address: 0x1f1e40, Func Offset: 0x140
	// Line 210, Address: 0x1f1e44, Func Offset: 0x144
	// Line 213, Address: 0x1f1e48, Func Offset: 0x148
	// Line 211, Address: 0x1f1e4c, Func Offset: 0x14c
	// Line 218, Address: 0x1f1e50, Func Offset: 0x150
	// Line 212, Address: 0x1f1e54, Func Offset: 0x154
	// Line 218, Address: 0x1f1e58, Func Offset: 0x158
	// Line 213, Address: 0x1f1e5c, Func Offset: 0x15c
	// Line 224, Address: 0x1f1e60, Func Offset: 0x160
	// Line 214, Address: 0x1f1e64, Func Offset: 0x164
	// Line 215, Address: 0x1f1e68, Func Offset: 0x168
	// Line 216, Address: 0x1f1e6c, Func Offset: 0x16c
	// Line 217, Address: 0x1f1e70, Func Offset: 0x170
	// Line 218, Address: 0x1f1e74, Func Offset: 0x174
	// Line 220, Address: 0x1f1e78, Func Offset: 0x178
	// Line 221, Address: 0x1f1e7c, Func Offset: 0x17c
	// Line 222, Address: 0x1f1e80, Func Offset: 0x180
	// Line 224, Address: 0x1f1e84, Func Offset: 0x184
	// Line 225, Address: 0x1f1e88, Func Offset: 0x188
	// Line 226, Address: 0x1f1e8c, Func Offset: 0x18c
	// Line 229, Address: 0x1f1e90, Func Offset: 0x190
	// Line 231, Address: 0x1f1ed0, Func Offset: 0x1d0
	// Line 229, Address: 0x1f1ed4, Func Offset: 0x1d4
	// Line 231, Address: 0x1f1ee0, Func Offset: 0x1e0
	// Line 232, Address: 0x1f1ee4, Func Offset: 0x1e4
	// Line 229, Address: 0x1f1eec, Func Offset: 0x1ec
	// Line 230, Address: 0x1f1ef0, Func Offset: 0x1f0
	// Line 231, Address: 0x1f1ef4, Func Offset: 0x1f4
	// Line 232, Address: 0x1f1ef8, Func Offset: 0x1f8
	// Line 235, Address: 0x1f1efc, Func Offset: 0x1fc
	// Line 236, Address: 0x1f1f08, Func Offset: 0x208
	// Line 237, Address: 0x1f1f18, Func Offset: 0x218
	// Line 240, Address: 0x1f1f40, Func Offset: 0x240
	// Line 241, Address: 0x1f1f4c, Func Offset: 0x24c
	// Line 242, Address: 0x1f1f54, Func Offset: 0x254
	// Line 243, Address: 0x1f1f5c, Func Offset: 0x25c
	// Line 244, Address: 0x1f1f64, Func Offset: 0x264
	// Line 245, Address: 0x1f1f70, Func Offset: 0x270
	// Line 246, Address: 0x1f1fc4, Func Offset: 0x2c4
	// Line 250, Address: 0x1f1fc8, Func Offset: 0x2c8
	// Line 251, Address: 0x1f1fdc, Func Offset: 0x2dc
	// Line 253, Address: 0x1f1fe8, Func Offset: 0x2e8
	// Line 255, Address: 0x1f1fec, Func Offset: 0x2ec
	// Line 256, Address: 0x1f1ff0, Func Offset: 0x2f0
	// Func End, Address: 0x1f2020, Func Offset: 0x320
}

// xModelPoolInit__FUiUi
// Start address: 0x1f2020
void xModelPoolInit(uint32 count, uint32 numMatrices)
{
	int32 i;
	uint8* buffer;
	RwMatrixTag* mat;
	xModelPool* pool;
	xModelPool* curr;
	xModelPool** prev;
	xModelInstance* inst;
	// Line 93, Address: 0x1f2020, Func Offset: 0
	// Line 101, Address: 0x1f203c, Func Offset: 0x1c
	// Line 102, Address: 0x1f2044, Func Offset: 0x24
	// Line 107, Address: 0x1f2058, Func Offset: 0x38
	// Line 102, Address: 0x1f205c, Func Offset: 0x3c
	// Line 107, Address: 0x1f2060, Func Offset: 0x40
	// Line 117, Address: 0x1f207c, Func Offset: 0x5c
	// Line 112, Address: 0x1f2080, Func Offset: 0x60
	// Line 117, Address: 0x1f2084, Func Offset: 0x64
	// Line 112, Address: 0x1f2088, Func Offset: 0x68
	// Line 117, Address: 0x1f208c, Func Offset: 0x6c
	// Line 118, Address: 0x1f20b0, Func Offset: 0x90
	// Line 121, Address: 0x1f20b8, Func Offset: 0x98
	// Line 118, Address: 0x1f20bc, Func Offset: 0x9c
	// Line 121, Address: 0x1f20c0, Func Offset: 0xa0
	// Line 118, Address: 0x1f20c4, Func Offset: 0xa4
	// Line 119, Address: 0x1f20c8, Func Offset: 0xa8
	// Line 121, Address: 0x1f20cc, Func Offset: 0xac
	// Line 120, Address: 0x1f20d0, Func Offset: 0xb0
	// Line 118, Address: 0x1f20d4, Func Offset: 0xb4
	// Line 121, Address: 0x1f20d8, Func Offset: 0xb8
	// Line 118, Address: 0x1f20e0, Func Offset: 0xc0
	// Line 121, Address: 0x1f20e4, Func Offset: 0xc4
	// Line 118, Address: 0x1f20ec, Func Offset: 0xcc
	// Line 121, Address: 0x1f20f0, Func Offset: 0xd0
	// Line 118, Address: 0x1f20fc, Func Offset: 0xdc
	// Line 121, Address: 0x1f2100, Func Offset: 0xe0
	// Line 118, Address: 0x1f210c, Func Offset: 0xec
	// Line 121, Address: 0x1f2110, Func Offset: 0xf0
	// Line 118, Address: 0x1f211c, Func Offset: 0xfc
	// Line 121, Address: 0x1f2120, Func Offset: 0x100
	// Line 118, Address: 0x1f212c, Func Offset: 0x10c
	// Line 121, Address: 0x1f2130, Func Offset: 0x110
	// Line 118, Address: 0x1f2138, Func Offset: 0x118
	// Line 121, Address: 0x1f213c, Func Offset: 0x11c
	// Line 118, Address: 0x1f2144, Func Offset: 0x124
	// Line 121, Address: 0x1f2148, Func Offset: 0x128
	// Line 118, Address: 0x1f2154, Func Offset: 0x134
	// Line 121, Address: 0x1f2158, Func Offset: 0x138
	// Line 118, Address: 0x1f2164, Func Offset: 0x144
	// Line 121, Address: 0x1f2168, Func Offset: 0x148
	// Line 118, Address: 0x1f2174, Func Offset: 0x154
	// Line 121, Address: 0x1f2178, Func Offset: 0x158
	// Line 118, Address: 0x1f2184, Func Offset: 0x164
	// Line 121, Address: 0x1f2188, Func Offset: 0x168
	// Line 118, Address: 0x1f2190, Func Offset: 0x170
	// Line 121, Address: 0x1f2194, Func Offset: 0x174
	// Line 118, Address: 0x1f219c, Func Offset: 0x17c
	// Line 121, Address: 0x1f21a0, Func Offset: 0x180
	// Line 118, Address: 0x1f21ac, Func Offset: 0x18c
	// Line 121, Address: 0x1f21b0, Func Offset: 0x190
	// Line 118, Address: 0x1f21bc, Func Offset: 0x19c
	// Line 121, Address: 0x1f21c0, Func Offset: 0x1a0
	// Line 118, Address: 0x1f21d0, Func Offset: 0x1b0
	// Line 121, Address: 0x1f21d4, Func Offset: 0x1b4
	// Line 118, Address: 0x1f21e0, Func Offset: 0x1c0
	// Line 121, Address: 0x1f21e4, Func Offset: 0x1c4
	// Line 118, Address: 0x1f21ec, Func Offset: 0x1cc
	// Line 121, Address: 0x1f21f0, Func Offset: 0x1d0
	// Line 117, Address: 0x1f2234, Func Offset: 0x214
	// Line 121, Address: 0x1f2238, Func Offset: 0x218
	// Line 122, Address: 0x1f2240, Func Offset: 0x220
	// Line 121, Address: 0x1f2244, Func Offset: 0x224
	// Line 122, Address: 0x1f2250, Func Offset: 0x230
	// Line 121, Address: 0x1f2254, Func Offset: 0x234
	// Line 122, Address: 0x1f225c, Func Offset: 0x23c
	// Line 123, Address: 0x1f2268, Func Offset: 0x248
	// Line 126, Address: 0x1f2270, Func Offset: 0x250
	// Line 127, Address: 0x1f2274, Func Offset: 0x254
	// Line 132, Address: 0x1f2278, Func Offset: 0x258
	// Line 133, Address: 0x1f227c, Func Offset: 0x25c
	// Line 134, Address: 0x1f2288, Func Offset: 0x268
	// Line 135, Address: 0x1f228c, Func Offset: 0x26c
	// Line 136, Address: 0x1f2290, Func Offset: 0x270
	// Line 137, Address: 0x1f22b0, Func Offset: 0x290
	// Line 138, Address: 0x1f22b4, Func Offset: 0x294
	// Line 139, Address: 0x1f22b8, Func Offset: 0x298
	// Func End, Address: 0x1f22d4, Func Offset: 0x2b4
}

// xModelInit__Fv
// Start address: 0x1f22e0
void xModelInit()
{
	// Line 67, Address: 0x1f22e0, Func Offset: 0
	// Line 69, Address: 0x1f22e8, Func Offset: 0x8
	// Line 75, Address: 0x1f22f0, Func Offset: 0x10
	// Line 77, Address: 0x1f22fc, Func Offset: 0x1c
	// Line 79, Address: 0x1f2394, Func Offset: 0xb4
	// Line 81, Address: 0x1f2398, Func Offset: 0xb8
	// Line 82, Address: 0x1f239c, Func Offset: 0xbc
	// Func End, Address: 0x1f23ac, Func Offset: 0xcc
}

// xModelGetPipeFlags__FP8RpAtomic
// Start address: 0x1f23b0
uint32 xModelGetPipeFlags(RpAtomic* model)
{
	int32 i;
	// Line 58, Address: 0x1f23b0, Func Offset: 0
	// Line 59, Address: 0x1f23c8, Func Offset: 0x18
	// Line 60, Address: 0x1f23d4, Func Offset: 0x24
	// Line 62, Address: 0x1f23e0, Func Offset: 0x30
	// Line 63, Address: 0x1f23f0, Func Offset: 0x40
	// Line 64, Address: 0x1f23f8, Func Offset: 0x48
	// Func End, Address: 0x1f2400, Func Offset: 0x50
}

