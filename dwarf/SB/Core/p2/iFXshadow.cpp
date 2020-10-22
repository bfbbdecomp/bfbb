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
typedef struct RwStreamUnion;
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
typedef struct RwStreamFile;
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

typedef int32(*type_1)(RxPS2AllPipeData*);
typedef void(*type_2)(xEnt*, xScene*, float32, xEntCollis*);
typedef xBase*(*type_3)(uint32);
typedef int32(*type_4)(void*, void*, uint32);
typedef int32(*type_5)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_7)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_9)(xAnimPlay*, xAnimState*);
typedef int8*(*type_11)(xBase*);
typedef int32(*type_12)(void*, uint32);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_14)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_15)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_16)(RwResEntry*);
typedef int8*(*type_19)(uint32);
typedef uint32(*type_20)(RxPipelineNode*, uint32, uint32, void*);
typedef RwResEntry*(*type_21)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
typedef int32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_24)(void*);
typedef int32(*type_26)(RxNodeDefinition*);
typedef uint32(*type_27)(void*, void*, uint32);
typedef void(*type_28)(RxNodeDefinition*);
typedef int32(*type_29)(RxPS2AllPipeData*, void**, uint32);
typedef int32(*type_30)(RxPipelineNode*);
typedef int32(*type_31)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_32)(RxPipelineNode*);
typedef int32(*type_33)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef int32(*type_36)(RxPS2AllPipeData*);
typedef uint32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_39)(RxPS2AllPipeData*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef RwResEntry*(*type_42)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
typedef int32(*type_45)(RxPS2AllPipeData*, void**, uint32);
typedef void(*type_51)(xEnt*, xScene*, float32);
typedef RwCamera*(*type_52)(RwCamera*);
typedef void(*type_55)(xEnt*, xVec3*);
typedef void(*type_56)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_57)(xEnt*);
typedef RwCamera*(*type_58)(RwCamera*);
typedef void(*type_60)(xMemPool*, void*);
typedef int32(*type_62)(RxPS2AllPipeData*);
typedef RwObjectHasFrame*(*type_72)(RwObjectHasFrame*);

typedef float32 type_0[4];
typedef rwPS2AllClusterQuickInfo type_8[12];
typedef rwPS2AllFieldRec type_10[12];
typedef RwFrustumPlane type_17[6];
typedef void* type_18[32];
typedef RwV3d type_25[8];
typedef uint16 type_34[3];
typedef float32 type_37[2];
typedef uint8 type_40[1];
typedef RwTexCoords* type_43[8];
typedef rwPS2AllClusterInstanceInfo type_44[12];
typedef uint32 type_46[12];
typedef uint32 type_47[4];
typedef xVec3 type_48[3];
typedef uint8 type_49[2];
typedef uint32 type_50[4096];
typedef rwPS2AllFieldRec type_53[12];
typedef float32 type_54[16];
typedef int8 type_59[16];
typedef int8 type_61[32];
typedef int8 type_63[32];
typedef int8 type_64[16];
typedef float32 type_65[2];
typedef xVec3 type_66[4];
typedef RwResEntry* type_67[1];
typedef uint8 type_68[2];
typedef xAnimMultiFileEntry type_69[1];
typedef RxCluster type_70[1];
typedef uint8 type_71[3];
typedef xCollis type_73[18];

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	RwResEntry* meshes[1];
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	uint32 objIdentifier;
	float32 spExtra;
	int32 numMorphTargets;
	uint32 fastMorphing;
	uint8 transType;
	uint8 primType;
	uint8 matModulate;
	uint8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	uint32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	uint16 idx;
	uint16 num_updates;
	uint8 flags;
	uint8 miscflags;
	uint8 subType;
	uint8 pflags;
	uint8 moreFlags;
	uint8 isCulled;
	uint8 driving_count;
	uint8 num_ffx;
	uint8 collType;
	uint8 collLev;
	uint8 chkby;
	uint8 penby;
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	xLightKit* lightKit;
	void(*update)(xEnt*, xScene*, float32);
	void(*endUpdate)(xEnt*, xScene*, float32);
	void(*bupdate)(xEnt*, xVec3*);
	void(*move)(xEnt*, xScene*, float32, xEntFrame*);
	void(*render)(xEnt*);
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	void(*transl)(xEnt*, xVec3*, xMat4x3*);
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
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
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct Shadow
{
};

struct xEnv
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct rxReq
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
};

struct rxNodePS2AllMatPvtData
{
	int32(*meshInstanceTestCB)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCB)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCB)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCB)(RxPS2AllPipeData*);
	int32(*postMeshCB)(RxPS2AllPipeData*);
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	rwPS2AllClusterInstanceInfo clinfo[12];
	uint32 cliIndex[12];
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
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
	float32 angle;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xEntAsset : xBaseAsset
{
	uint8 flags;
	uint8 subtype;
	uint8 pflags;
	uint8 moreFlags;
	uint8 pad;
	uint32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	float32 redMult;
	float32 greenMult;
	float32 blueMult;
	float32 seeThru;
	float32 seeThruSpeed;
	uint32 modelInfoID;
	uint32 animListID;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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
	uint32 mode;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	uint8 pad[3];
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
	<unknown fundamental type (0xa510)>* data;
	uint32 stride;
};

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	uint8 pad[2];
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	rwPS2AllFieldRec fieldRec[12];
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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
	xVec3 vert[3];
	xVec3 norm;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	float32 invScale;
	float32 recipInvScale;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	int8* name;
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
	uint8* start;
	uint32 length;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xScene
{
	uint32 sceneID;
	uint16 flags;
	uint16 num_ents;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	uint16 num_nact_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
};

struct xShadowSimpleCache
{
	uint16 flags;
	uint8 alpha;
	uint8 pad;
	uint32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	float32 envHeight;
	float32 shadowHeight;
	uint32 raster;
	float32 dydx;
	float32 dydz;
	xVec3 corner[4];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xEntCollis
{
	uint8 chk;
	uint8 pen;
	uint8 env_sidx;
	uint8 env_eidx;
	uint8 npc_sidx;
	uint8 npc_eidx;
	uint8 dyn_sidx;
	uint8 dyn_eidx;
	uint8 stat_sidx;
	uint8 stat_eidx;
	uint8 idx;
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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

struct xGridBound
{
	void* data;
	uint16 gx;
	uint16 gz;
	uint8 ingrid;
	uint8 oversize;
	uint8 deleted;
	uint8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _class_1
{
	xVec3* verts;
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

struct xFFX
{
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
	int32 numMaterials;
	int32 space;
};

struct rxNodePS2AllPvtData
{
};

struct RwV2d
{
	float32 x;
	float32 y;
};

int8 buffer[16];
int8 buffer[16];
RxPipeline* ShadowMapMaterialPipeline;
RxPipeline* ShadowMapAtomicPipeline;
int32 ShadowAtomicOffset;
int32 ShadowLightOffset;
int32 ShadowWorldOffset;
void* VUCodeArray[32];
uint32 ShadowMapLightOffset;
RwV3d Yaxis;
RwV3d Zaxis;
uint32 ShadowWidth;
uint32 ShadowHeight;
float32 ViewScale;
float32 PointLightRadius;
float32 PointLightBrightness;
float32 DirectionalLightBrightness;
RpAtomic* MainAtomic;
RpAtomic* ShadowAtomic;
RpAtomic* ShadowMapAtomic;
RwV3d sc_offset;
RwV3d light_offset;
RwCamera* ShadowCamera;
uint32 ourGlobals[4096];
RpLight* ShadowLight;
RwCamera* ShadowCamera;
int32(*ShadowMapObjectSetupCallBack)(RxPS2AllPipeData*, RwMatrixTag**);
int32(*ShadowMapBridgeCallBack)(RxPS2AllPipeData*);
int32(*RpMeshPS2AllInstanceCallBack)(RxPS2AllPipeData*, void**, uint32);
RwResEntry*(*RpMeshPS2AllResEntryAllocCallBack)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
int32(*RpMeshPS2AllMeshInstanceTestCallBack)(RxPS2AllPipeData*);
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long32 skyTest_1;
long32 skyClamp_1;
long32 skyTex1_1;
uint32 skyUserSwitch1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect1;
int32 skyTLClipperMode;
int32 skyTSClipperMode;
long32 skyPrim_State;
<unknown fundamental type (0xa510)> gifTag128;
int32 skyAlphaTex;
int32 skyVertexAlpha;
RwRaster* skyTextureRaster;
RwRaster* ShadowCameraRaster;
float32 ShadowStrength;
RwMatrixTag sm_matrix;
RwCamera* ShadowCamera;
uint8 skyTransType;
int32 skyCameraExt;
int32 rwPip2GeometryOffset;
int32 rwPip2AtomicOffset;
RpLight* ShadowLight;

int32 ShadowMapCreatePipelines();
RxPipeline* ShadowMapCreateMaterialPipeline();
int32 ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, uint32 numShadows);
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data);
int32 ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);
void ShadowMapLightingSetup(RxPS2AllPipeData* ps2AllPipeData);

// ShadowMapCreatePipelines__Fv
// Start address: 0x33b190
int32 ShadowMapCreatePipelines()
{
	// Line 757, Address: 0x33b190, Func Offset: 0
	// Line 758, Address: 0x33b1a4, Func Offset: 0x14
	// Line 761, Address: 0x33b1a8, Func Offset: 0x18
	// Line 762, Address: 0x33b1b8, Func Offset: 0x28
	// Line 764, Address: 0x33b1c0, Func Offset: 0x30
	// Line 767, Address: 0x33b1c8, Func Offset: 0x38
	// Line 768, Address: 0x33b278, Func Offset: 0xe8
	// Line 770, Address: 0x33b280, Func Offset: 0xf0
	// Line 773, Address: 0x33b288, Func Offset: 0xf8
	// Line 774, Address: 0x33b290, Func Offset: 0x100
	// Func End, Address: 0x33b2a8, Func Offset: 0x118
}

// ShadowMapCreateMaterialPipeline__Fv
// Start address: 0x33b2b0
RxPipeline* ShadowMapCreateMaterialPipeline()
{
	RxPipeline* pipe;
	RxPipeline* lpipe;
	RxNodeDefinition* ps2allmat;
	RxPipelineNode* plnode;
	// Line 657, Address: 0x33b2b0, Func Offset: 0
	// Line 661, Address: 0x33b2c4, Func Offset: 0x14
	// Line 662, Address: 0x33b2d0, Func Offset: 0x20
	// Line 666, Address: 0x33b2d8, Func Offset: 0x28
	// Line 667, Address: 0x33b2dc, Func Offset: 0x2c
	// Line 669, Address: 0x33b2ec, Func Offset: 0x3c
	// Line 671, Address: 0x33b2f4, Func Offset: 0x44
	// Line 674, Address: 0x33b300, Func Offset: 0x50
	// Line 679, Address: 0x33b314, Func Offset: 0x64
	// Line 674, Address: 0x33b318, Func Offset: 0x68
	// Line 679, Address: 0x33b31c, Func Offset: 0x6c
	// Line 685, Address: 0x33b330, Func Offset: 0x80
	// Line 689, Address: 0x33b344, Func Offset: 0x94
	// Line 693, Address: 0x33b358, Func Offset: 0xa8
	// Line 697, Address: 0x33b36c, Func Offset: 0xbc
	// Line 701, Address: 0x33b380, Func Offset: 0xd0
	// Line 706, Address: 0x33b394, Func Offset: 0xe4
	// Line 708, Address: 0x33b39c, Func Offset: 0xec
	// Line 710, Address: 0x33b3a4, Func Offset: 0xf4
	// Line 715, Address: 0x33b3b8, Func Offset: 0x108
	// Line 719, Address: 0x33b3c8, Func Offset: 0x118
	// Line 723, Address: 0x33b3dc, Func Offset: 0x12c
	// Line 726, Address: 0x33b3f0, Func Offset: 0x140
	// Line 729, Address: 0x33b404, Func Offset: 0x154
	// Line 732, Address: 0x33b418, Func Offset: 0x168
	// Line 741, Address: 0x33b42c, Func Offset: 0x17c
	// Line 743, Address: 0x33b434, Func Offset: 0x184
	// Line 745, Address: 0x33b438, Func Offset: 0x188
	// Line 748, Address: 0x33b440, Func Offset: 0x190
	// Line 749, Address: 0x33b448, Func Offset: 0x198
	// Func End, Address: 0x33b464, Func Offset: 0x1b4
}

// ShadowMapBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x33b470
int32 ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	uint32 numInitialQW;
	uint32 numExtraQW;
	uint32 numShadows;
	uint32 numShadowQW;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	int32 textureUploadSuccess;
	uint32 _itQW;
	uint32 _xaQW;
	ulong32 tmp;
	<unknown fundamental type (0xa510)> ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __prmTmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	float32 __colScale;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> __ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	ulong32 tmp;
	<unknown fundamental type (0xa510)> ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> __ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	uint32 stat;
	// Line 554, Address: 0x33b470, Func Offset: 0
	// Line 556, Address: 0x33b480, Func Offset: 0x10
	// Line 554, Address: 0x33b484, Func Offset: 0x14
	// Line 557, Address: 0x33b488, Func Offset: 0x18
	// Line 554, Address: 0x33b48c, Func Offset: 0x1c
	// Line 559, Address: 0x33b494, Func Offset: 0x24
	// Line 561, Address: 0x33b4a8, Func Offset: 0x38
	// Line 563, Address: 0x33b5c0, Func Offset: 0x150
	// Line 569, Address: 0x33b5dc, Func Offset: 0x16c
	// Line 572, Address: 0x33b5e0, Func Offset: 0x170
	// Line 573, Address: 0x33b5ec, Func Offset: 0x17c
	// Line 575, Address: 0x33b5f4, Func Offset: 0x184
	// Line 583, Address: 0x33b5f8, Func Offset: 0x188
	// Line 589, Address: 0x33b5fc, Func Offset: 0x18c
	// Line 597, Address: 0x33b600, Func Offset: 0x190
	// Line 602, Address: 0x33b640, Func Offset: 0x1d0
	// Line 604, Address: 0x33b648, Func Offset: 0x1d8
	// Line 610, Address: 0x33b650, Func Offset: 0x1e0
	// Line 617, Address: 0x33b714, Func Offset: 0x2a4
	// Line 610, Address: 0x33b718, Func Offset: 0x2a8
	// Line 617, Address: 0x33b71c, Func Offset: 0x2ac
	// Line 610, Address: 0x33b720, Func Offset: 0x2b0
	// Line 617, Address: 0x33b730, Func Offset: 0x2c0
	// Line 610, Address: 0x33b734, Func Offset: 0x2c4
	// Line 617, Address: 0x33b738, Func Offset: 0x2c8
	// Line 610, Address: 0x33b73c, Func Offset: 0x2cc
	// Line 617, Address: 0x33b740, Func Offset: 0x2d0
	// Line 610, Address: 0x33b744, Func Offset: 0x2d4
	// Line 617, Address: 0x33b748, Func Offset: 0x2d8
	// Line 610, Address: 0x33b74c, Func Offset: 0x2dc
	// Line 617, Address: 0x33b750, Func Offset: 0x2e0
	// Line 610, Address: 0x33b758, Func Offset: 0x2e8
	// Line 617, Address: 0x33b760, Func Offset: 0x2f0
	// Line 622, Address: 0x33b7b0, Func Offset: 0x340
	// Line 627, Address: 0x33b7f0, Func Offset: 0x380
	// Line 633, Address: 0x33b918, Func Offset: 0x4a8
	// Line 635, Address: 0x33ba7c, Func Offset: 0x60c
	// Line 641, Address: 0x33ba9c, Func Offset: 0x62c
	// Line 646, Address: 0x33baf0, Func Offset: 0x680
	// Line 649, Address: 0x33bb98, Func Offset: 0x728
	// Line 648, Address: 0x33bba0, Func Offset: 0x730
	// Line 649, Address: 0x33bba4, Func Offset: 0x734
	// Func End, Address: 0x33bbbc, Func Offset: 0x74c
}

// ShadowMapUpload__FP16RxPS2AllPipeDataUi
// Start address: 0x33bbc0
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, uint32 numShadows)
{
	ulong32 tmp;
	ulong32 tmp1;
	// Line 440, Address: 0x33bbc0, Func Offset: 0
	// Line 446, Address: 0x33bbd4, Func Offset: 0x14
	// Line 451, Address: 0x33bbdc, Func Offset: 0x1c
	// Line 450, Address: 0x33bbe0, Func Offset: 0x20
	// Line 451, Address: 0x33bbe4, Func Offset: 0x24
	// Line 459, Address: 0x33bbe8, Func Offset: 0x28
	// Line 451, Address: 0x33bbec, Func Offset: 0x2c
	// Line 454, Address: 0x33bc10, Func Offset: 0x50
	// Line 451, Address: 0x33bc14, Func Offset: 0x54
	// Line 453, Address: 0x33bc18, Func Offset: 0x58
	// Line 459, Address: 0x33bc1c, Func Offset: 0x5c
	// Line 454, Address: 0x33bc20, Func Offset: 0x60
	// Line 459, Address: 0x33bc2c, Func Offset: 0x6c
	// Line 462, Address: 0x33bc34, Func Offset: 0x74
	// Line 466, Address: 0x33bc38, Func Offset: 0x78
	// Line 469, Address: 0x33bc40, Func Offset: 0x80
	// Line 466, Address: 0x33bc44, Func Offset: 0x84
	// Line 480, Address: 0x33bc48, Func Offset: 0x88
	// Line 466, Address: 0x33bc4c, Func Offset: 0x8c
	// Line 465, Address: 0x33bc58, Func Offset: 0x98
	// Line 468, Address: 0x33bc5c, Func Offset: 0x9c
	// Line 480, Address: 0x33bc60, Func Offset: 0xa0
	// Line 469, Address: 0x33bc68, Func Offset: 0xa8
	// Line 480, Address: 0x33bc6c, Func Offset: 0xac
	// Line 497, Address: 0x33bc70, Func Offset: 0xb0
	// Line 480, Address: 0x33bc74, Func Offset: 0xb4
	// Line 497, Address: 0x33bc7c, Func Offset: 0xbc
	// Line 480, Address: 0x33bc80, Func Offset: 0xc0
	// Line 469, Address: 0x33bc84, Func Offset: 0xc4
	// Line 493, Address: 0x33bc88, Func Offset: 0xc8
	// Line 505, Address: 0x33bc8c, Func Offset: 0xcc
	// Line 493, Address: 0x33bc90, Func Offset: 0xd0
	// Line 505, Address: 0x33bc94, Func Offset: 0xd4
	// Line 486, Address: 0x33bc9c, Func Offset: 0xdc
	// Line 505, Address: 0x33bca0, Func Offset: 0xe0
	// Line 497, Address: 0x33bca4, Func Offset: 0xe4
	// Line 505, Address: 0x33bca8, Func Offset: 0xe8
	// Line 502, Address: 0x33bcac, Func Offset: 0xec
	// Line 505, Address: 0x33bcb0, Func Offset: 0xf0
	// Line 469, Address: 0x33bcb4, Func Offset: 0xf4
	// Line 510, Address: 0x33bcb8, Func Offset: 0xf8
	// Line 469, Address: 0x33bcbc, Func Offset: 0xfc
	// Line 513, Address: 0x33bcc0, Func Offset: 0x100
	// Line 480, Address: 0x33bcc4, Func Offset: 0x104
	// Line 521, Address: 0x33bcc8, Func Offset: 0x108
	// Line 488, Address: 0x33bccc, Func Offset: 0x10c
	// Line 531, Address: 0x33bcd0, Func Offset: 0x110
	// Line 480, Address: 0x33bcd4, Func Offset: 0x114
	// Line 487, Address: 0x33bcec, Func Offset: 0x12c
	// Line 488, Address: 0x33bcf0, Func Offset: 0x130
	// Line 492, Address: 0x33bcf4, Func Offset: 0x134
	// Line 493, Address: 0x33bcf8, Func Offset: 0x138
	// Line 494, Address: 0x33bcfc, Func Offset: 0x13c
	// Line 488, Address: 0x33bd00, Func Offset: 0x140
	// Line 497, Address: 0x33bd04, Func Offset: 0x144
	// Line 502, Address: 0x33bd08, Func Offset: 0x148
	// Line 508, Address: 0x33bd0c, Func Offset: 0x14c
	// Line 510, Address: 0x33bd10, Func Offset: 0x150
	// Line 513, Address: 0x33bd14, Func Offset: 0x154
	// Line 488, Address: 0x33bd18, Func Offset: 0x158
	// Line 521, Address: 0x33bd20, Func Offset: 0x160
	// Line 495, Address: 0x33bd24, Func Offset: 0x164
	// Line 524, Address: 0x33bd28, Func Offset: 0x168
	// Line 531, Address: 0x33bd2c, Func Offset: 0x16c
	// Line 495, Address: 0x33bd30, Func Offset: 0x170
	// Line 503, Address: 0x33bd40, Func Offset: 0x180
	// Line 506, Address: 0x33bd54, Func Offset: 0x194
	// Line 511, Address: 0x33bd68, Func Offset: 0x1a8
	// Line 522, Address: 0x33bd7c, Func Offset: 0x1bc
	// Line 532, Address: 0x33bd90, Func Offset: 0x1d0
	// Line 534, Address: 0x33bda4, Func Offset: 0x1e4
	// Func End, Address: 0x33bdb8, Func Offset: 0x1f8
}

// DKShadowDataUpload__FP6ShadowP16RxPS2AllPipeData
// Start address: 0x33bdc0
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data)
{
	uint32 msw;
	uint32 lsw;
	ulong32 tmp;
	RwMatrixTag matrix;
	RwCamera* camera;
	float32 val;
	// Line 387, Address: 0x33bdc0, Func Offset: 0
	// Line 397, Address: 0x33bdd4, Func Offset: 0x14
	// Line 399, Address: 0x33bdf8, Func Offset: 0x38
	// Line 402, Address: 0x33be04, Func Offset: 0x44
	// Line 415, Address: 0x33be0c, Func Offset: 0x4c
	// Line 412, Address: 0x33be10, Func Offset: 0x50
	// Line 418, Address: 0x33be14, Func Offset: 0x54
	// Line 412, Address: 0x33be18, Func Offset: 0x58
	// Line 427, Address: 0x33be1c, Func Offset: 0x5c
	// Line 418, Address: 0x33be20, Func Offset: 0x60
	// Line 427, Address: 0x33be24, Func Offset: 0x64
	// Line 399, Address: 0x33be28, Func Offset: 0x68
	// Line 418, Address: 0x33be2c, Func Offset: 0x6c
	// Line 423, Address: 0x33be30, Func Offset: 0x70
	// Line 399, Address: 0x33be34, Func Offset: 0x74
	// Line 400, Address: 0x33be38, Func Offset: 0x78
	// Line 402, Address: 0x33be40, Func Offset: 0x80
	// Line 403, Address: 0x33be48, Func Offset: 0x88
	// Line 402, Address: 0x33be4c, Func Offset: 0x8c
	// Line 403, Address: 0x33be54, Func Offset: 0x94
	// Line 404, Address: 0x33be60, Func Offset: 0xa0
	// Line 403, Address: 0x33be64, Func Offset: 0xa4
	// Line 404, Address: 0x33be6c, Func Offset: 0xac
	// Line 405, Address: 0x33be78, Func Offset: 0xb8
	// Line 404, Address: 0x33be7c, Func Offset: 0xbc
	// Line 405, Address: 0x33be84, Func Offset: 0xc4
	// Line 412, Address: 0x33be98, Func Offset: 0xd8
	// Line 416, Address: 0x33be9c, Func Offset: 0xdc
	// Line 412, Address: 0x33bea0, Func Offset: 0xe0
	// Line 415, Address: 0x33beac, Func Offset: 0xec
	// Line 416, Address: 0x33beb0, Func Offset: 0xf0
	// Line 418, Address: 0x33beb4, Func Offset: 0xf4
	// Line 423, Address: 0x33beb8, Func Offset: 0xf8
	// Line 416, Address: 0x33bebc, Func Offset: 0xfc
	// Line 424, Address: 0x33bec8, Func Offset: 0x108
	// Line 427, Address: 0x33bed4, Func Offset: 0x114
	// Line 424, Address: 0x33bed8, Func Offset: 0x118
	// Line 427, Address: 0x33bedc, Func Offset: 0x11c
	// Line 428, Address: 0x33bee4, Func Offset: 0x124
	// Line 429, Address: 0x33bee8, Func Offset: 0x128
	// Line 428, Address: 0x33beec, Func Offset: 0x12c
	// Line 432, Address: 0x33bef0, Func Offset: 0x130
	// Line 430, Address: 0x33bef4, Func Offset: 0x134
	// Line 428, Address: 0x33bef8, Func Offset: 0x138
	// Line 429, Address: 0x33bf00, Func Offset: 0x140
	// Line 430, Address: 0x33bf04, Func Offset: 0x144
	// Line 433, Address: 0x33bf14, Func Offset: 0x154
	// Func End, Address: 0x33bf28, Func Offset: 0x168
}

// ShadowMapObjectSetupCallBack__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x33bf30
int32 ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
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
	uint32 _numPlanes;
	float32 dot;
	RwFrustumTestResult _infm;
	// Line 245, Address: 0x33bf30, Func Offset: 0
	// Line 249, Address: 0x33bf34, Func Offset: 0x4
	// Line 245, Address: 0x33bf38, Func Offset: 0x8
	// Line 249, Address: 0x33bf50, Func Offset: 0x20
	// Line 255, Address: 0x33bf54, Func Offset: 0x24
	// Line 250, Address: 0x33bf58, Func Offset: 0x28
	// Line 255, Address: 0x33bf5c, Func Offset: 0x2c
	// Line 261, Address: 0x33c028, Func Offset: 0xf8
	// Line 264, Address: 0x33c054, Func Offset: 0x124
	// Line 267, Address: 0x33c19c, Func Offset: 0x26c
	// Line 270, Address: 0x33c1a8, Func Offset: 0x278
	// Line 267, Address: 0x33c1ac, Func Offset: 0x27c
	// Line 270, Address: 0x33c1bc, Func Offset: 0x28c
	// Line 273, Address: 0x33c1dc, Func Offset: 0x2ac
	// Line 276, Address: 0x33c288, Func Offset: 0x358
	// Line 279, Address: 0x33c358, Func Offset: 0x428
	// Line 282, Address: 0x33c35c, Func Offset: 0x42c
	// Line 279, Address: 0x33c360, Func Offset: 0x430
	// Line 282, Address: 0x33c36c, Func Offset: 0x43c
	// Line 285, Address: 0x33c374, Func Offset: 0x444
	// Line 284, Address: 0x33c378, Func Offset: 0x448
	// Line 285, Address: 0x33c37c, Func Offset: 0x44c
	// Func End, Address: 0x33c394, Func Offset: 0x464
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
	float32 temp;
	// Line 165, Address: 0x33c3a0, Func Offset: 0
	// Line 169, Address: 0x33c3b8, Func Offset: 0x18
	// Line 170, Address: 0x33c3bc, Func Offset: 0x1c
	// Line 172, Address: 0x33c3c0, Func Offset: 0x20
	// Line 184, Address: 0x33c3d0, Func Offset: 0x30
	// Line 188, Address: 0x33c3e0, Func Offset: 0x40
	// Line 191, Address: 0x33c3ec, Func Offset: 0x4c
	// Line 193, Address: 0x33c3f8, Func Offset: 0x58
	// Line 195, Address: 0x33c40c, Func Offset: 0x6c
	// Line 197, Address: 0x33c410, Func Offset: 0x70
	// Line 202, Address: 0x33c424, Func Offset: 0x84
	// Line 201, Address: 0x33c42c, Func Offset: 0x8c
	// Line 202, Address: 0x33c43c, Func Offset: 0x9c
	// Line 207, Address: 0x33c470, Func Offset: 0xd0
	// Line 234, Address: 0x33c474, Func Offset: 0xd4
	// Line 211, Address: 0x33c47c, Func Offset: 0xdc
	// Line 234, Address: 0x33c48c, Func Offset: 0xec
	// Line 236, Address: 0x33c494, Func Offset: 0xf4
	// Line 237, Address: 0x33c498, Func Offset: 0xf8
	// Func End, Address: 0x33c4b0, Func Offset: 0x110
}

