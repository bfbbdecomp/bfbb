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

typedef int32(*type_1)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_9)(RxPipelineNode*, RxPipeline*);
typedef void(*type_10)(xEnt*);
typedef void(*type_11)(xEnt*);
typedef RpClump*(*type_12)(RpClump*, void*);
typedef uint32(*type_13)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_14)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef int32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef int32(*type_18)(RxNodeDefinition*);
typedef void(*type_19)(RxNodeDefinition*);
typedef uint32(*type_20)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_23)(uint32);
typedef void(*type_24)(xEnt*, xVec3*);
typedef int8*(*type_26)(xBase*);
typedef int8*(*type_27)(uint32);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(xEnt*, xScene*, float32);
typedef void(*type_32)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_33)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_34)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_35)(xEnt*);
typedef void(*type_36)(xEnt*);
typedef uint32(*type_37)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_38)(xEnt*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_41)(xEnt*, xScene*, float32);
typedef void(*type_45)(xEnt*, xVec3*);
typedef void(*type_46)(xEnt*, xScene*, float32, void*);
typedef void(*type_47)(xEnt*, xScene*, float32, xEntFrame*);
typedef int32(*type_49)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_51)(xMemPool*, void*);
typedef void(*type_52)(xEnt*);
typedef void(*type_55)(RwResEntry*);

typedef float32 type_0[4];
typedef float32 type_3[2];
typedef uint8 type_5[2];
typedef xAnimMultiFileEntry type_6[1];
typedef int8* type_8[3];
typedef int8* type_21[5];
typedef xVec3 type_25[3];
typedef uint16 type_28[3];
typedef float32 type_31[16];
typedef RwTexCoords* type_40[8];
typedef xVec3 type_42[4];
typedef uint32 type_43[4];
typedef int8* type_44[6];
typedef xCollis type_48[18];
typedef int8* type_50[23];
typedef int8 type_53[32];
typedef int8 type_54[32];
typedef float32 type_56[2];
typedef uint8 type_57[3];
typedef RxCluster type_58[1];

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_14 eventFunc;
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
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_56 BilinearLerp;
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

struct RyzMemData
{
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
	int32 driveMode;
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
		int32 flg_basenpc;
		int32 inUpdate;
		int32 flg_upward;
	};
	int32 colFreq;
	int32 colFreqReset;
	union
	{
		uint32 flg_colCheck;
		uint32 flg_penCheck;
		uint32 flg_unused;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
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
	type_40 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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
	float32 s;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_20 Callback;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_43 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xEnv
{
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_0 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_51 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct xShadowSimplePoly
{
	type_25 vert;
	xVec3 norm;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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
	type_28 vertIndex;
	int16 matIndex;
};

struct rxReq
{
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

struct xFactoryInst : RyzMemData
{
	int32 itemType;
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
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_31 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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
	type_5 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_55 destroyNotify;
};

struct _anon0
{
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
	type_48 colls;
	type_32 post;
	type_37 depenq;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
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
	float32 r;
	float32 h;
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
	uint32 filterAddressing;
	int32 refCount;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xFFX
{
	uint32 flags;
	type_46 doEffect;
	void* fdata;
	xFFX* next;
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
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
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
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct anim_coll_data
{
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
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
	uint32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_58 clusters;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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
uint32 gActiveHeap;

void NPC_entwrap_render(xEnt* ent);
int32 NPC_entwrap_event(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void NPC_entwrap_move(xEnt* ent, xScene* xscn, float32 dt, xEntFrame* frm);
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos);
void NPC_entwrap_update(xEnt* ent, xScene* xscn, float32 dt_caller);
void NPC_entwrap_reset(xEnt* ent);
void NPC_entwrap_setup(xEnt* ent);
void NewTime(xNPCBasic* this);
void CollideReview();
void Process(xNPCBasic* this, xScene* xscn, float32 dt);
void NPC_spdBasedColFreq(xNPCBasic* npc, float32 dt);
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
int32 NPC_entwrap_event(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	int32 used;
}

// NPC_entwrap_move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x2f2400
void NPC_entwrap_move(xEnt* ent, xScene* xscn, float32 dt, xEntFrame* frm)
{
}

// NPC_entwrap_bupdate__FP4xEntP5xVec3
// Start address: 0x2f2410
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos)
{
}

// NPC_entwrap_update__FP4xEntP6xScenef
// Start address: 0x2f2420
void NPC_entwrap_update(xEnt* ent, xScene* xscn, float32 dt_caller)
{
	xNPCBasic* npc;
	float32 dt;
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
void Process(xNPCBasic* this, xScene* xscn, float32 dt)
{
	xEnt* ent;
	int32 hasgrav;
	type_15 bak_bupdate;
}

// NPC_spdBasedColFreq__FP9xNPCBasicf
// Start address: 0x2f2850
void NPC_spdBasedColFreq(xNPCBasic* npc, float32 dt)
{
	xVec3 delt;
	float32 d;
	int32 nf;
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

