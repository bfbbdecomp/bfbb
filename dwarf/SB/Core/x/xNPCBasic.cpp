typedef struct xVec3;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct _class_0;
typedef struct RwObjectHasFrame;
typedef struct xAnimTransition;
typedef struct xBase;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef struct RxPipelineNodeTopSortData;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xAnimSingle;
typedef struct RyzMemData;
typedef struct RxNodeDefinition;
typedef struct xEnt;
typedef struct xNPCBasic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpClump;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct RxPipelineNodeParam;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntFrame;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xLinkAsset;
typedef struct xMemPool;
typedef struct xCollis;
typedef struct xShadowSimplePoly;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xFactoryInst;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct _anon0;
typedef struct xScene;
typedef enum RxNodeDefEditable;
typedef struct xShadowSimpleCache;
typedef enum RxClusterValid;
typedef struct xAnimTransitionList;
typedef struct xEntCollis;
typedef struct xRot;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct RxClusterDefinition;
typedef struct xFFX;
typedef struct xQCData;
typedef struct xBBox;
typedef struct xModelBucket;
typedef struct RwSphere;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xQCControl;
typedef struct RxNodeMethods;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct _class_1;
typedef struct RxCluster;
typedef struct tri_data;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef s32(*type_1)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_9)(RxPipelineNode*, RxPipeline*);
typedef void(*type_10)(xEnt*);
typedef void(*type_11)(xEnt*);
typedef RpClump*(*type_12)(RpClump*, void*);
typedef u32(*type_13)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_14)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef s32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef s32(*type_18)(RxNodeDefinition*);
typedef void(*type_19)(RxNodeDefinition*);
typedef u32(*type_20)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef xBase*(*type_23)(u32);
typedef void(*type_24)(xEnt*, xVec3*);
typedef s8*(*type_26)(xBase*);
typedef s8*(*type_27)(u32);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(xEnt*, xScene*, f32);
typedef void(*type_32)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_33)(xEnt*, xScene*, f32, xEntFrame*);
typedef u32(*type_34)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_35)(xEnt*);
typedef void(*type_36)(xEnt*);
typedef u32(*type_37)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_38)(xEnt*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_41)(xEnt*, xScene*, f32);
typedef void(*type_45)(xEnt*, xVec3*);
typedef void(*type_46)(xEnt*, xScene*, f32, void*);
typedef void(*type_47)(xEnt*, xScene*, f32, xEntFrame*);
typedef s32(*type_49)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_51)(xMemPool*, void*);
typedef void(*type_52)(xEnt*);
typedef void(*type_55)(RwResEntry*);

typedef f32 type_0[4];
typedef f32 type_3[2];
typedef u8 type_5[2];
typedef xAnimMultiFileEntry type_6[1];
typedef s8* type_8[3];
typedef s8* type_21[5];
typedef xVec3 type_25[3];
typedef u16 type_28[3];
typedef f32 type_31[16];
typedef RwTexCoords* type_40[8];
typedef xVec3 type_42[4];
typedef u32 type_43[4];
typedef s8* type_44[6];
typedef xCollis type_48[18];
typedef s8* type_50[23];
typedef s8 type_53[32];
typedef s8 type_54[32];
typedef f32 type_56[2];
typedef u8 type_57[3];
typedef RxCluster type_58[1];

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	type_22 BeforeAnimMatrices;
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
	type_29 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_34 Conditional;
	type_34 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_14 eventFunc;
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
	type_17 BeforeEnter;
	type_7 StateCallback;
	type_22 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_6 Files;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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
	_class_1 anim_coll;
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

struct RyzMemData
{
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
	type_30 update;
	type_30 endUpdate;
	type_15 bupdate;
	type_33 move;
	type_35 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_39 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_10 f_setup;
	type_11 f_reset;
	union
	{
		s32 flg_basenpc;
		s32 inUpdate;
		s32 flg_upward;
	};
	s32 colFreq;
	s32 colFreqReset;
	union
	{
		u32 flg_colCheck;
		u32 flg_penCheck;
		u32 flg_unused;
	};
	s32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_12 callback;
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
	type_40 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_20 Callback;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_43 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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

struct xEnv
{
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_51 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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

struct xShadowSimplePoly
{
	type_25 vert;
	xVec3 norm;
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

struct RpTriangle
{
	type_28 vertIndex;
	s16 matIndex;
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

struct xFactoryInst : RyzMemData
{
	s32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	type_31 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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
	type_5 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_55 destroyNotify;
};

struct _anon0
{
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
	type_23 resolvID;
	type_26 base2Name;
	type_27 id2Name;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_42 corner;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_48 colls;
	type_32 post;
	type_37 depenq;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
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
	type_57 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_53 name;
	type_54 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xFFX
{
	u32 flags;
	type_46 doEffect;
	void* fdata;
	xFFX* next;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_3 radius;
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

struct anim_coll_data
{
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

struct xQCControl
{
	f32 world_xmin;
	f32 world_ymin;
	f32 world_zmin;
	f32 world_xmax;
	f32 world_ymax;
	f32 world_zmax;
	f32 world_xsz;
	f32 world_ysz;
	f32 world_zsz;
	f32 scale_x;
	f32 scale_y;
	f32 scale_z;
	f32 center_x;
	f32 center_y;
	f32 center_z;
};

struct RxNodeMethods
{
	type_16 nodeBody;
	type_18 nodeInit;
	type_19 nodeTerm;
	type_1 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_9 pipelineNodeConfig;
	type_13 configMsgHandler;
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

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_58 clusters;
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

xEntCollis g_colrec;
type_8 g_strz_perfcats;
type_44 g_strz_npcmenu;
type_21 g_strz_dbopts;
type_50 g_strz_npcdcat;
_anon0 __vt__9xNPCBasic;
type_24 NPC_alwaysUseSphere;
xQCControl xqc_def_ctrl;
xVec3 g_Y3;
type_52 NPC_entwrap_render;
type_47 NPC_entwrap_move;
type_45 NPC_entwrap_bupdate;
type_41 NPC_entwrap_update;
type_49 NPC_entwrap_event;
type_38 NPC_entwrap_reset;
type_36 NPC_entwrap_setup;
u32 gActiveHeap;

void NPC_entwrap_render(xEnt* ent);
s32 NPC_entwrap_event(xBase* from, xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget);
void NPC_entwrap_move(xEnt* ent, xScene* xscn, f32 dt, xEntFrame* frm);
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos);
void NPC_entwrap_update(xEnt* ent, xScene* xscn, f32 dt_caller);
void NPC_entwrap_reset(xEnt* ent);
void NPC_entwrap_setup(xEnt* ent);
void NewTime(xNPCBasic* this);
void CollideReview();
void Process(xNPCBasic* this, xScene* xscn, f32 dt);
void NPC_spdBasedColFreq(xNPCBasic* npc, f32 dt);
void NPC_alwaysUseSphere(xEnt* ent);
void Reset(xNPCBasic* this);
void Init(xNPCBasic* this, xEntAsset* asset);

// NPC_entwrap_render__FP4xEnt
// Start address: 0x2f23a0
void NPC_entwrap_render(xEnt* ent)
{
}

// NPC_entwrap_event__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2f23b0
s32 NPC_entwrap_event(xBase* from, xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget)
{
	s32 used;
}

// NPC_entwrap_move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x2f2400
void NPC_entwrap_move(xEnt* ent, xScene* xscn, f32 dt, xEntFrame* frm)
{
}

// NPC_entwrap_bupdate__FP4xEntP5xVec3
// Start address: 0x2f2410
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos)
{
}

// NPC_entwrap_update__FP4xEntP6xScenef
// Start address: 0x2f2420
void NPC_entwrap_update(xEnt* ent, xScene* xscn, f32 dt_caller)
{
	xNPCBasic* npc;
	f32 dt;
}

// NPC_entwrap_reset__FP4xEnt
// Start address: 0x2f2520
void NPC_entwrap_reset(xEnt* ent)
{
}

// NPC_entwrap_setup__FP4xEnt
// Start address: 0x2f2530
void NPC_entwrap_setup(xEnt* ent)
{
}

// NewTime__9xNPCBasicFP6xScenef
// Start address: 0x2f2540
void NewTime(xNPCBasic* this)
{
}

// CollideReview__9xNPCBasicFv
// Start address: 0x2f2560
void CollideReview()
{
}

// Process__9xNPCBasicFP6xScenef
// Start address: 0x2f2570
void Process(xNPCBasic* this, xScene* xscn, f32 dt)
{
	xEnt* ent;
	s32 hasgrav;
	type_15 bak_bupdate;
}

// NPC_spdBasedColFreq__FP9xNPCBasicf
// Start address: 0x2f2850
void NPC_spdBasedColFreq(xNPCBasic* npc, f32 dt)
{
	xVec3 delt;
	f32 d;
	s32 nf;
}

// NPC_alwaysUseSphere__FP4xEntP5xVec3
// Start address: 0x2f2960
void NPC_alwaysUseSphere(xEnt* ent)
{
	xNPCBasic* npc;
	xVec3 bndcent;
}

// Reset__9xNPCBasicFv
// Start address: 0x2f2a30
void Reset(xNPCBasic* this)
{
}

// Init__9xNPCBasicFP9xEntAsset
// Start address: 0x2f2b90
void Init(xNPCBasic* this, xEntAsset* asset)
{
	xEnt* ent;
}

