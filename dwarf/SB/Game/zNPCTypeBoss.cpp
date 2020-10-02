typedef struct RwLLLink;
typedef struct xParGroup;
typedef enum RxClusterValidityReq;
typedef struct zMovePoint;
typedef struct RpWorld;
typedef struct NPCConfig;
typedef struct xEnt;
typedef struct NPCSndTrax;
typedef struct zFragGroup;
typedef struct xBase;
typedef struct xMemPool;
typedef struct xAnimMultiFileEntry;
typedef struct xParEmitterPropsAsset;
typedef struct xJSPHeader;
typedef struct xAnimActiveEffect;
typedef struct zLightning;
typedef struct xVec3;
typedef struct RwTexture;
typedef struct xGoal;
typedef struct xEntCollis;
typedef struct RxNodeMethods;
typedef struct xMat4x3;
typedef union zFragInfo;
typedef struct RpLight;
typedef struct _anon0;
typedef struct zFrag;
typedef struct xListItem_0;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct xSpline3;
typedef struct RpAtomic;
typedef struct RwRaster;
typedef enum en_trantype;
typedef struct xGridBound;
typedef struct xAnimFile;
typedef struct _class_0;
typedef struct xModelInstance;
typedef struct _tagEmitOffsetPoint;
typedef struct RwTexDictionary;
typedef struct xAnimSingle;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct RpVertexNormal;
typedef struct tri_data_0;
typedef struct xFactoryInst;
typedef struct xAnimState;
typedef struct RxPipelineNode;
typedef struct zNPCCommon;
typedef struct xMovePoint;
typedef struct RxPipeline;
typedef struct _class_1;
typedef struct xEntDrive;
typedef struct xEntShadow;
typedef struct xScene;
typedef struct tri_data_1;
typedef struct RxCluster;
typedef struct xPsyche;
typedef struct xMovePointAsset;
typedef struct zFragParticle;
typedef struct RxPipelineNodeParam;
typedef enum en_pendtype;
typedef struct zNPCBoss;
typedef struct zFragSoundAsset;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct xCollis;
typedef struct zFragParticleAsset;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct xCoef;
typedef struct xListItem_1;
typedef struct xSurface;
typedef struct xPEVCyl;
typedef struct RxPipelineRequiresCluster;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xParInterp;
typedef struct zShrapnelAsset;
typedef struct _class_2;
typedef struct xParSys;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef enum en_LASSO_STATUS;
typedef struct xModelAssetParam;
typedef struct _tagLightningLine;
typedef struct xClumpCollBSPTree;
typedef struct zFragProjectile;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct zFragProjectileAsset;
typedef struct RyzMemData;
typedef struct zNPCLassoInfo;
typedef struct xCoef3;
typedef struct xClumpCollBSPVertInfo;
typedef struct rxHeapFreeBlock;
typedef struct NPCSndQueue;
typedef struct xClumpCollBSPBranchNode;
typedef struct zFragShockwaveAsset;
typedef struct xCurveAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xPEEntBone;
typedef struct RyzMemGrow;
typedef struct xClumpCollBSPTriangle;
typedef struct RpClump;
typedef enum zFragLocType;
typedef struct xEntAsset;
typedef struct xPSYNote;
typedef struct RpGeometry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xParEmitterAsset;
typedef struct RpWorldSector;
typedef struct _tagLightningRot;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef enum PSY_BRAIN_STATUS;
typedef struct RwV3d;
typedef struct xQuat;
typedef enum en_NPC_SOUND;
typedef enum en_GOALSTATE;
typedef struct RwTexCoords;
typedef struct xEntFrame;
typedef struct rxHeapBlockHeader;
typedef struct xNPCBasic;
typedef struct zParEmitter;
typedef struct xPECircle;
typedef struct zNPCSettings;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct _class_3;
typedef struct RpMeshHeader;
typedef union _class_4;
typedef struct zFragLightning;
typedef struct xShadowSimplePoly;
typedef struct zFragBone;
typedef struct _tagLightningZeus;
typedef struct zFragLightningAsset;
typedef struct RpTriangle;
typedef enum en_npcbtyp;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct zFragAsset;
typedef struct _tagEmitSphere;
typedef struct iEnv;
typedef enum en_npctgt;
typedef struct rxReq;
typedef struct xLightKit;
typedef struct xBaseAsset;
typedef struct xLightKitLight;
typedef struct xJSPNodeInfo;
typedef struct xShadowSimpleCache;
typedef union zFragLocInfo;
typedef struct xAnimTransitionList;
typedef struct _anon1;
typedef enum RxNodeDefEditable;
typedef struct zFragSound;
typedef enum RxClusterValid;
typedef struct xModelTag;
typedef struct _tagEmitRect;
typedef struct xRot;
typedef enum en_dupowavmod;
typedef struct xParEmitterCustomSettings;
typedef struct xBound;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RpWorldRenderOrder;
typedef struct zFragLocation;
typedef struct xParabola;
typedef struct xDynAsset;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct _anon2;
typedef struct xPEEntBound;
typedef struct xQCData;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xBox;
typedef struct xBBox;
typedef struct RxClusterDefinition;
typedef struct zFragShockwave;
typedef struct _tagEmitLine;
typedef struct xEntNPCAsset;
typedef struct _anon3;
typedef enum zFragType;
typedef struct NPCTarget;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct _anon4;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct _anon5;
typedef struct _anon6;

typedef int32(*type_0)(xGoal*, void*, float32, void*);
typedef int8*(*type_2)(xBase*);
typedef void(*type_5)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_6)(uint32);
typedef void(*type_7)(xMemPool*, void*);
typedef int32(*type_10)(xGoal*, void*, en_trantype*, float32, void*);
typedef RpWorldSector*(*type_12)(RpWorldSector*);
typedef uint32(*type_15)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_18)(RwResEntry*);
typedef int32(*type_20)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_23)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_25)(RxNodeDefinition*);
typedef uint32(*type_29)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_30)(RxNodeDefinition*);
typedef void(*type_31)(zFrag*, float32);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef int32(*type_38)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef void(*type_44)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_46)(RxPipelineNode*, RxPipeline*);
typedef void(*type_47)(xEnt*);
typedef RpClump*(*type_50)(RpClump*, void*);
typedef void(*type_51)(xEnt*);
typedef int32(*type_54)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_55)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_58)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(int32*, en_trantype*);
typedef xBase*(*type_65)(uint32);
typedef void(*type_66)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_72)(zFrag*, zFragAsset*);
typedef RpAtomic*(*type_74)(RpAtomic*);
typedef void(*type_78)(xEnt*, xScene*, float32);
typedef void(*type_80)(zShrapnelAsset*, xModelInstance*, xVec3*, type_72);
typedef void(*type_81)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_82)(xEnt*, xVec3*);
typedef void(*type_83)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_84)(xEnt*);
typedef uint32(*type_87)(xEnt*, xEnt*, xScene*, float32, xCollis*);

typedef int32 type_1[2];
typedef RpLight* type_3[2];
typedef zFrag* type_4[21];
typedef RwFrame* type_8[2];
typedef uint32 type_9[2];
typedef uint8 type_11[3];
typedef int8 type_13[32];
typedef int8 type_14[32];
typedef uint8 type_16[3];
typedef xVec3 type_17[16];
typedef uint8 type_19[3];
typedef float32 type_21[2];
typedef xVec3 type_22[16];
typedef uint8 type_24[3];
typedef float32 type_26[4];
typedef float32 type_27[16];
typedef uint8 type_28[2];
typedef float32 type_32[4];
typedef RxCluster type_33[1];
typedef float32 type_35[2];
typedef float32 type_36[2];
typedef uint16 type_37[3];
typedef uint8 type_40[2];
typedef xAnimMultiFileEntry type_41[1];
typedef NPCSndQueue type_43[4];
typedef xModelInstance* type_45[2];
typedef xGoal* type_48[5];
typedef float32 type_49[16];
typedef float32 type_52[1];
typedef type_52 type_53[5];
typedef float32 type_56[4];
typedef RwTexCoords* type_57[8];
typedef float32 type_59[4];
typedef xModelTag type_60[20];
typedef uint32 type_61[78];
typedef xVec3 type_62[2];
typedef xVec3 type_63[9];
typedef int32 type_67[5];
typedef xVec3 type_68[3];
typedef xParInterp type_69[1];
typedef float32 type_70[2];
typedef uint16 type_71[3];
typedef float32 type_73[2];
typedef float32 type_75[2];
typedef uint8 type_76[4];
typedef int8 type_77[3];
typedef float32 type_79[16];
typedef xParInterp type_85[4];
typedef xParInterp type_86[4];
typedef int8 type_88[16];
typedef int8 type_89[4];
typedef RwTexCoords* type_90[8];
typedef uint8 type_91[3];
typedef int8 type_92[16];
typedef xVec3 type_93[4];
typedef float32 type_94[4];
typedef int8* type_95[78];
typedef uint32 type_96[4];
typedef float32 type_97[4];
typedef float32 type_98[4];
typedef xCollis type_99[18];

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xParGroup
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zMovePoint : xMovePoint
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
	type_12 renderCallBack;
	RxPipeline* pipeline;
};

struct NPCConfig : xListItem_0
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
	type_60 tag_vert;
	type_63 animFrameRange;
	type_67 cnt_esteem;
	float32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int32 test_count;
	type_76 talk_filter;
	uint8 talk_filter_size;
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
	type_78 update;
	type_78 endUpdate;
	type_82 bupdate;
	type_83 move;
	type_84 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_5 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
};

struct zFragGroup
{
	type_4 list;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_7 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_69 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_85 color_birth;
	type_86 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct xJSPHeader
{
	type_89 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct zLightning
{
	uint32 type;
	uint32 flags;
	union
	{
		_class_1 legacy;
		_class_3 func;
	};
	iColor_tag color;
	float32 time_left;
	float32 time_total;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_13 name;
	type_14 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xGoal : xListItem_1, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	type_23 fun_process;
	type_0 fun_precalc;
	type_10 fun_chkRule;
	void* cbdata;
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
	type_99 colls;
	type_81 post;
	type_87 depenq;
};

struct RxNodeMethods
{
	type_20 nodeBody;
	type_25 nodeInit;
	type_30 nodeTerm;
	type_38 pipelineNodeInit;
	type_42 pipelineNodeTerm;
	type_46 pipelineNodeConfig;
	type_55 configMsgHandler;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct _anon0
{
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float32 delay;
	float32 alivetime;
	float32 lifetime;
	type_31 update;
	type_45 parent;
	zFrag* prev;
	zFrag* next;
};

struct xListItem_0
{
	int32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_74 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_40 NumAnims;
	void** RawData;
};

struct _class_0
{
	xVec3* verts;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_21 BilinearLerp;
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
	type_18 destroyNotify;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_32 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	type_58 BeforeEnter;
	type_44 StateCallback;
	type_66 BeforeAnimMatrices;
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
	type_43 snd_queue;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_28 pad;
	float32 delay;
	xSpline3* spl;
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

struct _class_1
{
	type_17 base_point;
	type_22 point;
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	type_27 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float32 rand_radius;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_36 radius;
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
	type_65 resolvID;
	type_2 base2Name;
	type_6 id2Name;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	type_48 goalstak;
	type_53 tmr_stack;
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

struct zFragParticle
{
	zFragParticleAsset* fasset;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct zNPCBoss : zNPCCommon
{
	NPCTarget tgt_cur;
};

struct zFragSoundAsset : zFragAsset
{
	uint32 assetID;
	zFragLocation source;
	float32 volume;
	float32 innerRadius;
	float32 outerRadius;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_33 clusters;
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

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	uint32 parEmitterID;
	zParEmitter* parEmitter;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_15 Callback;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_29 Conditional;
	type_29 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xCoef
{
	type_26 a;
};

struct xListItem_1
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
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
	type_11 pad;
	void* moprops;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RpPolygon
{
	uint16 matIndex;
	type_37 vertIndex;
};

struct xFFX
{
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_39 sync;
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
	type_66 BeforeAnimMatrices;
};

struct xParInterp
{
	type_35 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	type_80 initCB;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

struct xParSys
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xModelAssetParam
{
};

struct _tagLightningLine
{
	float32 unused;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_41 Files;
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

struct RyzMemData
{
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct NPCSndQueue
{
	uint32 sndDirect;
	en_NPC_SOUND sndtype;
	int32 flg_snd;
	float32 tmr_delay;
	float32 radius;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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
	type_56 birthColor;
	type_59 deathColor;
};

struct xCurveAsset
{
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xClumpCollBSPTriangle
{
	_class_4 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_50 callback;
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

struct xPSYNote
{
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
	type_90 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_57 texCoords;
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

struct _tagLightningRot
{
	type_49 deg;
	float32 degrees;
	float32 height;
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

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_96 pad;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_47 f_setup;
	type_51 f_reset;
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

struct zParEmitter : xParEmitter
{
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	int8 allowDetect;
	int8 allowPatrol;
	int8 allowWander;
	int8 reduceCollide;
	int8 useNavSplines;
	type_77 pad;
	int8 allowChase;
	int8 allowAttack;
	int8 assumeLOS;
	int8 assumeFOV;
	en_dupowavmod duploWaveMode;
	float32 duploSpawnDelay;
	int32 duploSpawnLifeMax;
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

struct _class_3
{
	type_62 endPoint;
	xVec3 direction;
	float32 length;
	float32 scale;
	float32 width;
	type_70 endParam;
	type_73 endVel;
	type_75 paramSpan;
	float32 arc_height;
	xVec3 arc_normal;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

union _class_4
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
};

struct xShadowSimplePoly
{
	type_68 vert;
	xVec3 norm;
};

struct zFragBone
{
	int32 index;
	xVec3 offset;
};

struct _tagLightningZeus
{
	float32 normal_offset;
	float32 back_offset;
	float32 side_offset;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	uint32 startParentID;
	uint32 endParentID;
};

struct RpTriangle
{
	type_71 vertIndex;
	int16 matIndex;
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

struct zFragAsset
{
	zFragType type;
	uint32 id;
	type_9 parentID;
	float32 lifetime;
	float32 delay;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_3 light;
	type_8 light_frame;
	int32 memlvl;
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

struct rxReq
{
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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
	type_93 corner;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _anon1
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	uint32 soundID;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_94 wt;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_91 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_24 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float32 gravity;
	float32 minTime;
	float32 maxTime;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct _anon2
{
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float32 currSize;
	float32 currVelocity;
	float32 deltVelocity;
	float32 currSpin;
	float32 deltSpin;
	type_97 currColor;
	type_98 deltColor;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
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

struct _anon3
{
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct anim_coll_data
{
};

struct _anon4
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct _anon5
{
};

struct _anon6
{
};

type_88 buffer;
type_92 buffer;
type_61 g_hash_bossanim;
type_95 g_strz_bossanim;
int32 g_boss_is_in_the_house;
zParEmitter* g_pemit_holder;
xParEmitterCustomSettings g_parf_holder;
_anon5 __vt__8zNPCBoss;
type_34 xAnimDefaultBeforeEnter;
_anon4 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;
_anon3 __vt__9zNPCB_SB2;
_anon2 __vt__9zNPCB_SB1;
_anon0 __vt__12zNPCBPatrick;
_anon6 __vt__10zNPCBSandy;

void Setup(zNPCBoss* this);
xAnimTable* ZNPC_AnimTable_BossSBobbyArm();
void ZNPC_Destroy_Boss(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_Boss(int32 who, RyzMemGrow* grow);
void zNPCBoss_SceneFinish();
void zNPCBoss_ScenePrepare();
void ZNPC_Boss_Shutdown();
void ZNPC_Boss_Startup();

// Setup__8zNPCBossFv
// Start address: 0x324d60
void Setup(zNPCBoss* this)
{
}

// ZNPC_AnimTable_BossSBobbyArm__Fv
// Start address: 0x324db0
xAnimTable* ZNPC_AnimTable_BossSBobbyArm()
{
	xAnimTable* table;
	type_1 ourAnims;
}

// ZNPC_Destroy_Boss__FP12xFactoryInst
// Start address: 0x324e60
void ZNPC_Destroy_Boss(xFactoryInst* inst)
{
}

// ZNPC_Create_Boss__FiP10RyzMemGrowPv
// Start address: 0x324e90
xFactoryInst* ZNPC_Create_Boss(int32 who, RyzMemGrow* grow)
{
	zNPCBoss* boss;
}

// zNPCBoss_SceneFinish__Fv
// Start address: 0x3250f0
void zNPCBoss_SceneFinish()
{
}

// zNPCBoss_ScenePrepare__Fv
// Start address: 0x325100
void zNPCBoss_ScenePrepare()
{
}

// ZNPC_Boss_Shutdown__Fv
// Start address: 0x325110
void ZNPC_Boss_Shutdown()
{
}

// ZNPC_Boss_Startup__Fv
// Start address: 0x325120
void ZNPC_Boss_Startup()
{
	int32 i;
}

