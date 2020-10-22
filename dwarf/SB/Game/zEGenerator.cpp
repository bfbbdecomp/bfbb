typedef struct RxPipelineNode;
typedef struct zEGenerator;
typedef struct _tagxPad;
typedef struct xVec3;
typedef struct RpGeometry;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct RwObjectHasFrame;
typedef struct xScene;
typedef struct xAnimSingle;
typedef struct xAnimPlay;
typedef struct xQCData;
typedef struct xEntAsset;
typedef struct xEnvAsset;
typedef struct xAnimState;
typedef struct RwTexCoords;
typedef struct rxHeapFreeBlock;
typedef struct RwV3d;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xEnt;
typedef struct xEntMechData;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RxNodeDefinition;
typedef struct xBase;
typedef struct xEntMotionSplineData;
typedef struct _tagxRumble;
typedef struct RpMeshHeader;
typedef struct zPlatform;
typedef struct _zPortal;
typedef struct zScene;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct xQuat;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelInstance;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct xMovePointAsset;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct xUpdateCullEnt;
typedef struct zAssetPickupTable;
typedef struct RxHeap;
typedef struct xMat4x3;
typedef struct RwBBox;
typedef struct _class_0;
typedef struct RpTriangle;
typedef struct xGroupAsset;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct RpAtomic;
typedef struct zEntHangable;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct zLedgeGrabParams;
typedef struct rxHeapBlockHeader;
typedef struct xModelPool;
typedef struct xLinkAsset;
typedef struct xEntShadow;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimFile;
typedef struct zEGenAsset;
typedef enum _zPlayerWallJumpState;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xLightKit;
typedef struct RpClump;
typedef struct zEnt;
typedef struct xModelTag;
typedef struct xJSPNodeInfo;
typedef struct xVec4;
typedef enum _tagRumbleType;
typedef struct zLightning;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RwSurfaceProperties;
typedef struct xEntMotionMechData;
typedef struct xPortalAsset;
typedef struct RwMatrixTag;
typedef struct xEntBoulder;
typedef struct xBaseAsset;
typedef struct rxReq;
typedef struct xEntPenData;
typedef struct analog_data;
typedef enum RpWorldRenderOrder;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMaterial;
typedef struct _class_1;
typedef struct xBound;
typedef struct xVec2;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xMovePoint;
typedef struct RpSector;
typedef struct xJSPHeader;
typedef struct xEntOrbitData;
typedef struct zCheckPoint;
typedef struct xModelBucket;
typedef enum RxNodeDefEditable;
typedef struct zPlayerGlobals;
typedef enum RxClusterValid;
typedef struct xBBox;
typedef struct xPlatformAsset;
typedef struct xRot;
typedef struct zPlatFMRunTime;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct zFrag;
typedef struct xEntMotion;
typedef struct xUpdateCullMgr;
typedef struct xEntDrive;
typedef struct zPlayerCarryInfo;
typedef struct zFragAsset;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xEntMotionAsset;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zLasso;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct RwCamera;
typedef struct zShrapnelAsset;
typedef enum RwCameraProjection;
typedef struct RpWorld;
typedef struct _tagLightningLine;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xEntFrame;
typedef struct xGridBound;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xEntSplineData;
typedef struct xSerial;
typedef struct xEntMotionPenData;
typedef struct iFogParams;
typedef struct xShadowSimplePoly;
typedef struct RwSphere;
typedef struct RwLLLink;
typedef struct _tagLightningRot;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xEntMPData;
typedef struct xMat3x3;
typedef struct tri_data_0;
typedef struct xSpline3;
typedef struct tri_data_1;
typedef struct _class_2;
typedef struct xLightKitLight;
typedef struct RxClusterRef;
typedef struct _class_3;
typedef enum zFragType;
typedef struct RwObject;
typedef enum _tagPadState;
typedef struct xShadowSimpleCache;
typedef struct xCollis;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct RxIoSpec;
typedef struct xEntMotionERData;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xEnv;
typedef struct xGlobals;
typedef struct _tagLightningZeus;
typedef struct RxNodeMethods;
typedef struct RpPolygon;
typedef struct RwFrustumPlane;
typedef struct _class_4;
typedef struct RpMaterialList;
typedef struct RwPlane;
typedef struct _tagPadAnalog;
typedef struct RxCluster;
typedef struct xFFX;
typedef struct _tagiPad;
typedef struct RxPacket;
typedef struct xEntMotionOrbitData;
typedef struct _tagLightningAdd;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwRGBAReal;
typedef struct anim_coll_data;
typedef struct RwLinkList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int32(*type_1)(RxPipelineNode*);
typedef RwCamera*(*type_2)(RwCamera*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_5)(xAnimPlay*, xAnimState*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_7)(zEGenerator*, xScene*, float32);
typedef uint32(*type_8)(void*, void*);
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_12)(xEnt*, xScene*, float32, xEntCollis*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef void(*type_15)(void*);
typedef uint32(*type_16)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_17)(RxPipelineNode*, RxPipeline*);
typedef void(*type_18)(zEGenerator*, xScene*, float32);
typedef void(*type_19)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_22)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_23)(zEGenerator*);
typedef uint32(*type_27)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef int32(*type_31)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_32)(uint32);
typedef int32(*type_34)(RxNodeDefinition*);
typedef void(*type_36)(RxNodeDefinition*);
typedef int8*(*type_37)(xBase*);
typedef uint32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_40)(uint32);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_55)(zFrag*, zFragAsset*);
typedef RpWorldSector*(*type_58)(RpWorldSector*);
typedef int32(*type_59)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_63)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
typedef void(*type_80)(xEnt*, xScene*, float32);
typedef void(*type_86)(xEnt*, xVec3*);
typedef void(*type_88)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_90)(xEnt*);
typedef void(*type_94)(xMemPool*, void*);
typedef void(*type_95)(xAnimPlay*, xAnimState*);
typedef void(*type_102)(RwResEntry*);

typedef RwTexCoords* type_4[8];
typedef uint8 type_9[22];
typedef xCollis type_10[18];
typedef uint8 type_13[22];
typedef int8 type_20[16];
typedef xVec3 type_24[5];
typedef uint16 type_25[3];
typedef RwFrustumPlane type_26[6];
typedef uint8 type_28[5];
typedef int8 type_30[16];
typedef RwV3d type_33[8];
typedef xVec3 type_35[60];
typedef float32 type_39[22];
typedef float32 type_41[22];
typedef float32 type_42[2];
typedef uint32 type_43[15];
typedef uint32 type_44[15];
typedef xVec3 type_45[16];
typedef RwTexCoords* type_46[8];
typedef xVec3 type_47[16];
typedef uint32 type_48[72];
typedef float32 type_49[4];
typedef int8 type_51[4];
typedef uint32 type_52[15];
typedef xBase* type_53[72];
typedef analog_data type_54[2];
typedef float32 type_56[16];
typedef float32 type_57[12];
typedef float32 type_60[12];
typedef float32 type_61[12];
typedef float32 type_62[12];
typedef float32 type_64[12];
typedef float32 type_65[12];
typedef xVec4 type_66[12];
typedef uint8 type_67[2];
typedef uint32 type_68[4];
typedef uint32 type_69[2];
typedef xVec3 type_70[3];
typedef uint8 type_71[2];
typedef float32 type_72[6];
typedef uint8 type_73[2];
typedef float32 type_74[16];
typedef uint8 type_75[2];
typedef float32 type_76[3];
typedef float32 type_77[3];
typedef xModelTag type_78[2];
typedef float32 type_79[3];
typedef RpLight* type_81[2];
typedef zLightning* type_82[2];
typedef float32 type_83[16];
typedef RwFrame* type_84[2];
typedef xVec3 type_85[2];
typedef float32 type_87[2];
typedef xEnt* type_89[111];
typedef uint8 type_91[3];
typedef float32 type_92[2];
typedef float32 type_93[2];
typedef int8 type_96[128];
typedef float32 type_97[2];
typedef int8 type_98[32];
typedef uint16 type_99[3];
typedef int8 type_100[128][6];
typedef int8 type_101[32];
typedef uint8 type_103[2];
typedef xAnimMultiFileEntry type_104[1];
typedef xVec3 type_105[4];
typedef uint8 type_106[14];
typedef xModelTag type_107[4];
typedef int8 type_108[32];
typedef xModelInstance* type_109[14];
typedef uint32 type_110[2];
typedef float32 type_111[4];
typedef uint8 type_112[4];
typedef RxCluster type_113[1];

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

struct zEGenerator : zEnt
{
	zEGenAsset* zasset;
	uint16 flags;
	uint16 num_dsts;
	float32 tmr;
	xAnimFile* afile;
	xVec3 src_pos;
	xVec3 dst_pos;
	xVec3 dst_off;
	xBase* dst;
	zLightning* lfx[2];
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	_class_2 anim_coll;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct zCutsceneMgr
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct zEntHangable
{
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct zEGenAsset : xEntAsset
{
	xVec3 src_dpos;
	uint8 damage_type;
	uint8 flags;
	float32 ontime;
	uint32 onAnimID;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xEntBoulder
{
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct rxReq
{
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct RpSector
{
	int32 type;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xPlatformAsset
{
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct zPlatFMRunTime
{
	uint32 flags;
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
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

struct zFrag
{
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

struct zFragAsset
{
	zFragType type;
	uint32 id;
	uint32 parentID[2];
	float32 lifetime;
	float32 delay;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	void(*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagLightningLine
{
	float32 unused;
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

struct xEntSplineData
{
	int32 unknown;
};

struct xSerial
{
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	uint8 pad[2];
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagLightningRot
{
	float32 deg[16];
	float32 degrees;
	float32 height;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xSpline3
{
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_2
{
	xVec3* verts;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
		_class_4 tuv;
		tri_data_1 tri;
	};
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct _tagLightningZeus
{
	float32 normal_offset;
	float32 back_offset;
	float32 side_offset;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _class_4
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct xFFX
{
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct _tagLightningAdd
{
	uint32 type;
	float32 setup_degrees;
	float32 move_degrees;
	float32 rot_radius;
	xVec3* start;
	xVec3* end;
	int16 total_points;
	int16 end_points;
	float32 time;
	float32 arc_height;
	float32 thickness;
	iColor_tag color;
	float32 rand_radius;
	uint32 flags;
	float32 zeus_normal_offset;
	float32 zeus_back_offset;
	float32 zeus_side_offset;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

int8 buffer[16];
int8 buffer[16];
zGlobals globals;
void(*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*);
void(*zEGenerator_Render)(zEGenerator*);
int32(*zEGeneratorEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEGenerator_Move)(zEGenerator*, xScene*, float32);
void(*zEGenerator_Update)(zEGenerator*, xScene*, float32);

int32 zEGeneratorEventCB(xBase* to, uint32 toEvent, xBase* toParamWidget);
void zEGenerator_TurnOn(zEGenerator* egen);
void zEGenerator_Render(zEGenerator* egen);
void zEGenerator_Update(zEGenerator* egen, xScene* sc, float32 dt);
void zEGenerator_Move();
void zEGenerator_Reset(zEGenerator* egen);
void zEGenerator_Load(zEGenerator* ent, xSerial* s);
void zEGenerator_Save(zEGenerator* ent, xSerial* s);
void zEGenerator_Setup(zEGenerator* egen);
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset);
void zEGenerator_Init(void* egen, void* asset);

// zEGeneratorEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x131d30
int32 zEGeneratorEventCB(xBase* to, uint32 toEvent, xBase* toParamWidget)
{
	zEGenerator* egen;
	zShrapnelAsset* shrap;
	// Line 433, Address: 0x131d30, Func Offset: 0
	// Line 441, Address: 0x131d34, Func Offset: 0x4
	// Line 433, Address: 0x131d38, Func Offset: 0x8
	// Line 441, Address: 0x131d4c, Func Offset: 0x1c
	// Line 444, Address: 0x131de8, Func Offset: 0xb8
	// Line 445, Address: 0x131df0, Func Offset: 0xc0
	// Line 448, Address: 0x131df8, Func Offset: 0xc8
	// Line 449, Address: 0x131e50, Func Offset: 0x120
	// Line 452, Address: 0x131e58, Func Offset: 0x128
	// Line 453, Address: 0x131ec8, Func Offset: 0x198
	// Line 456, Address: 0x131ed0, Func Offset: 0x1a0
	// Line 457, Address: 0x131f98, Func Offset: 0x268
	// Line 461, Address: 0x131fa0, Func Offset: 0x270
	// Line 462, Address: 0x131fa8, Func Offset: 0x278
	// Line 466, Address: 0x131fb0, Func Offset: 0x280
	// Line 467, Address: 0x131fb8, Func Offset: 0x288
	// Line 470, Address: 0x131fc0, Func Offset: 0x290
	// Line 471, Address: 0x131fcc, Func Offset: 0x29c
	// Line 472, Address: 0x131fd0, Func Offset: 0x2a0
	// Line 473, Address: 0x131fd8, Func Offset: 0x2a8
	// Line 474, Address: 0x131ff0, Func Offset: 0x2c0
	// Line 477, Address: 0x131ff8, Func Offset: 0x2c8
	// Line 478, Address: 0x132004, Func Offset: 0x2d4
	// Line 480, Address: 0x132008, Func Offset: 0x2d8
	// Line 482, Address: 0x132010, Func Offset: 0x2e0
	// Line 483, Address: 0x132018, Func Offset: 0x2e8
	// Line 485, Address: 0x132020, Func Offset: 0x2f0
	// Line 486, Address: 0x132028, Func Offset: 0x2f8
	// Line 491, Address: 0x132030, Func Offset: 0x300
	// Line 492, Address: 0x132044, Func Offset: 0x314
	// Line 500, Address: 0x132058, Func Offset: 0x328
	// Line 499, Address: 0x132060, Func Offset: 0x330
	// Line 500, Address: 0x132064, Func Offset: 0x334
	// Func End, Address: 0x132078, Func Offset: 0x348
}

// zEGenerator_TurnOn__FP11zEGenerator
// Start address: 0x132080
void zEGenerator_TurnOn(zEGenerator* egen)
{
	zEGenAsset* zasset;
	uint16 itgt;
	uint16 imp;
	int32 i;
	xLinkAsset* link;
	xBase* b;
	int32 i;
	_tagLightningAdd add;
	// Line 241, Address: 0x132080, Func Offset: 0
	// Line 242, Address: 0x1320ac, Func Offset: 0x2c
	// Line 246, Address: 0x1320b8, Func Offset: 0x38
	// Line 244, Address: 0x1320bc, Func Offset: 0x3c
	// Line 246, Address: 0x1320c0, Func Offset: 0x40
	// Line 253, Address: 0x1320c8, Func Offset: 0x48
	// Line 254, Address: 0x1320dc, Func Offset: 0x5c
	// Line 256, Address: 0x1320e0, Func Offset: 0x60
	// Line 259, Address: 0x1320e8, Func Offset: 0x68
	// Line 260, Address: 0x13218c, Func Offset: 0x10c
	// Line 261, Address: 0x132198, Func Offset: 0x118
	// Line 262, Address: 0x1321a4, Func Offset: 0x124
	// Line 263, Address: 0x1321a8, Func Offset: 0x128
	// Line 261, Address: 0x1321b0, Func Offset: 0x130
	// Line 263, Address: 0x1321b4, Func Offset: 0x134
	// Line 261, Address: 0x1321bc, Func Offset: 0x13c
	// Line 263, Address: 0x1321c0, Func Offset: 0x140
	// Line 264, Address: 0x1321d0, Func Offset: 0x150
	// Line 266, Address: 0x1321d8, Func Offset: 0x158
	// Line 270, Address: 0x1321e0, Func Offset: 0x160
	// Line 266, Address: 0x1321e4, Func Offset: 0x164
	// Line 271, Address: 0x1321e8, Func Offset: 0x168
	// Line 272, Address: 0x1321ec, Func Offset: 0x16c
	// Line 274, Address: 0x1321f8, Func Offset: 0x178
	// Line 275, Address: 0x132200, Func Offset: 0x180
	// Line 276, Address: 0x132210, Func Offset: 0x190
	// Line 277, Address: 0x13221c, Func Offset: 0x19c
	// Line 279, Address: 0x132228, Func Offset: 0x1a8
	// Line 280, Address: 0x132248, Func Offset: 0x1c8
	// Line 282, Address: 0x132278, Func Offset: 0x1f8
	// Line 283, Address: 0x132280, Func Offset: 0x200
	// Line 285, Address: 0x13228c, Func Offset: 0x20c
	// Line 287, Address: 0x1322a4, Func Offset: 0x224
	// Line 288, Address: 0x1322ac, Func Offset: 0x22c
	// Line 290, Address: 0x1322c0, Func Offset: 0x240
	// Line 292, Address: 0x132364, Func Offset: 0x2e4
	// Line 296, Address: 0x13236c, Func Offset: 0x2ec
	// Line 297, Address: 0x132370, Func Offset: 0x2f0
	// Line 301, Address: 0x132378, Func Offset: 0x2f8
	// Line 308, Address: 0x13238c, Func Offset: 0x30c
	// Line 310, Address: 0x132390, Func Offset: 0x310
	// Line 312, Address: 0x13239c, Func Offset: 0x31c
	// Line 314, Address: 0x1323a4, Func Offset: 0x324
	// Line 315, Address: 0x1323ac, Func Offset: 0x32c
	// Line 317, Address: 0x1323b0, Func Offset: 0x330
	// Line 323, Address: 0x1323c0, Func Offset: 0x340
	// Line 327, Address: 0x1323d0, Func Offset: 0x350
	// Line 328, Address: 0x1323d8, Func Offset: 0x358
	// Line 330, Address: 0x1323e4, Func Offset: 0x364
	// Line 328, Address: 0x1323e8, Func Offset: 0x368
	// Line 331, Address: 0x1323ec, Func Offset: 0x36c
	// Line 328, Address: 0x1323f0, Func Offset: 0x370
	// Line 331, Address: 0x1323f4, Func Offset: 0x374
	// Line 329, Address: 0x1323f8, Func Offset: 0x378
	// Line 336, Address: 0x1323fc, Func Offset: 0x37c
	// Line 337, Address: 0x132404, Func Offset: 0x384
	// Line 338, Address: 0x132420, Func Offset: 0x3a0
	// Line 337, Address: 0x132424, Func Offset: 0x3a4
	// Line 329, Address: 0x132428, Func Offset: 0x3a8
	// Line 341, Address: 0x13242c, Func Offset: 0x3ac
	// Line 329, Address: 0x132430, Func Offset: 0x3b0
	// Line 338, Address: 0x132434, Func Offset: 0x3b4
	// Line 330, Address: 0x132438, Func Offset: 0x3b8
	// Line 339, Address: 0x13243c, Func Offset: 0x3bc
	// Line 331, Address: 0x132440, Func Offset: 0x3c0
	// Line 339, Address: 0x132444, Func Offset: 0x3c4
	// Line 336, Address: 0x132448, Func Offset: 0x3c8
	// Line 340, Address: 0x13244c, Func Offset: 0x3cc
	// Line 337, Address: 0x132450, Func Offset: 0x3d0
	// Line 340, Address: 0x132454, Func Offset: 0x3d4
	// Line 337, Address: 0x132458, Func Offset: 0x3d8
	// Line 342, Address: 0x13245c, Func Offset: 0x3dc
	// Line 337, Address: 0x132460, Func Offset: 0x3e0
	// Line 342, Address: 0x132464, Func Offset: 0x3e4
	// Line 337, Address: 0x132468, Func Offset: 0x3e8
	// Line 343, Address: 0x13246c, Func Offset: 0x3ec
	// Line 337, Address: 0x132470, Func Offset: 0x3f0
	// Line 348, Address: 0x132478, Func Offset: 0x3f8
	// Line 337, Address: 0x13247c, Func Offset: 0x3fc
	// Line 338, Address: 0x13249c, Func Offset: 0x41c
	// Line 339, Address: 0x1324a0, Func Offset: 0x420
	// Line 340, Address: 0x1324a4, Func Offset: 0x424
	// Line 341, Address: 0x1324a8, Func Offset: 0x428
	// Line 342, Address: 0x1324ac, Func Offset: 0x42c
	// Line 348, Address: 0x1324b0, Func Offset: 0x430
	// Line 353, Address: 0x1324bc, Func Offset: 0x43c
	// Line 354, Address: 0x1324c4, Func Offset: 0x444
	// Line 356, Address: 0x1324cc, Func Offset: 0x44c
	// Line 357, Address: 0x1324f0, Func Offset: 0x470
	// Line 358, Address: 0x132504, Func Offset: 0x484
	// Line 359, Address: 0x132510, Func Offset: 0x490
	// Line 364, Address: 0x132524, Func Offset: 0x4a4
	// Line 359, Address: 0x132528, Func Offset: 0x4a8
	// Line 364, Address: 0x13252c, Func Offset: 0x4ac
	// Line 359, Address: 0x132530, Func Offset: 0x4b0
	// Line 364, Address: 0x132534, Func Offset: 0x4b4
	// Line 365, Address: 0x13253c, Func Offset: 0x4bc
	// Line 364, Address: 0x132540, Func Offset: 0x4c0
	// Line 367, Address: 0x132544, Func Offset: 0x4c4
	// Line 364, Address: 0x132548, Func Offset: 0x4c8
	// Line 373, Address: 0x13254c, Func Offset: 0x4cc
	// Line 364, Address: 0x132550, Func Offset: 0x4d0
	// Line 359, Address: 0x132554, Func Offset: 0x4d4
	// Line 364, Address: 0x132558, Func Offset: 0x4d8
	// Line 366, Address: 0x132564, Func Offset: 0x4e4
	// Line 359, Address: 0x132568, Func Offset: 0x4e8
	// Line 366, Address: 0x13256c, Func Offset: 0x4ec
	// Line 364, Address: 0x132570, Func Offset: 0x4f0
	// Line 368, Address: 0x132574, Func Offset: 0x4f4
	// Line 364, Address: 0x132578, Func Offset: 0x4f8
	// Line 365, Address: 0x13259c, Func Offset: 0x51c
	// Line 366, Address: 0x1325a0, Func Offset: 0x520
	// Line 367, Address: 0x1325a4, Func Offset: 0x524
	// Line 373, Address: 0x1325a8, Func Offset: 0x528
	// Line 379, Address: 0x1325b4, Func Offset: 0x534
	// Func End, Address: 0x1325e4, Func Offset: 0x564
}

// zEGenerator_Render__FP11zEGenerator
// Start address: 0x1325f0
void zEGenerator_Render(zEGenerator* egen)
{
	// Line 228, Address: 0x1325f0, Func Offset: 0
	// Func End, Address: 0x1325f8, Func Offset: 0x8
}

// zEGenerator_Update__FP11zEGeneratorP6xScenef
// Start address: 0x132600
void zEGenerator_Update(zEGenerator* egen, xScene* sc, float32 dt)
{
	zEnt* ent;
	// Line 180, Address: 0x132600, Func Offset: 0
	// Line 182, Address: 0x13261c, Func Offset: 0x1c
	// Line 185, Address: 0x132624, Func Offset: 0x24
	// Line 187, Address: 0x1326d0, Func Offset: 0xd0
	// Line 189, Address: 0x1326d8, Func Offset: 0xd8
	// Line 194, Address: 0x1326e8, Func Offset: 0xe8
	// Line 197, Address: 0x1326f8, Func Offset: 0xf8
	// Line 198, Address: 0x13270c, Func Offset: 0x10c
	// Line 201, Address: 0x132718, Func Offset: 0x118
	// Line 204, Address: 0x1327bc, Func Offset: 0x1bc
	// Line 201, Address: 0x1327c0, Func Offset: 0x1c0
	// Line 206, Address: 0x1327c4, Func Offset: 0x1c4
	// Line 207, Address: 0x1327cc, Func Offset: 0x1cc
	// Line 208, Address: 0x1327d4, Func Offset: 0x1d4
	// Line 207, Address: 0x1327d8, Func Offset: 0x1d8
	// Line 209, Address: 0x1327dc, Func Offset: 0x1dc
	// Line 210, Address: 0x1327e4, Func Offset: 0x1e4
	// Line 211, Address: 0x1327ec, Func Offset: 0x1ec
	// Line 215, Address: 0x1327f0, Func Offset: 0x1f0
	// Line 216, Address: 0x132808, Func Offset: 0x208
	// Line 217, Address: 0x13280c, Func Offset: 0x20c
	// Line 218, Address: 0x132818, Func Offset: 0x218
	// Line 219, Address: 0x132870, Func Offset: 0x270
	// Line 221, Address: 0x13287c, Func Offset: 0x27c
	// Line 222, Address: 0x132880, Func Offset: 0x280
	// Func End, Address: 0x13289c, Func Offset: 0x29c
}

// zEGenerator_Move__FP11zEGeneratorP6xScenef
// Start address: 0x1328a0
void zEGenerator_Move()
{
	// Line 177, Address: 0x1328a0, Func Offset: 0
	// Func End, Address: 0x1328a8, Func Offset: 0x8
}

// zEGenerator_Reset__FP11zEGeneratorP6xScene
// Start address: 0x1328b0
void zEGenerator_Reset(zEGenerator* egen)
{
	zEGenAsset* zasset;
	// Line 151, Address: 0x1328b0, Func Offset: 0
	// Line 153, Address: 0x1328c8, Func Offset: 0x18
	// Line 155, Address: 0x1328d0, Func Offset: 0x20
	// Line 157, Address: 0x1328d4, Func Offset: 0x24
	// Line 159, Address: 0x1328dc, Func Offset: 0x2c
	// Line 160, Address: 0x1328ec, Func Offset: 0x3c
	// Line 161, Address: 0x1328f4, Func Offset: 0x44
	// Line 163, Address: 0x132900, Func Offset: 0x50
	// Line 166, Address: 0x132958, Func Offset: 0xa8
	// Line 168, Address: 0x132968, Func Offset: 0xb8
	// Line 169, Address: 0x132970, Func Offset: 0xc0
	// Line 171, Address: 0x132978, Func Offset: 0xc8
	// Line 172, Address: 0x132990, Func Offset: 0xe0
	// Func End, Address: 0x1329ac, Func Offset: 0xfc
}

// zEGenerator_Load__FP11zEGeneratorP7xSerial
// Start address: 0x1329b0
void zEGenerator_Load(zEGenerator* ent, xSerial* s)
{
	// Line 143, Address: 0x1329b0, Func Offset: 0
	// Func End, Address: 0x1329b8, Func Offset: 0x8
}

// zEGenerator_Save__FP11zEGeneratorP7xSerial
// Start address: 0x1329c0
void zEGenerator_Save(zEGenerator* ent, xSerial* s)
{
	// Line 124, Address: 0x1329c0, Func Offset: 0
	// Func End, Address: 0x1329c8, Func Offset: 0x8
}

// zEGenerator_Setup__FP11zEGeneratorP6xScene
// Start address: 0x1329d0
void zEGenerator_Setup(zEGenerator* egen)
{
	int32 i;
	xLinkAsset* la;
	xBase* b;
	// Line 93, Address: 0x1329d0, Func Offset: 0
	// Line 94, Address: 0x1329e8, Func Offset: 0x18
	// Line 96, Address: 0x1329f0, Func Offset: 0x20
	// Line 97, Address: 0x1329f4, Func Offset: 0x24
	// Line 98, Address: 0x132a08, Func Offset: 0x38
	// Line 99, Address: 0x132a10, Func Offset: 0x40
	// Line 100, Address: 0x132a18, Func Offset: 0x48
	// Line 101, Address: 0x132a30, Func Offset: 0x60
	// Line 102, Address: 0x132a40, Func Offset: 0x70
	// Line 103, Address: 0x132a50, Func Offset: 0x80
	// Line 104, Address: 0x132a60, Func Offset: 0x90
	// Line 109, Address: 0x132a6c, Func Offset: 0x9c
	// Line 110, Address: 0x132a88, Func Offset: 0xb8
	// Func End, Address: 0x132aa4, Func Offset: 0xd4
}

// zEGenerator_Init__FP11zEGeneratorP9xEntAsset
// Start address: 0x132ab0
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset)
{
	zEGenAsset* zasset;
	void* buf;
	uint32 size;
	// Line 41, Address: 0x132ab0, Func Offset: 0
	// Line 47, Address: 0x132ab4, Func Offset: 0x4
	// Line 41, Address: 0x132ab8, Func Offset: 0x8
	// Line 47, Address: 0x132abc, Func Offset: 0xc
	// Line 41, Address: 0x132ac0, Func Offset: 0x10
	// Line 47, Address: 0x132acc, Func Offset: 0x1c
	// Line 50, Address: 0x132ad4, Func Offset: 0x24
	// Line 52, Address: 0x132ad8, Func Offset: 0x28
	// Line 53, Address: 0x132ae4, Func Offset: 0x34
	// Line 55, Address: 0x132af0, Func Offset: 0x40
	// Line 59, Address: 0x132af8, Func Offset: 0x48
	// Line 60, Address: 0x132b04, Func Offset: 0x54
	// Line 61, Address: 0x132b10, Func Offset: 0x60
	// Line 62, Address: 0x132b1c, Func Offset: 0x6c
	// Line 64, Address: 0x132b28, Func Offset: 0x78
	// Line 67, Address: 0x132b30, Func Offset: 0x80
	// Line 70, Address: 0x132b38, Func Offset: 0x88
	// Line 72, Address: 0x132b44, Func Offset: 0x94
	// Line 73, Address: 0x132b4c, Func Offset: 0x9c
	// Line 76, Address: 0x132b5c, Func Offset: 0xac
	// Line 73, Address: 0x132b60, Func Offset: 0xb0
	// Line 76, Address: 0x132b64, Func Offset: 0xb4
	// Line 77, Address: 0x132b78, Func Offset: 0xc8
	// Line 78, Address: 0x132bc0, Func Offset: 0x110
	// Line 79, Address: 0x132bd4, Func Offset: 0x124
	// Line 89, Address: 0x132bf0, Func Offset: 0x140
	// Func End, Address: 0x132c04, Func Offset: 0x154
}

// zEGenerator_Init__FPvPv
// Start address: 0x132c10
void zEGenerator_Init(void* egen, void* asset)
{
	// Line 37, Address: 0x132c10, Func Offset: 0
	// Func End, Address: 0x132c18, Func Offset: 0x8
}

