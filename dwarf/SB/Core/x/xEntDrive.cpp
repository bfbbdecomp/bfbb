typedef struct tri_data_0;
typedef struct xAnimFile;
typedef struct RxPipelineNodeParam;
typedef struct xEntDrive;
typedef struct xAnimSingle;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct xEntAsset;
typedef struct xQuat;
typedef struct xCollis;
typedef struct RwMatrixTag;
typedef struct xEnt;
typedef struct xBaseAsset;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct xAnimMultiFileBase;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTransition;
typedef struct RpAtomic;
typedef struct tri_data_1;
typedef struct xEnv;
typedef struct _class_0;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct xEntFrame;
typedef struct xVec3;
typedef struct RpInterpolator;
typedef struct RwSurfaceProperties;
typedef struct xAnimActiveEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimMultiFile;
typedef struct rxReq;
typedef struct xAnimPlay;
typedef struct xShadowSimplePoly;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xBBox;
typedef struct RpMaterialList;
typedef struct _class_1;
typedef struct RpMaterial;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct rxHeapFreeBlock;
typedef struct xModelPool;
typedef struct xRot;
typedef struct xScene;
typedef struct RpClump;
typedef struct xShadowSimpleCache;
typedef struct xBound;
typedef struct RpGeometry;
typedef struct xEntCollis;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGridBound;
typedef struct RpLight;
typedef struct RpMorphTarget;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xQCData;
typedef struct xAnimTable;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xMemPool;
typedef struct RpMeshHeader;
typedef struct xFFX;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xLinkAsset;
typedef struct RpTriangle;
typedef struct xEntShadow;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xAnimTransitionList;
typedef struct anim_coll_data;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RwResEntry;
typedef struct xBase;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xSurface;
typedef struct RwRGBAReal;
typedef struct xModelBucket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;

typedef s32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_1)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_2)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_4)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef s32(*type_7)(RxPipelineNode*);
typedef u32(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_9)(RxPipelineNode*);
typedef xBase*(*type_10)(u32);
typedef s8*(*type_14)(xBase*);
typedef void(*type_15)(xAnimState*, xAnimSingle*, void*);
typedef s8*(*type_16)(u32);
typedef void(*type_17)(xEnt*, xScene*, f32);
typedef void(*type_19)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_20)(xEnt*, xVec3*);
typedef void(*type_21)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_22)(xAnimPlay*, xAnimState*);
typedef void(*type_23)(xEnt*);
typedef RpClump*(*type_24)(RpClump*, void*);
typedef u32(*type_25)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef RpAtomic*(*type_31)(RpAtomic*);
typedef void(*type_35)(xMemPool*, void*);
typedef void(*type_38)(RwResEntry*);
typedef s32(*type_41)(xBase*, xBase*, u32, f32*, xBase*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef f32 type_5[2];
typedef u8 type_11[2];
typedef xAnimMultiFileEntry type_12[1];
typedef xVec3 type_13[3];
typedef f32 type_18[16];
typedef u32 type_28[4];
typedef xVec3 type_29[4];
typedef u16 type_30[3];
typedef u8 type_32[3];
typedef xCollis type_33[18];
typedef f32 type_34[4];
typedef s8 type_36[32];
typedef s8 type_37[32];
typedef RwTexCoords* type_39[8];
typedef RxCluster type_40[1];
typedef f32 type_43[2];

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
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
	type_11 NumAnims;
	void** RawData;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xEntDrive
{
	u32 flags;
	f32 otm;
	f32 otmr;
	f32 os;
	f32 tm;
	f32 tmr;
	f32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	f32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_5 BilinearLerp;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct xQuat
{
	xVec3 v;
	f32 s;
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
		tri_data_1 tri;
	};
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
	type_17 update;
	type_17 endUpdate;
	type_20 bupdate;
	type_21 move;
	type_23 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_27 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	type_28 pad;
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
	type_22 BeforeEnter;
	type_15 StateCallback;
	type_26 BeforeAnimMatrices;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_8 Conditional;
	type_8 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	type_31 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct xEnv
{
};

struct _class_0
{
	xVec3* verts;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_1 Callback;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_12 Files;
};

struct rxReq
{
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
	type_26 BeforeAnimMatrices;
};

struct xShadowSimplePoly
{
	type_13 vert;
	xVec3 norm;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
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
	type_10 resolvID;
	type_14 base2Name;
	type_16 id2Name;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_24 callback;
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
	type_29 corner;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_32 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_39 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_33 colls;
	type_19 post;
	type_25 depenq;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_35 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xFFX
{
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

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_34 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct RpTriangle
{
	type_30 vertIndex;
	s16 matIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_43 radius;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct anim_coll_data
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_38 destroyNotify;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_41 eventFunc;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_36 name;
	type_37 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RxNodeMethods
{
	type_3 nodeBody;
	type_4 nodeInit;
	type_6 nodeTerm;
	type_7 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_40 clusters;
};

struct xSurface
{
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_42 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};


void xEntDriveUpdate(xEntDrive* drv, f32 dt);
void xEntDriveDismount(xEntDrive* drv, f32 dmt);
void xEntDriveMount(xEntDrive* drv, xEnt* driver, f32 mt, xCollis* coll);
void xEntDriveInit(xEntDrive* drv, xEnt* driven);

// xEntDriveUpdate__FP9xEntDriveP6xScenefPC7xCollis
// Start address: 0x1d5810
void xEntDriveUpdate(xEntDrive* drv, f32 dt)
{
	xVec3 euler;
	xMat3x3 rot;
	xMat3x3 a_descaled;
	f32 dummy;
	f32 len2;
	f32 len_inv;
	f32 len2;
	f32 len_inv;
	f32 len2;
	f32 len_inv;
	xVec3 newq;
	xModelInstance& m;
	xVec3 world_loc;
	xVec3 new_loc;
	xMat4x3 oldmat;
}

// xEntDriveDismount__FP9xEntDrivef
// Start address: 0x1d66d0
void xEntDriveDismount(xEntDrive* drv, f32 dmt)
{
}

// xEntDriveMount__FP9xEntDriveP4xEntfPC7xCollis
// Start address: 0x1d6820
void xEntDriveMount(xEntDrive* drv, xEnt* driver, f32 mt, xCollis* coll)
{
	xVec3 euler;
	xMat3x3 a_descaled;
	f32 dummy;
	f32 len2;
	f32 len_inv;
	f32 len2;
	f32 len_inv;
	f32 len2;
	f32 len_inv;
}

// xEntDriveInit__FP9xEntDriveP4xEnt
// Start address: 0x1d6e20
void xEntDriveInit(xEntDrive* drv, xEnt* driven)
{
}

