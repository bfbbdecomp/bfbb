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
typedef xBase*(*type_3)(u32);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef s32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef s8*(*type_9)(xBase*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s8*(*type_12)(u32);
typedef u32(*type_14)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_17)(RxNodeDefinition*);
typedef void(*type_19)(RxNodeDefinition*);
typedef s32(*type_21)(RxPipelineNode*);
typedef RpClump*(*type_23)(RpClump*, void*);
typedef u32(*type_25)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_32)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_34)(xEnt*, xScene*, f32);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef u32(*type_36)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_38)(xEnt*, xVec3*);
typedef void(*type_40)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_41)(xEnt*);
typedef u32(*type_46)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_47)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_60)(RwResEntry*);
typedef s32(*type_61)(xBase*, xBase*, u32, f32*, xBase*);

typedef u8 type_5[3];
typedef s8 type_8[16];
typedef f32 type_11[2];
typedef u16 type_13[3];
typedef s8 type_15[16];
typedef zGust* type_18[4];
typedef f32 type_20[4];
typedef f32 type_22[4];
typedef RwTexCoords* type_24[8];
typedef f32 type_26[2];
typedef xVec3 type_27[3];
typedef u8 type_28[3];
typedef f32 type_29[2];
typedef u8 type_30[3];
typedef u16 type_31[3];
typedef s8 type_33[4];
typedef f32 type_39[16];
typedef u8 type_42[2];
typedef xAnimMultiFileEntry type_43[1];
typedef f32 type_44[4];
typedef u32 type_45[4];
typedef xVec3 type_48[4];
typedef xParInterp type_49[1];
typedef RwTexCoords* type_50[8];
typedef u8 type_51[3];
typedef RpLight* type_52[2];
typedef RwFrame* type_54[2];
typedef s8 type_55[32];
typedef xCollis type_56[18];
typedef xParInterp type_57[4];
typedef s8 type_58[32];
typedef xParInterp type_59[4];
typedef RxCluster type_62[1];

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct zGust : xBase
{
	u32 flags;
	zGustAsset* asset;
	zVolume* volume;
	zVolume* fx_volume;
	f32 debris_timer;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_32 eventFunc;
};

struct zGustAsset : xBaseAsset
{
	u32 flags;
	u32 volumeID;
	u32 effectID;
	xVec3 vel;
	f32 fade;
	f32 partMod;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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

struct zVolume : xVolume
{
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
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
	_class_2 anim_coll;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	u32 emit_volumeID;
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

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RpPolygon
{
	u16 matIndex;
	type_13 vertIndex;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct zParEmitter : xParEmitter
{
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_22 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_45 pad;
};

struct xParGroup
{
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
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
	s16 refCount;
	s16 pad;
};

struct zGustData
{
	u32 gust_on;
	type_18 g;
	type_20 lerp;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_28 emit_pad;
	type_30 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
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
	type_50 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_4 BeforeEnter;
	type_7 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xParSys
{
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
	u8 type;
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
	s32 memlvl;
};

struct rxReq
{
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	type_42 NumAnims;
	void** RawData;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_29 BilinearLerp;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xParInterp
{
	type_26 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct xShadowSimplePoly
{
	type_27 vert;
	xVec3 norm;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	f32 angle;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_44 wt;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_25 Callback;
};

struct RpTriangle
{
	type_31 vertIndex;
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

struct xJSPHeader
{
	type_33 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_39 matrix;
	f32 radius;
	f32 angle;
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
	f32 r;
	f32 h;
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
	type_48 corner;
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
	type_10 BeforeAnimMatrices;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
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
	f32 radius;
	RwRGBAReal color;
	f32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	u16 lightFrame;
	u16 pad;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xFFX
{
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

struct xSurface
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_55 name;
	type_58 mask;
	u32 filterAddressing;
	s32 refCount;
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
	type_0 renderCallBack;
	RxPipeline* pipeline;
};

struct RpSector
{
	s32 type;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagEmitSphere
{
	f32 radius;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_11 radius;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_53 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct anim_coll_data
{
};

struct xVolumeAsset : xBaseAsset
{
	u32 flags;
	xBound bound;
	f32 rot;
	f32 xpivot;
	f32 zpivot;
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
	f32 x_len;
	f32 z_len;
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

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_62 clusters;
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct RwLinkList
{
	RwLLLink link;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct _class_2
{
	xVec3* verts;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_5 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
};

type_8 buffer;
type_15 buffer;
zGust* gusts;
u16 ngusts;
zParEmitter* sGustDustEmitter;
zParEmitter* sGustDebrisEmitter;
type_61 zGustEventCB;
u32 gActiveHeap;

void zGustUpdateFX(f32 seconds);
void UpdateGustFX(zGust* g, f32 seconds);
s32 zGustEventCB(xBase* to, u32 toEvent);
void zGustLoad(zGust* ent, xSerial* s);
void zGustSave(zGust* ent, xSerial* s);
void zGustUpdateEnt(xEnt* ent, f32 dt, void* gdata);
zGust* zGustGetGust(u16 n);
void zGustSetup();
void zGustInit();

// zGustUpdateFX__Ff
// Start address: 0x17f090
void zGustUpdateFX(f32 seconds)
{
	s32 i;
}

// UpdateGustFX__FP5zGustf
// Start address: 0x17f110
void UpdateGustFX(zGust* g, f32 seconds)
{
	xBBox* box;
	xParEmitterCustomSettings info;
	zParEmitter* e;
	s32 total_debris;
	s32 vol_area;
	s32 i;
}

// zGustEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x17f460
s32 zGustEventCB(xBase* to, u32 toEvent)
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
void zGustUpdateEnt(xEnt* ent, f32 dt, void* gdata)
{
	u32 i;
	u32 j;
	u32 minidx;
	f32 minlerp;
	zGustData* data;
	xCollis coll;
	f32 lerpinc;
	xVec3* gvel;
	xVec3 dpos;
}

// zGustGetGust__FUs
// Start address: 0x17f8d0
zGust* zGustGetGust(u16 n)
{
}

// zGustSetup__Fv
// Start address: 0x17f900
void zGustSetup()
{
	u16 i;
}

// zGustInit__Fv
// Start address: 0x17f9c0
void zGustInit()
{
	u16 i;
	u32 size;
	zGustAsset* asset;
}

