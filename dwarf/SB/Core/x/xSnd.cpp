typedef struct fade_data;
typedef struct xSurface;
typedef struct xAnimTransition;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimSingle;
typedef struct RxPipelineNode;
typedef struct xAnimActiveEffect;
typedef struct iSndFileInfo;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RpAtomic;
typedef struct _class_0;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimPlay;
typedef struct xEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterialList;
typedef struct rxHeapBlockHeader;
typedef struct xVec3;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xMat4x3;
typedef struct RxPipeline;
typedef struct xSndVoiceInfo;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct RpGeometry;
typedef enum sound_category;
typedef struct _class_1;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xBase;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct _xSndDelayed;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct _class_2;
typedef enum RxNodeDefEditable;
typedef struct xMemPool;
typedef enum RxClusterValid;
typedef struct xLinkAsset;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xShadowSimplePoly;
typedef struct xRot;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct xBox;
typedef struct RwResEntry;
typedef struct xScene;
typedef struct RxClusterDefinition;
typedef struct xShadowSimpleCache;
typedef enum sound_effect;
typedef struct xEntCollis;
typedef struct xAnimTransitionList;
typedef struct RwSphere;
typedef struct RpLight;
typedef enum sound_listener_type;
typedef struct RwTexDictionary;
typedef struct iSndInfo;
typedef struct RxOutputSpec;
typedef struct xBound;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef enum sound_listener_game_mode;
typedef struct RwTexture;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct RxIoSpec;
typedef struct xBBox;
typedef struct RxNodeMethods;
typedef struct xEntShadow;
typedef struct RxPipelineCluster;
typedef struct anim_coll_data;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct xGridBound;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xAnimMultiFileEntry;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_3;
typedef struct tri_data;
typedef struct iSndVol;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xSndGlobals;

typedef uint32(*type_1)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_5)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_7)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_9)(RxNodeDefinition*);
typedef void(*type_12)(RxNodeDefinition*);
typedef void(*type_13)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef int32(*type_16)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef int32(*type_19)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef uint32(*type_22)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_23)(uint32);
typedef void(*type_24)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_26)(xBase*);
typedef int8*(*type_27)(uint32);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(xEnt*, xScene*, float32);
typedef void(*type_32)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_33)(xEnt*, xVec3*);
typedef void(*type_34)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_36)(xEnt*);
typedef void(*type_37)(uint32, uint8);
typedef uint32(*type_38)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_43)(xMemPool*, void*);
typedef void(*type_47)(RwResEntry*);
typedef RwObjectHasFrame*(*type_50)(RwObjectHasFrame*);

typedef float32 type_0[5];
typedef xSndVoiceInfo type_2[48];
typedef float32 type_3[4];
typedef xMat4x3 type_4[2];
typedef float32 type_6[2];
typedef uint8 type_8[2];
typedef xAnimMultiFileEntry type_10[1];
typedef _xSndDelayed type_11[16];
typedef fade_data type_18[128];
typedef uint32 type_21[64];
typedef xVec3 type_25[3];
typedef uint16 type_28[3];
typedef float32 type_31[16];
typedef uint32 type_35[4];
typedef RwTexCoords* type_40[8];
typedef xVec3 type_41[4];
typedef int8 type_42[16];
typedef int8 type_44[16];
typedef int8 type_45[32];
typedef int8 type_46[32];
typedef xCollis type_48[18];
typedef RxCluster type_49[1];
typedef float32 type_51[2];
typedef uint8 type_52[3];

struct fade_data
{
	uint8 in;
	uint32 handle;
	float32 start_delay;
	float32 time;
	float32 end_time;
	float32 volume;
};

struct xSurface
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_1 Conditional;
	type_1 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_51 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct iSndFileInfo
{
	uint32 ID;
	uint32 assetID;
	uint16 sample_rate;
	uint8 is_streamed;
	union
	{
		_class_1 nonstream;
		_class_2 stream;
	};
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xFFX
{
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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
	type_24 BeforeAnimMatrices;
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
	type_33 bupdate;
	type_34 move;
	type_36 render;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_35 pad;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	type_20 BeforeEnter;
	type_13 StateCallback;
	type_24 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_10 Files;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	_class_3 anim_coll;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
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

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	xVec3* parentPos;
	int32 internalID;
	uint32 flags;
	uint16 pad;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float32 innerRadius2;
	float32 outerRadius2;
	uint32 lock_owner;
	iSndInfo ps;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
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

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
};

struct _class_1
{
	uint32 address;
	uint32 size;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_19 eventFunc;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct rxReq
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_22 Callback;
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
	uint32 mode;
};

struct _xSndDelayed
{
	uint32 id;
	float32 vol;
	float32 pitch;
	uint32 priority;
	uint32 flags;
	uint32 parentID;
	xEnt* parentEnt;
	xVec3* pos;
	float32 innerRadius;
	float32 outerRadius;
	sound_category category;
	float32 delay;
	uint32 pad0;
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

struct _class_2
{
	int32 file_index;
	uint32 lsn;
	uint32 data_size;
	uint16 stream_interleave_size;
	uint16 stream_interleave_count;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_43 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_3 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xShadowSimplePoly
{
	type_25 vert;
	xVec3 norm;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct RpTriangle
{
	type_28 vertIndex;
	int16 matIndex;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	type_8 NumAnims;
	void** RawData;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_47 destroyNotify;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	type_41 corner;
};

enum sound_effect
{
	SND_EFFECT_NONE,
	SND_EFFECT_CAVE
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
	type_38 depenq;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

enum sound_listener_type
{
	SND_LISTENER_CAMERA,
	SND_LISTENER_PLAYER,
	SND_MAX_LISTENER_TYPES
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
	int32 lastStreamBuffer;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_52 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_45 name;
	type_46 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RxNodeMethods
{
	type_7 nodeBody;
	type_9 nodeInit;
	type_12 nodeTerm;
	type_14 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_16 pipelineNodeConfig;
	type_5 configMsgHandler;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_6 radius;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct anim_coll_data
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_49 clusters;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_50 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_3
{
	xVec3* verts;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
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

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	type_0 categoryVolFader;
	type_2 voice;
	type_4 listenerMat;
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_42 buffer;
type_44 buffer;
type_11 sDelayedSnd;
uint32 sDelayedPaused;
uint32 snd_annoy_cnt;
type_21 snd_annoy_previous;
xSndGlobals gSnd;
type_18 faders;
int32 faders_active;
float32 sTimeElapsed;

void xSndStreamUnlock(uint32 owner);
uint8 xSndStreamReady(uint32 owner);
uint8 xSndStreamLock(uint32 owner, sound_category kill_cat, uint8 kill_nonlooping);
void xSndStopFade(uint32 snd, float32 fade_time);
uint32 xSndPlay3DFade(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay, float32 fade_time);
void update_faders(float32 dt);
void xSndSetExternalCallback(type_37 callback);
void xSndLoadExternalData(uint32 snd, void* data, int32 forceBuffer);
void xSndSetPitch(uint32 snd, float32 pitch);
void xSndSetVol(uint32 snd, float32 vol);
void xSndStopChildren(uint32 pid);
void xSndParentDied(uint32 pid);
void xSndStop(uint32 snd);
uint32 xSndIDIsPlaying(uint32 sndID);
void xSndStartStereo(uint32 id1, uint32 id2, float32 pitch);
uint32 xSndIsReady(uint32 id);
uint32 xSndPlayInternal(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, xEnt* parentEnt, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay);
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay);
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xEnt* parent, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay);
uint32 xSndPlay(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, sound_category category, float32 delay);
void xSndExit();
void xSndSelectListenerMode(sound_listener_game_mode listenerMode);
void xSndSetListenerData(sound_listener_type listenerType, xMat4x3* pMat);
void xSndUpdate();
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice);
void xSndProcessSoundPos(xVec3* pActual, xVec3* pProcessed);
void xSndCalculateListenerPosition();
void xSndAddDelayed(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, xEnt* parentEnt, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay);
void xSndStopAll(uint32 mask);
void xSndSetCategoryVol(sound_category category, float32 vol);
void xSndPauseCategory(uint32 mask, uint32 pause);
void xSndPauseAll(uint32 pause_effects, uint32 pause_streams);
void xSndResume();
void xSndSuspend();
void xSndSetEnvironmentalEffect(sound_effect effectType);
void xSndSceneInit();
void xSndInit();

// xSndStreamUnlock__FUi
// Start address: 0x208fd0
void xSndStreamUnlock(uint32 owner)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
}

// xSndStreamReady__FUi
// Start address: 0x209020
uint8 xSndStreamReady(uint32 owner)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
}

// xSndStreamLock__FUi14sound_categoryb
// Start address: 0x209080
uint8 xSndStreamLock(uint32 owner, sound_category kill_cat, uint8 kill_nonlooping)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
}

// xSndStopFade__FUif
// Start address: 0x209220
void xSndStopFade(uint32 snd, float32 fade_time)
{
	fade_data* it;
	fade_data* end;
	fade_data* it;
	fade_data* end;
}

// xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
// Start address: 0x2093b0
uint32 xSndPlay3DFade(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay, float32 fade_time)
{
	fade_data& f;
}

// update_faders__Ff
// Start address: 0x2094e0
void update_faders(float32 dt)
{
	fade_data* it;
	fade_data* end;
	float32 volume;
}

// xSndSetExternalCallback__FPFUib_v
// Start address: 0x209630
void xSndSetExternalCallback(type_37 callback)
{
}

// xSndLoadExternalData__FUiPCvi
// Start address: 0x209640
void xSndLoadExternalData(uint32 snd, void* data, int32 forceBuffer)
{
}

// xSndSetPitch__FUif
// Start address: 0x209650
void xSndSetPitch(uint32 snd, float32 pitch)
{
}

// xSndSetVol__FUif
// Start address: 0x209660
void xSndSetVol(uint32 snd, float32 vol)
{
}

// xSndStopChildren__FUi
// Start address: 0x209670
void xSndStopChildren(uint32 pid)
{
	uint32 i;
	xSndVoiceInfo* vp;
}

// xSndParentDied__FUi
// Start address: 0x209700
void xSndParentDied(uint32 pid)
{
	uint32 i;
	xSndVoiceInfo* vp;
}

// xSndStop__FUi
// Start address: 0x209740
void xSndStop(uint32 snd)
{
}

// xSndIDIsPlaying__FUi
// Start address: 0x209750
uint32 xSndIDIsPlaying(uint32 sndID)
{
	xSndVoiceInfo* vp;
	uint32 i;
}

// xSndStartStereo__FUiUif
// Start address: 0x2097b0
void xSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
}

// xSndIsReady__FUi
// Start address: 0x2097c0
uint32 xSndIsReady(uint32 id)
{
}

// xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
// Start address: 0x2097e0
uint32 xSndPlayInternal(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, xEnt* parentEnt, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
	float32 temp;
	uint32 i;
	uint32 i;
	uint32 i;
	uint32 voice;
	uint32 sample_rate;
	int32 internalID;
	iSndFileInfo* ip;
	iSndFileInfo* ip;
	xSndVoiceInfo* vp;
}

// xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
// Start address: 0x209d40
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
	uint32 sndID;
}

// xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
// Start address: 0x209d90
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xEnt* parent, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
	uint32 sndID;
}

// xSndPlay__FUiffUiUiUi14sound_categoryf
// Start address: 0x209db0
uint32 xSndPlay(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, sound_category category, float32 delay)
{
	uint32 sndID;
}

// xSndExit__Fv
// Start address: 0x209dd0
void xSndExit()
{
}

// xSndSelectListenerMode__F24sound_listener_game_mode
// Start address: 0x209df0
void xSndSelectListenerMode(sound_listener_game_mode listenerMode)
{
}

// xSndSetListenerData__F19sound_listener_typePC7xMat4x3
// Start address: 0x209e00
void xSndSetListenerData(sound_listener_type listenerType, xMat4x3* pMat)
{
}

// xSndUpdate__Fv
// Start address: 0x209ef0
void xSndUpdate()
{
}

// xSndInternalUpdateVoicePos__FP13xSndVoiceInfo
// Start address: 0x209fb0
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice)
{
	xEnt* ent;
}

// xSndProcessSoundPos__FPC5xVec3P5xVec3
// Start address: 0x20a0d0
void xSndProcessSoundPos(xVec3* pActual, xVec3* pProcessed)
{
	xVec3 playerDelta;
	float32 inwardShift;
	float32 factor;
}

// xSndCalculateListenerPosition__Fv
// Start address: 0x20a340
void xSndCalculateListenerPosition()
{
	xMat4x3* pMat;
	xMat4x3* pMat;
}

// xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf
// Start address: 0x20a4e0
void xSndAddDelayed(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, xEnt* parentEnt, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
	_xSndDelayed* snd;
	int32 i;
}

// xSndStopAll__FUi
// Start address: 0x20a560
void xSndStopAll(uint32 mask)
{
	uint32 i;
}

// xSndSetCategoryVol__F14sound_categoryf
// Start address: 0x20a620
void xSndSetCategoryVol(sound_category category, float32 vol)
{
}

// xSndPauseCategory__FUiUi
// Start address: 0x20a640
void xSndPauseCategory(uint32 mask, uint32 pause)
{
	uint32 i;
}

// xSndPauseAll__FUiUi
// Start address: 0x20a6e0
void xSndPauseAll(uint32 pause_effects, uint32 pause_streams)
{
	uint32 i;
}

// xSndResume__Fv
// Start address: 0x20a790
void xSndResume()
{
}

// xSndSuspend__Fv
// Start address: 0x20a820
void xSndSuspend()
{
}

// xSndSetEnvironmentalEffect__F12sound_effect
// Start address: 0x20a8c0
void xSndSetEnvironmentalEffect(sound_effect effectType)
{
}

// xSndSceneInit__Fv
// Start address: 0x20a910
void xSndSceneInit()
{
	uint32 i;
}

// xSndInit__Fv
// Start address: 0x20a9f0
void xSndInit()
{
	uint32 i;
	xSndVoiceInfo* voice;
}

