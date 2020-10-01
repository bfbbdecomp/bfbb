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
typedef u32(*type_2)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef s32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_7)(RxNodeDefinition*);
typedef void(*type_8)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_9)(RxNodeDefinition*);
typedef s32(*type_11)(RxPipelineNode*);
typedef void(*type_12)(RxPipelineNode*);
typedef s32(*type_14)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef u32(*type_17)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_21)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_27)(RwCamera*);
typedef RwCamera*(*type_28)(RwCamera*);
typedef void(*type_29)(xMemPool*, void*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RwObjectHasFrame*(*type_36)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef RwV3d type_6[8];
typedef RwTexCoords* type_10[8];
typedef s32 type_13[16];
typedef RwV2d type_16[2];
typedef f32 type_18[16];
typedef f32 type_19[2];
typedef u32 type_20[4];
typedef xModelPipeInfo* type_22[16];
typedef u8 type_23[2];
typedef xAnimMultiFileEntry type_24[1];
typedef u32 type_25[4096];
typedef u16 type_26[3];
typedef s8 type_30[32];
typedef s8 type_32[32];
typedef RwTexCoords* type_34[8];
typedef RxCluster type_35[1];
typedef u16 type_37[3];

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	u32 PipeFlags;
	f32 RedMultiplier;
	f32 GreenMultiplier;
	f32 BlueMultiplier;
	f32 Alpha;
	f32 FadeStart;
	f32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	u16 Flags;
	u8 BoneCount;
	u8 BoneIndex;
	u8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	u32 modelID;
	u32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class anim_coll;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_24 Files;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
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
	u32 slotIndex;
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

struct RwMatrixTag
{
	RwV3d right;
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
};

struct RpTriangle
{
	type_37 vertIndex;
	s16 matIndex;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_30 name;
	type_32 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xSurface
{
};

struct RpSector
{
	s32 type;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_33 destroyNotify;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct RpWorld
{
	RwObject object;
	u32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	s32 numTexCoordSets;
	s32 numClumpsInWorld;
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
	s32 ClipFlags;
	u32 PipeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xModelPipeLookup
{
	RpAtomic* model;
	u32 PipeFlags;
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

struct RpLight
{
	RwObjectHasFrame object;
	f32 radius;
	RwRGBAReal color;
	f32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	u16 lightFrame;
	u16 pad;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct RwV2d
{
	f32 x;
	f32 y;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xAnimState
{
	xAnimState* Next;
	s8* Name;
	u32 ID;
	u32 Flags;
	u32 UserFlags;
	f32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	f32* BoneBlend;
	f32* TimeSnap;
	f32 FadeRecip;
	u16* FadeOffset;
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
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_23 NumAnims;
	void** RawData;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_19 BilinearLerp;
	xAnimEffect* Effect;
	u32 ActiveCount;
	f32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	f32 BlendFactor;
	u32 pad;
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
	u32 type;
	RwRGBAReal color;
	type_18 matrix;
	f32 radius;
	f32 angle;
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
	u32 Count;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct _class
{
	xVec3* verts;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_17 Callback;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xModelPipeInfo
{
	u32 ModelHashID;
	u32 SubObjectBits;
	u32 PipeFlags;
};

struct RwVideoMode
{
	s32 width;
	s32 height;
	s32 depth;
	RwVideoModeFlag flags;
	s32 refRate;
	s32 format;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	u16 NumSingle;
	u16 BoneCount;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct RpPolygon
{
	u16 matIndex;
	type_26 vertIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_29 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	u32 creationAttributes;
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
	type_10 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_35 clusters;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
s32 xModelPipeNumTables;
type_13 xModelPipeCount;
type_22 xModelPipeData;
s32 xModelLookupCount;
xModelPipeLookup* xModelLookupList;
s32 xModelInstStaticAlloc;
s32 xModelBucketEnabled;
eHudID sHudItem;
s32 sHudItemVisible;
xMat4x3 g_I3;
u32 gActiveHeap;
RwRaster* ShadowRenderRaster;
type_25 ourGlobals;

void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, u32 index);
xVec3 xModelGetBoneLocation(xModelInstance& model, u32 index);
void xModelAnimCollRefresh(xModelInstance& cm);
void xModelAnimCollStart(xModelInstance& m);
void xModel_SceneExit(RpWorld* world);
void xModel_SceneEnter(RpWorld* world);
void xModelSetMaterialAlpha(xModelInstance* modelInst, u8 alpha);
void CameraDestroy(RwCamera* camera);
void xModelRender2D(xModelInstance& model, basic_rect& r, xVec3& from, xVec3& to);
void xModelRender(xModelInstance* modelInst);
void xModelRenderSingle(xModelInstance* modelInst);
void xModelEval(xModelInstance* modelInst);
void xModelEvalSingle(xModelInstance* modelInst);
void xModelUpdate(xModelInstance* modelInst, f32 timeDelta);
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, u32 flags);
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent);
void xModelInstanceFree(xModelInstance* modelInst);
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, u16 flags, u8 boneIndex, u8* boneRemap);
void xModelPoolInit(u32 count, u32 numMatrices);
void xModelInit();
u32 xModelGetPipeFlags(RpAtomic* model);

// xModelGetBoneMat__FR7xMat4x3RC14xModelInstanceUi
// Start address: 0x1f0be0
void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, u32 index)
{
	xMat4x3& root_mat;
}

// xModelGetBoneLocation__FRC14xModelInstanceUi
// Start address: 0x1f0ca0
xVec3 xModelGetBoneLocation(xModelInstance& model, u32 index)
{
	xMat4x3& root_mat;
	xMat4x3& anim_mat;
	xVec3 ret;
}

// xModelAnimCollRefresh__FRC14xModelInstance
// Start address: 0x1f0da0
void xModelAnimCollRefresh(xModelInstance& cm)
{
	u32 size;
	xMat4x3& mat;
	xMat4x3 old_mat;
}

// xModelAnimCollStart__FR14xModelInstance
// Start address: 0x1f0f70
void xModelAnimCollStart(xModelInstance& m)
{
	u32 size;
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
void xModelSetMaterialAlpha(xModelInstance* modelInst, u8 alpha)
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
	f32 viewscale;
	f32 shearX;
	f32 shearY;
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
	u8 reset;
	xMat3x3 tmpmat;
	xAnimPlay* a;
	u16 i;
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
	s32 i;
	xModelInstance* dad;
	u8* remap;
}

// xModelUpdate__FP14xModelInstancef
// Start address: 0x1f1ab0
void xModelUpdate(xModelInstance* modelInst, f32 timeDelta)
{
}

// xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi
// Start address: 0x1f1b40
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, u32 flags)
{
	u32 boneCount;
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
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, u16 flags, u8 boneIndex, u8* boneRemap)
{
	s32 i;
	u32 boneCount;
	u32 matCount;
	xModelPool* curr;
	xModelPool* found;
	xModelInstance* dude;
	RwMatrixTag* allocmats;
}

// xModelPoolInit__FUiUi
// Start address: 0x1f2020
void xModelPoolInit(u32 count, u32 numMatrices)
{
	s32 i;
	u8* buffer;
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
u32 xModelGetPipeFlags(RpAtomic* model)
{
	s32 i;
}

