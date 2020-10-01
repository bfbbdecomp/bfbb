typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpGeometry;
typedef struct RxPipelineNode;
typedef struct xModelInstance;
typedef struct RpAtomic;
typedef struct RwMatrixTag;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RwCamera;
typedef struct RpMeshHeader;
typedef struct xAnimPlay;
typedef struct RpClump;
typedef struct RwResEntry;
typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct RpLight;
typedef struct RwMeshCache;
typedef struct RxPS2AllPipeData;
typedef struct xEnt;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct xBase;
typedef struct RpMorphTarget;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct xAnimTable;
typedef struct rwPS2AllResEntryHeader;
typedef struct RxNodeDefinition;
typedef struct tri_data;
typedef struct RxPipelineRequiresCluster;
typedef struct xMemPool;
typedef struct xEntShadow;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RwTexture;
typedef struct RpInterpolator;
typedef struct RpMesh;
typedef struct RwRaster;
typedef enum RpMeshHeaderFlags;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct xAnimFile;
typedef struct Shadow;
typedef struct xEnv;
typedef struct RwRGBAReal;
typedef struct rxReq;
typedef struct xLinkAsset;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xModelPool;
typedef enum RxClusterValidityReq;
typedef struct xCollis;
typedef struct _class_0;
typedef struct rwPS2AllFieldRec;
typedef union RwStreamUnion;
typedef struct rxNodePS2AllMatPvtData;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum RwStreamType;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xEntAsset;
typedef struct xBaseAsset;
typedef struct xAnimMultiFile;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxInstanceFlags;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RwStream;
typedef struct xCylinder;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xEntFrame;
typedef struct xBox;
typedef struct RwSphere;
typedef struct RwFrame;
typedef struct RxClusterDefinition;
typedef enum RwStreamAccessType;
typedef struct xBound;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct rwPS2AllResEntryFormat;
typedef struct xModelBucket;
typedef enum RwFrustumTestResult;
typedef struct xShadowSimplePoly;
typedef struct rpAtomicPS2AllLightData;
typedef struct RwTexDictionary;
typedef struct xQCData;
typedef struct RxOutputSpec;
typedef struct xBBox;
typedef struct RwMemory;
typedef struct xLightKit;
typedef struct xMat3x3;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct xLightKitLight;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct RxIoSpec;
typedef struct xEntCollis;
typedef struct RxNodeMethods;
typedef struct xGridBound;
typedef struct RwFrustumPlane;
typedef union RwStreamFile;
typedef struct xAnimMultiFileBase;
typedef struct RwPlane;
typedef struct _class_1;
typedef struct RxCluster;
typedef struct xFFX;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct anim_coll_data;
typedef struct RwLinkList;
typedef enum RwCullMode;
typedef struct RpMaterialList;
typedef struct rxNodePS2AllPvtData;
typedef struct RwV2d;

typedef s32(*type_1)(RxPS2AllPipeData*);
typedef void(*type_2)(xEnt*, xScene*, f32, xEntCollis*);
typedef xBase*(*type_3)(u32);
typedef s32(*type_4)(void*, void*, u32);
typedef s32(*type_5)(RxPS2AllPipeData*, RwMatrixTag**);
typedef s32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_7)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_9)(xAnimPlay*, xAnimState*);
typedef s8*(*type_11)(xBase*);
typedef s32(*type_12)(void*, u32);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_14)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_15)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_16)(RwResEntry*);
typedef s8*(*type_19)(u32);
typedef u32(*type_20)(RxPipelineNode*, u32, u32, void*);
typedef RwResEntry*(*type_21)(RxPS2AllPipeData*, RwResEntry**, u32, type_16);
typedef s32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_24)(void*);
typedef s32(*type_26)(RxNodeDefinition*);
typedef u32(*type_27)(void*, void*, u32);
typedef void(*type_28)(RxNodeDefinition*);
typedef s32(*type_29)(RxPS2AllPipeData*, void**, u32);
typedef s32(*type_30)(RxPipelineNode*);
typedef s32(*type_31)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_32)(RxPipelineNode*);
typedef s32(*type_33)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef s32(*type_36)(RxPS2AllPipeData*);
typedef u32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_39)(RxPS2AllPipeData*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef RwResEntry*(*type_42)(RxPS2AllPipeData*, RwResEntry**, u32, type_16);
typedef s32(*type_45)(RxPS2AllPipeData*, void**, u32);
typedef void(*type_51)(xEnt*, xScene*, f32);
typedef RwCamera*(*type_52)(RwCamera*);
typedef void(*type_55)(xEnt*, xVec3*);
typedef void(*type_56)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_57)(xEnt*);
typedef RwCamera*(*type_58)(RwCamera*);
typedef void(*type_60)(xMemPool*, void*);
typedef s32(*type_62)(RxPS2AllPipeData*);
typedef RwObjectHasFrame*(*type_72)(RwObjectHasFrame*);

typedef f32 type_0[4];
typedef rwPS2AllClusterQuickInfo type_8[12];
typedef rwPS2AllFieldRec type_10[12];
typedef RwFrustumPlane type_17[6];
typedef void* type_18[32];
typedef RwV3d type_25[8];
typedef u16 type_34[3];
typedef f32 type_37[2];
typedef u8 type_40[1];
typedef RwTexCoords* type_43[8];
typedef rwPS2AllClusterInstanceInfo type_44[12];
typedef u32 type_46[12];
typedef u32 type_47[4];
typedef xVec3 type_48[3];
typedef u8 type_49[2];
typedef u32 type_50[4096];
typedef rwPS2AllFieldRec type_53[12];
typedef f32 type_54[16];
typedef s8 type_59[16];
typedef s8 type_61[32];
typedef s8 type_63[32];
typedef s8 type_64[16];
typedef f32 type_65[2];
typedef xVec3 type_66[4];
typedef RwResEntry* type_67[1];
typedef u8 type_68[2];
typedef xAnimMultiFileEntry type_69[1];
typedef RxCluster type_70[1];
typedef u8 type_71[3];
typedef xCollis type_73[18];

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_43 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	_class_1 anim_coll;
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
	type_35 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_52 beginUpdate;
	type_58 endUpdate;
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
	type_17 frustumPlanes;
	RwBBox frustumBoundBox;
	type_25 frustumCorners;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	type_23 BeforeAnimMatrices;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_13 callback;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_16 destroyNotify;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_15 Callback;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwMeshCache
{
	u32 lengthOfMeshesArray;
	type_67 meshes;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	u32 objIdentifier;
	f32 spExtra;
	s32 numMorphTargets;
	u32 fastMorphing;
	u8 transType;
	u8 primType;
	u8 matModulate;
	u8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	u32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	u16 idx;
	u16 num_updates;
	u8 flags;
	u8 miscflags;
	u8 subType;
	u8 pflags;
	u8 moreFlags;
	u8 isCulled;
	u8 driving_count;
	u8 num_ffx;
	u8 collType;
	u8 collLev;
	u8 chkby;
	u8 penby;
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	xLightKit* lightKit;
	type_51 update;
	type_51 endUpdate;
	type_55 bupdate;
	type_56 move;
	type_57 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_14 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_9 BeforeEnter;
	type_41 StateCallback;
	type_23 BeforeAnimMatrices;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_31 eventFunc;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_65 BilinearLerp;
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
	type_47 pad;
};

struct RwStreamCustom
{
	type_24 sfnclose;
	type_27 sfnread;
	type_4 sfnwrite;
	type_12 sfnskip;
	void* data;
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
	type_8 clquickinfo;
	type_10 fieldRec;
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

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_60 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_37 radius;
};

struct rwPS2AllClusterInstanceInfo
{
	u32 attrib;
	u32 stride;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_61 name;
	type_63 mask;
	u32 filterAddressing;
	s32 refCount;
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

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	type_34 vertIndex;
	s16 matIndex;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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
	type_68 NumAnims;
	void** RawData;
};

struct Shadow
{
};

struct xEnv
{
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct rxReq
{
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_0 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xCollis
{
	u32 flags;
	u32 oid;
	void* optr;
	xModelInstance* mptr;
	f32 dist;
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

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
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
	type_40 pad;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

struct rxNodePS2AllMatPvtData
{
	type_1 meshInstanceTestCB;
	type_21 resEntryAllocCB;
	type_29 instanceCB;
	type_33 bridgeCB;
	type_36 postMeshCB;
	s32 vifOffset;
	void** vu1CodeArray;
	u32 codeArrayLength;
	type_44 clinfo;
	type_46 cliIndex;
	RpMeshHeaderFlags pipeType;
	u8 totallyOpaque;
	u8 numStripes;
	u8 sizeOnVU;
	u8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	u32 magicValue;
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

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xEntAsset : xBaseAsset
{
	u8 flags;
	u8 subtype;
	u8 pflags;
	u8 moreFlags;
	u8 pad;
	u32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	f32 redMult;
	f32 greenMult;
	f32 blueMult;
	f32 seeThru;
	f32 seeThruSpeed;
	u32 modelInfoID;
	u32 animListID;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_69 Files;
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
	f32 r;
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	s32 position;
	RwStreamUnion Type;
	s32 rwOwned;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
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

struct xSurface
{
};

struct xEntFrame
{
	xMat4x3 mat;
	xMat4x3 oldmat;
	xVec3 oldvel;
	xRot oldrot;
	xRot drot;
	xRot rot;
	xVec3 dpos;
	xVec3 dvel;
	xVec3 vel;
	u32 mode;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct xBound
{
	xQCData qcd;
	u8 type;
	type_71 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	u32 stride;
};

struct rwPS2AllResEntryFormat
{
	u8 batchRound;
	u8 stripReverse;
	type_49 pad;
	u32 maxInputSize;
	s32 batchSize;
	s32 batchesPerTag;
	s32 morphBatchSize;
	s32 morphBatchesPerTag;
	type_53 fieldRec;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

enum RwFrustumTestResult
{
	rwSPHEREOUTSIDE,
	rwSPHEREBOUNDARY,
	rwSPHEREINSIDE,
	rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 0x7fffffff
};

struct xShadowSimplePoly
{
	type_48 vert;
	xVec3 norm;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	f32 invScale;
	f32 recipInvScale;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xQCData
{
	s8 xmin;
	s8 ymin;
	s8 zmin;
	s8 zmin_dup;
	s8 xmax;
	s8 ymax;
	s8 zmax;
	s8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwMemory
{
	u8* start;
	u32 length;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_54 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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

struct xScene
{
	u32 sceneID;
	u16 flags;
	u16 num_ents;
	u16 num_trigs;
	u16 num_stats;
	u16 num_dyns;
	u16 num_npcs;
	u16 num_act_ents;
	u16 num_nact_ents;
	f32 gravity;
	f32 drag;
	f32 friction;
	u16 num_ents_allocd;
	u16 num_trigs_allocd;
	u16 num_stats_allocd;
	u16 num_dyns_allocd;
	u16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	type_3 resolvID;
	type_11 base2Name;
	type_19 id2Name;
};

struct xShadowSimpleCache
{
	u16 flags;
	u8 alpha;
	u8 pad;
	u32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	f32 envHeight;
	f32 shadowHeight;
	u32 raster;
	f32 dydx;
	f32 dydz;
	type_66 corner;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xEntCollis
{
	u8 chk;
	u8 pen;
	u8 env_sidx;
	u8 env_eidx;
	u8 npc_sidx;
	u8 npc_eidx;
	u8 dyn_sidx;
	u8 dyn_eidx;
	u8 stat_sidx;
	u8 stat_eidx;
	u8 idx;
	type_73 colls;
	type_2 post;
	type_7 depenq;
};

struct RxNodeMethods
{
	type_22 nodeBody;
	type_26 nodeInit;
	type_28 nodeTerm;
	type_30 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_20 configMsgHandler;
};

struct xGridBound
{
	void* data;
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct _class_1
{
	xVec3* verts;
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

struct xFFX
{
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_70 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_72 sync;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct rxNodePS2AllPvtData
{
};

struct RwV2d
{
	f32 x;
	f32 y;
};

type_59 buffer;
type_64 buffer;
RxPipeline* ShadowMapMaterialPipeline;
RxPipeline* ShadowMapAtomicPipeline;
s32 ShadowAtomicOffset;
s32 ShadowLightOffset;
s32 ShadowWorldOffset;
type_18 VUCodeArray;
u32 ShadowMapLightOffset;
RwV3d Yaxis;
RwV3d Zaxis;
u32 ShadowWidth;
u32 ShadowHeight;
f32 ViewScale;
f32 PointLightRadius;
f32 PointLightBrightness;
f32 DirectionalLightBrightness;
RpAtomic* MainAtomic;
RpAtomic* ShadowAtomic;
RpAtomic* ShadowMapAtomic;
RwV3d sc_offset;
RwV3d light_offset;
RwCamera* ShadowCamera;
type_50 ourGlobals;
RpLight* ShadowLight;
RwCamera* ShadowCamera;
type_5 ShadowMapObjectSetupCallBack;
type_62 ShadowMapBridgeCallBack;
type_45 RpMeshPS2AllInstanceCallBack;
type_42 RpMeshPS2AllResEntryAllocCallBack;
type_39 RpMeshPS2AllMeshInstanceTestCallBack;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
s32 skyTest_1;
s32 skyClamp_1;
s32 skyTex1_1;
u32 skyUserSwitch1;
u32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
s32 skyTLClipperMode;
s32 skyTSClipperMode;
s32 skyPrim_State;
<unknown type (0xa510)> gifTag128;
s32 skyAlphaTex;
s32 skyVertexAlpha;
RwRaster* skyTextureRaster;
RwRaster* ShadowCameraRaster;
f32 ShadowStrength;
RwMatrixTag sm_matrix;
RwCamera* ShadowCamera;
u8 skyTransType;
s32 skyCameraExt;
s32 rwPip2GeometryOffset;
s32 rwPip2AtomicOffset;
RpLight* ShadowLight;

s32 ShadowMapCreatePipelines();
RxPipeline* ShadowMapCreateMaterialPipeline();
s32 ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, u32 numShadows);
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data);
s32 ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);
void ShadowMapLightingSetup(RxPS2AllPipeData* ps2AllPipeData);

// ShadowMapCreatePipelines__Fv
// Start address: 0x33b190
s32 ShadowMapCreatePipelines()
{
}

// ShadowMapCreateMaterialPipeline__Fv
// Start address: 0x33b2b0
RxPipeline* ShadowMapCreateMaterialPipeline()
{
	RxPipeline* pipe;
	RxPipeline* lpipe;
	RxNodeDefinition* ps2allmat;
	RxPipelineNode* plnode;
}

// ShadowMapBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x33b470
s32 ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	u32 numInitialQW;
	u32 numExtraQW;
	u32 numShadows;
	u32 numShadowQW;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	u32 cFormat;
	s32 textureUploadSuccess;
	u32 _itQW;
	u32 _xaQW;
	u32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	u32 __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	f32 __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	u32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	u32 __tmp;
	u32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	u32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	u32 __tmp;
	u32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	u32 stat;
}

// ShadowMapUpload__FP16RxPS2AllPipeDataUi
// Start address: 0x33bbc0
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, u32 numShadows)
{
	u32 tmp;
	u32 tmp1;
}

// DKShadowDataUpload__FP6ShadowP16RxPS2AllPipeData
// Start address: 0x33bdc0
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data)
{
	u32 msw;
	u32 lsw;
	u32 tmp;
	RwMatrixTag matrix;
	RwCamera* camera;
	f32 val;
}

// ShadowMapObjectSetupCallBack__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x33bf30
s32 ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	RpAtomic* atomic;
	RwFrustumTestResult inFrustum;
	RpGeometry* _gmty;
	RpInterpolator* _itpltr;
	RpGeometry* _gmty;
	RwResEntry* resEntry;
	rwPS2AllResEntryHeader* ps2AllResHeader;
	RpInterpolator* interpolator;
	RwMatrixTag* _viewMatrix;
	RwMatrixTag* _mpLocalToWorld;
	RwFrustumTestResult* _infm;
	RwFrustumPlane* _frustPlane;
	RwSphere* _sphere;
	u32 _numPlanes;
	f32 dot;
	RwFrustumTestResult _infm;
}

// ShadowMapLightingSetup__FP16RxPS2AllPipeData
// Start address: 0x33c3a0
void ShadowMapLightingSetup(RxPS2AllPipeData* ps2AllPipeData)
{
	RpAtomic* atomic;
	RpGeometry* geometry;
	RpMeshHeader* meshHeader;
	rpAtomicPS2AllLightData lightingData;
	RwMatrixTag* frameMat;
	f32 temp;
}

