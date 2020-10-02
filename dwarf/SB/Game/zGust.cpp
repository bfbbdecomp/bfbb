typedef struct xVec3;
typedef struct RwObjectHasFrame;
typedef struct zGust;
typedef struct RpAtomic;
typedef struct RxPipeline;
typedef struct RxPipelineNode;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct xBase;
typedef struct zGustAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct zVolume;
typedef struct xClumpCollBSPTriangle;
typedef struct xScene;
typedef struct xAnimMultiFile;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipelineCluster;
typedef struct xSerial;
typedef struct RxPipelineNodeParam;
typedef struct _tagEmitVolume;
typedef struct RxHeap;
typedef struct _class_0;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct zParEmitter;
typedef struct xLinkAsset;
typedef struct xEnt;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct rxHeapBlockHeader;
typedef struct xParGroup;
typedef struct xModelPool;
typedef struct xAnimTransitionList;
typedef struct RpMaterial;
typedef struct zGustData;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xParEmitterAsset;
typedef union _class_1;
typedef struct xAnimTransition;
typedef struct xEntAsset;
typedef struct _tagEmitOffsetPoint;
typedef struct RpClump;
typedef struct xParEmitter;
typedef struct xParEmitterPropsAsset;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct RpWorldSector;
typedef struct RwSurfaceProperties;
typedef struct xParSys;
typedef struct RwMatrixTag;
typedef struct RpMorphTarget;
typedef struct xBound;
typedef struct iEnv;
typedef struct rxReq;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xEntFrame;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xLightKit;
typedef struct RpVertexNormal;
typedef struct xJSPNodeInfo;
typedef struct xAnimFile;
typedef struct xPEVCyl;
typedef struct xAnimSingle;
typedef struct xQCData;
typedef struct xBBox;
typedef struct RpMeshHeader;
typedef struct xParInterp;
typedef struct xShadowSimplePoly;
typedef struct xMat4x3;
typedef struct RwResEntry;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xAnimMultiFileBase;
typedef struct xModelTag;
typedef struct xAnimEffect;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xJSPHeader;
typedef struct xPEEntBone;
typedef struct xSphere;
typedef struct xLightKitLight;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xGridBound;
typedef struct xShadowSimpleCache;
typedef struct xAnimPlay;
typedef struct xEntCollis;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPTree;
typedef struct xEnv;
typedef struct RpLight;
typedef struct xPECircle;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef struct xBaseAsset;
typedef struct xFFX;
typedef struct xMat3x3;
typedef struct xSurface;
typedef struct RxClusterRef;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RpSector;
typedef struct RwObject;
typedef struct xModelBucket;
typedef struct RwLLLink;
typedef struct _tagEmitSphere;
typedef struct xVolume;
typedef struct RxIoSpec;
typedef struct xEntShadow;
typedef struct xMemPool;
typedef struct anim_coll_data;
typedef struct xVolumeAsset;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct _tagEmitRect;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xPEEntBound;
typedef struct RwRGBAReal;
typedef struct _tagEmitLine;
typedef struct RwLinkList;
typedef struct tri_data;
typedef struct _class_2;
typedef struct xParEmitterCustomSettings;

typedef RpWorldSector*(*type_0)(RpWorldSector*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef xBase*(*type_3)(uint32);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_9)(xBase*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_12)(uint32);
typedef uint32(*type_14)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_17)(RxNodeDefinition*);
typedef void(*type_19)(RxNodeDefinition*);
typedef int32(*type_21)(RxPipelineNode*);
typedef RpClump*(*type_23)(RpClump*, void*);
typedef uint32(*type_25)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_32)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_34)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef uint32(*type_36)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_38)(xEnt*, xVec3*);
typedef void(*type_40)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_41)(xEnt*);
typedef uint32(*type_46)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_47)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_60)(RwResEntry*);
typedef int32(*type_61)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint8 type_5[3];
typedef int8 type_8[16];
typedef float32 type_11[2];
typedef uint16 type_13[3];
typedef int8 type_15[16];
typedef zGust* type_18[4];
typedef float32 type_20[4];
typedef float32 type_22[4];
typedef RwTexCoords* type_24[8];
typedef float32 type_26[2];
typedef xVec3 type_27[3];
typedef uint8 type_28[3];
typedef float32 type_29[2];
typedef uint8 type_30[3];
typedef uint16 type_31[3];
typedef int8 type_33[4];
typedef float32 type_39[16];
typedef uint8 type_42[2];
typedef xAnimMultiFileEntry type_43[1];
typedef float32 type_44[4];
typedef uint32 type_45[4];
typedef xVec3 type_48[4];
typedef xParInterp type_49[1];
typedef RwTexCoords* type_50[8];
typedef uint8 type_51[3];
typedef RpLight* type_52[2];
typedef RwFrame* type_54[2];
typedef int8 type_55[32];
typedef xCollis type_56[18];
typedef xParInterp type_57[4];
typedef int8 type_58[32];
typedef xParInterp type_59[4];
typedef RxCluster type_62[1];

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct zGust : xBase
{
	uint32 flags;
	zGustAsset* asset;
	zVolume* volume;
	zVolume* fx_volume;
	float32 debris_timer;
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
	type_35 renderCallBack;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_32 eventFunc;
};

struct zGustAsset : xBaseAsset
{
	uint32 flags;
	uint32 volumeID;
	uint32 effectID;
	xVec3 vel;
	float32 fade;
	float32 partMod;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct zVolume : xVolume
{
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	type_3 resolvID;
	type_9 base2Name;
	type_12 id2Name;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_43 Files;
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
	_class_2 anim_coll;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xSerial
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpPolygon
{
	uint16 matIndex;
	type_13 vertIndex;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct zParEmitter : xParEmitter
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_22 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	type_34 update;
	type_34 endUpdate;
	type_38 bupdate;
	type_40 move;
	type_41 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_47 transl;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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
	type_45 pad;
};

struct xParGroup
{
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct zGustData
{
	uint32 gust_on;
	type_18 g;
	type_20 lerp;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_36 Conditional;
	type_36 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_23 callback;
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
	type_28 emit_pad;
	type_30 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_49 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_57 color_birth;
	type_59 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
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
	type_50 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_4 BeforeEnter;
	type_7 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_24 texCoords;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xParSys
{
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_51 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_52 light;
	type_54 light_frame;
	int32 memlvl;
};

struct rxReq
{
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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
	type_42 NumAnims;
	void** RawData;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_29 BilinearLerp;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xParInterp
{
	type_26 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct xShadowSimplePoly
{
	type_27 vert;
	xVec3 norm;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_60 destroyNotify;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_44 wt;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_25 Callback;
};

struct RpTriangle
{
	type_31 vertIndex;
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

struct xJSPHeader
{
	type_33 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_39 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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
	type_48 corner;
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
	type_10 BeforeAnimMatrices;
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
	type_56 colls;
	type_37 post;
	type_46 depenq;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xFFX
{
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

struct xSurface
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_55 name;
	type_58 mask;
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
	type_0 renderCallBack;
	RxPipeline* pipeline;
};

struct RpSector
{
	int32 type;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_11 radius;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_53 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct anim_coll_data
{
};

struct xVolumeAsset : xBaseAsset
{
	uint32 flags;
	xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
};

struct RxNodeMethods
{
	type_16 nodeBody;
	type_17 nodeInit;
	type_19 nodeTerm;
	type_21 pipelineNodeInit;
	type_2 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_14 configMsgHandler;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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
	type_62 clusters;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct RwLinkList
{
	RwLLLink link;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_2
{
	xVec3* verts;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_5 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

type_8 buffer;
type_15 buffer;
zGust* gusts;
uint16 ngusts;
zParEmitter* sGustDustEmitter;
zParEmitter* sGustDebrisEmitter;
type_61 zGustEventCB;
uint32 gActiveHeap;

void zGustUpdateFX(float32 seconds);
void UpdateGustFX(zGust* g, float32 seconds);
int32 zGustEventCB(xBase* to, uint32 toEvent);
void zGustLoad(zGust* ent, xSerial* s);
void zGustSave(zGust* ent, xSerial* s);
void zGustUpdateEnt(xEnt* ent, float32 dt, void* gdata);
zGust* zGustGetGust(uint16 n);
void zGustSetup();
void zGustInit();

// zGustUpdateFX__Ff
// Start address: 0x17f090
void zGustUpdateFX(float32 seconds)
{
	int32 i;
}

// UpdateGustFX__FP5zGustf
// Start address: 0x17f110
void UpdateGustFX(zGust* g, float32 seconds)
{
	xBBox* box;
	xParEmitterCustomSettings info;
	zParEmitter* e;
	int32 total_debris;
	int32 vol_area;
	int32 i;
}

// zGustEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x17f460
int32 zGustEventCB(xBase* to, uint32 toEvent)
{
	zGust* g;
}

// zGustLoad__FP5zGustP7xSerial
// Start address: 0x17f530
void zGustLoad(zGust* ent, xSerial* s)
{
}

// zGustSave__FP5zGustP7xSerial
// Start address: 0x17f540
void zGustSave(zGust* ent, xSerial* s)
{
}

// zGustUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x17f550
void zGustUpdateEnt(xEnt* ent, float32 dt, void* gdata)
{
	uint32 i;
	uint32 j;
	uint32 minidx;
	float32 minlerp;
	zGustData* data;
	xCollis coll;
	float32 lerpinc;
	xVec3* gvel;
	xVec3 dpos;
}

// zGustGetGust__FUs
// Start address: 0x17f8d0
zGust* zGustGetGust(uint16 n)
{
}

// zGustSetup__Fv
// Start address: 0x17f900
void zGustSetup()
{
	uint16 i;
}

// zGustInit__Fv
// Start address: 0x17f9c0
void zGustInit()
{
	uint16 i;
	uint32 size;
	zGustAsset* asset;
}

