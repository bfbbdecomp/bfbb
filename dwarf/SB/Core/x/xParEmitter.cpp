typedef struct xEnt;
typedef struct xGridBound;
typedef struct xCollis;
typedef enum RpWorldRenderOrder;
typedef struct RwObjectHasFrame;
typedef struct RwTexture;
typedef struct xParEmitter;
typedef struct _tagxRumble;
typedef struct xScene;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef struct RwRaster;
typedef struct xParCmd;
typedef struct RpTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct iEnv;
typedef struct RwV2d;
typedef struct xParCmdTex;
typedef struct xPar;
typedef struct RxPipeline;
typedef struct xSurface;
typedef struct RwRGBA;
typedef struct xGroup;
typedef struct RxNodeDefinition;
typedef struct xAnimMultiFile;
typedef struct _tagEmitVolume;
typedef struct xFFX;
typedef struct RpWorld;
typedef struct xUpdateCullEnt;
typedef struct RwTexCoords;
typedef struct RpSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xModelBucket;
typedef struct xLightKitLight;
typedef struct xGroupAsset;
typedef struct RpMeshHeader;
typedef struct xParGroup;
typedef struct RxPipelineCluster;
typedef struct xParEmitterAsset;
typedef struct xBase;
typedef struct RwResEntry;
typedef struct RxPipelineNodeParam;
typedef struct RpWorldSector;
typedef struct xShadowSimpleCache;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct xParEmitterPropsAsset;
typedef struct RwBBox;
typedef struct xJSPHeader;
typedef struct xModelInstance;
typedef struct xVec2;
typedef struct xEntShadow;
typedef struct RpLight;
typedef struct xQuat;
typedef struct xVec3;
typedef struct RwV3d;
typedef struct xLightKit;
typedef struct anim_coll_data;
typedef struct rxHeapBlockHeader;
typedef struct RwFrame;
typedef struct xAnimTransitionList;
typedef struct _tagEmitOffsetPoint;
typedef struct xAnimTable;
typedef struct RxPipelineRequiresCluster;
typedef struct xGlobals;
typedef struct xParInterp;
typedef struct xAnimTransition;
typedef struct xMat4x3;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct xAnimState;
typedef struct xParCmdAsset;
typedef struct RwMatrixTag;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwLLLink;
typedef struct xPEVCyl;
typedef struct analog_data;
typedef struct xAnimMultiFileEntry;
typedef struct rxReq;
typedef struct xAnimActiveEffect;
typedef struct xParSys;
typedef enum RxClusterValidityReq;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct xLinkAsset;
typedef struct xEnv;
typedef struct xClumpCollBSPTree;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct tri_data;
typedef struct xEntCollis;
typedef struct xSerial;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef enum RxNodeDefEditable;
typedef struct xUpdateCullMgr;
typedef enum RxClusterValid;
typedef struct xPEEntBone;
typedef struct xClumpCollBSPTriangle;
typedef struct RpInterpolator;
typedef struct xRot;
typedef struct xAnimMultiFileBase;
typedef struct xCamera;
typedef struct iFogParams;
typedef struct xAnimEffect;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RwCamera;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RpPolygon;
typedef struct xCylinder;
typedef struct _class_1;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct xBox;
typedef struct xPECircle;
typedef struct RxClusterDefinition;
typedef struct xModelPool;
typedef union _class_2;
typedef struct xBound;
typedef struct RpClump;
typedef struct RwSphere;
typedef struct xParEmitterCustomSettings;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct _tagEmitSphere;
typedef struct xMat3x3;
typedef enum _tagPadState;
typedef struct RxClusterRef;
typedef struct xJSPNodeInfo;
typedef struct RwObject;
typedef struct xEntFrame;
typedef struct xQCData;
typedef struct RxIoSpec;
typedef struct xBBox;
typedef struct _tagxPad;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct _tagEmitRect;
typedef struct xShadowSimplePoly;
typedef struct _tagPadAnalog;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct _tagiPad;
typedef struct xParSysAsset;
typedef struct xBaseAsset;
typedef struct RxCluster;
typedef struct xPEEntBound;
typedef struct RxPacket;
typedef struct _tagEmitLine;
typedef enum RwFogType;
typedef struct xModelTag;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef uint32(*type_2)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(void*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_7)(xEnt*, xScene*, float32);
typedef void(*type_8)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_10)(xEnt*);
typedef void(*type_11)(xAnimPlay*, xAnimState*);
typedef void(*type_14)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef void(*type_16)(void*, xParGroup*);
typedef uint32(*type_18)(void*, void*);
typedef void(*type_19)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef void(*type_22)(xEnt*, xVec3*);
typedef uint32(*type_25)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_28)(RxNodeDefinition*);
typedef void(*type_30)(RxNodeDefinition*);
typedef int32(*type_34)(RxPipelineNode*);
typedef xBase*(*type_35)(uint32);
typedef void(*type_36)(xEnt*, xScene*, float32, xEntCollis*);
typedef int8*(*type_38)(xBase*);
typedef int8*(*type_39)(uint32);
typedef uint32(*type_42)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_43)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_60)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpClump*(*type_61)(RpClump*, void*);
typedef RwCamera*(*type_63)(RwCamera*);
typedef void(*type_68)(xMemPool*, void*);
typedef RpAtomic*(*type_75)(RpAtomic*);
typedef void(*type_77)(RwResEntry*);
typedef void(*type_81)(xEnt*, xScene*, float32, xEntFrame*);

typedef uint8 type_1[22];
typedef uint8 type_5[22];
typedef RwTexCoords* type_9[8];
typedef xVec3 type_12[4];
typedef float32 type_13[4];
typedef uint8 type_17[3];
typedef RpLight* type_20[2];
typedef RwFrustumPlane type_23[6];
typedef RwFrame* type_24[2];
typedef RwV3d type_27[8];
typedef uint8 type_29[3];
typedef uint8 type_31[3];
typedef float32 type_32[22];
typedef xCollis type_33[18];
typedef float32 type_37[22];
typedef float32 type_40[2];
typedef uint8 type_41[4];
typedef analog_data type_44[2];
typedef float32 type_45[2];
typedef uint8 type_46[2];
typedef uint8 type_47[2];
typedef float32 type_48[4];
typedef uint8 type_50[3];
typedef uint16 type_51[3];
typedef float32 type_52[2];
typedef uint8 type_53[2];
typedef xVec4 type_54[12];
typedef xAnimMultiFileEntry type_55[1];
typedef float32 type_56[4];
typedef uint32 type_57[4];
typedef float32 type_58[4];
typedef xParInterp type_59[1];
typedef RwTexCoords* type_62[8];
typedef xParInterp type_64[4];
typedef xVec3 type_65[3];
typedef int8 type_66[128];
typedef type_66 type_67[6];
typedef xParInterp type_69[4];
typedef uint16 type_70[3];
typedef int8 type_71[32];
typedef int8 type_72[4];
typedef int8 type_73[16];
typedef int8 type_74[32];
typedef int8 type_76[32];
typedef uint8 type_78[3];
typedef float32 type_79[16];
typedef int8 type_80[16];
typedef RxCluster type_82[1];

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
	type_7 update;
	type_7 endUpdate;
	type_22 bupdate;
	type_81 move;
	type_10 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_8 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_71 name;
	type_74 mask;
	uint32 filterAddressing;
	int32 refCount;
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
	type_29 emit_pad;
	type_31 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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
	type_35 resolvID;
	type_38 base2Name;
	type_39 id2Name;
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

struct xParCmd
{
	uint32 flag;
	xParCmdAsset* tasset;
};

struct RpTriangle
{
	type_70 vertIndex;
	int16 matIndex;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_20 light;
	type_24 light_frame;
	int32 memlvl;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xParCmdTex : xParCmdAsset
{
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	uint8 birthMode;
	uint8 rows;
	uint8 cols;
	uint8 unit_count;
	float32 unit_width;
	float32 unit_height;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	type_41 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_47 m_texIdx;
	type_50 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_56 m_cvel;
	type_58 m_cfl;
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

struct xSurface
{
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_55 Files;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct xFFX
{
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
	type_21 renderCallBack;
	RxPipeline* pipeline;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_18 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RpSector
{
	int32 type;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_79 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_priority;
	uint8 m_flags;
	uint8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	type_16 draw;
	xParCmdTex* m_cmdTex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_60 eventFunc;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_77 destroyNotify;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_62 texCoords;
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
	type_12 corner;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_59 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_64 color_birth;
	type_69 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xJSPHeader
{
	type_72 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_52 radius;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct anim_coll_data
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_57 pad;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_67 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_76 sceneStart;
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

struct xParInterp
{
	type_40 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_49 Conditional;
	type_49 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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
	type_11 BeforeEnter;
	type_14 StateCallback;
	type_19 BeforeAnimMatrices;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	type_46 pad;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct rxReq
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xParSys : xBase
{
	xParSysAsset* tasset;
	uint32 cmdCount;
	xParCmd* cmd;
	xParSys* parent;
	xParGroup* group;
	uint8 visible;
	RwTexture* txtr_particle;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_75 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_48 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_45 BilinearLerp;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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
	type_33 colls;
	type_36 post;
	type_2 depenq;
};

struct xSerial
{
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_4 activateCB;
	type_4 deactivateCB;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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
	type_54 frustplane;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_42 Callback;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_63 beginUpdate;
	type_0 endUpdate;
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
	type_23 frustumPlanes;
	RwBBox frustumBoundBox;
	type_27 frustumCorners;
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

struct RpPolygon
{
	uint16 matIndex;
	type_51 vertIndex;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct _class_1
{
	float32 t;
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
	type_19 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_17 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_61 callback;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_78 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
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
	type_9 texCoords;
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

struct _tagEmitSphere
{
	float32 radius;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _tagxPad
{
	type_1 value;
	type_5 last_value;
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
	type_32 up_tmr;
	type_37 down_tmr;
	type_44 analog;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_68 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RxNodeMethods
{
	type_26 nodeBody;
	type_28 nodeInit;
	type_30 nodeTerm;
	type_34 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xShadowSimplePoly
{
	type_65 vert;
	xVec3 norm;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _tagiPad
{
	int32 port;
};

struct xParSysAsset : xBaseAsset
{
	uint32 type;
	uint32 parentParSysID;
	uint32 textureID;
	uint8 parFlags;
	uint8 priority;
	uint16 maxPar;
	uint8 renderFunc;
	uint8 renderSrcBlendMode;
	uint8 renderDstBlendMode;
	uint8 cmdCount;
	uint32 cmdSize;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_82 clusters;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_13 wt;
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

type_73 buffer;
type_80 buffer;
xParEmitterAsset sSaveEmmiterSettings;
xParEmitterPropsAsset sSaveEmmiterPropSettings;
xParEmitterPropsAsset sDummyProp;
xGlobals* xglobals;
type_43 xParEmitterEventCB;

void xParEmitterDestroy();
void xParEmitterUpdate(xBase* to, float32 dt);
xPar* xParEmitterEmit(xParEmitter* pe, float32 emit_dt, float32 par_dt);
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps);
float32 xParInterpCompute(int32 interp_mode, xParInterp* r, float32 time, int32 time_has_elapsed, float32 lastVal);
xPar* xParEmitterEmitCustom(xParEmitter* p, float32 dt, xParEmitterCustomSettings* info);
int32 xParEmitterEventCB(xBase* to, uint32 toEvent);
void xParEmitterSetup(xParEmitter* t);
void xParEmitterInit(xBase* b, xParEmitterAsset* pea);
void xParEmitterInit(void* b, void* tasset);
int32 xParInterpConvertInterpMode(xParInterp* p);

// xParEmitterDestroy__Fv
// Start address: 0x2fcaa0
void xParEmitterDestroy()
{
}

// xParEmitterUpdate__FP5xBaseP6xScenef
// Start address: 0x2fcab0
void xParEmitterUpdate(xBase* to, float32 dt)
{
	xParEmitter* pe;
}

// xParEmitterEmit__FP11xParEmitterff
// Start address: 0x2fcaf0
xPar* xParEmitterEmit(xParEmitter* pe, float32 emit_dt, float32 par_dt)
{
	xPar* last_p;
	xParEmitterAsset* pea;
	xParEmitterPropsAsset* prop;
	int32 rate_has_elapsed;
	float32 rate;
	int32 count;
	xParSys* ps;
	xPar* p;
	float32 life;
	float32 size_birth;
	float32 size_death;
	xVec3 emitPosition;
	xBase* attachObject;
	int32 attachGroupIndex;
	int32 attachGroupTotal;
	int32 emitAgain;
	xBase* emitObj;
	int32 marker;
	xGroup* g;
	uint32 get_rnd_group_idx;
	xEnt* attach_ent;
	xMat4x3* bone_mat;
	xVec3 bone_vel;
	int32 i;
	int32 c;
	float32 fc1;
	float32 fc2;
	xBase* obj;
}

// xParEmitterEmitSetTexIdxs__FP4xParPC7xParSys
// Start address: 0x2fd680
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps)
{
	xParCmdTex* tex;
}

// xParInterpCompute__FiP10xParInterpfif
// Start address: 0x2fd740
float32 xParInterpCompute(int32 interp_mode, xParInterp* r, float32 time, int32 time_has_elapsed, float32 lastVal)
{
	float32 val;
}

// xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
// Start address: 0x2fd8e0
xPar* xParEmitterEmitCustom(xParEmitter* p, float32 dt, xParEmitterCustomSettings* info)
{
	uint32 flags;
	xParEmitterAsset* pe;
}

// xParEmitterEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2fdd30
int32 xParEmitterEventCB(xBase* to, uint32 toEvent)
{
	xParEmitter* t;
	xParEmitterCustomSettings fake_settings;
}

// xParEmitterSetup__FP11xParEmitter
// Start address: 0x2fde00
void xParEmitterSetup(xParEmitter* t)
{
	xEnt* ent;
}

// xParEmitterInit__FP5xBaseP16xParEmitterAsset
// Start address: 0x2fdee0
void xParEmitterInit(xBase* b, xParEmitterAsset* pea)
{
	xParEmitterPropsAsset* prop;
	xParEmitter* t;
	int32 i;
}

// xParEmitterInit__FPvPv
// Start address: 0x2fe1b0
void xParEmitterInit(void* b, void* tasset)
{
}

// xParInterpConvertInterpMode__FP10xParInterp
// Start address: 0x2fe1c0
int32 xParInterpConvertInterpMode(xParInterp* p)
{
}

