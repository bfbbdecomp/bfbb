typedef struct xGoal;
typedef struct xEnt;
typedef struct xBase;
typedef struct xAnimMultiFileEntry;
typedef union zFragInfo;
typedef struct RwLLLink;
typedef struct xAnimActiveEffect;
typedef struct zFrag;
typedef struct xListItem_0;
typedef struct RwTexture;
typedef struct xVec3;
typedef struct xEntCollis;
typedef struct RxNodeMethods;
typedef struct xSpline3;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct xMemPool;
typedef enum en_trantype;
typedef struct _tagEmitOffsetPoint;
typedef struct RpAtomic;
typedef struct xGridBound;
typedef struct RwRaster;
typedef struct xAnimFile;
typedef struct xModelInstance;
typedef struct RwTexDictionary;
typedef struct xAnimSingle;
typedef struct xMovePoint;
typedef struct _class_0;
typedef struct RxNodeDefinition;
typedef struct xLinkAsset;
typedef struct _class_1;
typedef struct RpVertexNormal;
typedef struct RwResEntry;
typedef struct tri_data_0;
typedef struct xEntDrive;
typedef struct tri_data_1;
typedef struct xAnimState;
typedef struct zNPCTest;
typedef struct RxPipelineNode;
typedef struct xFactoryInst;
typedef struct RxPipeline;
typedef struct xMovePointAsset;
typedef struct xScene;
typedef struct xPsyche;
typedef struct xEntShadow;
typedef struct zFragParticle;
typedef struct RxCluster;
typedef struct zNPCCommon;
typedef enum en_pendtype;
typedef struct zFragSoundAsset;
typedef struct xCollis;
typedef struct RxPipelineNodeParam;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct zFragParticleAsset;
typedef struct xCoef;
typedef struct RxPacket;
typedef struct xListItem_1;
typedef struct xAnimEffect;
typedef struct xPEVCyl;
typedef struct xAnimTransition;
typedef struct xSurface;
typedef struct RxPipelineRequiresCluster;
typedef struct xParInterp;
typedef struct iColor_tag;
typedef struct xParSys;
typedef struct zShrapnelAsset;
typedef struct RwRGBAReal;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct RwObjectHasFrame;
typedef struct _anon0;
typedef struct xAnimPlay;
typedef struct _tagLightningLine;
typedef struct xClumpCollBSPTree;
typedef enum en_LASSO_STATUS;
typedef struct xModelAssetParam;
typedef struct _class_2;
typedef struct zFragProjectile;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef struct zFragProjectileAsset;
typedef struct xAnimMultiFile;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpMaterial;
typedef struct NPCSndQueue;
typedef struct zNPCLassoInfo;
typedef struct xCoef3;
typedef struct xClumpCollBSPBranchNode;
typedef struct xModelPool;
typedef struct xParGroup;
typedef struct RyzMemData;
typedef struct zFragShockwaveAsset;
typedef struct xCurveAsset;
typedef struct xPEEntBone;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RyzMemGrow;
typedef enum zFragLocType;
typedef struct xParEmitterAsset;
typedef struct xPSYNote;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct RpWorldSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _tagLightningRot;
typedef struct xParEmitterPropsAsset;
typedef enum PSY_BRAIN_STATUS;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef enum en_NPC_SOUND;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef enum en_GOALSTATE;
typedef struct RwV3d;
typedef struct zParEmitter;
typedef struct xPECircle;
typedef struct xNPCBasic;
typedef struct xAnimTable;
typedef struct NPCConfig;
typedef struct xQuat;
typedef struct RwTexCoords;
typedef struct zNPCSettings;
typedef struct rxHeapBlockHeader;
typedef struct xEntFrame;
typedef struct _class_3;
typedef union _class_4;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct zFragLightning;
typedef struct _tagLightningZeus;
typedef struct zFragBone;
typedef struct zFragLightningAsset;
typedef struct xShadowSimplePoly;
typedef struct NPCSndTrax;
typedef struct _tagEmitSphere;
typedef struct RpTriangle;
typedef struct iEnv;
typedef struct zFragAsset;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef enum en_npcbtyp;
typedef struct zLightning;
typedef struct xLightKit;
typedef struct rxReq;
typedef struct xJSPNodeInfo;
typedef struct xBaseAsset;
typedef enum RxClusterValidityReq;
typedef struct xLightKitLight;
typedef union zFragLocInfo;
typedef struct xShadowSimpleCache;
typedef struct _anon1;
typedef struct xAnimTransitionList;
typedef struct _tagEmitRect;
typedef struct zFragSound;
typedef enum RxNodeDefEditable;
typedef struct xModelTag;
typedef enum RxClusterValid;
typedef struct RpLight;
typedef struct xParEmitterCustomSettings;
typedef struct xRot;
typedef struct xJSPHeader;
typedef enum en_dupowavmod;
typedef struct xBound;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zFragLocation;
typedef enum RpWorldRenderOrder;
typedef struct xDynAsset;
typedef struct xParabola;
typedef enum RxClusterForcePresent;
typedef struct xPEEntBound;
typedef struct xCylinder;
typedef struct _tagEmitLine;
typedef struct xQCData;
typedef struct RpSector;
typedef struct zFragShockwave;
typedef struct xModelBucket;
typedef struct xBox;
typedef struct xBBox;
typedef struct RxClusterDefinition;
typedef struct xEntNPCAsset;
typedef enum zFragType;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct RpWorld;
typedef struct _anon2;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct zMovePoint;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct zFragGroup;

typedef s8*(*type_2)(xBase*);
typedef void(*type_4)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_5)(xMemPool*, void*);
typedef s8*(*type_7)(u32);
typedef s32(*type_8)(xGoal*, void*, en_trantype*, f32, void*);
typedef RpWorldSector*(*type_10)(RpWorldSector*);
typedef u32(*type_17)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_19)(xGoal*, void*, en_trantype*, f32, void*);
typedef void(*type_20)(RwResEntry*);
typedef s32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_25)(RxNodeDefinition*);
typedef void(*type_28)(zFrag*, f32);
typedef s32(*type_29)(xGoal*, void*, f32, void*);
typedef u32(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_31)(RxNodeDefinition*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef s32(*type_38)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_43)(RxPipelineNode*);
typedef void(*type_45)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_46)(xEnt*);
typedef s32(*type_47)(RxPipelineNode*, RxPipeline*);
typedef void(*type_50)(xEnt*);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef s32(*type_54)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_56)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_58)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(s32*, en_trantype*);
typedef void(*type_66)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef xBase*(*type_67)(u32);
typedef void(*type_72)(zFrag*, zFragAsset*);
typedef RpAtomic*(*type_76)(RpAtomic*);
typedef void(*type_78)(xEnt*, xScene*, f32);
typedef void(*type_79)(zShrapnelAsset*, xModelInstance*, xVec3*, type_72);
typedef void(*type_81)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_82)(xEnt*, xVec3*);
typedef void(*type_83)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_85)(xEnt*);
typedef u32(*type_89)(xEnt*, xEnt*, xScene*, f32, xCollis*);

typedef RpLight* type_0[2];
typedef zFrag* type_1[21];
typedef RwFrame* type_3[2];
typedef u32 type_6[2];
typedef u8 type_9[3];
typedef u32 type_11[11];
typedef u8 type_12[3];
typedef s8 type_13[32];
typedef xVec3 type_14[16];
typedef u8 type_15[3];
typedef s8 type_16[32];
typedef xVec3 type_18[16];
typedef f32 type_21[2];
typedef u8 type_23[3];
typedef f32 type_24[16];
typedef f32 type_26[4];
typedef u8 type_27[2];
typedef f32 type_32[2];
typedef f32 type_33[4];
typedef RxCluster type_35[1];
typedef u16 type_36[3];
typedef f32 type_37[2];
typedef u8 type_40[2];
typedef NPCSndQueue type_41[4];
typedef xAnimMultiFileEntry type_42[1];
typedef xModelInstance* type_44[2];
typedef f32 type_48[16];
typedef xGoal* type_49[5];
typedef f32 type_51[1];
typedef type_51 type_53[5];
typedef f32 type_55[4];
typedef RwTexCoords* type_57[8];
typedef f32 type_59[4];
typedef xModelTag type_60[20];
typedef xVec3 type_61[2];
typedef s8* type_62[11];
typedef xVec3 type_63[9];
typedef s32 type_65[5];
typedef xParInterp type_68[1];
typedef f32 type_69[2];
typedef xVec3 type_70[3];
typedef f32 type_71[2];
typedef u16 type_73[3];
typedef f32 type_74[2];
typedef u8 type_75[4];
typedef s8 type_77[3];
typedef f32 type_80[16];
typedef xParInterp type_84[4];
typedef xParInterp type_86[4];
typedef s8 type_87[16];
typedef s8 type_88[4];
typedef u8 type_90[3];
typedef s8 type_91[16];
typedef RwTexCoords* type_92[8];
typedef f32 type_93[4];
typedef xVec3 type_94[4];
typedef u32 type_95[4];
typedef f32 type_96[4];
typedef f32 type_97[4];
typedef xCollis type_98[18];

struct xGoal : xListItem_1, xFactoryInst
{
	xPsyche* psyche;
	s32 goalID;
	en_GOALSTATE stat;
	s32 flg_able;
	type_19 fun_process;
	type_29 fun_precalc;
	type_8 fun_chkRule;
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
	type_78 update;
	type_78 endUpdate;
	type_82 bupdate;
	type_83 move;
	type_85 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_4 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	f32 delay;
	f32 alivetime;
	f32 lifetime;
	type_28 update;
	type_44 parent;
	zFrag* prev;
	zFrag* next;
};

struct xListItem_0
{
	s32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_13 name;
	type_16 mask;
	u32 filterAddressing;
	s32 refCount;
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
	type_98 colls;
	type_81 post;
	type_89 depenq;
};

struct RxNodeMethods
{
	type_22 nodeBody;
	type_25 nodeInit;
	type_31 nodeTerm;
	type_38 pipelineNodeInit;
	type_43 pipelineNodeTerm;
	type_47 pipelineNodeConfig;
	type_56 configMsgHandler;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_5 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_76 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_40 NumAnims;
	void** RawData;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_21 BilinearLerp;
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

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_27 pad;
	f32 delay;
	xSpline3* spl;
};

struct _class_0
{
	xVec3* verts;
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
	type_33 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct _class_1
{
	type_14 base_point;
	type_18 point;
	s16 total_points;
	s16 end_points;
	f32 arc_height;
	xVec3 arc_normal;
	type_24 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	f32 rand_radius;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_20 destroyNotify;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
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
	tri_data_0 tri;
};

struct tri_data_1
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
	type_58 BeforeEnter;
	type_45 StateCallback;
	type_66 BeforeAnimMatrices;
};

struct zNPCTest : zNPCCommon
{
	s32 numAnimations;
	s32 currentState;
	f32 transitionTimer;
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
	type_67 resolvID;
	type_2 base2Name;
	type_7 id2Name;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	s32 flg_psyche;
	xGoal* goallist;
	type_49 goalstak;
	type_53 tmr_stack;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_37 radius;
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
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
	type_41 snd_queue;
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

struct zFragSoundAsset : zFragAsset
{
	u32 assetID;
	zFragLocation source;
	f32 volume;
	f32 innerRadius;
	f32 outerRadius;
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
		tri_data_1 tri;
	};
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	u32 parEmitterID;
	zParEmitter* parEmitter;
};

struct xCoef
{
	type_26 a;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_35 clusters;
};

struct xListItem_1
{
	s32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_17 Callback;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_30 Conditional;
	type_30 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	type_9 pad;
	void* moprops;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xParInterp
{
	type_32 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xParSys
{
};

struct zShrapnelAsset
{
	s32 fassetCount;
	u32 shrapnelID;
	type_79 initCB;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RpPolygon
{
	u16 matIndex;
	type_36 vertIndex;
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

struct _anon0
{
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
	type_66 BeforeAnimMatrices;
};

struct _tagLightningLine
{
	f32 unused;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct _class_2
{
	f32 t;
	f32 u;
	f32 v;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_42 Files;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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

struct NPCSndQueue
{
	u32 sndDirect;
	en_NPC_SOUND sndtype;
	s32 flg_snd;
	f32 tmr_delay;
	f32 radius;
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

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xParGroup
{
};

struct RyzMemData
{
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
	type_55 birthColor;
	type_59 deathColor;
};

struct xCurveAsset
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTriangle
{
	_class_4 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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

struct xPSYNote
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_52 callback;
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
	type_92 texCoords;
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

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _tagLightningRot
{
	type_48 deg;
	f32 degrees;
	f32 height;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
	union
	{
		xParInterp rate;
		type_68 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_84 color_birth;
	type_86 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	u32 emit_limit;
	f32 emit_limit_reset_time;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct zParEmitter : xParEmitter
{
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_46 f_setup;
	type_50 f_reset;
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

struct NPCConfig : xListItem_0
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
	type_60 tag_vert;
	type_63 animFrameRange;
	type_65 cnt_esteem;
	f32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	s32 test_count;
	type_75 talk_filter;
	u8 talk_filter_size;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	s8 allowDetect;
	s8 allowPatrol;
	s8 allowWander;
	s8 reduceCollide;
	s8 useNavSplines;
	type_77 pad;
	s8 allowChase;
	s8 allowAttack;
	s8 assumeLOS;
	s8 assumeFOV;
	en_dupowavmod duploWaveMode;
	f32 duploSpawnDelay;
	s32 duploSpawnLifeMax;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_95 pad;
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

struct _class_3
{
	type_61 endPoint;
	xVec3 direction;
	f32 length;
	f32 scale;
	f32 width;
	type_69 endParam;
	type_71 endVel;
	type_74 paramSpan;
	f32 arc_height;
	xVec3 arc_normal;
};

union _class_4
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
};

struct _tagLightningZeus
{
	f32 normal_offset;
	f32 back_offset;
	f32 side_offset;
};

struct zFragBone
{
	s32 index;
	xVec3 offset;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	u32 startParentID;
	u32 endParentID;
};

struct xShadowSimplePoly
{
	type_70 vert;
	xVec3 norm;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	s8* nam_sound;
	u32 aid_sound;
};

struct _tagEmitSphere
{
	f32 radius;
};

struct RpTriangle
{
	type_73 vertIndex;
	s16 matIndex;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_0 light;
	type_3 light_frame;
	s32 memlvl;
};

struct zFragAsset
{
	zFragType type;
	u32 id;
	type_6 parentID;
	f32 lifetime;
	f32 delay;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct zLightning
{
	u32 type;
	u32 flags;
	union
	{
		_class_1 legacy;
		_class_3 func;
	};
	iColor_tag color;
	f32 time_left;
	f32 time_total;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct rxReq
{
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_80 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
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
	type_94 corner;
};

struct _anon1
{
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	u32 soundID;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_93 wt;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_90 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
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

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_23 pad;
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
	f32 r;
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	f32 gravity;
	f32 minTime;
	f32 maxTime;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
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

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	f32 currSize;
	f32 currVelocity;
	f32 deltVelocity;
	f32 currSpin;
	f32 deltSpin;
	type_96 currColor;
	type_97 deltColor;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct anim_coll_data
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
	type_10 renderCallBack;
	RxPipeline* pipeline;
};

struct _anon2
{
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
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
	type_12 emit_pad;
	type_15 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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

struct zMovePoint : xMovePoint
{
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

struct zFragGroup
{
	type_1 list;
};

type_87 buffer;
type_91 buffer;
type_11 g_hash_testanim;
type_62 g_strz_testanim;
_anon0 __vt__8zNPCTest;
_anon2 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;
type_34 xAnimDefaultBeforeEnter;

u32 AnimPick(zNPCTest* this);
void SelfSetup(zNPCTest* this);
void Process(zNPCTest* this, xScene* xscn, f32 dt);
void Reset(zNPCTest* this);
xAnimTable* ZNPC_AnimTable_Test();
void ZNPC_Destroy_Test(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_Test(s32 who, RyzMemGrow* grow);
void ZNPC_Test_Shutdown();
void ZNPC_Test_Startup();

// AnimPick__8zNPCTestFi16en_NPC_GOAL_SPOTP5xGoal
// Start address: 0x324250
u32 AnimPick(zNPCTest* this)
{
}

// SelfSetup__8zNPCTestFv
// Start address: 0x324270
void SelfSetup(zNPCTest* this)
{
}

// Process__8zNPCTestFP6xScenef
// Start address: 0x324290
void Process(zNPCTest* this, xScene* xscn, f32 dt)
{
}

// Reset__8zNPCTestFv
// Start address: 0x324370
void Reset(zNPCTest* this)
{
}

// ZNPC_AnimTable_Test__Fv
// Start address: 0x3243a0
xAnimTable* ZNPC_AnimTable_Test()
{
	xAnimTable* table;
	s8** names;
	s32 i;
	s32 i;
}

// ZNPC_Destroy_Test__FP12xFactoryInst
// Start address: 0x324510
void ZNPC_Destroy_Test(xFactoryInst* inst)
{
}

// ZNPC_Create_Test__FiP10RyzMemGrowPv
// Start address: 0x324540
xFactoryInst* ZNPC_Create_Test(s32 who, RyzMemGrow* grow)
{
	zNPCTest* inst;
}

// ZNPC_Test_Shutdown__Fv
// Start address: 0x3245e0
void ZNPC_Test_Shutdown()
{
}

// ZNPC_Test_Startup__Fv
// Start address: 0x3245f0
void ZNPC_Test_Startup()
{
	s32 i;
}

