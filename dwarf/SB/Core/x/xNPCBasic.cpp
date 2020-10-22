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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct xNPCBasic : xEnt, xFactoryInst
{
	void(*f_setup)(xEnt*);
	void(*f_reset)(xEnt*);
	struct
	{
		int32 flg_basenpc : 16;
		int32 inUpdate : 8;
		int32 flg_upward : 8;
	};
	int32 colFreq;
	int32 colFreqReset;
	struct
	{
		uint32 flg_colCheck : 8;
		uint32 flg_penCheck : 8;
		uint32 flg_unused : 16;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;

	void BUpdate(xVec3* pos);
	void NewTime();
	void Process(xScene* xscn, float32 dt);
	void Reset();
	void Init(xEntAsset* asset);
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
	RpClump*(*callback)(RpClump*, void*);
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
	RwTexCoords* texCoords[8];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint32 pad[4];
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
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	xVec3 vert[3];
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
	uint16 vertIndex[3];
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
	float32 matrix[16];
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
	uint8 NumAnims[2];
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	uint8 pad[3];
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
	int8 name[32];
	int8 mask[32];
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
	void(*doEffect)(xEnt*, xScene*, float32, void*);
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
	float32 radius[2];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	RxCluster clusters[1];
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
int8* g_strz_perfcats[3];
int8* g_strz_npcmenu[6];
int8* g_strz_dbopts[5];
int8* g_strz_npcdcat[23];
_anon0 __vt__9xNPCBasic;
void(*NPC_alwaysUseSphere)(xEnt*, xVec3*);
xQCControl xqc_def_ctrl;
xVec3 g_Y3;
void(*NPC_entwrap_render)(xEnt*);
void(*NPC_entwrap_move)(xEnt*, xScene*, float32, xEntFrame*);
void(*NPC_entwrap_bupdate)(xEnt*, xVec3*);
void(*NPC_entwrap_update)(xEnt*, xScene*, float32);
int32(*NPC_entwrap_event)(xBase*, xBase*, uint32, float32*, xBase*);
void(*NPC_entwrap_reset)(xEnt*);
void(*NPC_entwrap_setup)(xEnt*);
uint32 gActiveHeap;

void NPC_entwrap_render(xEnt* ent);
int32 NPC_entwrap_event(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void NPC_entwrap_move(xEnt* ent, xScene* xscn, float32 dt, xEntFrame* frm);
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos);
void NPC_entwrap_update(xEnt* ent, xScene* xscn, float32 dt_caller);
void NPC_entwrap_reset(xEnt* ent);
void NPC_entwrap_setup(xEnt* ent);
void NewTime();
void CollideReview();
void Process(xScene* xscn, float32 dt);
void NPC_spdBasedColFreq(xNPCBasic* npc, float32 dt);
void NPC_alwaysUseSphere(xEnt* ent);
void Reset();
void Init(xEntAsset* asset);

// NPC_entwrap_render__FP4xEnt
// Start address: 0x2f23a0
void NPC_entwrap_render(xEnt* ent)
{
	// Line 643, Address: 0x2f23a0, Func Offset: 0
	// Func End, Address: 0x2f23b0, Func Offset: 0x10
}

// NPC_entwrap_event__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2f23b0
int32 NPC_entwrap_event(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	int32 used;
	// Line 634, Address: 0x2f23b0, Func Offset: 0
	// Line 636, Address: 0x2f23c0, Func Offset: 0x10
	// Line 637, Address: 0x2f23c8, Func Offset: 0x18
	// Line 638, Address: 0x2f23ec, Func Offset: 0x3c
	// Func End, Address: 0x2f23f8, Func Offset: 0x48
}

// NPC_entwrap_move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x2f2400
void NPC_entwrap_move(xEnt* ent, xScene* xscn, float32 dt, xEntFrame* frm)
{
	// Line 629, Address: 0x2f2400, Func Offset: 0
	// Func End, Address: 0x2f2410, Func Offset: 0x10
}

// NPC_entwrap_bupdate__FP4xEntP5xVec3
// Start address: 0x2f2410
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos)
{
	// Line 622, Address: 0x2f2410, Func Offset: 0
	// Func End, Address: 0x2f2420, Func Offset: 0x10
}

// NPC_entwrap_update__FP4xEntP6xScenef
// Start address: 0x2f2420
void NPC_entwrap_update(xEnt* ent, xScene* xscn, float32 dt_caller)
{
	xNPCBasic* npc;
	float32 dt;
	// Line 571, Address: 0x2f2420, Func Offset: 0
	// Line 563, Address: 0x2f2424, Func Offset: 0x4
	// Line 571, Address: 0x2f2428, Func Offset: 0x8
	// Line 563, Address: 0x2f242c, Func Offset: 0xc
	// Line 571, Address: 0x2f2430, Func Offset: 0x10
	// Line 563, Address: 0x2f2434, Func Offset: 0x14
	// Line 571, Address: 0x2f2440, Func Offset: 0x20
	// Line 563, Address: 0x2f2448, Func Offset: 0x28
	// Line 571, Address: 0x2f244c, Func Offset: 0x2c
	// Line 572, Address: 0x2f2454, Func Offset: 0x34
	// Line 579, Address: 0x2f2460, Func Offset: 0x40
	// Line 580, Address: 0x2f2470, Func Offset: 0x50
	// Line 591, Address: 0x2f2478, Func Offset: 0x58
	// Line 592, Address: 0x2f2498, Func Offset: 0x78
	// Line 593, Address: 0x2f24a8, Func Offset: 0x88
	// Line 601, Address: 0x2f24b8, Func Offset: 0x98
	// Line 611, Address: 0x2f24d0, Func Offset: 0xb0
	// Line 614, Address: 0x2f24e4, Func Offset: 0xc4
	// Line 617, Address: 0x2f24fc, Func Offset: 0xdc
	// Func End, Address: 0x2f2514, Func Offset: 0xf4
}

// NPC_entwrap_reset__FP4xEnt
// Start address: 0x2f2520
void NPC_entwrap_reset(xEnt* ent)
{
	// Line 541, Address: 0x2f2520, Func Offset: 0
	// Func End, Address: 0x2f2530, Func Offset: 0x10
}

// NPC_entwrap_setup__FP4xEnt
// Start address: 0x2f2530
void NPC_entwrap_setup(xEnt* ent)
{
	// Line 532, Address: 0x2f2530, Func Offset: 0
	// Func End, Address: 0x2f2540, Func Offset: 0x10
}

// NewTime__9xNPCBasicFP6xScenef
// Start address: 0x2f2540
void xNPCBasic::NewTime()
{
	// Line 502, Address: 0x2f2540, Func Offset: 0
	// Line 505, Address: 0x2f254c, Func Offset: 0xc
	// Func End, Address: 0x2f2554, Func Offset: 0x14
}

// CollideReview__9xNPCBasicFv
// Start address: 0x2f2560
void xNPCBasic::CollideReview()
{
	// Line 498, Address: 0x2f2560, Func Offset: 0
	// Func End, Address: 0x2f2568, Func Offset: 0x8
}

// Process__9xNPCBasicFP6xScenef
// Start address: 0x2f2570
void xNPCBasic::Process(xScene* xscn, float32 dt)
{
	xEnt* ent;
	int32 hasgrav;
	void(*bak_bupdate)(xEnt*, xVec3*);
	// Line 383, Address: 0x2f2570, Func Offset: 0
	// Line 385, Address: 0x2f2590, Func Offset: 0x20
	// Line 392, Address: 0x2f2594, Func Offset: 0x24
	// Line 393, Address: 0x2f25c0, Func Offset: 0x50
	// Line 397, Address: 0x2f25c8, Func Offset: 0x58
	// Line 398, Address: 0x2f25e0, Func Offset: 0x70
	// Line 399, Address: 0x2f25ec, Func Offset: 0x7c
	// Line 404, Address: 0x2f25f8, Func Offset: 0x88
	// Line 407, Address: 0x2f2618, Func Offset: 0xa8
	// Line 410, Address: 0x2f2638, Func Offset: 0xc8
	// Line 412, Address: 0x2f2654, Func Offset: 0xe4
	// Line 413, Address: 0x2f2670, Func Offset: 0x100
	// Line 414, Address: 0x2f2690, Func Offset: 0x120
	// Line 413, Address: 0x2f2694, Func Offset: 0x124
	// Line 414, Address: 0x2f2698, Func Offset: 0x128
	// Line 415, Address: 0x2f26b0, Func Offset: 0x140
	// Line 414, Address: 0x2f26b4, Func Offset: 0x144
	// Line 415, Address: 0x2f26b8, Func Offset: 0x148
	// Line 416, Address: 0x2f26d0, Func Offset: 0x160
	// Line 415, Address: 0x2f26d4, Func Offset: 0x164
	// Line 416, Address: 0x2f26d8, Func Offset: 0x168
	// Line 417, Address: 0x2f2700, Func Offset: 0x190
	// Line 419, Address: 0x2f271c, Func Offset: 0x1ac
	// Line 422, Address: 0x2f2720, Func Offset: 0x1b0
	// Line 423, Address: 0x2f272c, Func Offset: 0x1bc
	// Line 429, Address: 0x2f2734, Func Offset: 0x1c4
	// Line 430, Address: 0x2f2740, Func Offset: 0x1d0
	// Line 431, Address: 0x2f2750, Func Offset: 0x1e0
	// Line 435, Address: 0x2f275c, Func Offset: 0x1ec
	// Line 437, Address: 0x2f2760, Func Offset: 0x1f0
	// Line 445, Address: 0x2f2768, Func Offset: 0x1f8
	// Line 447, Address: 0x2f276c, Func Offset: 0x1fc
	// Line 445, Address: 0x2f2770, Func Offset: 0x200
	// Line 447, Address: 0x2f2774, Func Offset: 0x204
	// Line 437, Address: 0x2f277c, Func Offset: 0x20c
	// Line 438, Address: 0x2f2780, Func Offset: 0x210
	// Line 444, Address: 0x2f278c, Func Offset: 0x21c
	// Line 447, Address: 0x2f2790, Func Offset: 0x220
	// Line 449, Address: 0x2f2798, Func Offset: 0x228
	// Line 455, Address: 0x2f279c, Func Offset: 0x22c
	// Line 458, Address: 0x2f27ac, Func Offset: 0x23c
	// Line 459, Address: 0x2f27bc, Func Offset: 0x24c
	// Line 467, Address: 0x2f27c0, Func Offset: 0x250
	// Line 468, Address: 0x2f27d0, Func Offset: 0x260
	// Line 469, Address: 0x2f2808, Func Offset: 0x298
	// Line 474, Address: 0x2f2810, Func Offset: 0x2a0
	// Line 486, Address: 0x2f2824, Func Offset: 0x2b4
	// Line 488, Address: 0x2f2828, Func Offset: 0x2b8
	// Func End, Address: 0x2f2844, Func Offset: 0x2d4
}

// NPC_spdBasedColFreq__FP9xNPCBasicf
// Start address: 0x2f2850
void NPC_spdBasedColFreq(xNPCBasic* npc, float32 dt)
{
	xVec3 delt;
	float32 d;
	int32 nf;
	// Line 336, Address: 0x2f2850, Func Offset: 0
	// Line 338, Address: 0x2f2854, Func Offset: 0x4
	// Line 343, Address: 0x2f2878, Func Offset: 0x28
	// Line 356, Address: 0x2f2894, Func Offset: 0x44
	// Line 357, Address: 0x2f2898, Func Offset: 0x48
	// Line 356, Address: 0x2f28a4, Func Offset: 0x54
	// Line 357, Address: 0x2f28cc, Func Offset: 0x7c
	// Line 359, Address: 0x2f28d8, Func Offset: 0x88
	// Line 361, Address: 0x2f2908, Func Offset: 0xb8
	// Line 368, Address: 0x2f2920, Func Offset: 0xd0
	// Line 376, Address: 0x2f2944, Func Offset: 0xf4
	// Line 379, Address: 0x2f2950, Func Offset: 0x100
	// Func End, Address: 0x2f2958, Func Offset: 0x108
}

// NPC_alwaysUseSphere__FP4xEntP5xVec3
// Start address: 0x2f2960
void NPC_alwaysUseSphere(xEnt* ent)
{
	xNPCBasic* npc;
	xVec3 bndcent;
	// Line 288, Address: 0x2f2960, Func Offset: 0
	// Line 290, Address: 0x2f2964, Func Offset: 0x4
	// Line 288, Address: 0x2f2968, Func Offset: 0x8
	// Line 290, Address: 0x2f296c, Func Offset: 0xc
	// Line 288, Address: 0x2f2970, Func Offset: 0x10
	// Line 290, Address: 0x2f2974, Func Offset: 0x14
	// Line 294, Address: 0x2f2994, Func Offset: 0x34
	// Line 295, Address: 0x2f2998, Func Offset: 0x38
	// Line 294, Address: 0x2f299c, Func Offset: 0x3c
	// Line 298, Address: 0x2f29a0, Func Offset: 0x40
	// Line 295, Address: 0x2f29a4, Func Offset: 0x44
	// Line 294, Address: 0x2f29a8, Func Offset: 0x48
	// Line 295, Address: 0x2f29c4, Func Offset: 0x64
	// Line 298, Address: 0x2f29d0, Func Offset: 0x70
	// Line 299, Address: 0x2f29d4, Func Offset: 0x74
	// Line 300, Address: 0x2f29ec, Func Offset: 0x8c
	// Line 304, Address: 0x2f29f0, Func Offset: 0x90
	// Line 306, Address: 0x2f29fc, Func Offset: 0x9c
	// Line 311, Address: 0x2f2a0c, Func Offset: 0xac
	// Line 317, Address: 0x2f2a10, Func Offset: 0xb0
	// Line 327, Address: 0x2f2a18, Func Offset: 0xb8
	// Func End, Address: 0x2f2a28, Func Offset: 0xc8
}

// Reset__9xNPCBasicFv
// Start address: 0x2f2a30
void xNPCBasic::Reset()
{
	// Line 233, Address: 0x2f2a30, Func Offset: 0
	// Line 237, Address: 0x2f2a3c, Func Offset: 0xc
	// Line 251, Address: 0x2f2a44, Func Offset: 0x14
	// Line 252, Address: 0x2f2a54, Func Offset: 0x24
	// Line 254, Address: 0x2f2a78, Func Offset: 0x48
	// Line 253, Address: 0x2f2a7c, Func Offset: 0x4c
	// Line 254, Address: 0x2f2a84, Func Offset: 0x54
	// Line 255, Address: 0x2f2aa8, Func Offset: 0x78
	// Line 268, Address: 0x2f2ab8, Func Offset: 0x88
	// Line 271, Address: 0x2f2abc, Func Offset: 0x8c
	// Line 268, Address: 0x2f2ac0, Func Offset: 0x90
	// Line 272, Address: 0x2f2ac8, Func Offset: 0x98
	// Line 275, Address: 0x2f2b10, Func Offset: 0xe0
	// Line 278, Address: 0x2f2b7c, Func Offset: 0x14c
	// Func End, Address: 0x2f2b8c, Func Offset: 0x15c
}

// Init__9xNPCBasicFP9xEntAsset
// Start address: 0x2f2b90
void xNPCBasic::Init(xEntAsset* asset)
{
	xEnt* ent;
	// Line 121, Address: 0x2f2b90, Func Offset: 0
	// Line 124, Address: 0x2f2b98, Func Offset: 0x8
	// Line 121, Address: 0x2f2b9c, Func Offset: 0xc
	// Line 124, Address: 0x2f2ba8, Func Offset: 0x18
	// Line 125, Address: 0x2f2bc0, Func Offset: 0x30
	// Line 126, Address: 0x2f2be0, Func Offset: 0x50
	// Line 129, Address: 0x2f2c00, Func Offset: 0x70
	// Line 154, Address: 0x2f2c0c, Func Offset: 0x7c
	// Line 155, Address: 0x2f2c10, Func Offset: 0x80
	// Line 154, Address: 0x2f2c14, Func Offset: 0x84
	// Line 156, Address: 0x2f2c18, Func Offset: 0x88
	// Line 155, Address: 0x2f2c1c, Func Offset: 0x8c
	// Line 156, Address: 0x2f2c20, Func Offset: 0x90
	// Line 157, Address: 0x2f2c24, Func Offset: 0x94
	// Line 161, Address: 0x2f2c30, Func Offset: 0xa0
	// Line 166, Address: 0x2f2c3c, Func Offset: 0xac
	// Line 169, Address: 0x2f2c44, Func Offset: 0xb4
	// Line 170, Address: 0x2f2c50, Func Offset: 0xc0
	// Line 171, Address: 0x2f2c54, Func Offset: 0xc4
	// Line 170, Address: 0x2f2c58, Func Offset: 0xc8
	// Line 171, Address: 0x2f2c5c, Func Offset: 0xcc
	// Line 176, Address: 0x2f2c6c, Func Offset: 0xdc
	// Line 177, Address: 0x2f2c7c, Func Offset: 0xec
	// Line 178, Address: 0x2f2c9c, Func Offset: 0x10c
	// Line 179, Address: 0x2f2cb8, Func Offset: 0x128
	// Line 186, Address: 0x2f2cd8, Func Offset: 0x148
	// Line 187, Address: 0x2f2ce8, Func Offset: 0x158
	// Line 189, Address: 0x2f2cfc, Func Offset: 0x16c
	// Line 190, Address: 0x2f2d0c, Func Offset: 0x17c
	// Line 201, Address: 0x2f2d10, Func Offset: 0x180
	// Line 202, Address: 0x2f2d20, Func Offset: 0x190
	// Line 204, Address: 0x2f2d34, Func Offset: 0x1a4
	// Line 205, Address: 0x2f2d44, Func Offset: 0x1b4
	// Line 212, Address: 0x2f2d48, Func Offset: 0x1b8
	// Line 215, Address: 0x2f2db4, Func Offset: 0x224
	// Line 216, Address: 0x2f2dc0, Func Offset: 0x230
	// Line 218, Address: 0x2f2dcc, Func Offset: 0x23c
	// Line 220, Address: 0x2f2dd8, Func Offset: 0x248
	// Line 221, Address: 0x2f2de4, Func Offset: 0x254
	// Line 222, Address: 0x2f2df0, Func Offset: 0x260
	// Line 223, Address: 0x2f2dfc, Func Offset: 0x26c
	// Line 226, Address: 0x2f2e08, Func Offset: 0x278
	// Line 229, Address: 0x2f2e14, Func Offset: 0x284
	// Func End, Address: 0x2f2e28, Func Offset: 0x298
}

