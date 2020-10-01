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

typedef xBase*(*type_1)(u32);
typedef void(*type_2)(xEnt*, xScene*, f32, xEntCollis*);
typedef u32(*type_4)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s32(*type_5)(xGoal*, void*, f32, void*);
typedef s8*(*type_6)(xBase*);
typedef void(*type_7)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_8)(zFrag*, zFragAsset*);
typedef void(*type_9)(xMemPool*, void*);
typedef s8*(*type_10)(u32);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef s32(*type_17)(xGoal*, void*, en_trantype*, f32, void*);
typedef void(*type_19)(RwResEntry*);
typedef s32(*type_20)(RxPipelineNode*, RxPipelineNodeParam*);
typedef u32(*type_21)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(zShrapnelAsset*, xModelInstance*, xVec3*, type_8);
typedef s32(*type_24)(RxNodeDefinition*);
typedef s32(*type_26)(xGoal*, void*, en_trantype*, f32, void*);
typedef void(*type_29)(RxNodeDefinition*);
typedef u32(*type_33)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_36)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef void(*type_48)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_49)(RxPipelineNode*, RxPipeline*);
typedef void(*type_50)(xEnt*);
typedef RpClump*(*type_51)(RpClump*, void*);
typedef u32(*type_53)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_55)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_56)(xEnt*);
typedef void(*type_61)(xAnimPlay*, xAnimState*);
typedef void(*type_63)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_64)(s32*, en_trantype*);
typedef RpAtomic*(*type_71)(RpAtomic*);
typedef void(*type_73)(xEnt*, xScene*, f32);
typedef void(*type_77)(xEnt*, xVec3*);
typedef void(*type_79)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_81)(xEnt*);
typedef void(*type_83)(zFrag*, f32);

typedef xVec3 type_0[9];
typedef s32 type_3[5];
typedef s8 type_11[32];
typedef u8 type_12[4];
typedef s8 type_13[3];
typedef RpLight* type_14[2];
typedef s8 type_16[32];
typedef RwFrame* type_18[2];
typedef f32 type_23[2];
typedef u8 type_25[3];
typedef u8 type_27[3];
typedef u8 type_28[3];
typedef xVec3 type_30[16];
typedef xVec3 type_31[16];
typedef RxCluster type_32[1];
typedef s8 type_34[16];
typedef f32 type_35[4];
typedef u8 type_37[2];
typedef u16 type_38[3];
typedef f32 type_40[2];
typedef f32 type_41[16];
typedef u8 type_43[2];
typedef s8 type_44[16];
typedef f32 type_45[2];
typedef xAnimMultiFileEntry type_46[1];
typedef u32 type_47[23];
typedef xGoal* type_52[5];
typedef f32 type_54[4];
typedef f32 type_57[1];
typedef type_57 type_58[5];
typedef f32 type_59[4];
typedef RwTexCoords* type_60[8];
typedef f32 type_62[16];
typedef zFrag* type_65[21];
typedef xVec3 type_66[3];
typedef xVec3 type_67[2];
typedef u32 type_68[2];
typedef u16 type_69[3];
typedef u8 type_70[3];
typedef xParInterp type_72[1];
typedef f32 type_74[2];
typedef f32 type_75[16];
typedef f32 type_76[2];
typedef s8* type_78[23];
typedef f32 type_80[2];
typedef f32 type_82[4];
typedef xParInterp type_84[4];
typedef xParInterp type_85[4];
typedef NPCSndQueue type_86[4];
typedef RwTexCoords* type_87[8];
typedef s8 type_88[4];
typedef xModelInstance* type_89[2];
typedef xVec3 type_90[4];
typedef f32 type_91[4];
typedef u32 type_92[4];
typedef u8 type_93[3];
typedef f32 type_94[4];
typedef f32 type_95[4];
typedef xModelTag type_96[20];
typedef xCollis type_97[18];

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	s32 goalID;
	en_GOALSTATE stat;
	s32 flg_able;
	type_26 fun_process;
	type_5 fun_precalc;
	type_17 fun_chkRule;
	void* cbdata;
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
	s32 driveMode;
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
	u32 emit_volumeID;
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
	s32 memlvl;
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

struct zNPCCommon : xNPCBasic
{
	xEntAsset* entass;
	xEntNPCAsset* npcass;
	zNPCSettings* npcsetass;
	s32 flg_vuln;
	s32 flg_move;
	s32 flg_misc;
	s32 flg_able;
	NPCConfig* cfg_npc;
	zNPCSettings npcset;
	zMovePoint* nav_past;
	zMovePoint* nav_curr;
	zMovePoint* nav_dest;
	zMovePoint* nav_lead;
	xSpline3* spl_mvptspline;
	f32 len_mvptspline;
	f32 dst_curspline;
	xEntDrive* drv_data;
	xPsyche* psy_instinct;
	zNPCCommon* npc_duplodude;
	f32 spd_throttle;
	s32 flg_xtrarend;
	f32 tmr_fidget;
	f32 tmr_invuln;
	zShrapnelAsset* explosion;
	xModelAssetParam* parmdata;
	u32 pdatsize;
	zNPCLassoInfo* lassdata;
	type_86 snd_queue;
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
	type_27 emit_pad;
	type_28 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct zFragBone
{
	s32 index;
	xVec3 offset;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	u32 filterAddressing;
	s32 refCount;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_50 f_setup;
	type_56 f_reset;
	union
	{
		s32 flg_basenpc;
		s32 inUpdate;
		s32 flg_upward;
	};
	s32 colFreq;
	s32 colFreqReset;
	union
	{
		u32 flg_colCheck;
		u32 flg_penCheck;
		u32 flg_unused;
	};
	s32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	u32 startParentID;
	u32 endParentID;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_9 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	u32 creationAttributes;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zNPCSubBoss : zNPCCommon
{
	NPCTarget tgt_cur;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	type_97 colls;
	type_2 post;
	type_4 depenq;
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

struct zMovePoint : xMovePoint
{
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	f32 delay;
	f32 alivetime;
	f32 lifetime;
	type_83 update;
	type_89 parent;
	zFrag* prev;
	zFrag* next;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	s8* nam_sound;
	u32 aid_sound;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xEntDrive
{
	u32 flags;
	f32 otm;
	f32 otmr;
	f32 os;
	f32 tm;
	f32 tmr;
	f32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	f32 yaw;
	xVec3 dloc;
	tri_data_1 tri;
};

struct zFragAsset
{
	zFragType type;
	u32 id;
	type_68 parentID;
	f32 lifetime;
	f32 delay;
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
	u16 renderFrame;
	u16 pad;
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
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_19 destroyNotify;
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
	type_43 NumAnims;
	void** RawData;
};

struct zLightning
{
	u32 type;
	u32 flags;
	union
	{
		_class_1 legacy;
		_class_4 func;
	};
	iColor_tag color;
	f32 time_left;
	f32 time_total;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct _class_0
{
	xVec3* verts;
};

struct xJSPHeader
{
	type_88 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_23 BilinearLerp;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_35 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
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

struct zShrapnelAsset
{
	s32 fassetCount;
	u32 shrapnelID;
	type_22 initCB;
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
	type_61 BeforeEnter;
	type_48 StateCallback;
	type_63 BeforeAnimMatrices;
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_1 resolvID;
	type_6 base2Name;
	type_10 id2Name;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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
	u32 node_wt_sum;
	u8 on;
	type_37 pad;
	f32 delay;
	xSpline3* spl;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_32 clusters;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
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

struct xAnimMultiFileBase
{
	u32 Count;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	u32 soundID;
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
	u16 wt;
	u8 on;
	u8 bezIndex;
	u8 flg_props;
	u8 pad;
	u16 numPoints;
	f32 delay;
	f32 zoneRadius;
	f32 arenaRadius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_21 Callback;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_33 Conditional;
	type_33 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	s32 flg_psyche;
	xGoal* goallist;
	type_52 goalstak;
	type_58 tmr_stack;
	s32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	s32 gid_safegoal;
	type_64 fun_remap;
	void* userContext;
	s32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct _class_1
{
	type_30 base_point;
	type_31 point;
	s16 total_points;
	s16 end_points;
	f32 arc_height;
	xVec3 arc_normal;
	type_41 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	f32 rand_radius;
};

struct zFragProjectileAsset : zFragAsset
{
	u32 modelInfoID;
	RpAtomic* modelFile;
	zFragLocation launch;
	zFragLocation vel;
	f32 bounce;
	s32 maxBounces;
	u32 flags;
	u32 childID;
	zShrapnelAsset* child;
	f32 minScale;
	f32 maxScale;
	u32 scaleCurveID;
	xCurveAsset* scaleCurve;
	f32 gravity;
};

struct zFragSoundAsset : zFragAsset
{
	u32 assetID;
	zFragLocation source;
	f32 volume;
	f32 innerRadius;
	f32 outerRadius;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xSurface : xBase
{
	u32 idx;
	u32 type;
	union
	{
		u32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	f32 friction;
	u8 state;
	type_70 pad;
	void* moprops;
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
		_class_2 tuv;
		tri_data_0 tri;
	};
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xListItem_0
{
	s32 flg_travFilter;
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
	u16 matIndex;
	type_38 vertIndex;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
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
	type_63 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
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
	s16 refCount;
	s16 pad;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xParInterp
{
	type_45 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct xSpline3
{
	u16 type;
	u16 flags;
	u32 N;
	u32 allocN;
	xVec3* points;
	f32* time;
	xVec3* p12;
	xVec3* bctrl;
	f32* knot;
	xCoef3* coef;
	u32 arcSample;
	f32* arcLength;
};

struct xParSys
{
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RyzMemData
{
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	f32 currSize;
	f32 currVelocity;
	f32 deltVelocity;
	f32 currSpin;
	f32 deltSpin;
	type_54 currColor;
	type_59 deltColor;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelAssetParam
{
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

struct _tagLightningLine
{
	f32 unused;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RyzMemGrow
{
	s32 flg_grow;
	s32 amt;
	s8* ptr;
	xBase* user;
	s32 amt_last;
	s8* ptr_last;
	xBase* user_last;
};

struct zFragShockwaveAsset : zFragAsset
{
	u32 modelInfoID;
	f32 birthRadius;
	f32 deathRadius;
	f32 birthVelocity;
	f32 deathVelocity;
	f32 birthSpin;
	f32 deathSpin;
	type_94 birthColor;
	type_95 deathColor;
};

struct NPCSndQueue
{
	u32 sndDirect;
	en_NPC_SOUND sndtype;
	s32 flg_snd;
	f32 tmr_delay;
	f32 radius;
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
	s32 npcFlags;
	s32 npcModel;
	s32 npcProps;
	u32 movepoint;
	u32 taskWidgetPrime;
	u32 taskWidgetSecond;
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
	type_87 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	u8 flags;
	u8 type;
	u8 bone;
	u8 pad1;
	xVec3 offset;
	f32 radius;
	f32 deflection;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xPSYNote
{
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	s8 allowDetect;
	s8 allowPatrol;
	s8 allowWander;
	s8 reduceCollide;
	s8 useNavSplines;
	type_13 pad;
	s8 allowChase;
	s8 allowAttack;
	s8 assumeLOS;
	s8 assumeFOV;
	en_dupowavmod duploWaveMode;
	f32 duploSpawnDelay;
	s32 duploSpawnLifeMax;
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

struct xClumpCollBSPTriangle
{
	_class_3 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	f32 s;
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

struct zParEmitter : xParEmitter
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
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
	u32 modelID;
	s32 flg_config;
	f32 spd_turnMax;
	f32 spd_moveMax;
	f32 fac_accelMax;
	f32 fac_driftMax;
	f32 fac_gravKnock;
	f32 fac_elastic;
	s32 pts_damage;
	s32 useBoxBound;
	xVec3 off_bound;
	xVec3 dim_bound;
	f32 npcMass;
	f32 npcMassInv;
	f32 rad_detect;
	f32 hyt_detect;
	f32 off_detect;
	f32 rad_attack;
	f32 fov_attack;
	xVec3 scl_model;
	f32 tym_attack;
	f32 tym_fidget;
	f32 tym_stun;
	f32 tym_alert;
	f32 dst_castShadow;
	f32 rad_shadowCache;
	f32 rad_shadowRaster;
	f32 rad_dmgSize;
	s32 flg_vert;
	type_96 tag_vert;
	type_0 animFrameRange;
	type_3 cnt_esteem;
	f32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	s32 test_count;
	type_12 talk_filter;
	u8 talk_filter_size;
};

struct _tagLightningRot
{
	type_62 deg;
	f32 degrees;
	f32 height;
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
	u32 mode;
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
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	f32 ambient;
	f32 specular;
	f32 diffuse;
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
	f32 length;
	f32 scale;
	f32 width;
	type_74 endParam;
	type_76 endVel;
	type_80 paramSpan;
	f32 arc_height;
	xVec3 arc_normal;
};

struct xListItem_1
{
	s32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct RpTriangle
{
	type_69 vertIndex;
	s16 matIndex;
};

struct rxReq
{
};

struct _tagLightningZeus
{
	f32 normal_offset;
	f32 back_offset;
	f32 side_offset;
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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _tagEmitSphere
{
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
	type_75 matrix;
	f32 radius;
	f32 angle;
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
	u32 parEmitterID;
	zParEmitter* parEmitter;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xCoef
{
	type_82 a;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
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
	f32 r;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 angVel;
	f32 t;
	f32 tColl;
	s32 numBounces;
	f32 scale;
	f32 parentScale;
	f32 alpha;
	xVec3 N;
	xVec3 axis;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
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
	f32 gravity;
	f32 minTime;
	f32 maxTime;
};

struct _anon2
{
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_93 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
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

struct RpSector
{
	s32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

type_34 buffer;
type_44 buffer;
type_47 g_hash_subbanim;
type_78 g_strz_subbanim;
s32 g_contract_for_hire;
zParEmitter* g_pemit_holder;
xParEmitterCustomSettings g_parf_holder;
_anon2 __vt__11zNPCSubBoss;
_anon0 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;

void Setup(zNPCSubBoss* this);
void ZNPC_Destroy_SubBoss(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_SubBoss(s32 who, RyzMemGrow* grow);
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
xFactoryInst* ZNPC_Create_SubBoss(s32 who, RyzMemGrow* grow)
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
	s32 i;
}

