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

typedef xBase*(*type_0)(u32);
typedef void(*type_1)(xEnt*, xScene*, f32, xEntCollis*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef u32(*type_3)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_4)(RxPipelineNode*);
typedef s8*(*type_5)(xBase*);
typedef void(*type_6)(xEnt*, xVec3*, xMat4x3*);
typedef s8*(*type_7)(u32);
typedef s32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(void*, xParGroup*);
typedef u32(*type_12)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_15)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_18)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_21)(RxNodeDefinition*);
typedef void(*type_22)(RxNodeDefinition*);
typedef u32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_24)(RxPipelineNode*);
typedef void(*type_28)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_29)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpClump*(*type_30)(RpClump*, void*);
typedef void(*type_32)(xAnimPlay*, xAnimState*);
typedef void(*type_34)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef void(*type_46)(xEnt*, xScene*, f32);
typedef void(*type_49)(xEnt*, xVec3*);
typedef void(*type_50)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_51)(xEnt*);
typedef void(*type_55)(xMemPool*, void*);
typedef void(*type_58)(RwResEntry*);

typedef u8 type_9[3];
typedef s8 type_10[16];
typedef f32 type_13[2];
typedef f32 type_14[2];
typedef u8 type_16[3];
typedef s8 type_17[16];
typedef u8 type_19[3];
typedef f32 type_20[4];
typedef f32 type_25[2];
typedef u8 type_26[2];
typedef xAnimMultiFileEntry type_27[1];
typedef u8 type_31[4];
typedef xParInterp type_33[1];
typedef u8 type_35[2];
typedef u8 type_36[2];
typedef f32 type_37[3];
typedef u8 type_38[3];
typedef xVec3 type_39[3];
typedef u16 type_40[3];
typedef u32 type_41[4];
typedef xParInterp type_43[4];
typedef f32 type_44[4];
typedef xParInterp type_45[4];
typedef f32 type_47[4];
typedef f32 type_48[16];
typedef RwTexCoords* type_52[8];
typedef f32 type_53[4];
typedef xVec3 type_54[4];
typedef s8 type_56[32];
typedef s8 type_57[32];
typedef RxCluster type_59[1];
typedef xCollis type_60[18];

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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	type_16 emit_pad;
	type_19 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
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
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xParCmd
{
	u32 flag;
	xParCmdAsset* tasset;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	f32 m_lifetime;
	type_31 m_c;
	xVec3 m_pos;
	f32 m_size;
	xVec3 m_vel;
	f32 m_sizeVel;
	u8 m_flag;
	u8 m_mode;
	type_35 m_texIdx;
	type_38 m_rotdeg;
	u8 pad8;
	f32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_44 m_cvel;
	type_47 m_cfl;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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
	type_11 draw;
	xParCmdTex* m_cmdTex;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_29 eventFunc;
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
	type_60 colls;
	type_1 post;
	type_3 depenq;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_20 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	u16 renderFrame;
	u16 pad;
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
	u32 filterAddressing;
	s32 refCount;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_26 NumAnims;
	void** RawData;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
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
	type_0 resolvID;
	type_5 base2Name;
	type_7 id2Name;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	type_13 BilinearLerp;
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

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
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
	type_32 BeforeEnter;
	type_28 StateCallback;
	type_34 BeforeAnimMatrices;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_25 radius;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct xParInterp
{
	type_14 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
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

struct xSurface
{
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_41 pad;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_12 Callback;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_23 Conditional;
	type_23 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xFFX
{
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
	type_34 BeforeAnimMatrices;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_27 Files;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct rxReq
{
};

struct xParCmdAsset
{
	u32 type;
	u8 enabled;
	u8 mode;
	type_36 pad;
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
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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
	type_52 texCoords;
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

struct _tagEmitSphere
{
	f32 radius;
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_55 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct RpTriangle
{
	type_40 vertIndex;
	s16 matIndex;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct _xMat2x2
{
	xVec2 right;
	xVec2 up;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_48 matrix;
	f32 radius;
	f32 angle;
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
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_58 destroyNotify;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_54 corner;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_53 wt;
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

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
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
	f32 radius;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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
	s32 ClipFlags;
	u32 PipeFlags;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
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

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_59 clusters;
};

struct anim_coll_data
{
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

type_10 buffer;
type_17 buffer;

void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, f32 dt, xEnt* ent);
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, f32 dt, xMat4x3& mat);
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat);
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent);
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent);
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, f32 dt, xEnt* ent);
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, f32 dt, xVolume* vol);
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, f32 dt, s32 subtype);
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, f32 dt);
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, f32 dt);

// xParEmitterEmitEntBound__FP4xParP16xParEmitterAssetfPC4xEnt
// Start address: 0x2fe390
void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, f32 dt, xEnt* ent)
{
	xPEEntBound& region;
	xMat4x3& mat;
	xVec3 offset;
}

// xParEmitterEmitEntBone__FP4xParP16xParEmitterAssetfRC7xMat4x3
// Start address: 0x2fee80
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, f32 dt, xMat4x3& mat)
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
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, f32 dt)
{
	f32 rr;
}

// xParEmitterEmitOCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffa10
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, f32 dt)
{
}

// xParEmitterEmitVCylEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffb60
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, f32 dt)
{
	f32 ang;
	xVec2 dir;
	xVec2 offset;
	f32 deflect;
}

// xParEmitterEmitOffsetPoint__FP11xParEmitterP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2ffda0
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent)
{
}

// xParEmitterEmitEntity__FP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2fff40
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, f32 dt, xEnt* ent)
{
	u32 size;
	xModelInstance* model;
	xVec3 loc;
	u32 which;
	xModelInstance* model;
	u32 size;
}

// xParEmitterEmitVolume__FP4xParP16xParEmitterAssetfP7xVolume
// Start address: 0x3001c0
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, f32 dt, xVolume* vol)
{
	xBound* b;
}

// xParEmitterEmitSphereEdge__FP4xParP16xParEmitterAssetfi
// Start address: 0x3003b0
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, f32 dt, s32 subtype)
{
	xVec3 dirvec;
	xVec3 offset;
	xMat3x3 mat_rot;
}

// xParEmitterEmitSphere__FP4xParP16xParEmitterAssetf
// Start address: 0x300730
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, f32 dt)
{
	f32 yaw;
	f32 pitch;
	xVec3 dir;
}

// xParEmitterEmitLine__FP4xParP16xParEmitterAssetf
// Start address: 0x3009f0
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, f32 dt)
{
	xVec3 vec;
	f32 len;
	f32 rand_len;
	f32 yaw;
	f32 pitch;
	xVec3 dir;
	f32 rr;
}

// xParEmitterEmitRectEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x300d50
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, f32 dt)
{
	f32 rand;
}

// xParEmitterEmitRect__FP4xParP16xParEmitterAssetf
// Start address: 0x300f50
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, f32 dt)
{
}

// xParEmitterEmitCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x301100
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, f32 dt)
{
	f32 rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	f32 rr;
	f32 dt_radius;
}

// xParEmitterEmitCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x301390
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, f32 dt)
{
	f32 rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	f32 dt_radius;
}

// xParEmitterAngleVariation__FP4xParP16xParEmitterAsset
// Start address: 0x301610
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a)
{
	xMat3x3 mat_rot;
	f32 ang_debrisCone;
	type_37 ang;
}

// xParEmitterEmitPoint__FP4xParP16xParEmitterAssetf
// Start address: 0x301730
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, f32 dt)
{
}

