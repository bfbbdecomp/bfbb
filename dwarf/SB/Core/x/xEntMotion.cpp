typedef struct RpGeometry;
typedef struct xEnt;
typedef struct xEntAsset;
typedef struct RxPipelineNodeParam;
typedef enum _tagPadState;
typedef struct xMat4x3;
typedef struct RpClump;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct xEntMotion;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xScene;
typedef struct RxPipelineNodeTopSortData;
typedef struct xMovePointAsset;
typedef struct rxHeapBlockHeader;
typedef struct xMovePoint;
typedef struct xEntFrame;
typedef struct xAnimSingle;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntPenData;
typedef struct xAnimState;
typedef struct xEntMotionOrbitData;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct xEntMPData;
typedef struct xEntMotionPenData;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct xLinkAsset;
typedef struct _tagPadAnalog;
typedef struct xMemPool;
typedef struct _tagiPad;
typedef struct xCollis;
typedef struct xVec3;
typedef struct xModelInstance;
typedef struct xShadowSimplePoly;
typedef struct RwSurfaceProperties;
typedef struct xEntMotionMechData;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct RpAtomic;
typedef struct RwRaster;
typedef struct xEntMechData;
typedef enum RxClusterValidityReq;
typedef struct xEntMotionSplineData;
typedef struct xModelPool;
typedef struct xBaseAsset;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct _tagxPad;
typedef struct xCoef3;
typedef struct xShadowSimpleCache;
typedef enum RxNodeDefEditable;
typedef struct xEntCollis;
typedef enum RxClusterValid;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct _tagxRumble;
typedef struct RpLight;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xVec2;
typedef struct xBox;
typedef struct xFFX;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RxClusterDefinition;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef enum _tagRumbleType;
typedef struct xMat3x3;
typedef struct xEntOrbitData;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xSpline3;
typedef struct analog_data;
typedef struct xEntMotionAsset;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxNodeDefinition;
typedef struct xCoef;
typedef struct xEntSplineData;
typedef struct _class_0;
typedef struct tri_data;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xEntMotionERData;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_2)(RpClump*, void*);
typedef uint32(*type_3)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_7)(xAnimPlay*, xAnimState*);
typedef int32(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(RxNodeDefinition*);
typedef uint32(*type_10)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_11)(RxPipelineNode*);
typedef xBase*(*type_12)(uint32);
typedef void(*type_13)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_14)(RxPipelineNode*);
typedef int8*(*type_16)(xBase*);
typedef int8*(*type_17)(uint32);
typedef RpAtomic*(*type_19)(RpAtomic*);
typedef void(*type_20)(xEnt*, xScene*, float32);
typedef void(*type_22)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_23)(xEnt*, xVec3*);
typedef void(*type_24)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_25)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_26)(xEnt*);
typedef uint32(*type_29)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_30)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_31)();
typedef void(*type_34)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_40)(xMemPool*, void*);
typedef void(*type_45)(RwResEntry*);
typedef RwObjectHasFrame*(*type_52)(RwObjectHasFrame*);

typedef int8 type_1[16];
typedef int8 type_4[16];
typedef xVec3 type_15[3];
typedef uint16 type_18[3];
typedef float32 type_21[16];
typedef uint8 type_27[22];
typedef uint8 type_28[22];
typedef RwTexCoords* type_32[8];
typedef xVec3 type_33[4];
typedef uint32 type_35[4];
typedef float32 type_36[22];
typedef float32 type_37[22];
typedef uint8 type_38[2];
typedef xCollis type_39[18];
typedef int8 type_41[32];
typedef float32 type_42[4];
typedef analog_data type_43[2];
typedef int8 type_44[32];
typedef float32 type_46[2];
typedef uint8 type_47[2];
typedef uint8 type_48[3];
typedef RxCluster type_49[1];
typedef float32 type_50[4];
typedef float32 type_51[2];
typedef uint8 type_53[2];
typedef xAnimMultiFileEntry type_54[1];

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
	type_32 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_20 update;
	type_20 endUpdate;
	type_23 bupdate;
	type_24 move;
	type_26 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_30 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_2 callback;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
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
	type_13 BeforeAnimMatrices;
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

struct xEntMotion
{
	xEntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_10 Callback;
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
	type_12 resolvID;
	type_16 base2Name;
	type_17 id2Name;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
	float32 zoneRadius;
	float32 arenaRadius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_35 pad;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_38 pad;
	float32 delay;
	xSpline3* spl;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_46 BilinearLerp;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
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
	type_7 BeforeEnter;
	type_34 StateCallback;
	type_13 BeforeAnimMatrices;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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

struct xEntMPData
{
	float32 curdist;
	float32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_47 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_50 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_40 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct _tagiPad
{
	int32 port;
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
		_class_1 tuv;
		tri_data tri;
	};
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	_class_0 anim_coll;
};

struct xShadowSimplePoly
{
	type_15 vert;
	xVec3 norm;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xEntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpTriangle
{
	type_18 vertIndex;
	int16 matIndex;
};

struct rxReq
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
	type_19 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	type_21 matrix;
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
	type_53 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_45 destroyNotify;
};

struct _tagxPad
{
	type_27 value;
	type_28 last_value;
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	type_36 up_tmr;
	type_37 down_tmr;
	type_43 analog;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_33 corner;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_39 colls;
	type_22 post;
	type_29 depenq;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_25 Conditional;
	type_25 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
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
	type_48 pad;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xSurface
{
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xFFX
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_54 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_41 name;
	type_44 mask;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_51 radius;
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

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
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

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xEntMotionAsset
{
	uint8 type;
	uint8 use_banking;
	uint16 flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
};

struct RxNodeMethods
{
	type_6 nodeBody;
	type_8 nodeInit;
	type_9 nodeTerm;
	type_11 pipelineNodeInit;
	type_14 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_3 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct xCoef
{
	type_42 a;
};

struct xEntSplineData
{
	int32 unknown;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_52 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
};

xEntMotion** dbg_xems;
uint16 dbg_num;
uint16 dbg_num_allocd;
int16 dbg_idx;
type_1 buffer;
type_4 buffer;
_tagxPad* gDebugPad;
xScene* g_xSceneCur;
uint32 gActiveHeap;
type_31 xEntMotionDebugCB;

void xEntMotionDebugIPad(xEntMotion* xem);
void xEntMotionDebugDraw(xEntMotion* xem);
void xEntMotionDebugWrite(xEntMotion* xem);
void xEntMotionDebugCB();
void xEntMotionDebugExit();
void xEntMotionDebugInit(uint16 num_xems);
void xEntMotionTranslate(xEntMotion* motion, xVec3* dpos, xMat4x3* dmat);
void xEntMechReverse(xEntMotion* motion);
void xEntMechForward(xEntMotion* motion);
uint32 xEntRotMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
uint32 xEntSldMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntMechMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame);
void xEntPenMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntMPMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame);
void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev);
void xEntOrbitMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntERMove(xEntMotion* motion, float32 dt, xEntFrame* frame);
void xEntMotionMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame);
void xEntMotionReset(xEntMotion* motion, xScene* sc);
void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset);

// xEntMotionDebugIPad__FP10xEntMotion
// Start address: 0x1d6e60
void xEntMotionDebugIPad(xEntMotion* xem)
{
}

// xEntMotionDebugDraw__FPC10xEntMotion
// Start address: 0x1d6f70
void xEntMotionDebugDraw(xEntMotion* xem)
{
	xMovePoint* xmp;
	uint16 idx;
	xMovePoint* omp;
	uint16 jdx;
}

// xEntMotionDebugWrite__FPC10xEntMotion
// Start address: 0x1d70e0
void xEntMotionDebugWrite(xEntMotion* xem)
{
	int8* gps;
}

// xEntMotionDebugCB__Fv
// Start address: 0x1d7bf0
void xEntMotionDebugCB()
{
	xEntMotion* xem;
}

// xEntMotionDebugExit__Fv
// Start address: 0x1d7c50
void xEntMotionDebugExit()
{
}

// xEntMotionDebugInit__FUs
// Start address: 0x1d7c70
void xEntMotionDebugInit(uint16 num_xems)
{
}

// xEntMotionTranslate__FP10xEntMotionPC5xVec3P7xMat4x3
// Start address: 0x1d7cd0
void xEntMotionTranslate(xEntMotion* motion, xVec3* dpos, xMat4x3* dmat)
{
}

// xEntMechReverse__FP10xEntMotion
// Start address: 0x1d83d0
void xEntMechReverse(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
}

// xEntMechForward__FP10xEntMotion
// Start address: 0x1d84f0
void xEntMechForward(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
}

// xEntRotMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8610
uint32 xEntRotMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
	float32 tmradj;
	float32 rem;
	float32 speed;
	xEnt* ownr;
	xEntAsset* easst;
}

// xEntSldMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8900
uint32 xEntSldMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
	float32 tmradj;
	float32 rem;
	float32 speed;
}

// xEntMechMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8b40
void xEntMechMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
}

// xEntPenMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8e70
void xEntPenMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	xEntPenData* pen;
	xEntMotionPenData* aspen;
	float32 th;
	float32 dangle;
	float32 newt;
	float32 rem;
	xMat4x3 delta_mat;
}

// xEntMPMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8fb0
void xEntMPMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
	xEntMPData* mp;
	float32 newdist;
	xMovePoint* prev;
	float32 qdot;
	xVec3 tgt;
	xVec3 dir;
	xVec3 bank;
	xQuat quat;
	xQuat qold;
	xMat3x3 tmpmat;
	float32 u;
	xVec3 gravity;
}

// xEntMPGetNext__FP10xEntMotionP10xMovePointP6xScene
// Start address: 0x1d9950
void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev)
{
	xEntMPData* mp;
	xVec3 tempdir;
	xMat3x3 mat;
}

// xEntOrbitMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9ab0
void xEntOrbitMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	float32 th;
	float32 u;
	float32 newt;
	float32 rem;
}

// xEntERMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9c00
void xEntERMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	float32 newt;
	float32 rem;
	float32 scale;
	float32 rem;
	float32 scale;
}

// xEntMotionMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9eb0
void xEntMotionMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
}

// xEntMotionReset__FP10xEntMotionP6xScene
// Start address: 0x1d9fa0
void xEntMotionReset(xEntMotion* motion, xScene* sc)
{
	xEntMotionPenData* aspen;
	xMat3x3 pshrot;
	xMat3x3* modlrot;
	xVec3* modlpos;
	xEnt* ownr;
	xEntMotionMechData* mkasst;
	xEntMechData* mech;
	float32 drot;
}

// xEntMotionInit__FP10xEntMotionP4xEntP15xEntMotionAsset
// Start address: 0x1da4f0
void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset)
{
	xEntMotionMechData* mkasst;
}

