typedef struct xParEmitterAsset;
typedef struct xGridBound;
typedef struct xMat4x3;
typedef struct xParEmitter;
typedef struct RwObjectHasFrame;
typedef struct RwMatrixTag;
typedef struct xEnt;
typedef struct xParCmd;
typedef struct xModelInstance;
typedef struct xVec3;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xParSys;
typedef struct xPar;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xParGroup;
typedef struct xBase;
typedef struct xEntCollis;
typedef struct RxNodeDefinition;
typedef struct xLinkAsset;
typedef struct xVolumeAsset;
typedef struct RpAtomic;
typedef struct RwTexture;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimFile;
typedef struct xParEmitterPropsAsset;
typedef struct xParCmdTex;
typedef struct xScene;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct xPEVCyl;
typedef struct RxPipelineNodeParam;
typedef struct tri_data;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xEntShadow;
typedef struct xQuat;
typedef struct xVec2;
typedef struct xParInterp;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xSurface;
typedef struct RpInterpolator;
typedef struct rxHeapBlockHeader;
typedef struct xAnimMultiFileBase;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct RxPipelineRequiresCluster;
typedef struct xFFX;
typedef struct xPEEntBone;
typedef struct xAnimPlay;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xAnimMultiFile;
typedef struct RwSurfaceProperties;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct rxReq;
typedef struct xParCmdAsset;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpClump;
typedef struct xPECircle;
typedef struct xVolume;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct xEnv;
typedef enum RxNodeDefEditable;
typedef struct RpMorphTarget;
typedef struct xCollis;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xEntFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagEmitSphere;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xMemPool;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xShadowSimplePoly;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpTriangle;
typedef struct xBound;
typedef struct xBaseAsset;
typedef struct _tagEmitRect;
typedef struct _xMat2x2;
typedef struct xMat3x3;
typedef struct RwSphere;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct RwTexDictionary;
typedef struct RwResEntry;
typedef struct RxOutputSpec;
typedef struct xShadowSimpleCache;
typedef struct xPEEntBound;
typedef struct xAnimTransitionList;
typedef struct RxClusterRef;
typedef struct xModelTag;
typedef struct RpLight;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct _tagEmitLine;
typedef struct RxIoSpec;
typedef struct xQCData;
typedef struct xBBox;
typedef struct RxNodeMethods;
typedef struct xModelBucket;
typedef struct _tagEmitVolume;
typedef struct RxCluster;
typedef struct xParSysAsset;
typedef struct RxPacket;
typedef struct anim_coll_data;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct _tagEmitOffsetPoint;

typedef xBase*(*type_0)(uint32);
typedef void(*type_1)(xEnt*, xScene*, float32, xEntCollis*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef uint32(*type_3)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_4)(RxPipelineNode*);
typedef int8*(*type_5)(xBase*);
typedef void(*type_6)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_7)(uint32);
typedef int32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(void*, xParGroup*);
typedef uint32(*type_12)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_15)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_18)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_21)(RxNodeDefinition*);
typedef void(*type_22)(RxNodeDefinition*);
typedef uint32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_24)(RxPipelineNode*);
typedef void(*type_28)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_29)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpClump*(*type_30)(RpClump*, void*);
typedef void(*type_32)(xAnimPlay*, xAnimState*);
typedef void(*type_34)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef void(*type_46)(xEnt*, xScene*, float32);
typedef void(*type_49)(xEnt*, xVec3*);
typedef void(*type_50)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_51)(xEnt*);
typedef void(*type_55)(xMemPool*, void*);
typedef void(*type_58)(RwResEntry*);

typedef uint8 type_9[3];
typedef int8 type_10[16];
typedef float32 type_13[2];
typedef float32 type_14[2];
typedef uint8 type_16[3];
typedef int8 type_17[16];
typedef uint8 type_19[3];
typedef float32 type_20[4];
typedef float32 type_25[2];
typedef uint8 type_26[2];
typedef xAnimMultiFileEntry type_27[1];
typedef uint8 type_31[4];
typedef xParInterp type_33[1];
typedef uint8 type_35[2];
typedef uint8 type_36[2];
typedef float32 type_37[3];
typedef uint8 type_38[3];
typedef xVec3 type_39[3];
typedef uint16 type_40[3];
typedef uint32 type_41[4];
typedef xParInterp type_43[4];
typedef float32 type_44[4];
typedef xParInterp type_45[4];
typedef float32 type_47[4];
typedef float32 type_48[16];
typedef RwTexCoords* type_52[8];
typedef float32 type_53[4];
typedef xVec3 type_54[4];
typedef int8 type_56[32];
typedef int8 type_57[32];
typedef RxCluster type_59[1];
typedef xCollis type_60[18];

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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	type_16 emit_pad;
	type_19 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
	type_46 update;
	type_46 endUpdate;
	type_49 bupdate;
	type_50 move;
	type_51 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_6 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xParCmd
{
	uint32 flag;
	xParCmdAsset* tasset;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	type_31 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_35 m_texIdx;
	type_38 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_44 m_cvel;
	type_47 m_cfl;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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
	type_11 draw;
	xParCmdTex* m_cmdTex;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_29 eventFunc;
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
	type_60 colls;
	type_1 post;
	type_3 depenq;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_20 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xVolumeAsset
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
	type_42 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_56 name;
	type_57 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_26 NumAnims;
	void** RawData;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_33 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_43 color_birth;
	type_45 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
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
	type_0 resolvID;
	type_5 base2Name;
	type_7 id2Name;
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
	type_13 BilinearLerp;
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

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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
	type_32 BeforeEnter;
	type_28 StateCallback;
	type_34 BeforeAnimMatrices;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_25 radius;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xParInterp
{
	type_14 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

struct xSurface
{
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_41 pad;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_12 Callback;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_23 Conditional;
	type_23 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xFFX
{
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
	type_34 BeforeAnimMatrices;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_27 Files;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct rxReq
{
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	type_36 pad;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_30 callback;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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
	type_52 texCoords;
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

struct xEnv
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_55 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct xShadowSimplePoly
{
	type_39 vert;
	xVec3 norm;
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

struct RpTriangle
{
	type_40 vertIndex;
	int16 matIndex;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_9 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct _xMat2x2
{
	xVec2 right;
	xVec2 up;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
	type_48 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_58 destroyNotify;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_54 corner;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_53 wt;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RxNodeMethods
{
	type_18 nodeBody;
	type_21 nodeInit;
	type_22 nodeTerm;
	type_24 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_15 configMsgHandler;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_59 clusters;
};

struct anim_coll_data
{
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

type_10 buffer;
type_17 buffer;

void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent);
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, float32 dt, xMat4x3& mat);
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat);
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent);
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent);
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent);
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, float32 dt, xVolume* vol);
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, float32 dt, int32 subtype);
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, float32 dt);

// xParEmitterEmitEntBound__FP4xParP16xParEmitterAssetfPC4xEnt
// Start address: 0x2fe390
void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent)
{
	xPEEntBound& region;
	xMat4x3& mat;
	xVec3 offset;
}

// xParEmitterEmitEntBone__FP4xParP16xParEmitterAssetfRC7xMat4x3
// Start address: 0x2fee80
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, float32 dt, xMat4x3& mat)
{
	xPEEntBone& region;
	xVec3 offset;
}

// xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3
// Start address: 0x2ff5e0
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat)
{
}

// xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC4xEnt
// Start address: 0x2ff720
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent)
{
	xMat4x3& root_mat;
	xMat4x3* mat;
	xMat4x3 buffer_mat;
}

// xParEmitterEmitOCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x2ff8b0
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rr;
}

// xParEmitterEmitOCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffa10
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
}

// xParEmitterEmitVCylEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffb60
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 ang;
	xVec2 dir;
	xVec2 offset;
	float32 deflect;
}

// xParEmitterEmitOffsetPoint__FP11xParEmitterP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2ffda0
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent)
{
}

// xParEmitterEmitEntity__FP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2fff40
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent)
{
	uint32 size;
	xModelInstance* model;
	xVec3 loc;
	uint32 which;
	xModelInstance* model;
	uint32 size;
}

// xParEmitterEmitVolume__FP4xParP16xParEmitterAssetfP7xVolume
// Start address: 0x3001c0
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, float32 dt, xVolume* vol)
{
	xBound* b;
}

// xParEmitterEmitSphereEdge__FP4xParP16xParEmitterAssetfi
// Start address: 0x3003b0
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, float32 dt, int32 subtype)
{
	xVec3 dirvec;
	xVec3 offset;
	xMat3x3 mat_rot;
}

// xParEmitterEmitSphere__FP4xParP16xParEmitterAssetf
// Start address: 0x300730
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 yaw;
	float32 pitch;
	xVec3 dir;
}

// xParEmitterEmitLine__FP4xParP16xParEmitterAssetf
// Start address: 0x3009f0
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, float32 dt)
{
	xVec3 vec;
	float32 len;
	float32 rand_len;
	float32 yaw;
	float32 pitch;
	xVec3 dir;
	float32 rr;
}

// xParEmitterEmitRectEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x300d50
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rand;
}

// xParEmitterEmitRect__FP4xParP16xParEmitterAssetf
// Start address: 0x300f50
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, float32 dt)
{
}

// xParEmitterEmitCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x301100
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	float32 rr;
	float32 dt_radius;
}

// xParEmitterEmitCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x301390
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	float32 dt_radius;
}

// xParEmitterAngleVariation__FP4xParP16xParEmitterAsset
// Start address: 0x301610
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a)
{
	xMat3x3 mat_rot;
	float32 ang_debrisCone;
	type_37 ang;
}

// xParEmitterEmitPoint__FP4xParP16xParEmitterAssetf
// Start address: 0x301730
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, float32 dt)
{
}

