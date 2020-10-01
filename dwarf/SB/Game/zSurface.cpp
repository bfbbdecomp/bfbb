typedef struct zSurfaceProps;
typedef struct xAnimPlay;
typedef struct RwFrame;
typedef struct RxHeap;
typedef struct xLightKit;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xLightKitLight;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct xSurface;
typedef struct xEnt;
typedef struct xQuat;
typedef struct _class_0;
typedef struct xScene;
typedef struct xLinkAsset;
typedef struct xShadowSimpleCache;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct RxPipelineNodeTopSortData;
typedef struct xEntCollis;
typedef struct rxHeapBlockHeader;
typedef struct zSurfacePropUVFX;
typedef struct RpAtomic;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct xCollis;
typedef struct RpLight;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xEntFrame;
typedef struct xBound;
typedef struct xAnimEffect;
typedef struct xGroupAsset;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xBaseAsset;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMorphTarget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPTree;
typedef struct xBase;
typedef struct xQCData;
typedef struct xFFX;
typedef struct zMaterialMapAsset;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xClumpCollBSPVertInfo;
typedef struct zMaterialMapEntry;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMemPool;
typedef struct xClumpCollBSPTriangle;
typedef struct xEntShadow;
typedef struct RpMeshHeader;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct RwResEntry;
typedef enum RxClusterValid;
typedef struct anim_coll_data;
typedef struct zSurfTextureAnim;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xAnimTransitionList;
typedef struct xGroup;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xSerial;
typedef union _class_1;
typedef struct xBox;
typedef struct zSurfacePropTexAnim;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xAnimMultiFile;
typedef struct iEnv;
typedef struct RwTexDictionary;
typedef struct zSurfAssetBase;
typedef struct RxOutputSpec;
typedef struct xJSPNodeInfo;
typedef enum RpWorldRenderOrder;
typedef struct xEntAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwTexture;
typedef struct zSurfColorFX;
typedef struct RpSector;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct xJSPHeader;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RpWorld;
typedef struct xEnv;
typedef struct zSurfUVFX;
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
typedef struct zSurfMatFX;
typedef struct _class_2;
typedef struct xShadowSimplePoly;
typedef struct RpInterpolator;

typedef void(*type_4)(xEnt*, xScene*, f32);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_7)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_8)(xEnt*, xScene*, f32, xEntCollis*);
typedef u32(*type_9)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_10)(xEnt*, xVec3*);
typedef void(*type_12)(xEnt*, xScene*, f32, xEntFrame*);
typedef s32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_14)(xEnt*);
typedef s32(*type_15)(RxNodeDefinition*);
typedef void(*type_16)(RxNodeDefinition*);
typedef s32(*type_17)(RxPipelineNode*);
typedef u32(*type_18)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_19)(RxPipelineNode*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_23)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_24)(RpClump*, void*);
typedef u32(*type_25)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_27)(u32);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s8*(*type_32)(xBase*);
typedef s8*(*type_34)(u32);
typedef RpAtomic*(*type_37)(RpAtomic*);
typedef u32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_40)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpWorldSector*(*type_44)(RpWorldSector*);
typedef void(*type_46)(xMemPool*, void*);
typedef void(*type_49)(RwResEntry*);
typedef RwObjectHasFrame*(*type_55)(RwObjectHasFrame*);

typedef RwFrame* type_0[2];
typedef u8 type_1[2];
typedef xAnimMultiFileEntry type_2[1];
typedef s8 type_3[16];
typedef f32 type_6[16];
typedef u16 type_11[3];
typedef zSurfTextureAnim type_22[2];
typedef zSurfUVFX type_26[2];
typedef xVec3 type_28[4];
typedef u8 type_30[3];
typedef RwTexCoords* type_31[8];
typedef u8 type_33[3];
typedef u16 type_35[3];
typedef xCollis type_36[18];
typedef u32 type_39[4];
typedef RwTexCoords* type_41[8];
typedef f32 type_42[2];
typedef f32 type_43[2];
typedef s8 type_45[4];
typedef s8 type_47[32];
typedef s8 type_48[32];
typedef f32 type_50[4];
typedef u8 type_51[3];
typedef zSurfacePropTexAnim type_52[2];
typedef RxCluster type_53[1];
typedef zSurfacePropUVFX type_54[2];
typedef f32 type_56[2];
typedef xVec3 type_57[3];
typedef s8 type_58[16];
typedef RpLight* type_59[2];
typedef zMaterialMapAsset* type_60[1];

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	u32 texanim_flags;
	type_52 texanim;
	u32 uvfx_flags;
	type_54 uvfx;
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
	type_29 BeforeAnimMatrices;
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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
	type_20 BeforeEnter;
	type_5 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_6 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_56 BilinearLerp;
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

struct RpPolygon
{
	u16 matIndex;
	type_11 vertIndex;
};

struct xSurface : xBase
{
	u32 idx;
	u32 type;
	union
	{
		u32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	f32 friction;
	u8 state;
	type_33 pad;
	void* moprops;
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
	type_4 update;
	type_4 endUpdate;
	type_10 bupdate;
	type_12 move;
	type_14 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_21 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
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
	type_27 resolvID;
	type_32 base2Name;
	type_34 id2Name;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_50 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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
	type_36 colls;
	type_8 post;
	type_18 depenq;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_39 pad;
};

struct zSurfacePropUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	type_42 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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
	type_37 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	_class_2 anim_coll;
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

struct xBound
{
	xQCData qcd;
	u8 type;
	type_51 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_25 Callback;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_24 callback;
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
	type_41 texCoords;
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
	type_31 texCoords;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
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

struct xFFX
{
};

struct zMaterialMapAsset
{
	u32 id;
	u32 count;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct zMaterialMapEntry
{
	u32 surfaceAssetID;
	u32 materialIndex;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_46 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_43 radius;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_49 destroyNotify;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct anim_coll_data
{
};

struct zSurfTextureAnim
{
	u16 pad;
	u16 mode;
	u32 group;
	f32 speed;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_1 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_35 vertIndex;
	s16 matIndex;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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

struct xSerial
{
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct zSurfacePropTexAnim
{
	u16 mode;
	f32 speed;
	f32 frame;
	u32 group;
	s32 group_idx;
	xBase* group_ptr;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_2 Files;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_59 light;
	type_0 light_frame;
	s32 memlvl;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zSurfAssetBase : xBaseAsset
{
	u8 game_damage_type;
	u8 game_sticky;
	u8 game_damage_flags;
	u8 surf_type;
	u8 phys_pad;
	u8 sld_start;
	u8 sld_stop;
	u8 phys_flags;
	f32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	u32 texture_anim_flags;
	type_22 texture_anim;
	u32 uvfx_flags;
	type_26 uvfx;
	u8 on;
	type_30 surf_pad;
	f32 oob_delay;
	f32 walljump_scale_xz;
	f32 walljump_scale_y;
	f32 damage_timer;
	f32 damage_bounce;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_47 name;
	type_48 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct zSurfColorFX
{
	u16 flags;
	u16 mode;
	f32 speed;
};

struct RpSector
{
	s32 type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RxNodeMethods
{
	type_13 nodeBody;
	type_15 nodeInit;
	type_16 nodeTerm;
	type_17 pipelineNodeInit;
	type_19 pipelineNodeTerm;
	type_23 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct xJSPHeader
{
	type_45 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_44 renderCallBack;
	RxPipeline* pipeline;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zSurfUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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
	type_53 clusters;
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
	type_55 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct zSurfMatFX
{
	u32 flags;
	u32 bumpmapID;
	u32 envmapID;
	f32 shininess;
	f32 bumpiness;
	u32 dualmapID;
};

struct _class_2
{
	xVec3* verts;
};

struct xShadowSimplePoly
{
	type_57 vert;
	xVec3 norm;
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

type_58 buffer;
type_3 buffer;
zSurfaceProps* zsps;
s32 sMapperCount;
type_60 sMapper;
xSurface sDef_surf;
zSurfaceProps sDef_surf_props;
zSurfAssetBase sDef_surf_asset;
u32 gFrameCount;
type_40 zSurfaceEventCB;
u32 gActiveHeap;

xSurface& zSurfaceGetDefault();
void zSurfaceGetName(s32 type, s8* buffer);
s32 zSurfaceEventCB(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget);
void zSurfaceUpdate(xBase* to, f32 dt);
void zSurfaceSetup(xSurface* s);
void zSurfaceLoad(xSurface* ent, xSerial* s);
void zSurfaceSave(xSurface* ent, xSerial* s);
f32 zSurfaceGetDamping(xSurface* surf, f32 min_vel);
s32 zSurfaceGetSlickness(xSurface* surf);
f32 zSurfaceGetOutOfBoundsDelay(xSurface& s);
f32 zSurfaceGetFriction(xSurface* surf);
u32 zSurfaceGetStandOn(xSurface* surf);
u32 zSurfaceGetSticky(xSurface* surf);
u32 zSurfaceGetDamagePassthrough(xSurface* surf);
s32 zSurfaceGetDamageType(xSurface* surf);
u32 zSurfaceGetMatchOrient(xSurface* surf);
f32 zSurfaceGetSlideStopAngle(xSurface* surf);
f32 zSurfaceGetSlideStartAngle(xSurface* surf);
u8 zSurfaceOutOfBounds(xSurface& s);
u32 zSurfaceGetStep(xSurface* surf);
u32 zSurfaceGetSlide(xSurface* surf);
xSurface* zSurfaceGetSurface(xCollis* coll);
xSurface* zSurfaceGetSurface(u32 mat_id);
void zSurfaceExit();
void zSurfaceRegisterMapper(u32 assetId);
void zSurfaceInit();

// zSurfaceGetDefault__Fv
// Start address: 0x19c9a0
xSurface& zSurfaceGetDefault()
{
}

// zSurfaceGetName__FiPc
// Start address: 0x19c9b0
void zSurfaceGetName(s32 type, s8* buffer)
{
}

// zSurfaceEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19cc10
s32 zSurfaceEventCB(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget)
{
	xSurface* t;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
}

// zSurfaceUpdate__FP5xBaseP6xScenef
// Start address: 0x19cf70
void zSurfaceUpdate(xBase* to, f32 dt)
{
	s32 j;
	zSurfaceProps* moprops;
	zSurfacePropUVFX& sfx;
	f32 uTime;
	s32 uTimeInt;
	f32 vTime;
	s32 vTimeInt;
	xGroup* g;
	s32 max;
}

// zSurfaceSetup__FP8xSurface
// Start address: 0x19d760
void zSurfaceSetup(xSurface* s)
{
	zSurfaceProps* pp;
	s32 i;
}

// zSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x19d7d0
void zSurfaceLoad(xSurface* ent, xSerial* s)
{
}

// zSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x19d7e0
void zSurfaceSave(xSurface* ent, xSerial* s)
{
}

// zSurfaceGetDamping__FPC8xSurfacef
// Start address: 0x19d7f0
f32 zSurfaceGetDamping(xSurface* surf, f32 min_vel)
{
}

// zSurfaceGetSlickness__FPC8xSurface
// Start address: 0x19d800
s32 zSurfaceGetSlickness(xSurface* surf)
{
}

// zSurfaceGetOutOfBoundsDelay__FRC8xSurface
// Start address: 0x19d830
f32 zSurfaceGetOutOfBoundsDelay(xSurface& s)
{
}

// zSurfaceGetFriction__FPC8xSurface
// Start address: 0x19d860
f32 zSurfaceGetFriction(xSurface* surf)
{
}

// zSurfaceGetStandOn__FPC8xSurface
// Start address: 0x19d870
u32 zSurfaceGetStandOn(xSurface* surf)
{
}

// zSurfaceGetSticky__FPC8xSurface
// Start address: 0x19d8b0
u32 zSurfaceGetSticky(xSurface* surf)
{
}

// zSurfaceGetDamagePassthrough__FPC8xSurface
// Start address: 0x19d8e0
u32 zSurfaceGetDamagePassthrough(xSurface* surf)
{
}

// zSurfaceGetDamageType__FPC8xSurface
// Start address: 0x19d910
s32 zSurfaceGetDamageType(xSurface* surf)
{
}

// zSurfaceGetMatchOrient__FPC8xSurface
// Start address: 0x19d940
u32 zSurfaceGetMatchOrient(xSurface* surf)
{
}

// zSurfaceGetSlideStopAngle__FPC8xSurface
// Start address: 0x19d970
f32 zSurfaceGetSlideStopAngle(xSurface* surf)
{
}

// zSurfaceGetSlideStartAngle__FPC8xSurface
// Start address: 0x19da00
f32 zSurfaceGetSlideStartAngle(xSurface* surf)
{
}

// zSurfaceOutOfBounds__FRC8xSurface
// Start address: 0x19da90
u8 zSurfaceOutOfBounds(xSurface& s)
{
}

// zSurfaceGetStep__FPC8xSurface
// Start address: 0x19dac0
u32 zSurfaceGetStep(xSurface* surf)
{
}

// zSurfaceGetSlide__FPC8xSurface
// Start address: 0x19daf0
u32 zSurfaceGetSlide(xSurface* surf)
{
}

// zSurfaceGetSurface__FPC7xCollis
// Start address: 0x19db20
xSurface* zSurfaceGetSurface(xCollis* coll)
{
	xSurface* surf;
}

// zSurfaceGetSurface__FUi
// Start address: 0x19db80
xSurface* zSurfaceGetSurface(u32 mat_id)
{
	s32 map;
	zMaterialMapAsset* mapper;
	u16 i;
	zMaterialMapEntry* entry;
	u16 nsurfs;
	u16 j;
	xSurface* surf;
}

// zSurfaceExit__Fv
// Start address: 0x19dcb0
void zSurfaceExit()
{
}

// zSurfaceRegisterMapper__FUi
// Start address: 0x19dcd0
void zSurfaceRegisterMapper(u32 assetId)
{
}

// zSurfaceInit__Fv
// Start address: 0x19dd30
void zSurfaceInit()
{
	u32 size;
	u16 nsurfs;
	u16 i;
	zSurfAssetBase* asset;
	xSurface* surf;
	zSurfaceProps* moprops;
	s32 j;
}

