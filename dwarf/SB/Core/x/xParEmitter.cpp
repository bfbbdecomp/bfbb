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
typedef struct _class_2;
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
typedef int8 type_67[128][6];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	uint16 vertIndex[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint8 m_c[4];
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_texIdx[2];
	uint8 m_rotdeg[3];
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	float32 m_cvel[4];
	float32 m_cfl[4];
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
	xAnimMultiFileEntry Files[1];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
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
	float32 matrix[16];
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
	void(*draw)(void*, xParGroup*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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
	float32 radius[2];
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
	uint32 pad[4];
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

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint8 NumAnims[2];
	void** RawData;
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	xVec4 frustplane[12];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint16 vertIndex[3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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
	uint8 rot[3];
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	RxCluster clusters[1];
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
	float32 wt[4];
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

int8 buffer[16];
int8 buffer[16];
xParEmitterAsset sSaveEmmiterSettings;
xParEmitterPropsAsset sSaveEmmiterPropSettings;
xParEmitterPropsAsset sDummyProp;
xGlobals* xglobals;
int32(*xParEmitterEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

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
	// Line 1160, Address: 0x2fcaa0, Func Offset: 0
	// Func End, Address: 0x2fcaa8, Func Offset: 0x8
}

// xParEmitterUpdate__FP5xBaseP6xScenef
// Start address: 0x2fcab0
void xParEmitterUpdate(xBase* to, float32 dt)
{
	xParEmitter* pe;
	// Line 1143, Address: 0x2fcab0, Func Offset: 0
	// Line 1148, Address: 0x2fcab8, Func Offset: 0x8
	// Line 1151, Address: 0x2fcac4, Func Offset: 0x14
	// Line 1153, Address: 0x2fcad4, Func Offset: 0x24
	// Line 1154, Address: 0x2fcadc, Func Offset: 0x2c
	// Line 1155, Address: 0x2fcae0, Func Offset: 0x30
	// Func End, Address: 0x2fcaec, Func Offset: 0x3c
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
	// Line 637, Address: 0x2fcaf0, Func Offset: 0
	// Line 638, Address: 0x2fcb38, Func Offset: 0x48
	// Line 639, Address: 0x2fcb48, Func Offset: 0x58
	// Line 641, Address: 0x2fcb50, Func Offset: 0x60
	// Line 652, Address: 0x2fcb54, Func Offset: 0x64
	// Line 644, Address: 0x2fcb58, Func Offset: 0x68
	// Line 646, Address: 0x2fcb5c, Func Offset: 0x6c
	// Line 652, Address: 0x2fcb60, Func Offset: 0x70
	// Line 653, Address: 0x2fcb6c, Func Offset: 0x7c
	// Line 655, Address: 0x2fcb80, Func Offset: 0x90
	// Line 659, Address: 0x2fcb94, Func Offset: 0xa4
	// Line 660, Address: 0x2fcba0, Func Offset: 0xb0
	// Line 666, Address: 0x2fcbc4, Func Offset: 0xd4
	// Line 670, Address: 0x2fcbd8, Func Offset: 0xe8
	// Line 672, Address: 0x2fcbdc, Func Offset: 0xec
	// Line 673, Address: 0x2fcbe8, Func Offset: 0xf8
	// Line 675, Address: 0x2fcbf4, Func Offset: 0x104
	// Line 677, Address: 0x2fcc0c, Func Offset: 0x11c
	// Line 678, Address: 0x2fcc18, Func Offset: 0x128
	// Line 680, Address: 0x2fcc30, Func Offset: 0x140
	// Line 681, Address: 0x2fcc3c, Func Offset: 0x14c
	// Line 690, Address: 0x2fcc48, Func Offset: 0x158
	// Line 691, Address: 0x2fcc50, Func Offset: 0x160
	// Line 694, Address: 0x2fcc5c, Func Offset: 0x16c
	// Line 695, Address: 0x2fcc64, Func Offset: 0x174
	// Line 694, Address: 0x2fcc68, Func Offset: 0x178
	// Line 699, Address: 0x2fcc6c, Func Offset: 0x17c
	// Line 700, Address: 0x2fcc74, Func Offset: 0x184
	// Line 703, Address: 0x2fcc88, Func Offset: 0x198
	// Line 705, Address: 0x2fcca0, Func Offset: 0x1b0
	// Line 712, Address: 0x2fcca8, Func Offset: 0x1b8
	// Line 715, Address: 0x2fccc0, Func Offset: 0x1d0
	// Line 730, Address: 0x2fccc8, Func Offset: 0x1d8
	// Line 733, Address: 0x2fcce8, Func Offset: 0x1f8
	// Line 734, Address: 0x2fccec, Func Offset: 0x1fc
	// Line 742, Address: 0x2fccf0, Func Offset: 0x200
	// Line 745, Address: 0x2fccf8, Func Offset: 0x208
	// Line 746, Address: 0x2fcd00, Func Offset: 0x210
	// Line 810, Address: 0x2fcd08, Func Offset: 0x218
	// Line 750, Address: 0x2fcd0c, Func Offset: 0x21c
	// Line 755, Address: 0x2fcd10, Func Offset: 0x220
	// Line 810, Address: 0x2fcd14, Func Offset: 0x224
	// Line 812, Address: 0x2fcd1c, Func Offset: 0x22c
	// Line 816, Address: 0x2fcd2c, Func Offset: 0x23c
	// Line 818, Address: 0x2fcd3c, Func Offset: 0x24c
	// Line 819, Address: 0x2fcd48, Func Offset: 0x258
	// Line 820, Address: 0x2fcd4c, Func Offset: 0x25c
	// Line 823, Address: 0x2fcd50, Func Offset: 0x260
	// Line 825, Address: 0x2fcd68, Func Offset: 0x278
	// Line 827, Address: 0x2fcd74, Func Offset: 0x284
	// Line 825, Address: 0x2fcd78, Func Offset: 0x288
	// Line 827, Address: 0x2fcd88, Func Offset: 0x298
	// Line 830, Address: 0x2fcd94, Func Offset: 0x2a4
	// Line 833, Address: 0x2fcd9c, Func Offset: 0x2ac
	// Line 834, Address: 0x2fcdb8, Func Offset: 0x2c8
	// Line 837, Address: 0x2fcdc0, Func Offset: 0x2d0
	// Line 840, Address: 0x2fcdc8, Func Offset: 0x2d8
	// Line 841, Address: 0x2fcdd8, Func Offset: 0x2e8
	// Line 844, Address: 0x2fcde0, Func Offset: 0x2f0
	// Line 845, Address: 0x2fcdfc, Func Offset: 0x30c
	// Line 846, Address: 0x2fce04, Func Offset: 0x314
	// Line 849, Address: 0x2fce08, Func Offset: 0x318
	// Line 850, Address: 0x2fce14, Func Offset: 0x324
	// Line 854, Address: 0x2fce20, Func Offset: 0x330
	// Line 857, Address: 0x2fce28, Func Offset: 0x338
	// Line 859, Address: 0x2fce2c, Func Offset: 0x33c
	// Line 863, Address: 0x2fce30, Func Offset: 0x340
	// Line 865, Address: 0x2fce38, Func Offset: 0x348
	// Line 867, Address: 0x2fce40, Func Offset: 0x350
	// Line 868, Address: 0x2fce48, Func Offset: 0x358
	// Line 867, Address: 0x2fce4c, Func Offset: 0x35c
	// Line 869, Address: 0x2fce60, Func Offset: 0x370
	// Line 872, Address: 0x2fce68, Func Offset: 0x378
	// Line 875, Address: 0x2fce80, Func Offset: 0x390
	// Line 876, Address: 0x2fce88, Func Offset: 0x398
	// Line 875, Address: 0x2fce8c, Func Offset: 0x39c
	// Line 877, Address: 0x2fcea4, Func Offset: 0x3b4
	// Line 878, Address: 0x2fceac, Func Offset: 0x3bc
	// Line 879, Address: 0x2fceb0, Func Offset: 0x3c0
	// Line 882, Address: 0x2fced0, Func Offset: 0x3e0
	// Line 881, Address: 0x2fced8, Func Offset: 0x3e8
	// Line 882, Address: 0x2fcedc, Func Offset: 0x3ec
	// Line 883, Address: 0x2fcee4, Func Offset: 0x3f4
	// Line 885, Address: 0x2fcef0, Func Offset: 0x400
	// Line 889, Address: 0x2fcf10, Func Offset: 0x420
	// Line 892, Address: 0x2fcf18, Func Offset: 0x428
	// Line 898, Address: 0x2fcf38, Func Offset: 0x448
	// Line 903, Address: 0x2fcf68, Func Offset: 0x478
	// Line 905, Address: 0x2fcf6c, Func Offset: 0x47c
	// Line 907, Address: 0x2fcf84, Func Offset: 0x494
	// Line 908, Address: 0x2fcf94, Func Offset: 0x4a4
	// Line 907, Address: 0x2fcf98, Func Offset: 0x4a8
	// Line 908, Address: 0x2fcf9c, Func Offset: 0x4ac
	// Line 909, Address: 0x2fcfc4, Func Offset: 0x4d4
	// Line 914, Address: 0x2fcfc8, Func Offset: 0x4d8
	// Line 916, Address: 0x2fcfd8, Func Offset: 0x4e8
	// Line 919, Address: 0x2fcfec, Func Offset: 0x4fc
	// Line 916, Address: 0x2fcff0, Func Offset: 0x500
	// Line 919, Address: 0x2fcffc, Func Offset: 0x50c
	// Line 916, Address: 0x2fd000, Func Offset: 0x510
	// Line 917, Address: 0x2fd04c, Func Offset: 0x55c
	// Line 916, Address: 0x2fd050, Func Offset: 0x560
	// Line 919, Address: 0x2fd058, Func Offset: 0x568
	// Line 917, Address: 0x2fd05c, Func Offset: 0x56c
	// Line 919, Address: 0x2fd07c, Func Offset: 0x58c
	// Line 920, Address: 0x2fd0a0, Func Offset: 0x5b0
	// Line 921, Address: 0x2fd0a8, Func Offset: 0x5b8
	// Line 927, Address: 0x2fd0b8, Func Offset: 0x5c8
	// Line 929, Address: 0x2fd0c8, Func Offset: 0x5d8
	// Line 930, Address: 0x2fd0d8, Func Offset: 0x5e8
	// Line 933, Address: 0x2fd0e0, Func Offset: 0x5f0
	// Line 941, Address: 0x2fd0e4, Func Offset: 0x5f4
	// Line 945, Address: 0x2fd0fc, Func Offset: 0x60c
	// Line 941, Address: 0x2fd10c, Func Offset: 0x61c
	// Line 945, Address: 0x2fd110, Func Offset: 0x620
	// Line 946, Address: 0x2fd118, Func Offset: 0x628
	// Line 945, Address: 0x2fd128, Func Offset: 0x638
	// Line 946, Address: 0x2fd12c, Func Offset: 0x63c
	// Line 954, Address: 0x2fd134, Func Offset: 0x644
	// Line 955, Address: 0x2fd138, Func Offset: 0x648
	// Line 957, Address: 0x2fd13c, Func Offset: 0x64c
	// Line 958, Address: 0x2fd148, Func Offset: 0x658
	// Line 960, Address: 0x2fd150, Func Offset: 0x660
	// Line 962, Address: 0x2fd160, Func Offset: 0x670
	// Line 964, Address: 0x2fd164, Func Offset: 0x674
	// Line 968, Address: 0x2fd168, Func Offset: 0x678
	// Line 964, Address: 0x2fd174, Func Offset: 0x684
	// Line 965, Address: 0x2fd178, Func Offset: 0x688
	// Line 966, Address: 0x2fd180, Func Offset: 0x690
	// Line 970, Address: 0x2fd188, Func Offset: 0x698
	// Line 971, Address: 0x2fd1a0, Func Offset: 0x6b0
	// Line 970, Address: 0x2fd1b0, Func Offset: 0x6c0
	// Line 971, Address: 0x2fd1b4, Func Offset: 0x6c4
	// Line 974, Address: 0x2fd1bc, Func Offset: 0x6cc
	// Line 975, Address: 0x2fd1fc, Func Offset: 0x70c
	// Line 974, Address: 0x2fd200, Func Offset: 0x710
	// Line 977, Address: 0x2fd208, Func Offset: 0x718
	// Line 975, Address: 0x2fd20c, Func Offset: 0x71c
	// Line 977, Address: 0x2fd210, Func Offset: 0x720
	// Line 975, Address: 0x2fd214, Func Offset: 0x724
	// Line 977, Address: 0x2fd220, Func Offset: 0x730
	// Line 980, Address: 0x2fd228, Func Offset: 0x738
	// Line 983, Address: 0x2fd248, Func Offset: 0x758
	// Line 986, Address: 0x2fd2d8, Func Offset: 0x7e8
	// Line 989, Address: 0x2fd300, Func Offset: 0x810
	// Line 990, Address: 0x2fd310, Func Offset: 0x820
	// Line 993, Address: 0x2fd318, Func Offset: 0x828
	// Line 994, Address: 0x2fd328, Func Offset: 0x838
	// Line 997, Address: 0x2fd330, Func Offset: 0x840
	// Line 998, Address: 0x2fd340, Func Offset: 0x850
	// Line 1001, Address: 0x2fd348, Func Offset: 0x858
	// Line 1002, Address: 0x2fd358, Func Offset: 0x868
	// Line 1005, Address: 0x2fd360, Func Offset: 0x870
	// Line 1006, Address: 0x2fd370, Func Offset: 0x880
	// Line 1009, Address: 0x2fd378, Func Offset: 0x888
	// Line 1010, Address: 0x2fd388, Func Offset: 0x898
	// Line 1013, Address: 0x2fd390, Func Offset: 0x8a0
	// Line 1014, Address: 0x2fd3a4, Func Offset: 0x8b4
	// Line 1016, Address: 0x2fd3ac, Func Offset: 0x8bc
	// Line 1017, Address: 0x2fd3b0, Func Offset: 0x8c0
	// Line 1018, Address: 0x2fd3c4, Func Offset: 0x8d4
	// Line 1020, Address: 0x2fd3cc, Func Offset: 0x8dc
	// Line 1021, Address: 0x2fd3d0, Func Offset: 0x8e0
	// Line 1022, Address: 0x2fd3e4, Func Offset: 0x8f4
	// Line 1024, Address: 0x2fd3ec, Func Offset: 0x8fc
	// Line 1025, Address: 0x2fd3f0, Func Offset: 0x900
	// Line 1026, Address: 0x2fd400, Func Offset: 0x910
	// Line 1031, Address: 0x2fd408, Func Offset: 0x918
	// Line 1032, Address: 0x2fd40c, Func Offset: 0x91c
	// Line 1033, Address: 0x2fd414, Func Offset: 0x924
	// Line 1034, Address: 0x2fd424, Func Offset: 0x934
	// Line 1038, Address: 0x2fd438, Func Offset: 0x948
	// Line 1044, Address: 0x2fd448, Func Offset: 0x958
	// Line 1047, Address: 0x2fd450, Func Offset: 0x960
	// Line 1048, Address: 0x2fd468, Func Offset: 0x978
	// Line 1051, Address: 0x2fd470, Func Offset: 0x980
	// Line 1052, Address: 0x2fd480, Func Offset: 0x990
	// Line 1055, Address: 0x2fd488, Func Offset: 0x998
	// Line 1056, Address: 0x2fd498, Func Offset: 0x9a8
	// Line 1059, Address: 0x2fd4a0, Func Offset: 0x9b0
	// Line 1060, Address: 0x2fd4b0, Func Offset: 0x9c0
	// Line 1064, Address: 0x2fd4b8, Func Offset: 0x9c8
	// Line 1066, Address: 0x2fd4c4, Func Offset: 0x9d4
	// Line 1067, Address: 0x2fd4c8, Func Offset: 0x9d8
	// Line 1066, Address: 0x2fd4cc, Func Offset: 0x9dc
	// Line 1067, Address: 0x2fd4d0, Func Offset: 0x9e0
	// Line 1066, Address: 0x2fd4dc, Func Offset: 0x9ec
	// Line 1067, Address: 0x2fd4f0, Func Offset: 0xa00
	// Line 1069, Address: 0x2fd4f8, Func Offset: 0xa08
	// Line 1071, Address: 0x2fd500, Func Offset: 0xa10
	// Line 1072, Address: 0x2fd508, Func Offset: 0xa18
	// Line 1078, Address: 0x2fd518, Func Offset: 0xa28
	// Line 1085, Address: 0x2fd53c, Func Offset: 0xa4c
	// Line 1087, Address: 0x2fd5e8, Func Offset: 0xaf8
	// Line 1118, Address: 0x2fd5f8, Func Offset: 0xb08
	// Line 1121, Address: 0x2fd600, Func Offset: 0xb10
	// Line 1123, Address: 0x2fd604, Func Offset: 0xb14
	// Line 1124, Address: 0x2fd628, Func Offset: 0xb38
	// Line 1127, Address: 0x2fd634, Func Offset: 0xb44
	// Line 1129, Address: 0x2fd638, Func Offset: 0xb48
	// Func End, Address: 0x2fd680, Func Offset: 0xb90
}

// xParEmitterEmitSetTexIdxs__FP4xParPC7xParSys
// Start address: 0x2fd680
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps)
{
	xParCmdTex* tex;
	// Line 600, Address: 0x2fd680, Func Offset: 0
	// Line 605, Address: 0x2fd690, Func Offset: 0x10
	// Line 606, Address: 0x2fd698, Func Offset: 0x18
	// Line 607, Address: 0x2fd6a0, Func Offset: 0x20
	// Line 609, Address: 0x2fd6a8, Func Offset: 0x28
	// Line 616, Address: 0x2fd6d0, Func Offset: 0x50
	// Line 617, Address: 0x2fd6f0, Func Offset: 0x70
	// Line 618, Address: 0x2fd710, Func Offset: 0x90
	// Line 627, Address: 0x2fd718, Func Offset: 0x98
	// Line 628, Address: 0x2fd71c, Func Offset: 0x9c
	// Line 632, Address: 0x2fd720, Func Offset: 0xa0
	// Line 633, Address: 0x2fd728, Func Offset: 0xa8
	// Func End, Address: 0x2fd73c, Func Offset: 0xbc
}

// xParInterpCompute__FiP10xParInterpfif
// Start address: 0x2fd740
float32 xParInterpCompute(int32 interp_mode, xParInterp* r, float32 time, int32 time_has_elapsed, float32 lastVal)
{
	float32 val;
	// Line 543, Address: 0x2fd740, Func Offset: 0
	// Line 546, Address: 0x2fd744, Func Offset: 0x4
	// Line 543, Address: 0x2fd748, Func Offset: 0x8
	// Line 546, Address: 0x2fd754, Func Offset: 0x14
	// Line 550, Address: 0x2fd778, Func Offset: 0x38
	// Line 554, Address: 0x2fd780, Func Offset: 0x40
	// Line 557, Address: 0x2fd788, Func Offset: 0x48
	// Line 559, Address: 0x2fd790, Func Offset: 0x50
	// Line 560, Address: 0x2fd7a4, Func Offset: 0x64
	// Line 565, Address: 0x2fd7b0, Func Offset: 0x70
	// Line 572, Address: 0x2fd7b8, Func Offset: 0x78
	// Line 565, Address: 0x2fd7bc, Func Offset: 0x7c
	// Line 572, Address: 0x2fd7c0, Func Offset: 0x80
	// Line 573, Address: 0x2fd7e0, Func Offset: 0xa0
	// Line 572, Address: 0x2fd7e4, Func Offset: 0xa4
	// Line 573, Address: 0x2fd7e8, Func Offset: 0xa8
	// Line 574, Address: 0x2fd7f4, Func Offset: 0xb4
	// Line 576, Address: 0x2fd7fc, Func Offset: 0xbc
	// Line 577, Address: 0x2fd800, Func Offset: 0xc0
	// Line 578, Address: 0x2fd840, Func Offset: 0x100
	// Line 581, Address: 0x2fd848, Func Offset: 0x108
	// Line 582, Address: 0x2fd888, Func Offset: 0x148
	// Line 586, Address: 0x2fd890, Func Offset: 0x150
	// Line 587, Address: 0x2fd8b0, Func Offset: 0x170
	// Line 589, Address: 0x2fd8b8, Func Offset: 0x178
	// Line 592, Address: 0x2fd8bc, Func Offset: 0x17c
	// Line 595, Address: 0x2fd8c0, Func Offset: 0x180
	// Func End, Address: 0x2fd8d4, Func Offset: 0x194
}

// xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
// Start address: 0x2fd8e0
xPar* xParEmitterEmitCustom(xParEmitter* p, float32 dt, xParEmitterCustomSettings* info)
{
	uint32 flags;
	xParEmitterAsset* pe;
	// Line 389, Address: 0x2fd8e0, Func Offset: 0
	// Line 393, Address: 0x2fd908, Func Offset: 0x28
	// Line 395, Address: 0x2fd90c, Func Offset: 0x2c
	// Line 402, Address: 0x2fd914, Func Offset: 0x34
	// Line 404, Address: 0x2fd91c, Func Offset: 0x3c
	// Line 405, Address: 0x2fd930, Func Offset: 0x50
	// Line 406, Address: 0x2fd944, Func Offset: 0x64
	// Line 412, Address: 0x2fd948, Func Offset: 0x68
	// Line 414, Address: 0x2fd954, Func Offset: 0x74
	// Line 415, Address: 0x2fd96c, Func Offset: 0x8c
	// Line 416, Address: 0x2fd970, Func Offset: 0x90
	// Line 418, Address: 0x2fd97c, Func Offset: 0x9c
	// Line 420, Address: 0x2fd9a8, Func Offset: 0xc8
	// Line 422, Address: 0x2fd9b4, Func Offset: 0xd4
	// Line 424, Address: 0x2fd9e0, Func Offset: 0x100
	// Line 426, Address: 0x2fd9ec, Func Offset: 0x10c
	// Line 427, Address: 0x2fd9f4, Func Offset: 0x114
	// Line 428, Address: 0x2fd9f8, Func Offset: 0x118
	// Line 430, Address: 0x2fda04, Func Offset: 0x124
	// Line 432, Address: 0x2fda30, Func Offset: 0x150
	// Line 434, Address: 0x2fda3c, Func Offset: 0x15c
	// Line 437, Address: 0x2fda68, Func Offset: 0x188
	// Line 439, Address: 0x2fda74, Func Offset: 0x194
	// Line 440, Address: 0x2fda8c, Func Offset: 0x1ac
	// Line 442, Address: 0x2fdaa8, Func Offset: 0x1c8
	// Line 444, Address: 0x2fdab4, Func Offset: 0x1d4
	// Line 446, Address: 0x2fdabc, Func Offset: 0x1dc
	// Line 447, Address: 0x2fdac0, Func Offset: 0x1e0
	// Line 449, Address: 0x2fdacc, Func Offset: 0x1ec
	// Line 450, Address: 0x2fdaf8, Func Offset: 0x218
	// Line 451, Address: 0x2fdb24, Func Offset: 0x244
	// Line 452, Address: 0x2fdb50, Func Offset: 0x270
	// Line 453, Address: 0x2fdb7c, Func Offset: 0x29c
	// Line 454, Address: 0x2fdb80, Func Offset: 0x2a0
	// Line 456, Address: 0x2fdb8c, Func Offset: 0x2ac
	// Line 457, Address: 0x2fdbb8, Func Offset: 0x2d8
	// Line 458, Address: 0x2fdbe4, Func Offset: 0x304
	// Line 459, Address: 0x2fdc10, Func Offset: 0x330
	// Line 460, Address: 0x2fdc3c, Func Offset: 0x35c
	// Line 462, Address: 0x2fdc40, Func Offset: 0x360
	// Line 464, Address: 0x2fdc50, Func Offset: 0x370
	// Line 468, Address: 0x2fdcac, Func Offset: 0x3cc
	// Line 469, Address: 0x2fdcb0, Func Offset: 0x3d0
	// Line 470, Address: 0x2fdcb4, Func Offset: 0x3d4
	// Line 474, Address: 0x2fdcbc, Func Offset: 0x3dc
	// Line 475, Address: 0x2fdcc0, Func Offset: 0x3e0
	// Line 487, Address: 0x2fdcc8, Func Offset: 0x3e8
	// Line 490, Address: 0x2fdcd8, Func Offset: 0x3f8
	// Line 492, Address: 0x2fdce0, Func Offset: 0x400
	// Line 493, Address: 0x2fdcf4, Func Offset: 0x414
	// Line 496, Address: 0x2fdd08, Func Offset: 0x428
	// Line 497, Address: 0x2fdd0c, Func Offset: 0x42c
	// Func End, Address: 0x2fdd30, Func Offset: 0x450
}

// xParEmitterEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2fdd30
int32 xParEmitterEventCB(xBase* to, uint32 toEvent)
{
	xParEmitter* t;
	xParEmitterCustomSettings fake_settings;
	// Line 340, Address: 0x2fdd30, Func Offset: 0
	// Line 346, Address: 0x2fdd34, Func Offset: 0x4
	// Line 340, Address: 0x2fdd38, Func Offset: 0x8
	// Line 346, Address: 0x2fdd40, Func Offset: 0x10
	// Line 350, Address: 0x2fdd70, Func Offset: 0x40
	// Line 351, Address: 0x2fdd84, Func Offset: 0x54
	// Line 353, Address: 0x2fdd8c, Func Offset: 0x5c
	// Line 354, Address: 0x2fdd90, Func Offset: 0x60
	// Line 355, Address: 0x2fdd98, Func Offset: 0x68
	// Line 358, Address: 0x2fdda0, Func Offset: 0x70
	// Line 359, Address: 0x2fddb0, Func Offset: 0x80
	// Line 364, Address: 0x2fddb8, Func Offset: 0x88
	// Line 365, Address: 0x2fddc8, Func Offset: 0x98
	// Line 371, Address: 0x2fdde0, Func Offset: 0xb0
	// Line 370, Address: 0x2fdde8, Func Offset: 0xb8
	// Line 371, Address: 0x2fddec, Func Offset: 0xbc
	// Func End, Address: 0x2fddf4, Func Offset: 0xc4
}

// xParEmitterSetup__FP11xParEmitter
// Start address: 0x2fde00
void xParEmitterSetup(xParEmitter* t)
{
	xEnt* ent;
	// Line 220, Address: 0x2fde00, Func Offset: 0
	// Line 223, Address: 0x2fde10, Func Offset: 0x10
	// Line 225, Address: 0x2fde18, Func Offset: 0x18
	// Line 240, Address: 0x2fde28, Func Offset: 0x28
	// Line 243, Address: 0x2fde40, Func Offset: 0x40
	// Line 246, Address: 0x2fde4c, Func Offset: 0x4c
	// Line 253, Address: 0x2fde70, Func Offset: 0x70
	// Line 255, Address: 0x2fde8c, Func Offset: 0x8c
	// Line 258, Address: 0x2fdeb8, Func Offset: 0xb8
	// Line 275, Address: 0x2fdec4, Func Offset: 0xc4
	// Line 276, Address: 0x2fdec8, Func Offset: 0xc8
	// Func End, Address: 0x2fded8, Func Offset: 0xd8
}

// xParEmitterInit__FP5xBaseP16xParEmitterAsset
// Start address: 0x2fdee0
void xParEmitterInit(xBase* b, xParEmitterAsset* pea)
{
	xParEmitterPropsAsset* prop;
	xParEmitter* t;
	int32 i;
	// Line 105, Address: 0x2fdee0, Func Offset: 0
	// Line 109, Address: 0x2fdf04, Func Offset: 0x24
	// Line 115, Address: 0x2fdf0c, Func Offset: 0x2c
	// Line 116, Address: 0x2fdf18, Func Offset: 0x38
	// Line 121, Address: 0x2fdf1c, Func Offset: 0x3c
	// Line 122, Address: 0x2fdf2c, Func Offset: 0x4c
	// Line 123, Address: 0x2fdf38, Func Offset: 0x58
	// Line 126, Address: 0x2fdf40, Func Offset: 0x60
	// Line 127, Address: 0x2fdf4c, Func Offset: 0x6c
	// Line 129, Address: 0x2fdf60, Func Offset: 0x80
	// Line 132, Address: 0x2fdf68, Func Offset: 0x88
	// Line 136, Address: 0x2fdf6c, Func Offset: 0x8c
	// Line 158, Address: 0x2fdf7c, Func Offset: 0x9c
	// Line 167, Address: 0x2fdf94, Func Offset: 0xb4
	// Line 162, Address: 0x2fdf98, Func Offset: 0xb8
	// Line 165, Address: 0x2fdfa0, Func Offset: 0xc0
	// Line 167, Address: 0x2fdfa4, Func Offset: 0xc4
	// Line 169, Address: 0x2fdfa8, Func Offset: 0xc8
	// Line 170, Address: 0x2fdfbc, Func Offset: 0xdc
	// Line 172, Address: 0x2fdfc8, Func Offset: 0xe8
	// Line 173, Address: 0x2fdfd4, Func Offset: 0xf4
	// Line 175, Address: 0x2fdfe8, Func Offset: 0x108
	// Line 179, Address: 0x2fdfec, Func Offset: 0x10c
	// Line 175, Address: 0x2fdff0, Func Offset: 0x110
	// Line 179, Address: 0x2fdff4, Func Offset: 0x114
	// Line 181, Address: 0x2fe000, Func Offset: 0x120
	// Line 182, Address: 0x2fe014, Func Offset: 0x134
	// Line 186, Address: 0x2fe018, Func Offset: 0x138
	// Line 188, Address: 0x2fe030, Func Offset: 0x150
	// Line 189, Address: 0x2fe044, Func Offset: 0x164
	// Line 194, Address: 0x2fe048, Func Offset: 0x168
	// Line 195, Address: 0x2fe084, Func Offset: 0x1a4
	// Line 196, Address: 0x2fe08c, Func Offset: 0x1ac
	// Line 197, Address: 0x2fe090, Func Offset: 0x1b0
	// Line 198, Address: 0x2fe094, Func Offset: 0x1b4
	// Line 202, Address: 0x2fe0c8, Func Offset: 0x1e8
	// Line 200, Address: 0x2fe0cc, Func Offset: 0x1ec
	// Line 202, Address: 0x2fe0d4, Func Offset: 0x1f4
	// Line 206, Address: 0x2fe0e8, Func Offset: 0x208
	// Line 202, Address: 0x2fe0ec, Func Offset: 0x20c
	// Line 206, Address: 0x2fe0f0, Func Offset: 0x210
	// Line 202, Address: 0x2fe0f4, Func Offset: 0x214
	// Line 206, Address: 0x2fe0fc, Func Offset: 0x21c
	// Line 205, Address: 0x2fe104, Func Offset: 0x224
	// Line 206, Address: 0x2fe114, Func Offset: 0x234
	// Line 207, Address: 0x2fe138, Func Offset: 0x258
	// Line 208, Address: 0x2fe16c, Func Offset: 0x28c
	// Line 210, Address: 0x2fe170, Func Offset: 0x290
	// Line 217, Address: 0x2fe184, Func Offset: 0x2a4
	// Func End, Address: 0x2fe1a8, Func Offset: 0x2c8
}

// xParEmitterInit__FPvPv
// Start address: 0x2fe1b0
void xParEmitterInit(void* b, void* tasset)
{
	// Line 102, Address: 0x2fe1b0, Func Offset: 0
	// Func End, Address: 0x2fe1b8, Func Offset: 0x8
}

// xParInterpConvertInterpMode__FP10xParInterp
// Start address: 0x2fe1c0
int32 xParInterpConvertInterpMode(xParInterp* p)
{
	// Line 69, Address: 0x2fe1c0, Func Offset: 0
	// Line 71, Address: 0x2fe1d4, Func Offset: 0x14
	// Line 72, Address: 0x2fe1e0, Func Offset: 0x20
	// Line 74, Address: 0x2fe1e8, Func Offset: 0x28
	// Line 75, Address: 0x2fe200, Func Offset: 0x40
	// Line 76, Address: 0x2fe208, Func Offset: 0x48
	// Line 77, Address: 0x2fe220, Func Offset: 0x60
	// Line 78, Address: 0x2fe228, Func Offset: 0x68
	// Line 79, Address: 0x2fe240, Func Offset: 0x80
	// Line 80, Address: 0x2fe248, Func Offset: 0x88
	// Line 81, Address: 0x2fe260, Func Offset: 0xa0
	// Line 82, Address: 0x2fe268, Func Offset: 0xa8
	// Line 83, Address: 0x2fe280, Func Offset: 0xc0
	// Line 84, Address: 0x2fe288, Func Offset: 0xc8
	// Line 85, Address: 0x2fe2a0, Func Offset: 0xe0
	// Line 87, Address: 0x2fe2a8, Func Offset: 0xe8
	// Line 90, Address: 0x2fe2d0, Func Offset: 0x110
	// Func End, Address: 0x2fe2e4, Func Offset: 0x124
}

