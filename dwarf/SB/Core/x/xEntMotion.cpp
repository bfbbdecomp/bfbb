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
	RwTexCoords* texCoords[8];
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
	RpClump*(*callback)(RpClump*, void*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint32 pad[4];
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 pad[2];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint8 pad[2];
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
	float32 param[4];
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
	void(*InitCB)(xMemPool*, void*);
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
	xVec3 vert[3];
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
	uint16 vertIndex[3];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
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
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	xAnimMultiFileEntry Files[1];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	float32 a[4];
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
int8 buffer[16];
int8 buffer[16];
_tagxPad* gDebugPad;
xScene* g_xSceneCur;
uint32 gActiveHeap;
void(*xEntMotionDebugCB)();

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
	// Line 1480, Address: 0x1d6e60, Func Offset: 0
	// Line 1481, Address: 0x1d6e74, Func Offset: 0x14
	// Line 1482, Address: 0x1d6e84, Func Offset: 0x24
	// Line 1483, Address: 0x1d6e88, Func Offset: 0x28
	// Line 1482, Address: 0x1d6e8c, Func Offset: 0x2c
	// Line 1483, Address: 0x1d6e94, Func Offset: 0x34
	// Line 1484, Address: 0x1d6ea4, Func Offset: 0x44
	// Line 1487, Address: 0x1d6ea8, Func Offset: 0x48
	// Line 1488, Address: 0x1d6eb8, Func Offset: 0x58
	// Line 1489, Address: 0x1d6ec4, Func Offset: 0x64
	// Line 1490, Address: 0x1d6ed0, Func Offset: 0x70
	// Line 1492, Address: 0x1d6edc, Func Offset: 0x7c
	// Line 1493, Address: 0x1d6ee0, Func Offset: 0x80
	// Line 1494, Address: 0x1d6ef8, Func Offset: 0x98
	// Line 1495, Address: 0x1d6f00, Func Offset: 0xa0
	// Line 1497, Address: 0x1d6f08, Func Offset: 0xa8
	// Line 1498, Address: 0x1d6f14, Func Offset: 0xb4
	// Line 1499, Address: 0x1d6f18, Func Offset: 0xb8
	// Line 1500, Address: 0x1d6f30, Func Offset: 0xd0
	// Line 1501, Address: 0x1d6f40, Func Offset: 0xe0
	// Line 1502, Address: 0x1d6f48, Func Offset: 0xe8
	// Line 1503, Address: 0x1d6f50, Func Offset: 0xf0
	// Line 1505, Address: 0x1d6f5c, Func Offset: 0xfc
	// Line 1506, Address: 0x1d6f60, Func Offset: 0x100
	// Func End, Address: 0x1d6f70, Func Offset: 0x110
}

// xEntMotionDebugDraw__FPC10xEntMotion
// Start address: 0x1d6f70
void xEntMotionDebugDraw(xEntMotion* xem)
{
	xMovePoint* xmp;
	uint16 idx;
	xMovePoint* omp;
	uint16 jdx;
	// Line 1411, Address: 0x1d6f70, Func Offset: 0
	// Line 1416, Address: 0x1d6f94, Func Offset: 0x24
	// Line 1426, Address: 0x1d6fc0, Func Offset: 0x50
	// Line 1445, Address: 0x1d6fc8, Func Offset: 0x58
	// Line 1446, Address: 0x1d6fcc, Func Offset: 0x5c
	// Line 1447, Address: 0x1d6fd4, Func Offset: 0x64
	// Line 1448, Address: 0x1d6ff0, Func Offset: 0x80
	// Line 1449, Address: 0x1d6ff4, Func Offset: 0x84
	// Line 1448, Address: 0x1d6ff8, Func Offset: 0x88
	// Line 1449, Address: 0x1d7000, Func Offset: 0x90
	// Line 1450, Address: 0x1d7008, Func Offset: 0x98
	// Line 1452, Address: 0x1d7018, Func Offset: 0xa8
	// Line 1454, Address: 0x1d7030, Func Offset: 0xc0
	// Line 1455, Address: 0x1d7048, Func Offset: 0xd8
	// Line 1456, Address: 0x1d7068, Func Offset: 0xf8
	// Line 1459, Address: 0x1d7084, Func Offset: 0x114
	// Line 1460, Address: 0x1d7088, Func Offset: 0x118
	// Line 1462, Address: 0x1d70a0, Func Offset: 0x130
	// Line 1477, Address: 0x1d70b0, Func Offset: 0x140
	// Func End, Address: 0x1d70d8, Func Offset: 0x168
}

// xEntMotionDebugWrite__FPC10xEntMotion
// Start address: 0x1d70e0
void xEntMotionDebugWrite(xEntMotion* xem)
{
	int8* gps;
	// Line 1216, Address: 0x1d70e0, Func Offset: 0
	// Line 1219, Address: 0x1d70f8, Func Offset: 0x18
	// Line 1220, Address: 0x1d7124, Func Offset: 0x44
	// Line 1221, Address: 0x1d7128, Func Offset: 0x48
	// Line 1222, Address: 0x1d712c, Func Offset: 0x4c
	// Line 1223, Address: 0x1d7134, Func Offset: 0x54
	// Line 1224, Address: 0x1d7138, Func Offset: 0x58
	// Line 1225, Address: 0x1d713c, Func Offset: 0x5c
	// Line 1226, Address: 0x1d7144, Func Offset: 0x64
	// Line 1227, Address: 0x1d7148, Func Offset: 0x68
	// Line 1228, Address: 0x1d714c, Func Offset: 0x6c
	// Line 1229, Address: 0x1d7154, Func Offset: 0x74
	// Line 1230, Address: 0x1d7158, Func Offset: 0x78
	// Line 1231, Address: 0x1d715c, Func Offset: 0x7c
	// Line 1232, Address: 0x1d7164, Func Offset: 0x84
	// Line 1233, Address: 0x1d7168, Func Offset: 0x88
	// Line 1234, Address: 0x1d716c, Func Offset: 0x8c
	// Line 1235, Address: 0x1d7174, Func Offset: 0x94
	// Line 1236, Address: 0x1d7178, Func Offset: 0x98
	// Line 1237, Address: 0x1d717c, Func Offset: 0x9c
	// Line 1238, Address: 0x1d7184, Func Offset: 0xa4
	// Line 1239, Address: 0x1d7188, Func Offset: 0xa8
	// Line 1241, Address: 0x1d7190, Func Offset: 0xb0
	// Line 1242, Address: 0x1d71a0, Func Offset: 0xc0
	// Line 1245, Address: 0x1d71d0, Func Offset: 0xf0
	// Line 1253, Address: 0x1d7204, Func Offset: 0x124
	// Line 1254, Address: 0x1d723c, Func Offset: 0x15c
	// Line 1255, Address: 0x1d7264, Func Offset: 0x184
	// Line 1256, Address: 0x1d7268, Func Offset: 0x188
	// Line 1257, Address: 0x1d72a0, Func Offset: 0x1c0
	// Line 1258, Address: 0x1d72dc, Func Offset: 0x1fc
	// Line 1263, Address: 0x1d7314, Func Offset: 0x234
	// Line 1264, Address: 0x1d732c, Func Offset: 0x24c
	// Line 1265, Address: 0x1d7344, Func Offset: 0x264
	// Line 1266, Address: 0x1d735c, Func Offset: 0x27c
	// Line 1267, Address: 0x1d7374, Func Offset: 0x294
	// Line 1268, Address: 0x1d738c, Func Offset: 0x2ac
	// Line 1269, Address: 0x1d7394, Func Offset: 0x2b4
	// Line 1270, Address: 0x1d7398, Func Offset: 0x2b8
	// Line 1271, Address: 0x1d73d0, Func Offset: 0x2f0
	// Line 1272, Address: 0x1d73e8, Func Offset: 0x308
	// Line 1273, Address: 0x1d7400, Func Offset: 0x320
	// Line 1274, Address: 0x1d7418, Func Offset: 0x338
	// Line 1275, Address: 0x1d7430, Func Offset: 0x350
	// Line 1279, Address: 0x1d743c, Func Offset: 0x35c
	// Line 1282, Address: 0x1d7460, Func Offset: 0x380
	// Line 1283, Address: 0x1d7474, Func Offset: 0x394
	// Line 1286, Address: 0x1d7498, Func Offset: 0x3b8
	// Line 1288, Address: 0x1d74a8, Func Offset: 0x3c8
	// Line 1289, Address: 0x1d74c0, Func Offset: 0x3e0
	// Line 1290, Address: 0x1d74d8, Func Offset: 0x3f8
	// Line 1292, Address: 0x1d74e0, Func Offset: 0x400
	// Line 1294, Address: 0x1d7520, Func Offset: 0x440
	// Line 1295, Address: 0x1d7524, Func Offset: 0x444
	// Line 1296, Address: 0x1d752c, Func Offset: 0x44c
	// Line 1297, Address: 0x1d7530, Func Offset: 0x450
	// Line 1298, Address: 0x1d7534, Func Offset: 0x454
	// Line 1299, Address: 0x1d753c, Func Offset: 0x45c
	// Line 1300, Address: 0x1d7540, Func Offset: 0x460
	// Line 1301, Address: 0x1d7544, Func Offset: 0x464
	// Line 1302, Address: 0x1d754c, Func Offset: 0x46c
	// Line 1303, Address: 0x1d7550, Func Offset: 0x470
	// Line 1304, Address: 0x1d7554, Func Offset: 0x474
	// Line 1305, Address: 0x1d755c, Func Offset: 0x47c
	// Line 1306, Address: 0x1d7560, Func Offset: 0x480
	// Line 1309, Address: 0x1d7568, Func Offset: 0x488
	// Line 1310, Address: 0x1d7578, Func Offset: 0x498
	// Line 1313, Address: 0x1d75ac, Func Offset: 0x4cc
	// Line 1314, Address: 0x1d75bc, Func Offset: 0x4dc
	// Line 1315, Address: 0x1d75d4, Func Offset: 0x4f4
	// Line 1316, Address: 0x1d75d8, Func Offset: 0x4f8
	// Line 1317, Address: 0x1d75e4, Func Offset: 0x504
	// Line 1320, Address: 0x1d7624, Func Offset: 0x544
	// Line 1321, Address: 0x1d7634, Func Offset: 0x554
	// Line 1322, Address: 0x1d764c, Func Offset: 0x56c
	// Line 1323, Address: 0x1d7650, Func Offset: 0x570
	// Line 1324, Address: 0x1d765c, Func Offset: 0x57c
	// Line 1325, Address: 0x1d7684, Func Offset: 0x5a4
	// Line 1326, Address: 0x1d7688, Func Offset: 0x5a8
	// Line 1328, Address: 0x1d769c, Func Offset: 0x5bc
	// Line 1329, Address: 0x1d76a8, Func Offset: 0x5c8
	// Line 1331, Address: 0x1d76ac, Func Offset: 0x5cc
	// Line 1332, Address: 0x1d76b4, Func Offset: 0x5d4
	// Line 1333, Address: 0x1d76b8, Func Offset: 0x5d8
	// Line 1334, Address: 0x1d76bc, Func Offset: 0x5dc
	// Line 1335, Address: 0x1d76c4, Func Offset: 0x5e4
	// Line 1336, Address: 0x1d76c8, Func Offset: 0x5e8
	// Line 1337, Address: 0x1d76cc, Func Offset: 0x5ec
	// Line 1338, Address: 0x1d76d4, Func Offset: 0x5f4
	// Line 1339, Address: 0x1d76d8, Func Offset: 0x5f8
	// Line 1341, Address: 0x1d76ec, Func Offset: 0x60c
	// Line 1342, Address: 0x1d76f8, Func Offset: 0x618
	// Line 1344, Address: 0x1d76fc, Func Offset: 0x61c
	// Line 1345, Address: 0x1d7704, Func Offset: 0x624
	// Line 1346, Address: 0x1d7708, Func Offset: 0x628
	// Line 1347, Address: 0x1d770c, Func Offset: 0x62c
	// Line 1348, Address: 0x1d7714, Func Offset: 0x634
	// Line 1349, Address: 0x1d7718, Func Offset: 0x638
	// Line 1350, Address: 0x1d771c, Func Offset: 0x63c
	// Line 1351, Address: 0x1d7724, Func Offset: 0x644
	// Line 1352, Address: 0x1d7728, Func Offset: 0x648
	// Line 1353, Address: 0x1d772c, Func Offset: 0x64c
	// Line 1354, Address: 0x1d7734, Func Offset: 0x654
	// Line 1355, Address: 0x1d7738, Func Offset: 0x658
	// Line 1358, Address: 0x1d7740, Func Offset: 0x660
	// Line 1359, Address: 0x1d7754, Func Offset: 0x674
	// Line 1360, Address: 0x1d7768, Func Offset: 0x688
	// Line 1364, Address: 0x1d77a0, Func Offset: 0x6c0
	// Line 1365, Address: 0x1d77bc, Func Offset: 0x6dc
	// Line 1366, Address: 0x1d77d8, Func Offset: 0x6f8
	// Line 1367, Address: 0x1d77f0, Func Offset: 0x710
	// Line 1368, Address: 0x1d780c, Func Offset: 0x72c
	// Line 1369, Address: 0x1d7828, Func Offset: 0x748
	// Line 1370, Address: 0x1d7840, Func Offset: 0x760
	// Line 1371, Address: 0x1d7858, Func Offset: 0x778
	// Line 1374, Address: 0x1d7890, Func Offset: 0x7b0
	// Line 1377, Address: 0x1d78c8, Func Offset: 0x7e8
	// Line 1381, Address: 0x1d7904, Func Offset: 0x824
	// Line 1382, Address: 0x1d7914, Func Offset: 0x834
	// Line 1386, Address: 0x1d794c, Func Offset: 0x86c
	// Line 1387, Address: 0x1d7968, Func Offset: 0x888
	// Line 1388, Address: 0x1d7984, Func Offset: 0x8a4
	// Line 1389, Address: 0x1d79c8, Func Offset: 0x8e8
	// Line 1390, Address: 0x1d79e4, Func Offset: 0x904
	// Line 1391, Address: 0x1d7a00, Func Offset: 0x920
	// Line 1392, Address: 0x1d7a18, Func Offset: 0x938
	// Line 1393, Address: 0x1d7a30, Func Offset: 0x950
	// Line 1394, Address: 0x1d7a74, Func Offset: 0x994
	// Line 1396, Address: 0x1d7ab8, Func Offset: 0x9d8
	// Line 1398, Address: 0x1d7ac0, Func Offset: 0x9e0
	// Line 1401, Address: 0x1d7af8, Func Offset: 0xa18
	// Line 1402, Address: 0x1d7b14, Func Offset: 0xa34
	// Line 1403, Address: 0x1d7b30, Func Offset: 0xa50
	// Line 1404, Address: 0x1d7b74, Func Offset: 0xa94
	// Line 1405, Address: 0x1d7bb8, Func Offset: 0xad8
	// Line 1408, Address: 0x1d7bd0, Func Offset: 0xaf0
	// Func End, Address: 0x1d7bec, Func Offset: 0xb0c
}

// xEntMotionDebugCB__Fv
// Start address: 0x1d7bf0
void xEntMotionDebugCB()
{
	xEntMotion* xem;
	// Line 1191, Address: 0x1d7bf0, Func Offset: 0
	// Line 1192, Address: 0x1d7bf4, Func Offset: 0x4
	// Line 1191, Address: 0x1d7bf8, Func Offset: 0x8
	// Line 1192, Address: 0x1d7c04, Func Offset: 0x14
	// Line 1197, Address: 0x1d7c0c, Func Offset: 0x1c
	// Line 1203, Address: 0x1d7c18, Func Offset: 0x28
	// Line 1206, Address: 0x1d7c28, Func Offset: 0x38
	// Line 1209, Address: 0x1d7c30, Func Offset: 0x40
	// Line 1212, Address: 0x1d7c38, Func Offset: 0x48
	// Line 1213, Address: 0x1d7c40, Func Offset: 0x50
	// Func End, Address: 0x1d7c50, Func Offset: 0x60
}

// xEntMotionDebugExit__Fv
// Start address: 0x1d7c50
void xEntMotionDebugExit()
{
	// Line 1179, Address: 0x1d7c50, Func Offset: 0
	// Line 1176, Address: 0x1d7c54, Func Offset: 0x4
	// Line 1177, Address: 0x1d7c58, Func Offset: 0x8
	// Line 1179, Address: 0x1d7c5c, Func Offset: 0xc
	// Line 1180, Address: 0x1d7c60, Func Offset: 0x10
	// Func End, Address: 0x1d7c68, Func Offset: 0x18
}

// xEntMotionDebugInit__FUs
// Start address: 0x1d7c70
void xEntMotionDebugInit(uint16 num_xems)
{
	// Line 1162, Address: 0x1d7c70, Func Offset: 0
	// Line 1163, Address: 0x1d7c74, Func Offset: 0x4
	// Line 1162, Address: 0x1d7c78, Func Offset: 0x8
	// Line 1163, Address: 0x1d7c80, Func Offset: 0x10
	// Line 1166, Address: 0x1d7c88, Func Offset: 0x18
	// Line 1168, Address: 0x1d7c9c, Func Offset: 0x2c
	// Line 1170, Address: 0x1d7cb4, Func Offset: 0x44
	// Line 1168, Address: 0x1d7cb8, Func Offset: 0x48
	// Line 1171, Address: 0x1d7cbc, Func Offset: 0x4c
	// Line 1172, Address: 0x1d7cc0, Func Offset: 0x50
	// Func End, Address: 0x1d7cd0, Func Offset: 0x60
}

// xEntMotionTranslate__FP10xEntMotionPC5xVec3P7xMat4x3
// Start address: 0x1d7cd0
void xEntMotionTranslate(xEntMotion* motion, xVec3* dpos, xMat4x3* dmat)
{
	// Line 1105, Address: 0x1d7cd0, Func Offset: 0
	// Line 1108, Address: 0x1d7cd4, Func Offset: 0x4
	// Line 1109, Address: 0x1d7ce0, Func Offset: 0x10
	// Line 1110, Address: 0x1d7cec, Func Offset: 0x1c
	// Line 1109, Address: 0x1d7cf0, Func Offset: 0x20
	// Line 1110, Address: 0x1d7cf4, Func Offset: 0x24
	// Line 1109, Address: 0x1d7d10, Func Offset: 0x40
	// Line 1110, Address: 0x1d7d14, Func Offset: 0x44
	// Line 1111, Address: 0x1d7d88, Func Offset: 0xb8
	// Line 1110, Address: 0x1d7d94, Func Offset: 0xc4
	// Line 1111, Address: 0x1d7d98, Func Offset: 0xc8
	// Line 1110, Address: 0x1d7dac, Func Offset: 0xdc
	// Line 1111, Address: 0x1d7db0, Func Offset: 0xe0
	// Line 1113, Address: 0x1d7e1c, Func Offset: 0x14c
	// Line 1114, Address: 0x1d7e38, Func Offset: 0x168
	// Line 1113, Address: 0x1d7e3c, Func Offset: 0x16c
	// Line 1114, Address: 0x1d7e40, Func Offset: 0x170
	// Line 1113, Address: 0x1d7e5c, Func Offset: 0x18c
	// Line 1114, Address: 0x1d7e60, Func Offset: 0x190
	// Line 1115, Address: 0x1d7ed4, Func Offset: 0x204
	// Line 1114, Address: 0x1d7ee0, Func Offset: 0x210
	// Line 1115, Address: 0x1d7ee4, Func Offset: 0x214
	// Line 1114, Address: 0x1d7ef8, Func Offset: 0x228
	// Line 1115, Address: 0x1d7efc, Func Offset: 0x22c
	// Line 1117, Address: 0x1d7f68, Func Offset: 0x298
	// Line 1120, Address: 0x1d7f7c, Func Offset: 0x2ac
	// Line 1121, Address: 0x1d7f88, Func Offset: 0x2b8
	// Line 1120, Address: 0x1d7f8c, Func Offset: 0x2bc
	// Line 1121, Address: 0x1d7f90, Func Offset: 0x2c0
	// Line 1120, Address: 0x1d7fac, Func Offset: 0x2dc
	// Line 1121, Address: 0x1d7fb0, Func Offset: 0x2e0
	// Line 1122, Address: 0x1d8020, Func Offset: 0x350
	// Line 1124, Address: 0x1d802c, Func Offset: 0x35c
	// Line 1125, Address: 0x1d8048, Func Offset: 0x378
	// Line 1124, Address: 0x1d804c, Func Offset: 0x37c
	// Line 1125, Address: 0x1d8050, Func Offset: 0x380
	// Line 1124, Address: 0x1d806c, Func Offset: 0x39c
	// Line 1125, Address: 0x1d8070, Func Offset: 0x3a0
	// Line 1126, Address: 0x1d80e4, Func Offset: 0x414
	// Line 1125, Address: 0x1d80f0, Func Offset: 0x420
	// Line 1126, Address: 0x1d80f4, Func Offset: 0x424
	// Line 1125, Address: 0x1d8108, Func Offset: 0x438
	// Line 1126, Address: 0x1d810c, Func Offset: 0x43c
	// Line 1127, Address: 0x1d8180, Func Offset: 0x4b0
	// Line 1126, Address: 0x1d818c, Func Offset: 0x4bc
	// Line 1127, Address: 0x1d8190, Func Offset: 0x4c0
	// Line 1126, Address: 0x1d81a4, Func Offset: 0x4d4
	// Line 1127, Address: 0x1d81a8, Func Offset: 0x4d8
	// Line 1130, Address: 0x1d81e4, Func Offset: 0x514
	// Line 1133, Address: 0x1d81f4, Func Offset: 0x524
	// Line 1134, Address: 0x1d81fc, Func Offset: 0x52c
	// Line 1135, Address: 0x1d822c, Func Offset: 0x55c
	// Line 1137, Address: 0x1d8258, Func Offset: 0x588
	// Line 1138, Address: 0x1d826c, Func Offset: 0x59c
	// Line 1139, Address: 0x1d829c, Func Offset: 0x5cc
	// Line 1141, Address: 0x1d82c8, Func Offset: 0x5f8
	// Line 1144, Address: 0x1d82dc, Func Offset: 0x60c
	// Line 1145, Address: 0x1d82e4, Func Offset: 0x614
	// Line 1146, Address: 0x1d8314, Func Offset: 0x644
	// Line 1148, Address: 0x1d8340, Func Offset: 0x670
	// Line 1149, Address: 0x1d8354, Func Offset: 0x684
	// Line 1150, Address: 0x1d8384, Func Offset: 0x6b4
	// Line 1152, Address: 0x1d83b4, Func Offset: 0x6e4
	// Line 1153, Address: 0x1d83b8, Func Offset: 0x6e8
	// Func End, Address: 0x1d83c4, Func Offset: 0x6f4
}

// xEntMechReverse__FP10xEntMotion
// Start address: 0x1d83d0
void xEntMechReverse(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	// Line 1059, Address: 0x1d83d0, Func Offset: 0
	// Line 1049, Address: 0x1d83d4, Func Offset: 0x4
	// Line 1050, Address: 0x1d83d8, Func Offset: 0x8
	// Line 1059, Address: 0x1d83dc, Func Offset: 0xc
	// Line 1061, Address: 0x1d83e8, Func Offset: 0x18
	// Line 1062, Address: 0x1d83f0, Func Offset: 0x20
	// Line 1065, Address: 0x1d83f4, Func Offset: 0x24
	// Line 1062, Address: 0x1d83f8, Func Offset: 0x28
	// Line 1063, Address: 0x1d8400, Func Offset: 0x30
	// Line 1064, Address: 0x1d840c, Func Offset: 0x3c
	// Line 1067, Address: 0x1d841c, Func Offset: 0x4c
	// Line 1068, Address: 0x1d8434, Func Offset: 0x64
	// Line 1071, Address: 0x1d8438, Func Offset: 0x68
	// Line 1068, Address: 0x1d843c, Func Offset: 0x6c
	// Line 1069, Address: 0x1d8444, Func Offset: 0x74
	// Line 1070, Address: 0x1d8450, Func Offset: 0x80
	// Line 1073, Address: 0x1d8460, Func Offset: 0x90
	// Line 1076, Address: 0x1d8474, Func Offset: 0xa4
	// Line 1079, Address: 0x1d847c, Func Offset: 0xac
	// Line 1082, Address: 0x1d8484, Func Offset: 0xb4
	// Line 1085, Address: 0x1d848c, Func Offset: 0xbc
	// Line 1086, Address: 0x1d8498, Func Offset: 0xc8
	// Line 1087, Address: 0x1d84a4, Func Offset: 0xd4
	// Line 1088, Address: 0x1d84b0, Func Offset: 0xe0
	// Line 1089, Address: 0x1d84b8, Func Offset: 0xe8
	// Line 1093, Address: 0x1d84d0, Func Offset: 0x100
	// Line 1094, Address: 0x1d84d4, Func Offset: 0x104
	// Line 1095, Address: 0x1d84e0, Func Offset: 0x110
	// Line 1100, Address: 0x1d84e4, Func Offset: 0x114
	// Line 1101, Address: 0x1d84e8, Func Offset: 0x118
	// Func End, Address: 0x1d84f0, Func Offset: 0x120
}

// xEntMechForward__FP10xEntMotion
// Start address: 0x1d84f0
void xEntMechForward(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	// Line 998, Address: 0x1d84f0, Func Offset: 0
	// Line 988, Address: 0x1d84f4, Func Offset: 0x4
	// Line 989, Address: 0x1d84f8, Func Offset: 0x8
	// Line 998, Address: 0x1d84fc, Func Offset: 0xc
	// Line 1000, Address: 0x1d8508, Func Offset: 0x18
	// Line 1003, Address: 0x1d8510, Func Offset: 0x20
	// Line 1006, Address: 0x1d851c, Func Offset: 0x2c
	// Line 1009, Address: 0x1d8524, Func Offset: 0x34
	// Line 1010, Address: 0x1d852c, Func Offset: 0x3c
	// Line 1011, Address: 0x1d8538, Func Offset: 0x48
	// Line 1012, Address: 0x1d8544, Func Offset: 0x54
	// Line 1015, Address: 0x1d8554, Func Offset: 0x64
	// Line 1016, Address: 0x1d856c, Func Offset: 0x7c
	// Line 1017, Address: 0x1d8578, Func Offset: 0x88
	// Line 1018, Address: 0x1d8584, Func Offset: 0x94
	// Line 1021, Address: 0x1d8594, Func Offset: 0xa4
	// Line 1024, Address: 0x1d85ac, Func Offset: 0xbc
	// Line 1027, Address: 0x1d85b4, Func Offset: 0xc4
	// Line 1028, Address: 0x1d85c0, Func Offset: 0xd0
	// Line 1029, Address: 0x1d85cc, Func Offset: 0xdc
	// Line 1030, Address: 0x1d85d8, Func Offset: 0xe8
	// Line 1031, Address: 0x1d85e0, Func Offset: 0xf0
	// Line 1036, Address: 0x1d85f8, Func Offset: 0x108
	// Line 1037, Address: 0x1d8600, Func Offset: 0x110
	// Line 1040, Address: 0x1d8604, Func Offset: 0x114
	// Line 1041, Address: 0x1d8608, Func Offset: 0x118
	// Func End, Address: 0x1d8610, Func Offset: 0x120
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
	// Line 912, Address: 0x1d8610, Func Offset: 0
	// Line 918, Address: 0x1d8614, Func Offset: 0x4
	// Line 912, Address: 0x1d8618, Func Offset: 0x8
	// Line 918, Address: 0x1d861c, Func Offset: 0xc
	// Line 912, Address: 0x1d8620, Func Offset: 0x10
	// Line 918, Address: 0x1d8628, Func Offset: 0x18
	// Line 912, Address: 0x1d862c, Func Offset: 0x1c
	// Line 914, Address: 0x1d8634, Func Offset: 0x24
	// Line 913, Address: 0x1d863c, Func Offset: 0x2c
	// Line 914, Address: 0x1d8640, Func Offset: 0x30
	// Line 918, Address: 0x1d8644, Func Offset: 0x34
	// Line 914, Address: 0x1d8648, Func Offset: 0x38
	// Line 918, Address: 0x1d864c, Func Offset: 0x3c
	// Line 922, Address: 0x1d8650, Func Offset: 0x40
	// Line 923, Address: 0x1d8664, Func Offset: 0x54
	// Line 927, Address: 0x1d8688, Func Offset: 0x78
	// Line 929, Address: 0x1d8690, Func Offset: 0x80
	// Line 933, Address: 0x1d8698, Func Offset: 0x88
	// Line 934, Address: 0x1d86a4, Func Offset: 0x94
	// Line 939, Address: 0x1d86a8, Func Offset: 0x98
	// Line 941, Address: 0x1d86b4, Func Offset: 0xa4
	// Line 945, Address: 0x1d86dc, Func Offset: 0xcc
	// Line 946, Address: 0x1d8700, Func Offset: 0xf0
	// Line 947, Address: 0x1d8714, Func Offset: 0x104
	// Line 948, Address: 0x1d8750, Func Offset: 0x140
	// Line 949, Address: 0x1d8764, Func Offset: 0x154
	// Line 952, Address: 0x1d8770, Func Offset: 0x160
	// Line 953, Address: 0x1d877c, Func Offset: 0x16c
	// Line 954, Address: 0x1d87a0, Func Offset: 0x190
	// Line 955, Address: 0x1d87b4, Func Offset: 0x1a4
	// Line 956, Address: 0x1d87f0, Func Offset: 0x1e0
	// Line 957, Address: 0x1d8804, Func Offset: 0x1f4
	// Line 958, Address: 0x1d8810, Func Offset: 0x200
	// Line 960, Address: 0x1d8814, Func Offset: 0x204
	// Line 962, Address: 0x1d8818, Func Offset: 0x208
	// Line 963, Address: 0x1d8830, Func Offset: 0x220
	// Line 962, Address: 0x1d8834, Func Offset: 0x224
	// Line 966, Address: 0x1d8838, Func Offset: 0x228
	// Line 970, Address: 0x1d884c, Func Offset: 0x23c
	// Line 971, Address: 0x1d8850, Func Offset: 0x240
	// Line 972, Address: 0x1d8858, Func Offset: 0x248
	// Line 973, Address: 0x1d885c, Func Offset: 0x24c
	// Line 974, Address: 0x1d8884, Func Offset: 0x274
	// Line 975, Address: 0x1d88ac, Func Offset: 0x29c
	// Line 976, Address: 0x1d88d4, Func Offset: 0x2c4
	// Line 978, Address: 0x1d88d8, Func Offset: 0x2c8
	// Line 979, Address: 0x1d88dc, Func Offset: 0x2cc
	// Line 978, Address: 0x1d88e0, Func Offset: 0x2d0
	// Line 980, Address: 0x1d88e8, Func Offset: 0x2d8
	// Func End, Address: 0x1d8900, Func Offset: 0x2f0
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
	// Line 852, Address: 0x1d8900, Func Offset: 0
	// Line 839, Address: 0x1d8904, Func Offset: 0x4
	// Line 852, Address: 0x1d8908, Func Offset: 0x8
	// Line 838, Address: 0x1d890c, Func Offset: 0xc
	// Line 839, Address: 0x1d8910, Func Offset: 0x10
	// Line 852, Address: 0x1d8914, Func Offset: 0x14
	// Line 839, Address: 0x1d891c, Func Offset: 0x1c
	// Line 852, Address: 0x1d8920, Func Offset: 0x20
	// Line 856, Address: 0x1d8924, Func Offset: 0x24
	// Line 857, Address: 0x1d8934, Func Offset: 0x34
	// Line 858, Address: 0x1d8940, Func Offset: 0x40
	// Line 859, Address: 0x1d896c, Func Offset: 0x6c
	// Line 860, Address: 0x1d8978, Func Offset: 0x78
	// Line 866, Address: 0x1d89a8, Func Offset: 0xa8
	// Line 869, Address: 0x1d89b0, Func Offset: 0xb0
	// Line 870, Address: 0x1d89c0, Func Offset: 0xc0
	// Line 871, Address: 0x1d89e4, Func Offset: 0xe4
	// Line 872, Address: 0x1d89f8, Func Offset: 0xf8
	// Line 873, Address: 0x1d8a30, Func Offset: 0x130
	// Line 874, Address: 0x1d8a44, Func Offset: 0x144
	// Line 877, Address: 0x1d8a50, Func Offset: 0x150
	// Line 878, Address: 0x1d8a5c, Func Offset: 0x15c
	// Line 879, Address: 0x1d8a80, Func Offset: 0x180
	// Line 880, Address: 0x1d8a94, Func Offset: 0x194
	// Line 881, Address: 0x1d8ad0, Func Offset: 0x1d0
	// Line 882, Address: 0x1d8ae4, Func Offset: 0x1e4
	// Line 883, Address: 0x1d8af0, Func Offset: 0x1f0
	// Line 885, Address: 0x1d8af4, Func Offset: 0x1f4
	// Line 904, Address: 0x1d8af8, Func Offset: 0x1f8
	// Line 903, Address: 0x1d8afc, Func Offset: 0x1fc
	// Line 905, Address: 0x1d8b24, Func Offset: 0x224
	// Line 907, Address: 0x1d8b28, Func Offset: 0x228
	// Line 909, Address: 0x1d8b30, Func Offset: 0x230
	// Func End, Address: 0x1d8b38, Func Offset: 0x238
}

// xEntMechMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8b40
void xEntMechMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	uint32 last;
	// Line 732, Address: 0x1d8b40, Func Offset: 0
	// Line 733, Address: 0x1d8b5c, Func Offset: 0x1c
	// Line 732, Address: 0x1d8b60, Func Offset: 0x20
	// Line 735, Address: 0x1d8b68, Func Offset: 0x28
	// Line 734, Address: 0x1d8b6c, Func Offset: 0x2c
	// Line 737, Address: 0x1d8b74, Func Offset: 0x34
	// Line 739, Address: 0x1d8b7c, Func Offset: 0x3c
	// Line 740, Address: 0x1d8b84, Func Offset: 0x44
	// Line 741, Address: 0x1d8b8c, Func Offset: 0x4c
	// Line 742, Address: 0x1d8b9c, Func Offset: 0x5c
	// Line 744, Address: 0x1d8ba8, Func Offset: 0x68
	// Line 745, Address: 0x1d8bb0, Func Offset: 0x70
	// Line 747, Address: 0x1d8bc0, Func Offset: 0x80
	// Line 748, Address: 0x1d8bd8, Func Offset: 0x98
	// Line 749, Address: 0x1d8bdc, Func Offset: 0x9c
	// Line 750, Address: 0x1d8be8, Func Offset: 0xa8
	// Line 751, Address: 0x1d8bf0, Func Offset: 0xb0
	// Line 753, Address: 0x1d8c04, Func Offset: 0xc4
	// Line 754, Address: 0x1d8c10, Func Offset: 0xd0
	// Line 758, Address: 0x1d8c14, Func Offset: 0xd4
	// Line 759, Address: 0x1d8c2c, Func Offset: 0xec
	// Line 760, Address: 0x1d8c38, Func Offset: 0xf8
	// Line 761, Address: 0x1d8c40, Func Offset: 0x100
	// Line 763, Address: 0x1d8c50, Func Offset: 0x110
	// Line 764, Address: 0x1d8c68, Func Offset: 0x128
	// Line 765, Address: 0x1d8c6c, Func Offset: 0x12c
	// Line 766, Address: 0x1d8c78, Func Offset: 0x138
	// Line 767, Address: 0x1d8c80, Func Offset: 0x140
	// Line 769, Address: 0x1d8c94, Func Offset: 0x154
	// Line 774, Address: 0x1d8cb8, Func Offset: 0x178
	// Line 775, Address: 0x1d8ccc, Func Offset: 0x18c
	// Line 776, Address: 0x1d8ce4, Func Offset: 0x1a4
	// Line 780, Address: 0x1d8d00, Func Offset: 0x1c0
	// Line 781, Address: 0x1d8d04, Func Offset: 0x1c4
	// Line 782, Address: 0x1d8d10, Func Offset: 0x1d0
	// Line 783, Address: 0x1d8d14, Func Offset: 0x1d4
	// Line 787, Address: 0x1d8d18, Func Offset: 0x1d8
	// Line 788, Address: 0x1d8d2c, Func Offset: 0x1ec
	// Line 789, Address: 0x1d8d34, Func Offset: 0x1f4
	// Line 790, Address: 0x1d8d44, Func Offset: 0x204
	// Line 792, Address: 0x1d8d50, Func Offset: 0x210
	// Line 793, Address: 0x1d8d58, Func Offset: 0x218
	// Line 795, Address: 0x1d8d68, Func Offset: 0x228
	// Line 799, Address: 0x1d8d80, Func Offset: 0x240
	// Line 800, Address: 0x1d8d88, Func Offset: 0x248
	// Line 804, Address: 0x1d8d8c, Func Offset: 0x24c
	// Line 805, Address: 0x1d8da4, Func Offset: 0x264
	// Line 806, Address: 0x1d8db0, Func Offset: 0x270
	// Line 807, Address: 0x1d8db8, Func Offset: 0x278
	// Line 809, Address: 0x1d8dc8, Func Offset: 0x288
	// Line 813, Address: 0x1d8de0, Func Offset: 0x2a0
	// Line 814, Address: 0x1d8de8, Func Offset: 0x2a8
	// Line 818, Address: 0x1d8dec, Func Offset: 0x2ac
	// Line 819, Address: 0x1d8e04, Func Offset: 0x2c4
	// Line 820, Address: 0x1d8e18, Func Offset: 0x2d8
	// Line 824, Address: 0x1d8e20, Func Offset: 0x2e0
	// Line 825, Address: 0x1d8e24, Func Offset: 0x2e4
	// Line 824, Address: 0x1d8e28, Func Offset: 0x2e8
	// Line 829, Address: 0x1d8e30, Func Offset: 0x2f0
	// Line 831, Address: 0x1d8e38, Func Offset: 0x2f8
	// Line 832, Address: 0x1d8e40, Func Offset: 0x300
	// Line 833, Address: 0x1d8e4c, Func Offset: 0x30c
	// Line 834, Address: 0x1d8e50, Func Offset: 0x310
	// Func End, Address: 0x1d8e70, Func Offset: 0x330
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
	// Line 680, Address: 0x1d8e70, Func Offset: 0
	// Line 690, Address: 0x1d8e74, Func Offset: 0x4
	// Line 680, Address: 0x1d8e78, Func Offset: 0x8
	// Line 690, Address: 0x1d8e7c, Func Offset: 0xc
	// Line 680, Address: 0x1d8e80, Func Offset: 0x10
	// Line 681, Address: 0x1d8e9c, Func Offset: 0x2c
	// Line 680, Address: 0x1d8ea0, Func Offset: 0x30
	// Line 682, Address: 0x1d8eac, Func Offset: 0x3c
	// Line 690, Address: 0x1d8eb0, Func Offset: 0x40
	// Line 697, Address: 0x1d8eb4, Func Offset: 0x44
	// Line 682, Address: 0x1d8eb8, Func Offset: 0x48
	// Line 690, Address: 0x1d8ebc, Func Offset: 0x4c
	// Line 697, Address: 0x1d8ec0, Func Offset: 0x50
	// Line 700, Address: 0x1d8eec, Func Offset: 0x7c
	// Line 701, Address: 0x1d8ef4, Func Offset: 0x84
	// Line 697, Address: 0x1d8ef8, Func Offset: 0x88
	// Line 700, Address: 0x1d8f04, Func Offset: 0x94
	// Line 701, Address: 0x1d8f08, Func Offset: 0x98
	// Line 702, Address: 0x1d8f14, Func Offset: 0xa4
	// Line 705, Address: 0x1d8f18, Func Offset: 0xa8
	// Line 707, Address: 0x1d8f1c, Func Offset: 0xac
	// Line 708, Address: 0x1d8f3c, Func Offset: 0xcc
	// Line 709, Address: 0x1d8f48, Func Offset: 0xd8
	// Line 710, Address: 0x1d8f4c, Func Offset: 0xdc
	// Line 725, Address: 0x1d8f58, Func Offset: 0xe8
	// Line 726, Address: 0x1d8f68, Func Offset: 0xf8
	// Line 727, Address: 0x1d8f78, Func Offset: 0x108
	// Line 729, Address: 0x1d8f80, Func Offset: 0x110
	// Func End, Address: 0x1d8fa8, Func Offset: 0x138
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
	// Line 501, Address: 0x1d8fb0, Func Offset: 0
	// Line 502, Address: 0x1d8fd8, Func Offset: 0x28
	// Line 501, Address: 0x1d8fdc, Func Offset: 0x2c
	// Line 505, Address: 0x1d8fe0, Func Offset: 0x30
	// Line 508, Address: 0x1d8ff8, Func Offset: 0x48
	// Line 511, Address: 0x1d9000, Func Offset: 0x50
	// Line 514, Address: 0x1d9018, Func Offset: 0x68
	// Line 522, Address: 0x1d9020, Func Offset: 0x70
	// Line 527, Address: 0x1d9028, Func Offset: 0x78
	// Line 530, Address: 0x1d9030, Func Offset: 0x80
	// Line 527, Address: 0x1d9034, Func Offset: 0x84
	// Line 530, Address: 0x1d903c, Func Offset: 0x8c
	// Line 533, Address: 0x1d9048, Func Offset: 0x98
	// Line 534, Address: 0x1d9060, Func Offset: 0xb0
	// Line 535, Address: 0x1d9078, Func Offset: 0xc8
	// Line 538, Address: 0x1d9090, Func Offset: 0xe0
	// Line 539, Address: 0x1d90a4, Func Offset: 0xf4
	// Line 543, Address: 0x1d90b0, Func Offset: 0x100
	// Line 544, Address: 0x1d90b4, Func Offset: 0x104
	// Line 545, Address: 0x1d90b8, Func Offset: 0x108
	// Line 550, Address: 0x1d90c8, Func Offset: 0x118
	// Line 553, Address: 0x1d90d4, Func Offset: 0x124
	// Line 554, Address: 0x1d90dc, Func Offset: 0x12c
	// Line 557, Address: 0x1d90e0, Func Offset: 0x130
	// Line 563, Address: 0x1d90e4, Func Offset: 0x134
	// Line 565, Address: 0x1d90f0, Func Offset: 0x140
	// Line 566, Address: 0x1d90f8, Func Offset: 0x148
	// Line 569, Address: 0x1d910c, Func Offset: 0x15c
	// Line 572, Address: 0x1d9120, Func Offset: 0x170
	// Line 573, Address: 0x1d9134, Func Offset: 0x184
	// Line 578, Address: 0x1d9148, Func Offset: 0x198
	// Line 580, Address: 0x1d917c, Func Offset: 0x1cc
	// Line 581, Address: 0x1d91a8, Func Offset: 0x1f8
	// Line 583, Address: 0x1d91c0, Func Offset: 0x210
	// Line 586, Address: 0x1d91d4, Func Offset: 0x224
	// Line 587, Address: 0x1d91e8, Func Offset: 0x238
	// Line 589, Address: 0x1d91fc, Func Offset: 0x24c
	// Line 593, Address: 0x1d9200, Func Offset: 0x250
	// Line 601, Address: 0x1d9214, Func Offset: 0x264
	// Line 603, Address: 0x1d9218, Func Offset: 0x268
	// Line 601, Address: 0x1d921c, Func Offset: 0x26c
	// Line 603, Address: 0x1d9220, Func Offset: 0x270
	// Line 601, Address: 0x1d9224, Func Offset: 0x274
	// Line 603, Address: 0x1d923c, Func Offset: 0x28c
	// Line 604, Address: 0x1d9244, Func Offset: 0x294
	// Line 609, Address: 0x1d9250, Func Offset: 0x2a0
	// Line 613, Address: 0x1d9278, Func Offset: 0x2c8
	// Line 614, Address: 0x1d92a0, Func Offset: 0x2f0
	// Line 609, Address: 0x1d92a4, Func Offset: 0x2f4
	// Line 617, Address: 0x1d92a8, Func Offset: 0x2f8
	// Line 609, Address: 0x1d92ac, Func Offset: 0x2fc
	// Line 617, Address: 0x1d92b0, Func Offset: 0x300
	// Line 613, Address: 0x1d92b4, Func Offset: 0x304
	// Line 617, Address: 0x1d92c0, Func Offset: 0x310
	// Line 614, Address: 0x1d92c4, Func Offset: 0x314
	// Line 622, Address: 0x1d92c8, Func Offset: 0x318
	// Line 613, Address: 0x1d92cc, Func Offset: 0x31c
	// Line 622, Address: 0x1d92d0, Func Offset: 0x320
	// Line 613, Address: 0x1d92d4, Func Offset: 0x324
	// Line 614, Address: 0x1d93b0, Func Offset: 0x400
	// Line 613, Address: 0x1d93bc, Func Offset: 0x40c
	// Line 614, Address: 0x1d93c8, Func Offset: 0x418
	// Line 613, Address: 0x1d93dc, Func Offset: 0x42c
	// Line 614, Address: 0x1d93e8, Func Offset: 0x438
	// Line 617, Address: 0x1d93f8, Func Offset: 0x448
	// Line 614, Address: 0x1d9404, Func Offset: 0x454
	// Line 617, Address: 0x1d9414, Func Offset: 0x464
	// Line 614, Address: 0x1d941c, Func Offset: 0x46c
	// Line 617, Address: 0x1d9424, Func Offset: 0x474
	// Line 621, Address: 0x1d9494, Func Offset: 0x4e4
	// Line 617, Address: 0x1d9498, Func Offset: 0x4e8
	// Line 621, Address: 0x1d949c, Func Offset: 0x4ec
	// Line 617, Address: 0x1d94a4, Func Offset: 0x4f4
	// Line 621, Address: 0x1d94a8, Func Offset: 0x4f8
	// Line 617, Address: 0x1d94ac, Func Offset: 0x4fc
	// Line 618, Address: 0x1d94b4, Func Offset: 0x504
	// Line 617, Address: 0x1d94b8, Func Offset: 0x508
	// Line 621, Address: 0x1d94bc, Func Offset: 0x50c
	// Line 618, Address: 0x1d94c0, Func Offset: 0x510
	// Line 621, Address: 0x1d94c4, Func Offset: 0x514
	// Line 618, Address: 0x1d94c8, Func Offset: 0x518
	// Line 617, Address: 0x1d94cc, Func Offset: 0x51c
	// Line 618, Address: 0x1d94d0, Func Offset: 0x520
	// Line 622, Address: 0x1d9508, Func Offset: 0x558
	// Line 623, Address: 0x1d9588, Func Offset: 0x5d8
	// Line 622, Address: 0x1d9594, Func Offset: 0x5e4
	// Line 623, Address: 0x1d95a0, Func Offset: 0x5f0
	// Line 624, Address: 0x1d95ac, Func Offset: 0x5fc
	// Line 630, Address: 0x1d95b0, Func Offset: 0x600
	// Line 631, Address: 0x1d95bc, Func Offset: 0x60c
	// Line 632, Address: 0x1d95c8, Func Offset: 0x618
	// Line 633, Address: 0x1d95f8, Func Offset: 0x648
	// Line 632, Address: 0x1d9600, Func Offset: 0x650
	// Line 633, Address: 0x1d9604, Func Offset: 0x654
	// Line 634, Address: 0x1d9610, Func Offset: 0x660
	// Line 635, Address: 0x1d962c, Func Offset: 0x67c
	// Line 637, Address: 0x1d9630, Func Offset: 0x680
	// Line 638, Address: 0x1d9650, Func Offset: 0x6a0
	// Line 639, Address: 0x1d965c, Func Offset: 0x6ac
	// Line 638, Address: 0x1d9660, Func Offset: 0x6b0
	// Line 639, Address: 0x1d9664, Func Offset: 0x6b4
	// Line 638, Address: 0x1d9670, Func Offset: 0x6c0
	// Line 639, Address: 0x1d9674, Func Offset: 0x6c4
	// Line 640, Address: 0x1d9684, Func Offset: 0x6d4
	// Line 641, Address: 0x1d9688, Func Offset: 0x6d8
	// Line 640, Address: 0x1d9694, Func Offset: 0x6e4
	// Line 641, Address: 0x1d969c, Func Offset: 0x6ec
	// Line 642, Address: 0x1d96f8, Func Offset: 0x748
	// Line 644, Address: 0x1d9700, Func Offset: 0x750
	// Line 643, Address: 0x1d9704, Func Offset: 0x754
	// Line 644, Address: 0x1d970c, Func Offset: 0x75c
	// Line 645, Address: 0x1d9718, Func Offset: 0x768
	// Line 646, Address: 0x1d9724, Func Offset: 0x774
	// Line 649, Address: 0x1d9730, Func Offset: 0x780
	// Line 651, Address: 0x1d9738, Func Offset: 0x788
	// Line 654, Address: 0x1d979c, Func Offset: 0x7ec
	// Line 659, Address: 0x1d9884, Func Offset: 0x8d4
	// Line 660, Address: 0x1d98d8, Func Offset: 0x928
	// Line 661, Address: 0x1d98e4, Func Offset: 0x934
	// Line 666, Address: 0x1d98f0, Func Offset: 0x940
	// Line 667, Address: 0x1d9900, Func Offset: 0x950
	// Line 668, Address: 0x1d9910, Func Offset: 0x960
	// Line 673, Address: 0x1d9920, Func Offset: 0x970
	// Func End, Address: 0x1d9944, Func Offset: 0x994
}

// xEntMPGetNext__FP10xEntMotionP10xMovePointP6xScene
// Start address: 0x1d9950
void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev)
{
	xEntMPData* mp;
	xVec3 tempdir;
	xMat3x3 mat;
	// Line 455, Address: 0x1d9950, Func Offset: 0
	// Line 461, Address: 0x1d9958, Func Offset: 0x8
	// Line 455, Address: 0x1d995c, Func Offset: 0xc
	// Line 458, Address: 0x1d9968, Func Offset: 0x18
	// Line 456, Address: 0x1d996c, Func Offset: 0x1c
	// Line 459, Address: 0x1d9970, Func Offset: 0x20
	// Line 461, Address: 0x1d9974, Func Offset: 0x24
	// Line 462, Address: 0x1d9988, Func Offset: 0x38
	// Line 464, Address: 0x1d9994, Func Offset: 0x44
	// Line 465, Address: 0x1d999c, Func Offset: 0x4c
	// Line 466, Address: 0x1d99a4, Func Offset: 0x54
	// Line 467, Address: 0x1d99a8, Func Offset: 0x58
	// Line 469, Address: 0x1d99b0, Func Offset: 0x60
	// Line 470, Address: 0x1d99b8, Func Offset: 0x68
	// Line 473, Address: 0x1d99c0, Func Offset: 0x70
	// Line 474, Address: 0x1d99d4, Func Offset: 0x84
	// Line 483, Address: 0x1d99e8, Func Offset: 0x98
	// Line 485, Address: 0x1d99ec, Func Offset: 0x9c
	// Line 483, Address: 0x1d99f0, Func Offset: 0xa0
	// Line 485, Address: 0x1d99f4, Func Offset: 0xa4
	// Line 483, Address: 0x1d99f8, Func Offset: 0xa8
	// Line 485, Address: 0x1d9a10, Func Offset: 0xc0
	// Line 486, Address: 0x1d9a18, Func Offset: 0xc8
	// Line 487, Address: 0x1d9a24, Func Offset: 0xd4
	// Line 486, Address: 0x1d9a28, Func Offset: 0xd8
	// Line 491, Address: 0x1d9a30, Func Offset: 0xe0
	// Line 492, Address: 0x1d9a38, Func Offset: 0xe8
	// Line 493, Address: 0x1d9a40, Func Offset: 0xf0
	// Line 494, Address: 0x1d9a50, Func Offset: 0x100
	// Line 495, Address: 0x1d9a60, Func Offset: 0x110
	// Line 496, Address: 0x1d9a70, Func Offset: 0x120
	// Line 497, Address: 0x1d9a94, Func Offset: 0x144
	// Line 498, Address: 0x1d9a98, Func Offset: 0x148
	// Func End, Address: 0x1d9aac, Func Offset: 0x15c
}

// xEntOrbitMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9ab0
void xEntOrbitMove(xEntMotion* motion, float32 dt, xEntFrame* frame)
{
	float32 th;
	float32 u;
	float32 newt;
	float32 rem;
	// Line 419, Address: 0x1d9ab0, Func Offset: 0
	// Line 424, Address: 0x1d9ab4, Func Offset: 0x4
	// Line 419, Address: 0x1d9ab8, Func Offset: 0x8
	// Line 424, Address: 0x1d9abc, Func Offset: 0xc
	// Line 419, Address: 0x1d9ac0, Func Offset: 0x10
	// Line 426, Address: 0x1d9ae0, Func Offset: 0x30
	// Line 424, Address: 0x1d9ae4, Func Offset: 0x34
	// Line 426, Address: 0x1d9aec, Func Offset: 0x3c
	// Line 427, Address: 0x1d9af4, Func Offset: 0x44
	// Line 429, Address: 0x1d9afc, Func Offset: 0x4c
	// Line 427, Address: 0x1d9b04, Func Offset: 0x54
	// Line 430, Address: 0x1d9b08, Func Offset: 0x58
	// Line 429, Address: 0x1d9b10, Func Offset: 0x60
	// Line 430, Address: 0x1d9b14, Func Offset: 0x64
	// Line 431, Address: 0x1d9b20, Func Offset: 0x70
	// Line 432, Address: 0x1d9b24, Func Offset: 0x74
	// Line 434, Address: 0x1d9b28, Func Offset: 0x78
	// Line 436, Address: 0x1d9b2c, Func Offset: 0x7c
	// Line 437, Address: 0x1d9b4c, Func Offset: 0x9c
	// Line 438, Address: 0x1d9b78, Func Offset: 0xc8
	// Line 439, Address: 0x1d9b80, Func Offset: 0xd0
	// Line 441, Address: 0x1d9ba4, Func Offset: 0xf4
	// Line 442, Address: 0x1d9bcc, Func Offset: 0x11c
	// Line 444, Address: 0x1d9bd0, Func Offset: 0x120
	// Line 451, Address: 0x1d9bd8, Func Offset: 0x128
	// Func End, Address: 0x1d9bf8, Func Offset: 0x148
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
	// Line 373, Address: 0x1d9c00, Func Offset: 0
	// Line 374, Address: 0x1d9c08, Func Offset: 0x8
	// Line 373, Address: 0x1d9c10, Func Offset: 0x10
	// Line 374, Address: 0x1d9c14, Func Offset: 0x14
	// Line 375, Address: 0x1d9c20, Func Offset: 0x20
	// Line 376, Address: 0x1d9c24, Func Offset: 0x24
	// Line 375, Address: 0x1d9c28, Func Offset: 0x28
	// Line 378, Address: 0x1d9c30, Func Offset: 0x30
	// Line 379, Address: 0x1d9c50, Func Offset: 0x50
	// Line 381, Address: 0x1d9c58, Func Offset: 0x58
	// Line 383, Address: 0x1d9c68, Func Offset: 0x68
	// Line 381, Address: 0x1d9c6c, Func Offset: 0x6c
	// Line 383, Address: 0x1d9c7c, Func Offset: 0x7c
	// Line 385, Address: 0x1d9c84, Func Offset: 0x84
	// Line 386, Address: 0x1d9cb0, Func Offset: 0xb0
	// Line 387, Address: 0x1d9cb8, Func Offset: 0xb8
	// Line 388, Address: 0x1d9ce8, Func Offset: 0xe8
	// Line 389, Address: 0x1d9d0c, Func Offset: 0x10c
	// Line 390, Address: 0x1d9d10, Func Offset: 0x110
	// Line 394, Address: 0x1d9d18, Func Offset: 0x118
	// Line 395, Address: 0x1d9d58, Func Offset: 0x158
	// Line 397, Address: 0x1d9d5c, Func Offset: 0x15c
	// Line 398, Address: 0x1d9da4, Func Offset: 0x1a4
	// Line 400, Address: 0x1d9db0, Func Offset: 0x1b0
	// Line 402, Address: 0x1d9dc0, Func Offset: 0x1c0
	// Line 400, Address: 0x1d9dc4, Func Offset: 0x1c4
	// Line 402, Address: 0x1d9dd4, Func Offset: 0x1d4
	// Line 404, Address: 0x1d9ddc, Func Offset: 0x1dc
	// Line 405, Address: 0x1d9e08, Func Offset: 0x208
	// Line 406, Address: 0x1d9e10, Func Offset: 0x210
	// Line 407, Address: 0x1d9e40, Func Offset: 0x240
	// Line 408, Address: 0x1d9e64, Func Offset: 0x264
	// Line 409, Address: 0x1d9e68, Func Offset: 0x268
	// Line 413, Address: 0x1d9e70, Func Offset: 0x270
	// Line 414, Address: 0x1d9e98, Func Offset: 0x298
	// Line 416, Address: 0x1d9ea0, Func Offset: 0x2a0
	// Func End, Address: 0x1d9ea8, Func Offset: 0x2a8
}

// xEntMotionMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9eb0
void xEntMotionMove(xEntMotion* motion, xScene* sc, float32 dt, xEntFrame* frame)
{
	// Line 333, Address: 0x1d9eb0, Func Offset: 0
	// Line 337, Address: 0x1d9ec4, Func Offset: 0x14
	// Line 341, Address: 0x1d9ed8, Func Offset: 0x28
	// Line 342, Address: 0x1d9ee0, Func Offset: 0x30
	// Line 344, Address: 0x1d9ee8, Func Offset: 0x38
	// Line 345, Address: 0x1d9efc, Func Offset: 0x4c
	// Line 347, Address: 0x1d9f04, Func Offset: 0x54
	// Line 348, Address: 0x1d9f1c, Func Offset: 0x6c
	// Line 350, Address: 0x1d9f24, Func Offset: 0x74
	// Line 351, Address: 0x1d9f3c, Func Offset: 0x8c
	// Line 353, Address: 0x1d9f44, Func Offset: 0x94
	// Line 354, Address: 0x1d9f5c, Func Offset: 0xac
	// Line 356, Address: 0x1d9f64, Func Offset: 0xb4
	// Line 358, Address: 0x1d9f70, Func Offset: 0xc0
	// Line 359, Address: 0x1d9f74, Func Offset: 0xc4
	// Line 361, Address: 0x1d9f78, Func Offset: 0xc8
	// Line 362, Address: 0x1d9f84, Func Offset: 0xd4
	// Func End, Address: 0x1d9f9c, Func Offset: 0xec
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
	// Line 169, Address: 0x1d9fa0, Func Offset: 0
	// Line 172, Address: 0x1d9fcc, Func Offset: 0x2c
	// Line 173, Address: 0x1d9fd8, Func Offset: 0x38
	// Line 175, Address: 0x1d9fe0, Func Offset: 0x40
	// Line 178, Address: 0x1d9fe8, Func Offset: 0x48
	// Line 179, Address: 0x1d9ffc, Func Offset: 0x5c
	// Line 180, Address: 0x1da010, Func Offset: 0x70
	// Line 181, Address: 0x1da030, Func Offset: 0x90
	// Line 184, Address: 0x1da040, Func Offset: 0xa0
	// Line 186, Address: 0x1da068, Func Offset: 0xc8
	// Line 187, Address: 0x1da07c, Func Offset: 0xdc
	// Line 189, Address: 0x1da09c, Func Offset: 0xfc
	// Line 190, Address: 0x1da0b4, Func Offset: 0x114
	// Line 200, Address: 0x1da0c0, Func Offset: 0x120
	// Line 190, Address: 0x1da0c4, Func Offset: 0x124
	// Line 200, Address: 0x1da0cc, Func Offset: 0x12c
	// Line 207, Address: 0x1da0d4, Func Offset: 0x134
	// Line 214, Address: 0x1da0f0, Func Offset: 0x150
	// Line 220, Address: 0x1da0f4, Func Offset: 0x154
	// Line 210, Address: 0x1da0f8, Func Offset: 0x158
	// Line 220, Address: 0x1da0fc, Func Offset: 0x15c
	// Line 214, Address: 0x1da100, Func Offset: 0x160
	// Line 220, Address: 0x1da104, Func Offset: 0x164
	// Line 214, Address: 0x1da108, Func Offset: 0x168
	// Line 220, Address: 0x1da154, Func Offset: 0x1b4
	// Line 223, Address: 0x1da15c, Func Offset: 0x1bc
	// Line 232, Address: 0x1da160, Func Offset: 0x1c0
	// Line 223, Address: 0x1da164, Func Offset: 0x1c4
	// Line 232, Address: 0x1da168, Func Offset: 0x1c8
	// Line 223, Address: 0x1da16c, Func Offset: 0x1cc
	// Line 232, Address: 0x1da170, Func Offset: 0x1d0
	// Line 223, Address: 0x1da174, Func Offset: 0x1d4
	// Line 230, Address: 0x1da19c, Func Offset: 0x1fc
	// Line 232, Address: 0x1da1bc, Func Offset: 0x21c
	// Line 234, Address: 0x1da1c4, Func Offset: 0x224
	// Line 235, Address: 0x1da1d8, Func Offset: 0x238
	// Line 236, Address: 0x1da1ec, Func Offset: 0x24c
	// Line 237, Address: 0x1da200, Func Offset: 0x260
	// Line 241, Address: 0x1da220, Func Offset: 0x280
	// Line 243, Address: 0x1da234, Func Offset: 0x294
	// Line 244, Address: 0x1da238, Func Offset: 0x298
	// Line 242, Address: 0x1da23c, Func Offset: 0x29c
	// Line 246, Address: 0x1da240, Func Offset: 0x2a0
	// Line 250, Address: 0x1da248, Func Offset: 0x2a8
	// Line 254, Address: 0x1da258, Func Offset: 0x2b8
	// Line 258, Address: 0x1da260, Func Offset: 0x2c0
	// Line 259, Address: 0x1da280, Func Offset: 0x2e0
	// Line 260, Address: 0x1da288, Func Offset: 0x2e8
	// Line 261, Address: 0x1da2a4, Func Offset: 0x304
	// Line 262, Address: 0x1da2b8, Func Offset: 0x318
	// Line 263, Address: 0x1da2d4, Func Offset: 0x334
	// Line 264, Address: 0x1da2e0, Func Offset: 0x340
	// Line 290, Address: 0x1da300, Func Offset: 0x360
	// Line 285, Address: 0x1da304, Func Offset: 0x364
	// Line 290, Address: 0x1da30c, Func Offset: 0x36c
	// Line 285, Address: 0x1da310, Func Offset: 0x370
	// Line 288, Address: 0x1da330, Func Offset: 0x390
	// Line 290, Address: 0x1da360, Func Offset: 0x3c0
	// Line 293, Address: 0x1da384, Func Offset: 0x3e4
	// Line 294, Address: 0x1da394, Func Offset: 0x3f4
	// Line 296, Address: 0x1da3a8, Func Offset: 0x408
	// Line 298, Address: 0x1da3b0, Func Offset: 0x410
	// Line 299, Address: 0x1da3b8, Func Offset: 0x418
	// Line 301, Address: 0x1da3cc, Func Offset: 0x42c
	// Line 302, Address: 0x1da3d4, Func Offset: 0x434
	// Line 303, Address: 0x1da3e0, Func Offset: 0x440
	// Line 304, Address: 0x1da3ec, Func Offset: 0x44c
	// Line 305, Address: 0x1da3f0, Func Offset: 0x450
	// Line 307, Address: 0x1da3f4, Func Offset: 0x454
	// Line 305, Address: 0x1da408, Func Offset: 0x468
	// Line 307, Address: 0x1da410, Func Offset: 0x470
	// Line 310, Address: 0x1da414, Func Offset: 0x474
	// Line 307, Address: 0x1da418, Func Offset: 0x478
	// Line 310, Address: 0x1da428, Func Offset: 0x488
	// Line 312, Address: 0x1da434, Func Offset: 0x494
	// Line 315, Address: 0x1da45c, Func Offset: 0x4bc
	// Line 316, Address: 0x1da46c, Func Offset: 0x4cc
	// Line 320, Address: 0x1da480, Func Offset: 0x4e0
	// Line 325, Address: 0x1da4a0, Func Offset: 0x500
	// Line 326, Address: 0x1da4a8, Func Offset: 0x508
	// Line 328, Address: 0x1da4b0, Func Offset: 0x510
	// Line 329, Address: 0x1da4b4, Func Offset: 0x514
	// Line 330, Address: 0x1da4b8, Func Offset: 0x518
	// Func End, Address: 0x1da4e4, Func Offset: 0x544
}

// xEntMotionInit__FP10xEntMotionP4xEntP15xEntMotionAsset
// Start address: 0x1da4f0
void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset)
{
	xEntMotionMechData* mkasst;
	// Line 69, Address: 0x1da4f0, Func Offset: 0
	// Line 70, Address: 0x1da4f4, Func Offset: 0x4
	// Line 71, Address: 0x1da4fc, Func Offset: 0xc
	// Line 73, Address: 0x1da508, Func Offset: 0x18
	// Line 74, Address: 0x1da510, Func Offset: 0x20
	// Line 81, Address: 0x1da514, Func Offset: 0x24
	// Line 74, Address: 0x1da51c, Func Offset: 0x2c
	// Line 75, Address: 0x1da530, Func Offset: 0x40
	// Line 76, Address: 0x1da560, Func Offset: 0x70
	// Line 77, Address: 0x1da568, Func Offset: 0x78
	// Line 78, Address: 0x1da570, Func Offset: 0x80
	// Line 79, Address: 0x1da578, Func Offset: 0x88
	// Line 81, Address: 0x1da580, Func Offset: 0x90
	// Line 82, Address: 0x1da590, Func Offset: 0xa0
	// Line 83, Address: 0x1da594, Func Offset: 0xa4
	// Line 84, Address: 0x1da598, Func Offset: 0xa8
	// Line 85, Address: 0x1da5a8, Func Offset: 0xb8
	// Line 86, Address: 0x1da5b4, Func Offset: 0xc4
	// Line 88, Address: 0x1da5bc, Func Offset: 0xcc
	// Line 89, Address: 0x1da5d4, Func Offset: 0xe4
	// Line 92, Address: 0x1da5d8, Func Offset: 0xe8
	// Line 89, Address: 0x1da5e8, Func Offset: 0xf8
	// Line 90, Address: 0x1da5fc, Func Offset: 0x10c
	// Line 91, Address: 0x1da604, Func Offset: 0x114
	// Line 92, Address: 0x1da60c, Func Offset: 0x11c
	// Line 94, Address: 0x1da61c, Func Offset: 0x12c
	// Line 97, Address: 0x1da620, Func Offset: 0x130
	// Line 96, Address: 0x1da624, Func Offset: 0x134
	// Line 97, Address: 0x1da628, Func Offset: 0x138
	// Line 96, Address: 0x1da634, Func Offset: 0x144
	// Line 97, Address: 0x1da638, Func Offset: 0x148
	// Line 99, Address: 0x1da648, Func Offset: 0x158
	// Line 103, Address: 0x1da65c, Func Offset: 0x16c
	// Line 107, Address: 0x1da664, Func Offset: 0x174
	// Line 111, Address: 0x1da684, Func Offset: 0x194
	// Line 113, Address: 0x1da688, Func Offset: 0x198
	// Line 115, Address: 0x1da6a8, Func Offset: 0x1b8
	// Line 118, Address: 0x1da6bc, Func Offset: 0x1cc
	// Line 122, Address: 0x1da6dc, Func Offset: 0x1ec
	// Line 123, Address: 0x1da6e4, Func Offset: 0x1f4
	// Line 124, Address: 0x1da6e8, Func Offset: 0x1f8
	// Line 122, Address: 0x1da6f0, Func Offset: 0x200
	// Line 124, Address: 0x1da6f4, Func Offset: 0x204
	// Line 128, Address: 0x1da704, Func Offset: 0x214
	// Line 131, Address: 0x1da718, Func Offset: 0x228
	// Line 135, Address: 0x1da738, Func Offset: 0x248
	// Line 136, Address: 0x1da73c, Func Offset: 0x24c
	// Line 138, Address: 0x1da740, Func Offset: 0x250
	// Line 139, Address: 0x1da754, Func Offset: 0x264
	// Line 143, Address: 0x1da764, Func Offset: 0x274
	// Line 146, Address: 0x1da768, Func Offset: 0x278
	// Line 143, Address: 0x1da770, Func Offset: 0x280
	// Line 146, Address: 0x1da774, Func Offset: 0x284
	// Line 148, Address: 0x1da784, Func Offset: 0x294
	// Line 160, Address: 0x1da798, Func Offset: 0x2a8
	// Line 161, Address: 0x1da79c, Func Offset: 0x2ac
	// Line 164, Address: 0x1da7a4, Func Offset: 0x2b4
	// Line 166, Address: 0x1da7d0, Func Offset: 0x2e0
	// Func End, Address: 0x1da7d8, Func Offset: 0x2e8
}

