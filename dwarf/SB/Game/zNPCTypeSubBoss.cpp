typedef struct xGoal;
typedef struct xEnt;
typedef struct RwLLLink;
typedef struct _tagEmitVolume;
typedef struct zFragLightning;
typedef enum RxClusterValidityReq;
typedef struct iEnv;
typedef struct RwMatrixTag;
typedef struct zNPCCommon;
typedef struct xParEmitter;
typedef struct zFragBone;
typedef struct xModelInstance;
typedef struct xBase;
typedef struct RwTexture;
typedef struct xNPCBasic;
typedef struct zFragLightningAsset;
typedef struct RpWorld;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct zNPCSubBoss;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xVec3;
typedef struct xEntCollis;
typedef struct xParEmitterAsset;
typedef struct RwRaster;
typedef struct zMovePoint;
typedef struct zFrag;
typedef struct NPCSndTrax;
typedef struct xMat4x3;
typedef struct xEntDrive;
typedef struct zFragAsset;
typedef struct RpAtomic;
typedef struct RwTexDictionary;
typedef struct xParGroup;
typedef struct xGridBound;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct xAnimFile;
typedef struct zLightning;
typedef struct xParEmitterPropsAsset;
typedef struct _class_0;
typedef struct xJSPHeader;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct xLinkAsset;
typedef enum en_trantype;
typedef struct RpVertexNormal;
typedef struct tri_data_0;
typedef struct RpLight;
typedef struct zShrapnelAsset;
typedef struct RxCluster;
typedef struct xAnimState;
typedef struct xFactoryInst;
typedef struct RxPipeline;
typedef struct _tagEmitOffsetPoint;
typedef struct xScene;
typedef struct xEntShadow;
typedef union zFragLocInfo;
typedef struct RxPipelineNodeParam;
typedef struct xMovePoint;
typedef struct RxPacket;
typedef struct tri_data_1;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct zFragSound;
typedef struct zNPCLassoInfo;
typedef enum en_pendtype;
typedef struct xMovePointAsset;
typedef struct xAnimEffect;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTransition;
typedef struct xPsyche;
typedef struct _class_1;
typedef struct zFragProjectileAsset;
typedef struct zFragSoundAsset;
typedef struct iColor_tag;
typedef struct xSurface;
typedef struct xCollis;
typedef struct RwRGBAReal;
typedef struct xListItem_0;
typedef struct RwObjectHasFrame;
typedef struct xFFX;
typedef struct RpPolygon;
typedef struct RwLinkList;
typedef struct xPEVCyl;
typedef struct xCoef3;
typedef struct zFragLocation;
typedef struct _class_2;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct xDynAsset;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct rxHeapFreeBlock;
typedef struct xParInterp;
typedef struct xSpline3;
typedef struct xParSys;
typedef struct RxPipelineNodeTopSortData;
typedef struct RyzMemData;
typedef struct zFragShockwave;
typedef struct xClumpCollBSPTree;
typedef struct xModelAssetParam;
typedef struct xEntAsset;
typedef struct _tagLightningLine;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RyzMemGrow;
typedef struct zFragShockwaveAsset;
typedef struct NPCSndQueue;
typedef struct RpClump;
typedef struct xEntNPCAsset;
typedef struct RpGeometry;
typedef struct xClumpCollBSPVertInfo;
typedef enum zFragType;
typedef struct xPEEntBone;
typedef struct RpWorldSector;
typedef struct xClumpCollBSPBranchNode;
typedef struct xPSYNote;
typedef struct zNPCSettings;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xClumpCollBSPTriangle;
typedef struct xCurveAsset;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct zParEmitter;
typedef struct rxHeapBlockHeader;
typedef enum PSY_BRAIN_STATUS;
typedef struct _anon0;
typedef struct NPCConfig;
typedef struct _tagLightningRot;
typedef enum en_GOALSTATE;
typedef struct xEntFrame;
typedef enum en_NPC_SOUND;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct xPECircle;
typedef struct RpMeshHeader;
typedef struct zFragGroup;
typedef struct xShadowSimplePoly;
typedef union _class_3;
typedef struct RwSurfaceProperties;
typedef union zFragInfo;
typedef struct _class_4;
typedef struct xListItem_1;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct _tagLightningZeus;
typedef enum en_npcbtyp;
typedef struct xBaseAsset;
typedef struct _tagEmitSphere;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef enum en_npctgt;
typedef struct zFragParticle;
typedef struct xShadowSimpleCache;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimTransitionList;
typedef struct zFragParticleAsset;
typedef struct xJSPNodeInfo;
typedef struct xCoef;
typedef struct xRot;
typedef struct xModelTag;
typedef struct _anon1;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagEmitRect;
typedef struct xBound;
typedef enum RpWorldRenderOrder;
typedef enum en_LASSO_STATUS;
typedef enum RxClusterForcePresent;
typedef struct zFragProjectile;
typedef struct xCylinder;
typedef enum en_dupowavmod;
typedef struct xParabola;
typedef struct _anon2;
typedef struct xParEmitterCustomSettings;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xQCData;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xBBox;
typedef enum zFragLocType;
typedef struct xPEEntBound;
typedef struct RwSphere;
typedef struct _tagEmitLine;
typedef struct anim_coll_data;
typedef struct NPCTarget;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RxIoSpec;

typedef xBase*(*type_1)(uint32);
typedef void(*type_2)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_4)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_5)(xGoal*, void*, float32, void*);
typedef int8*(*type_6)(xBase*);
typedef void(*type_7)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_8)(zFrag*, zFragAsset*);
typedef void(*type_9)(xMemPool*, void*);
typedef int8*(*type_10)(uint32);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef int32(*type_17)(xGoal*, void*, en_trantype*, float32, void*);
typedef void(*type_19)(RwResEntry*);
typedef int32(*type_20)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_21)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(zShrapnelAsset*, xModelInstance*, xVec3*, type_8);
typedef int32(*type_24)(RxNodeDefinition*);
typedef int32(*type_26)(xGoal*, void*, en_trantype*, float32, void*);
typedef void(*type_29)(RxNodeDefinition*);
typedef uint32(*type_33)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_36)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef void(*type_48)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_49)(RxPipelineNode*, RxPipeline*);
typedef void(*type_50)(xEnt*);
typedef RpClump*(*type_51)(RpClump*, void*);
typedef uint32(*type_53)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_55)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_56)(xEnt*);
typedef void(*type_61)(xAnimPlay*, xAnimState*);
typedef void(*type_63)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_64)(int32*, en_trantype*);
typedef RpAtomic*(*type_71)(RpAtomic*);
typedef void(*type_73)(xEnt*, xScene*, float32);
typedef void(*type_77)(xEnt*, xVec3*);
typedef void(*type_79)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_81)(xEnt*);
typedef void(*type_83)(zFrag*, float32);

typedef xVec3 type_0[9];
typedef int32 type_3[5];
typedef int8 type_11[32];
typedef uint8 type_12[4];
typedef int8 type_13[3];
typedef RpLight* type_14[2];
typedef int8 type_16[32];
typedef RwFrame* type_18[2];
typedef float32 type_23[2];
typedef uint8 type_25[3];
typedef uint8 type_27[3];
typedef uint8 type_28[3];
typedef xVec3 type_30[16];
typedef xVec3 type_31[16];
typedef RxCluster type_32[1];
typedef int8 type_34[16];
typedef float32 type_35[4];
typedef uint8 type_37[2];
typedef uint16 type_38[3];
typedef float32 type_40[2];
typedef float32 type_41[16];
typedef uint8 type_43[2];
typedef int8 type_44[16];
typedef float32 type_45[2];
typedef xAnimMultiFileEntry type_46[1];
typedef uint32 type_47[23];
typedef xGoal* type_52[5];
typedef float32 type_54[4];
typedef float32 type_57[1];
typedef type_57 type_58[5];
typedef float32 type_59[4];
typedef RwTexCoords* type_60[8];
typedef float32 type_62[16];
typedef zFrag* type_65[21];
typedef xVec3 type_66[3];
typedef xVec3 type_67[2];
typedef uint32 type_68[2];
typedef uint16 type_69[3];
typedef uint8 type_70[3];
typedef xParInterp type_72[1];
typedef float32 type_74[2];
typedef float32 type_75[16];
typedef float32 type_76[2];
typedef int8* type_78[23];
typedef float32 type_80[2];
typedef float32 type_82[4];
typedef xParInterp type_84[4];
typedef xParInterp type_85[4];
typedef NPCSndQueue type_86[4];
typedef RwTexCoords* type_87[8];
typedef int8 type_88[4];
typedef xModelInstance* type_89[2];
typedef xVec3 type_90[4];
typedef float32 type_91[4];
typedef uint32 type_92[4];
typedef uint8 type_93[3];
typedef float32 type_94[4];
typedef float32 type_95[4];
typedef xModelTag type_96[20];
typedef xCollis type_97[18];

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	type_26 fun_process;
	type_5 fun_precalc;
	type_17 fun_chkRule;
	void* cbdata;
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
	type_73 update;
	type_73 endUpdate;
	type_77 bupdate;
	type_79 move;
	type_81 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_7 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_14 light;
	type_18 light_frame;
	int32 memlvl;
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

struct zNPCCommon : xNPCBasic
{
	xEntAsset* entass;
	xEntNPCAsset* npcass;
	zNPCSettings* npcsetass;
	int32 flg_vuln;
	int32 flg_move;
	int32 flg_misc;
	int32 flg_able;
	NPCConfig* cfg_npc;
	zNPCSettings npcset;
	zMovePoint* nav_past;
	zMovePoint* nav_curr;
	zMovePoint* nav_dest;
	zMovePoint* nav_lead;
	xSpline3* spl_mvptspline;
	float32 len_mvptspline;
	float32 dst_curspline;
	xEntDrive* drv_data;
	xPsyche* psy_instinct;
	zNPCCommon* npc_duplodude;
	float32 spd_throttle;
	int32 flg_xtrarend;
	float32 tmr_fidget;
	float32 tmr_invuln;
	zShrapnelAsset* explosion;
	xModelAssetParam* parmdata;
	uint32 pdatsize;
	zNPCLassoInfo* lassdata;
	type_86 snd_queue;
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
	type_27 emit_pad;
	type_28 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct zFragBone
{
	int32 index;
	xVec3 offset;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_55 eventFunc;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_11 name;
	type_16 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_50 f_setup;
	type_56 f_reset;
	union
	{
		int32 flg_basenpc;
		int32 inUpdate;
		int32 flg_upward;
	};
	int32 colFreq;
	int32 colFreqReset;
	union
	{
		uint32 flg_colCheck;
		uint32 flg_penCheck;
		uint32 flg_unused;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	uint32 startParentID;
	uint32 endParentID;
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
	type_15 renderCallBack;
	RxPipeline* pipeline;
};

struct RxNodeMethods
{
	type_20 nodeBody;
	type_24 nodeInit;
	type_29 nodeTerm;
	type_36 pipelineNodeInit;
	type_42 pipelineNodeTerm;
	type_49 pipelineNodeConfig;
	type_53 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_9 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zNPCSubBoss : zNPCCommon
{
	NPCTarget tgt_cur;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	type_97 colls;
	type_2 post;
	type_4 depenq;
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

struct zMovePoint : xMovePoint
{
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float32 delay;
	float32 alivetime;
	float32 lifetime;
	type_83 update;
	type_89 parent;
	zFrag* prev;
	zFrag* next;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	tri_data_1 tri;
};

struct zFragAsset
{
	zFragType type;
	uint32 id;
	type_68 parentID;
	float32 lifetime;
	float32 delay;
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
	type_71 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xParGroup
{
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_19 destroyNotify;
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
	type_43 NumAnims;
	void** RawData;
};

struct zLightning
{
	uint32 type;
	uint32 flags;
	union
	{
		_class_1 legacy;
		_class_4 func;
	};
	iColor_tag color;
	float32 time_left;
	float32 time_total;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_72 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_84 color_birth;
	type_85 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct _class_0
{
	xVec3* verts;
};

struct xJSPHeader
{
	type_88 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_23 BilinearLerp;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_35 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum en_trantype
{
	GOAL_TRAN_NONE,
	GOAL_TRAN_SET,
	GOAL_TRAN_PUSH,
	GOAL_TRAN_POP,
	GOAL_TRAN_POPTO,
	GOAL_TRAN_POPALL,
	GOAL_TRAN_POPBASE,
	GOAL_TRAN_POPSAFE,
	GOAL_TRAN_SWAP,
	GOAL_TRAN_NOMORE,
	GOAL_TRAN_FORCE = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	type_22 initCB;
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
	type_61 BeforeEnter;
	type_48 StateCallback;
	type_63 BeforeAnimMatrices;
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_1 resolvID;
	type_6 base2Name;
	type_10 id2Name;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_40 radius;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_37 pad;
	float32 delay;
	xSpline3* spl;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_32 clusters;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	uint32 soundID;
};

struct zNPCLassoInfo
{
	en_LASSO_STATUS stage;
	xEnt* lassoee;
	xAnimState* holdGuideAnim;
	xModelInstance* holdGuideModel;
	xAnimState* grabGuideAnim;
	xModelInstance* grabGuideModel;
};

enum en_pendtype
{
	PEND_TRAN_NONE,
	PEND_TRAN_SET,
	PEND_TRAN_PUSH,
	PEND_TRAN_POP,
	PEND_TRAN_POPTO,
	PEND_TRAN_POPALL,
	PEND_TRAN_SWAP,
	PEND_TRAN_INPROG,
	PEND_TRAN_NOMORE
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_21 Callback;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_33 Conditional;
	type_33 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	type_52 goalstak;
	type_58 tmr_stack;
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	type_64 fun_remap;
	void* userContext;
	int32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct _class_1
{
	type_30 base_point;
	type_31 point;
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	type_41 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float32 rand_radius;
};

struct zFragProjectileAsset : zFragAsset
{
	uint32 modelInfoID;
	RpAtomic* modelFile;
	zFragLocation launch;
	zFragLocation vel;
	float32 bounce;
	int32 maxBounces;
	uint32 flags;
	uint32 childID;
	zShrapnelAsset* child;
	float32 minScale;
	float32 maxScale;
	uint32 scaleCurveID;
	xCurveAsset* scaleCurve;
	float32 gravity;
};

struct zFragSoundAsset : zFragAsset
{
	uint32 assetID;
	zFragLocation source;
	float32 volume;
	float32 innerRadius;
	float32 outerRadius;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	type_70 pad;
	void* moprops;
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
		_class_2 tuv;
		tri_data_0 tri;
	};
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xListItem_0
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_39 sync;
};

struct xFFX
{
};

struct RpPolygon
{
	uint16 matIndex;
	type_38 vertIndex;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

struct _class_2
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
	type_63 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_46 Files;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xParInterp
{
	type_45 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

struct xParSys
{
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RyzMemData
{
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float32 currSize;
	float32 currVelocity;
	float32 deltVelocity;
	float32 currSpin;
	float32 deltSpin;
	type_54 currColor;
	type_59 deltColor;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelAssetParam
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

struct _tagLightningLine
{
	float32 unused;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RyzMemGrow
{
	int32 flg_grow;
	int32 amt;
	int8* ptr;
	xBase* user;
	int32 amt_last;
	int8* ptr_last;
	xBase* user_last;
};

struct zFragShockwaveAsset : zFragAsset
{
	uint32 modelInfoID;
	float32 birthRadius;
	float32 deathRadius;
	float32 birthVelocity;
	float32 deathVelocity;
	float32 birthSpin;
	float32 deathSpin;
	type_94 birthColor;
	type_95 deathColor;
};

struct NPCSndQueue
{
	uint32 sndDirect;
	en_NPC_SOUND sndtype;
	int32 flg_snd;
	float32 tmr_delay;
	float32 radius;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_51 callback;
};

struct xEntNPCAsset
{
	int32 npcFlags;
	int32 npcModel;
	int32 npcProps;
	uint32 movepoint;
	uint32 taskWidgetPrime;
	uint32 taskWidgetSecond;
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
	type_87 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_60 texCoords;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xPSYNote
{
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	int8 allowDetect;
	int8 allowPatrol;
	int8 allowWander;
	int8 reduceCollide;
	int8 useNavSplines;
	type_13 pad;
	int8 allowChase;
	int8 allowAttack;
	int8 assumeLOS;
	int8 assumeFOV;
	en_dupowavmod duploWaveMode;
	float32 duploSpawnDelay;
	int32 duploSpawnLifeMax;
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

struct xClumpCollBSPTriangle
{
	_class_3 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xCurveAsset
{
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

struct zParEmitter : xParEmitter
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_92 pad;
};

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
};

struct _anon0
{
};

struct NPCConfig : xListItem_1
{
	uint32 modelID;
	int32 flg_config;
	float32 spd_turnMax;
	float32 spd_moveMax;
	float32 fac_accelMax;
	float32 fac_driftMax;
	float32 fac_gravKnock;
	float32 fac_elastic;
	int32 pts_damage;
	int32 useBoxBound;
	xVec3 off_bound;
	xVec3 dim_bound;
	float32 npcMass;
	float32 npcMassInv;
	float32 rad_detect;
	float32 hyt_detect;
	float32 off_detect;
	float32 rad_attack;
	float32 fov_attack;
	xVec3 scl_model;
	float32 tym_attack;
	float32 tym_fidget;
	float32 tym_stun;
	float32 tym_alert;
	float32 dst_castShadow;
	float32 rad_shadowCache;
	float32 rad_shadowRaster;
	float32 rad_dmgSize;
	int32 flg_vert;
	type_96 tag_vert;
	type_0 animFrameRange;
	type_3 cnt_esteem;
	float32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int32 test_count;
	type_12 talk_filter;
	uint8 talk_filter_size;
};

struct _tagLightningRot
{
	type_62 deg;
	float32 degrees;
	float32 height;
};

enum en_GOALSTATE
{
	GOAL_STAT_UNKNOWN,
	GOAL_STAT_PROCESS,
	GOAL_STAT_ENTER,
	GOAL_STAT_EXIT,
	GOAL_STAT_SUSPEND,
	GOAL_STAT_RESUME,
	GOAL_STAT_PAUSED,
	GOAL_STAT_DONE,
	GOAL_STAT_NOMORE,
	GOAL_STAT_FORCE = 0x7fffffff
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

enum en_NPC_SOUND
{
	NPC_STYP_BOGUS = 0xfffffffe,
	NPC_STYP_LISTEND = 0,
	NPC_STYP_ENCOUNTER,
	NPC_STYP_CLANKING,
	NPC_STYP_EXCLAIM,
	NPC_STYP_OUCH,
	NPC_STYP_CHEERING,
	NPC_STYP_RESPAWN,
	NPC_STYP_ALERT,
	NPC_STYP_DIZZY,
	NPC_STYP_DANCE,
	NPC_STYP_LAUGH,
	NPC_STYP_ATTACK,
	NPC_STYP_PUNCH,
	NPC_STYP_WEPLAUNCH,
	NPC_STYP_LIGHTNING,
	NPC_STYP_WARNBANG,
	NPC_STYP_DEATH,
	NPC_STYP_DEATHJELLY,
	NPC_STYP_BONKED,
	NPC_STYP_UNBONKED,
	NPC_STYP_TIKISTACK,
	NPC_STYP_TIKIEXPLODE,
	NPC_STYP_TIKITHUNDER,
	NPC_STYP_XSFXTALK,
	NPC_STYP_ONELINER,
	NPC_STYP_ONELINERTOO,
	NPC_STYP_NOMORE,
	NPC_STYP_FORCE = 0x7fffffff
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct zFragGroup
{
	type_65 list;
};

struct xShadowSimplePoly
{
	type_66 vert;
	xVec3 norm;
};

union _class_3
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

union zFragInfo
{
	zFragGroup group;
	zFragParticle particle;
	zFragProjectile projectile;
	zFragLightning lightning;
	zFragSound sound;
	zFragShockwave shockwave;
};

struct _class_4
{
	type_67 endPoint;
	xVec3 direction;
	float32 length;
	float32 scale;
	float32 width;
	type_74 endParam;
	type_76 endVel;
	type_80 paramSpan;
	float32 arc_height;
	xVec3 arc_normal;
};

struct xListItem_1
{
	int32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct RpTriangle
{
	type_69 vertIndex;
	int16 matIndex;
};

struct rxReq
{
};

struct _tagLightningZeus
{
	float32 normal_offset;
	float32 back_offset;
	float32 side_offset;
};

enum en_npcbtyp
{
	NPCP_BASIS_NONE,
	NPCP_BASIS_EVILROBOT,
	NPCP_BASIS_FRIENDLYROBOT,
	NPCP_BASIS_LOVINGCITIZEN,
	NPCP_BASIS_GRUMPYCITIZEN,
	NPCP_BASIS_NOMORE,
	NPCP_BASIS_FORCE = 0x7fffffff
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagEmitSphere
{
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
	type_75 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

enum en_npctgt
{
	NPC_TGT_NONE,
	NPC_TGT_PLYR,
	NPC_TGT_ENT,
	NPC_TGT_BASE,
	NPC_TGT_POS,
	NPC_TGT_MVPT,
	NPC_TGT_NOMORE,
	NPC_TGT_FORCEINT = 0x7fffffff
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
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
	type_90 corner;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	uint32 parEmitterID;
	zParEmitter* parEmitter;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xCoef
{
	type_82 a;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_91 wt;
};

struct _anon1
{
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_25 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum en_LASSO_STATUS
{
	LASS_STAT_DONE,
	LASS_STAT_PENDING,
	LASS_STAT_GRABBING,
	LASS_STAT_TOSSING,
	LASS_STAT_NOMORE,
	LASS_STAT_FORCEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct zFragProjectile
{
	zFragProjectileAsset* fasset;
	xModelInstance* model;
	xParabola path;
	float32 angVel;
	float32 t;
	float32 tColl;
	int32 numBounces;
	float32 scale;
	float32 parentScale;
	float32 alpha;
	xVec3 N;
	xVec3 axis;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float32 gravity;
	float32 minTime;
	float32 maxTime;
};

struct _anon2
{
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_93 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
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

struct RpSector
{
	int32 type;
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

enum zFragLocType
{
	eFragLocBone,
	eFragLocBoneUpdated,
	eFragLocBoneLocal,
	eFragLocBoneLocalUpdated,
	eFragLocTag,
	eFragLocTagUpdated,
	eFragLocCount,
	eFragLocForceSize = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct anim_coll_data
{
};

struct NPCTarget
{
	en_npctgt typ_target;
	union
	{
		xEnt* ent_target;
		xBase* bas_target;
		xVec3 pos_target;
		zMovePoint* nav_target;
	};
	zNPCCommon* npc_owner;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

type_34 buffer;
type_44 buffer;
type_47 g_hash_subbanim;
type_78 g_strz_subbanim;
int32 g_contract_for_hire;
zParEmitter* g_pemit_holder;
xParEmitterCustomSettings g_parf_holder;
_anon2 __vt__11zNPCSubBoss;
_anon0 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;

void Setup(zNPCSubBoss* this);
void ZNPC_Destroy_SubBoss(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_SubBoss(int32 who, RyzMemGrow* grow);
void zNPCSubBoss_SceneFinish();
void zNPCSubBoss_ScenePrepare();
void ZNPC_SubBoss_Shutdown();
void ZNPC_SubBoss_Startup();

// Setup__11zNPCSubBossFv
// Start address: 0x325fd0
void Setup(zNPCSubBoss* this)
{
}

// ZNPC_Destroy_SubBoss__FP12xFactoryInst
// Start address: 0x326020
void ZNPC_Destroy_SubBoss(xFactoryInst* inst)
{
}

// ZNPC_Create_SubBoss__FiP10RyzMemGrowPv
// Start address: 0x326050
xFactoryInst* ZNPC_Create_SubBoss(int32 who, RyzMemGrow* grow)
{
	zNPCSubBoss* boss;
}

// zNPCSubBoss_SceneFinish__Fv
// Start address: 0x326170
void zNPCSubBoss_SceneFinish()
{
}

// zNPCSubBoss_ScenePrepare__Fv
// Start address: 0x326180
void zNPCSubBoss_ScenePrepare()
{
}

// ZNPC_SubBoss_Shutdown__Fv
// Start address: 0x326190
void ZNPC_SubBoss_Shutdown()
{
}

// ZNPC_SubBoss_Startup__Fv
// Start address: 0x3261a0
void ZNPC_SubBoss_Startup()
{
	int32 i;
}

