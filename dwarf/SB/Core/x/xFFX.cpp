typedef struct xBase;
typedef struct xAnimPlay;
typedef struct RpClump;
typedef struct xEnt;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RpGeometry;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct xEntFrame;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct xFFXShakeState;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct xMemPool;
typedef struct xLinkAsset;
typedef struct xVec3;
typedef struct xModelInstance;
typedef struct xShadowSimplePoly;
typedef struct RxPipeline;
typedef struct xCollis;
typedef struct xFFXRotMatchState;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xLightKit;
typedef struct xModelPool;
typedef struct xLightKitLight;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpLight;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xBox;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct xEntShadow;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xGridBound;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct _class_0;
typedef struct RxNodeDefinition;
typedef struct tri_data;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef struct xEntAsset;

typedef RpClump*(*type_0)(RpClump*, void*);
typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_2)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef s32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef u32(*type_5)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef xBase*(*type_8)(u32);
typedef void(*type_9)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_10)(RxPipelineNode*);
typedef s8*(*type_12)(xBase*);
typedef void(*type_13)(RxPipelineNode*);
typedef s8*(*type_14)(u32);
typedef s32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_17)(RpAtomic*);
typedef void(*type_18)(xEnt*, xScene*, f32);
typedef void(*type_20)(xEnt*, xVec3*);
typedef void(*type_21)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_22)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_23)(xEnt*);
typedef u32(*type_24)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_25)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_26)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_29)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_32)(xMemPool*, void*);
typedef void(*type_35)(RwResEntry*);
typedef void(*type_37)(xEnt*, xScene*, f32, void*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef xVec3 type_11[3];
typedef u16 type_16[3];
typedef f32 type_19[16];
typedef RwTexCoords* type_27[8];
typedef xVec3 type_28[4];
typedef u32 type_30[4];
typedef xCollis type_31[18];
typedef s8 type_33[32];
typedef s8 type_34[32];
typedef f32 type_36[2];
typedef u8 type_38[3];
typedef RxCluster type_39[1];
typedef f32 type_40[4];
typedef f32 type_41[2];
typedef u8 type_43[2];
typedef xAnimMultiFileEntry type_44[1];

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
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
	type_9 BeforeAnimMatrices;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_0 callback;
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
	type_18 update;
	type_18 endUpdate;
	type_20 bupdate;
	type_22 move;
	type_23 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_26 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_5 Callback;
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

struct xFFX
{
	u32 flags;
	type_37 doEffect;
	void* fdata;
	xFFX* next;
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
	type_27 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_36 BilinearLerp;
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
	type_30 pad;
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
	type_29 StateCallback;
	type_9 BeforeAnimMatrices;
};

struct xFFXShakeState
{
	xVec3 disp;
	f32 dur;
	f32 freq;
	f32 tmr;
	f32 alpha;
	f32 lval;
	xFFXShakeState* next;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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

struct xEnv
{
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_32 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_40 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct xShadowSimplePoly
{
	type_11 vert;
	xVec3 norm;
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

struct xFFXRotMatchState
{
	s32 lgrounded;
	xVec3 lfup;
	xVec3 lfat;
	xVec3 plfat;
	f32 tmr;
	f32 mrate;
	f32 tmatch;
	f32 rrate;
	f32 trelax;
	f32 max_decl;
	xFFXRotMatchState* next;
};

struct RpTriangle
{
	type_16 vertIndex;
	s16 matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_17 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_19 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	type_43 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_35 destroyNotify;
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
	type_8 resolvID;
	type_12 base2Name;
	type_14 id2Name;
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
	type_28 corner;
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
	type_31 colls;
	type_21 post;
	type_25 depenq;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_24 Conditional;
	type_24 Callback;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
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

struct xBound
{
	xQCData qcd;
	u8 type;
	type_38 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_44 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_33 name;
	type_34 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_41 radius;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct anim_coll_data
{
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

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_7 nodeTerm;
	type_10 pipelineNodeInit;
	type_13 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct _class_0
{
	xVec3* verts;
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

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_39 clusters;
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
	type_42 sync;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
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

u32 psize;
xFFX* pool;
xFFX* alist;
u32 shake_psize;
xFFXShakeState* shake_pool;
xFFXShakeState* shake_alist;
u32 rot_match_psize;
xFFXRotMatchState* rot_match_pool;
xFFXRotMatchState* rot_match_alist;
u32 gActiveHeap;

xFFXRotMatchState* xFFXRotMatchAlloc();
void xFFXRotMatchPoolInit(u32 num);
void xFFXShakeFree(xFFXShakeState* s);
xFFXShakeState* xFFXShakeAlloc();
void xFFXShakePoolInit(u32 num);
void xFFXShakeUpdateEnt(xEnt* ent, f32 dt, void* fdata);
void xFFXApply(xEnt* ent, xScene* sc, f32 dt);
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, f32 dt);
s16 xFFXAddEffect(xEnt* ent, type_37 dof, void* fd);
s16 xFFXAddEffect(xEnt* ent, xFFX* f);
void xFFXTurnOff(xFFX* f);
void xFFXTurnOn(xFFX* f);
xFFX* xFFXAlloc();
void xFFXPoolInit(u32 num_ffx);

// xFFXRotMatchAlloc__Fv
// Start address: 0x1da8c0
xFFXRotMatchState* xFFXRotMatchAlloc()
{
}

// xFFXRotMatchPoolInit__FUi
// Start address: 0x1da8f0
void xFFXRotMatchPoolInit(u32 num)
{
	u32 i;
}

// xFFXShakeFree__FP14xFFXShakeState
// Start address: 0x1da990
void xFFXShakeFree(xFFXShakeState* s)
{
}

// xFFXShakeAlloc__Fv
// Start address: 0x1da9a0
xFFXShakeState* xFFXShakeAlloc()
{
}

// xFFXShakePoolInit__FUi
// Start address: 0x1da9d0
void xFFXShakePoolInit(u32 num)
{
	u32 i;
}

// xFFXShakeUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x1daa70
void xFFXShakeUpdateEnt(xEnt* ent, f32 dt, void* fdata)
{
	xFFXShakeState* ss;
	f32 tnext;
	f32 mag;
}

// xFFXApply__FP4xEntP6xScenef
// Start address: 0x1dabd0
void xFFXApply(xEnt* ent, xScene* sc, f32 dt)
{
}

// xFFXApplyOne__FP4xFFXP4xEntP6xScenef
// Start address: 0x1dac10
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, f32 dt)
{
}

// xFFXAddEffect__FP4xEntPFP4xEntP6xScenefPv_vPv
// Start address: 0x1dadc0
s16 xFFXAddEffect(xEnt* ent, type_37 dof, void* fd)
{
}

// xFFXAddEffect__FP4xEntP4xFFX
// Start address: 0x1dae30
s16 xFFXAddEffect(xEnt* ent, xFFX* f)
{
}

// xFFXTurnOff__FP4xFFX
// Start address: 0x1dae60
void xFFXTurnOff(xFFX* f)
{
}

// xFFXTurnOn__FP4xFFX
// Start address: 0x1dae80
void xFFXTurnOn(xFFX* f)
{
}

// xFFXAlloc__Fv
// Start address: 0x1dae90
xFFX* xFFXAlloc()
{
}

// xFFXPoolInit__FUi
// Start address: 0x1daec0
void xFFXPoolInit(u32 num_ffx)
{
	u32 i;
}

