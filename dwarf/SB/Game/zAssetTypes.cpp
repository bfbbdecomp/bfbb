typedef struct RpWorldSector;
typedef struct RxPipelineNodeParam;
typedef struct xModelInstance;
typedef struct RpMorphTarget;
typedef struct xJSPNodeInfo;
typedef struct xEnt;
typedef struct xLightKit;
typedef struct xUpdateCullEnt;
typedef struct xMat4x3;
typedef struct xAnimMultiFileEntry;
typedef struct xEnv;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct xBase;
typedef struct zPlatFMRunTime;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xMovePointAsset;
typedef struct RxPipelineNode;
typedef struct xScene;
typedef struct zPlayerSettings;
typedef struct RpLight;
typedef struct zEnt;
typedef struct xQuat;
typedef struct xEntMPData;
typedef struct xLightKitLight;
typedef struct _tagxRumble;
typedef struct xAnimFile;
typedef struct xEntCollis;
typedef struct xBound;
typedef struct iFogParams;
typedef struct xCollis;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xCutsceneZbufferHack;
typedef struct xCutsceneBreak;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct xAnimSingle;
typedef struct xShadowSimpleCache;
typedef struct xEntMotionAsset;
typedef struct xEntAsset;
typedef struct st_PACKER_ASSETTYPE;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMovePoint;
typedef struct xBaseAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct jsp_shadow_hack_atomic_context;
typedef struct xUpdateCullGroup;
typedef struct xEntFrame;
typedef struct xSpline3;
typedef struct xJSPHeader;
typedef struct xPortalAsset;
typedef struct xAnimState;
typedef struct xEntMotionERData;
typedef struct RpSector;
typedef struct RxPipeline;
typedef struct xAnimMultiFileBase;
typedef struct RwMatrixTag;
typedef enum _tagPadState;
typedef struct xAnimTransition;
typedef struct XCSNNosey;
typedef struct xEntBoulder;
typedef struct xVec4;
typedef struct RwLLLink;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct _tagxPad;
typedef struct xFFX;
typedef struct xAnimEffect;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpAtomic;
typedef struct xCutsceneMgr;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct rxReq;
typedef struct xClumpCollBSPTree;
typedef struct RwRaster;
typedef struct zJumpParam;
typedef struct _zEnv;
typedef struct xCutsceneMgrAsset;
typedef struct RwTexDictionary;
typedef enum RxClusterValidityReq;
typedef struct _class_0;
typedef struct tag_iFile;
typedef struct xCutscene;
typedef struct xEntDrive;
typedef struct zPlatform;
typedef struct xAnimMultiFile;
typedef struct RpVertexNormal;
typedef struct zAssetPickupTable;
typedef union RwStreamUnion;
typedef struct xAnimPlay;
typedef struct xEntShadow;
typedef struct RwStream;
typedef struct xAnimTable;
typedef struct xCurveAsset;
typedef struct xAnimAssetEffect;
typedef struct xPlatformAsset;
typedef struct xEnvAsset;
typedef struct tag_xFile;
typedef struct _tagPadAnalog;
typedef struct anim_coll_data;
typedef enum RxNodeDefEditable;
typedef struct xAnimAssetFile;
typedef struct zAnimFxSound;
typedef enum RxClusterValid;
typedef struct RpInterpolator;
typedef enum RwStreamType;
typedef struct xEntMotionOrbitData;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xUpdateCullMgr;
typedef struct iEnv;
typedef struct xQCData;
typedef struct _zPortal;
typedef struct xGroupAsset;
typedef struct RwChunkHeaderInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagiPad;
typedef struct tri_data_0;
typedef struct xAnimAssetTable;
typedef struct RpPolygon;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xCoef;
typedef struct RpMaterialList;
typedef struct xModelPool;
typedef struct xBox;
typedef struct xEntMechData;
typedef struct RpMaterial;
typedef struct RxClusterDefinition;
typedef enum RwStreamAccessType;
typedef struct xEntMotionSplineData;
typedef struct RwFrame;
typedef struct tri_data_1;
typedef struct xAnimAssetState;
typedef struct xCutsceneInfo;
typedef struct xVec2;
typedef struct RpGeometry;
typedef struct AnimTableList;
typedef struct zCutsceneMgr;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct _class_1;
typedef struct xCoef3;
typedef struct HackModelRadius;
typedef struct RxOutputSpec;
typedef struct xEntMotionMPData;
typedef struct zGlobalSettings;
typedef struct RwError;
typedef struct xEntERData;
typedef struct RwMemory;
typedef struct xMat3x3;
typedef struct xLinkAsset;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct xCutsceneTime;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct xGroup;
typedef struct zLedgeGrabParams;
typedef struct RxIoSpec;
typedef struct xGridBound;
typedef struct xAnimTransitionList;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef enum xCurveType;
typedef struct xCutsceneData;
typedef enum _zPlayerWallJumpState;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEntMotionMechData;
typedef enum xCurveClamp;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpTriangle;
typedef struct xEntPenData;
typedef struct RwFrustumPlane;
typedef struct zLasso;
typedef struct RxNodeDefinition;
typedef enum _tagRumbleType;
typedef struct xSurface;
typedef struct xClumpCollBSPTriangle;
typedef union RwStreamFile;
typedef struct RwPlane;
typedef enum _zPlayerType;
typedef struct RxCluster;
typedef struct analog_data;
typedef struct xEntOrbitData;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct xEntMotion;
typedef struct xModelTag;
typedef struct RwRGBAReal;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RwObjectHasFrame;
typedef union _class_2;
typedef struct RwLinkList;
typedef enum RpWorldRenderOrder;
typedef struct zPlayerCarryInfo;
typedef struct xCamera;
typedef struct xCutsceneZbuffer;
typedef struct xEntSplineData;
typedef struct RwV2d;
typedef struct xShadowSimplePoly;
typedef struct xModelBucket;
typedef struct xEntMotionPenData;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_1)(uint32);
typedef void(*type_3)(xEnt*, xScene*, float32);
typedef RpWorldSector*(*type_4)(RpWorldSector*);
typedef int32(*type_5)(void*, uint32);
typedef int8*(*type_6)(xBase*);
typedef void(*type_8)(void*, uint32, void*);
typedef int8*(*type_10)(uint32);
typedef void(*type_13)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_14)(xEnt*, xVec3*);
typedef uint32(*type_16)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_17)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_22)(xEnt*);
typedef int32(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_28)(void*);
typedef int32(*type_30)(RxNodeDefinition*);
typedef uint32(*type_32)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_34)(void*, void*, uint32);
typedef void(*type_36)(void*);
typedef void(*type_38)(RxNodeDefinition*);
typedef int32(*type_40)(void*, void*, uint32);
typedef uint32(*type_43)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_45)(RxPipelineNode*);
typedef void*(*type_47)(void*, uint32, void*, uint32, uint32*);
typedef void(*type_48)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_51)(RxPipelineNode*);
typedef void*(*type_52)(void*, uint32, void*, void*, uint32, uint32*);
typedef int32(*type_54)(void*, uint32, void*, int32);
typedef uint32(*type_57)(xAnimTransition*, xAnimSingle*, void*);
typedef void*(*type_58)(void*, uint32, void*, int32*, int32*);
typedef void(*type_60)(void*, uint32);
typedef void(*type_64)(void*, uint32, void*, int8*);
typedef xAnimTable*(*type_66)();
typedef void(*type_69)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_71)(xAnimPlay*, xAnimState*);
typedef RwTexture*(*type_77)(RwTexture*, void*);
typedef void(*type_81)(xAnimPlay*, xAnimState*);
typedef RpAtomic*(*type_86)(RpAtomic*, void*);
typedef void(*type_89)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_91)(void*, void*);
typedef RpClump*(*type_93)(RpClump*, void*);
typedef RwCamera*(*type_101)(RwCamera*);
typedef void*(*type_104)(uint32, int8*);
typedef RwCamera*(*type_108)(RwCamera*);
typedef void(*type_113)(xMemPool*, void*);
typedef RpAtomic*(*type_119)(RpAtomic*);
typedef void(*type_121)(RwResEntry*);
typedef int32(*type_128)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwObjectHasFrame*(*type_129)(RwObjectHasFrame*);

typedef uint8 type_2[2];
typedef xVec4 type_7[12];
typedef uint8 type_9[2];
typedef uint32 type_11[2];
typedef float32 type_12[12];
typedef RwFrustumPlane type_15[6];
typedef uint8 type_18[2];
typedef float32 type_19[12];
typedef float32 type_20[6];
typedef float32 type_21[16];
typedef float32 type_24[12];
typedef uint32 type_25[2];
typedef xCutsceneZbuffer type_26[4];
typedef float32 type_27[3];
typedef RwV3d type_29[8];
typedef float32 type_31[12];
typedef uint32 type_33[2];
typedef float32 type_35[3];
typedef xModelTag type_37[2];
typedef float32 type_39[12];
typedef uint32 type_41[2];
typedef float32 type_42[3];
typedef int8 type_44[4];
typedef float32 type_46[12];
typedef float32 type_49[2];
typedef type_32 type_50[2];
typedef uint32 type_53[72];
typedef xBase* type_55[72];
typedef xEnt* type_56[111];
typedef int8* type_59[5];
typedef xVec3 type_61[4];
typedef int8 type_62[128];
typedef uint8 type_63[2];
typedef xAnimMultiFileEntry type_65[1];
typedef int8 type_67[128];
typedef type_66 type_68[48];
typedef type_67 type_70[6];
typedef uint8 type_72[14];
typedef xModelTag type_73[4];
typedef uint16 type_74[2];
typedef int8 type_75[32];
typedef xModelInstance* type_76[14];
typedef xCollis type_78[18];
typedef int8 type_79[32];
typedef uint16 type_80[3];
typedef uint8 type_82[4];
typedef float32 type_83[4];
typedef RpLight* type_84[2];
typedef RwFrame* type_85[2];
typedef uint32 type_87[4];
typedef uint8 type_88[22];
typedef uint8 type_90[22];
typedef uint8 type_92[3];
typedef float32 type_94[15];
typedef float32 type_95[15];
typedef uint32 type_96[4096];
typedef uint8 type_97[2];
typedef uint32 type_98[15];
typedef RwTexCoords* type_99[8];
typedef xVec3 type_100[5];
typedef HackModelRadius type_102[3];
typedef uint8 type_103[5];
typedef float32 type_105[2];
typedef int8 type_106[32];
typedef int8 type_107[16];
typedef xVec3 type_109[60];
typedef int8 type_110[16];
typedef AnimTableList type_111[33];
typedef float32 type_112[22];
typedef float32 type_114[4];
typedef uint16 type_115[3];
typedef st_PACKER_ASSETTYPE type_116[78];
typedef float32 type_117[22];
typedef int8 type_118[32];
typedef int8 type_120[32];
typedef uint32 type_122[15];
typedef uint32 type_123[15];
typedef uint32 type_124[15];
typedef uint8 type_125[3];
typedef RxCluster type_126[1];
typedef analog_data type_127[2];
typedef int8 type_130[16];
typedef RwTexCoords* type_131[8];
typedef xVec3 type_132[3];
typedef float32 type_133[4];
typedef int8 type_134[16];

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_99 texCoords;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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
	type_3 update;
	type_3 endUpdate;
	type_14 bupdate;
	type_17 move;
	type_22 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_48 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_91 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_128 eventFunc;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_12 tmrs;
	type_19 ttms;
	type_24 atms;
	type_31 dtms;
	type_39 vms;
	type_46 dss;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_20 MoveSpeed;
	type_27 AnimSneak;
	type_35 AnimWalk;
	type_42 AnimRun;
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
	type_82 talk_filter;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xEntMPData
{
	float32 curdist;
	float32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_21 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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
	type_63 NumAnims;
	void** RawData;
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
	type_78 colls;
	type_13 post;
	type_43 depenq;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_125 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
		tri_data_0 tri;
	};
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xCutsceneZbufferHack
{
	int8* name;
	type_26 times;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_118 name;
	type_120 mask;
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
	type_4 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_87 pad;
};

struct RwStreamCustom
{
	type_28 sfnclose;
	type_34 sfnread;
	type_40 sfnwrite;
	type_5 sfnskip;
	void* data;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_49 BilinearLerp;
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
	type_61 corner;
};

struct xEntMotionAsset
{
	uint8 type;
	uint8 use_banking;
	uint16 flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
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

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	type_47 readXForm;
	type_52 writeXForm;
	type_54 assetLoaded;
	type_58 makeData;
	type_8 cleanup;
	type_60 assetUnloaded;
	type_64 writePeek;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_97 pad;
	float32 delay;
	xSpline3* spl;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct jsp_shadow_hack_atomic_context
{
	xJSPHeader* jsp;
	int32 index;
	int32 last_material;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct xJSPHeader
{
	type_44 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	type_81 BeforeEnter;
	type_69 StateCallback;
	type_89 BeforeAnimMatrices;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
};

struct RpSector
{
	int32 type;
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

struct xAnimMultiFileBase
{
	uint32 Count;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_57 Conditional;
	type_57 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
};

struct xEntBoulder
{
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagxPad
{
	type_88 value;
	type_90 last_value;
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
	type_112 up_tmr;
	type_117 down_tmr;
	type_127 analog;
};

struct xFFX
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_32 Callback;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_93 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_119 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_70 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_75 sceneStart;
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

struct zEntHangable
{
};

struct rxReq
{
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	type_94 startTime;
	type_95 endTime;
	type_98 emitID;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	xVec3* verts;
};

struct tag_iFile
{
	uint32 flags;
	type_62 path;
	int32 fd;
	int32 offset;
	int32 length;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	uint32* TimeChunkOffs;
	uint32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	uint32 Waiting;
	uint32 BadReadPause;
	float32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float32 Time;
	float32 CamTime;
	uint32 PlayIndex;
	uint32 Ready;
	int32 DataLoading;
	uint32 GotData;
	uint32 ShutDownWait;
	float32 PlaybackSpeed;
	uint32 Opened;
	tag_xFile File;
	int32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	uint32 SndStarted;
	uint32 SndNumChannel;
	type_25 SndChannelReq;
	type_33 SndAssetID;
	type_41 SndHandle;
	XCSNNosey* cb_nosey;
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

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	uint16 state;
	uint16 plat_flags;
	float32 tmr;
	int32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float32 pauseMult;
	float32 pauseDelta;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_65 Files;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
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
	type_89 BeforeAnimMatrices;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_105 radius;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
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

struct xCurveAsset
{
	xCurveType type;
	xCurveClamp clamp;
	float32 delta;
	int32 numPoints;
	float32* points;
};

struct xAnimAssetEffect
{
	uint32 StateID;
	float32 StartTime;
	float32 EndTime;
	uint32 Flags;
	uint32 EffectType;
	uint32 UserDataSize;
};

struct xPlatformAsset
{
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

struct tag_xFile
{
	type_79 relname;
	tag_iFile ps;
	void* user_data;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct anim_coll_data
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimAssetFile
{
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	type_74 NumAnims;
	void** RawData;
	int32 Physics;
	int32 StartPose;
	int32 EndPose;
};

struct zAnimFxSound
{
	uint32 ID;
	float32 vol;
	float32 pitch;
	uint32 priority;
	uint32 flags;
	float32 radius;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	type_36 activateCB;
	type_36 deactivateCB;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_84 light;
	type_85 light_frame;
	int32 memlvl;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RwChunkHeaderInfo
{
	uint32 type;
	uint32 length;
	uint32 version;
	uint32 buildNum;
	int32 isComplex;
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

struct _tagiPad
{
	int32 port;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xAnimAssetTable
{
	uint32 Magic;
	uint32 NumRaw;
	uint32 NumFiles;
	uint32 NumStates;
	uint32 ConstructFunc;
};

struct RpPolygon
{
	uint16 matIndex;
	type_80 vertIndex;
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xCoef
{
	type_83 a;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionSplineData
{
	int32 unknown;
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

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xAnimAssetState
{
	uint32 StateID;
	uint32 FileIndex;
	uint32 EffectCount;
	uint32 EffectOffset;
	float32 Speed;
	uint32 SubStateID;
	uint32 SubStateCount;
};

struct xCutsceneInfo
{
	uint32 Magic;
	uint32 AssetID;
	uint32 NumData;
	uint32 NumTime;
	uint32 MaxModel;
	uint32 MaxBufEven;
	uint32 MaxBufOdd;
	uint32 HeaderSize;
	uint32 VisCount;
	uint32 VisSize;
	uint32 BreakCount;
	uint32 pad;
	type_107 SoundLeft;
	type_110 SoundRight;
};

struct xVec2
{
	float32 x;
	float32 y;
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
	type_131 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct AnimTableList
{
	int8* name;
	type_66 constructor;
	uint32 id;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_113 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct HackModelRadius
{
	uint32 assetid;
	float32 radius;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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
	type_9 PowerUp;
	type_18 InitialPowerUp;
};

struct RwError
{
	int32 pluginID;
	int32 errorCode;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
};

struct RwMemory
{
	uint8* start;
	uint32 length;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_114 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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
	type_53 baseCount;
	type_55 baseList;
	_zEnv* zen;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_101 beginUpdate;
	type_108 endUpdate;
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
	type_15 frustumPlanes;
	RwBBox frustumBoundBox;
	type_29 frustumCorners;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_109 tranTable;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_121 destroyNotify;
};

enum xCurveType
{
	xCVT_BAKED
};

struct xCutsceneData
{
	uint32 DataType;
	uint32 AssetID;
	uint32 ChunkSize;
	union
	{
		uint32 FileOffset;
		void* DataPtr;
	};
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RxNodeMethods
{
	type_23 nodeBody;
	type_30 nodeInit;
	type_38 nodeTerm;
	type_45 pipelineNodeInit;
	type_51 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_16 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xEntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
};

enum xCurveClamp
{
	xCC_CONSTANT,
	xCC_CYCLE,
	xCC_OSCILLATE
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RpTriangle
{
	type_115 vertIndex;
	int16 matIndex;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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
	type_100 lastRefs;
	type_103 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_92 pad;
	void* moprops;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_126 clusters;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotion
{
	xEntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_133 wt;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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
	type_37 BubbleWandTag;
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
	type_73 HangPawTag;
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
	type_122 Inv_PatsSock;
	type_123 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_124 Inv_LevelPickups;
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
	type_11 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_56 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_72 sb_model_indices;
	type_76 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_129 sync;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_7 frustplane;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
};

struct xEntSplineData
{
	int32 unknown;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xShadowSimplePoly
{
	type_132 vert;
	xVec3 norm;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_2 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

type_130 buffer;
type_134 buffer;
type_116 assetTypeHandlers;
type_102 hackRadiusTable;
xJSPHeader* sTempJSP;
xJSPHeader sDummyEmptyJSP;
type_59 jsp_shadow_hack_textures;
int8** jsp_shadow_hack_end_textures;
type_111 animTable;
type_68 tableFuncList;
uint32 s_sbFootSoundA;
uint32 s_sbFootSoundB;
uint32 s_scFootSoundA;
uint32 s_scFootSoundB;
uint32 s_patFootSoundA;
uint32 s_patFootSoundB;
type_50 effectFuncList;
uint32 gxAnimUseGrowAlloc;
type_71 xAnimDefaultBeforeEnter;
type_104 FindAssetCB;
type_77 TexCB;
type_86 jsp_shadow_hack_atomic_cb;
zGlobals globals;
type_96 ourGlobals;

void MovePoint_Unload(void* userdata);
void LightKit_Unload(void* userdata);
void Anim_Unload();
void* ATBL_Read(void* indata, uint32* outsize);
void* FindAssetCB(uint32 ID);
uint32 soundEffectCB(uint32 cbenum, xAnimActiveEffect* acteffect, void* object);
uint32 dummyEffectCB();
void FootstepHackSceneEnter();
void TextureRW3_Unload(void* userdata);
void* RWTX_Read(void* indata, uint32 insize, uint32* outsize);
RwTexture* TexCB(RwTexture* texture, void* data);
void JSP_Unload(void* userdata);
void* JSP_Read(void* indata, uint32 insize, uint32* outsize);
RpAtomic* jsp_shadow_hack_atomic_cb(RpAtomic* atomic, void* data);
void BSP_Unload();
void* BSP_Read(void* indata, uint32 insize, uint32* outsize);
void Model_Unload(void* userdata);
void* Curve_Read(void* indata, uint32 insize, uint32* outsize);
void* Model_Read(uint32 assetid, void* indata, uint32 insize, uint32* outsize);
void zAssetShutdown();
void zAssetStartup();

// MovePoint_Unload__FPvUi
// Start address: 0x12a300
void MovePoint_Unload(void* userdata)
{
}

// LightKit_Unload__FPvUi
// Start address: 0x12a310
void LightKit_Unload(void* userdata)
{
}

// Anim_Unload__FPvUi
// Start address: 0x12a320
void Anim_Unload()
{
}

// ATBL_Read__FPvUiPvUiPUi
// Start address: 0x12a330
void* ATBL_Read(void* indata, uint32* outsize)
{
	uint32 i;
	uint32 j;
	uint32 debugNum;
	uint32 tmpsize;
	xAnimTable* table;
	xAnimState* astate;
	xAnimTransition* atran;
	uint8* zaBytes;
	xAnimAssetTable* zaTbl;
	void** zaRaw;
	xAnimAssetFile* zaFile;
	xAnimAssetState* zaState;
	int32 k;
	xAnimFile** fList;
	type_66 constructor;
	int32 i;
	type_106 tmpstr;
	xAnimFile* foundFile;
	xAnimState* state;
	xAnimAssetEffect* zaEffect;
	xAnimEffect* effect;
}

// FindAssetCB__FUiPc
// Start address: 0x12a8c0
void* FindAssetCB(uint32 ID)
{
	uint32 size;
}

// soundEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x12a8e0
uint32 soundEffectCB(uint32 cbenum, xAnimActiveEffect* acteffect, void* object)
{
	uint32 sndhandle;
	uint32 vil_SID;
	int32 vil_result;
	xEnt* ent_tmp;
	zAnimFxSound* snd;
	uint32 id;
	uint32 newId;
	float32 volFactor;
	uint32 footSelector;
}

// dummyEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x12ab50
uint32 dummyEffectCB()
{
}

// FootstepHackSceneEnter__Fv
// Start address: 0x12ab60
void FootstepHackSceneEnter()
{
}

// TextureRW3_Unload__FPvUi
// Start address: 0x12abe0
void TextureRW3_Unload(void* userdata)
{
	RwTexture* tex;
}

// RWTX_Read__FPvUiPvUiPUi
// Start address: 0x12ac10
void* RWTX_Read(void* indata, uint32 insize, uint32* outsize)
{
	RwTexDictionary* txd;
	RwMemory rwmem;
	RwStream* stream;
	RwTexture* tex;
	RwError error;
}

// TexCB__FP9RwTexturePv
// Start address: 0x12ad70
RwTexture* TexCB(RwTexture* texture, void* data)
{
	RwTexture** texFound;
}

// JSP_Unload__FPvUi
// Start address: 0x12ad90
void JSP_Unload(void* userdata)
{
}

// JSP_Read__FPvUiPvUiPUi
// Start address: 0x12adc0
void* JSP_Read(void* indata, uint32 insize, uint32* outsize)
{
	xJSPHeader* retjsp;
}

// jsp_shadow_hack_atomic_cb__FP8RpAtomicPv
// Start address: 0x12ae80
RpAtomic* jsp_shadow_hack_atomic_cb(RpAtomic* atomic, void* data)
{
	jsp_shadow_hack_atomic_context& context;
	int32 index;
	xClumpCollBSPTree* colltree;
	int32 material_index;
	xClumpCollBSPTriangle* tri;
	xClumpCollBSPTriangle* end_tri;
}

// BSP_Unload__FPvUi
// Start address: 0x12b020
void BSP_Unload()
{
}

// BSP_Read__FPvUiPvUiPUi
// Start address: 0x12b030
void* BSP_Read(void* indata, uint32 insize, uint32* outsize)
{
	RwStream* stream;
	RwMemory rwmem;
	RwChunkHeaderInfo chunkHeaderInfo;
	RpWorld* bsp;
}

// Model_Unload__FPvUi
// Start address: 0x12b120
void Model_Unload(void* userdata)
{
}

// Curve_Read__FPvUiPvUiPUi
// Start address: 0x12b150
void* Curve_Read(void* indata, uint32 insize, uint32* outsize)
{
	xCurveAsset* curve_asset;
}

// Model_Read__FPvUiPvUiPUi
// Start address: 0x12b1c0
void* Model_Read(uint32 assetid, void* indata, uint32 insize, uint32* outsize)
{
	RpAtomic* model;
	uint32 i;
	RpAtomic* tmpModel;
}

// zAssetShutdown__Fv
// Start address: 0x12b2a0
void zAssetShutdown()
{
}

// zAssetStartup__Fv
// Start address: 0x12b2b0
void zAssetStartup()
{
}

