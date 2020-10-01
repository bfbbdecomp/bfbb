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
	type_31 callback;
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
	type_24 Files;
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
	type_20 pad;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_27 beginUpdate;
	type_28 endUpdate;
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
	type_1 frustumPlanes;
	RwBBox frustumBoundBox;
	type_6 frustumCorners;
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
	type_37 vertIndex;
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
	type_30 name;
	type_32 mask;
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
	type_33 destroyNotify;
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
	type_15 renderCallBack;
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
	type_34 texCoords;
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
	type_21 Conditional;
	type_21 Callback;
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
	type_0 renderCallBack;
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
	type_3 BeforeEnter;
	type_5 StateCallback;
	type_8 BeforeAnimMatrices;
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
	type_23 NumAnims;
	void** RawData;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_19 BilinearLerp;
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
	type_18 matrix;
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
	type_17 Callback;
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
	type_8 BeforeAnimMatrices;
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
	type_26 vertIndex;
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
	type_29 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_7 nodeInit;
	type_9 nodeTerm;
	type_11 pipelineNodeInit;
	type_12 pipelineNodeTerm;
	type_14 pipelineNodeConfig;
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
	type_10 texCoords;
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
	type_35 clusters;
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
	type_36 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

RpMorphTarget anim_coll_old_mt;
xModelPool* sxModelPoolList;
RwCamera* subcamera;
int32 xModelPipeNumTables;
type_13 xModelPipeCount;
type_22 xModelPipeData;
int32 xModelLookupCount;
xModelPipeLookup* xModelLookupList;
int32 xModelInstStaticAlloc;
int32 xModelBucketEnabled;
eHudID sHudItem;
int32 sHudItemVisible;
xMat4x3 g_I3;
uint32 gActiveHeap;
RwRaster* ShadowRenderRaster;
type_25 ourGlobals;

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
}

// xModelGetBoneLocation__FRC14xModelInstanceUi
// Start address: 0x1f0ca0
xVec3 xModelGetBoneLocation(xModelInstance& model, uint32 index)
{
	xMat4x3& root_mat;
	xMat4x3& anim_mat;
	xVec3 ret;
}

// xModelAnimCollRefresh__FRC14xModelInstance
// Start address: 0x1f0da0
void xModelAnimCollRefresh(xModelInstance& cm)
{
	uint32 size;
	xMat4x3& mat;
	xMat4x3 old_mat;
}

// xModelAnimCollStart__FR14xModelInstance
// Start address: 0x1f0f70
void xModelAnimCollStart(xModelInstance& m)
{
	uint32 size;
}

// xModel_SceneExit__FP7RpWorld
// Start address: 0x1f0fe0
void xModel_SceneExit(RpWorld* world)
{
}

// xModel_SceneEnter__FP7RpWorld
// Start address: 0x1f0ff0
void xModel_SceneEnter(RpWorld* world)
{
}

// xModelSetMaterialAlpha__FP14xModelInstanceUc
// Start address: 0x1f1000
void xModelSetMaterialAlpha(xModelInstance* modelInst, uint8 alpha)
{
}

// CameraDestroy__FP8RwCamera
// Start address: 0x1f1010
void CameraDestroy(RwCamera* camera)
{
	RwRaster* raster;
	RwFrame* frame;
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
}

// xModelRender__FP14xModelInstance
// Start address: 0x1f14a0
void xModelRender(xModelInstance* modelInst)
{
}

// xModelRenderSingle__FP14xModelInstance
// Start address: 0x1f1500
void xModelRenderSingle(xModelInstance* modelInst)
{
	uint8 reset;
	xMat3x3 tmpmat;
	xAnimPlay* a;
	uint16 i;
}

// xModelEval__FP14xModelInstance
// Start address: 0x1f18d0
void xModelEval(xModelInstance* modelInst)
{
}

// xModelEvalSingle__FP14xModelInstance
// Start address: 0x1f1910
void xModelEvalSingle(xModelInstance* modelInst)
{
	int32 i;
	xModelInstance* dad;
	uint8* remap;
}

// xModelUpdate__FP14xModelInstancef
// Start address: 0x1f1ab0
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta)
{
}

// xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi
// Start address: 0x1f1b40
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, uint32 flags)
{
	uint32 boneCount;
	RwMatrixTag* allocmats;
}

// xModelInstanceAttach__FP14xModelInstanceP14xModelInstance
// Start address: 0x1f1bc0
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent)
{
	xModelInstance* curr;
}

// xModelInstanceFree__FP14xModelInstance
// Start address: 0x1f1c10
void xModelInstanceFree(xModelInstance* modelInst)
{
	xModelInstance* curr;
	xModelInstance** prev;
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
}

// xModelInit__Fv
// Start address: 0x1f22e0
void xModelInit()
{
}

// xModelGetPipeFlags__FP8RpAtomic
// Start address: 0x1f23b0
uint32 xModelGetPipeFlags(RpAtomic* model)
{
	int32 i;
}

