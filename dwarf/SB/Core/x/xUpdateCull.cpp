typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct xAnimState;
typedef struct xBase;
typedef struct xModelInstance;
typedef struct RpTriangle;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct xLinkAsset;
typedef enum _tagPadState;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RpMeshHeader;
typedef struct xModelPool;
typedef struct xVec3;
typedef struct RxNodeDefinition;
typedef struct RxPipeline;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct xGlobals;
typedef struct xEnt;
typedef struct RwResEntry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xScene;
typedef struct xAnimPlay;
typedef struct xShadowSimpleCache;
typedef struct RpGeometry;
typedef struct RxPipelineCluster;
typedef struct xEntCollis;
typedef struct xUpdateCullEnt;
typedef struct _tagxPad;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct RpClump;
typedef struct xBaseAsset;
typedef struct RpLight;
typedef struct xQuat;
typedef struct xEntFrame;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct _tagPadAnalog;
typedef struct rxHeapBlockHeader;
typedef struct xGroup;
typedef struct xCollis;
typedef struct xBound;
typedef struct _tagiPad;
typedef enum RpWorldRenderOrder;
typedef struct xUpdateCullMgr;
typedef struct RxPipelineRequiresCluster;
typedef struct xGroupAsset;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xVec2;
typedef struct xAnimMultiFile;
typedef struct xFFX;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RpSector;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct xUpdateCullGroup;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xEntShadow;
typedef enum RxClusterValidityReq;
typedef struct anim_coll_data;
typedef struct xAnimTable;
typedef struct _tagxRumble;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct xGridBound;
typedef enum RxClusterValid;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef struct tri_data;
typedef enum _tagRumbleType;
typedef struct xCamera;
typedef struct RwSphere;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct iFogParams;
typedef struct RwTexDictionary;
typedef struct RwCamera;
typedef struct RxOutputSpec;
typedef struct analog_data;
typedef struct xMat3x3;
typedef struct RpPolygon;
typedef struct RxClusterRef;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xEntAsset;
typedef struct RwFrustumPlane;
typedef struct FloatAndVoid;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xEnv;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xShadowSimplePoly;
typedef struct RwLinkList;

typedef int8*(*type_1)(xBase*);
typedef RwCamera*(*type_2)(RwCamera*);
typedef int32(*type_3)(RxPipelineNode*);
typedef int8*(*type_4)(uint32);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef int32(*type_8)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_9)(RxPipelineNode*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef void(*type_11)(xEnt*, xScene*, float32);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef void(*type_14)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef uint32(*type_16)(void*, void*);
typedef void(*type_17)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_19)(xEnt*);
typedef void(*type_20)(void*);
typedef uint32(*type_24)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_25)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_28)(RxNodeDefinition*);
typedef void(*type_29)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_30)(void*, void*);
typedef void(*type_32)(RxNodeDefinition*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_38)(RpWorldSector*);
typedef xBase*(*type_42)(uint32);
typedef uint32(*type_43)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_57)(xMemPool*, void*);
typedef RpClump*(*type_59)(RpClump*, void*);
typedef void(*type_61)(RwResEntry*);

typedef xVec3 type_0[3];
typedef uint16 type_7[3];
typedef float32 type_12[16];
typedef int8 type_21[128];
typedef RwFrustumPlane type_22[6];
typedef int8 type_23[128][6];
typedef RwV3d type_27[8];
typedef int8 type_31[32];
typedef RwTexCoords* type_33[8];
typedef xVec3 type_35[4];
typedef uint8 type_39[22];
typedef uint8 type_40[22];
typedef xCollis type_41[18];
typedef uint32 type_44[4];
typedef float32 type_45[22];
typedef float32 type_46[2];
typedef float32 type_47[22];
typedef uint8 type_48[3];
typedef uint32 type_49[4096];
typedef uint16 type_50[3];
typedef float32 type_51[2];
typedef xVec4 type_52[12];
typedef uint8 type_53[2];
typedef xAnimMultiFileEntry type_54[1];
typedef analog_data type_55[2];
typedef float32 type_56[4];
typedef int8 type_58[32];
typedef int8 type_60[32];
typedef RwTexCoords* type_62[8];
typedef RxCluster type_63[1];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct _tagiPad
{
	int32 port;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xFFX
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

struct RpSector
{
	int32 type;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct anim_coll_data
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct FloatAndVoid
{
	union
	{
		float32 f;
		void* v;
	};
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xEnv
{
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct RwLinkList
{
	RwLLLink link;
};

uint32 ourGlobals[4096];
uint32(*xUpdateCull_AlwaysTrueCB)(void*, void*);
uint32 gActiveHeap;
xGlobals* xglobals;

void xUpdateCull_Reset(xUpdateCullMgr* m);
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, uint32(*cb)(void*, void*), void* cbdata);
void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update);
xUpdateCullMgr* xUpdateCull_Init(void** ent, uint32 entCount, xGroup** group, uint32 groupCount);
uint32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata);
uint32 xUpdateCull_AlwaysTrueCB();
void xUpdateCull_Swap(xUpdateCullMgr* m, uint32 a, uint32 b);

// xUpdateCull_Reset__FP14xUpdateCullMgr
// Start address: 0x328de0
void xUpdateCull_Reset(xUpdateCullMgr* m)
{
	uint32 i;
	// Line 389, Address: 0x328de0, Func Offset: 0
	// Line 391, Address: 0x328df8, Func Offset: 0x18
	// Line 392, Address: 0x328e10, Func Offset: 0x30
	// Line 393, Address: 0x328e78, Func Offset: 0x98
	// Line 394, Address: 0x328e90, Func Offset: 0xb0
	// Func End, Address: 0x328eac, Func Offset: 0xcc
}

// xUpdateCull_SetCB__FP14xUpdateCullMgrPvPFPvPv_UiPv
// Start address: 0x328eb0
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, uint32(*cb)(void*, void*), void* cbdata)
{
	uint32 i;
	// Line 380, Address: 0x328eb0, Func Offset: 0
	// Line 381, Address: 0x328ecc, Func Offset: 0x1c
	// Line 380, Address: 0x328ed0, Func Offset: 0x20
	// Line 381, Address: 0x328ed4, Func Offset: 0x24
	// Line 382, Address: 0x328eec, Func Offset: 0x3c
	// Line 383, Address: 0x328ef0, Func Offset: 0x40
	// Line 384, Address: 0x328efc, Func Offset: 0x4c
	// Line 385, Address: 0x328f18, Func Offset: 0x68
	// Func End, Address: 0x328f20, Func Offset: 0x70
}

// xUpdateCull_Update__FP14xUpdateCullMgrUi
// Start address: 0x328f20
void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update)
{
	int32 numiters;
	uint32 i;
	xUpdateCullEnt* cent;
	uint32 result;
	xUpdateCullGroup* grp;
	xUpdateCullEnt* curr;
	// Line 270, Address: 0x328f20, Func Offset: 0
	// Line 295, Address: 0x328f24, Func Offset: 0x4
	// Line 270, Address: 0x328f28, Func Offset: 0x8
	// Line 295, Address: 0x328f2c, Func Offset: 0xc
	// Line 270, Address: 0x328f30, Func Offset: 0x10
	// Line 295, Address: 0x328f4c, Func Offset: 0x2c
	// Line 296, Address: 0x328f68, Func Offset: 0x48
	// Line 301, Address: 0x328f70, Func Offset: 0x50
	// Line 303, Address: 0x328f78, Func Offset: 0x58
	// Line 304, Address: 0x328f80, Func Offset: 0x60
	// Line 303, Address: 0x328f84, Func Offset: 0x64
	// Line 304, Address: 0x328f8c, Func Offset: 0x6c
	// Line 305, Address: 0x328fac, Func Offset: 0x8c
	// Line 308, Address: 0x328fb8, Func Offset: 0x98
	// Line 309, Address: 0x328fc8, Func Offset: 0xa8
	// Line 310, Address: 0x329018, Func Offset: 0xf8
	// Line 311, Address: 0x329028, Func Offset: 0x108
	// Line 312, Address: 0x32907c, Func Offset: 0x15c
	// Line 316, Address: 0x329080, Func Offset: 0x160
	// Line 315, Address: 0x329084, Func Offset: 0x164
	// Line 316, Address: 0x329088, Func Offset: 0x168
	// Line 318, Address: 0x32908c, Func Offset: 0x16c
	// Line 321, Address: 0x329098, Func Offset: 0x178
	// Line 322, Address: 0x3290a8, Func Offset: 0x188
	// Line 325, Address: 0x3290b4, Func Offset: 0x194
	// Line 326, Address: 0x3290c0, Func Offset: 0x1a0
	// Line 327, Address: 0x3290c4, Func Offset: 0x1a4
	// Line 328, Address: 0x3290d8, Func Offset: 0x1b8
	// Line 329, Address: 0x32913c, Func Offset: 0x21c
	// Line 330, Address: 0x329154, Func Offset: 0x234
	// Line 329, Address: 0x329158, Func Offset: 0x238
	// Line 333, Address: 0x32915c, Func Offset: 0x23c
	// Line 329, Address: 0x329160, Func Offset: 0x240
	// Line 333, Address: 0x329164, Func Offset: 0x244
	// Line 334, Address: 0x329168, Func Offset: 0x248
	// Line 336, Address: 0x32916c, Func Offset: 0x24c
	// Line 340, Address: 0x329178, Func Offset: 0x258
	// Line 344, Address: 0x329188, Func Offset: 0x268
	// Line 345, Address: 0x329194, Func Offset: 0x274
	// Line 346, Address: 0x329198, Func Offset: 0x278
	// Line 351, Address: 0x3291b8, Func Offset: 0x298
	// Line 352, Address: 0x3291c0, Func Offset: 0x2a0
	// Line 355, Address: 0x3291e4, Func Offset: 0x2c4
	// Line 356, Address: 0x3291e8, Func Offset: 0x2c8
	// Line 357, Address: 0x329208, Func Offset: 0x2e8
	// Line 359, Address: 0x32925c, Func Offset: 0x33c
	// Line 361, Address: 0x329274, Func Offset: 0x354
	// Line 365, Address: 0x329278, Func Offset: 0x358
	// Line 364, Address: 0x32927c, Func Offset: 0x35c
	// Line 365, Address: 0x329280, Func Offset: 0x360
	// Line 370, Address: 0x329288, Func Offset: 0x368
	// Line 371, Address: 0x32929c, Func Offset: 0x37c
	// Line 373, Address: 0x3292a0, Func Offset: 0x380
	// Line 374, Address: 0x3292a8, Func Offset: 0x388
	// Func End, Address: 0x3292cc, Func Offset: 0x3ac
}

// xUpdateCull_Init__FPPvUiPP6xGroupUi
// Start address: 0x3292d0
xUpdateCullMgr* xUpdateCull_Init(void** ent, uint32 entCount, xGroup** group, uint32 groupCount)
{
	void** tempEnt;
	uint32 tempCount;
	uint32 idx;
	uint32 i;
	uint32 j;
	uint32 k;
	uint32 gcnt;
	uint32 entsInThisGroup;
	uint32 entsInGroups;
	uint32 nonEmptyGroups;
	int32 x;
	uint8* inGroupArray;
	xBase* base;
	uint32 mgrCount;
	xUpdateCullMgr* m;
	int32 grpIndex;
	int32 mgrIndex;
	int32 startIndex;
	xBase* base;
	xUpdateCullEnt** prevPtr;
	// Line 106, Address: 0x3292d0, Func Offset: 0
	// Line 109, Address: 0x32930c, Func Offset: 0x3c
	// Line 111, Address: 0x329310, Func Offset: 0x40
	// Line 113, Address: 0x329318, Func Offset: 0x48
	// Line 114, Address: 0x329328, Func Offset: 0x58
	// Line 113, Address: 0x32932c, Func Offset: 0x5c
	// Line 114, Address: 0x329330, Func Offset: 0x60
	// Line 115, Address: 0x329348, Func Offset: 0x78
	// Line 116, Address: 0x329358, Func Offset: 0x88
	// Line 118, Address: 0x32936c, Func Offset: 0x9c
	// Line 116, Address: 0x329370, Func Offset: 0xa0
	// Line 118, Address: 0x329374, Func Offset: 0xa4
	// Line 116, Address: 0x329378, Func Offset: 0xa8
	// Line 118, Address: 0x329380, Func Offset: 0xb0
	// Line 119, Address: 0x32938c, Func Offset: 0xbc
	// Line 120, Address: 0x329390, Func Offset: 0xc0
	// Line 121, Address: 0x329394, Func Offset: 0xc4
	// Line 129, Address: 0x329398, Func Offset: 0xc8
	// Line 127, Address: 0x32939c, Func Offset: 0xcc
	// Line 120, Address: 0x3293a4, Func Offset: 0xd4
	// Line 129, Address: 0x3293a8, Func Offset: 0xd8
	// Line 130, Address: 0x3293b4, Func Offset: 0xe4
	// Line 129, Address: 0x3293b8, Func Offset: 0xe8
	// Line 130, Address: 0x3293bc, Func Offset: 0xec
	// Line 132, Address: 0x3293c8, Func Offset: 0xf8
	// Line 134, Address: 0x3293e0, Func Offset: 0x110
	// Line 135, Address: 0x3293f0, Func Offset: 0x120
	// Line 136, Address: 0x329400, Func Offset: 0x130
	// Line 137, Address: 0x32940c, Func Offset: 0x13c
	// Line 141, Address: 0x32941c, Func Offset: 0x14c
	// Line 138, Address: 0x329420, Func Offset: 0x150
	// Line 139, Address: 0x32942c, Func Offset: 0x15c
	// Line 140, Address: 0x329430, Func Offset: 0x160
	// Line 141, Address: 0x329434, Func Offset: 0x164
	// Line 142, Address: 0x329438, Func Offset: 0x168
	// Line 143, Address: 0x329448, Func Offset: 0x178
	// Line 144, Address: 0x329458, Func Offset: 0x188
	// Line 145, Address: 0x329460, Func Offset: 0x190
	// Line 147, Address: 0x329464, Func Offset: 0x194
	// Line 151, Address: 0x329480, Func Offset: 0x1b0
	// Line 152, Address: 0x329490, Func Offset: 0x1c0
	// Line 153, Address: 0x3294a0, Func Offset: 0x1d0
	// Line 155, Address: 0x3294a4, Func Offset: 0x1d4
	// Line 166, Address: 0x3294bc, Func Offset: 0x1ec
	// Line 167, Address: 0x3294f0, Func Offset: 0x220
	// Line 168, Address: 0x3294f8, Func Offset: 0x228
	// Line 169, Address: 0x329504, Func Offset: 0x234
	// Line 170, Address: 0x32950c, Func Offset: 0x23c
	// Line 171, Address: 0x329528, Func Offset: 0x258
	// Line 174, Address: 0x329538, Func Offset: 0x268
	// Line 175, Address: 0x329540, Func Offset: 0x270
	// Line 185, Address: 0x329548, Func Offset: 0x278
	// Line 176, Address: 0x32954c, Func Offset: 0x27c
	// Line 177, Address: 0x329550, Func Offset: 0x280
	// Line 178, Address: 0x329554, Func Offset: 0x284
	// Line 181, Address: 0x329558, Func Offset: 0x288
	// Line 182, Address: 0x32955c, Func Offset: 0x28c
	// Line 185, Address: 0x329560, Func Offset: 0x290
	// Line 189, Address: 0x32956c, Func Offset: 0x29c
	// Line 188, Address: 0x329570, Func Offset: 0x2a0
	// Line 189, Address: 0x329578, Func Offset: 0x2a8
	// Line 192, Address: 0x329590, Func Offset: 0x2c0
	// Line 190, Address: 0x329594, Func Offset: 0x2c4
	// Line 192, Address: 0x329598, Func Offset: 0x2c8
	// Line 193, Address: 0x3295a8, Func Offset: 0x2d8
	// Line 194, Address: 0x3295b8, Func Offset: 0x2e8
	// Line 195, Address: 0x3295c8, Func Offset: 0x2f8
	// Line 201, Address: 0x3295dc, Func Offset: 0x30c
	// Line 195, Address: 0x3295e4, Func Offset: 0x314
	// Line 196, Address: 0x3295e8, Func Offset: 0x318
	// Line 199, Address: 0x3295f4, Func Offset: 0x324
	// Line 209, Address: 0x3295f8, Func Offset: 0x328
	// Line 208, Address: 0x3295fc, Func Offset: 0x32c
	// Line 209, Address: 0x329600, Func Offset: 0x330
	// Line 199, Address: 0x329604, Func Offset: 0x334
	// Line 200, Address: 0x32960c, Func Offset: 0x33c
	// Line 201, Address: 0x329618, Func Offset: 0x348
	// Line 202, Address: 0x329624, Func Offset: 0x354
	// Line 203, Address: 0x329630, Func Offset: 0x360
	// Line 204, Address: 0x32963c, Func Offset: 0x36c
	// Line 209, Address: 0x32964c, Func Offset: 0x37c
	// Line 210, Address: 0x329660, Func Offset: 0x390
	// Line 211, Address: 0x329674, Func Offset: 0x3a4
	// Line 214, Address: 0x329680, Func Offset: 0x3b0
	// Line 215, Address: 0x329684, Func Offset: 0x3b4
	// Line 218, Address: 0x329688, Func Offset: 0x3b8
	// Line 220, Address: 0x329694, Func Offset: 0x3c4
	// Line 221, Address: 0x3296a8, Func Offset: 0x3d8
	// Line 222, Address: 0x3296b0, Func Offset: 0x3e0
	// Line 223, Address: 0x3296bc, Func Offset: 0x3ec
	// Line 222, Address: 0x3296c0, Func Offset: 0x3f0
	// Line 226, Address: 0x3296c4, Func Offset: 0x3f4
	// Line 227, Address: 0x3296c8, Func Offset: 0x3f8
	// Line 228, Address: 0x3296cc, Func Offset: 0x3fc
	// Line 227, Address: 0x3296d8, Func Offset: 0x408
	// Line 228, Address: 0x3296dc, Func Offset: 0x40c
	// Line 229, Address: 0x3296e8, Func Offset: 0x418
	// Line 230, Address: 0x3296f8, Func Offset: 0x428
	// Line 233, Address: 0x329700, Func Offset: 0x430
	// Line 235, Address: 0x32970c, Func Offset: 0x43c
	// Line 237, Address: 0x329710, Func Offset: 0x440
	// Line 233, Address: 0x329714, Func Offset: 0x444
	// Line 234, Address: 0x32971c, Func Offset: 0x44c
	// Line 235, Address: 0x329730, Func Offset: 0x460
	// Line 236, Address: 0x329740, Func Offset: 0x470
	// Line 239, Address: 0x329764, Func Offset: 0x494
	// Line 237, Address: 0x329768, Func Offset: 0x498
	// Line 239, Address: 0x329774, Func Offset: 0x4a4
	// Line 242, Address: 0x329798, Func Offset: 0x4c8
	// Line 248, Address: 0x3297b0, Func Offset: 0x4e0
	// Line 247, Address: 0x3297b4, Func Offset: 0x4e4
	// Line 248, Address: 0x3297b8, Func Offset: 0x4e8
	// Line 242, Address: 0x3297bc, Func Offset: 0x4ec
	// Line 243, Address: 0x3297c0, Func Offset: 0x4f0
	// Line 246, Address: 0x3297d0, Func Offset: 0x500
	// Line 252, Address: 0x3297d4, Func Offset: 0x504
	// Line 246, Address: 0x3297d8, Func Offset: 0x508
	// Line 247, Address: 0x3297e0, Func Offset: 0x510
	// Line 248, Address: 0x3297ec, Func Offset: 0x51c
	// Line 249, Address: 0x3297f8, Func Offset: 0x528
	// Line 250, Address: 0x329804, Func Offset: 0x534
	// Line 251, Address: 0x329810, Func Offset: 0x540
	// Line 254, Address: 0x329828, Func Offset: 0x558
	// Line 264, Address: 0x329840, Func Offset: 0x570
	// Line 265, Address: 0x32984c, Func Offset: 0x57c
	// Line 266, Address: 0x329868, Func Offset: 0x598
	// Line 267, Address: 0x32986c, Func Offset: 0x59c
	// Func End, Address: 0x32989c, Func Offset: 0x5cc
}

// xUpdateCull_DistanceSquaredCB__FPvPv
// Start address: 0x3298a0
uint32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata)
{
	FloatAndVoid fandv;
	xVec3* campos;
	// Line 92, Address: 0x3298a0, Func Offset: 0
	// Line 93, Address: 0x3298b0, Func Offset: 0x10
	// Line 100, Address: 0x3298b8, Func Offset: 0x18
	// Line 101, Address: 0x3298c0, Func Offset: 0x20
	// Line 96, Address: 0x3298c4, Func Offset: 0x24
	// Line 100, Address: 0x3298c8, Func Offset: 0x28
	// Line 101, Address: 0x3298f0, Func Offset: 0x50
	// Line 102, Address: 0x329918, Func Offset: 0x78
	// Func End, Address: 0x329920, Func Offset: 0x80
}

// xUpdateCull_AlwaysTrueCB__FPvPv
// Start address: 0x329920
uint32 xUpdateCull_AlwaysTrueCB()
{
	// Line 86, Address: 0x329920, Func Offset: 0
	// Func End, Address: 0x329928, Func Offset: 0x8
}

// xUpdateCull_Swap__FP14xUpdateCullMgrUiUi
// Start address: 0x329930
void xUpdateCull_Swap(xUpdateCullMgr* m, uint32 a, uint32 b)
{
	xUpdateCullEnt* cullA;
	xUpdateCullEnt* cullB;
	xUpdateCullEnt* curr;
	void* tmpent;
	xUpdateCullEnt* tmpmgr;
	// Line 26, Address: 0x329930, Func Offset: 0
	// Line 27, Address: 0x32993c, Func Offset: 0xc
	// Line 28, Address: 0x329944, Func Offset: 0x14
	// Line 32, Address: 0x32994c, Func Offset: 0x1c
	// Line 34, Address: 0x329950, Func Offset: 0x20
	// Line 35, Address: 0x329954, Func Offset: 0x24
	// Line 36, Address: 0x329958, Func Offset: 0x28
	// Line 38, Address: 0x329968, Func Offset: 0x38
	// Line 39, Address: 0x32996c, Func Offset: 0x3c
	// Line 40, Address: 0x329970, Func Offset: 0x40
	// Line 41, Address: 0x329974, Func Offset: 0x44
	// Line 42, Address: 0x329978, Func Offset: 0x48
	// Line 47, Address: 0x329990, Func Offset: 0x60
	// Line 46, Address: 0x329994, Func Offset: 0x64
	// Line 47, Address: 0x329998, Func Offset: 0x68
	// Line 48, Address: 0x3299a0, Func Offset: 0x70
	// Line 52, Address: 0x3299b4, Func Offset: 0x84
	// Line 51, Address: 0x3299b8, Func Offset: 0x88
	// Line 52, Address: 0x3299bc, Func Offset: 0x8c
	// Line 53, Address: 0x3299c4, Func Offset: 0x94
	// Line 54, Address: 0x3299cc, Func Offset: 0x9c
	// Func End, Address: 0x3299d4, Func Offset: 0xa4
}

