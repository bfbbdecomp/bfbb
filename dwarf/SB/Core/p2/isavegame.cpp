typedef struct st_ISGTHUMDATA;
typedef struct xUpdateCullEnt;
typedef struct RpGeometry;
typedef struct RpAtomic;
typedef struct st_ISG_MEMCARD_DATA;
typedef struct xEnt;
typedef struct xBox;
typedef struct rxHeapBlockHeader;
typedef struct xModelInstance;
typedef struct xJSPNodeInfo;
typedef struct RxClusterDefinition;
typedef struct _zPortal;
typedef struct xEnvAsset;
typedef struct xSurface;
typedef struct xAnimTable;
typedef struct st_ISGSESSION;
typedef struct xAnimPlay;
typedef struct xScene;
typedef struct RpLight;
typedef struct xMemPool;
typedef struct RpClump;
typedef struct xQuat;
typedef struct xPortalAsset;
typedef struct rxHeapFreeBlock;
typedef struct xModelTag;
typedef struct xEntFrame;
typedef struct xFFX;
typedef struct rxReq;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct zPlayerSettings;
typedef struct RwSphere;
typedef struct xBase;
typedef struct xEntCollis;
typedef struct xCollis;
typedef struct _tagxRumble;
typedef struct iFogParams;
typedef struct zEnt;
typedef struct xAnimState;
typedef struct xUpdateCullGroup;
typedef struct xBound;
typedef struct RwTexDictionary;
typedef enum RpWorldRenderOrder;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct zScene;
typedef struct iEnv;
typedef struct RpMaterial;
typedef struct RpTriangle;
typedef struct RpWorld;
typedef struct xMat3x3;
typedef struct RxPipeline;
typedef struct sceCdCLOCK;
typedef struct RwRGBA;
typedef struct RxClusterRef;
typedef struct zJumpParam;
typedef struct xLightKitLight;
typedef struct tri_data_0;
typedef struct xModelBucket;
typedef struct RwTexture;
typedef struct RwTexCoords;
typedef struct xAnimFile;
typedef struct RpSector;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMeshHeader;
typedef struct zEntHangable;
typedef struct xShadowSimpleCache;
typedef struct sceMcTblGetDir;
typedef struct RxIoSpec;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct RwResEntry;
typedef struct xAnimTransition;
typedef enum en_ASYNC_OPCODE;
typedef struct xJSPHeader;
typedef struct xAnimTransitionList;
typedef struct xEntShadow;
typedef enum RxClusterValidityReq;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xGlobals;
typedef struct zPlatform;
typedef struct anim_coll_data;
typedef struct RxNodeMethods;
typedef struct xLightKit;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct _tagxPad;
typedef struct RwRaster;
typedef struct zCutsceneMgr;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef enum en_CHGCODE;
typedef struct xEnv;
typedef struct RwPlane;
typedef struct zAssetPickupTable;
typedef struct RxPipelineNode;
typedef struct xLinkAsset;
typedef enum en_NAMEGEN_TYPE;
typedef struct RxCluster;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeParam;
typedef struct sceMcStDateTime;
typedef struct xUpdateCullMgr;
typedef struct RwMatrixTag;
typedef struct _tagiPad;
typedef struct RxPacket;
typedef struct RxPipelineRequiresCluster;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xBaseAsset;
typedef struct RwObjectHasFrame;
typedef struct xClumpCollBSPTree;
typedef struct _class_0;
typedef struct tri_data_1;
typedef struct RwLinkList;
typedef struct RpVertexNormal;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct sceMcIconSys;
typedef enum en_ISGMC_ERRSTATUS;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct zLasso;
typedef struct RpInterpolator;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobals;
typedef struct zGlobalSettings;
typedef struct xAnimMultiFileEntry;
typedef struct xGroup;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct _class_1;
typedef struct RwBBox;
typedef struct RpPolygon;
typedef struct xVec2;
typedef struct zPlayerLassoInfo;
typedef struct RpMaterialList;
typedef struct xQCData;
typedef struct RwV3d;
typedef struct xModelPool;
typedef struct xBBox;
typedef struct xAnimSingle;
typedef struct zLedgeGrabParams;
typedef struct _class_2;
typedef enum en_ISGMCA_STATUS;
typedef struct xEntAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xAnimMultiFileBase;
typedef enum en_ASYNC_OPSTAT;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef enum en_ISG_IOMODE;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xGridBound;
typedef struct analog_data;
typedef enum en_ASYNC_OPERR;
typedef enum en_MEMCARD_SEEKPT;
typedef struct xShadowSimplePoly;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xRot;
typedef struct zPlayerCarryInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntDrive;
typedef struct xCamera;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct _zEnv;
typedef struct xCylinder;

typedef void(*type_2)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_6)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_7)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_8)(xEnt*);
typedef void(*type_12)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_13)(void*, en_CHGCODE);
typedef RpAtomic*(*type_15)(RpAtomic*);
typedef uint32(*type_20)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_27)(void*);
typedef void(*type_28)(xEnt*, xScene*, float32);
typedef void(*type_29)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_43)(RwCamera*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef RwCamera*(*type_53)(RwCamera*);
typedef int32(*type_54)(xBase*, xBase*, uint32, float32*, xBase*);
typedef xBase*(*type_63)(uint32);
typedef void(*type_64)(RwResEntry*);
typedef int32(*type_65)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_66)(xMemPool*, void*);
typedef void(*type_70)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_73)(xBase*);
typedef int32(*type_74)(RxNodeDefinition*);
typedef int8*(*type_76)(uint32);
typedef void(*type_77)(RxNodeDefinition*);
typedef int32(*type_80)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_81)(RwObjectHasFrame*);
typedef void(*type_82)(RxPipelineNode*);
typedef uint32(*type_83)(void*, void*);
typedef int32(*type_87)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_94)(RxPipelineNode*, uint32, uint32, void*);
typedef RpClump*(*type_106)(RpClump*, void*);

typedef float32 type_0[16];
typedef uint8 type_1[4];
typedef uint8 type_5[3];
typedef int8 type_9[64];
typedef uint32 type_10[4];
typedef float32 type_11[4];
typedef uint8 type_14[2];
typedef xVec4 type_16[12];
typedef uint8 type_17[68];
typedef uint32 type_18[2];
typedef int32 type_19[4][4];
typedef uint8 type_21[2];
typedef float32 type_22[6];
typedef int8 type_23[25];
typedef int8 type_24[64];
typedef int8 type_25[25][3];
typedef float32 type_26[4][3];
typedef float32 type_30[3];
typedef float32 type_31[4][3];
typedef float32 type_32[3];
typedef int8 type_33[25];
typedef int8 type_34[25][3];
typedef xModelTag type_35[2];
typedef float32 type_36[3];
typedef xVec3 type_37[4];
typedef uint8 type_38[68];
typedef RwTexCoords* type_39[8];
typedef uint8 type_40[64];
typedef int8 type_41[64];
typedef float32 type_42[4];
typedef uint8 type_44[64];
typedef int8 type_45[64];
typedef RpLight* type_46[2];
typedef uint8 type_47[64];
typedef xEnt* type_48[111];
typedef int8 type_50[64];
typedef RwFrame* type_52[2];
typedef uint8 type_55[512];
typedef int8* type_56[3];
typedef int8 type_57[64];
typedef int8 type_58[32];
typedef int8 type_59[128];
typedef xCollis type_60[18];
typedef int8 type_61[128][6];
typedef int8 type_62[32];
typedef int8 type_67[64];
typedef uint8 type_68[14];
typedef xModelTag type_69[4];
typedef int32 type_71[2];
typedef int8 type_72[32];
typedef xModelInstance* type_75[14];
typedef RxCluster type_78[1];
typedef uint8 type_79[4];
typedef uint8 type_84[22];
typedef int8 type_85[32];
typedef uint8 type_86[22];
typedef int32 type_88[2];
typedef int8 type_89[32];
typedef float32 type_90[2];
typedef RwFrustumPlane type_91[6];
typedef uint16 type_92[3];
typedef _tagxPad type_93[4];
typedef int32 type_95[4][4];
typedef xVec3 type_96[5];
typedef RwV3d type_97[8];
typedef uint8 type_98[32];
typedef uint8 type_99[5];
typedef int8 type_100[32];
typedef int8 type_101[32][8];
typedef xVec3 type_102[60];
typedef float32 type_103[2];
typedef float32 type_104[4][3];
typedef float32 type_105[22];
typedef float32 type_107[22];
typedef int8 type_108[32];
typedef uint32 type_109[15];
typedef RwTexCoords* type_110[8];
typedef uint32 type_111[15];
typedef uint8 type_112[2];
typedef float32 type_113[4][3];
typedef xAnimMultiFileEntry type_114[1];
typedef xVec3 type_115[3];
typedef uint32 type_116[15];
typedef int8 type_117[64];
typedef uint32 type_118[72];
typedef analog_data type_119[2];
typedef int8 type_120[4];
typedef int32 type_121[4];
typedef uint16 type_122[3];
typedef int8 type_123[32];
typedef xBase* type_124[72];
typedef float32 type_125[4];
typedef int8 type_126[992];
typedef int8* type_127[8];

struct st_ISGTHUMDATA
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct st_ISG_MEMCARD_DATA
{
	int32 mcport;
	int32 mcslot;
	int32 mcfp;
	en_ISG_IOMODE fmode;
	int8 gamepath[64];
	sceMcTblGetDir finfo;
	int32 cur_mcop;
	en_ISGMC_ERRSTATUS mcerr;
	int32 allow_cache;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	float32 padF1;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
};

struct xSurface
{
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

struct st_ISGSESSION
{
	st_ISG_MEMCARD_DATA* mcdata;
	int8 gameroot[64];
	int8 gamedir[64];
	en_ASYNC_OPCODE as_curop;
	en_ASYNC_OPSTAT as_opstat;
	en_ASYNC_OPERR as_operr;
	void* cltdata;
	en_CHGCODE chgcode;
	void(*chgfunc)(void*, en_CHGCODE);
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct xFFX
{
};

struct rxReq
{
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	float32 MoveSpeed[6];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 AnimRun[3];
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	uint8 talk_filter[4];
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
		tri_data_1 tri;
	};
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	uint32 num_update_base;
	xBase** update_base;
	uint32 baseCount[72];
	xBase* baseList[72];
	_zEnv* zen;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
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

struct sceCdCLOCK
{
	uint8 stat;
	uint8 second;
	uint8 minute;
	uint8 hour;
	uint8 pad;
	uint8 day;
	uint8 month;
	uint8 year;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RpSector
{
	int32 type;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct zEntHangable
{
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

struct sceMcTblGetDir
{
	sceMcStDateTime _Create;
	sceMcStDateTime _Modify;
	uint32 FileSizeByte;
	uint16 AttrFile;
	uint16 Reserve1;
	uint32 Reserve2;
	uint32 PdaAplNo;
	uint8 EntryName[32];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xEntBoulder
{
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

enum en_ASYNC_OPCODE
{
	ISG_OPER_NOOP,
	ISG_OPER_INIT,
	ISG_OPER_SAVE,
	ISG_OPER_LOAD
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct zPlatform
{
};

struct anim_coll_data
{
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct zCutsceneMgr
{
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

enum en_CHGCODE
{
	ISG_CHG_NONE,
	ISG_CHG_TARGET,
	ISG_CHG_GAMELIST
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct zAssetPickupTable
{
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum en_NAMEGEN_TYPE
{
	ISG_NGTYP_GAMEDIR,
	ISG_NGTYP_GAMEFILE,
	ISG_NGTYP_CONFIG,
	ISG_NGTYP_ICONTHUM
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct sceMcStDateTime
{
	uint8 Resv2;
	uint8 Sec;
	uint8 Min;
	uint8 Hour;
	uint8 Day;
	uint8 Month;
	uint16 Year;
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

struct _tagiPad
{
	int32 port;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct sceMcIconSys
{
	uint8 Head[4];
	uint16 Reserv1;
	uint16 OffsLF;
	uint32 Reserv2;
	uint32 TransRate;
	int32 BgColor[4][4];
	float32 LightDir[4][3];
	float32 LightColor[4][3];
	float32 Ambient[4];
	uint8 TitleName[68];
	uint8 FnameView[64];
	uint8 FnameCopy[64];
	uint8 FnameDel[64];
	uint8 Reserve3[512];
};

enum en_ISGMC_ERRSTATUS
{
	ISGMC_ERR_NONE,
	ISGMC_ERR_NOMEMCARD,
	ISGMC_ERR_MKDIR,
	ISGMC_ERR_OPEN,
	ISGMC_ERR_CLOSE,
	ISGMC_ERR_READ,
	ISGMC_ERR_WRITE
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	xVec3 lastRefs[5];
	uint8 reindex[5];
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 DisableForceConversation;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 SandyMeleeMinFrame;
	float32 SandyMeleeMaxFrame;
	float32 SandyMeleeRadius;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _class_1
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float32 dist;
	uint8 destroy;
	uint8 targetGuide;
	float32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float32 copterTime;
	int32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	xVec3 tranTable[60];
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

enum en_ISGMCA_STATUS
{
	ISG_MCA_STAT_DONE_ERR = 0xffffffff,
	ISG_MCA_STAT_INPROG,
	ISG_MCA_STAT_DONE
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
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

enum en_ISG_IOMODE
{
	ISG_IOMODE_READ = 0x1,
	ISG_IOMODE_WRITE,
	ISG_IOMODE_APPEND
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum en_ASYNC_OPERR
{
	ISG_OPERR_NONE,
	ISG_OPERR_NOOPER,
	ISG_OPERR_MULTIOPER,
	ISG_OPERR_INITFAIL,
	ISG_OPERR_GAMEDIR,
	ISG_OPERR_NOCARD,
	ISG_OPERR_NOROOM,
	ISG_OPERR_DAMAGE,
	ISG_OPERR_CORRUPT,
	ISG_OPERR_OTHER,
	ISG_OPERR_SVNOSPACE,
	ISG_OPERR_SVINIT,
	ISG_OPERR_SVWRITE,
	ISG_OPERR_SVOPEN,
	ISG_OPERR_LDINIT,
	ISG_OPERR_LDREAD,
	ISG_OPERR_LDOPEN,
	ISG_OPERR_TGTERR,
	ISG_OPERR_TGTREM,
	ISG_OPERR_TGTPREP,
	ISG_OPERR_UNKNOWN,
	ISG_OPERR_NOMORE
};

enum en_MEMCARD_SEEKPT
{
	ISG_MCSEEK_TOP,
	ISG_MCSEEK_CUR,
	ISG_MCSEEK_END
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	xEnt* MountChimney;
	float32 MountChimOldY;
	uint32 MaxHealth;
	uint32 DoMeleeCheck;
	float32 VictoryTimer;
	float32 BadGuyNearTimer;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	zEnt* FireTarget;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	xModelTag BubbleWandTag[2];
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	xModelTag HangPawTag[4];
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	int32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	uint32 Inv_Shiny;
	uint32 Inv_Spatula;
	uint32 Inv_PatsSock[15];
	uint32 Inv_PatsSock_Max[15];
	uint32 Inv_PatsSock_CurrentLevel;
	uint32 Inv_LevelPickups[15];
	uint32 Inv_LevelPickups_CurrentLevel;
	uint32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	uint32 TongueFlags[2];
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	xEnt* SlideTrackEnt[111];
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	uint8 sb_model_indices[14];
	xModelInstance* sb_models[14];
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

int8* g_scoobydoo_icon_list;
int32 gIconSize;
int8* g_scoobydoo_icon_copy;
int8* g_scoobydoo_icon_delete;
int32 g_isginit;
st_ISG_MEMCARD_DATA g_mcdata_MAIN;
st_ISGSESSION g_isgdata_MAIN;
st_ISG_MEMCARD_DATA g_mcdata_MONITOR;
st_ISGSESSION g_isgdata_MONITOR;
int8* g_isg_scemodule[3];
int8* g_strz_egotrip[8];
_tagxPad mPad[4];
zGlobals globals;

uint8 iSGCheckMemoryCard(int32 index);
uint8 iSGCheckForGameFiles(int32 mcPort);
uint8 iSGIsGameCorrupt(st_ISGSESSION* sess);
void iSGIconInit(void* iconData, uint32 size);
void iSGMakeTimeStamp(int8* str);
int32 iSG_is_MCOP_realerr(int32 mcop, int32 que_rc);
int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret);
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval);
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n);
int32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, int8* buf, int32 bufsize);
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode);
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force);
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr);
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path);
int32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath);
int32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx);
int32 iSG_mcidx_portslot(int32 mcidx, int32* port, int32* slot, int32* concnt);
void SQUIB_init_st_iconsys(sceMcIconSys* icsys);
int32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata);
int32 iSG_start_your_engines();
int32 iSGAutoSave_Monitor(st_ISGSESSION* isg, int32 idx_target);
void iSGAutoSave_Disconnect(st_ISGSESSION* isg);
st_ISGSESSION* iSGAutoSave_Connect(int32 idx_target, void* cltdata, void(*chg)(void*, en_CHGCODE));
void iSGAutoSave_Startup();
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg);
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block);
int32 iSGReadLeader(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 numbytes, int32 async);
int32 iSGLoadFile(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 async);
int32 iSGSaveFile(st_ISGSESSION* isgdata, int8* fname, int8* data, int32 n, int32 async);
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, int8* dname, int32 force_iconfix);
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, int8* dname);
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr);
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname);
int32 iSGFileSize(st_ISGSESSION* isgdata, int8* fname);
uint8 iSGGameExists(st_ISGSESSION* isgdata, int8* fname);
int32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk);
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx);
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath);
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async);
int32 iSGTgtPhysSlotIdx();
int32 iSGTgtCount(int32* max);
void iSGSessionEnd(st_ISGSESSION* isgdata);
st_ISGSESSION* iSGSessionBegin(void* cltdata, void(*chgfunc)(void*, en_CHGCODE), int32 monitor);
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx);
int32 iSGShutdown();
int32 iSGStartup();

// iSGCheckMemoryCard__FP13st_ISGSESSIONi
// Start address: 0x1b3230
uint8 iSGCheckMemoryCard(int32 index)
{
	int32 result;
	// Line 5247, Address: 0x1b3230, Func Offset: 0
	// Line 5249, Address: 0x1b3234, Func Offset: 0x4
	// Line 5247, Address: 0x1b3238, Func Offset: 0x8
	// Line 5249, Address: 0x1b323c, Func Offset: 0xc
	// Line 5250, Address: 0x1b3254, Func Offset: 0x24
	// Line 5252, Address: 0x1b3268, Func Offset: 0x38
	// Line 5254, Address: 0x1b3280, Func Offset: 0x50
	// Line 5257, Address: 0x1b3288, Func Offset: 0x58
	// Line 5258, Address: 0x1b3290, Func Offset: 0x60
	// Func End, Address: 0x1b329c, Func Offset: 0x6c
}

// iSGCheckForGameFiles__Fi
// Start address: 0x1b32a0
uint8 iSGCheckForGameFiles(int32 mcPort)
{
	int8 fileNames[25][3];
	int8* gameDir;
	int32 resultCode;
	int32 i;
	// Line 5198, Address: 0x1b32a0, Func Offset: 0
	// Line 5203, Address: 0x1b32a4, Func Offset: 0x4
	// Line 5198, Address: 0x1b32a8, Func Offset: 0x8
	// Line 5211, Address: 0x1b32ac, Func Offset: 0xc
	// Line 5198, Address: 0x1b32b0, Func Offset: 0x10
	// Line 5203, Address: 0x1b32b4, Func Offset: 0x14
	// Line 5198, Address: 0x1b32b8, Func Offset: 0x18
	// Line 5203, Address: 0x1b32bc, Func Offset: 0x1c
	// Line 5198, Address: 0x1b32c0, Func Offset: 0x20
	// Line 5211, Address: 0x1b32c4, Func Offset: 0x24
	// Line 5203, Address: 0x1b32c8, Func Offset: 0x28
	// Line 5215, Address: 0x1b32d4, Func Offset: 0x34
	// Line 5203, Address: 0x1b32d8, Func Offset: 0x38
	// Line 5215, Address: 0x1b32dc, Func Offset: 0x3c
	// Line 5203, Address: 0x1b32e0, Func Offset: 0x40
	// Line 5215, Address: 0x1b3308, Func Offset: 0x68
	// Line 5216, Address: 0x1b3310, Func Offset: 0x70
	// Line 5219, Address: 0x1b3320, Func Offset: 0x80
	// Line 5223, Address: 0x1b332c, Func Offset: 0x8c
	// Line 5226, Address: 0x1b3330, Func Offset: 0x90
	// Line 5227, Address: 0x1b3344, Func Offset: 0xa4
	// Line 5230, Address: 0x1b3358, Func Offset: 0xb8
	// Line 5233, Address: 0x1b3360, Func Offset: 0xc0
	// Line 5234, Address: 0x1b3368, Func Offset: 0xc8
	// Line 5237, Address: 0x1b3378, Func Offset: 0xd8
	// Line 5239, Address: 0x1b3380, Func Offset: 0xe0
	// Line 5244, Address: 0x1b3390, Func Offset: 0xf0
	// Line 5245, Address: 0x1b3398, Func Offset: 0xf8
	// Func End, Address: 0x1b33b0, Func Offset: 0x110
}

// iSGIsGameCorrupt__FP13st_ISGSESSIONi
// Start address: 0x1b33b0
uint8 iSGIsGameCorrupt(st_ISGSESSION* sess)
{
	int8 fileNames[25][3];
	int8* gameDir;
	int32 resultCode;
	int32 i;
	// Line 5148, Address: 0x1b33b0, Func Offset: 0
	// Line 5153, Address: 0x1b33b4, Func Offset: 0x4
	// Line 5148, Address: 0x1b33b8, Func Offset: 0x8
	// Line 5161, Address: 0x1b33bc, Func Offset: 0xc
	// Line 5148, Address: 0x1b33c0, Func Offset: 0x10
	// Line 5153, Address: 0x1b33c4, Func Offset: 0x14
	// Line 5148, Address: 0x1b33c8, Func Offset: 0x18
	// Line 5153, Address: 0x1b33cc, Func Offset: 0x1c
	// Line 5148, Address: 0x1b33d0, Func Offset: 0x20
	// Line 5161, Address: 0x1b33d4, Func Offset: 0x24
	// Line 5153, Address: 0x1b33d8, Func Offset: 0x28
	// Line 5161, Address: 0x1b3414, Func Offset: 0x64
	// Line 5165, Address: 0x1b3418, Func Offset: 0x68
	// Line 5166, Address: 0x1b3428, Func Offset: 0x78
	// Line 5169, Address: 0x1b3438, Func Offset: 0x88
	// Line 5173, Address: 0x1b3444, Func Offset: 0x94
	// Line 5176, Address: 0x1b344c, Func Offset: 0x9c
	// Line 5177, Address: 0x1b3460, Func Offset: 0xb0
	// Line 5180, Address: 0x1b3474, Func Offset: 0xc4
	// Line 5183, Address: 0x1b347c, Func Offset: 0xcc
	// Line 5184, Address: 0x1b3484, Func Offset: 0xd4
	// Line 5187, Address: 0x1b3494, Func Offset: 0xe4
	// Line 5189, Address: 0x1b349c, Func Offset: 0xec
	// Line 5194, Address: 0x1b34b0, Func Offset: 0x100
	// Line 5195, Address: 0x1b34b8, Func Offset: 0x108
	// Func End, Address: 0x1b34d0, Func Offset: 0x120
}

// iSGIconInit__FPvUi
// Start address: 0x1b34d0
void iSGIconInit(void* iconData, uint32 size)
{
	// Line 5140, Address: 0x1b34d0, Func Offset: 0
	// Line 5144, Address: 0x1b34d4, Func Offset: 0x4
	// Func End, Address: 0x1b34dc, Func Offset: 0xc
}

// iSGMakeTimeStamp__FPc
// Start address: 0x1b34e0
void iSGMakeTimeStamp(int8* str)
{
	// Line 5128, Address: 0x1b34e0, Func Offset: 0
	// Func End, Address: 0x1b34e8, Func Offset: 0x8
}

// iSG_is_MCOP_realerr__Fii
// Start address: 0x1b34f0
int32 iSG_is_MCOP_realerr(int32 mcop, int32 que_rc)
{
	int32 is_ok;
	// Line 4158, Address: 0x1b34f0, Func Offset: 0
	// Line 4180, Address: 0x1b3518, Func Offset: 0x28
	// Line 4198, Address: 0x1b3520, Func Offset: 0x30
	// Line 4202, Address: 0x1b3528, Func Offset: 0x38
	// Line 4204, Address: 0x1b352c, Func Offset: 0x3c
	// Line 4207, Address: 0x1b3530, Func Offset: 0x40
	// Func End, Address: 0x1b3538, Func Offset: 0x48
}

// iSG_is_synccode_realerr__FiiP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3540
int32 iSG_is_synccode_realerr(int32 mcop, int32 mcopret)
{
	int32 is_ok;
	// Line 3770, Address: 0x1b3540, Func Offset: 0
	// Line 3771, Address: 0x1b3548, Func Offset: 0x8
	// Line 3775, Address: 0x1b3554, Func Offset: 0x14
	// Line 3779, Address: 0x1b3560, Func Offset: 0x20
	// Line 3782, Address: 0x1b3568, Func Offset: 0x28
	// Line 3801, Address: 0x1b3588, Func Offset: 0x48
	// Line 3802, Address: 0x1b3590, Func Offset: 0x50
	// Line 3803, Address: 0x1b359c, Func Offset: 0x5c
	// Line 3807, Address: 0x1b35e0, Func Offset: 0xa0
	// Line 3811, Address: 0x1b35e8, Func Offset: 0xa8
	// Line 3816, Address: 0x1b35f0, Func Offset: 0xb0
	// Line 3832, Address: 0x1b35f8, Func Offset: 0xb8
	// Line 3833, Address: 0x1b3600, Func Offset: 0xc0
	// Line 3834, Address: 0x1b360c, Func Offset: 0xcc
	// Line 3838, Address: 0x1b3638, Func Offset: 0xf8
	// Line 3842, Address: 0x1b3640, Func Offset: 0x100
	// Line 3851, Address: 0x1b3648, Func Offset: 0x108
	// Line 3859, Address: 0x1b3650, Func Offset: 0x110
	// Line 3860, Address: 0x1b3658, Func Offset: 0x118
	// Line 3861, Address: 0x1b3664, Func Offset: 0x124
	// Line 3862, Address: 0x1b3684, Func Offset: 0x144
	// Line 3865, Address: 0x1b3688, Func Offset: 0x148
	// Line 3869, Address: 0x1b3690, Func Offset: 0x150
	// Line 3877, Address: 0x1b3698, Func Offset: 0x158
	// Line 3878, Address: 0x1b36a0, Func Offset: 0x160
	// Line 3879, Address: 0x1b36ac, Func Offset: 0x16c
	// Line 3883, Address: 0x1b36d8, Func Offset: 0x198
	// Line 3887, Address: 0x1b36e0, Func Offset: 0x1a0
	// Line 3891, Address: 0x1b36e8, Func Offset: 0x1a8
	// Line 3899, Address: 0x1b36f0, Func Offset: 0x1b0
	// Line 3900, Address: 0x1b36f8, Func Offset: 0x1b8
	// Line 3901, Address: 0x1b3704, Func Offset: 0x1c4
	// Line 3905, Address: 0x1b3748, Func Offset: 0x208
	// Line 3909, Address: 0x1b3750, Func Offset: 0x210
	// Line 3913, Address: 0x1b3758, Func Offset: 0x218
	// Line 3917, Address: 0x1b3760, Func Offset: 0x220
	// Line 3922, Address: 0x1b3768, Func Offset: 0x228
	// Line 3930, Address: 0x1b3770, Func Offset: 0x230
	// Line 3931, Address: 0x1b3778, Func Offset: 0x238
	// Line 3932, Address: 0x1b3784, Func Offset: 0x244
	// Line 3933, Address: 0x1b37a4, Func Offset: 0x264
	// Line 3936, Address: 0x1b37a8, Func Offset: 0x268
	// Line 3940, Address: 0x1b37b0, Func Offset: 0x270
	// Line 3948, Address: 0x1b37b8, Func Offset: 0x278
	// Line 3949, Address: 0x1b37c0, Func Offset: 0x280
	// Line 3950, Address: 0x1b37cc, Func Offset: 0x28c
	// Line 3954, Address: 0x1b37f8, Func Offset: 0x2b8
	// Line 3959, Address: 0x1b3800, Func Offset: 0x2c0
	// Line 3965, Address: 0x1b3808, Func Offset: 0x2c8
	// Line 3973, Address: 0x1b3810, Func Offset: 0x2d0
	// Line 3974, Address: 0x1b3818, Func Offset: 0x2d8
	// Line 3975, Address: 0x1b3824, Func Offset: 0x2e4
	// Line 3979, Address: 0x1b3850, Func Offset: 0x310
	// Line 3983, Address: 0x1b3858, Func Offset: 0x318
	// Line 3988, Address: 0x1b3860, Func Offset: 0x320
	// Line 3996, Address: 0x1b3868, Func Offset: 0x328
	// Line 3997, Address: 0x1b3870, Func Offset: 0x330
	// Line 3998, Address: 0x1b387c, Func Offset: 0x33c
	// Line 3999, Address: 0x1b389c, Func Offset: 0x35c
	// Line 4002, Address: 0x1b38a0, Func Offset: 0x360
	// Line 4006, Address: 0x1b38a8, Func Offset: 0x368
	// Line 4014, Address: 0x1b38b0, Func Offset: 0x370
	// Line 4015, Address: 0x1b38b8, Func Offset: 0x378
	// Line 4016, Address: 0x1b38c4, Func Offset: 0x384
	// Line 4017, Address: 0x1b38e4, Func Offset: 0x3a4
	// Line 4021, Address: 0x1b38e8, Func Offset: 0x3a8
	// Line 4026, Address: 0x1b38f0, Func Offset: 0x3b0
	// Line 4034, Address: 0x1b38f8, Func Offset: 0x3b8
	// Line 4035, Address: 0x1b3900, Func Offset: 0x3c0
	// Line 4036, Address: 0x1b390c, Func Offset: 0x3cc
	// Line 4037, Address: 0x1b3944, Func Offset: 0x404
	// Line 4040, Address: 0x1b3948, Func Offset: 0x408
	// Line 4045, Address: 0x1b3950, Func Offset: 0x410
	// Line 4051, Address: 0x1b3958, Func Offset: 0x418
	// Line 4055, Address: 0x1b3960, Func Offset: 0x420
	// Line 4063, Address: 0x1b3968, Func Offset: 0x428
	// Line 4064, Address: 0x1b3970, Func Offset: 0x430
	// Line 4073, Address: 0x1b397c, Func Offset: 0x43c
	// Line 4074, Address: 0x1b3988, Func Offset: 0x448
	// Line 4083, Address: 0x1b3994, Func Offset: 0x454
	// Line 4084, Address: 0x1b39a0, Func Offset: 0x460
	// Line 4085, Address: 0x1b39ac, Func Offset: 0x46c
	// Line 4086, Address: 0x1b39cc, Func Offset: 0x48c
	// Line 4090, Address: 0x1b39d0, Func Offset: 0x490
	// Line 4103, Address: 0x1b39d8, Func Offset: 0x498
	// Line 4104, Address: 0x1b39e0, Func Offset: 0x4a0
	// Line 4105, Address: 0x1b39ec, Func Offset: 0x4ac
	// Line 4106, Address: 0x1b3a0c, Func Offset: 0x4cc
	// Line 4109, Address: 0x1b3a10, Func Offset: 0x4d0
	// Line 4115, Address: 0x1b3a18, Func Offset: 0x4d8
	// Line 4123, Address: 0x1b3a20, Func Offset: 0x4e0
	// Line 4124, Address: 0x1b3a28, Func Offset: 0x4e8
	// Line 4134, Address: 0x1b3a34, Func Offset: 0x4f4
	// Line 4135, Address: 0x1b3a40, Func Offset: 0x500
	// Line 4141, Address: 0x1b3a4c, Func Offset: 0x50c
	// Line 4145, Address: 0x1b3a50, Func Offset: 0x510
	// Func End, Address: 0x1b3a58, Func Offset: 0x518
}

// iSG_mcasync_chkop__FP19st_ISG_MEMCARD_DATAiPi
// Start address: 0x1b3a60
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int32 block, int32* sync_resval)
{
	en_ISGMCA_STATUS result;
	int32 rc;
	int32 ret;
	int32 mcf;
	uint32 on;
	// Line 3664, Address: 0x1b3a60, Func Offset: 0
	// Line 3668, Address: 0x1b3a88, Func Offset: 0x28
	// Line 3670, Address: 0x1b3a8c, Func Offset: 0x2c
	// Line 3672, Address: 0x1b3a90, Func Offset: 0x30
	// Line 3674, Address: 0x1b3aac, Func Offset: 0x4c
	// Line 3677, Address: 0x1b3ab0, Func Offset: 0x50
	// Line 3691, Address: 0x1b3ac0, Func Offset: 0x60
	// Line 3692, Address: 0x1b3ae4, Func Offset: 0x84
	// Line 3695, Address: 0x1b3ae8, Func Offset: 0x88
	// Line 3700, Address: 0x1b3af0, Func Offset: 0x90
	// Line 3704, Address: 0x1b3af8, Func Offset: 0x98
	// Line 3708, Address: 0x1b3b00, Func Offset: 0xa0
	// Line 3710, Address: 0x1b3b04, Func Offset: 0xa4
	// Line 3714, Address: 0x1b3b08, Func Offset: 0xa8
	// Line 3719, Address: 0x1b3b20, Func Offset: 0xc0
	// Line 3721, Address: 0x1b3b28, Func Offset: 0xc8
	// Line 3722, Address: 0x1b3b58, Func Offset: 0xf8
	// Line 3726, Address: 0x1b3b68, Func Offset: 0x108
	// Line 3729, Address: 0x1b3b74, Func Offset: 0x114
	// Line 3730, Address: 0x1b3b84, Func Offset: 0x124
	// Line 3732, Address: 0x1b3b8c, Func Offset: 0x12c
	// Line 3736, Address: 0x1b3b90, Func Offset: 0x130
	// Line 3739, Address: 0x1b3ba0, Func Offset: 0x140
	// Line 3741, Address: 0x1b3bb8, Func Offset: 0x158
	// Line 3743, Address: 0x1b3bc0, Func Offset: 0x160
	// Line 3750, Address: 0x1b3bc8, Func Offset: 0x168
	// Line 3751, Address: 0x1b3bcc, Func Offset: 0x16c
	// Func End, Address: 0x1b3bec, Func Offset: 0x18c
}

// iSG_mca_fwrite__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3bf0
int32 iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, int8* data, int32 n)
{
	int32 result;
	int32 rc;
	// Line 3530, Address: 0x1b3bf0, Func Offset: 0
	// Line 3535, Address: 0x1b3c04, Func Offset: 0x14
	// Line 3538, Address: 0x1b3c08, Func Offset: 0x18
	// Line 3540, Address: 0x1b3c20, Func Offset: 0x30
	// Line 3541, Address: 0x1b3c28, Func Offset: 0x38
	// Line 3542, Address: 0x1b3c30, Func Offset: 0x40
	// Line 3543, Address: 0x1b3c3c, Func Offset: 0x4c
	// Line 3553, Address: 0x1b3c48, Func Offset: 0x58
	// Line 3554, Address: 0x1b3c4c, Func Offset: 0x5c
	// Func End, Address: 0x1b3c60, Func Offset: 0x70
}

// iSG_mca_fread__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3c60
int32 iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, int8* buf, int32 bufsize)
{
	int32 result;
	int32 rc;
	// Line 3479, Address: 0x1b3c60, Func Offset: 0
	// Line 3484, Address: 0x1b3c74, Func Offset: 0x14
	// Line 3486, Address: 0x1b3c88, Func Offset: 0x28
	// Line 3487, Address: 0x1b3c90, Func Offset: 0x30
	// Line 3488, Address: 0x1b3c98, Func Offset: 0x38
	// Line 3489, Address: 0x1b3ca4, Func Offset: 0x44
	// Line 3499, Address: 0x1b3cb0, Func Offset: 0x50
	// Line 3500, Address: 0x1b3cb4, Func Offset: 0x54
	// Func End, Address: 0x1b3cc8, Func Offset: 0x68
}

// iSG_mca_fopen__FP19st_ISG_MEMCARD_DATAPCc13en_ISG_IOMODE
// Start address: 0x1b3cd0
int32 iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, int8* fname, en_ISG_IOMODE mode)
{
	int32 result;
	int32 rc;
	int32 ps2mode;
	// Line 3278, Address: 0x1b3cd0, Func Offset: 0
	// Line 3279, Address: 0x1b3ce0, Func Offset: 0x10
	// Line 3292, Address: 0x1b3ce4, Func Offset: 0x14
	// Line 3295, Address: 0x1b3cf8, Func Offset: 0x28
	// Line 3296, Address: 0x1b3cfc, Func Offset: 0x2c
	// Line 3295, Address: 0x1b3d00, Func Offset: 0x30
	// Line 3296, Address: 0x1b3d04, Func Offset: 0x34
	// Line 3297, Address: 0x1b3d10, Func Offset: 0x40
	// Line 3298, Address: 0x1b3d1c, Func Offset: 0x4c
	// Line 3307, Address: 0x1b3d28, Func Offset: 0x58
	// Line 3309, Address: 0x1b3d2c, Func Offset: 0x5c
	// Func End, Address: 0x1b3d40, Func Offset: 0x70
}

// iSG_mca_unfmt__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3d40
int32 iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata)
{
	int32 result;
	int32 rc;
	// Line 3098, Address: 0x1b3d40, Func Offset: 0
	// Line 3103, Address: 0x1b3d54, Func Offset: 0x14
	// Line 3107, Address: 0x1b3d58, Func Offset: 0x18
	// Line 3108, Address: 0x1b3d64, Func Offset: 0x24
	// Line 3113, Address: 0x1b3d6c, Func Offset: 0x2c
	// Line 3118, Address: 0x1b3d78, Func Offset: 0x38
	// Line 3119, Address: 0x1b3d80, Func Offset: 0x40
	// Line 3120, Address: 0x1b3d8c, Func Offset: 0x4c
	// Line 3121, Address: 0x1b3d98, Func Offset: 0x58
	// Line 3123, Address: 0x1b3da4, Func Offset: 0x64
	// Line 3132, Address: 0x1b3da8, Func Offset: 0x68
	// Line 3133, Address: 0x1b3dac, Func Offset: 0x6c
	// Func End, Address: 0x1b3dc0, Func Offset: 0x80
}

// iSG_mca_fmt__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b3dc0
int32 iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int32 force)
{
	int32 result;
	int32 rc;
	// Line 3012, Address: 0x1b3dc0, Func Offset: 0
	// Line 3017, Address: 0x1b3ddc, Func Offset: 0x1c
	// Line 3020, Address: 0x1b3de0, Func Offset: 0x20
	// Line 3021, Address: 0x1b3dec, Func Offset: 0x2c
	// Line 3024, Address: 0x1b3dfc, Func Offset: 0x3c
	// Line 3029, Address: 0x1b3e18, Func Offset: 0x58
	// Line 3030, Address: 0x1b3e24, Func Offset: 0x64
	// Line 3038, Address: 0x1b3e2c, Func Offset: 0x6c
	// Line 3046, Address: 0x1b3e38, Func Offset: 0x78
	// Line 3048, Address: 0x1b3e40, Func Offset: 0x80
	// Line 3049, Address: 0x1b3e4c, Func Offset: 0x8c
	// Line 3050, Address: 0x1b3e58, Func Offset: 0x98
	// Line 3052, Address: 0x1b3e64, Func Offset: 0xa4
	// Line 3061, Address: 0x1b3e68, Func Offset: 0xa8
	// Line 3062, Address: 0x1b3e6c, Func Offset: 0xac
	// Func End, Address: 0x1b3e84, Func Offset: 0xc4
}

// iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi
// Start address: 0x1b3e90
int32 iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	int32 result;
	int32 rc;
	sceMcTblGetDir* finf;
	// Line 2932, Address: 0x1b3e90, Func Offset: 0
	// Line 2933, Address: 0x1b3ea0, Func Offset: 0x10
	// Line 2932, Address: 0x1b3ea4, Func Offset: 0x14
	// Line 2935, Address: 0x1b3ed4, Func Offset: 0x44
	// Line 2938, Address: 0x1b3ed8, Func Offset: 0x48
	// Line 2939, Address: 0x1b3ee0, Func Offset: 0x50
	// Line 2943, Address: 0x1b3ef0, Func Offset: 0x60
	// Line 2944, Address: 0x1b3f00, Func Offset: 0x70
	// Line 2945, Address: 0x1b3f10, Func Offset: 0x80
	// Line 2946, Address: 0x1b3f20, Func Offset: 0x90
	// Line 2947, Address: 0x1b3f30, Func Offset: 0xa0
	// Line 2948, Address: 0x1b3f40, Func Offset: 0xb0
	// Line 2952, Address: 0x1b3f50, Func Offset: 0xc0
	// Line 2953, Address: 0x1b3f54, Func Offset: 0xc4
	// Func End, Address: 0x1b3f80, Func Offset: 0xf0
}

// iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCcPCc
// Start address: 0x1b3f80
int32 iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, int8* fname, int8* path)
{
	int32 result;
	int32 rc;
	int8 str_buf[64];
	int32 len;
	int32 numfound;
	// Line 2852, Address: 0x1b3f80, Func Offset: 0
	// Line 2855, Address: 0x1b3f84, Func Offset: 0x4
	// Line 2852, Address: 0x1b3f88, Func Offset: 0x8
	// Line 2855, Address: 0x1b3f8c, Func Offset: 0xc
	// Line 2852, Address: 0x1b3f90, Func Offset: 0x10
	// Line 2855, Address: 0x1b3fac, Func Offset: 0x2c
	// Line 2857, Address: 0x1b3fcc, Func Offset: 0x4c
	// Line 2863, Address: 0x1b3fd0, Func Offset: 0x50
	// Line 2867, Address: 0x1b3ffc, Func Offset: 0x7c
	// Line 2871, Address: 0x1b4004, Func Offset: 0x84
	// Line 2875, Address: 0x1b4008, Func Offset: 0x88
	// Line 2878, Address: 0x1b400c, Func Offset: 0x8c
	// Line 2879, Address: 0x1b4034, Func Offset: 0xb4
	// Line 2880, Address: 0x1b4044, Func Offset: 0xc4
	// Line 2881, Address: 0x1b4060, Func Offset: 0xe0
	// Line 2882, Address: 0x1b4078, Func Offset: 0xf8
	// Line 2883, Address: 0x1b4080, Func Offset: 0x100
	// Line 2884, Address: 0x1b4098, Func Offset: 0x118
	// Line 2885, Address: 0x1b40a0, Func Offset: 0x120
	// Line 2886, Address: 0x1b40c8, Func Offset: 0x148
	// Line 2889, Address: 0x1b40d8, Func Offset: 0x158
	// Line 2891, Address: 0x1b40f4, Func Offset: 0x174
	// Line 2892, Address: 0x1b4100, Func Offset: 0x180
	// Line 2894, Address: 0x1b4110, Func Offset: 0x190
	// Line 2896, Address: 0x1b4120, Func Offset: 0x1a0
	// Line 2897, Address: 0x1b4138, Func Offset: 0x1b8
	// Line 2901, Address: 0x1b4144, Func Offset: 0x1c4
	// Line 2907, Address: 0x1b4148, Func Offset: 0x1c8
	// Line 2910, Address: 0x1b4160, Func Offset: 0x1e0
	// Line 2911, Address: 0x1b4168, Func Offset: 0x1e8
	// Line 2913, Address: 0x1b4170, Func Offset: 0x1f0
	// Line 2914, Address: 0x1b4178, Func Offset: 0x1f8
	// Func End, Address: 0x1b4194, Func Offset: 0x214
}

// iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiiPCcPCcPiPi
// Start address: 0x1b41a0
int32 iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 rc;
	int32 fc_need;
	int32 fEc_need;
	int32 xtra_fent;
	int32 estclust;
	int32 totclust;
	int32 reset_mcpath;
	// Line 2479, Address: 0x1b41a0, Func Offset: 0
	// Line 2494, Address: 0x1b41e4, Func Offset: 0x44
	// Line 2497, Address: 0x1b41f8, Func Offset: 0x58
	// Line 2498, Address: 0x1b4204, Func Offset: 0x64
	// Line 2501, Address: 0x1b4208, Func Offset: 0x68
	// Line 2505, Address: 0x1b421c, Func Offset: 0x7c
	// Line 2506, Address: 0x1b422c, Func Offset: 0x8c
	// Line 2556, Address: 0x1b4234, Func Offset: 0x94
	// Line 2568, Address: 0x1b4240, Func Offset: 0xa0
	// Line 2570, Address: 0x1b4250, Func Offset: 0xb0
	// Line 2584, Address: 0x1b4254, Func Offset: 0xb4
	// Line 2570, Address: 0x1b4258, Func Offset: 0xb8
	// Line 2584, Address: 0x1b425c, Func Offset: 0xbc
	// Line 2586, Address: 0x1b4270, Func Offset: 0xd0
	// Line 2587, Address: 0x1b428c, Func Offset: 0xec
	// Line 2589, Address: 0x1b4294, Func Offset: 0xf4
	// Line 2591, Address: 0x1b42a8, Func Offset: 0x108
	// Line 2596, Address: 0x1b42c0, Func Offset: 0x120
	// Line 2597, Address: 0x1b42c4, Func Offset: 0x124
	// Line 2601, Address: 0x1b42c8, Func Offset: 0x128
	// Line 2612, Address: 0x1b42d4, Func Offset: 0x134
	// Line 2614, Address: 0x1b42e0, Func Offset: 0x140
	// Line 2615, Address: 0x1b42f0, Func Offset: 0x150
	// Line 2617, Address: 0x1b4300, Func Offset: 0x160
	// Line 2618, Address: 0x1b4304, Func Offset: 0x164
	// Line 2617, Address: 0x1b4308, Func Offset: 0x168
	// Line 2618, Address: 0x1b430c, Func Offset: 0x16c
	// Func End, Address: 0x1b4338, Func Offset: 0x198
}

// iSG_mc_availDirEnt__FP19st_ISG_MEMCARD_DATAiPCc
// Start address: 0x1b4340
int32 iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx, int8* dpath)
{
	int32 result;
	int32 rc;
	// Line 2424, Address: 0x1b4340, Func Offset: 0
	// Line 2433, Address: 0x1b4344, Func Offset: 0x4
	// Line 2424, Address: 0x1b4348, Func Offset: 0x8
	// Line 2436, Address: 0x1b434c, Func Offset: 0xc
	// Line 2424, Address: 0x1b4350, Func Offset: 0x10
	// Line 2433, Address: 0x1b4364, Func Offset: 0x24
	// Line 2436, Address: 0x1b4368, Func Offset: 0x28
	// Line 2426, Address: 0x1b4370, Func Offset: 0x30
	// Line 2436, Address: 0x1b4374, Func Offset: 0x34
	// Line 2439, Address: 0x1b437c, Func Offset: 0x3c
	// Line 2440, Address: 0x1b438c, Func Offset: 0x4c
	// Line 2441, Address: 0x1b4398, Func Offset: 0x58
	// Line 2443, Address: 0x1b43a8, Func Offset: 0x68
	// Line 2445, Address: 0x1b43b0, Func Offset: 0x70
	// Line 2446, Address: 0x1b43bc, Func Offset: 0x7c
	// Line 2459, Address: 0x1b43c8, Func Offset: 0x88
	// Line 2461, Address: 0x1b43cc, Func Offset: 0x8c
	// Line 2459, Address: 0x1b43d0, Func Offset: 0x90
	// Line 2461, Address: 0x1b43d4, Func Offset: 0x94
	// Line 2459, Address: 0x1b43d8, Func Offset: 0x98
	// Line 2461, Address: 0x1b43dc, Func Offset: 0x9c
	// Line 2459, Address: 0x1b43e0, Func Offset: 0xa0
	// Line 2461, Address: 0x1b43e4, Func Offset: 0xa4
	// Func End, Address: 0x1b43f0, Func Offset: 0xb0
}

// iSG_mc_availclust__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b43f0
int32 iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 clust;
	// Line 2367, Address: 0x1b43f0, Func Offset: 0
	// Line 2379, Address: 0x1b43f4, Func Offset: 0x4
	// Line 2367, Address: 0x1b43f8, Func Offset: 0x8
	// Line 2372, Address: 0x1b4408, Func Offset: 0x18
	// Line 2369, Address: 0x1b440c, Func Offset: 0x1c
	// Line 2376, Address: 0x1b4410, Func Offset: 0x20
	// Line 2379, Address: 0x1b4414, Func Offset: 0x24
	// Line 2382, Address: 0x1b4424, Func Offset: 0x34
	// Line 2383, Address: 0x1b443c, Func Offset: 0x4c
	// Line 2384, Address: 0x1b4448, Func Offset: 0x58
	// Line 2386, Address: 0x1b4458, Func Offset: 0x68
	// Line 2390, Address: 0x1b4460, Func Offset: 0x70
	// Line 2391, Address: 0x1b446c, Func Offset: 0x7c
	// Line 2399, Address: 0x1b4478, Func Offset: 0x88
	// Line 2401, Address: 0x1b4484, Func Offset: 0x94
	// Func End, Address: 0x1b4498, Func Offset: 0xa8
}

// iSG_mc_isPSIIcard__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b44a0
int32 iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 type;
	// Line 2306, Address: 0x1b44a0, Func Offset: 0
	// Line 2318, Address: 0x1b44a4, Func Offset: 0x4
	// Line 2306, Address: 0x1b44a8, Func Offset: 0x8
	// Line 2311, Address: 0x1b44b8, Func Offset: 0x18
	// Line 2308, Address: 0x1b44bc, Func Offset: 0x1c
	// Line 2313, Address: 0x1b44c0, Func Offset: 0x20
	// Line 2318, Address: 0x1b44c4, Func Offset: 0x24
	// Line 2321, Address: 0x1b44d4, Func Offset: 0x34
	// Line 2322, Address: 0x1b44ec, Func Offset: 0x4c
	// Line 2323, Address: 0x1b44f8, Func Offset: 0x58
	// Line 2325, Address: 0x1b4508, Func Offset: 0x68
	// Line 2329, Address: 0x1b4510, Func Offset: 0x70
	// Line 2331, Address: 0x1b451c, Func Offset: 0x7c
	// Line 2334, Address: 0x1b4530, Func Offset: 0x90
	// Line 2356, Address: 0x1b4540, Func Offset: 0xa0
	// Line 2360, Address: 0x1b4544, Func Offset: 0xa4
	// Line 2362, Address: 0x1b4548, Func Offset: 0xa8
	// Line 2363, Address: 0x1b454c, Func Offset: 0xac
	// Func End, Address: 0x1b4560, Func Offset: 0xc0
}

// iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4560
int32 iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	int32 is_fmtd;
	// Line 2263, Address: 0x1b4560, Func Offset: 0
	// Line 2273, Address: 0x1b4564, Func Offset: 0x4
	// Line 2263, Address: 0x1b4568, Func Offset: 0x8
	// Line 2268, Address: 0x1b4578, Func Offset: 0x18
	// Line 2265, Address: 0x1b457c, Func Offset: 0x1c
	// Line 2270, Address: 0x1b4580, Func Offset: 0x20
	// Line 2273, Address: 0x1b4584, Func Offset: 0x24
	// Line 2276, Address: 0x1b4594, Func Offset: 0x34
	// Line 2277, Address: 0x1b45ac, Func Offset: 0x4c
	// Line 2278, Address: 0x1b45b8, Func Offset: 0x58
	// Line 2281, Address: 0x1b45c8, Func Offset: 0x68
	// Line 2283, Address: 0x1b45d0, Func Offset: 0x70
	// Line 2284, Address: 0x1b45dc, Func Offset: 0x7c
	// Line 2287, Address: 0x1b45e4, Func Offset: 0x84
	// Line 2292, Address: 0x1b45e8, Func Offset: 0x88
	// Line 2300, Address: 0x1b45fc, Func Offset: 0x9c
	// Line 2302, Address: 0x1b4600, Func Offset: 0xa0
	// Func End, Address: 0x1b4614, Func Offset: 0xb4
}

// iSG_mc_exists__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4620
int32 iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int32 mcidx)
{
	int32 result;
	int32 rc;
	// Line 2224, Address: 0x1b4620, Func Offset: 0
	// Line 2237, Address: 0x1b4624, Func Offset: 0x4
	// Line 2224, Address: 0x1b4628, Func Offset: 0x8
	// Line 2226, Address: 0x1b4638, Func Offset: 0x18
	// Line 2237, Address: 0x1b463c, Func Offset: 0x1c
	// Line 2232, Address: 0x1b4640, Func Offset: 0x20
	// Line 2237, Address: 0x1b4644, Func Offset: 0x24
	// Line 2240, Address: 0x1b4650, Func Offset: 0x30
	// Line 2241, Address: 0x1b4668, Func Offset: 0x48
	// Line 2242, Address: 0x1b4674, Func Offset: 0x54
	// Line 2244, Address: 0x1b4680, Func Offset: 0x60
	// Line 2246, Address: 0x1b4688, Func Offset: 0x68
	// Line 2248, Address: 0x1b4694, Func Offset: 0x74
	// Line 2249, Address: 0x1b46a4, Func Offset: 0x84
	// Line 2258, Address: 0x1b46a8, Func Offset: 0x88
	// Line 2259, Address: 0x1b46ac, Func Offset: 0x8c
	// Func End, Address: 0x1b46c0, Func Offset: 0xa0
}

// iSG_mcidx_portslot__FiPiPiPi
// Start address: 0x1b46c0
int32 iSG_mcidx_portslot(int32 mcidx, int32* port, int32* slot, int32* concnt)
{
	int32 result;
	int32 rc;
	int32 ret;
	int32 i;
	int32 type;
	int32 tp;
	int32 con_p0;
	int32 con_p1;
	int32 use_port;
	int32 cur_mcop;
	// Line 1961, Address: 0x1b46c0, Func Offset: 0
	// Line 1962, Address: 0x1b46d8, Func Offset: 0x18
	// Line 1961, Address: 0x1b46dc, Func Offset: 0x1c
	// Line 2121, Address: 0x1b46f0, Func Offset: 0x30
	// Line 1961, Address: 0x1b46f4, Func Offset: 0x34
	// Line 1975, Address: 0x1b46fc, Func Offset: 0x3c
	// Line 1961, Address: 0x1b4700, Func Offset: 0x40
	// Line 1976, Address: 0x1b4704, Func Offset: 0x44
	// Line 1978, Address: 0x1b470c, Func Offset: 0x4c
	// Line 1964, Address: 0x1b4710, Func Offset: 0x50
	// Line 1968, Address: 0x1b4714, Func Offset: 0x54
	// Line 2121, Address: 0x1b4718, Func Offset: 0x58
	// Line 2124, Address: 0x1b4720, Func Offset: 0x60
	// Line 2140, Address: 0x1b4728, Func Offset: 0x68
	// Line 2144, Address: 0x1b4730, Func Offset: 0x70
	// Line 2151, Address: 0x1b4734, Func Offset: 0x74
	// Line 2152, Address: 0x1b4750, Func Offset: 0x90
	// Line 2153, Address: 0x1b475c, Func Offset: 0x9c
	// Line 2155, Address: 0x1b4764, Func Offset: 0xa4
	// Line 2159, Address: 0x1b4770, Func Offset: 0xb0
	// Line 2163, Address: 0x1b4778, Func Offset: 0xb8
	// Line 2165, Address: 0x1b4788, Func Offset: 0xc8
	// Line 2173, Address: 0x1b47b0, Func Offset: 0xf0
	// Line 2177, Address: 0x1b47bc, Func Offset: 0xfc
	// Line 2180, Address: 0x1b47c0, Func Offset: 0x100
	// Line 2181, Address: 0x1b47d0, Func Offset: 0x110
	// Line 2192, Address: 0x1b47d4, Func Offset: 0x114
	// Line 2194, Address: 0x1b47d8, Func Offset: 0x118
	// Line 2196, Address: 0x1b47ec, Func Offset: 0x12c
	// Line 2201, Address: 0x1b4800, Func Offset: 0x140
	// Line 2203, Address: 0x1b480c, Func Offset: 0x14c
	// Line 2204, Address: 0x1b4814, Func Offset: 0x154
	// Line 2205, Address: 0x1b4818, Func Offset: 0x158
	// Line 2206, Address: 0x1b481c, Func Offset: 0x15c
	// Line 2208, Address: 0x1b4820, Func Offset: 0x160
	// Line 2209, Address: 0x1b4824, Func Offset: 0x164
	// Line 2211, Address: 0x1b4828, Func Offset: 0x168
	// Line 2212, Address: 0x1b4830, Func Offset: 0x170
	// Line 2219, Address: 0x1b4838, Func Offset: 0x178
	// Line 2220, Address: 0x1b483c, Func Offset: 0x17c
	// Func End, Address: 0x1b486c, Func Offset: 0x1ac
}

// SQUIB_init_st_iconsys__FP12sceMcIconSys
// Start address: 0x1b4870
void SQUIB_init_st_iconsys(sceMcIconSys* icsys)
{
	int32 bgcolor[4][4];
	float32 lightdir[4][3];
	float32 lightcol[4][3];
	float32 ambient[4];
	int8* iconname;
	uint8 sjistitle[68];
	// Line 1842, Address: 0x1b4870, Func Offset: 0
	// Line 1852, Address: 0x1b4874, Func Offset: 0x4
	// Line 1842, Address: 0x1b4878, Func Offset: 0x8
	// Line 1866, Address: 0x1b487c, Func Offset: 0xc
	// Line 1842, Address: 0x1b4880, Func Offset: 0x10
	// Line 1852, Address: 0x1b4884, Func Offset: 0x14
	// Line 1876, Address: 0x1b488c, Func Offset: 0x1c
	// Line 1852, Address: 0x1b4890, Func Offset: 0x20
	// Line 1882, Address: 0x1b489c, Func Offset: 0x2c
	// Line 1852, Address: 0x1b48a0, Func Offset: 0x30
	// Line 1866, Address: 0x1b48a8, Func Offset: 0x38
	// Line 1876, Address: 0x1b48b0, Func Offset: 0x40
	// Line 1882, Address: 0x1b48b8, Func Offset: 0x48
	// Line 1886, Address: 0x1b48c0, Func Offset: 0x50
	// Line 1852, Address: 0x1b48c4, Func Offset: 0x54
	// Line 1886, Address: 0x1b48c8, Func Offset: 0x58
	// Line 1852, Address: 0x1b48cc, Func Offset: 0x5c
	// Line 1866, Address: 0x1b48d8, Func Offset: 0x68
	// Line 1876, Address: 0x1b48f0, Func Offset: 0x80
	// Line 1882, Address: 0x1b4908, Func Offset: 0x98
	// Line 1886, Address: 0x1b490c, Func Offset: 0x9c
	// Line 1891, Address: 0x1b492c, Func Offset: 0xbc
	// Line 1894, Address: 0x1b493c, Func Offset: 0xcc
	// Line 1895, Address: 0x1b4940, Func Offset: 0xd0
	// Line 1894, Address: 0x1b4944, Func Offset: 0xd4
	// Line 1897, Address: 0x1b4948, Func Offset: 0xd8
	// Line 1896, Address: 0x1b494c, Func Offset: 0xdc
	// Line 1895, Address: 0x1b4950, Func Offset: 0xe0
	// Line 1896, Address: 0x1b4954, Func Offset: 0xe4
	// Line 1904, Address: 0x1b4958, Func Offset: 0xe8
	// Line 1900, Address: 0x1b495c, Func Offset: 0xec
	// Line 1897, Address: 0x1b4960, Func Offset: 0xf0
	// Line 1900, Address: 0x1b4964, Func Offset: 0xf4
	// Line 1904, Address: 0x1b4968, Func Offset: 0xf8
	// Line 1906, Address: 0x1b4970, Func Offset: 0x100
	// Line 1908, Address: 0x1b4980, Func Offset: 0x110
	// Line 1911, Address: 0x1b4990, Func Offset: 0x120
	// Line 1912, Address: 0x1b49a0, Func Offset: 0x130
	// Line 1913, Address: 0x1b49ac, Func Offset: 0x13c
	// Line 1914, Address: 0x1b49bc, Func Offset: 0x14c
	// Line 1915, Address: 0x1b49c8, Func Offset: 0x158
	// Line 1916, Address: 0x1b49d8, Func Offset: 0x168
	// Line 1919, Address: 0x1b49e4, Func Offset: 0x174
	// Line 1920, Address: 0x1b49e8, Func Offset: 0x178
	// Line 1919, Address: 0x1b49ec, Func Offset: 0x17c
	// Line 1920, Address: 0x1b49f0, Func Offset: 0x180
	// Line 1921, Address: 0x1b49fc, Func Offset: 0x18c
	// Line 1922, Address: 0x1b4a0c, Func Offset: 0x19c
	// Line 1923, Address: 0x1b4a1c, Func Offset: 0x1ac
	// Line 1926, Address: 0x1b4a2c, Func Offset: 0x1bc
	// Func End, Address: 0x1b4a3c, Func Offset: 0x1cc
}

// iSG_add_sysicons__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4a40
int32 iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata)
{
	sceMcIconSys icsysdata;
	int8* iconname;
	// Line 1682, Address: 0x1b4a40, Func Offset: 0
	// Line 1692, Address: 0x1b4a54, Func Offset: 0x14
	// Line 1696, Address: 0x1b4a5c, Func Offset: 0x1c
	// Line 1697, Address: 0x1b4a6c, Func Offset: 0x2c
	// Line 1698, Address: 0x1b4aa8, Func Offset: 0x68
	// Line 1704, Address: 0x1b4ab4, Func Offset: 0x74
	// Line 1705, Address: 0x1b4ac4, Func Offset: 0x84
	// Line 1707, Address: 0x1b4ad4, Func Offset: 0x94
	// Line 1708, Address: 0x1b4af8, Func Offset: 0xb8
	// Line 1709, Address: 0x1b4b3c, Func Offset: 0xfc
	// Line 1720, Address: 0x1b4b40, Func Offset: 0x100
	// Line 1721, Address: 0x1b4b50, Func Offset: 0x110
	// Line 1722, Address: 0x1b4b88, Func Offset: 0x148
	// Line 1727, Address: 0x1b4b90, Func Offset: 0x150
	// Line 1729, Address: 0x1b4bb8, Func Offset: 0x178
	// Line 1730, Address: 0x1b4bfc, Func Offset: 0x1bc
	// Line 1764, Address: 0x1b4c00, Func Offset: 0x1c0
	// Line 1763, Address: 0x1b4c08, Func Offset: 0x1c8
	// Line 1764, Address: 0x1b4c0c, Func Offset: 0x1cc
	// Func End, Address: 0x1b4c18, Func Offset: 0x1d8
}

// iSG_add_cfgholder__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4c20
int32 iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata)
{
	int8 cfgdata[992];
	int8* strptr;
	int8* cfgname;
	// Line 1632, Address: 0x1b4c20, Func Offset: 0
	// Line 1637, Address: 0x1b4c24, Func Offset: 0x4
	// Line 1632, Address: 0x1b4c28, Func Offset: 0x8
	// Line 1637, Address: 0x1b4c2c, Func Offset: 0xc
	// Line 1632, Address: 0x1b4c30, Func Offset: 0x10
	// Line 1637, Address: 0x1b4c3c, Func Offset: 0x1c
	// Line 1655, Address: 0x1b4c5c, Func Offset: 0x3c
	// Line 1658, Address: 0x1b4c6c, Func Offset: 0x4c
	// Line 1659, Address: 0x1b4c88, Func Offset: 0x68
	// Line 1660, Address: 0x1b4c98, Func Offset: 0x78
	// Line 1662, Address: 0x1b4c9c, Func Offset: 0x7c
	// Line 1665, Address: 0x1b4ca8, Func Offset: 0x88
	// Line 1668, Address: 0x1b4cb8, Func Offset: 0x98
	// Line 1669, Address: 0x1b4cf0, Func Offset: 0xd0
	// Line 1673, Address: 0x1b4cf8, Func Offset: 0xd8
	// Line 1674, Address: 0x1b4d18, Func Offset: 0xf8
	// Line 1675, Address: 0x1b4d5c, Func Offset: 0x13c
	// Line 1678, Address: 0x1b4d60, Func Offset: 0x140
	// Line 1677, Address: 0x1b4d68, Func Offset: 0x148
	// Line 1678, Address: 0x1b4d6c, Func Offset: 0x14c
	// Func End, Address: 0x1b4d7c, Func Offset: 0x15c
}

// iSG_start_your_engines__Fv
// Start address: 0x1b4d80
int32 iSG_start_your_engines()
{
	int32 result;
	int32 rc;
	// Line 1466, Address: 0x1b4d80, Func Offset: 0
	// Line 1476, Address: 0x1b4d84, Func Offset: 0x4
	// Line 1466, Address: 0x1b4d88, Func Offset: 0x8
	// Line 1476, Address: 0x1b4d94, Func Offset: 0x14
	// Line 1477, Address: 0x1b4da8, Func Offset: 0x28
	// Line 1479, Address: 0x1b4db8, Func Offset: 0x38
	// Line 1528, Address: 0x1b4dc8, Func Offset: 0x48
	// Line 1529, Address: 0x1b4dd0, Func Offset: 0x50
	// Line 1533, Address: 0x1b4df4, Func Offset: 0x74
	// Line 1536, Address: 0x1b4df8, Func Offset: 0x78
	// Line 1540, Address: 0x1b4e00, Func Offset: 0x80
	// Line 1543, Address: 0x1b4e08, Func Offset: 0x88
	// Line 1546, Address: 0x1b4e0c, Func Offset: 0x8c
	// Line 1548, Address: 0x1b4e10, Func Offset: 0x90
	// Line 1549, Address: 0x1b4e14, Func Offset: 0x94
	// Func End, Address: 0x1b4e28, Func Offset: 0xa8
}

// iSGAutoSave_Monitor__FP13st_ISGSESSIONi
// Start address: 0x1b4e30
int32 iSGAutoSave_Monitor(st_ISGSESSION* isg, int32 idx_target)
{
	uint32 stat;
	// Line 1433, Address: 0x1b4e30, Func Offset: 0
	// Line 1434, Address: 0x1b4e40, Func Offset: 0x10
	// Line 1441, Address: 0x1b4e50, Func Offset: 0x20
	// Line 1442, Address: 0x1b4e58, Func Offset: 0x28
	// Line 1445, Address: 0x1b4e70, Func Offset: 0x40
	// Line 1447, Address: 0x1b4e7c, Func Offset: 0x4c
	// Line 1448, Address: 0x1b4e80, Func Offset: 0x50
	// Line 1450, Address: 0x1b4e90, Func Offset: 0x60
	// Line 1454, Address: 0x1b4e98, Func Offset: 0x68
	// Line 1455, Address: 0x1b4ea0, Func Offset: 0x70
	// Func End, Address: 0x1b4eb0, Func Offset: 0x80
}

// iSGAutoSave_Disconnect__FP13st_ISGSESSION
// Start address: 0x1b4eb0
void iSGAutoSave_Disconnect(st_ISGSESSION* isg)
{
	// Line 1428, Address: 0x1b4eb0, Func Offset: 0
	// Func End, Address: 0x1b4ebc, Func Offset: 0xc
}

// iSGAutoSave_Connect__FiPvPFPv10en_CHGCODE_v
// Start address: 0x1b4ec0
st_ISGSESSION* iSGAutoSave_Connect(int32 idx_target, void* cltdata, void(*chg)(void*, en_CHGCODE))
{
	st_ISGSESSION* isg;
	// Line 1411, Address: 0x1b4ec0, Func Offset: 0
	// Line 1412, Address: 0x1b4ed8, Func Offset: 0x18
	// Line 1413, Address: 0x1b4eec, Func Offset: 0x2c
	// Line 1415, Address: 0x1b4f00, Func Offset: 0x40
	// Line 1418, Address: 0x1b4f48, Func Offset: 0x88
	// Line 1419, Address: 0x1b4f50, Func Offset: 0x90
	// Line 1420, Address: 0x1b4f5c, Func Offset: 0x9c
	// Line 1423, Address: 0x1b4f60, Func Offset: 0xa0
	// Line 1424, Address: 0x1b4f68, Func Offset: 0xa8
	// Func End, Address: 0x1b4f80, Func Offset: 0xc0
}

// iSGAutoSave_Startup__Fv
// Start address: 0x1b4f80
void iSGAutoSave_Startup()
{
	// Line 1403, Address: 0x1b4f80, Func Offset: 0
	// Func End, Address: 0x1b4f88, Func Offset: 0x8
}

// iSGOpError__FP13st_ISGSESSIONPc
// Start address: 0x1b4f90
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg)
{
	// Line 1338, Address: 0x1b4f90, Func Offset: 0
	// Line 1339, Address: 0x1b4fa4, Func Offset: 0x14
	// Line 1341, Address: 0x1b4fac, Func Offset: 0x1c
	// Line 1342, Address: 0x1b4fb4, Func Offset: 0x24
	// Line 1341, Address: 0x1b4fb8, Func Offset: 0x28
	// Line 1343, Address: 0x1b4fbc, Func Offset: 0x2c
	// Line 1345, Address: 0x1b4fe0, Func Offset: 0x50
	// Line 1346, Address: 0x1b4ff4, Func Offset: 0x64
	// Line 1347, Address: 0x1b4ffc, Func Offset: 0x6c
	// Line 1348, Address: 0x1b5000, Func Offset: 0x70
	// Line 1349, Address: 0x1b5014, Func Offset: 0x84
	// Line 1350, Address: 0x1b501c, Func Offset: 0x8c
	// Line 1351, Address: 0x1b5020, Func Offset: 0x90
	// Line 1352, Address: 0x1b5034, Func Offset: 0xa4
	// Line 1353, Address: 0x1b503c, Func Offset: 0xac
	// Line 1354, Address: 0x1b5040, Func Offset: 0xb0
	// Line 1355, Address: 0x1b5054, Func Offset: 0xc4
	// Line 1356, Address: 0x1b505c, Func Offset: 0xcc
	// Line 1357, Address: 0x1b5060, Func Offset: 0xd0
	// Line 1358, Address: 0x1b5074, Func Offset: 0xe4
	// Line 1359, Address: 0x1b507c, Func Offset: 0xec
	// Line 1360, Address: 0x1b5080, Func Offset: 0xf0
	// Line 1361, Address: 0x1b5094, Func Offset: 0x104
	// Line 1362, Address: 0x1b509c, Func Offset: 0x10c
	// Line 1363, Address: 0x1b50a0, Func Offset: 0x110
	// Line 1364, Address: 0x1b50b4, Func Offset: 0x124
	// Line 1365, Address: 0x1b50bc, Func Offset: 0x12c
	// Line 1366, Address: 0x1b50c0, Func Offset: 0x130
	// Line 1367, Address: 0x1b50d4, Func Offset: 0x144
	// Line 1368, Address: 0x1b50dc, Func Offset: 0x14c
	// Line 1369, Address: 0x1b50e0, Func Offset: 0x150
	// Line 1370, Address: 0x1b50f4, Func Offset: 0x164
	// Line 1371, Address: 0x1b50fc, Func Offset: 0x16c
	// Line 1372, Address: 0x1b5100, Func Offset: 0x170
	// Line 1373, Address: 0x1b5114, Func Offset: 0x184
	// Line 1374, Address: 0x1b511c, Func Offset: 0x18c
	// Line 1375, Address: 0x1b5120, Func Offset: 0x190
	// Line 1376, Address: 0x1b5134, Func Offset: 0x1a4
	// Line 1377, Address: 0x1b513c, Func Offset: 0x1ac
	// Line 1378, Address: 0x1b5140, Func Offset: 0x1b0
	// Line 1379, Address: 0x1b5154, Func Offset: 0x1c4
	// Line 1380, Address: 0x1b515c, Func Offset: 0x1cc
	// Line 1381, Address: 0x1b5160, Func Offset: 0x1d0
	// Line 1382, Address: 0x1b5174, Func Offset: 0x1e4
	// Line 1383, Address: 0x1b517c, Func Offset: 0x1ec
	// Line 1384, Address: 0x1b5180, Func Offset: 0x1f0
	// Line 1385, Address: 0x1b5194, Func Offset: 0x204
	// Line 1386, Address: 0x1b519c, Func Offset: 0x20c
	// Line 1387, Address: 0x1b51a0, Func Offset: 0x210
	// Line 1391, Address: 0x1b51b8, Func Offset: 0x228
	// Line 1393, Address: 0x1b51bc, Func Offset: 0x22c
	// Line 1394, Address: 0x1b51c0, Func Offset: 0x230
	// Func End, Address: 0x1b51d4, Func Offset: 0x244
}

// iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi
// Start address: 0x1b51e0
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block)
{
	int32 rc;
	int32 sceResultCode;
	// Line 1252, Address: 0x1b51e0, Func Offset: 0
	// Line 1256, Address: 0x1b51f4, Func Offset: 0x14
	// Line 1261, Address: 0x1b5208, Func Offset: 0x28
	// Line 1264, Address: 0x1b5214, Func Offset: 0x34
	// Line 1263, Address: 0x1b5218, Func Offset: 0x38
	// Line 1264, Address: 0x1b521c, Func Offset: 0x3c
	// Line 1265, Address: 0x1b5220, Func Offset: 0x40
	// Line 1266, Address: 0x1b5224, Func Offset: 0x44
	// Line 1267, Address: 0x1b522c, Func Offset: 0x4c
	// Line 1277, Address: 0x1b5230, Func Offset: 0x50
	// Line 1279, Address: 0x1b5240, Func Offset: 0x60
	// Line 1280, Address: 0x1b5248, Func Offset: 0x68
	// Line 1281, Address: 0x1b524c, Func Offset: 0x6c
	// Line 1283, Address: 0x1b5250, Func Offset: 0x70
	// Line 1284, Address: 0x1b5258, Func Offset: 0x78
	// Line 1285, Address: 0x1b5264, Func Offset: 0x84
	// Line 1286, Address: 0x1b5268, Func Offset: 0x88
	// Line 1288, Address: 0x1b5298, Func Offset: 0xb8
	// Line 1289, Address: 0x1b52a0, Func Offset: 0xc0
	// Line 1290, Address: 0x1b52a4, Func Offset: 0xc4
	// Line 1291, Address: 0x1b52ac, Func Offset: 0xcc
	// Line 1293, Address: 0x1b52b0, Func Offset: 0xd0
	// Line 1294, Address: 0x1b52b8, Func Offset: 0xd8
	// Line 1295, Address: 0x1b52bc, Func Offset: 0xdc
	// Line 1296, Address: 0x1b52c4, Func Offset: 0xe4
	// Line 1298, Address: 0x1b52c8, Func Offset: 0xe8
	// Line 1299, Address: 0x1b52d0, Func Offset: 0xf0
	// Line 1300, Address: 0x1b52d4, Func Offset: 0xf4
	// Line 1307, Address: 0x1b52dc, Func Offset: 0xfc
	// Line 1310, Address: 0x1b52e0, Func Offset: 0x100
	// Line 1313, Address: 0x1b52f0, Func Offset: 0x110
	// Line 1312, Address: 0x1b52f4, Func Offset: 0x114
	// Line 1315, Address: 0x1b52f8, Func Offset: 0x118
	// Line 1317, Address: 0x1b5300, Func Offset: 0x120
	// Line 1323, Address: 0x1b5304, Func Offset: 0x124
	// Line 1327, Address: 0x1b5310, Func Offset: 0x130
	// Line 1330, Address: 0x1b5318, Func Offset: 0x138
	// Line 1328, Address: 0x1b531c, Func Offset: 0x13c
	// Line 1329, Address: 0x1b5320, Func Offset: 0x140
	// Line 1330, Address: 0x1b5324, Func Offset: 0x144
	// Line 1331, Address: 0x1b5364, Func Offset: 0x184
	// Line 1333, Address: 0x1b5368, Func Offset: 0x188
	// Line 1334, Address: 0x1b5370, Func Offset: 0x190
	// Func End, Address: 0x1b5388, Func Offset: 0x1a8
}

// iSGReadLeader__FP13st_ISGSESSIONPCcPcii
// Start address: 0x1b5390
int32 iSGReadLeader(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 numbytes, int32 async)
{
	int32 result;
	int32 rc;
	// Line 1143, Address: 0x1b5390, Func Offset: 0
	// Line 1155, Address: 0x1b5394, Func Offset: 0x4
	// Line 1143, Address: 0x1b5398, Func Offset: 0x8
	// Line 1144, Address: 0x1b53cc, Func Offset: 0x3c
	// Line 1143, Address: 0x1b53d0, Func Offset: 0x40
	// Line 1155, Address: 0x1b53d4, Func Offset: 0x44
	// Line 1143, Address: 0x1b53d8, Func Offset: 0x48
	// Line 1155, Address: 0x1b53dc, Func Offset: 0x4c
	// Line 1144, Address: 0x1b53e0, Func Offset: 0x50
	// Line 1155, Address: 0x1b53e4, Func Offset: 0x54
	// Line 1157, Address: 0x1b5440, Func Offset: 0xb0
	// Line 1159, Address: 0x1b5448, Func Offset: 0xb8
	// Line 1160, Address: 0x1b544c, Func Offset: 0xbc
	// Line 1163, Address: 0x1b5454, Func Offset: 0xc4
	// Line 1161, Address: 0x1b5458, Func Offset: 0xc8
	// Line 1162, Address: 0x1b5460, Func Offset: 0xd0
	// Line 1166, Address: 0x1b5468, Func Offset: 0xd8
	// Line 1169, Address: 0x1b5478, Func Offset: 0xe8
	// Line 1178, Address: 0x1b5480, Func Offset: 0xf0
	// Line 1170, Address: 0x1b5484, Func Offset: 0xf4
	// Line 1178, Address: 0x1b5488, Func Offset: 0xf8
	// Line 1171, Address: 0x1b548c, Func Offset: 0xfc
	// Line 1178, Address: 0x1b5490, Func Offset: 0x100
	// Line 1172, Address: 0x1b5494, Func Offset: 0x104
	// Line 1178, Address: 0x1b5498, Func Offset: 0x108
	// Line 1180, Address: 0x1b54c8, Func Offset: 0x138
	// Line 1184, Address: 0x1b54d0, Func Offset: 0x140
	// Line 1183, Address: 0x1b54d4, Func Offset: 0x144
	// Line 1186, Address: 0x1b54d8, Func Offset: 0x148
	// Line 1185, Address: 0x1b54dc, Func Offset: 0x14c
	// Line 1184, Address: 0x1b54e0, Func Offset: 0x150
	// Line 1187, Address: 0x1b54e4, Func Offset: 0x154
	// Line 1193, Address: 0x1b54f0, Func Offset: 0x160
	// Line 1195, Address: 0x1b54f8, Func Offset: 0x168
	// Line 1197, Address: 0x1b5508, Func Offset: 0x178
	// Line 1200, Address: 0x1b5510, Func Offset: 0x180
	// Line 1201, Address: 0x1b5514, Func Offset: 0x184
	// Line 1200, Address: 0x1b5518, Func Offset: 0x188
	// Line 1203, Address: 0x1b551c, Func Offset: 0x18c
	// Line 1202, Address: 0x1b5520, Func Offset: 0x190
	// Line 1201, Address: 0x1b5524, Func Offset: 0x194
	// Line 1202, Address: 0x1b5528, Func Offset: 0x198
	// Line 1206, Address: 0x1b552c, Func Offset: 0x19c
	// Line 1209, Address: 0x1b5574, Func Offset: 0x1e4
	// Line 1213, Address: 0x1b5580, Func Offset: 0x1f0
	// Line 1215, Address: 0x1b55c0, Func Offset: 0x230
	// Line 1221, Address: 0x1b55c8, Func Offset: 0x238
	// Line 1220, Address: 0x1b55cc, Func Offset: 0x23c
	// Line 1223, Address: 0x1b55d0, Func Offset: 0x240
	// Line 1222, Address: 0x1b55d4, Func Offset: 0x244
	// Line 1221, Address: 0x1b55d8, Func Offset: 0x248
	// Line 1222, Address: 0x1b55dc, Func Offset: 0x24c
	// Line 1226, Address: 0x1b55e0, Func Offset: 0x250
	// Line 1231, Address: 0x1b5624, Func Offset: 0x294
	// Line 1233, Address: 0x1b5628, Func Offset: 0x298
	// Line 1234, Address: 0x1b5630, Func Offset: 0x2a0
	// Func End, Address: 0x1b5660, Func Offset: 0x2d0
}

// iSGLoadFile__FP13st_ISGSESSIONPCcPci
// Start address: 0x1b5660
int32 iSGLoadFile(st_ISGSESSION* isgdata, int8* fname, int8* databuf, int32 async)
{
	// Line 1123, Address: 0x1b5660, Func Offset: 0
	// Line 1131, Address: 0x1b568c, Func Offset: 0x2c
	// Line 1137, Address: 0x1b56b8, Func Offset: 0x58
	// Line 1139, Address: 0x1b56cc, Func Offset: 0x6c
	// Line 1138, Address: 0x1b56d0, Func Offset: 0x70
	// Line 1139, Address: 0x1b56d4, Func Offset: 0x74
	// Func End, Address: 0x1b56f0, Func Offset: 0x90
}

// iSGSaveFile__FP13st_ISGSESSIONPCcPciiPc
// Start address: 0x1b56f0
int32 iSGSaveFile(st_ISGSESSION* isgdata, int8* fname, int8* data, int32 n, int32 async)
{
	int32 result;
	int32 rc;
	// Line 1018, Address: 0x1b56f0, Func Offset: 0
	// Line 1028, Address: 0x1b56f4, Func Offset: 0x4
	// Line 1018, Address: 0x1b56f8, Func Offset: 0x8
	// Line 1019, Address: 0x1b5730, Func Offset: 0x40
	// Line 1018, Address: 0x1b5734, Func Offset: 0x44
	// Line 1028, Address: 0x1b5738, Func Offset: 0x48
	// Line 1019, Address: 0x1b573c, Func Offset: 0x4c
	// Line 1028, Address: 0x1b5740, Func Offset: 0x50
	// Line 1030, Address: 0x1b57a0, Func Offset: 0xb0
	// Line 1032, Address: 0x1b57a8, Func Offset: 0xb8
	// Line 1033, Address: 0x1b57ac, Func Offset: 0xbc
	// Line 1036, Address: 0x1b57b4, Func Offset: 0xc4
	// Line 1034, Address: 0x1b57b8, Func Offset: 0xc8
	// Line 1035, Address: 0x1b57c0, Func Offset: 0xd0
	// Line 1039, Address: 0x1b57c8, Func Offset: 0xd8
	// Line 1043, Address: 0x1b57d8, Func Offset: 0xe8
	// Line 1053, Address: 0x1b57e0, Func Offset: 0xf0
	// Line 1044, Address: 0x1b57e4, Func Offset: 0xf4
	// Line 1053, Address: 0x1b57e8, Func Offset: 0xf8
	// Line 1045, Address: 0x1b57ec, Func Offset: 0xfc
	// Line 1046, Address: 0x1b57f0, Func Offset: 0x100
	// Line 1053, Address: 0x1b57f4, Func Offset: 0x104
	// Line 1055, Address: 0x1b5828, Func Offset: 0x138
	// Line 1059, Address: 0x1b5830, Func Offset: 0x140
	// Line 1058, Address: 0x1b5834, Func Offset: 0x144
	// Line 1061, Address: 0x1b5838, Func Offset: 0x148
	// Line 1060, Address: 0x1b583c, Func Offset: 0x14c
	// Line 1059, Address: 0x1b5840, Func Offset: 0x150
	// Line 1062, Address: 0x1b5844, Func Offset: 0x154
	// Line 1068, Address: 0x1b5850, Func Offset: 0x160
	// Line 1074, Address: 0x1b5858, Func Offset: 0x168
	// Line 1076, Address: 0x1b5868, Func Offset: 0x178
	// Line 1079, Address: 0x1b5870, Func Offset: 0x180
	// Line 1080, Address: 0x1b5874, Func Offset: 0x184
	// Line 1079, Address: 0x1b5878, Func Offset: 0x188
	// Line 1082, Address: 0x1b587c, Func Offset: 0x18c
	// Line 1081, Address: 0x1b5880, Func Offset: 0x190
	// Line 1080, Address: 0x1b5884, Func Offset: 0x194
	// Line 1081, Address: 0x1b5888, Func Offset: 0x198
	// Line 1084, Address: 0x1b588c, Func Offset: 0x19c
	// Line 1087, Address: 0x1b58d4, Func Offset: 0x1e4
	// Line 1091, Address: 0x1b58e0, Func Offset: 0x1f0
	// Line 1093, Address: 0x1b5920, Func Offset: 0x230
	// Line 1096, Address: 0x1b5928, Func Offset: 0x238
	// Line 1100, Address: 0x1b5970, Func Offset: 0x280
	// Line 1101, Address: 0x1b59b0, Func Offset: 0x2c0
	// Line 1103, Address: 0x1b59b8, Func Offset: 0x2c8
	// Line 1106, Address: 0x1b59c0, Func Offset: 0x2d0
	// Line 1109, Address: 0x1b59c8, Func Offset: 0x2d8
	// Line 1107, Address: 0x1b59cc, Func Offset: 0x2dc
	// Line 1108, Address: 0x1b59d4, Func Offset: 0x2e4
	// Line 1114, Address: 0x1b59dc, Func Offset: 0x2ec
	// Line 1116, Address: 0x1b59e0, Func Offset: 0x2f0
	// Line 1117, Address: 0x1b59e8, Func Offset: 0x2f8
	// Func End, Address: 0x1b5a18, Func Offset: 0x328
}

// iSGSetupGameDir__FP13st_ISGSESSIONPCci
// Start address: 0x1b5a20
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, int8* dname, int32 force_iconfix)
{
	int32 result;
	int32 rc;
	st_ISG_MEMCARD_DATA* mcdata;
	int32 dir_isnew;
	int8* strptr;
	// Line 879, Address: 0x1b5a20, Func Offset: 0
	// Line 880, Address: 0x1b5a3c, Func Offset: 0x1c
	// Line 879, Address: 0x1b5a40, Func Offset: 0x20
	// Line 884, Address: 0x1b5a48, Func Offset: 0x28
	// Line 883, Address: 0x1b5a4c, Func Offset: 0x2c
	// Line 892, Address: 0x1b5a54, Func Offset: 0x34
	// Line 893, Address: 0x1b5a5c, Func Offset: 0x3c
	// Line 898, Address: 0x1b5a74, Func Offset: 0x54
	// Line 899, Address: 0x1b5a84, Func Offset: 0x64
	// Line 906, Address: 0x1b5a8c, Func Offset: 0x6c
	// Line 902, Address: 0x1b5a98, Func Offset: 0x78
	// Line 906, Address: 0x1b5a9c, Func Offset: 0x7c
	// Line 907, Address: 0x1b5af8, Func Offset: 0xd8
	// Line 909, Address: 0x1b5b04, Func Offset: 0xe4
	// Line 911, Address: 0x1b5b08, Func Offset: 0xe8
	// Line 915, Address: 0x1b5b10, Func Offset: 0xf0
	// Line 916, Address: 0x1b5b78, Func Offset: 0x158
	// Line 918, Address: 0x1b5b84, Func Offset: 0x164
	// Line 920, Address: 0x1b5b88, Func Offset: 0x168
	// Line 925, Address: 0x1b5b90, Func Offset: 0x170
	// Line 926, Address: 0x1b5bf8, Func Offset: 0x1d8
	// Line 927, Address: 0x1b5c04, Func Offset: 0x1e4
	// Line 929, Address: 0x1b5c08, Func Offset: 0x1e8
	// Line 938, Address: 0x1b5c18, Func Offset: 0x1f8
	// Line 939, Address: 0x1b5c24, Func Offset: 0x204
	// Line 940, Address: 0x1b5c38, Func Offset: 0x218
	// Line 941, Address: 0x1b5c48, Func Offset: 0x228
	// Line 949, Address: 0x1b5c5c, Func Offset: 0x23c
	// Line 950, Address: 0x1b5c6c, Func Offset: 0x24c
	// Line 954, Address: 0x1b5c80, Func Offset: 0x260
	// Line 967, Address: 0x1b5c8c, Func Offset: 0x26c
	// Line 968, Address: 0x1b5ca0, Func Offset: 0x280
	// Line 974, Address: 0x1b5ca4, Func Offset: 0x284
	// Line 977, Address: 0x1b5ca8, Func Offset: 0x288
	// Line 979, Address: 0x1b5cb0, Func Offset: 0x290
	// Line 980, Address: 0x1b5cb4, Func Offset: 0x294
	// Line 982, Address: 0x1b5cb8, Func Offset: 0x298
	// Line 987, Address: 0x1b5cc0, Func Offset: 0x2a0
	// Line 993, Address: 0x1b5cc8, Func Offset: 0x2a8
	// Line 994, Address: 0x1b5cd4, Func Offset: 0x2b4
	// Line 995, Address: 0x1b5ce4, Func Offset: 0x2c4
	// Line 996, Address: 0x1b5cec, Func Offset: 0x2cc
	// Line 997, Address: 0x1b5cf4, Func Offset: 0x2d4
	// Line 1001, Address: 0x1b5d00, Func Offset: 0x2e0
	// Line 1002, Address: 0x1b5d08, Func Offset: 0x2e8
	// Line 1005, Address: 0x1b5d14, Func Offset: 0x2f4
	// Line 1010, Address: 0x1b5d18, Func Offset: 0x2f8
	// Line 1011, Address: 0x1b5d1c, Func Offset: 0x2fc
	// Func End, Address: 0x1b5d40, Func Offset: 0x320
}

// iSGSelectGameDir__FP13st_ISGSESSIONPCc
// Start address: 0x1b5d40
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, int8* dname)
{
	// Line 850, Address: 0x1b5d40, Func Offset: 0
	// Line 861, Address: 0x1b5d44, Func Offset: 0x4
	// Line 850, Address: 0x1b5d48, Func Offset: 0x8
	// Line 861, Address: 0x1b5d5c, Func Offset: 0x1c
	// Line 862, Address: 0x1b5d68, Func Offset: 0x28
	// Line 863, Address: 0x1b5d78, Func Offset: 0x38
	// Line 864, Address: 0x1b5d80, Func Offset: 0x40
	// Line 865, Address: 0x1b5d98, Func Offset: 0x58
	// Line 867, Address: 0x1b5d9c, Func Offset: 0x5c
	// Line 865, Address: 0x1b5dac, Func Offset: 0x6c
	// Line 867, Address: 0x1b5db4, Func Offset: 0x74
	// Line 869, Address: 0x1b5e10, Func Offset: 0xd0
	// Line 870, Address: 0x1b5e14, Func Offset: 0xd4
	// Func End, Address: 0x1b5e2c, Func Offset: 0xec
}

// iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi
// Start address: 0x1b5e30
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname, int32* sec, int32* min, int32* hr, int32* mon, int32* day, int32* yr)
{
	int32 rc;
	sceMcTblGetDir* finf;
	sceCdCLOCK clock;
	int8 datestr[64];
	// Line 800, Address: 0x1b5e30, Func Offset: 0
	// Line 807, Address: 0x1b5e34, Func Offset: 0x4
	// Line 800, Address: 0x1b5e38, Func Offset: 0x8
	// Line 803, Address: 0x1b5e58, Func Offset: 0x28
	// Line 807, Address: 0x1b5e5c, Func Offset: 0x2c
	// Line 809, Address: 0x1b5e60, Func Offset: 0x30
	// Line 811, Address: 0x1b5e6c, Func Offset: 0x3c
	// Line 816, Address: 0x1b5e80, Func Offset: 0x50
	// Line 817, Address: 0x1b5e90, Func Offset: 0x60
	// Line 818, Address: 0x1b5ea0, Func Offset: 0x70
	// Line 819, Address: 0x1b5eb0, Func Offset: 0x80
	// Line 820, Address: 0x1b5ec0, Func Offset: 0x90
	// Line 821, Address: 0x1b5ed0, Func Offset: 0xa0
	// Line 823, Address: 0x1b5ee0, Func Offset: 0xb0
	// Line 825, Address: 0x1b5ee8, Func Offset: 0xb8
	// Line 826, Address: 0x1b5ef4, Func Offset: 0xc4
	// Line 827, Address: 0x1b5f00, Func Offset: 0xd0
	// Line 828, Address: 0x1b5f0c, Func Offset: 0xdc
	// Line 829, Address: 0x1b5f18, Func Offset: 0xe8
	// Line 830, Address: 0x1b5f24, Func Offset: 0xf4
	// Line 833, Address: 0x1b5f30, Func Offset: 0x100
	// Line 830, Address: 0x1b5f34, Func Offset: 0x104
	// Line 833, Address: 0x1b5f38, Func Offset: 0x108
	// Line 837, Address: 0x1b5f60, Func Offset: 0x130
	// Line 838, Address: 0x1b5f68, Func Offset: 0x138
	// Func End, Address: 0x1b5f90, Func Offset: 0x160
}

// iSGFileModDate__FP13st_ISGSESSIONPCc
// Start address: 0x1b5f90
int8* iSGFileModDate(st_ISGSESSION* isgdata, int8* fname)
{
	int8* date_str;
	// Line 775, Address: 0x1b5f90, Func Offset: 0
	// Func End, Address: 0x1b5fac, Func Offset: 0x1c
}

// iSGFileSize__FP13st_ISGSESSIONPCc
// Start address: 0x1b5fb0
int32 iSGFileSize(st_ISGSESSION* isgdata, int8* fname)
{
	int32 size;
	// Line 721, Address: 0x1b5fb0, Func Offset: 0
	// Line 726, Address: 0x1b5fbc, Func Offset: 0xc
	// Line 728, Address: 0x1b5fe0, Func Offset: 0x30
	// Line 730, Address: 0x1b5ff0, Func Offset: 0x40
	// Func End, Address: 0x1b6000, Func Offset: 0x50
}

// iSGGameExists__FP13st_ISGSESSIONPCc
// Start address: 0x1b6000
uint8 iSGGameExists(st_ISGSESSION* isgdata, int8* fname)
{
	int32 rc;
	int8 str_buf[64];
	int32 len;
	int32 numfound;
	st_ISG_MEMCARD_DATA* mcdata;
	int8* path;
	// Line 640, Address: 0x1b6000, Func Offset: 0
	// Line 643, Address: 0x1b6004, Func Offset: 0x4
	// Line 640, Address: 0x1b6008, Func Offset: 0x8
	// Line 643, Address: 0x1b600c, Func Offset: 0xc
	// Line 640, Address: 0x1b6010, Func Offset: 0x10
	// Line 643, Address: 0x1b601c, Func Offset: 0x1c
	// Line 645, Address: 0x1b603c, Func Offset: 0x3c
	// Line 655, Address: 0x1b6040, Func Offset: 0x40
	// Line 647, Address: 0x1b6044, Func Offset: 0x44
	// Line 648, Address: 0x1b6048, Func Offset: 0x48
	// Line 658, Address: 0x1b604c, Func Offset: 0x4c
	// Line 660, Address: 0x1b6074, Func Offset: 0x74
	// Line 661, Address: 0x1b6084, Func Offset: 0x84
	// Line 663, Address: 0x1b60a0, Func Offset: 0xa0
	// Line 664, Address: 0x1b60b8, Func Offset: 0xb8
	// Line 667, Address: 0x1b60c0, Func Offset: 0xc0
	// Line 669, Address: 0x1b60d8, Func Offset: 0xd8
	// Line 670, Address: 0x1b60e0, Func Offset: 0xe0
	// Line 671, Address: 0x1b6108, Func Offset: 0x108
	// Line 674, Address: 0x1b6118, Func Offset: 0x118
	// Line 676, Address: 0x1b6134, Func Offset: 0x134
	// Line 677, Address: 0x1b6140, Func Offset: 0x140
	// Line 683, Address: 0x1b6148, Func Offset: 0x148
	// Line 685, Address: 0x1b6154, Func Offset: 0x154
	// Line 691, Address: 0x1b6160, Func Offset: 0x160
	// Line 693, Address: 0x1b616c, Func Offset: 0x16c
	// Line 696, Address: 0x1b6174, Func Offset: 0x174
	// Line 697, Address: 0x1b6178, Func Offset: 0x178
	// Line 698, Address: 0x1b6180, Func Offset: 0x180
	// Func End, Address: 0x1b6198, Func Offset: 0x198
}

// iSGTgtHaveRoomStartup__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61a0
int32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 result;
	// Line 597, Address: 0x1b61a0, Func Offset: 0
	// Func End, Address: 0x1b61a8, Func Offset: 0x8
}

// iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61b0
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath, int8* fname, int32* bytesNeeded, int32* availOnDisk)
{
	int32 result;
	int32 i;
	int8* gameName;
	// Line 570, Address: 0x1b61b0, Func Offset: 0
	// Line 573, Address: 0x1b61f4, Func Offset: 0x44
	// Line 576, Address: 0x1b61f8, Func Offset: 0x48
	// Line 577, Address: 0x1b6208, Func Offset: 0x58
	// Line 580, Address: 0x1b6224, Func Offset: 0x74
	// Line 582, Address: 0x1b6244, Func Offset: 0x94
	// Line 583, Address: 0x1b624c, Func Offset: 0x9c
	// Line 584, Address: 0x1b6250, Func Offset: 0xa0
	// Line 586, Address: 0x1b6260, Func Offset: 0xb0
	// Line 589, Address: 0x1b6280, Func Offset: 0xd0
	// Func End, Address: 0x1b62ac, Func Offset: 0xfc
}

// iSGTgtSetActive__FP13st_ISGSESSIONi
// Start address: 0x1b62b0
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx)
{
	// Line 549, Address: 0x1b62b0, Func Offset: 0
	// Line 553, Address: 0x1b62b4, Func Offset: 0x4
	// Line 549, Address: 0x1b62b8, Func Offset: 0x8
	// Line 553, Address: 0x1b62bc, Func Offset: 0xc
	// Line 549, Address: 0x1b62c0, Func Offset: 0x10
	// Line 553, Address: 0x1b62c8, Func Offset: 0x18
	// Line 555, Address: 0x1b6308, Func Offset: 0x58
	// Line 556, Address: 0x1b630c, Func Offset: 0x5c
	// Func End, Address: 0x1b6320, Func Offset: 0x70
}

// iSGTgtState__FP13st_ISGSESSIONiPCc
// Start address: 0x1b6320
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, int8* dpath)
{
	uint32 state;
	int32 rc;
	// Line 508, Address: 0x1b6320, Func Offset: 0
	// Line 509, Address: 0x1b6330, Func Offset: 0x10
	// Line 508, Address: 0x1b6334, Func Offset: 0x14
	// Line 516, Address: 0x1b6344, Func Offset: 0x24
	// Line 517, Address: 0x1b6350, Func Offset: 0x30
	// Line 518, Address: 0x1b6358, Func Offset: 0x38
	// Line 520, Address: 0x1b6360, Func Offset: 0x40
	// Line 521, Address: 0x1b636c, Func Offset: 0x4c
	// Line 522, Address: 0x1b6374, Func Offset: 0x54
	// Line 525, Address: 0x1b6380, Func Offset: 0x60
	// Line 526, Address: 0x1b638c, Func Offset: 0x6c
	// Line 527, Address: 0x1b63a0, Func Offset: 0x80
	// Line 529, Address: 0x1b63a8, Func Offset: 0x88
	// Line 530, Address: 0x1b63b0, Func Offset: 0x90
	// Line 531, Address: 0x1b6420, Func Offset: 0x100
	// Line 532, Address: 0x1b642c, Func Offset: 0x10c
	// Line 534, Address: 0x1b6430, Func Offset: 0x110
	// Line 535, Address: 0x1b6438, Func Offset: 0x118
	// Func End, Address: 0x1b6454, Func Offset: 0x134
}

// iSGTgtFormat__FP13st_ISGSESSIONiiPi
// Start address: 0x1b6460
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async)
{
	int32 result;
	int32 rc;
	// Line 464, Address: 0x1b6460, Func Offset: 0
	// Line 465, Address: 0x1b6478, Func Offset: 0x18
	// Line 464, Address: 0x1b647c, Func Offset: 0x1c
	// Line 468, Address: 0x1b6484, Func Offset: 0x24
	// Line 470, Address: 0x1b6490, Func Offset: 0x30
	// Line 473, Address: 0x1b649c, Func Offset: 0x3c
	// Line 474, Address: 0x1b64a8, Func Offset: 0x48
	// Line 476, Address: 0x1b64b8, Func Offset: 0x58
	// Line 477, Address: 0x1b64f0, Func Offset: 0x90
	// Line 478, Address: 0x1b64f8, Func Offset: 0x98
	// Line 479, Address: 0x1b6500, Func Offset: 0xa0
	// Line 483, Address: 0x1b6508, Func Offset: 0xa8
	// Line 485, Address: 0x1b6510, Func Offset: 0xb0
	// Line 486, Address: 0x1b651c, Func Offset: 0xbc
	// Line 487, Address: 0x1b6524, Func Offset: 0xc4
	// Line 488, Address: 0x1b6528, Func Offset: 0xc8
	// Line 487, Address: 0x1b652c, Func Offset: 0xcc
	// Line 490, Address: 0x1b6530, Func Offset: 0xd0
	// Line 489, Address: 0x1b6534, Func Offset: 0xd4
	// Line 488, Address: 0x1b6538, Func Offset: 0xd8
	// Line 491, Address: 0x1b653c, Func Offset: 0xdc
	// Line 494, Address: 0x1b6548, Func Offset: 0xe8
	// Line 495, Address: 0x1b654c, Func Offset: 0xec
	// Line 496, Address: 0x1b6550, Func Offset: 0xf0
	// Line 498, Address: 0x1b6554, Func Offset: 0xf4
	// Line 501, Address: 0x1b6558, Func Offset: 0xf8
	// Line 502, Address: 0x1b655c, Func Offset: 0xfc
	// Func End, Address: 0x1b6578, Func Offset: 0x118
}

// iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi
// Start address: 0x1b6580
int32 iSGTgtPhysSlotIdx()
{
	int32 concnt[2];
	int32 dp;
	int32 ds;
	// Line 401, Address: 0x1b6580, Func Offset: 0
	// Line 403, Address: 0x1b6584, Func Offset: 0x4
	// Line 409, Address: 0x1b65ac, Func Offset: 0x2c
	// Line 418, Address: 0x1b65c0, Func Offset: 0x40
	// Line 419, Address: 0x1b65c4, Func Offset: 0x44
	// Func End, Address: 0x1b65d0, Func Offset: 0x50
}

// iSGTgtCount__FP13st_ISGSESSIONPi
// Start address: 0x1b65d0
int32 iSGTgtCount(int32* max)
{
	int32 rc;
	int32 tgtmax;
	int32 concnt[2];
	int32 dp;
	int32 ds;
	// Line 371, Address: 0x1b65d0, Func Offset: 0
	// Line 374, Address: 0x1b65d4, Func Offset: 0x4
	// Line 371, Address: 0x1b65d8, Func Offset: 0x8
	// Line 374, Address: 0x1b65dc, Func Offset: 0xc
	// Line 371, Address: 0x1b65e0, Func Offset: 0x10
	// Line 374, Address: 0x1b65e8, Func Offset: 0x18
	// Line 379, Address: 0x1b6608, Func Offset: 0x38
	// Line 382, Address: 0x1b661c, Func Offset: 0x4c
	// Line 386, Address: 0x1b6628, Func Offset: 0x58
	// Line 388, Address: 0x1b6630, Func Offset: 0x60
	// Line 390, Address: 0x1b6640, Func Offset: 0x70
	// Line 394, Address: 0x1b6650, Func Offset: 0x80
	// Line 395, Address: 0x1b6658, Func Offset: 0x88
	// Line 394, Address: 0x1b6664, Func Offset: 0x94
	// Line 395, Address: 0x1b6668, Func Offset: 0x98
	// Func End, Address: 0x1b6670, Func Offset: 0xa0
}

// iSGSessionEnd__FP13st_ISGSESSION
// Start address: 0x1b6670
void iSGSessionEnd(st_ISGSESSION* isgdata)
{
	// Line 347, Address: 0x1b6670, Func Offset: 0
	// Func End, Address: 0x1b667c, Func Offset: 0xc
}

// iSGSessionBegin__FPvPFPv10en_CHGCODE_vi
// Start address: 0x1b6680
st_ISGSESSION* iSGSessionBegin(void* cltdata, void(*chgfunc)(void*, en_CHGCODE), int32 monitor)
{
	st_ISGSESSION* isgdata;
	// Line 301, Address: 0x1b6680, Func Offset: 0
	// Line 305, Address: 0x1b66a0, Func Offset: 0x20
	// Line 309, Address: 0x1b66bc, Func Offset: 0x3c
	// Line 312, Address: 0x1b66cc, Func Offset: 0x4c
	// Line 313, Address: 0x1b66e0, Func Offset: 0x60
	// Line 315, Address: 0x1b66f0, Func Offset: 0x70
	// Line 316, Address: 0x1b66f4, Func Offset: 0x74
	// Line 325, Address: 0x1b66f8, Func Offset: 0x78
	// Line 316, Address: 0x1b66fc, Func Offset: 0x7c
	// Line 325, Address: 0x1b6700, Func Offset: 0x80
	// Line 317, Address: 0x1b6704, Func Offset: 0x84
	// Line 325, Address: 0x1b6708, Func Offset: 0x88
	// Line 319, Address: 0x1b670c, Func Offset: 0x8c
	// Line 322, Address: 0x1b6710, Func Offset: 0x90
	// Line 325, Address: 0x1b6714, Func Offset: 0x94
	// Line 330, Address: 0x1b671c, Func Offset: 0x9c
	// Line 339, Address: 0x1b6724, Func Offset: 0xa4
	// Line 330, Address: 0x1b6728, Func Offset: 0xa8
	// Line 331, Address: 0x1b672c, Func Offset: 0xac
	// Line 332, Address: 0x1b6734, Func Offset: 0xb4
	// Line 333, Address: 0x1b673c, Func Offset: 0xbc
	// Line 334, Address: 0x1b6744, Func Offset: 0xc4
	// Line 335, Address: 0x1b674c, Func Offset: 0xcc
	// Line 340, Address: 0x1b6754, Func Offset: 0xd4
	// Func End, Address: 0x1b6770, Func Offset: 0xf0
}

// iSGMakeName__F15en_NAMEGEN_TYPEPCci
// Start address: 0x1b6770
int8* iSGMakeName(en_NAMEGEN_TYPE type, int8* base, int32 idx)
{
	int8* use_buf;
	int8* fmt_sb;
	int8* fmt_sd;
	int8* fmt_sbd;
	int32 rotate;
	int8 rotatebuf[32][8];
	// Line 188, Address: 0x1b6770, Func Offset: 0
	// Line 199, Address: 0x1b6784, Func Offset: 0x14
	// Line 192, Address: 0x1b678c, Func Offset: 0x1c
	// Line 193, Address: 0x1b6790, Func Offset: 0x20
	// Line 194, Address: 0x1b6794, Func Offset: 0x24
	// Line 199, Address: 0x1b6798, Func Offset: 0x28
	// Line 200, Address: 0x1b679c, Func Offset: 0x2c
	// Line 192, Address: 0x1b67a0, Func Offset: 0x30
	// Line 193, Address: 0x1b67a4, Func Offset: 0x34
	// Line 194, Address: 0x1b67a8, Func Offset: 0x38
	// Line 199, Address: 0x1b67ac, Func Offset: 0x3c
	// Line 200, Address: 0x1b67b8, Func Offset: 0x48
	// Line 216, Address: 0x1b67c8, Func Offset: 0x58
	// Line 219, Address: 0x1b67f8, Func Offset: 0x88
	// Line 220, Address: 0x1b6818, Func Offset: 0xa8
	// Line 221, Address: 0x1b682c, Func Offset: 0xbc
	// Line 224, Address: 0x1b6834, Func Offset: 0xc4
	// Line 249, Address: 0x1b6838, Func Offset: 0xc8
	// Line 251, Address: 0x1b6840, Func Offset: 0xd0
	// Line 252, Address: 0x1b6860, Func Offset: 0xf0
	// Line 253, Address: 0x1b6874, Func Offset: 0x104
	// Line 255, Address: 0x1b6880, Func Offset: 0x110
	// Line 256, Address: 0x1b6888, Func Offset: 0x118
	// Line 258, Address: 0x1b68a0, Func Offset: 0x130
	// Line 259, Address: 0x1b68a8, Func Offset: 0x138
	// Line 261, Address: 0x1b68c4, Func Offset: 0x154
	// Line 263, Address: 0x1b68cc, Func Offset: 0x15c
	// Line 265, Address: 0x1b68d0, Func Offset: 0x160
	// Line 266, Address: 0x1b68d8, Func Offset: 0x168
	// Line 268, Address: 0x1b68ec, Func Offset: 0x17c
	// Line 269, Address: 0x1b68f8, Func Offset: 0x188
	// Line 271, Address: 0x1b6900, Func Offset: 0x190
	// Line 272, Address: 0x1b690c, Func Offset: 0x19c
	// Line 273, Address: 0x1b691c, Func Offset: 0x1ac
	// Line 276, Address: 0x1b6928, Func Offset: 0x1b8
	// Line 277, Address: 0x1b693c, Func Offset: 0x1cc
	// Line 285, Address: 0x1b694c, Func Offset: 0x1dc
	// Line 289, Address: 0x1b6950, Func Offset: 0x1e0
	// Line 290, Address: 0x1b6954, Func Offset: 0x1e4
	// Func End, Address: 0x1b6964, Func Offset: 0x1f4
}

// iSGShutdown__Fv
// Start address: 0x1b6970
int32 iSGShutdown()
{
	// Line 167, Address: 0x1b6970, Func Offset: 0
	// Line 179, Address: 0x1b697c, Func Offset: 0xc
	// Func End, Address: 0x1b6984, Func Offset: 0x14
}

// iSGStartup__Fv
// Start address: 0x1b6990
int32 iSGStartup()
{
	// Line 108, Address: 0x1b6990, Func Offset: 0
	// Line 114, Address: 0x1b6998, Func Offset: 0x8
	// Line 122, Address: 0x1b69a8, Func Offset: 0x18
	// Line 160, Address: 0x1b69b0, Func Offset: 0x20
	// Line 159, Address: 0x1b69b4, Func Offset: 0x24
	// Line 160, Address: 0x1b69b8, Func Offset: 0x28
	// Func End, Address: 0x1b69c0, Func Offset: 0x30
}

