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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint32 pad[4];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	RpClump*(*callback)(RpClump*, void*);
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
	RwTexCoords* texCoords[8];
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	void(*InitCB)(xMemPool*, void*);
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
	float32 param[4];
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
	xVec3 vert[3];
	xVec3 norm;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct RpTriangle
{
	uint16 vertIndex[3];
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
	float32 matrix[16];
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
	uint8 NumAnims[2];
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
	void(*destroyNotify)(RwResEntry*);
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	uint8 pad[3];
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
	int8 name[32];
	int8 mask[32];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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
	RxCluster clusters[1];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	float32 categoryVolFader[5];
	xSndVoiceInfo voice[48];
	xMat4x3 listenerMat[2];
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

int8 buffer[16];
int8 buffer[16];
_xSndDelayed sDelayedSnd[16];
uint32 sDelayedPaused;
uint32 snd_annoy_cnt;
uint32 snd_annoy_previous[64];
xSndGlobals gSnd;
fade_data faders[128];
int32 faders_active;
float32 sTimeElapsed;

void xSndStreamUnlock(uint32 owner);
uint8 xSndStreamReady(uint32 owner);
uint8 xSndStreamLock(uint32 owner, sound_category kill_cat, uint8 kill_nonlooping);
void xSndStopFade(uint32 snd, float32 fade_time);
uint32 xSndPlay3DFade(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay, float32 fade_time);
void update_faders(float32 dt);
void xSndSetExternalCallback(void(*callback)(uint32, uint8));
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
	// Line 1377, Address: 0x208fd0, Func Offset: 0
	// Line 1378, Address: 0x208fdc, Func Offset: 0xc
	// Line 1380, Address: 0x208fe8, Func Offset: 0x18
	// Line 1383, Address: 0x208ff4, Func Offset: 0x24
	// Line 1384, Address: 0x208ffc, Func Offset: 0x2c
	// Line 1385, Address: 0x209000, Func Offset: 0x30
	// Line 1386, Address: 0x209010, Func Offset: 0x40
	// Func End, Address: 0x209018, Func Offset: 0x48
}

// xSndStreamReady__FUi
// Start address: 0x209020
uint8 xSndStreamReady(uint32 owner)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
	// Line 1364, Address: 0x209020, Func Offset: 0
	// Line 1365, Address: 0x20902c, Func Offset: 0xc
	// Line 1367, Address: 0x209038, Func Offset: 0x18
	// Line 1368, Address: 0x209044, Func Offset: 0x24
	// Line 1369, Address: 0x209058, Func Offset: 0x38
	// Line 1371, Address: 0x209068, Func Offset: 0x48
	// Line 1372, Address: 0x209070, Func Offset: 0x50
	// Func End, Address: 0x209078, Func Offset: 0x58
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
	// Line 1290, Address: 0x209080, Func Offset: 0
	// Line 1293, Address: 0x209098, Func Offset: 0x18
	// Line 1296, Address: 0x2090a4, Func Offset: 0x24
	// Line 1298, Address: 0x2090b0, Func Offset: 0x30
	// Line 1299, Address: 0x2090bc, Func Offset: 0x3c
	// Line 1300, Address: 0x2090c4, Func Offset: 0x44
	// Line 1303, Address: 0x2090d8, Func Offset: 0x58
	// Line 1305, Address: 0x2090e0, Func Offset: 0x60
	// Line 1307, Address: 0x2090ec, Func Offset: 0x6c
	// Line 1309, Address: 0x2090fc, Func Offset: 0x7c
	// Line 1310, Address: 0x209100, Func Offset: 0x80
	// Line 1312, Address: 0x209108, Func Offset: 0x88
	// Line 1315, Address: 0x209118, Func Offset: 0x98
	// Line 1317, Address: 0x209120, Func Offset: 0xa0
	// Line 1319, Address: 0x20912c, Func Offset: 0xac
	// Line 1321, Address: 0x20913c, Func Offset: 0xbc
	// Line 1322, Address: 0x209140, Func Offset: 0xc0
	// Line 1324, Address: 0x209148, Func Offset: 0xc8
	// Line 1326, Address: 0x209158, Func Offset: 0xd8
	// Line 1329, Address: 0x209164, Func Offset: 0xe4
	// Line 1331, Address: 0x209170, Func Offset: 0xf0
	// Line 1333, Address: 0x20917c, Func Offset: 0xfc
	// Line 1335, Address: 0x209188, Func Offset: 0x108
	// Line 1336, Address: 0x209190, Func Offset: 0x110
	// Line 1337, Address: 0x209194, Func Offset: 0x114
	// Line 1339, Address: 0x20919c, Func Offset: 0x11c
	// Line 1340, Address: 0x2091ac, Func Offset: 0x12c
	// Line 1342, Address: 0x2091b0, Func Offset: 0x130
	// Line 1345, Address: 0x2091b8, Func Offset: 0x138
	// Line 1347, Address: 0x2091c0, Func Offset: 0x140
	// Line 1349, Address: 0x2091cc, Func Offset: 0x14c
	// Line 1351, Address: 0x2091dc, Func Offset: 0x15c
	// Line 1352, Address: 0x2091e4, Func Offset: 0x164
	// Line 1353, Address: 0x2091e8, Func Offset: 0x168
	// Line 1355, Address: 0x2091f0, Func Offset: 0x170
	// Line 1356, Address: 0x2091fc, Func Offset: 0x17c
	// Line 1358, Address: 0x209200, Func Offset: 0x180
	// Line 1359, Address: 0x209208, Func Offset: 0x188
	// Func End, Address: 0x209220, Func Offset: 0x1a0
}

// xSndStopFade__FUif
// Start address: 0x209220
void xSndStopFade(uint32 snd, float32 fade_time)
{
	fade_data* it;
	fade_data* end;
	fade_data* it;
	fade_data* end;
	// Line 1245, Address: 0x209220, Func Offset: 0
	// Line 1246, Address: 0x209234, Func Offset: 0x14
	// Line 1247, Address: 0x20923c, Func Offset: 0x1c
	// Line 1249, Address: 0x209260, Func Offset: 0x40
	// Line 1250, Address: 0x209268, Func Offset: 0x48
	// Line 1254, Address: 0x209270, Func Offset: 0x50
	// Line 1255, Address: 0x209278, Func Offset: 0x58
	// Line 1257, Address: 0x20928c, Func Offset: 0x6c
	// Line 1258, Address: 0x209294, Func Offset: 0x74
	// Line 1260, Address: 0x2092b8, Func Offset: 0x98
	// Line 1263, Address: 0x2092c4, Func Offset: 0xa4
	// Line 1264, Address: 0x2092c8, Func Offset: 0xa8
	// Line 1263, Address: 0x2092cc, Func Offset: 0xac
	// Line 1265, Address: 0x2092d0, Func Offset: 0xb0
	// Line 1266, Address: 0x2092d8, Func Offset: 0xb8
	// Line 1267, Address: 0x209304, Func Offset: 0xe4
	// Line 1268, Address: 0x209310, Func Offset: 0xf0
	// Line 1269, Address: 0x209314, Func Offset: 0xf4
	// Line 1270, Address: 0x209320, Func Offset: 0x100
	// Line 1274, Address: 0x209328, Func Offset: 0x108
	// Line 1275, Address: 0x209344, Func Offset: 0x124
	// Line 1276, Address: 0x209350, Func Offset: 0x130
	// Line 1277, Address: 0x209368, Func Offset: 0x148
	// Line 1280, Address: 0x209380, Func Offset: 0x160
	// Line 1281, Address: 0x209384, Func Offset: 0x164
	// Line 1282, Address: 0x209388, Func Offset: 0x168
	// Line 1283, Address: 0x20938c, Func Offset: 0x16c
	// Line 1284, Address: 0x209390, Func Offset: 0x170
	// Line 1285, Address: 0x209394, Func Offset: 0x174
	// Line 1286, Address: 0x209398, Func Offset: 0x178
	// Func End, Address: 0x2093ac, Func Offset: 0x18c
}

// xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
// Start address: 0x2093b0
uint32 xSndPlay3DFade(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay, float32 fade_time)
{
	fade_data& f;
	// Line 1225, Address: 0x2093b0, Func Offset: 0
	// Line 1226, Address: 0x2093cc, Func Offset: 0x1c
	// Line 1227, Address: 0x2093f8, Func Offset: 0x48
	// Line 1229, Address: 0x20943c, Func Offset: 0x8c
	// Line 1231, Address: 0x20946c, Func Offset: 0xbc
	// Line 1233, Address: 0x209480, Func Offset: 0xd0
	// Line 1234, Address: 0x209488, Func Offset: 0xd8
	// Line 1233, Address: 0x20948c, Func Offset: 0xdc
	// Line 1234, Address: 0x2094a0, Func Offset: 0xf0
	// Line 1235, Address: 0x2094a4, Func Offset: 0xf4
	// Line 1236, Address: 0x2094a8, Func Offset: 0xf8
	// Line 1237, Address: 0x2094ac, Func Offset: 0xfc
	// Line 1238, Address: 0x2094b0, Func Offset: 0x100
	// Line 1239, Address: 0x2094b4, Func Offset: 0x104
	// Line 1240, Address: 0x2094b8, Func Offset: 0x108
	// Line 1241, Address: 0x2094c4, Func Offset: 0x114
	// Line 1242, Address: 0x2094c8, Func Offset: 0x118
	// Func End, Address: 0x2094e0, Func Offset: 0x130
}

// update_faders__Ff
// Start address: 0x2094e0
void update_faders(float32 dt)
{
	fade_data* it;
	fade_data* end;
	float32 volume;
	// Line 1189, Address: 0x2094e0, Func Offset: 0
	// Line 1190, Address: 0x2094f0, Func Offset: 0x10
	// Line 1189, Address: 0x2094f4, Func Offset: 0x14
	// Line 1190, Address: 0x2094f8, Func Offset: 0x18
	// Line 1195, Address: 0x209518, Func Offset: 0x38
	// Line 1196, Address: 0x20951c, Func Offset: 0x3c
	// Line 1195, Address: 0x209524, Func Offset: 0x44
	// Line 1196, Address: 0x209528, Func Offset: 0x48
	// Line 1197, Address: 0x209540, Func Offset: 0x60
	// Line 1200, Address: 0x209554, Func Offset: 0x74
	// Line 1202, Address: 0x209560, Func Offset: 0x80
	// Line 1203, Address: 0x209580, Func Offset: 0xa0
	// Line 1205, Address: 0x209588, Func Offset: 0xa8
	// Line 1206, Address: 0x20958c, Func Offset: 0xac
	// Line 1205, Address: 0x209590, Func Offset: 0xb0
	// Line 1207, Address: 0x209594, Func Offset: 0xb4
	// Line 1208, Address: 0x20959c, Func Offset: 0xbc
	// Line 1209, Address: 0x2095c8, Func Offset: 0xe8
	// Line 1214, Address: 0x2095d0, Func Offset: 0xf0
	// Line 1213, Address: 0x2095d4, Func Offset: 0xf4
	// Line 1214, Address: 0x2095e0, Func Offset: 0x100
	// Line 1216, Address: 0x2095f8, Func Offset: 0x118
	// Line 1214, Address: 0x2095fc, Func Offset: 0x11c
	// Line 1215, Address: 0x209600, Func Offset: 0x120
	// Line 1216, Address: 0x209604, Func Offset: 0x124
	// Line 1218, Address: 0x20960c, Func Offset: 0x12c
	// Line 1219, Address: 0x209610, Func Offset: 0x130
	// Line 1220, Address: 0x209618, Func Offset: 0x138
	// Func End, Address: 0x209630, Func Offset: 0x150
}

// xSndSetExternalCallback__FPFUib_v
// Start address: 0x209630
void xSndSetExternalCallback(void(*callback)(uint32, uint8))
{
	// Line 1160, Address: 0x209630, Func Offset: 0
	// Func End, Address: 0x209638, Func Offset: 0x8
}

// xSndLoadExternalData__FUiPCvi
// Start address: 0x209640
void xSndLoadExternalData(uint32 snd, void* data, int32 forceBuffer)
{
	// Line 1155, Address: 0x209640, Func Offset: 0
	// Func End, Address: 0x209648, Func Offset: 0x8
}

// xSndSetPitch__FUif
// Start address: 0x209650
void xSndSetPitch(uint32 snd, float32 pitch)
{
	// Line 1074, Address: 0x209650, Func Offset: 0
	// Func End, Address: 0x209658, Func Offset: 0x8
}

// xSndSetVol__FUif
// Start address: 0x209660
void xSndSetVol(uint32 snd, float32 vol)
{
	// Line 1067, Address: 0x209660, Func Offset: 0
	// Func End, Address: 0x209668, Func Offset: 0x8
}

// xSndStopChildren__FUi
// Start address: 0x209670
void xSndStopChildren(uint32 pid)
{
	uint32 i;
	xSndVoiceInfo* vp;
	// Line 1050, Address: 0x209670, Func Offset: 0
	// Line 1054, Address: 0x209688, Func Offset: 0x18
	// Line 1052, Address: 0x20968c, Func Offset: 0x1c
	// Line 1054, Address: 0x209694, Func Offset: 0x24
	// Line 1055, Address: 0x209698, Func Offset: 0x28
	// Line 1056, Address: 0x2096b4, Func Offset: 0x44
	// Line 1057, Address: 0x2096bc, Func Offset: 0x4c
	// Line 1058, Address: 0x2096cc, Func Offset: 0x5c
	// Line 1059, Address: 0x2096d0, Func Offset: 0x60
	// Line 1060, Address: 0x2096e0, Func Offset: 0x70
	// Func End, Address: 0x2096f8, Func Offset: 0x88
}

// xSndParentDied__FUi
// Start address: 0x209700
void xSndParentDied(uint32 pid)
{
	uint32 i;
	xSndVoiceInfo* vp;
	// Line 1038, Address: 0x209700, Func Offset: 0
	// Line 1040, Address: 0x209704, Func Offset: 0x4
	// Line 1038, Address: 0x209708, Func Offset: 0x8
	// Line 1042, Address: 0x20970c, Func Offset: 0xc
	// Line 1041, Address: 0x209710, Func Offset: 0x10
	// Line 1042, Address: 0x20971c, Func Offset: 0x1c
	// Line 1044, Address: 0x209728, Func Offset: 0x28
	// Line 1045, Address: 0x209738, Func Offset: 0x38
	// Func End, Address: 0x209740, Func Offset: 0x40
}

// xSndStop__FUi
// Start address: 0x209740
void xSndStop(uint32 snd)
{
	// Line 1030, Address: 0x209740, Func Offset: 0
	// Func End, Address: 0x209748, Func Offset: 0x8
}

// xSndIDIsPlaying__FUi
// Start address: 0x209750
uint32 xSndIDIsPlaying(uint32 sndID)
{
	xSndVoiceInfo* vp;
	uint32 i;
	// Line 1016, Address: 0x209750, Func Offset: 0
	// Line 1018, Address: 0x209754, Func Offset: 0x4
	// Line 1016, Address: 0x209758, Func Offset: 0x8
	// Line 1018, Address: 0x20975c, Func Offset: 0xc
	// Line 1019, Address: 0x209760, Func Offset: 0x10
	// Line 1020, Address: 0x20977c, Func Offset: 0x2c
	// Line 1021, Address: 0x209788, Func Offset: 0x38
	// Line 1022, Address: 0x209798, Func Offset: 0x48
	// Line 1023, Address: 0x2097a0, Func Offset: 0x50
	// Func End, Address: 0x2097a8, Func Offset: 0x58
}

// xSndStartStereo__FUiUif
// Start address: 0x2097b0
void xSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
	// Line 987, Address: 0x2097b0, Func Offset: 0
	// Func End, Address: 0x2097b8, Func Offset: 0x8
}

// xSndIsReady__FUi
// Start address: 0x2097c0
uint32 xSndIsReady(uint32 id)
{
	// Line 977, Address: 0x2097c0, Func Offset: 0
	// Line 978, Address: 0x2097c8, Func Offset: 0x8
	// Line 979, Address: 0x2097d0, Func Offset: 0x10
	// Line 978, Address: 0x2097d4, Func Offset: 0x14
	// Line 979, Address: 0x2097d8, Func Offset: 0x18
	// Func End, Address: 0x2097e0, Func Offset: 0x20
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
	// Line 714, Address: 0x2097e0, Func Offset: 0
	// Line 731, Address: 0x209840, Func Offset: 0x60
	// Line 733, Address: 0x20984c, Func Offset: 0x6c
	// Line 749, Address: 0x209858, Func Offset: 0x78
	// Line 752, Address: 0x2098b0, Func Offset: 0xd0
	// Line 754, Address: 0x2098c4, Func Offset: 0xe4
	// Line 756, Address: 0x2098f0, Func Offset: 0x110
	// Line 761, Address: 0x2098f8, Func Offset: 0x118
	// Line 764, Address: 0x209908, Func Offset: 0x128
	// Line 766, Address: 0x209918, Func Offset: 0x138
	// Line 768, Address: 0x209928, Func Offset: 0x148
	// Line 770, Address: 0x209938, Func Offset: 0x158
	// Line 773, Address: 0x209948, Func Offset: 0x168
	// Line 775, Address: 0x209958, Func Offset: 0x178
	// Line 776, Address: 0x209960, Func Offset: 0x180
	// Line 777, Address: 0x209970, Func Offset: 0x190
	// Line 778, Address: 0x209978, Func Offset: 0x198
	// Line 781, Address: 0x209980, Func Offset: 0x1a0
	// Line 783, Address: 0x209988, Func Offset: 0x1a8
	// Line 785, Address: 0x209994, Func Offset: 0x1b4
	// Line 787, Address: 0x2099a0, Func Offset: 0x1c0
	// Line 789, Address: 0x2099b0, Func Offset: 0x1d0
	// Line 790, Address: 0x2099b8, Func Offset: 0x1d8
	// Line 791, Address: 0x2099c8, Func Offset: 0x1e8
	// Line 795, Address: 0x2099d0, Func Offset: 0x1f0
	// Line 797, Address: 0x2099e0, Func Offset: 0x200
	// Line 799, Address: 0x2099ec, Func Offset: 0x20c
	// Line 801, Address: 0x209a04, Func Offset: 0x224
	// Line 803, Address: 0x209a14, Func Offset: 0x234
	// Line 804, Address: 0x209a1c, Func Offset: 0x23c
	// Line 814, Address: 0x209a30, Func Offset: 0x250
	// Line 816, Address: 0x209a3c, Func Offset: 0x25c
	// Line 817, Address: 0x209a44, Func Offset: 0x264
	// Line 818, Address: 0x209a4c, Func Offset: 0x26c
	// Line 823, Address: 0x209a58, Func Offset: 0x278
	// Line 833, Address: 0x209a5c, Func Offset: 0x27c
	// Line 834, Address: 0x209a68, Func Offset: 0x288
	// Line 835, Address: 0x209a70, Func Offset: 0x290
	// Line 856, Address: 0x209a78, Func Offset: 0x298
	// Line 861, Address: 0x209a84, Func Offset: 0x2a4
	// Line 863, Address: 0x209a90, Func Offset: 0x2b0
	// Line 864, Address: 0x209a98, Func Offset: 0x2b8
	// Line 865, Address: 0x209a9c, Func Offset: 0x2bc
	// Line 868, Address: 0x209aa0, Func Offset: 0x2c0
	// Line 870, Address: 0x209ab8, Func Offset: 0x2d8
	// Line 871, Address: 0x209abc, Func Offset: 0x2dc
	// Line 880, Address: 0x209ac0, Func Offset: 0x2e0
	// Line 884, Address: 0x209ac4, Func Offset: 0x2e4
	// Line 887, Address: 0x209ac8, Func Offset: 0x2e8
	// Line 888, Address: 0x209ad8, Func Offset: 0x2f8
	// Line 889, Address: 0x209ae4, Func Offset: 0x304
	// Line 892, Address: 0x209af0, Func Offset: 0x310
	// Line 898, Address: 0x209af8, Func Offset: 0x318
	// Line 892, Address: 0x209afc, Func Offset: 0x31c
	// Line 900, Address: 0x209b10, Func Offset: 0x330
	// Line 892, Address: 0x209b14, Func Offset: 0x334
	// Line 893, Address: 0x209b18, Func Offset: 0x338
	// Line 892, Address: 0x209b1c, Func Offset: 0x33c
	// Line 894, Address: 0x209b20, Func Offset: 0x340
	// Line 895, Address: 0x209b24, Func Offset: 0x344
	// Line 896, Address: 0x209b28, Func Offset: 0x348
	// Line 897, Address: 0x209b2c, Func Offset: 0x34c
	// Line 898, Address: 0x209b30, Func Offset: 0x350
	// Line 899, Address: 0x209b44, Func Offset: 0x364
	// Line 900, Address: 0x209b48, Func Offset: 0x368
	// Line 901, Address: 0x209b4c, Func Offset: 0x36c
	// Line 916, Address: 0x209b50, Func Offset: 0x370
	// Line 920, Address: 0x209b58, Func Offset: 0x378
	// Line 924, Address: 0x209b5c, Func Offset: 0x37c
	// Line 923, Address: 0x209b60, Func Offset: 0x380
	// Line 920, Address: 0x209b64, Func Offset: 0x384
	// Line 924, Address: 0x209b6c, Func Offset: 0x38c
	// Line 921, Address: 0x209b70, Func Offset: 0x390
	// Line 922, Address: 0x209b74, Func Offset: 0x394
	// Line 924, Address: 0x209b78, Func Offset: 0x398
	// Line 926, Address: 0x209b98, Func Offset: 0x3b8
	// Line 927, Address: 0x209bac, Func Offset: 0x3cc
	// Line 929, Address: 0x209bc8, Func Offset: 0x3e8
	// Line 930, Address: 0x209bec, Func Offset: 0x40c
	// Line 931, Address: 0x209bf8, Func Offset: 0x418
	// Line 936, Address: 0x209c00, Func Offset: 0x420
	// Line 938, Address: 0x209c04, Func Offset: 0x424
	// Line 936, Address: 0x209c08, Func Offset: 0x428
	// Line 938, Address: 0x209c10, Func Offset: 0x430
	// Line 941, Address: 0x209c28, Func Offset: 0x448
	// Line 939, Address: 0x209c2c, Func Offset: 0x44c
	// Line 941, Address: 0x209c30, Func Offset: 0x450
	// Line 940, Address: 0x209c34, Func Offset: 0x454
	// Line 939, Address: 0x209c38, Func Offset: 0x458
	// Line 941, Address: 0x209c4c, Func Offset: 0x46c
	// Line 942, Address: 0x209c70, Func Offset: 0x490
	// Line 953, Address: 0x209c78, Func Offset: 0x498
	// Line 954, Address: 0x209c7c, Func Offset: 0x49c
	// Line 955, Address: 0x209c80, Func Offset: 0x4a0
	// Line 956, Address: 0x209c88, Func Offset: 0x4a8
	// Line 957, Address: 0x209c8c, Func Offset: 0x4ac
	// Line 955, Address: 0x209c90, Func Offset: 0x4b0
	// Line 956, Address: 0x209cac, Func Offset: 0x4cc
	// Line 957, Address: 0x209cb0, Func Offset: 0x4d0
	// Line 958, Address: 0x209cb4, Func Offset: 0x4d4
	// Line 961, Address: 0x209cb8, Func Offset: 0x4d8
	// Line 963, Address: 0x209cc8, Func Offset: 0x4e8
	// Line 966, Address: 0x209cd0, Func Offset: 0x4f0
	// Line 967, Address: 0x209ce0, Func Offset: 0x500
	// Line 968, Address: 0x209ce8, Func Offset: 0x508
	// Line 967, Address: 0x209cec, Func Offset: 0x50c
	// Line 968, Address: 0x209cf0, Func Offset: 0x510
	// Line 970, Address: 0x209cf8, Func Offset: 0x518
	// Line 971, Address: 0x209d00, Func Offset: 0x520
	// Func End, Address: 0x209d40, Func Offset: 0x560
}

// xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
// Start address: 0x209d40
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
	uint32 sndID;
	// Line 687, Address: 0x209d40, Func Offset: 0
	// Line 699, Address: 0x209d44, Func Offset: 0x4
	// Line 687, Address: 0x209d48, Func Offset: 0x8
	// Line 699, Address: 0x209d50, Func Offset: 0x10
	// Line 702, Address: 0x209d7c, Func Offset: 0x3c
	// Func End, Address: 0x209d88, Func Offset: 0x48
}

// xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
// Start address: 0x209d90
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xEnt* parent, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
	uint32 sndID;
	// Line 676, Address: 0x209d98, Func Offset: 0x8
	// Func End, Address: 0x209da8, Func Offset: 0x18
}

// xSndPlay__FUiffUiUiUi14sound_categoryf
// Start address: 0x209db0
uint32 xSndPlay(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, sound_category category, float32 delay)
{
	uint32 sndID;
	// Line 653, Address: 0x209db8, Func Offset: 0x8
	// Func End, Address: 0x209dcc, Func Offset: 0x1c
}

// xSndExit__Fv
// Start address: 0x209dd0
void xSndExit()
{
	// Line 630, Address: 0x209dd0, Func Offset: 0
	// Line 631, Address: 0x209dd8, Func Offset: 0x8
	// Line 632, Address: 0x209de0, Func Offset: 0x10
	// Line 633, Address: 0x209de4, Func Offset: 0x14
	// Func End, Address: 0x209df0, Func Offset: 0x20
}

// xSndSelectListenerMode__F24sound_listener_game_mode
// Start address: 0x209df0
void xSndSelectListenerMode(sound_listener_game_mode listenerMode)
{
	// Line 591, Address: 0x209df0, Func Offset: 0
	// Line 592, Address: 0x209df4, Func Offset: 0x4
	// Func End, Address: 0x209dfc, Func Offset: 0xc
}

// xSndSetListenerData__F19sound_listener_typePC7xMat4x3
// Start address: 0x209e00
void xSndSetListenerData(sound_listener_type listenerType, xMat4x3* pMat)
{
	// Line 584, Address: 0x209e00, Func Offset: 0
	// Line 585, Address: 0x209ee0, Func Offset: 0xe0
	// Func End, Address: 0x209ee8, Func Offset: 0xe8
}

// xSndUpdate__Fv
// Start address: 0x209ef0
void xSndUpdate()
{
	// Line 568, Address: 0x209ef0, Func Offset: 0
	// Line 569, Address: 0x209efc, Func Offset: 0xc
	// Line 572, Address: 0x209f04, Func Offset: 0x14
	// Line 574, Address: 0x209f88, Func Offset: 0x98
	// Line 576, Address: 0x209f90, Func Offset: 0xa0
	// Line 577, Address: 0x209f98, Func Offset: 0xa8
	// Func End, Address: 0x209fac, Func Offset: 0xbc
}

// xSndInternalUpdateVoicePos__FP13xSndVoiceInfo
// Start address: 0x209fb0
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice)
{
	xEnt* ent;
	// Line 423, Address: 0x209fb0, Func Offset: 0
	// Line 424, Address: 0x209fbc, Func Offset: 0xc
	// Line 427, Address: 0x209fcc, Func Offset: 0x1c
	// Line 429, Address: 0x209fd4, Func Offset: 0x24
	// Line 432, Address: 0x209fe4, Func Offset: 0x34
	// Line 434, Address: 0x209fec, Func Offset: 0x3c
	// Line 435, Address: 0x20a000, Func Offset: 0x50
	// Line 436, Address: 0x20a00c, Func Offset: 0x5c
	// Line 442, Address: 0x20a014, Func Offset: 0x64
	// Line 444, Address: 0x20a018, Func Offset: 0x68
	// Line 445, Address: 0x20a024, Func Offset: 0x74
	// Line 446, Address: 0x20a040, Func Offset: 0x90
	// Line 448, Address: 0x20a050, Func Offset: 0xa0
	// Line 449, Address: 0x20a06c, Func Offset: 0xbc
	// Line 451, Address: 0x20a078, Func Offset: 0xc8
	// Line 453, Address: 0x20a080, Func Offset: 0xd0
	// Line 463, Address: 0x20a088, Func Offset: 0xd8
	// Line 472, Address: 0x20a090, Func Offset: 0xe0
	// Line 481, Address: 0x20a0b0, Func Offset: 0x100
	// Line 482, Address: 0x20a0bc, Func Offset: 0x10c
	// Line 483, Address: 0x20a0c0, Func Offset: 0x110
	// Func End, Address: 0x20a0cc, Func Offset: 0x11c
}

// xSndProcessSoundPos__FPC5xVec3P5xVec3
// Start address: 0x20a0d0
void xSndProcessSoundPos(xVec3* pActual, xVec3* pProcessed)
{
	xVec3 playerDelta;
	float32 inwardShift;
	float32 factor;
	// Line 377, Address: 0x20a0d0, Func Offset: 0
	// Line 379, Address: 0x20a0f4, Func Offset: 0x24
	// Line 377, Address: 0x20a0f8, Func Offset: 0x28
	// Line 394, Address: 0x20a100, Func Offset: 0x30
	// Line 377, Address: 0x20a104, Func Offset: 0x34
	// Line 394, Address: 0x20a108, Func Offset: 0x38
	// Line 377, Address: 0x20a10c, Func Offset: 0x3c
	// Line 394, Address: 0x20a110, Func Offset: 0x40
	// Line 395, Address: 0x20a11c, Func Offset: 0x4c
	// Line 377, Address: 0x20a124, Func Offset: 0x54
	// Line 394, Address: 0x20a130, Func Offset: 0x60
	// Line 395, Address: 0x20a174, Func Offset: 0xa4
	// Line 394, Address: 0x20a178, Func Offset: 0xa8
	// Line 395, Address: 0x20a1a4, Func Offset: 0xd4
	// Line 397, Address: 0x20a208, Func Offset: 0x138
	// Line 395, Address: 0x20a20c, Func Offset: 0x13c
	// Line 396, Address: 0x20a214, Func Offset: 0x144
	// Line 397, Address: 0x20a224, Func Offset: 0x154
	// Line 396, Address: 0x20a234, Func Offset: 0x164
	// Line 397, Address: 0x20a23c, Func Offset: 0x16c
	// Line 398, Address: 0x20a248, Func Offset: 0x178
	// Line 403, Address: 0x20a254, Func Offset: 0x184
	// Line 407, Address: 0x20a258, Func Offset: 0x188
	// Line 403, Address: 0x20a264, Func Offset: 0x194
	// Line 406, Address: 0x20a268, Func Offset: 0x198
	// Line 403, Address: 0x20a26c, Func Offset: 0x19c
	// Line 405, Address: 0x20a270, Func Offset: 0x1a0
	// Line 406, Address: 0x20a278, Func Offset: 0x1a8
	// Line 407, Address: 0x20a298, Func Offset: 0x1c8
	// Line 408, Address: 0x20a2f0, Func Offset: 0x220
	// Line 411, Address: 0x20a2f8, Func Offset: 0x228
	// Line 414, Address: 0x20a30c, Func Offset: 0x23c
	// Line 415, Address: 0x20a314, Func Offset: 0x244
	// Line 417, Address: 0x20a318, Func Offset: 0x248
	// Line 420, Address: 0x20a330, Func Offset: 0x260
	// Func End, Address: 0x20a338, Func Offset: 0x268
}

// xSndCalculateListenerPosition__Fv
// Start address: 0x20a340
void xSndCalculateListenerPosition()
{
	xMat4x3* pMat;
	xMat4x3* pMat;
	// Line 341, Address: 0x20a340, Func Offset: 0
	// Line 343, Address: 0x20a364, Func Offset: 0x24
	// Line 352, Address: 0x20a368, Func Offset: 0x28
	// Line 346, Address: 0x20a370, Func Offset: 0x30
	// Line 353, Address: 0x20a378, Func Offset: 0x38
	// Line 347, Address: 0x20a37c, Func Offset: 0x3c
	// Line 353, Address: 0x20a380, Func Offset: 0x40
	// Line 352, Address: 0x20a384, Func Offset: 0x44
	// Line 347, Address: 0x20a394, Func Offset: 0x54
	// Line 348, Address: 0x20a3b4, Func Offset: 0x74
	// Line 349, Address: 0x20a3d8, Func Offset: 0x98
	// Line 352, Address: 0x20a3fc, Func Offset: 0xbc
	// Line 353, Address: 0x20a414, Func Offset: 0xd4
	// Line 355, Address: 0x20a424, Func Offset: 0xe4
	// Line 356, Address: 0x20a42c, Func Offset: 0xec
	// Line 365, Address: 0x20a430, Func Offset: 0xf0
	// Line 359, Address: 0x20a438, Func Offset: 0xf8
	// Line 360, Address: 0x20a440, Func Offset: 0x100
	// Line 365, Address: 0x20a444, Func Offset: 0x104
	// Line 360, Address: 0x20a454, Func Offset: 0x114
	// Line 361, Address: 0x20a474, Func Offset: 0x134
	// Line 362, Address: 0x20a498, Func Offset: 0x158
	// Line 365, Address: 0x20a4bc, Func Offset: 0x17c
	// Line 368, Address: 0x20a4d4, Func Offset: 0x194
	// Line 369, Address: 0x20a4d8, Func Offset: 0x198
	// Func End, Address: 0x20a4e0, Func Offset: 0x1a0
}

// xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf
// Start address: 0x20a4e0
void xSndAddDelayed(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, xEnt* parentEnt, xVec3* pos, float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
	_xSndDelayed* snd;
	int32 i;
	// Line 310, Address: 0x20a4e0, Func Offset: 0
	// Line 311, Address: 0x20a4e4, Func Offset: 0x4
	// Line 310, Address: 0x20a4e8, Func Offset: 0x8
	// Line 313, Address: 0x20a4ec, Func Offset: 0xc
	// Line 316, Address: 0x20a510, Func Offset: 0x30
	// Line 317, Address: 0x20a514, Func Offset: 0x34
	// Line 318, Address: 0x20a518, Func Offset: 0x38
	// Line 319, Address: 0x20a51c, Func Offset: 0x3c
	// Line 320, Address: 0x20a520, Func Offset: 0x40
	// Line 321, Address: 0x20a524, Func Offset: 0x44
	// Line 322, Address: 0x20a528, Func Offset: 0x48
	// Line 323, Address: 0x20a52c, Func Offset: 0x4c
	// Line 324, Address: 0x20a530, Func Offset: 0x50
	// Line 325, Address: 0x20a534, Func Offset: 0x54
	// Line 326, Address: 0x20a538, Func Offset: 0x58
	// Line 328, Address: 0x20a53c, Func Offset: 0x5c
	// Line 329, Address: 0x20a544, Func Offset: 0x64
	// Line 331, Address: 0x20a548, Func Offset: 0x68
	// Line 332, Address: 0x20a558, Func Offset: 0x78
	// Func End, Address: 0x20a560, Func Offset: 0x80
}

// xSndStopAll__FUi
// Start address: 0x20a560
void xSndStopAll(uint32 mask)
{
	uint32 i;
	// Line 242, Address: 0x20a560, Func Offset: 0
	// Line 245, Address: 0x20a578, Func Offset: 0x18
	// Line 246, Address: 0x20a588, Func Offset: 0x28
	// Line 248, Address: 0x20a598, Func Offset: 0x38
	// Line 249, Address: 0x20a5b0, Func Offset: 0x50
	// Line 251, Address: 0x20a5b8, Func Offset: 0x58
	// Line 254, Address: 0x20a5c8, Func Offset: 0x68
	// Line 264, Address: 0x20a608, Func Offset: 0xa8
	// Func End, Address: 0x20a620, Func Offset: 0xc0
}

// xSndSetCategoryVol__F14sound_categoryf
// Start address: 0x20a620
void xSndSetCategoryVol(sound_category category, float32 vol)
{
	// Line 229, Address: 0x20a620, Func Offset: 0
	// Line 233, Address: 0x20a630, Func Offset: 0x10
	// Func End, Address: 0x20a638, Func Offset: 0x18
}

// xSndPauseCategory__FUiUi
// Start address: 0x20a640
void xSndPauseCategory(uint32 mask, uint32 pause)
{
	uint32 i;
	// Line 214, Address: 0x20a640, Func Offset: 0
	// Line 217, Address: 0x20a660, Func Offset: 0x20
	// Line 218, Address: 0x20a670, Func Offset: 0x30
	// Line 220, Address: 0x20a680, Func Offset: 0x40
	// Line 221, Address: 0x20a698, Func Offset: 0x58
	// Line 222, Address: 0x20a6a4, Func Offset: 0x64
	// Line 223, Address: 0x20a6a8, Func Offset: 0x68
	// Line 224, Address: 0x20a6b8, Func Offset: 0x78
	// Func End, Address: 0x20a6d4, Func Offset: 0x94
}

// xSndPauseAll__FUiUi
// Start address: 0x20a6e0
void xSndPauseAll(uint32 pause_effects, uint32 pause_streams)
{
	uint32 i;
	// Line 199, Address: 0x20a6e0, Func Offset: 0
	// Line 202, Address: 0x20a700, Func Offset: 0x20
	// Line 201, Address: 0x20a708, Func Offset: 0x28
	// Line 202, Address: 0x20a70c, Func Offset: 0x2c
	// Line 203, Address: 0x20a714, Func Offset: 0x34
	// Line 204, Address: 0x20a720, Func Offset: 0x40
	// Line 205, Address: 0x20a728, Func Offset: 0x48
	// Line 206, Address: 0x20a740, Func Offset: 0x60
	// Line 207, Address: 0x20a74c, Func Offset: 0x6c
	// Line 209, Address: 0x20a758, Func Offset: 0x78
	// Line 210, Address: 0x20a768, Func Offset: 0x88
	// Func End, Address: 0x20a784, Func Offset: 0xa4
}

// xSndResume__Fv
// Start address: 0x20a790
void xSndResume()
{
	// Line 192, Address: 0x20a790, Func Offset: 0
	// Line 193, Address: 0x20a7a0, Func Offset: 0x10
	// Line 194, Address: 0x20a808, Func Offset: 0x78
	// Line 195, Address: 0x20a80c, Func Offset: 0x7c
	// Func End, Address: 0x20a820, Func Offset: 0x90
}

// xSndSuspend__Fv
// Start address: 0x20a820
void xSndSuspend()
{
	// Line 184, Address: 0x20a820, Func Offset: 0
	// Line 185, Address: 0x20a824, Func Offset: 0x4
	// Line 184, Address: 0x20a828, Func Offset: 0x8
	// Line 185, Address: 0x20a834, Func Offset: 0x14
	// Line 186, Address: 0x20a8a0, Func Offset: 0x80
	// Line 187, Address: 0x20a8a4, Func Offset: 0x84
	// Line 188, Address: 0x20a8ac, Func Offset: 0x8c
	// Func End, Address: 0x20a8c0, Func Offset: 0xa0
}

// xSndSetEnvironmentalEffect__F12sound_effect
// Start address: 0x20a8c0
void xSndSetEnvironmentalEffect(sound_effect effectType)
{
	// Line 169, Address: 0x20a8c0, Func Offset: 0
	// Line 170, Address: 0x20a8c4, Func Offset: 0x4
	// Line 173, Address: 0x20a8e0, Func Offset: 0x20
	// Line 174, Address: 0x20a8e8, Func Offset: 0x28
	// Line 176, Address: 0x20a8f0, Func Offset: 0x30
	// Line 179, Address: 0x20a8f8, Func Offset: 0x38
	// Func End, Address: 0x20a904, Func Offset: 0x44
}

// xSndSceneInit__Fv
// Start address: 0x20a910
void xSndSceneInit()
{
	uint32 i;
	// Line 150, Address: 0x20a910, Func Offset: 0
	// Line 152, Address: 0x20a914, Func Offset: 0x4
	// Line 150, Address: 0x20a918, Func Offset: 0x8
	// Line 152, Address: 0x20a91c, Func Offset: 0xc
	// Line 157, Address: 0x20a924, Func Offset: 0x14
	// Line 154, Address: 0x20a928, Func Offset: 0x18
	// Line 157, Address: 0x20a92c, Func Offset: 0x1c
	// Line 154, Address: 0x20a930, Func Offset: 0x20
	// Line 157, Address: 0x20a938, Func Offset: 0x28
	// Line 152, Address: 0x20a93c, Func Offset: 0x2c
	// Line 154, Address: 0x20a940, Func Offset: 0x30
	// Line 158, Address: 0x20a948, Func Offset: 0x38
	// Line 154, Address: 0x20a94c, Func Offset: 0x3c
	// Line 158, Address: 0x20a950, Func Offset: 0x40
	// Line 155, Address: 0x20a954, Func Offset: 0x44
	// Line 156, Address: 0x20a960, Func Offset: 0x50
	// Line 157, Address: 0x20a96c, Func Offset: 0x5c
	// Line 158, Address: 0x20a978, Func Offset: 0x68
	// Line 159, Address: 0x20a980, Func Offset: 0x70
	// Line 160, Address: 0x20a998, Func Offset: 0x88
	// Line 161, Address: 0x20a9a8, Func Offset: 0x98
	// Line 160, Address: 0x20a9b0, Func Offset: 0xa0
	// Line 161, Address: 0x20a9b8, Func Offset: 0xa8
	// Line 162, Address: 0x20a9c8, Func Offset: 0xb8
	// Line 163, Address: 0x20a9dc, Func Offset: 0xcc
	// Func End, Address: 0x20a9e4, Func Offset: 0xd4
}

// xSndInit__Fv
// Start address: 0x20a9f0
void xSndInit()
{
	uint32 i;
	xSndVoiceInfo* voice;
	// Line 100, Address: 0x20a9f0, Func Offset: 0
	// Line 105, Address: 0x20a9f8, Func Offset: 0x8
	// Line 107, Address: 0x20aa00, Func Offset: 0x10
	// Line 108, Address: 0x20aa04, Func Offset: 0x14
	// Line 107, Address: 0x20aa08, Func Offset: 0x18
	// Line 109, Address: 0x20aa10, Func Offset: 0x20
	// Line 110, Address: 0x20aa14, Func Offset: 0x24
	// Line 111, Address: 0x20aa18, Func Offset: 0x28
	// Line 110, Address: 0x20aa1c, Func Offset: 0x2c
	// Line 111, Address: 0x20aa20, Func Offset: 0x30
	// Line 110, Address: 0x20aa24, Func Offset: 0x34
	// Line 111, Address: 0x20aa58, Func Offset: 0x68
	// Line 114, Address: 0x20aa60, Func Offset: 0x70
	// Line 119, Address: 0x20aa68, Func Offset: 0x78
	// Line 122, Address: 0x20aa70, Func Offset: 0x80
	// Line 119, Address: 0x20aa74, Func Offset: 0x84
	// Line 122, Address: 0x20aa78, Func Offset: 0x88
	// Line 135, Address: 0x20aa84, Func Offset: 0x94
	// Line 119, Address: 0x20aa88, Func Offset: 0x98
	// Line 135, Address: 0x20aaa0, Func Offset: 0xb0
	// Line 138, Address: 0x20aaa4, Func Offset: 0xb4
	// Line 141, Address: 0x20aaac, Func Offset: 0xbc
	// Line 143, Address: 0x20aae8, Func Offset: 0xf8
	// Line 144, Address: 0x20aaec, Func Offset: 0xfc
	// Func End, Address: 0x20aaf8, Func Offset: 0x108
}

