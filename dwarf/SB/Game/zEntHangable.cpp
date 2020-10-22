typedef struct RxPipelineNode;
typedef struct xEnt;
typedef struct RwV3d;
typedef struct xBase;
typedef struct zScene;
typedef struct xAnimTable;
typedef struct xShadowSimplePoly;
typedef struct RwRGBA;
typedef struct RpMeshHeader;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct RwResEntry;
typedef struct xEnv;
typedef struct xMemPool;
typedef struct zLedgeGrabParams;
typedef struct xQuat;
typedef struct rxHeapFreeBlock;
typedef struct xVec3;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef struct xLinkAsset;
typedef struct zEntHangable;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct zParEmitter;
typedef struct xUpdateCullEnt;
typedef struct RxNodeDefinition;
typedef struct xScene;
typedef struct xEntCollis;
typedef enum _zPlayerWallJumpState;
typedef struct xGridBound;
typedef struct xAnimState;
typedef struct xEntHangableAsset;
typedef struct _tagEmitRect;
typedef struct RpTriangle;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct iEnv;
typedef struct RpAtomic;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct zEnt;
typedef struct xPortalAsset;
typedef struct RxHeap;
typedef struct xJSPNodeInfo;
typedef struct xModelPool;
typedef struct xShadowSimpleCache;
typedef struct RwBBox;
typedef enum _tagRumbleType;
typedef struct xVec2;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xSurface;
typedef struct xEntAsset;
typedef struct xAnimFile;
typedef struct zPlatform;
typedef struct RwTexCoords;
typedef struct RpGeometry;
typedef struct rxHeapBlockHeader;
typedef struct xFFX;
typedef struct RpLight;
typedef struct analog_data;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct zCutsceneMgr;
typedef struct xEntFrame;
typedef struct xPEEntBound;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpClump;
typedef struct xGroup;
typedef struct _tagEmitLine;
typedef struct xModelTag;
typedef struct xCollis;
typedef struct zAssetPickupTable;
typedef struct xParEmitterCustomSettings;
typedef struct xJSPHeader;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xEntBoulder;
typedef struct xVec4;
typedef enum RpWorldRenderOrder;
typedef struct xEntDrive;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct rxReq;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct RpSector;
typedef enum RxClusterValidityReq;
typedef struct xModelBucket;
typedef struct xSerial;
typedef struct RwCamera;
typedef struct xMat4x3;
typedef struct xEntShadow;
typedef struct xBound;
typedef struct _tagEmitVolume;
typedef struct _zPortal;
typedef struct xEnvAsset;
typedef struct RpWorldSector;
typedef struct anim_coll_data;
typedef struct RpMorphTarget;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xQCData;
typedef struct RpWorld;
typedef struct zLasso;
typedef struct iFogParams;
typedef struct _tagxRumble;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xParEmitter;
typedef struct _tagEmitOffsetPoint;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct tri_data_0;
typedef struct xCylinder;
typedef struct xParEmitterAsset;
typedef struct xParGroup;
typedef struct xBox;
typedef struct xParEmitterPropsAsset;
typedef struct RxClusterDefinition;
typedef struct xBaseAsset;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef enum _tagPadState;
typedef struct xAnimActiveEffect;
typedef struct RwFrame;
typedef struct FloatAndVoid;
typedef struct xPEVCyl;
typedef struct xGlobals;
typedef struct RwSphere;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct tri_data_1;
typedef struct _tagxPad;
typedef struct xParInterp;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RpInterpolator;
typedef struct RxClusterRef;
typedef struct xAnimMultiFileBase;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xPEEntBone;
typedef struct RwObject;
typedef struct _tagiPad;
typedef struct RxIoSpec;
typedef struct xParSys;
typedef struct RpPolygon;
typedef struct RxNodeMethods;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwFrustumPlane;
typedef struct xBBox;
typedef struct RwPlane;
typedef struct xPECircle;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct zGlobals;
typedef enum RwFogType;
typedef struct zGlobalSettings;
typedef struct RwRGBAReal;
typedef struct _tagEmitSphere;
typedef struct RwLinkList;
typedef struct zPlayerLassoInfo;
typedef struct _class_2;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int32(*type_1)(RxPipelineNode*);
typedef RwCamera*(*type_3)(RwCamera*);
typedef uint32(*type_4)(void*, void*);
typedef uint32(*type_5)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_6)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_10)(RxPipelineNode*);
typedef uint32(*type_11)(void*, void*);
typedef void(*type_12)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_13)(uint32);
typedef int8*(*type_14)(xBase*);
typedef int8*(*type_16)(uint32);
typedef int32(*type_17)(RxPipelineNode*, RxPipeline*);
typedef void(*type_20)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef void(*type_25)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_26)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_30)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_32)(xEnt*);
typedef int32(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_37)(RxNodeDefinition*);
typedef uint32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_40)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_41)(RxNodeDefinition*);
typedef void(*type_42)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_52)(xAnimPlay*, xAnimState*);
typedef void(*type_54)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_55)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpWorldSector*(*type_56)(RpWorldSector*);
typedef void(*type_62)(zEntHangable*, xScene*, float32);
typedef void(*type_64)(void*);
typedef void(*type_86)(xMemPool*, void*);
typedef int32(*type_92)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_94)(RwResEntry*);
typedef uint32(*type_100)(void*, void*);

typedef xVec3 type_2[5];
typedef xVec3 type_8[3];
typedef uint8 type_9[5];
typedef xVec3 type_15[60];
typedef xParInterp type_18[4];
typedef uint16 type_19[3];
typedef xParInterp type_21[4];
typedef float32 type_23[22];
typedef float32 type_24[16];
typedef float32 type_27[22];
typedef RwFrustumPlane type_29[6];
typedef uint8 type_31[3];
typedef float32 type_33[4];
typedef uint32 type_35[15];
typedef RwV3d type_36[8];
typedef uint32 type_39[15];
typedef uint32 type_43[72];
typedef uint32 type_44[15];
typedef int8 type_45[4];
typedef xBase* type_46[72];
typedef analog_data type_47[2];
typedef xVec3 type_48[4];
typedef uint8 type_49[3];
typedef xVec3 type_50[8];
typedef RwTexCoords* type_51[8];
typedef float32 type_53[4];
typedef xVec4 type_57[12];
typedef uint8 type_58[2];
typedef uint32 type_59[2];
typedef xCollis type_60[18];
typedef uint8 type_61[2];
typedef float32 type_63[6];
typedef float32 type_65[3];
typedef float32 type_66[3];
typedef xModelTag type_67[2];
typedef float32 type_68[3];
typedef RpLight* type_69[2];
typedef RwFrame* type_70[2];
typedef uint32 type_71[4];
typedef xEnt* type_72[111];
typedef uint8 type_73[3];
typedef float32 type_74[2];
typedef uint8 type_75[3];
typedef float32 type_76[2];
typedef int8 type_77[128];
typedef int8 type_78[128][6];
typedef uint8 type_79[14];
typedef xModelTag type_80[4];
typedef float32 type_81[2];
typedef int8 type_82[32];
typedef xModelInstance* type_83[14];
typedef int8 type_84[16];
typedef uint16 type_85[3];
typedef uint8 type_87[2];
typedef uint8 type_88[4];
typedef xAnimMultiFileEntry type_89[1];
typedef int8 type_90[32];
typedef int8 type_91[16];
typedef int8 type_93[32];
typedef uint8 type_95[22];
typedef uint8 type_96[22];
typedef xParInterp type_97[1];
typedef RwTexCoords* type_98[8];
typedef RxCluster type_99[1];

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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	uint32 num_update_base;
	xBase** update_base;
	uint32 baseCount[72];
	xBase* baseList[72];
	_zEnv* zen;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	xVec3 tranTable[60];
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct zEntHangable : zEnt
{
	xEntHangableAsset* hangInfo;
	xVec3 pivot;
	xVec3 endpos;
	xVec3 vel;
	xVec3 swingplane;
	float32 grabTimer;
	float32 spin;
	uint32 state;
	zEnt* shaggy;
	int32 enabled;
	zEnt* follow;
	int32 moving;
	float32 candle_timer;
	int32 candle_state;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct zParEmitter : xParEmitter
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct xEntHangableAsset
{
	uint32 flags;
	float32 pivotOffset;
	float32 leverArm;
	float32 gravity;
	float32 accel;
	float32 decay;
	float32 grabDelay;
	float32 stopDecel;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xVec2
{
	float32 x;
	float32 y;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xSurface
{
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

struct zPlatform
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xFFX
{
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct zCutsceneMgr
{
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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
		tri_data_1 tri;
	};
};

struct zAssetPickupTable
{
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint8 rot[3];
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

struct xJSPHeader
{
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	xEnt* MountChimney;
	float32 MountChimOldY;
	uint32 MaxHealth;
	uint32 DoMeleeCheck;
	float32 VictoryTimer;
	float32 BadGuyNearTimer;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	zEnt* FireTarget;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	xModelTag BubbleWandTag[2];
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	xModelTag HangPawTag[4];
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	int32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	uint32 Inv_Shiny;
	uint32 Inv_Spatula;
	uint32 Inv_PatsSock[15];
	uint32 Inv_PatsSock_Max[15];
	uint32 Inv_PatsSock_CurrentLevel;
	uint32 Inv_LevelPickups[15];
	uint32 Inv_LevelPickups_CurrentLevel;
	uint32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	uint32 TongueFlags[2];
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	xEnt* SlideTrackEnt[111];
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	uint8 sb_model_indices[14];
	xModelInstance* sb_models[14];
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xEntBoulder
{
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	xVec4 frustplane[12];
};

struct rxReq
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	float32 MoveSpeed[6];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 AnimRun[3];
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	uint8 talk_filter[4];
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpSector
{
	int32 type;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xSerial
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	float32 padF1;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	RwTexCoords* texCoords[8];
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
};

struct anim_coll_data
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct RpWorld
{
	RwObject object;
	uint32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int32 numTexCoordSets;
	int32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
};

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	xVec3 lastRefs[5];
	uint8 reindex[5];
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	uint8 rate_mode;
	float32 rate;
	float32 rate_time;
	float32 rate_fraction;
	float32 rate_fraction_cull;
	uint8 emit_flags;
	uint8 emit_pad[3];
	uint8 rot[3];
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xParEmitterAsset : xBaseAsset
{
	uint8 emit_flags;
	uint8 emit_type;
	uint16 pad;
	uint32 propID;
	union
	{
		xPECircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
		xPEVCyl e_vcyl;
		xPEEntBone e_entbone;
		xPEEntBound e_entbound;
	};
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint32 cull_mode;
	float32 cull_dist_sqr;
};

struct xParGroup
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		xParInterp value[1];
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	xParInterp color_birth[4];
	xParInterp color_death[4];
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct FloatAndVoid
{
	union
	{
		float32 f;
		void* v;
	};
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	int8 profFunc[128][6];
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	int8 sceneStart[32];
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	int32 option_vibration;
	uint32 QuarterSpeed;
	float32 update_dt;
	int32 useHIPHOP;
	uint8 NoMusic;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _class_0
{
	xVec3* verts;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xPEEntBone
{
	uint8 flags;
	uint8 type;
	uint8 bone;
	uint8 pad1;
	xVec3 offset;
	float32 radius;
	float32 deflection;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _tagiPad
{
	int32 port;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xParSys
{
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 DisableForceConversation;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 SandyMeleeMinFrame;
	float32 SandyMeleeMaxFrame;
	float32 SandyMeleeRadius;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float32 dist;
	uint8 destroy;
	uint8 targetGuide;
	float32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float32 copterTime;
	int32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

int8 buffer[16];
int8 buffer[16];
zParEmitter* sCandleEmitter;
zParEmitter* sCandleSmokeEmitter;
uint32 sChandelierHash;
zParEmitter* sMountEmitter;
zGlobals globals;
uint32(*xUpdateCull_DistanceSquaredCB)(void*, void*);
uint32(*xUpdateCull_AlwaysTrueCB)(void*, void*);
int32(*zEntHangableEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntHangable_Update)(zEntHangable*, xScene*, float32);

void zEntHangable_FollowUpdate(zEntHangable* ent);
void zEntHangable_Reset(zEntHangable* ent);
void zEntHangable_Load(zEntHangable* ent, xSerial* s);
void zEntHangable_Save(zEntHangable* ent, xSerial* s);
void zEntHangable_SetMatrix(zEntHangable* ent, float32 dt);
int32 zEntHangableEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam);
void zEntHangable_Update(zEntHangable* ent, float32 dt);
void zEntHangable_UpdateFX(zEntHangable* ent);
void zEntHangable_Init(void* ent, void* asset);
void HangableSetup(zEntHangable* ent, xEntAsset* asset);
void zEntHangable_SetupFX();

// zEntHangable_FollowUpdate__FP12zEntHangable
// Start address: 0x136ee0
void zEntHangable_FollowUpdate(zEntHangable* ent)
{
	xVec3* center;
	// Line 643, Address: 0x136ee0, Func Offset: 0
	// Line 644, Address: 0x136ee4, Func Offset: 0x4
	// Line 649, Address: 0x136eec, Func Offset: 0xc
	// Line 654, Address: 0x136ef0, Func Offset: 0x10
	// Line 655, Address: 0x136ef4, Func Offset: 0x14
	// Line 660, Address: 0x136ef8, Func Offset: 0x18
	// Line 656, Address: 0x136efc, Func Offset: 0x1c
	// Line 649, Address: 0x136f00, Func Offset: 0x20
	// Line 651, Address: 0x136f04, Func Offset: 0x24
	// Line 650, Address: 0x136f10, Func Offset: 0x30
	// Line 652, Address: 0x136f14, Func Offset: 0x34
	// Line 651, Address: 0x136f18, Func Offset: 0x38
	// Line 654, Address: 0x136f1c, Func Offset: 0x3c
	// Line 657, Address: 0x136f20, Func Offset: 0x40
	// Line 655, Address: 0x136f28, Func Offset: 0x48
	// Line 657, Address: 0x136f2c, Func Offset: 0x4c
	// Line 660, Address: 0x136f30, Func Offset: 0x50
	// Line 661, Address: 0x136f3c, Func Offset: 0x5c
	// Line 662, Address: 0x136f54, Func Offset: 0x74
	// Line 663, Address: 0x136f60, Func Offset: 0x80
	// Line 662, Address: 0x136f64, Func Offset: 0x84
	// Line 663, Address: 0x136f70, Func Offset: 0x90
	// Line 664, Address: 0x136f78, Func Offset: 0x98
	// Line 663, Address: 0x136f7c, Func Offset: 0x9c
	// Line 664, Address: 0x136f88, Func Offset: 0xa8
	// Line 665, Address: 0x136f9c, Func Offset: 0xbc
	// Line 668, Address: 0x136fa0, Func Offset: 0xc0
	// Line 669, Address: 0x136fac, Func Offset: 0xcc
	// Line 670, Address: 0x136fb8, Func Offset: 0xd8
	// Line 672, Address: 0x136fc4, Func Offset: 0xe4
	// Line 673, Address: 0x136fd8, Func Offset: 0xf8
	// Line 674, Address: 0x136fec, Func Offset: 0x10c
	// Line 677, Address: 0x137004, Func Offset: 0x124
	// Line 678, Address: 0x13700c, Func Offset: 0x12c
	// Line 679, Address: 0x137020, Func Offset: 0x140
	// Line 680, Address: 0x137038, Func Offset: 0x158
	// Line 682, Address: 0x137050, Func Offset: 0x170
	// Func End, Address: 0x137058, Func Offset: 0x178
}

// zEntHangable_Reset__FP12zEntHangable
// Start address: 0x137060
void zEntHangable_Reset(zEntHangable* ent)
{
	// Line 594, Address: 0x137060, Func Offset: 0
	// Line 596, Address: 0x13706c, Func Offset: 0xc
	// Line 597, Address: 0x137080, Func Offset: 0x20
	// Line 600, Address: 0x137090, Func Offset: 0x30
	// Line 603, Address: 0x137098, Func Offset: 0x38
	// Line 604, Address: 0x1370a4, Func Offset: 0x44
	// Func End, Address: 0x1370b4, Func Offset: 0x54
}

// zEntHangable_Load__FP12zEntHangableP7xSerial
// Start address: 0x1370c0
void zEntHangable_Load(zEntHangable* ent, xSerial* s)
{
	// Line 586, Address: 0x1370c0, Func Offset: 0
	// Func End, Address: 0x1370c8, Func Offset: 0x8
}

// zEntHangable_Save__FP12zEntHangableP7xSerial
// Start address: 0x1370d0
void zEntHangable_Save(zEntHangable* ent, xSerial* s)
{
	// Line 567, Address: 0x1370d0, Func Offset: 0
	// Func End, Address: 0x1370d8, Func Offset: 0x8
}

// zEntHangable_SetMatrix__FP12zEntHangablef
// Start address: 0x1370e0
void zEntHangable_SetMatrix(zEntHangable* ent, float32 dt)
{
	xMat4x3 tmpMat;
	xMat3x3 spinMat;
	int32 moving;
	xVec3* opos;
	xVec3* pos;
	xVec3* orot;
	xVec3 rot;
	// Line 440, Address: 0x1370e0, Func Offset: 0
	// Line 450, Address: 0x1370f0, Func Offset: 0x10
	// Line 440, Address: 0x1370f4, Func Offset: 0x14
	// Line 450, Address: 0x1370f8, Func Offset: 0x18
	// Line 440, Address: 0x1370fc, Func Offset: 0x1c
	// Line 451, Address: 0x137118, Func Offset: 0x38
	// Line 440, Address: 0x13711c, Func Offset: 0x3c
	// Line 450, Address: 0x137124, Func Offset: 0x44
	// Line 451, Address: 0x137154, Func Offset: 0x74
	// Line 458, Address: 0x137164, Func Offset: 0x84
	// Line 454, Address: 0x137168, Func Offset: 0x88
	// Line 455, Address: 0x137170, Func Offset: 0x90
	// Line 456, Address: 0x137178, Func Offset: 0x98
	// Line 457, Address: 0x137188, Func Offset: 0xa8
	// Line 458, Address: 0x137194, Func Offset: 0xb4
	// Line 457, Address: 0x137198, Func Offset: 0xb8
	// Line 458, Address: 0x1371e4, Func Offset: 0x104
	// Line 461, Address: 0x1371ec, Func Offset: 0x10c
	// Line 462, Address: 0x137210, Func Offset: 0x130
	// Line 465, Address: 0x137218, Func Offset: 0x138
	// Line 462, Address: 0x13721c, Func Offset: 0x13c
	// Line 468, Address: 0x137220, Func Offset: 0x140
	// Line 461, Address: 0x137224, Func Offset: 0x144
	// Line 469, Address: 0x137228, Func Offset: 0x148
	// Line 462, Address: 0x13722c, Func Offset: 0x14c
	// Line 481, Address: 0x137230, Func Offset: 0x150
	// Line 462, Address: 0x137234, Func Offset: 0x154
	// Line 489, Address: 0x137238, Func Offset: 0x158
	// Line 462, Address: 0x13723c, Func Offset: 0x15c
	// Line 461, Address: 0x13724c, Func Offset: 0x16c
	// Line 462, Address: 0x137250, Func Offset: 0x170
	// Line 465, Address: 0x137294, Func Offset: 0x1b4
	// Line 468, Address: 0x1372e8, Func Offset: 0x208
	// Line 469, Address: 0x1372ec, Func Offset: 0x20c
	// Line 470, Address: 0x1372fc, Func Offset: 0x21c
	// Line 471, Address: 0x137304, Func Offset: 0x224
	// Line 470, Address: 0x137310, Func Offset: 0x230
	// Line 471, Address: 0x137314, Func Offset: 0x234
	// Line 470, Address: 0x137328, Func Offset: 0x248
	// Line 471, Address: 0x13732c, Func Offset: 0x24c
	// Line 473, Address: 0x13736c, Func Offset: 0x28c
	// Line 474, Address: 0x13737c, Func Offset: 0x29c
	// Line 475, Address: 0x13738c, Func Offset: 0x2ac
	// Line 478, Address: 0x13739c, Func Offset: 0x2bc
	// Line 481, Address: 0x1373a0, Func Offset: 0x2c0
	// Line 485, Address: 0x13742c, Func Offset: 0x34c
	// Line 487, Address: 0x137434, Func Offset: 0x354
	// Line 485, Address: 0x137438, Func Offset: 0x358
	// Line 489, Address: 0x13743c, Func Offset: 0x35c
	// Line 490, Address: 0x137444, Func Offset: 0x364
	// Line 494, Address: 0x1374c0, Func Offset: 0x3e0
	// Line 493, Address: 0x1374c4, Func Offset: 0x3e4
	// Line 494, Address: 0x1374c8, Func Offset: 0x3e8
	// Line 495, Address: 0x1374d0, Func Offset: 0x3f0
	// Line 497, Address: 0x1374d8, Func Offset: 0x3f8
	// Line 499, Address: 0x1374e0, Func Offset: 0x400
	// Line 500, Address: 0x1374ec, Func Offset: 0x40c
	// Line 503, Address: 0x1374f8, Func Offset: 0x418
	// Line 510, Address: 0x1374fc, Func Offset: 0x41c
	// Line 512, Address: 0x137514, Func Offset: 0x434
	// Line 516, Address: 0x13751c, Func Offset: 0x43c
	// Line 517, Address: 0x137520, Func Offset: 0x440
	// Line 516, Address: 0x137528, Func Offset: 0x448
	// Line 517, Address: 0x13752c, Func Offset: 0x44c
	// Line 519, Address: 0x137538, Func Offset: 0x458
	// Line 520, Address: 0x13753c, Func Offset: 0x45c
	// Line 519, Address: 0x137540, Func Offset: 0x460
	// Line 520, Address: 0x137558, Func Offset: 0x478
	// Line 522, Address: 0x1375c0, Func Offset: 0x4e0
	// Line 523, Address: 0x1375c4, Func Offset: 0x4e4
	// Line 526, Address: 0x1375e0, Func Offset: 0x500
	// Line 527, Address: 0x1375e8, Func Offset: 0x508
	// Line 530, Address: 0x1375f4, Func Offset: 0x514
	// Line 531, Address: 0x1375f8, Func Offset: 0x518
	// Line 530, Address: 0x137600, Func Offset: 0x520
	// Line 531, Address: 0x137604, Func Offset: 0x524
	// Line 533, Address: 0x137610, Func Offset: 0x530
	// Line 534, Address: 0x137630, Func Offset: 0x550
	// Line 533, Address: 0x137634, Func Offset: 0x554
	// Line 536, Address: 0x13763c, Func Offset: 0x55c
	// Line 540, Address: 0x137648, Func Offset: 0x568
	// Line 541, Address: 0x13764c, Func Offset: 0x56c
	// Line 540, Address: 0x137654, Func Offset: 0x574
	// Line 541, Address: 0x137658, Func Offset: 0x578
	// Line 543, Address: 0x137664, Func Offset: 0x584
	// Line 544, Address: 0x137668, Func Offset: 0x588
	// Line 543, Address: 0x13766c, Func Offset: 0x58c
	// Line 544, Address: 0x137684, Func Offset: 0x5a4
	// Line 548, Address: 0x1376e8, Func Offset: 0x608
	// Line 549, Address: 0x1376f0, Func Offset: 0x610
	// Line 553, Address: 0x1376f4, Func Offset: 0x614
	// Line 554, Address: 0x1376f8, Func Offset: 0x618
	// Func End, Address: 0x13772c, Func Offset: 0x64c
}

// zEntHangableEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x137730
int32 zEntHangableEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam)
{
	zEntHangable* ent;
	zEnt* follow;
	FloatAndVoid dist;
	// Line 310, Address: 0x137730, Func Offset: 0
	// Line 317, Address: 0x137734, Func Offset: 0x4
	// Line 310, Address: 0x137738, Func Offset: 0x8
	// Line 314, Address: 0x137754, Func Offset: 0x24
	// Line 310, Address: 0x137758, Func Offset: 0x28
	// Line 315, Address: 0x137768, Func Offset: 0x38
	// Line 317, Address: 0x137774, Func Offset: 0x44
	// Line 320, Address: 0x1377fc, Func Offset: 0xcc
	// Line 321, Address: 0x137800, Func Offset: 0xd0
	// Line 323, Address: 0x137808, Func Offset: 0xd8
	// Line 328, Address: 0x137810, Func Offset: 0xe0
	// Line 329, Address: 0x137818, Func Offset: 0xe8
	// Line 334, Address: 0x137820, Func Offset: 0xf0
	// Line 335, Address: 0x137824, Func Offset: 0xf4
	// Line 337, Address: 0x13782c, Func Offset: 0xfc
	// Line 340, Address: 0x137830, Func Offset: 0x100
	// Line 341, Address: 0x1378c8, Func Offset: 0x198
	// Line 345, Address: 0x1378e8, Func Offset: 0x1b8
	// Line 348, Address: 0x1378f0, Func Offset: 0x1c0
	// Line 349, Address: 0x1378f4, Func Offset: 0x1c4
	// Line 351, Address: 0x1378fc, Func Offset: 0x1cc
	// Line 355, Address: 0x137900, Func Offset: 0x1d0
	// Line 358, Address: 0x137908, Func Offset: 0x1d8
	// Line 362, Address: 0x13790c, Func Offset: 0x1dc
	// Line 358, Address: 0x137910, Func Offset: 0x1e0
	// Line 363, Address: 0x137918, Func Offset: 0x1e8
	// Line 366, Address: 0x137920, Func Offset: 0x1f0
	// Line 371, Address: 0x13792c, Func Offset: 0x1fc
	// Line 373, Address: 0x137934, Func Offset: 0x204
	// Line 374, Address: 0x137938, Func Offset: 0x208
	// Line 375, Address: 0x137940, Func Offset: 0x210
	// Line 382, Address: 0x137948, Func Offset: 0x218
	// Line 384, Address: 0x137974, Func Offset: 0x244
	// Line 386, Address: 0x13797c, Func Offset: 0x24c
	// Line 384, Address: 0x137980, Func Offset: 0x250
	// Line 387, Address: 0x137988, Func Offset: 0x258
	// Line 388, Address: 0x137994, Func Offset: 0x264
	// Line 389, Address: 0x1379a8, Func Offset: 0x278
	// Line 390, Address: 0x1379b4, Func Offset: 0x284
	// Line 393, Address: 0x1379c0, Func Offset: 0x290
	// Line 392, Address: 0x1379c4, Func Offset: 0x294
	// Line 393, Address: 0x1379cc, Func Offset: 0x29c
	// Line 400, Address: 0x1379d8, Func Offset: 0x2a8
	// Line 402, Address: 0x1379f8, Func Offset: 0x2c8
	// Line 406, Address: 0x137a04, Func Offset: 0x2d4
	// Line 407, Address: 0x137a0c, Func Offset: 0x2dc
	// Line 408, Address: 0x137a20, Func Offset: 0x2f0
	// Line 412, Address: 0x137a28, Func Offset: 0x2f8
	// Line 411, Address: 0x137a30, Func Offset: 0x300
	// Line 412, Address: 0x137a34, Func Offset: 0x304
	// Func End, Address: 0x137a5c, Func Offset: 0x32c
}

// zEntHangable_Update__FP12zEntHangableP6xScenef
// Start address: 0x137a60
void zEntHangable_Update(zEntHangable* ent, float32 dt)
{
	xVec3 unitHang;
	// Line 193, Address: 0x137a60, Func Offset: 0
	// Line 194, Address: 0x137a90, Func Offset: 0x30
	// Line 195, Address: 0x137aa8, Func Offset: 0x48
	// Line 197, Address: 0x137b34, Func Offset: 0xd4
	// Line 199, Address: 0x137b40, Func Offset: 0xe0
	// Line 200, Address: 0x137b48, Func Offset: 0xe8
	// Line 201, Address: 0x137b54, Func Offset: 0xf4
	// Line 202, Address: 0x137b5c, Func Offset: 0xfc
	// Line 204, Address: 0x137b60, Func Offset: 0x100
	// Line 211, Address: 0x137b6c, Func Offset: 0x10c
	// Line 215, Address: 0x137b80, Func Offset: 0x120
	// Line 216, Address: 0x137b90, Func Offset: 0x130
	// Line 221, Address: 0x137ba4, Func Offset: 0x144
	// Line 226, Address: 0x137bc4, Func Offset: 0x164
	// Line 231, Address: 0x137bd4, Func Offset: 0x174
	// Line 240, Address: 0x137bdc, Func Offset: 0x17c
	// Line 239, Address: 0x137be0, Func Offset: 0x180
	// Line 245, Address: 0x137be4, Func Offset: 0x184
	// Line 244, Address: 0x137be8, Func Offset: 0x188
	// Line 245, Address: 0x137bf8, Func Offset: 0x198
	// Line 241, Address: 0x137bfc, Func Offset: 0x19c
	// Line 240, Address: 0x137c00, Func Offset: 0x1a0
	// Line 244, Address: 0x137c04, Func Offset: 0x1a4
	// Line 240, Address: 0x137c14, Func Offset: 0x1b4
	// Line 244, Address: 0x137c18, Func Offset: 0x1b8
	// Line 245, Address: 0x137c2c, Func Offset: 0x1cc
	// Line 246, Address: 0x137c3c, Func Offset: 0x1dc
	// Line 265, Address: 0x137c40, Func Offset: 0x1e0
	// Line 246, Address: 0x137c44, Func Offset: 0x1e4
	// Line 265, Address: 0x137c48, Func Offset: 0x1e8
	// Line 246, Address: 0x137c4c, Func Offset: 0x1ec
	// Line 265, Address: 0x137c50, Func Offset: 0x1f0
	// Line 246, Address: 0x137c54, Func Offset: 0x1f4
	// Line 267, Address: 0x137c58, Func Offset: 0x1f8
	// Line 246, Address: 0x137c5c, Func Offset: 0x1fc
	// Line 267, Address: 0x137c60, Func Offset: 0x200
	// Line 246, Address: 0x137c64, Func Offset: 0x204
	// Line 248, Address: 0x137c6c, Func Offset: 0x20c
	// Line 246, Address: 0x137c70, Func Offset: 0x210
	// Line 250, Address: 0x137c74, Func Offset: 0x214
	// Line 249, Address: 0x137c78, Func Offset: 0x218
	// Line 253, Address: 0x137c7c, Func Offset: 0x21c
	// Line 248, Address: 0x137c80, Func Offset: 0x220
	// Line 250, Address: 0x137c84, Func Offset: 0x224
	// Line 249, Address: 0x137c88, Func Offset: 0x228
	// Line 248, Address: 0x137c8c, Func Offset: 0x22c
	// Line 250, Address: 0x137c90, Func Offset: 0x230
	// Line 253, Address: 0x137c94, Func Offset: 0x234
	// Line 249, Address: 0x137c9c, Func Offset: 0x23c
	// Line 253, Address: 0x137ca0, Func Offset: 0x240
	// Line 254, Address: 0x137ca4, Func Offset: 0x244
	// Line 255, Address: 0x137cb4, Func Offset: 0x254
	// Line 258, Address: 0x137cc4, Func Offset: 0x264
	// Line 259, Address: 0x137cdc, Func Offset: 0x27c
	// Line 258, Address: 0x137ce0, Func Offset: 0x280
	// Line 259, Address: 0x137cec, Func Offset: 0x28c
	// Line 258, Address: 0x137cf0, Func Offset: 0x290
	// Line 267, Address: 0x137cf4, Func Offset: 0x294
	// Line 259, Address: 0x137cf8, Func Offset: 0x298
	// Line 260, Address: 0x137d04, Func Offset: 0x2a4
	// Line 261, Address: 0x137d18, Func Offset: 0x2b8
	// Line 265, Address: 0x137d2c, Func Offset: 0x2cc
	// Line 267, Address: 0x137d5c, Func Offset: 0x2fc
	// Line 268, Address: 0x137d78, Func Offset: 0x318
	// Line 269, Address: 0x137d7c, Func Offset: 0x31c
	// Line 270, Address: 0x137d80, Func Offset: 0x320
	// Line 271, Address: 0x137d84, Func Offset: 0x324
	// Line 280, Address: 0x137d88, Func Offset: 0x328
	// Line 274, Address: 0x137d8c, Func Offset: 0x32c
	// Line 280, Address: 0x137d90, Func Offset: 0x330
	// Line 274, Address: 0x137d94, Func Offset: 0x334
	// Line 275, Address: 0x137da4, Func Offset: 0x344
	// Line 276, Address: 0x137db8, Func Offset: 0x358
	// Line 279, Address: 0x137dcc, Func Offset: 0x36c
	// Line 280, Address: 0x137df8, Func Offset: 0x398
	// Line 281, Address: 0x137e00, Func Offset: 0x3a0
	// Line 284, Address: 0x137e08, Func Offset: 0x3a8
	// Line 281, Address: 0x137e10, Func Offset: 0x3b0
	// Line 282, Address: 0x137e34, Func Offset: 0x3d4
	// Line 284, Address: 0x137e60, Func Offset: 0x400
	// Line 285, Address: 0x137e68, Func Offset: 0x408
	// Func End, Address: 0x137e98, Func Offset: 0x438
}

// zEntHangable_UpdateFX__FP12zEntHangable
// Start address: 0x137ea0
void zEntHangable_UpdateFX(zEntHangable* ent)
{
	xVec3 offset_rlii0006[8];
	xVec3* local_offset;
	xParEmitterCustomSettings info;
	zParEmitter* emitter;
	int32 i;
	// Line 136, Address: 0x137ea0, Func Offset: 0
	// Line 137, Address: 0x137ea4, Func Offset: 0x4
	// Line 136, Address: 0x137ea8, Func Offset: 0x8
	// Line 137, Address: 0x137eac, Func Offset: 0xc
	// Line 136, Address: 0x137eb0, Func Offset: 0x10
	// Line 137, Address: 0x137ecc, Func Offset: 0x2c
	// Line 149, Address: 0x137f00, Func Offset: 0x60
	// Line 157, Address: 0x137f10, Func Offset: 0x70
	// Line 161, Address: 0x137f24, Func Offset: 0x84
	// Line 162, Address: 0x137f34, Func Offset: 0x94
	// Line 163, Address: 0x137f3c, Func Offset: 0x9c
	// Line 166, Address: 0x137f40, Func Offset: 0xa0
	// Line 171, Address: 0x137f48, Func Offset: 0xa8
	// Line 176, Address: 0x137f50, Func Offset: 0xb0
	// Line 178, Address: 0x137f6c, Func Offset: 0xcc
	// Line 186, Address: 0x137f84, Func Offset: 0xe4
	// Line 180, Address: 0x137f98, Func Offset: 0xf8
	// Line 178, Address: 0x137fa0, Func Offset: 0x100
	// Line 180, Address: 0x137fa4, Func Offset: 0x104
	// Line 182, Address: 0x137fa8, Func Offset: 0x108
	// Line 184, Address: 0x137fb8, Func Offset: 0x118
	// Line 182, Address: 0x137fc0, Func Offset: 0x120
	// Line 184, Address: 0x137fe4, Func Offset: 0x144
	// Line 182, Address: 0x137ff0, Func Offset: 0x150
	// Line 184, Address: 0x137ff4, Func Offset: 0x154
	// Line 186, Address: 0x13801c, Func Offset: 0x17c
	// Line 187, Address: 0x138024, Func Offset: 0x184
	// Line 188, Address: 0x138034, Func Offset: 0x194
	// Func End, Address: 0x138060, Func Offset: 0x1c0
}

// zEntHangable_Init__FPvPv
// Start address: 0x138060
void zEntHangable_Init(void* ent, void* asset)
{
	// Line 114, Address: 0x138060, Func Offset: 0
	// Line 115, Address: 0x138064, Func Offset: 0x4
	// Line 114, Address: 0x138068, Func Offset: 0x8
	// Line 115, Address: 0x13806c, Func Offset: 0xc
	// Line 114, Address: 0x138070, Func Offset: 0x10
	// Line 115, Address: 0x13807c, Func Offset: 0x1c
	// Line 116, Address: 0x1380b4, Func Offset: 0x54
	// Func End, Address: 0x1380c8, Func Offset: 0x68
}

// HangableSetup__FP12zEntHangableP9xEntAsset
// Start address: 0x1380d0
void HangableSetup(zEntHangable* ent, xEntAsset* asset)
{
	xEntHangableAsset* hangAsset;
	xVec3* center;
	xMat3x3 hackMat;
	// Line 44, Address: 0x1380d0, Func Offset: 0
	// Line 52, Address: 0x1380d4, Func Offset: 0x4
	// Line 44, Address: 0x1380d8, Func Offset: 0x8
	// Line 54, Address: 0x1380dc, Func Offset: 0xc
	// Line 44, Address: 0x1380e0, Func Offset: 0x10
	// Line 52, Address: 0x1380e4, Func Offset: 0x14
	// Line 49, Address: 0x1380e8, Func Offset: 0x18
	// Line 54, Address: 0x1380ec, Func Offset: 0x1c
	// Line 50, Address: 0x1380f0, Func Offset: 0x20
	// Line 48, Address: 0x1380f4, Func Offset: 0x24
	// Line 51, Address: 0x1380f8, Func Offset: 0x28
	// Line 77, Address: 0x1380fc, Func Offset: 0x2c
	// Line 52, Address: 0x138100, Func Offset: 0x30
	// Line 53, Address: 0x138108, Func Offset: 0x38
	// Line 79, Address: 0x13810c, Func Offset: 0x3c
	// Line 54, Address: 0x138110, Func Offset: 0x40
	// Line 57, Address: 0x138114, Func Offset: 0x44
	// Line 59, Address: 0x138118, Func Offset: 0x48
	// Line 60, Address: 0x13811c, Func Offset: 0x4c
	// Line 61, Address: 0x138124, Func Offset: 0x54
	// Line 62, Address: 0x138134, Func Offset: 0x64
	// Line 64, Address: 0x13813c, Func Offset: 0x6c
	// Line 65, Address: 0x138144, Func Offset: 0x74
	// Line 66, Address: 0x138154, Func Offset: 0x84
	// Line 68, Address: 0x13815c, Func Offset: 0x8c
	// Line 72, Address: 0x138168, Func Offset: 0x98
	// Line 73, Address: 0x13816c, Func Offset: 0x9c
	// Line 74, Address: 0x138170, Func Offset: 0xa0
	// Line 75, Address: 0x138174, Func Offset: 0xa4
	// Line 76, Address: 0x138178, Func Offset: 0xa8
	// Line 77, Address: 0x13817c, Func Offset: 0xac
	// Line 78, Address: 0x138180, Func Offset: 0xb0
	// Line 79, Address: 0x138184, Func Offset: 0xb4
	// Line 80, Address: 0x138188, Func Offset: 0xb8
	// Line 88, Address: 0x138190, Func Offset: 0xc0
	// Line 89, Address: 0x1381a4, Func Offset: 0xd4
	// Line 111, Address: 0x1381bc, Func Offset: 0xec
	// Func End, Address: 0x1381cc, Func Offset: 0xfc
}

// zEntHangable_SetupFX__Fv
// Start address: 0x1381d0
void zEntHangable_SetupFX()
{
	// Line 35, Address: 0x1381d0, Func Offset: 0
	// Line 36, Address: 0x1381d4, Func Offset: 0x4
	// Line 35, Address: 0x1381d8, Func Offset: 0x8
	// Line 36, Address: 0x1381dc, Func Offset: 0xc
	// Line 37, Address: 0x1381e4, Func Offset: 0x14
	// Line 36, Address: 0x1381e8, Func Offset: 0x18
	// Line 37, Address: 0x1381ec, Func Offset: 0x1c
	// Line 38, Address: 0x1381f4, Func Offset: 0x24
	// Line 37, Address: 0x1381f8, Func Offset: 0x28
	// Line 38, Address: 0x1381fc, Func Offset: 0x2c
	// Line 39, Address: 0x138204, Func Offset: 0x34
	// Line 38, Address: 0x138208, Func Offset: 0x38
	// Line 39, Address: 0x13820c, Func Offset: 0x3c
	// Line 40, Address: 0x138218, Func Offset: 0x48
	// Func End, Address: 0x138224, Func Offset: 0x54
}

