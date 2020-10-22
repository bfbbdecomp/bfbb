typedef struct xGoal;
typedef struct xEnt;
typedef struct xBase;
typedef struct xAnimMultiFileEntry;
typedef struct zFragInfo;
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
typedef struct _class_4;
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
typedef struct zFragLocInfo;
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

typedef int8*(*type_2)(xBase*);
typedef void(*type_4)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_5)(xMemPool*, void*);
typedef int8*(*type_7)(uint32);
typedef int32(*type_8)(xGoal*, void*, en_trantype*, float32, void*);
typedef RpWorldSector*(*type_10)(RpWorldSector*);
typedef uint32(*type_17)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_19)(xGoal*, void*, en_trantype*, float32, void*);
typedef void(*type_20)(RwResEntry*);
typedef int32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_25)(RxNodeDefinition*);
typedef void(*type_28)(zFrag*, float32);
typedef int32(*type_29)(xGoal*, void*, float32, void*);
typedef uint32(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_31)(RxNodeDefinition*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef int32(*type_38)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_43)(RxPipelineNode*);
typedef void(*type_45)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_46)(xEnt*);
typedef int32(*type_47)(RxPipelineNode*, RxPipeline*);
typedef void(*type_50)(xEnt*);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef int32(*type_54)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_56)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_58)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(int32*, en_trantype*);
typedef void(*type_66)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_67)(uint32);
typedef void(*type_72)(zFrag*, zFragAsset*);
typedef RpAtomic*(*type_76)(RpAtomic*);
typedef void(*type_78)(xEnt*, xScene*, float32);
typedef void(*type_79)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
typedef void(*type_81)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_82)(xEnt*, xVec3*);
typedef void(*type_83)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_85)(xEnt*);
typedef uint32(*type_89)(xEnt*, xEnt*, xScene*, float32, xCollis*);

typedef RpLight* type_0[2];
typedef zFrag* type_1[21];
typedef RwFrame* type_3[2];
typedef uint32 type_6[2];
typedef uint8 type_9[3];
typedef uint32 type_11[11];
typedef uint8 type_12[3];
typedef int8 type_13[32];
typedef xVec3 type_14[16];
typedef uint8 type_15[3];
typedef int8 type_16[32];
typedef xVec3 type_18[16];
typedef float32 type_21[2];
typedef uint8 type_23[3];
typedef float32 type_24[16];
typedef float32 type_26[4];
typedef uint8 type_27[2];
typedef float32 type_32[2];
typedef float32 type_33[4];
typedef RxCluster type_35[1];
typedef uint16 type_36[3];
typedef float32 type_37[2];
typedef uint8 type_40[2];
typedef NPCSndQueue type_41[4];
typedef xAnimMultiFileEntry type_42[1];
typedef xModelInstance* type_44[2];
typedef float32 type_48[16];
typedef xGoal* type_49[5];
typedef float32 type_51[1];
typedef float32 type_53[1][5];
typedef float32 type_55[4];
typedef RwTexCoords* type_57[8];
typedef float32 type_59[4];
typedef xModelTag type_60[20];
typedef xVec3 type_61[2];
typedef int8* type_62[11];
typedef xVec3 type_63[9];
typedef int32 type_65[5];
typedef xParInterp type_68[1];
typedef float32 type_69[2];
typedef xVec3 type_70[3];
typedef float32 type_71[2];
typedef uint16 type_73[3];
typedef float32 type_74[2];
typedef uint8 type_75[4];
typedef int8 type_77[3];
typedef float32 type_80[16];
typedef xParInterp type_84[4];
typedef xParInterp type_86[4];
typedef int8 type_87[16];
typedef int8 type_88[4];
typedef uint8 type_90[3];
typedef int8 type_91[16];
typedef RwTexCoords* type_92[8];
typedef float32 type_93[4];
typedef xVec3 type_94[4];
typedef uint32 type_95[4];
typedef float32 type_96[4];
typedef float32 type_97[4];
typedef xCollis type_98[18];

struct xGoal : xListItem_1, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	int32(*fun_process)(xGoal*, void*, en_trantype*, float32, void*);
	int32(*fun_precalc)(xGoal*, void*, float32, void*);
	int32(*fun_chkRule)(xGoal*, void*, en_trantype*, float32, void*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct zFragInfo
{
	union
	{
		zFragGroup group;
		zFragParticle particle;
		zFragProjectile projectile;
		zFragLightning lightning;
		zFragSound sound;
		zFragShockwave shockwave;
	};
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float32 delay;
	float32 alivetime;
	float32 lifetime;
	void(*update)(zFrag*, float32);
	xModelInstance* parent[2];
	zFrag* prev;
	zFrag* next;
};

struct xListItem_0
{
	int32 flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	uint32 pad3;
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
};

struct _class_0
{
	xVec3* verts;
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
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _class_1
{
	xVec3 base_point[16];
	xVec3 point[16];
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	float32 thickness[16];
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float32 rand_radius;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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
	tri_data_0 tri;
};

struct tri_data_1
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct zNPCTest : zNPCCommon
{
	int32 numAnimations;
	int32 currentState;
	float32 transitionTimer;

	uint32 AnimPick();
	void SelfSetup();
	void Process(xScene* xscn, float32 dt);
	void Reset();
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

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	xGoal* goalstak[5];
	float32 tmr_stack[1][5];
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	void(*fun_remap)(int32*, en_trantype*);
	void* userContext;
	int32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
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
	NPCSndQueue snd_queue[4];
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
	uint32 assetID;
	zFragLocation source;
	float32 volume;
	float32 innerRadius;
	float32 outerRadius;
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

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	uint32 parEmitterID;
	zParEmitter* parEmitter;
};

struct xCoef
{
	float32 a[4];
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

struct xListItem_1
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
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
	uint8 pad[3];
	void* moprops;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xParSys
{
};

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	void(*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
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
	uint16 vertIndex[3];
};

struct xFFX
{
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _anon0
{
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
	float32 t;
	float32 u;
	float32 v;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct NPCSndQueue
{
	uint32 sndDirect;
	en_NPC_SOUND sndtype;
	int32 flg_snd;
	float32 tmr_delay;
	float32 radius;
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
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
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
	uint32 modelInfoID;
	float32 birthRadius;
	float32 deathRadius;
	float32 birthVelocity;
	float32 deathVelocity;
	float32 birthSpin;
	float32 deathSpin;
	float32 birthColor[4];
	float32 deathColor[4];
};

struct xCurveAsset
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTriangle
{
	_class_4 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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
	RpClump*(*callback)(RpClump*, void*);
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _tagLightningRot
{
	float32 deg[16];
	float32 degrees;
	float32 height;
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
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
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
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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
	float32 x;
	float32 y;
	float32 z;
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

struct xNPCBasic : xEnt, xFactoryInst
{
	void(*f_setup)(xEnt*);
	void(*f_reset)(xEnt*);
	struct
	{
		int32 flg_basenpc : 16;
		int32 inUpdate : 8;
		int32 flg_upward : 8;
	};
	int32 colFreq;
	int32 colFreqReset;
	struct
	{
		uint32 flg_colCheck : 8;
		uint32 flg_penCheck : 8;
		uint32 flg_unused : 16;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
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
	xModelTag tag_vert[20];
	xVec3 animFrameRange[9];
	int32 cnt_esteem[5];
	float32 rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int32 test_count;
	uint8 talk_filter[4];
	uint8 talk_filter_size;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	int8 allowDetect;
	int8 allowPatrol;
	int8 allowWander;
	int8 reduceCollide;
	int8 useNavSplines;
	int8 pad[3];
	int8 allowChase;
	int8 allowAttack;
	int8 assumeLOS;
	int8 assumeFOV;
	en_dupowavmod duploWaveMode;
	float32 duploSpawnDelay;
	int32 duploSpawnLifeMax;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _class_3
{
	xVec3 endPoint[2];
	xVec3 direction;
	float32 length;
	float32 scale;
	float32 width;
	float32 endParam[2];
	float32 endVel[2];
	float32 paramSpan[2];
	float32 arc_height;
	xVec3 arc_normal;
};

struct _class_4
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	float32 normal_offset;
	float32 back_offset;
	float32 side_offset;
};

struct zFragBone
{
	int32 index;
	xVec3 offset;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	uint32 startParentID;
	uint32 endParentID;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	int8* nam_sound;
	uint32 aid_sound;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct zFragAsset
{
	zFragType type;
	uint32 id;
	uint32 parentID[2];
	float32 lifetime;
	float32 delay;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct rxReq
{
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct zFragLocInfo
{
	union
	{
		zFragBone bone;
		xModelTag tag;
	};
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
	float32 x_len;
	float32 z_len;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	uint32 soundID;
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
	uint32 matidx;
	float32 wt[4];
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
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float32 gravity;
	float32 minTime;
	float32 maxTime;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
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

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float32 currSize;
	float32 currVelocity;
	float32 deltVelocity;
	float32 currSpin;
	float32 deltSpin;
	float32 currColor[4];
	float32 deltColor[4];
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

struct xEntNPCAsset
{
	int32 npcFlags;
	int32 npcModel;
	int32 npcProps;
	uint32 movepoint;
	uint32 taskWidgetPrime;
	uint32 taskWidgetSecond;
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
	float32 radius;
};

struct anim_coll_data
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

struct _anon2
{
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

struct zMovePoint : xMovePoint
{
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

struct zFragGroup
{
	zFrag* list[21];
};

int8 buffer[16];
int8 buffer[16];
uint32 g_hash_testanim[11];
int8* g_strz_testanim[11];
_anon0 __vt__8zNPCTest;
_anon2 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;
void(*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*);

uint32 AnimPick();
void SelfSetup();
void Process(xScene* xscn, float32 dt);
void Reset();
xAnimTable* ZNPC_AnimTable_Test();
void ZNPC_Destroy_Test(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_Test(int32 who, RyzMemGrow* grow);
void ZNPC_Test_Shutdown();
void ZNPC_Test_Startup();

// AnimPick__8zNPCTestFi16en_NPC_GOAL_SPOTP5xGoal
// Start address: 0x324250
uint32 zNPCTest::AnimPick()
{
	// Line 229, Address: 0x324250, Func Offset: 0
	// Line 230, Address: 0x324264, Func Offset: 0x14
	// Func End, Address: 0x32426c, Func Offset: 0x1c
}

// SelfSetup__8zNPCTestFv
// Start address: 0x324270
void zNPCTest::SelfSetup()
{
	// Line 216, Address: 0x324270, Func Offset: 0
	// Line 220, Address: 0x324274, Func Offset: 0x4
	// Line 217, Address: 0x324278, Func Offset: 0x8
	// Line 223, Address: 0x324284, Func Offset: 0x14
	// Func End, Address: 0x32428c, Func Offset: 0x1c
}

// Process__8zNPCTestFP6xScenef
// Start address: 0x324290
void zNPCTest::Process(xScene* xscn, float32 dt)
{
	// Line 183, Address: 0x324290, Func Offset: 0
	// Line 185, Address: 0x324294, Func Offset: 0x4
	// Line 183, Address: 0x324298, Func Offset: 0x8
	// Line 185, Address: 0x32429c, Func Offset: 0xc
	// Line 183, Address: 0x3242a0, Func Offset: 0x10
	// Line 185, Address: 0x3242bc, Func Offset: 0x2c
	// Line 186, Address: 0x3242cc, Func Offset: 0x3c
	// Line 188, Address: 0x3242f0, Func Offset: 0x60
	// Line 194, Address: 0x3242f8, Func Offset: 0x68
	// Line 195, Address: 0x324314, Func Offset: 0x84
	// Line 197, Address: 0x324318, Func Offset: 0x88
	// Line 204, Address: 0x32433c, Func Offset: 0xac
	// Line 207, Address: 0x324340, Func Offset: 0xb0
	// Line 210, Address: 0x324350, Func Offset: 0xc0
	// Func End, Address: 0x324368, Func Offset: 0xd8
}

// Reset__8zNPCTestFv
// Start address: 0x324370
void zNPCTest::Reset()
{
	// Line 172, Address: 0x324370, Func Offset: 0
	// Line 173, Address: 0x32437c, Func Offset: 0xc
	// Line 175, Address: 0x324384, Func Offset: 0x14
	// Line 178, Address: 0x324388, Func Offset: 0x18
	// Func End, Address: 0x324398, Func Offset: 0x28
}

// ZNPC_AnimTable_Test__Fv
// Start address: 0x3243a0
xAnimTable* ZNPC_AnimTable_Test()
{
	xAnimTable* table;
	int8** names;
	int32 i;
	int32 i;
	// Line 120, Address: 0x3243a0, Func Offset: 0
	// Line 133, Address: 0x3243a4, Func Offset: 0x4
	// Line 120, Address: 0x3243a8, Func Offset: 0x8
	// Line 133, Address: 0x3243ac, Func Offset: 0xc
	// Line 120, Address: 0x3243b0, Func Offset: 0x10
	// Line 133, Address: 0x3243b4, Func Offset: 0x14
	// Line 120, Address: 0x3243b8, Func Offset: 0x18
	// Line 133, Address: 0x3243bc, Func Offset: 0x1c
	// Line 120, Address: 0x3243c0, Func Offset: 0x20
	// Line 123, Address: 0x3243c4, Func Offset: 0x24
	// Line 120, Address: 0x3243c8, Func Offset: 0x28
	// Line 133, Address: 0x3243cc, Func Offset: 0x2c
	// Line 138, Address: 0x3243d8, Func Offset: 0x38
	// Line 139, Address: 0x3243e0, Func Offset: 0x40
	// Line 144, Address: 0x324434, Func Offset: 0x94
	// Line 145, Address: 0x324440, Func Offset: 0xa0
	// Line 146, Address: 0x32444c, Func Offset: 0xac
	// Line 147, Address: 0x324490, Func Offset: 0xf0
	// Line 148, Address: 0x32449c, Func Offset: 0xfc
	// Line 149, Address: 0x3244dc, Func Offset: 0x13c
	// Line 154, Address: 0x3244f0, Func Offset: 0x150
	// Line 155, Address: 0x3244f4, Func Offset: 0x154
	// Func End, Address: 0x324510, Func Offset: 0x170
}

// ZNPC_Destroy_Test__FP12xFactoryInst
// Start address: 0x324510
void ZNPC_Destroy_Test(xFactoryInst* inst)
{
	// Line 108, Address: 0x324510, Func Offset: 0
	// Line 109, Address: 0x324514, Func Offset: 0x4
	// Line 111, Address: 0x324528, Func Offset: 0x18
	// Func End, Address: 0x324534, Func Offset: 0x24
}

// ZNPC_Create_Test__FiP10RyzMemGrowPv
// Start address: 0x324540
xFactoryInst* ZNPC_Create_Test(int32 who, RyzMemGrow* grow)
{
	zNPCTest* inst;
	// Line 92, Address: 0x324540, Func Offset: 0
	// Line 94, Address: 0x324544, Func Offset: 0x4
	// Line 92, Address: 0x324548, Func Offset: 0x8
	// Line 94, Address: 0x32454c, Func Offset: 0xc
	// Line 92, Address: 0x324550, Func Offset: 0x10
	// Line 94, Address: 0x32455c, Func Offset: 0x1c
	// Line 95, Address: 0x32456c, Func Offset: 0x2c
	// Line 96, Address: 0x324570, Func Offset: 0x30
	// Line 104, Address: 0x3245b8, Func Offset: 0x78
	// Line 105, Address: 0x3245c8, Func Offset: 0x88
	// Func End, Address: 0x3245d8, Func Offset: 0x98
}

// ZNPC_Test_Shutdown__Fv
// Start address: 0x3245e0
void ZNPC_Test_Shutdown()
{
	// Line 84, Address: 0x3245e0, Func Offset: 0
	// Func End, Address: 0x3245e8, Func Offset: 0x8
}

// ZNPC_Test_Startup__Fv
// Start address: 0x3245f0
void ZNPC_Test_Startup()
{
	int32 i;
	// Line 70, Address: 0x3245f0, Func Offset: 0
	// Line 74, Address: 0x324600, Func Offset: 0x10
	// Line 70, Address: 0x324604, Func Offset: 0x14
	// Line 74, Address: 0x324608, Func Offset: 0x18
	// Line 75, Address: 0x324618, Func Offset: 0x28
	// Line 76, Address: 0x324620, Func Offset: 0x30
	// Line 75, Address: 0x324624, Func Offset: 0x34
	// Line 76, Address: 0x324628, Func Offset: 0x38
	// Line 75, Address: 0x32462c, Func Offset: 0x3c
	// Line 76, Address: 0x324630, Func Offset: 0x40
	// Line 79, Address: 0x324638, Func Offset: 0x48
	// Func End, Address: 0x324650, Func Offset: 0x60
}

