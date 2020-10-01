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

typedef u32(*type_1)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_5)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_7)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_9)(RxNodeDefinition*);
typedef void(*type_12)(RxNodeDefinition*);
typedef void(*type_13)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef s32(*type_16)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef s32(*type_19)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef u32(*type_22)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_23)(u32);
typedef void(*type_24)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s8*(*type_26)(xBase*);
typedef s8*(*type_27)(u32);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(xEnt*, xScene*, f32);
typedef void(*type_32)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_33)(xEnt*, xVec3*);
typedef void(*type_34)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_36)(xEnt*);
typedef void(*type_37)(u32, u8);
typedef u32(*type_38)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_43)(xMemPool*, void*);
typedef void(*type_47)(RwResEntry*);
typedef RwObjectHasFrame*(*type_50)(RwObjectHasFrame*);

typedef f32 type_0[5];
typedef xSndVoiceInfo type_2[48];
typedef f32 type_3[4];
typedef xMat4x3 type_4[2];
typedef f32 type_6[2];
typedef u8 type_8[2];
typedef xAnimMultiFileEntry type_10[1];
typedef _xSndDelayed type_11[16];
typedef fade_data type_18[128];
typedef u32 type_21[64];
typedef xVec3 type_25[3];
typedef u16 type_28[3];
typedef f32 type_31[16];
typedef u32 type_35[4];
typedef RwTexCoords* type_40[8];
typedef xVec3 type_41[4];
typedef s8 type_42[16];
typedef s8 type_44[16];
typedef s8 type_45[32];
typedef s8 type_46[32];
typedef xCollis type_48[18];
typedef RxCluster type_49[1];
typedef f32 type_51[2];
typedef u8 type_52[3];

struct fade_data
{
	u8 in;
	u32 handle;
	f32 start_delay;
	f32 time;
	f32 end_time;
	f32 volume;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_51 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct iSndFileInfo
{
	u32 ID;
	u32 assetID;
	u16 sample_rate;
	u8 is_streamed;
	union
	{
		_class_1 nonstream;
		_class_2 stream;
	};
};

struct xQuat
{
	xVec3 v;
	f32 s;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
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
	type_24 BeforeAnimMatrices;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_35 pad;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	s16 refCount;
	s16 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	_class_3 anim_coll;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
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

struct xSndVoiceInfo
{
	u32 assetID;
	u32 sndID;
	u32 parentID;
	xVec3* parentPos;
	s32 internalID;
	u32 flags;
	u16 pad;
	u16 priority;
	f32 vol;
	f32 pitch;
	u32 sample_rate;
	u32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	f32 innerRadius2;
	f32 outerRadius2;
	u32 lock_owner;
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
	u32 address;
	u32 size;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_19 eventFunc;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
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
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_22 Callback;
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

struct _xSndDelayed
{
	u32 id;
	f32 vol;
	f32 pitch;
	u32 priority;
	u32 flags;
	u32 parentID;
	xEnt* parentEnt;
	xVec3* pos;
	f32 innerRadius;
	f32 outerRadius;
	sound_category category;
	f32 delay;
	u32 pad0;
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

struct _class_2
{
	s32 file_index;
	u32 lsn;
	u32 data_size;
	u16 stream_interleave_size;
	u16 stream_interleave_count;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_43 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_3 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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

struct rxHeapFreeBlock
{
	u32 size;
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
	f32 angle;
};

struct RpTriangle
{
	type_28 vertIndex;
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
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_47 destroyNotify;
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
	type_41 corner;
};

enum sound_effect
{
	SND_EFFECT_NONE,
	SND_EFFECT_CAVE
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
	f32 radius;
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
	u32 flags;
	iSndVol vol;
	u32 pitch;
	s32 lastStreamBuffer;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u32 filterAddressing;
	s32 refCount;
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

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	f32 dst_cast;
	type_6 radius;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct anim_coll_data
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
	type_49 clusters;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
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
	u32 index;
	f32 r;
	f32 d;
};

struct iSndVol
{
	s16 volL;
	s16 volR;
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

struct xSndGlobals
{
	u32 stereo;
	u32 SndCount;
	type_0 categoryVolFader;
	type_2 voice;
	type_4 listenerMat;
	sound_listener_game_mode listenerMode;
	u32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_42 buffer;
type_44 buffer;
type_11 sDelayedSnd;
u32 sDelayedPaused;
u32 snd_annoy_cnt;
type_21 snd_annoy_previous;
xSndGlobals gSnd;
type_18 faders;
s32 faders_active;
f32 sTimeElapsed;

void xSndStreamUnlock(u32 owner);
u8 xSndStreamReady(u32 owner);
u8 xSndStreamLock(u32 owner, sound_category kill_cat, u8 kill_nonlooping);
void xSndStopFade(u32 snd, f32 fade_time);
u32 xSndPlay3DFade(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay, f32 fade_time);
void update_faders(f32 dt);
void xSndSetExternalCallback(type_37 callback);
void xSndLoadExternalData(u32 snd, void* data, s32 forceBuffer);
void xSndSetPitch(u32 snd, f32 pitch);
void xSndSetVol(u32 snd, f32 vol);
void xSndStopChildren(u32 pid);
void xSndParentDied(u32 pid);
void xSndStop(u32 snd);
u32 xSndIDIsPlaying(u32 sndID);
void xSndStartStereo(u32 id1, u32 id2, f32 pitch);
u32 xSndIsReady(u32 id);
u32 xSndPlayInternal(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, u32 parentID, xEnt* parentEnt, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay);
u32 xSndPlay3D(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay);
u32 xSndPlay3D(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, xEnt* parent, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay);
u32 xSndPlay(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, u32 parentID, sound_category category, f32 delay);
void xSndExit();
void xSndSelectListenerMode(sound_listener_game_mode listenerMode);
void xSndSetListenerData(sound_listener_type listenerType, xMat4x3* pMat);
void xSndUpdate();
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice);
void xSndProcessSoundPos(xVec3* pActual, xVec3* pProcessed);
void xSndCalculateListenerPosition();
void xSndAddDelayed(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, u32 parentID, xEnt* parentEnt, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay);
void xSndStopAll(u32 mask);
void xSndSetCategoryVol(sound_category category, f32 vol);
void xSndPauseCategory(u32 mask, u32 pause);
void xSndPauseAll(u32 pause_effects, u32 pause_streams);
void xSndResume();
void xSndSuspend();
void xSndSetEnvironmentalEffect(sound_effect effectType);
void xSndSceneInit();
void xSndInit();

// xSndStreamUnlock__FUi
// Start address: 0x208fd0
void xSndStreamUnlock(u32 owner)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
}

// xSndStreamReady__FUi
// Start address: 0x209020
u8 xSndStreamReady(u32 owner)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
}

// xSndStreamLock__FUi14sound_categoryb
// Start address: 0x209080
u8 xSndStreamLock(u32 owner, sound_category kill_cat, u8 kill_nonlooping)
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
void xSndStopFade(u32 snd, f32 fade_time)
{
	fade_data* it;
	fade_data* end;
	fade_data* it;
	fade_data* end;
}

// xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
// Start address: 0x2093b0
u32 xSndPlay3DFade(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay, f32 fade_time)
{
	fade_data& f;
}

// update_faders__Ff
// Start address: 0x2094e0
void update_faders(f32 dt)
{
	fade_data* it;
	fade_data* end;
	f32 volume;
}

// xSndSetExternalCallback__FPFUib_v
// Start address: 0x209630
void xSndSetExternalCallback(type_37 callback)
{
}

// xSndLoadExternalData__FUiPCvi
// Start address: 0x209640
void xSndLoadExternalData(u32 snd, void* data, s32 forceBuffer)
{
}

// xSndSetPitch__FUif
// Start address: 0x209650
void xSndSetPitch(u32 snd, f32 pitch)
{
}

// xSndSetVol__FUif
// Start address: 0x209660
void xSndSetVol(u32 snd, f32 vol)
{
}

// xSndStopChildren__FUi
// Start address: 0x209670
void xSndStopChildren(u32 pid)
{
	u32 i;
	xSndVoiceInfo* vp;
}

// xSndParentDied__FUi
// Start address: 0x209700
void xSndParentDied(u32 pid)
{
	u32 i;
	xSndVoiceInfo* vp;
}

// xSndStop__FUi
// Start address: 0x209740
void xSndStop(u32 snd)
{
}

// xSndIDIsPlaying__FUi
// Start address: 0x209750
u32 xSndIDIsPlaying(u32 sndID)
{
	xSndVoiceInfo* vp;
	u32 i;
}

// xSndStartStereo__FUiUif
// Start address: 0x2097b0
void xSndStartStereo(u32 id1, u32 id2, f32 pitch)
{
}

// xSndIsReady__FUi
// Start address: 0x2097c0
u32 xSndIsReady(u32 id)
{
}

// xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
// Start address: 0x2097e0
u32 xSndPlayInternal(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, u32 parentID, xEnt* parentEnt, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay)
{
	f32 temp;
	u32 i;
	u32 i;
	u32 i;
	u32 voice;
	u32 sample_rate;
	s32 internalID;
	iSndFileInfo* ip;
	iSndFileInfo* ip;
	xSndVoiceInfo* vp;
}

// xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
// Start address: 0x209d40
u32 xSndPlay3D(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay)
{
	u32 sndID;
}

// xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
// Start address: 0x209d90
u32 xSndPlay3D(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, xEnt* parent, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay)
{
	u32 sndID;
}

// xSndPlay__FUiffUiUiUi14sound_categoryf
// Start address: 0x209db0
u32 xSndPlay(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, u32 parentID, sound_category category, f32 delay)
{
	u32 sndID;
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
	f32 inwardShift;
	f32 factor;
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
void xSndAddDelayed(u32 id, f32 vol, f32 pitch, u32 priority, u32 flags, u32 parentID, xEnt* parentEnt, xVec3* pos, f32 innerRadius, f32 outerRadius, sound_category category, f32 delay)
{
	_xSndDelayed* snd;
	s32 i;
}

// xSndStopAll__FUi
// Start address: 0x20a560
void xSndStopAll(u32 mask)
{
	u32 i;
}

// xSndSetCategoryVol__F14sound_categoryf
// Start address: 0x20a620
void xSndSetCategoryVol(sound_category category, f32 vol)
{
}

// xSndPauseCategory__FUiUi
// Start address: 0x20a640
void xSndPauseCategory(u32 mask, u32 pause)
{
	u32 i;
}

// xSndPauseAll__FUiUi
// Start address: 0x20a6e0
void xSndPauseAll(u32 pause_effects, u32 pause_streams)
{
	u32 i;
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
	u32 i;
}

// xSndInit__Fv
// Start address: 0x20a9f0
void xSndInit()
{
	u32 i;
	xSndVoiceInfo* voice;
}

