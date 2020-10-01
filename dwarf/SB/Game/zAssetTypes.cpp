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

typedef s32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_1)(u32);
typedef void(*type_3)(xEnt*, xScene*, f32);
typedef RpWorldSector*(*type_4)(RpWorldSector*);
typedef s32(*type_5)(void*, u32);
typedef s8*(*type_6)(xBase*);
typedef void(*type_8)(void*, u32, void*);
typedef s8*(*type_10)(u32);
typedef void(*type_13)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_14)(xEnt*, xVec3*);
typedef u32(*type_16)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_17)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_22)(xEnt*);
typedef s32(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_28)(void*);
typedef s32(*type_30)(RxNodeDefinition*);
typedef u32(*type_32)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_34)(void*, void*, u32);
typedef void(*type_36)(void*);
typedef void(*type_38)(RxNodeDefinition*);
typedef s32(*type_40)(void*, void*, u32);
typedef u32(*type_43)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s32(*type_45)(RxPipelineNode*);
typedef void*(*type_47)(void*, u32, void*, u32, u32*);
typedef void(*type_48)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_51)(RxPipelineNode*);
typedef void*(*type_52)(void*, u32, void*, void*, u32, u32*);
typedef s32(*type_54)(void*, u32, void*, s32);
typedef u32(*type_57)(xAnimTransition*, xAnimSingle*, void*);
typedef void*(*type_58)(void*, u32, void*, s32*, s32*);
typedef void(*type_60)(void*, u32);
typedef void(*type_64)(void*, u32, void*, s8*);
typedef xAnimTable*(*type_66)();
typedef void(*type_69)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_71)(xAnimPlay*, xAnimState*);
typedef RwTexture*(*type_77)(RwTexture*, void*);
typedef void(*type_81)(xAnimPlay*, xAnimState*);
typedef RpAtomic*(*type_86)(RpAtomic*, void*);
typedef void(*type_89)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_91)(void*, void*);
typedef RpClump*(*type_93)(RpClump*, void*);
typedef RwCamera*(*type_101)(RwCamera*);
typedef void*(*type_104)(u32, s8*);
typedef RwCamera*(*type_108)(RwCamera*);
typedef void(*type_113)(xMemPool*, void*);
typedef RpAtomic*(*type_119)(RpAtomic*);
typedef void(*type_121)(RwResEntry*);
typedef s32(*type_128)(xBase*, xBase*, u32, f32*, xBase*);
typedef RwObjectHasFrame*(*type_129)(RwObjectHasFrame*);

typedef u8 type_2[2];
typedef xVec4 type_7[12];
typedef u8 type_9[2];
typedef u32 type_11[2];
typedef f32 type_12[12];
typedef RwFrustumPlane type_15[6];
typedef u8 type_18[2];
typedef f32 type_19[12];
typedef f32 type_20[6];
typedef f32 type_21[16];
typedef f32 type_24[12];
typedef u32 type_25[2];
typedef xCutsceneZbuffer type_26[4];
typedef f32 type_27[3];
typedef RwV3d type_29[8];
typedef f32 type_31[12];
typedef u32 type_33[2];
typedef f32 type_35[3];
typedef xModelTag type_37[2];
typedef f32 type_39[12];
typedef u32 type_41[2];
typedef f32 type_42[3];
typedef s8 type_44[4];
typedef f32 type_46[12];
typedef f32 type_49[2];
typedef type_32 type_50[2];
typedef u32 type_53[72];
typedef xBase* type_55[72];
typedef xEnt* type_56[111];
typedef s8* type_59[5];
typedef xVec3 type_61[4];
typedef s8 type_62[128];
typedef u8 type_63[2];
typedef xAnimMultiFileEntry type_65[1];
typedef s8 type_67[128];
typedef type_66 type_68[48];
typedef type_67 type_70[6];
typedef u8 type_72[14];
typedef xModelTag type_73[4];
typedef u16 type_74[2];
typedef s8 type_75[32];
typedef xModelInstance* type_76[14];
typedef xCollis type_78[18];
typedef s8 type_79[32];
typedef u16 type_80[3];
typedef u8 type_82[4];
typedef f32 type_83[4];
typedef RpLight* type_84[2];
typedef RwFrame* type_85[2];
typedef u32 type_87[4];
typedef u8 type_88[22];
typedef u8 type_90[22];
typedef u8 type_92[3];
typedef f32 type_94[15];
typedef f32 type_95[15];
typedef u32 type_96[4096];
typedef u8 type_97[2];
typedef u32 type_98[15];
typedef RwTexCoords* type_99[8];
typedef xVec3 type_100[5];
typedef HackModelRadius type_102[3];
typedef u8 type_103[5];
typedef f32 type_105[2];
typedef s8 type_106[32];
typedef s8 type_107[16];
typedef xVec3 type_109[60];
typedef s8 type_110[16];
typedef AnimTableList type_111[33];
typedef f32 type_112[22];
typedef f32 type_114[4];
typedef u16 type_115[3];
typedef st_PACKER_ASSETTYPE type_116[78];
typedef f32 type_117[22];
typedef s8 type_118[32];
typedef s8 type_120[32];
typedef u32 type_122[15];
typedef u32 type_123[15];
typedef u32 type_124[15];
typedef u8 type_125[3];
typedef RxCluster type_126[1];
typedef analog_data type_127[2];
typedef s8 type_130[16];
typedef RwTexCoords* type_131[8];
typedef xVec3 type_132[3];
typedef f32 type_133[4];
typedef s8 type_134[16];

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_91 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xAnimMultiFileEntry
{
	u32 ID;
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
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_128 eventFunc;
};

struct zPlatFMRunTime
{
	u32 flags;
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
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_20 MoveSpeed;
	type_27 AnimSneak;
	type_35 AnimWalk;
	type_42 AnimRun;
	f32 JumpGravity;
	f32 GravSmooth;
	f32 FloatSpeed;
	f32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	f32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	f32 spin_damp_xz;
	f32 spin_damp_y;
	u8 talk_anims;
	u8 talk_filter_size;
	type_82 talk_filter;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xEntMPData
{
	f32 curdist;
	f32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	f32 dist;
	u32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_21 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	type_63 NumAnims;
	void** RawData;
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
	type_78 colls;
	type_13 post;
	type_43 depenq;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
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
		tri_data_0 tri;
	};
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xCutsceneZbufferHack
{
	s8* name;
	type_26 times;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_118 name;
	type_120 mask;
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
	type_4 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
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
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_49 BilinearLerp;
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
	type_61 corner;
};

struct xEntMotionAsset
{
	u8 type;
	u8 use_banking;
	u16 flags;
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

struct st_PACKER_ASSETTYPE
{
	u32 typetag;
	u32 tflags;
	s32 typalign;
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
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_97 pad;
	f32 delay;
	xSpline3* spl;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct jsp_shadow_hack_atomic_context
{
	xJSPHeader* jsp;
	s32 index;
	s32 last_material;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	u32 mode;
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

struct xJSPHeader
{
	type_44 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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
	type_81 BeforeEnter;
	type_69 StateCallback;
	type_89 BeforeAnimMatrices;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	f32 ext_tm;
	f32 ext_wait_tm;
	f32 ret_tm;
	f32 ret_wait_tm;
};

struct RpSector
{
	s32 type;
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

struct xAnimMultiFileBase
{
	u32 Count;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
};

struct xEntBoulder
{
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct _tagxPad
{
	type_88 value;
	type_90 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
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
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
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
	u32 size;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_70 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_75 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	s32 fog_t0;
	s32 fog_t1;
	s32 option_vibration;
	u32 QuarterSpeed;
	f32 update_dt;
	s32 useHIPHOP;
	u8 NoMusic;
	s8 currentActivePad;
	u8 firstStartPressed;
	u32 minVSyncCnt;
	u8 dontShowPadMessageDuringLoadingOrCutScene;
	u8 autoSaveFeature;
};

struct zEntHangable
{
};

struct rxReq
{
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
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
	u32 flags;
	type_62 path;
	s32 fd;
	s32 offset;
	s32 length;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	u32* TimeChunkOffs;
	u32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	u32 Waiting;
	u32 BadReadPause;
	f32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	f32 Time;
	f32 CamTime;
	u32 PlayIndex;
	u32 Ready;
	s32 DataLoading;
	u32 GotData;
	u32 ShutDownWait;
	f32 PlaybackSpeed;
	u32 Opened;
	tag_xFile File;
	s32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	u32 SndStarted;
	u32 SndNumChannel;
	type_25 SndChannelReq;
	type_33 SndAssetID;
	type_41 SndHandle;
	XCSNNosey* cb_nosey;
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

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	u16 state;
	u16 plat_flags;
	f32 tmr;
	s32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	s32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	f32 pauseMult;
	f32 pauseDelta;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_65 Files;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct zAssetPickupTable
{
	u32 Magic;
	u32 Count;
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
	u16 NumSingle;
	u16 BoneCount;
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
	f32 dst_cast;
	type_105 radius;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	s32 position;
	RwStreamUnion Type;
	s32 rwOwned;
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

struct xCurveAsset
{
	xCurveType type;
	xCurveClamp clamp;
	f32 delta;
	s32 numPoints;
	f32* points;
};

struct xAnimAssetEffect
{
	u32 StateID;
	f32 StartTime;
	f32 EndTime;
	u32 Flags;
	u32 EffectType;
	u32 UserDataSize;
};

struct xPlatformAsset
{
};

struct xEnvAsset : xBaseAsset
{
	u32 bspAssetID;
	u32 startCameraAssetID;
	u32 climateFlags;
	f32 climateStrengthMin;
	f32 climateStrengthMax;
	u32 bspLightKit;
	u32 objectLightKit;
	f32 padF1;
	u32 bspCollisionAssetID;
	u32 bspFXAssetID;
	u32 bspCameraAssetID;
	u32 bspMapperID;
	u32 bspMapperCollisionID;
	u32 bspMapperFXID;
	f32 loldHeight;
};

struct tag_xFile
{
	type_79 relname;
	tag_iFile ps;
	void* user_data;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	type_74 NumAnims;
	void** RawData;
	s32 Physics;
	s32 StartPose;
	s32 EndPose;
};

struct zAnimFxSound
{
	u32 ID;
	f32 vol;
	f32 pitch;
	u32 priority;
	u32 flags;
	f32 radius;
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
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
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
	f32 w;
	f32 h;
	f32 period;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xUpdateCullMgr
{
	u32 entCount;
	u32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	u32 mgrCount;
	u32 mgrCurr;
	xUpdateCullEnt* mgrList;
	u32 grpCount;
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
	s32 memlvl;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct RwChunkHeaderInfo
{
	u32 type;
	u32 length;
	u32 version;
	u32 buildNum;
	s32 isComplex;
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

struct _tagiPad
{
	s32 port;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
};

struct xAnimAssetTable
{
	u32 Magic;
	u32 NumRaw;
	u32 NumFiles;
	u32 NumStates;
	u32 ConstructFunc;
};

struct RpPolygon
{
	u16 matIndex;
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
	f32 r;
	f32 h;
};

struct xCoef
{
	type_83 a;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
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
	f32 arot;
	f32 brot;
	f32 ss;
	f32 sr;
	s32 state;
	f32 tsfd;
	f32 trfd;
	f32 tsbd;
	f32 trbd;
	f32* rotptr;
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

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	s32 unknown;
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
	f32 yaw;
	xCollis* coll;
};

struct xAnimAssetState
{
	u32 StateID;
	u32 FileIndex;
	u32 EffectCount;
	u32 EffectOffset;
	f32 Speed;
	u32 SubStateID;
	u32 SubStateCount;
};

struct xCutsceneInfo
{
	u32 Magic;
	u32 AssetID;
	u32 NumData;
	u32 NumTime;
	u32 MaxModel;
	u32 MaxBufEven;
	u32 MaxBufOdd;
	u32 HeaderSize;
	u32 VisCount;
	u32 VisSize;
	u32 BreakCount;
	u32 pad;
	type_107 SoundLeft;
	type_110 SoundRight;
};

struct xVec2
{
	f32 x;
	f32 y;
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
	type_131 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct AnimTableList
{
	s8* name;
	type_66 constructor;
	u32 id;
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
	f32 radius;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_113 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	f32 t;
	f32 u;
	f32 v;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct HackModelRadius
{
	u32 assetid;
	f32 radius;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
};

struct zGlobalSettings
{
	u16 AnalogMin;
	u16 AnalogMax;
	f32 SundaeTime;
	f32 SundaeMult;
	u32 InitialShinyCount;
	u32 InitialSpatulaCount;
	s32 ShinyValuePurple;
	s32 ShinyValueBlue;
	s32 ShinyValueGreen;
	s32 ShinyValueYellow;
	s32 ShinyValueRed;
	s32 ShinyValueCombo0;
	s32 ShinyValueCombo1;
	s32 ShinyValueCombo2;
	s32 ShinyValueCombo3;
	s32 ShinyValueCombo4;
	s32 ShinyValueCombo5;
	s32 ShinyValueCombo6;
	s32 ShinyValueCombo7;
	s32 ShinyValueCombo8;
	s32 ShinyValueCombo9;
	s32 ShinyValueCombo10;
	s32 ShinyValueCombo11;
	s32 ShinyValueCombo12;
	s32 ShinyValueCombo13;
	s32 ShinyValueCombo14;
	s32 ShinyValueCombo15;
	f32 ComboTimer;
	u32 Initial_Specials;
	u32 TakeDamage;
	f32 DamageTimeHit;
	f32 DamageTimeSurface;
	f32 DamageTimeEGen;
	f32 DamageSurfKnock;
	f32 DamageGiveHealthKnock;
	u32 CheatSpongeball;
	u32 CheatPlayerSwitch;
	u32 CheatAlwaysPortal;
	u32 CheatFlyToggle;
	u32 DisableForceConversation;
	f32 StartSlideAngle;
	f32 StopSlideAngle;
	f32 RotMatchMaxAngle;
	f32 RotMatchMatchTime;
	f32 RotMatchRelaxTime;
	f32 Gravity;
	f32 BBashTime;
	f32 BBashHeight;
	f32 BBashDelay;
	f32 BBashCVTime;
	f32 BBounceSpeed;
	f32 BSpinMinFrame;
	f32 BSpinMaxFrame;
	f32 BSpinRadius;
	f32 SandyMeleeMinFrame;
	f32 SandyMeleeMaxFrame;
	f32 SandyMeleeRadius;
	f32 BubbleBowlTimeDelay;
	f32 BubbleBowlLaunchPosLeft;
	f32 BubbleBowlLaunchPosUp;
	f32 BubbleBowlLaunchPosAt;
	f32 BubbleBowlLaunchVelLeft;
	f32 BubbleBowlLaunchVelUp;
	f32 BubbleBowlLaunchVelAt;
	f32 BubbleBowlPercentIncrease;
	f32 BubbleBowlMinSpeed;
	f32 BubbleBowlMinRecoverTime;
	f32 SlideAccelVelMin;
	f32 SlideAccelVelMax;
	f32 SlideAccelStart;
	f32 SlideAccelEnd;
	f32 SlideAccelPlayerFwd;
	f32 SlideAccelPlayerBack;
	f32 SlideAccelPlayerSide;
	f32 SlideVelMaxStart;
	f32 SlideVelMaxEnd;
	f32 SlideVelMaxIncTime;
	f32 SlideVelMaxIncAccel;
	f32 SlideAirHoldTime;
	f32 SlideAirSlowTime;
	f32 SlideAirDblHoldTime;
	f32 SlideAirDblSlowTime;
	f32 SlideVelDblBoost;
	u8 SlideApplyPhysics;
	type_9 PowerUp;
	type_18 InitialPowerUp;
};

struct RwError
{
	s32 pluginID;
	s32 errorCode;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	f32 et;
	f32 wet;
	f32 rt;
	f32 wrt;
	f32 p;
	f32 brt;
	f32 ert;
	s32 state;
};

struct RwMemory
{
	u8* start;
	u32 length;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_114 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct RwStreamMemory
{
	u32 position;
	u32 nSize;
	u8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	f32 dist;
	u8 destroy;
	u8 targetGuide;
	f32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	f32 copterTime;
	s32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		u32 num_ents;
		u32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	u32 num_update_base;
	xBase** update_base;
	type_53 baseCount;
	type_55 baseList;
	_zEnv* zen;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_15 frustumPlanes;
	RwBBox frustumBoundBox;
	type_29 frustumCorners;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_109 tranTable;
	s32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	f32 y0det;
	f32 dydet;
	f32 r0det;
	f32 drdet;
	f32 thdet;
	f32 rtime;
	f32 ttime;
	f32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	s32 nrays;
	s32 rrand;
	f32 startrot;
	f32 endrot;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	u32 DataType;
	u32 AssetID;
	u32 ChunkSize;
	union
	{
		u32 FileOffset;
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
	u32 creationAttributes;
};

struct xEntMotionMechData
{
	u8 type;
	u8 flags;
	u8 sld_axis;
	u8 rot_axis;
	f32 sld_dist;
	f32 sld_tm;
	f32 sld_acc_tm;
	f32 sld_dec_tm;
	f32 rot_dist;
	f32 rot_tm;
	f32 rot_acc_tm;
	f32 rot_dec_tm;
	f32 ret_delay;
	f32 post_ret_delay;
};

enum xCurveClamp
{
	xCC_CONSTANT,
	xCC_CYCLE,
	xCC_OSCILLATE
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RpTriangle
{
	type_115 vertIndex;
	s16 matIndex;
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct zLasso
{
	u32 flags;
	f32 secsTotal;
	f32 secsLeft;
	f32 stRadius;
	f32 tgRadius;
	f32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	f32 stSlack;
	f32 stSlackDist;
	f32 tgSlack;
	f32 tgSlackDist;
	f32 crSlack;
	f32 currDist;
	f32 lastDist;
	type_100 lastRefs;
	type_103 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_92 pad;
	void* moprops;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	f32 a;
	f32 b;
	f32 p;
	f32 w;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
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
	u8 type;
	u8 pad;
	u16 flags;
	f32 t;
	f32 tmr;
	f32 d;
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
	u32 matidx;
	type_133 wt;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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
	u32 Visible;
	u32 Health;
	s32 Speed;
	f32 SpeedMult;
	s32 Sneak;
	s32 Teeter;
	f32 SlipFadeTimer;
	s32 Slide;
	f32 SlideTimer;
	s32 Stepping;
	s32 JumpState;
	s32 LastJumpState;
	f32 JumpTimer;
	f32 LookAroundTimer;
	u32 LookAroundRand;
	u32 LastProjectile;
	f32 DecelRun;
	f32 DecelRunSpeed;
	f32 HotsauceTimer;
	f32 LeanLerp;
	f32 ScareTimer;
	xBase* ScareSource;
	f32 CowerTimer;
	f32 DamageTimer;
	f32 SundaeTimer;
	f32 ControlOffTimer;
	f32 HelmetTimer;
	u32 WorldDisguise;
	u32 Bounced;
	f32 FallDeathTimer;
	f32 HeadbuttVel;
	f32 HeadbuttTimer;
	u32 SpecialReceived;
	xEnt* MountChimney;
	f32 MountChimOldY;
	u32 MaxHealth;
	u32 DoMeleeCheck;
	f32 VictoryTimer;
	f32 BadGuyNearTimer;
	f32 ForceSlipperyTimer;
	f32 ForceSlipperyFriction;
	f32 ShockRadius;
	f32 ShockRadiusOld;
	f32 Face_ScareTimer;
	u32 Face_ScareRandom;
	u32 Face_Event;
	f32 Face_EventTimer;
	f32 Face_PantTimer;
	u32 Face_AnimSpecific;
	u32 IdleRand;
	f32 IdleMinorTimer;
	f32 IdleMajorTimer;
	f32 IdleSitTimer;
	s32 Transparent;
	zEnt* FireTarget;
	u32 ControlOff;
	u32 ControlOnEvent;
	u32 AutoMoveSpeed;
	f32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	f32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_37 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	f32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	f32 HangLength;
	xVec3 HangStartPos;
	f32 HangStartLerp;
	type_73 HangPawTag;
	f32 HangPawOffset;
	f32 HangElapsed;
	f32 Jump_CurrGravity;
	f32 Jump_HoldTimer;
	f32 Jump_ChangeTimer;
	s32 Jump_CanDouble;
	s32 Jump_CanFloat;
	s32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	s32 CanJump;
	s32 CanBubbleSpin;
	s32 CanBubbleBounce;
	s32 CanBubbleBash;
	s32 IsJumping;
	s32 IsDJumping;
	s32 IsBubbleSpinning;
	s32 IsBubbleBouncing;
	s32 IsBubbleBashing;
	s32 IsBubbleBowling;
	s32 WasDJumping;
	s32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	s32 cheat_mode;
	u32 Inv_Shiny;
	u32 Inv_Spatula;
	type_122 Inv_PatsSock;
	type_123 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_124 Inv_LevelPickups;
	u32 Inv_LevelPickups_CurrentLevel;
	u32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	s32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_11 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_56 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_72 sb_model_indices;
	type_76 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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
	u32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	f32 minDist;
	f32 maxDist;
	f32 minHeight;
	f32 maxHeight;
	f32 maxCosAngle;
	f32 throwMinDist;
	f32 throwMaxDist;
	f32 throwMinHeight;
	f32 throwMaxHeight;
	f32 throwMaxStack;
	f32 throwMaxCosAngle;
	f32 throwTargetRotRate;
	f32 targetRot;
	u32 grabTarget;
	xVec3 grabOffset;
	f32 grabLerpMin;
	f32 grabLerpMax;
	f32 grabLerpLast;
	u32 grabYclear;
	f32 throwGravity;
	f32 throwHeight;
	f32 throwDistance;
	f32 fruitFloorDecayMin;
	f32 fruitFloorDecayMax;
	f32 fruitFloorBounce;
	f32 fruitFloorFriction;
	f32 fruitCeilingBounce;
	f32 fruitWallBounce;
	f32 fruitLifetime;
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
	f32 fov;
	u32 flags;
	f32 tmr;
	f32 tm_acc;
	f32 tm_dec;
	f32 ltmr;
	f32 ltm_acc;
	f32 ltm_dec;
	f32 dmin;
	f32 dmax;
	f32 dcur;
	f32 dgoal;
	f32 hmin;
	f32 hmax;
	f32 hcur;
	f32 hgoal;
	f32 pmin;
	f32 pmax;
	f32 pcur;
	f32 pgoal;
	f32 depv;
	f32 hepv;
	f32 pepv;
	f32 orn_epv;
	f32 yaw_epv;
	f32 pitch_epv;
	f32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	f32 yaw_cur;
	f32 yaw_goal;
	f32 pitch_cur;
	f32 pitch_goal;
	f32 roll_cur;
	f32 roll_goal;
	f32 dct;
	f32 dcd;
	f32 dccv;
	f32 dcsv;
	f32 hct;
	f32 hcd;
	f32 hccv;
	f32 hcsv;
	f32 pct;
	f32 pcd;
	f32 pccv;
	f32 pcsv;
	f32 orn_ct;
	f32 orn_cd;
	f32 orn_ccv;
	f32 orn_csv;
	f32 yaw_ct;
	f32 yaw_cd;
	f32 yaw_ccv;
	f32 yaw_csv;
	f32 pitch_ct;
	f32 pitch_cd;
	f32 pitch_ccv;
	f32 pitch_csv;
	f32 roll_ct;
	f32 roll_cd;
	f32 roll_ccv;
	f32 roll_csv;
	type_7 frustplane;
};

struct xCutsceneZbuffer
{
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
};

struct xEntSplineData
{
	s32 unknown;
};

struct RwV2d
{
	f32 x;
	f32 y;
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
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_2 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

type_130 buffer;
type_134 buffer;
type_116 assetTypeHandlers;
type_102 hackRadiusTable;
xJSPHeader* sTempJSP;
xJSPHeader sDummyEmptyJSP;
type_59 jsp_shadow_hack_textures;
s8** jsp_shadow_hack_end_textures;
type_111 animTable;
type_68 tableFuncList;
u32 s_sbFootSoundA;
u32 s_sbFootSoundB;
u32 s_scFootSoundA;
u32 s_scFootSoundB;
u32 s_patFootSoundA;
u32 s_patFootSoundB;
type_50 effectFuncList;
u32 gxAnimUseGrowAlloc;
type_71 xAnimDefaultBeforeEnter;
type_104 FindAssetCB;
type_77 TexCB;
type_86 jsp_shadow_hack_atomic_cb;
zGlobals globals;
type_96 ourGlobals;

void MovePoint_Unload(void* userdata);
void LightKit_Unload(void* userdata);
void Anim_Unload();
void* ATBL_Read(void* indata, u32* outsize);
void* FindAssetCB(u32 ID);
u32 soundEffectCB(u32 cbenum, xAnimActiveEffect* acteffect, void* object);
u32 dummyEffectCB();
void FootstepHackSceneEnter();
void TextureRW3_Unload(void* userdata);
void* RWTX_Read(void* indata, u32 insize, u32* outsize);
RwTexture* TexCB(RwTexture* texture, void* data);
void JSP_Unload(void* userdata);
void* JSP_Read(void* indata, u32 insize, u32* outsize);
RpAtomic* jsp_shadow_hack_atomic_cb(RpAtomic* atomic, void* data);
void BSP_Unload();
void* BSP_Read(void* indata, u32 insize, u32* outsize);
void Model_Unload(void* userdata);
void* Curve_Read(void* indata, u32 insize, u32* outsize);
void* Model_Read(u32 assetid, void* indata, u32 insize, u32* outsize);
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
void* ATBL_Read(void* indata, u32* outsize)
{
	u32 i;
	u32 j;
	u32 debugNum;
	u32 tmpsize;
	xAnimTable* table;
	xAnimState* astate;
	xAnimTransition* atran;
	u8* zaBytes;
	xAnimAssetTable* zaTbl;
	void** zaRaw;
	xAnimAssetFile* zaFile;
	xAnimAssetState* zaState;
	s32 k;
	xAnimFile** fList;
	type_66 constructor;
	s32 i;
	type_106 tmpstr;
	xAnimFile* foundFile;
	xAnimState* state;
	xAnimAssetEffect* zaEffect;
	xAnimEffect* effect;
}

// FindAssetCB__FUiPc
// Start address: 0x12a8c0
void* FindAssetCB(u32 ID)
{
	u32 size;
}

// soundEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x12a8e0
u32 soundEffectCB(u32 cbenum, xAnimActiveEffect* acteffect, void* object)
{
	u32 sndhandle;
	u32 vil_SID;
	s32 vil_result;
	xEnt* ent_tmp;
	zAnimFxSound* snd;
	u32 id;
	u32 newId;
	f32 volFactor;
	u32 footSelector;
}

// dummyEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x12ab50
u32 dummyEffectCB()
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
void* RWTX_Read(void* indata, u32 insize, u32* outsize)
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
void* JSP_Read(void* indata, u32 insize, u32* outsize)
{
	xJSPHeader* retjsp;
}

// jsp_shadow_hack_atomic_cb__FP8RpAtomicPv
// Start address: 0x12ae80
RpAtomic* jsp_shadow_hack_atomic_cb(RpAtomic* atomic, void* data)
{
	jsp_shadow_hack_atomic_context& context;
	s32 index;
	xClumpCollBSPTree* colltree;
	s32 material_index;
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
void* BSP_Read(void* indata, u32 insize, u32* outsize)
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
void* Curve_Read(void* indata, u32 insize, u32* outsize)
{
	xCurveAsset* curve_asset;
}

// Model_Read__FPvUiPvUiPUi
// Start address: 0x12b1c0
void* Model_Read(u32 assetid, void* indata, u32 insize, u32* outsize)
{
	RpAtomic* model;
	u32 i;
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

