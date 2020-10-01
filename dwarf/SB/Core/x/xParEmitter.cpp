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
typedef u32(*type_2)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(void*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_7)(xEnt*, xScene*, f32);
typedef void(*type_8)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_10)(xEnt*);
typedef void(*type_11)(xAnimPlay*, xAnimState*);
typedef void(*type_14)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef void(*type_16)(void*, xParGroup*);
typedef u32(*type_18)(void*, void*);
typedef void(*type_19)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef void(*type_22)(xEnt*, xVec3*);
typedef u32(*type_25)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_28)(RxNodeDefinition*);
typedef void(*type_30)(RxNodeDefinition*);
typedef s32(*type_34)(RxPipelineNode*);
typedef xBase*(*type_35)(u32);
typedef void(*type_36)(xEnt*, xScene*, f32, xEntCollis*);
typedef s8*(*type_38)(xBase*);
typedef s8*(*type_39)(u32);
typedef u32(*type_42)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_43)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_60)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpClump*(*type_61)(RpClump*, void*);
typedef RwCamera*(*type_63)(RwCamera*);
typedef void(*type_68)(xMemPool*, void*);
typedef RpAtomic*(*type_75)(RpAtomic*);
typedef void(*type_77)(RwResEntry*);
typedef void(*type_81)(xEnt*, xScene*, f32, xEntFrame*);

typedef u8 type_1[22];
typedef u8 type_5[22];
typedef RwTexCoords* type_9[8];
typedef xVec3 type_12[4];
typedef f32 type_13[4];
typedef u8 type_17[3];
typedef RpLight* type_20[2];
typedef RwFrustumPlane type_23[6];
typedef RwFrame* type_24[2];
typedef RwV3d type_27[8];
typedef u8 type_29[3];
typedef u8 type_31[3];
typedef f32 type_32[22];
typedef xCollis type_33[18];
typedef f32 type_37[22];
typedef f32 type_40[2];
typedef u8 type_41[4];
typedef analog_data type_44[2];
typedef f32 type_45[2];
typedef u8 type_46[2];
typedef u8 type_47[2];
typedef f32 type_48[4];
typedef u8 type_50[3];
typedef u16 type_51[3];
typedef f32 type_52[2];
typedef u8 type_53[2];
typedef xVec4 type_54[12];
typedef xAnimMultiFileEntry type_55[1];
typedef f32 type_56[4];
typedef u32 type_57[4];
typedef f32 type_58[4];
typedef xParInterp type_59[1];
typedef RwTexCoords* type_62[8];
typedef xParInterp type_64[4];
typedef xVec3 type_65[3];
typedef s8 type_66[128];
typedef type_66 type_67[6];
typedef xParInterp type_69[4];
typedef u16 type_70[3];
typedef s8 type_71[32];
typedef s8 type_72[4];
typedef s8 type_73[16];
typedef s8 type_74[32];
typedef s8 type_76[32];
typedef u8 type_78[3];
typedef f32 type_79[16];
typedef s8 type_80[16];
typedef RxCluster type_82[1];

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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	u32 filterAddressing;
	s32 refCount;
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_29 emit_pad;
	type_31 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	type_35 resolvID;
	type_38 base2Name;
	type_39 id2Name;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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

struct xParCmd
{
	u32 flag;
	xParCmdAsset* tasset;
};

struct RpTriangle
{
	type_70 vertIndex;
	s16 matIndex;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
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
	s32 memlvl;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xParCmdTex : xParCmdAsset
{
	f32 x1;
	f32 y1;
	f32 x2;
	f32 y2;
	u8 birthMode;
	u8 rows;
	u8 cols;
	u8 unit_count;
	f32 unit_width;
	f32 unit_height;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	f32 m_lifetime;
	type_41 m_c;
	xVec3 m_pos;
	f32 m_size;
	xVec3 m_vel;
	f32 m_sizeVel;
	u8 m_flag;
	u8 m_mode;
	type_47 m_texIdx;
	type_50 m_rotdeg;
	u8 pad8;
	f32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_56 m_cvel;
	type_58 m_cfl;
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

struct xSurface
{
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_55 Files;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct xFFX
{
};

struct RpWorld
{
	RwObject object;
	u32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	s32 numTexCoordSets;
	s32 numClumpsInWorld;
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
	u16 index;
	s16 groupIndex;
	type_18 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RpSector
{
	s32 type;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_79 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	s32 m_num_of_particles;
	u8 m_alive;
	u8 m_killWhenDead;
	u8 m_active;
	u8 m_visible;
	u8 m_culled;
	u8 m_priority;
	u8 m_flags;
	u8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	type_16 draw;
	xParCmdTex* m_cmdTex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xParEmitterAsset : xBaseAsset
{
	u8 emit_flags;
	u8 emit_type;
	u16 pad;
	u32 propID;
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
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	u32 cull_mode;
	f32 cull_dist_sqr;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_60 eventFunc;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xJSPHeader
{
	type_72 idtag;
	u32 version;
	u32 jspNodeCount;
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
	_class_0 anim_coll;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_52 radius;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct anim_coll_data
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
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
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_67 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_76 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	s32 fog_t0;
	s32 fog_t1;
	s32 option_vibration;
	u32 QuarterSpeed;
	f32 update_dt;
	s32 useHIPHOP;
	u8 NoMusic;
	s8 currentActivePad;
	u8 firstStartPressed;
	u32 minVSyncCnt;
	u8 dontShowPadMessageDuringLoadingOrCutScene;
	u8 autoSaveFeature;
};

struct xParInterp
{
	type_40 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_49 Conditional;
	type_49 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	type_11 BeforeEnter;
	type_14 StateCallback;
	type_19 BeforeAnimMatrices;
};

struct xParCmdAsset
{
	u32 type;
	u8 enabled;
	u8 mode;
	type_46 pad;
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

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct rxReq
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xParSys : xBase
{
	xParSysAsset* tasset;
	u32 cmdCount;
	xParCmd* cmd;
	xParSys* parent;
	xParGroup* group;
	u8 visible;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_53 NumAnims;
	void** RawData;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_48 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct _class_0
{
	xVec3* verts;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_45 BilinearLerp;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
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
	type_33 colls;
	type_36 post;
	type_2 depenq;
};

struct xSerial
{
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullMgr
{
	u32 entCount;
	u32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	u32 mgrCount;
	u32 mgrCurr;
	xUpdateCullEnt* mgrList;
	u32 grpCount;
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
	u8 flags;
	u8 type;
	u8 bone;
	u8 pad1;
	xVec3 offset;
	f32 radius;
	f32 deflection;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xAnimMultiFileBase
{
	u32 Count;
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
	f32 fov;
	u32 flags;
	f32 tmr;
	f32 tm_acc;
	f32 tm_dec;
	f32 ltmr;
	f32 ltm_acc;
	f32 ltm_dec;
	f32 dmin;
	f32 dmax;
	f32 dcur;
	f32 dgoal;
	f32 hmin;
	f32 hmax;
	f32 hcur;
	f32 hgoal;
	f32 pmin;
	f32 pmax;
	f32 pcur;
	f32 pgoal;
	f32 depv;
	f32 hepv;
	f32 pepv;
	f32 orn_epv;
	f32 yaw_epv;
	f32 pitch_epv;
	f32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	f32 yaw_cur;
	f32 yaw_goal;
	f32 pitch_cur;
	f32 pitch_goal;
	f32 roll_cur;
	f32 roll_goal;
	f32 dct;
	f32 dcd;
	f32 dccv;
	f32 dcsv;
	f32 hct;
	f32 hcd;
	f32 hccv;
	f32 hcsv;
	f32 pct;
	f32 pcd;
	f32 pccv;
	f32 pcsv;
	f32 orn_ct;
	f32 orn_cd;
	f32 orn_ccv;
	f32 orn_csv;
	f32 yaw_ct;
	f32 yaw_cd;
	f32 yaw_ccv;
	f32 yaw_csv;
	f32 pitch_ct;
	f32 pitch_cd;
	f32 pitch_ccv;
	f32 pitch_csv;
	f32 roll_ct;
	f32 roll_cd;
	f32 roll_ccv;
	f32 roll_csv;
	type_54 frustplane;
};

struct iFogParams
{
	RwFogType type;
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
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
	f32 r;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
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
	u16 matIndex;
	type_51 vertIndex;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct _class_1
{
	f32 t;
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
	type_19 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
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
	u8 type;
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
	f32 radius;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_78 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
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
	type_9 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagEmitSphere
{
	f32 radius;
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
	u32 reserved;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
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
	u32 mode;
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

struct _tagxPad
{
	type_1 value;
	type_5 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_32 up_tmr;
	type_37 down_tmr;
	type_44 analog;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_68 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	f32 x_len;
	f32 z_len;
};

struct xShadowSimplePoly
{
	type_65 vert;
	xVec3 norm;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct _tagiPad
{
	s32 port;
};

struct xParSysAsset : xBaseAsset
{
	u32 type;
	u32 parentParSysID;
	u32 textureID;
	u8 parFlags;
	u8 priority;
	u16 maxPar;
	u8 renderFunc;
	u8 renderSrcBlendMode;
	u8 renderDstBlendMode;
	u8 cmdCount;
	u32 cmdSize;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct xPEEntBound
{
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_82 clusters;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
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
	u32 matidx;
	type_13 wt;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
void xParEmitterUpdate(xBase* to, f32 dt);
xPar* xParEmitterEmit(xParEmitter* pe, f32 emit_dt, f32 par_dt);
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps);
f32 xParInterpCompute(s32 interp_mode, xParInterp* r, f32 time, s32 time_has_elapsed, f32 lastVal);
xPar* xParEmitterEmitCustom(xParEmitter* p, f32 dt, xParEmitterCustomSettings* info);
s32 xParEmitterEventCB(xBase* to, u32 toEvent);
void xParEmitterSetup(xParEmitter* t);
void xParEmitterInit(xBase* b, xParEmitterAsset* pea);
void xParEmitterInit(void* b, void* tasset);
s32 xParInterpConvertInterpMode(xParInterp* p);

// xParEmitterDestroy__Fv
// Start address: 0x2fcaa0
void xParEmitterDestroy()
{
}

// xParEmitterUpdate__FP5xBaseP6xScenef
// Start address: 0x2fcab0
void xParEmitterUpdate(xBase* to, f32 dt)
{
	xParEmitter* pe;
}

// xParEmitterEmit__FP11xParEmitterff
// Start address: 0x2fcaf0
xPar* xParEmitterEmit(xParEmitter* pe, f32 emit_dt, f32 par_dt)
{
	xPar* last_p;
	xParEmitterAsset* pea;
	xParEmitterPropsAsset* prop;
	s32 rate_has_elapsed;
	f32 rate;
	s32 count;
	xParSys* ps;
	xPar* p;
	f32 life;
	f32 size_birth;
	f32 size_death;
	xVec3 emitPosition;
	xBase* attachObject;
	s32 attachGroupIndex;
	s32 attachGroupTotal;
	s32 emitAgain;
	xBase* emitObj;
	s32 marker;
	xGroup* g;
	u32 get_rnd_group_idx;
	xEnt* attach_ent;
	xMat4x3* bone_mat;
	xVec3 bone_vel;
	s32 i;
	s32 c;
	f32 fc1;
	f32 fc2;
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
f32 xParInterpCompute(s32 interp_mode, xParInterp* r, f32 time, s32 time_has_elapsed, f32 lastVal)
{
	f32 val;
}

// xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
// Start address: 0x2fd8e0
xPar* xParEmitterEmitCustom(xParEmitter* p, f32 dt, xParEmitterCustomSettings* info)
{
	u32 flags;
	xParEmitterAsset* pe;
}

// xParEmitterEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2fdd30
s32 xParEmitterEventCB(xBase* to, u32 toEvent)
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
	s32 i;
}

// xParEmitterInit__FPvPv
// Start address: 0x2fe1b0
void xParEmitterInit(void* b, void* tasset)
{
}

// xParInterpConvertInterpMode__FP10xParInterp
// Start address: 0x2fe1c0
s32 xParInterpConvertInterpMode(xParInterp* p)
{
}

