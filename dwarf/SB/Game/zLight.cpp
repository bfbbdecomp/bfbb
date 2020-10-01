typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xLightKit;
typedef struct xModelPool;
typedef struct xJSPNodeInfo;
typedef struct xEntShadow;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct RpAtomic;
typedef struct xSerial;
typedef struct RxNodeDefinition;
typedef struct xVolumeAsset;
typedef struct xAnimSingle;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xAnimState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RpWorld;
typedef struct RxPipelineCluster;
typedef struct xAnimTable;
typedef struct xVolume;
typedef struct RxPipelineNodeParam;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMorphTarget;
typedef struct xMemPool;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct xVec3;
typedef struct _xFColor;
typedef struct xModelInstance;
typedef struct xJSPHeader;
typedef struct RpVertexNormal;
typedef struct RwTexCoords;
typedef struct _zLight;
typedef struct rxHeapBlockHeader;
typedef struct xSurface;
typedef struct xBase;
typedef struct RpMeshHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RwResEntry;
typedef struct zLightAsset;
typedef struct xModelBucket;
typedef struct xCollis;
typedef struct xClumpCollBSPTree;
typedef struct xAnimFile;
typedef struct RwLLLink;
typedef struct xEntAsset;
typedef struct RpTriangle;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xLinkAsset;
typedef struct rxReq;
typedef struct xQCData;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct iEnv;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct _tagPartLink;
typedef enum RxClusterValid;
typedef struct xBound;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct xShadowSimplePoly;
typedef struct xBaseAsset;
typedef struct xBBox;
typedef enum RpWorldRenderOrder;
typedef enum rxEmbeddedPacketState;
typedef struct RpLight;
typedef struct xSphere;
typedef struct RpMaterial;
typedef struct tri_data;
typedef struct _class_0;
typedef struct RwFrame;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct RpSector;
typedef struct zVolume;
typedef struct xBox;
typedef struct xScene;
typedef struct RxClusterDefinition;
typedef struct xShadowSimpleCache;
typedef struct _tagPartSpace;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct xAnimMultiFileEntry;
typedef struct xMat3x3;
typedef struct xAnimActiveEffect;
typedef struct RxClusterRef;
typedef struct _tagPartition;
typedef struct xFFX;
typedef struct RwObject;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPTriangle;
typedef struct RxNodeMethods;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xAnimMultiFileBase;
typedef struct anim_coll_data;
typedef struct iLight;
typedef struct RxCluster;
typedef struct RpInterpolator;
typedef union _class_2;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RpMaterialList;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_1)(RxPipelineNode*);
typedef xBase*(*type_3)(u32);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef s8*(*type_5)(xBase*);
typedef s32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef s8*(*type_7)(u32);
typedef u32(*type_8)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_9)(RpClump*, void*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_12)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_15)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_16)(RxNodeDefinition*);
typedef void(*type_17)(_zLight*, f32);
typedef void(*type_18)(RxNodeDefinition*);
typedef s32(*type_20)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_21)(RxPipelineNode*);
typedef void(*type_22)(_zLight*);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef u32(*type_26)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_30)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xEnt*, xScene*, f32);
typedef void(*type_36)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_37)(xEnt*, xVec3*);
typedef void(*type_38)(xEnt*, xScene*, f32, xEntFrame*);
typedef RpWorldSector*(*type_40)(RpWorldSector*);
typedef void(*type_41)(xEnt*);
typedef u32(*type_42)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_44)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_48)(xMemPool*, void*);
typedef s32(*type_50)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_54)(RwResEntry*);

typedef f32 type_2[4];
typedef RwTexCoords* type_11[8];
typedef f32 type_13[2];
typedef s8 type_14[4];
typedef s8 type_19[16];
typedef _zLight* type_23[32];
typedef u16 type_24[3];
typedef s8 type_27[16];
typedef _zLight* type_28[32];
typedef xVec3 type_29[3];
typedef RpLight* type_31[2];
typedef RwFrame* type_32[2];
typedef RwTexCoords* type_33[8];
typedef f32 type_35[16];
typedef u32 type_39[4];
typedef type_22 type_43[18];
typedef type_17 type_45[18];
typedef xVec3 type_46[4];
typedef f32 type_47[2];
typedef u8 type_49[3];
typedef s8 type_51[32];
typedef s8 type_52[32];
typedef u8 type_53[2];
typedef xCollis type_55[18];
typedef f32 type_56[4];
typedef u8 type_57[2];
typedef xAnimMultiFileEntry type_58[1];
typedef RxCluster type_59[1];
typedef u16 type_60[3];

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
	type_34 update;
	type_34 endUpdate;
	type_37 bupdate;
	type_38 move;
	type_41 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_44 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
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
	type_10 BeforeAnimMatrices;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_13 radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_8 Callback;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_9 callback;
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
	type_25 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
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

struct xVolumeAsset
{
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_47 BilinearLerp;
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
	type_33 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_11 texCoords;
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
	type_4 BeforeEnter;
	type_30 StateCallback;
	type_10 BeforeAnimMatrices;
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
	type_40 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_48 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RpPolygon
{
	u16 matIndex;
	type_60 vertIndex;
};

struct xQuat
{
	xVec3 v;
	f32 s;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct _xFColor
{
	f32 r;
	f32 g;
	f32 b;
	f32 a;
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
	_class_0 anim_coll;
};

struct xJSPHeader
{
	type_14 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct _zLight : xBase
{
	u32 flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	s32 true_idx;
	f32* reg;
	s32 effect_idx;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_39 pad;
};

struct xSurface
{
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_20 eventFunc;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_54 destroyNotify;
};

struct zLightAsset : xBaseAsset
{
	u8 lightType;
	u8 lightEffect;
	type_53 lightPad;
	u32 lightFlags;
	type_56 lightColor;
	xVec3 lightDir;
	f32 lightConeAngle;
	xSphere lightSphere;
	u32 attachID;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
		_class_1 tuv;
		tri_data tri;
	};
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_57 NumAnims;
	void** RawData;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpTriangle
{
	type_24 vertIndex;
	s16 matIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_26 Conditional;
	type_26 Callback;
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

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_2 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct rxReq
{
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_31 light;
	type_32 light_frame;
	s32 memlvl;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_49 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_58 Files;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xShadowSimplePoly
{
	type_29 vert;
	xVec3 norm;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xSphere
{
	xVec3 center;
	f32 r;
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

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct _class_0
{
	xVec3* verts;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_51 name;
	type_52 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_35 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct RpSector
{
	s32 type;
};

struct zVolume : xVolume
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_5 base2Name;
	type_7 id2Name;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	type_46 corner;
};

struct _tagPartSpace
{
	s32 total;
	_tagPartLink head;
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
	type_55 colls;
	type_36 post;
	type_42 depenq;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct _tagPartition
{
	xVec3 min;
	xVec3 max;
	xVec3 space_dim;
	s32 total_x;
	s32 total_y;
	s32 total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
};

struct xFFX
{
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RxNodeMethods
{
	type_15 nodeBody;
	type_16 nodeInit;
	type_18 nodeTerm;
	type_21 pipelineNodeInit;
	type_1 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_12 configMsgHandler;
};

struct st_SERIAL_CLIENTINFO
{
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct anim_coll_data
{
};

struct iLight
{
	u32 type;
	RpLight* hw;
	xSphere sph;
	f32 radius_sq;
	_xFColor color;
	xVec3 dir;
	f32 coneangle;
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

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_59 clusters;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RwLinkList
{
	RwLLLink link;
};

type_19 buffer;
type_27 buffer;
type_23 sLight;
s32 sLightTotal;
_tagPartition sLightPart;
zVolume* sPartitionVolume;
s32 gNumTemporaryLights;
type_28 gTemporaryLights;
type_45 sEffectFuncs;
type_43 sEffectInitFuncs;
xVec3 sDefaultShadowVec;
RpWorld* gLightWorld;
u32 gActiveHeap;
type_50 zLightEventCB;

void zLightOn(_zLight* zl, s32 on);
void zLightSetVolume(zVolume* vol);
void zLightRemoveLocalEnv();
void zLightAddLocal(xEnt* ent);
void zLightAddLocalEnv();
void zLightUpdate(xBase* to, f32 dt);
s32 zLightEventCB(xBase* to, u32 toEvent);
void zLightLoad(_zLight* ent, xSerial* s);
void zLightSave(_zLight* ent, xSerial* s);
void zLightDestroyAll();
void zLightResolveLinks();
void zLightInit(xBase* b, zLightAsset* tasset);
void zLightInit(void* b, void* tasset);
void zLightResetAll(xEnv* env);

// zLightOn__FP7_zLighti
// Start address: 0x180590
void zLightOn(_zLight* zl, s32 on)
{
}

// zLightSetVolume__FP7zVolume
// Start address: 0x1805c0
void zLightSetVolume(zVolume* vol)
{
	u32 lp_id;
}

// zLightRemoveLocalEnv__Fv
// Start address: 0x180610
void zLightRemoveLocalEnv()
{
	s32 i;
	RwLLLink* link;
}

// zLightAddLocal__FP4xEnt
// Start address: 0x180660
void zLightAddLocal(xEnt* ent)
{
	xVec3 default_light_pos;
}

// zLightAddLocalEnv__Fv
// Start address: 0x180740
void zLightAddLocalEnv()
{
	s32 i;
	_zLight* zlight;
	iLight* light;
}

// zLightUpdate__FP5xBaseP6xScenef
// Start address: 0x180850
void zLightUpdate(xBase* to, f32 dt)
{
	_zLight* t;
	xVec3 pos;
}

// zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x180940
s32 zLightEventCB(xBase* to, u32 toEvent)
{
	_zLight* t;
}

// zLightLoad__FP7_zLightP7xSerial
// Start address: 0x180a30
void zLightLoad(_zLight* ent, xSerial* s)
{
}

// zLightSave__FP7_zLightP7xSerial
// Start address: 0x180a40
void zLightSave(_zLight* ent, xSerial* s)
{
}

// zLightDestroyAll__Fv
// Start address: 0x180a50
void zLightDestroyAll()
{
	s32 total;
	s32 i;
}

// zLightResolveLinks__Fv
// Start address: 0x180ad0
void zLightResolveLinks()
{
	s32 i;
	_zLight* zl;
}

// zLightInit__FP5xBaseP11zLightAsset
// Start address: 0x180b60
void zLightInit(xBase* b, zLightAsset* tasset)
{
	_zLight* t;
	u32 itype;
}

// zLightInit__FPvPv
// Start address: 0x180d60
void zLightInit(void* b, void* tasset)
{
}

// zLightResetAll__FP4xEnv
// Start address: 0x180d70
void zLightResetAll(xEnv* env)
{
}

