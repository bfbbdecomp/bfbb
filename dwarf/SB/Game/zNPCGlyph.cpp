typedef struct RxPipelineNode;
typedef struct xEntOrbitData;
typedef struct RwObjectHasFrame;
typedef struct xScene;
typedef struct NPCGlyph;
typedef struct RpInterpolator;
typedef struct rxHeapFreeBlock;
typedef struct xAnimMultiFileBase;
typedef struct xAnimFile;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct zPlatFMRunTime;
typedef struct RwV2d;
typedef struct xVec3;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct xEntMotion;
typedef struct RxNodeDefinition;
typedef struct xAnimTable;
typedef struct xModelInstance;
typedef struct xPlatformAsset;
typedef enum _tagPadState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntMotionAsset;
typedef struct RpAtomic;
typedef struct xEntBoulder;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPTree;
typedef struct xSurface;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xMat3x3;
typedef struct xAnimActiveEffect;
typedef struct RpPolygon;
typedef struct RxPipelineNodeParam;
typedef struct xGlobals;
typedef struct xAnimPlay;
typedef struct zEntHangable;
typedef struct _class_0;
typedef struct xEnt;
typedef struct RxHeap;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct xQuat;
typedef struct _tagxPad;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xClumpCollBSPTriangle;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xModelPool;
typedef struct xEntSplineData;
typedef enum en_npcglyph;
typedef struct rxHeapBlockHeader;
typedef struct xMovePointAsset;
typedef struct xEntAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xEnvAsset;
typedef struct xEntMotionPenData;
typedef struct RpClump;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct _zPortal;
typedef struct xMat4x3;
typedef struct RpMorphTarget;
typedef struct zPlatform;
typedef struct xEntMPData;
typedef struct xBase;
typedef struct xVec4;
typedef struct xPortalAsset;
typedef struct RwSurfaceProperties;
typedef struct xEntFrame;
typedef struct RpWorld;
typedef struct RwMatrixTag;
typedef struct RpVertexNormal;
typedef struct _class_1;
typedef struct rxReq;
typedef struct xMovePoint;
typedef struct zJumpParam;
typedef enum RxClusterValidityReq;
typedef struct xSpline3;
typedef struct xEntMotionERData;
typedef struct RpMeshHeader;
typedef struct xEnv;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct xShadowSimplePoly;
typedef struct zCutsceneMgr;
typedef enum RxNodeDefEditable;
typedef struct xCollis;
typedef enum RxClusterValid;
typedef struct iEnv;
typedef struct xRot;
typedef struct _tagxRumble;
typedef struct RpTriangle;
typedef struct zGlobals;
typedef struct zEnt;
typedef struct zAssetPickupTable;
typedef struct xEntDrive;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct zGlobalSettings;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef enum RwCameraProjection;
typedef struct zPlayerLassoInfo;
typedef struct xBaseAsset;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct zScene;
typedef struct xShadowSimpleCache;
typedef struct zLedgeGrabParams;
typedef struct xAnimTransitionList;
typedef struct xEntMotionOrbitData;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xModelTag;
typedef struct xJSPHeader;
typedef struct RpLight;
typedef enum _zPlayerWallJumpState;
typedef struct RwSphere;
typedef enum _SDRenderState;
typedef enum RpWorldRenderOrder;
typedef struct _zEnv;
typedef struct xBound;
typedef struct RwTexDictionary;
typedef enum _tagRumbleType;
typedef struct RxOutputSpec;
typedef enum _zPlayerType;
typedef struct zLasso;
typedef struct xUpdateCullGroup;
typedef struct tri_data_0;
typedef struct xEntMechData;
typedef struct RwTexture;
typedef struct xEntMotionSplineData;
typedef struct xVec2;
typedef struct RpSector;
typedef struct RxClusterRef;
typedef struct xModelBucket;
typedef struct analog_data;
typedef struct xQCData;
typedef struct xEntShadow;
typedef struct RwCamera;
typedef struct xBBox;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct anim_coll_data;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RxNodeMethods;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct RwFrame;
typedef struct zPlayerCarryInfo;
typedef struct RwFrustumPlane;
typedef struct zPlayerSettings;
typedef struct RwPlane;
typedef struct xGridBound;
typedef struct xCamera;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xEntMotionMechData;
typedef struct xAnimMultiFileEntry;
typedef struct xEntPenData;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct _class_2;
typedef struct tri_data_1;
typedef struct RwLinkList;
typedef struct iFogParams;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int32(*type_1)(RxPipelineNode*);
typedef void(*type_3)(void*);
typedef uint32(*type_4)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef void(*type_10)(RxPipelineNode*);
typedef int32(*type_17)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_29)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_33)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_37)(RxNodeDefinition*);
typedef void(*type_38)(RxNodeDefinition*);
typedef RpClump*(*type_46)(RpClump*, void*);
typedef int32(*type_47)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_49)(xAnimPlay*, xAnimState*);
typedef void(*type_52)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_53)(uint32);
typedef uint32(*type_55)(void*, void*);
typedef int8*(*type_57)(xBase*);
typedef int8*(*type_60)(uint32);
typedef void(*type_62)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_64)(RpAtomic*);
typedef void(*type_65)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_66)(xEnt*, xVec3*);
typedef void(*type_67)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_69)(xEnt*);
typedef uint32(*type_74)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_79)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_90)(RpWorldSector*);
typedef void(*type_96)(xMemPool*, void*);
typedef void(*type_99)(RwResEntry*);

typedef float32 type_2[3];
typedef int8 type_7[16];
typedef float32 type_8[3];
typedef float32 type_9[2];
typedef xModelTag type_11[2];
typedef float32 type_12[3];
typedef float32 type_13[12];
typedef uint8 type_14[3];
typedef int8 type_15[16];
typedef float32 type_16[12];
typedef float32 type_19[2];
typedef float32 type_20[12];
typedef xEnt* type_21[111];
typedef float32 type_22[12];
typedef float32 type_23[4];
typedef uint16 type_24[3];
typedef float32 type_25[12];
typedef NPCGlyph type_26[16];
typedef RwFrustumPlane type_27[6];
typedef uint8 type_28[2];
typedef float32 type_30[12];
typedef xAnimMultiFileEntry type_31[1];
typedef int8 type_34[128];
typedef RwV3d type_35[8];
typedef int8 type_36[128][6];
typedef uint8 type_39[2];
typedef uint8 type_40[14];
typedef xModelTag type_41[4];
typedef NPCGlyph type_42[16];
typedef int8 type_43[32];
typedef int32 type_44[10];
typedef xModelInstance* type_45[14];
typedef RwTexCoords* type_48[8];
typedef uint8 type_50[4];
typedef NPCGlyph type_51[16];
typedef xVec3 type_54[3];
typedef uint8 type_56[22];
typedef NPCGlyph type_58[8];
typedef uint8 type_59[22];
typedef uint16 type_61[3];
typedef NPCGlyph type_63[16];
typedef float32 type_68[16];
typedef xVec3 type_70[5];
typedef NPCGlyph type_71[16];
typedef uint32 type_72[72];
typedef uint8 type_73[5];
typedef xVec3 type_75[60];
typedef int8 type_76[4];
typedef uint32 type_77[4];
typedef xBase* type_78[72];
typedef float32 type_80[22];
typedef NPCGlyph type_81[8];
typedef float32 type_82[22];
typedef RwTexCoords* type_83[8];
typedef xVec3 type_84[4];
typedef float32 type_85[4];
typedef uint32 type_86[15];
typedef uint32 type_87[15];
typedef int8 type_88[256];
typedef xModelInstance* type_89[10];
typedef uint8 type_91[2];
typedef uint32 type_92[15];
typedef NPCGlyph type_93[8];
typedef analog_data type_94[2];
typedef xCollis type_95[18];
typedef int8 type_97[32];
typedef int8 type_98[32];
typedef RpLight* type_100[2];
typedef RwFrame* type_101[2];
typedef int8* type_102[10];
typedef NPCGlyph type_103[1];
typedef uint8 type_104[2];
typedef uint32 type_105[2];
typedef xVec4 type_106[12];
typedef uint8 type_107[2];
typedef RxCluster type_108[1];
typedef float32 type_109[6];

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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
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

struct NPCGlyph
{
	en_npcglyph typ_glyph;
	int32 flg_glyph;
	xModelInstance* mdl_glyph;
	xVec3 pos_glyph;
	xVec3 vel_glyph;
	xMat3x3 rot_glyph;
	xVec3 scl_glyph;
	float32 tmr_glyph;

	void Timestep(float32 dt);
	void RotAddDelta(xMat3x3* mat_rot);
	void VelSet_Shiny();
	void RotSet(xVec3* ang, int32 doautospin);
	void ScaleSet(xVec3* scale);
	void PosSet(xVec3* pos);
	void Discard();
	void Enable(int32 ison);
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct xPlatformAsset
{
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xEntBoulder
{
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xSurface
{
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct zEntHangable
{
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xFFX
{
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xEntSplineData
{
	int32 unknown;
};

enum en_npcglyph
{
	NPC_GLYPH_UNKNOWN,
	NPC_GLYPH_SHINYONE,
	NPC_GLYPH_SHINYFIVE,
	NPC_GLYPH_SHINYTEN,
	NPC_GLYPH_SHINYFIFTY,
	NPC_GLYPH_SHINYHUNDRED,
	NPC_GLYPH_TALK,
	NPC_GLYPH_TALKOTHER,
	NPC_GLYPH_FRIEND,
	NPC_GLYPH_DAZED,
	NPC_GLYPH_NOMORE,
	NPC_GLYPH_FORCE = 0x7fffffff
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct _tagiPad
{
	int32 port;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct rxReq
{
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xSpline3
{
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct zCutsceneMgr
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
		_class_0 tuv;
		tri_data_1 tri;
	};
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct zAssetPickupTable
{
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum _SDRenderState
{
	SDRS_Unknown,
	SDRS_Default,
	SDRS_OpaqueModels,
	SDRS_AlphaModels,
	SDRS_Bubble,
	SDRS_Projectile,
	SDRS_Font,
	SDRS_HUD,
	SDRS_Particles,
	SDRS_Lightning,
	SDRS_Streak,
	SDRS_SkyBack,
	SDRS_Environment,
	SDRS_Fill,
	SDRS_NPCVisual,
	SDRS_OOBFade,
	SDRS_OOBPlayerZ,
	SDRS_OOBPlayerAlpha,
	SDRS_OOBHand,
	SDRS_Glare,
	SDRS_Newsfish,
	SDRS_CruiseHUD,
	SDRS_DiscoFloorGlow,
	SDRS_Total = 0xffffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct xEntMotionSplineData
{
	int32 unknown;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RpSector
{
	int32 type;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct anim_coll_data
{
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
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

struct _class_2
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

int8 buffer[16];
int8 buffer[16];
int8* g_strz_glyphmodel[10];
xModelInstance* g_glyphs_animModelInstRef[10];
int32 g_cnt_activeGlyphs[10];
NPCGlyph g_glyphs_talk[8];
NPCGlyph g_glyphs_talkOther[8];
NPCGlyph g_glyphs_friend[1];
NPCGlyph g_glyphs_dazed[8];
NPCGlyph g_glyphs_shinyOne[16];
NPCGlyph g_glyphs_shinyFive[16];
NPCGlyph g_glyphs_shinyTen[16];
NPCGlyph g_glyphs_shinyFifty[16];
NPCGlyph g_glyphs_shinyHundred[16];
xVec3 g_Y3;
zGlobals globals;
xVec3 g_O3;
xVec3 g_Onez;

void Timestep(float32 dt);
void RotAddDelta(xMat3x3* mat_rot);
void VelSet_Shiny();
void RotSet(xVec3* ang, int32 doautospin);
void ScaleSet(xVec3* scale);
void PosSet(xVec3* pos);
void Discard();
void Enable(int32 ison);
NPCGlyph* GLYF_Acquire(en_npcglyph type);
void zNPCCommon_Glyphs_RenderAll(int32 doOpaqueStuff);
int32 zNPCGlyph_TypeToList(en_npcglyph gtyp, NPCGlyph** glist);
void zNPCGlyph_Timestep(float32 dt);
void zNPCGlyph_ScenePostInit();
void zNPCGlyph_SceneReset();
void zNPCGlyph_SceneFinish();
void zNPCGlyph_ScenePrepare();
void zNPCGlyph_Shutdown();
void zNPCGlyph_Startup();

// Timestep__8NPCGlyphFf
// Start address: 0x3cd930
void NPCGlyph::Timestep(float32 dt)
{
	xVec3 pos_new;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 chkdist;
	xVec3 delta;
	float32 ds2_cam;
	// Line 724, Address: 0x3cd930, Func Offset: 0
	// Line 725, Address: 0x3cd944, Func Offset: 0x14
	// Line 728, Address: 0x3cd968, Func Offset: 0x38
	// Line 736, Address: 0x3cd990, Func Offset: 0x60
	// Line 737, Address: 0x3cd998, Func Offset: 0x68
	// Line 742, Address: 0x3cd9c4, Func Offset: 0x94
	// Line 744, Address: 0x3cd9f4, Func Offset: 0xc4
	// Line 745, Address: 0x3cd9fc, Func Offset: 0xcc
	// Line 749, Address: 0x3cda1c, Func Offset: 0xec
	// Line 751, Address: 0x3cda24, Func Offset: 0xf4
	// Line 753, Address: 0x3cda28, Func Offset: 0xf8
	// Line 758, Address: 0x3cda34, Func Offset: 0x104
	// Line 759, Address: 0x3cda3c, Func Offset: 0x10c
	// Line 760, Address: 0x3cda58, Func Offset: 0x128
	// Line 761, Address: 0x3cda60, Func Offset: 0x130
	// Line 762, Address: 0x3cda68, Func Offset: 0x138
	// Line 763, Address: 0x3cda84, Func Offset: 0x154
	// Line 762, Address: 0x3cda88, Func Offset: 0x158
	// Line 769, Address: 0x3cda8c, Func Offset: 0x15c
	// Line 763, Address: 0x3cda90, Func Offset: 0x160
	// Line 767, Address: 0x3cdacc, Func Offset: 0x19c
	// Line 768, Address: 0x3cdad0, Func Offset: 0x1a0
	// Line 767, Address: 0x3cdad4, Func Offset: 0x1a4
	// Line 768, Address: 0x3cdad8, Func Offset: 0x1a8
	// Line 769, Address: 0x3cdaec, Func Offset: 0x1bc
	// Line 771, Address: 0x3cdb0c, Func Offset: 0x1dc
	// Line 770, Address: 0x3cdb10, Func Offset: 0x1e0
	// Line 771, Address: 0x3cdb28, Func Offset: 0x1f8
	// Line 773, Address: 0x3cdb90, Func Offset: 0x260
	// Line 775, Address: 0x3cdba0, Func Offset: 0x270
	// Line 780, Address: 0x3cdba8, Func Offset: 0x278
	// Line 781, Address: 0x3cdbb8, Func Offset: 0x288
	// Line 782, Address: 0x3cdbd8, Func Offset: 0x2a8
	// Line 783, Address: 0x3cdc14, Func Offset: 0x2e4
	// Line 788, Address: 0x3cdc54, Func Offset: 0x324
	// Line 792, Address: 0x3cdc58, Func Offset: 0x328
	// Func End, Address: 0x3cdc6c, Func Offset: 0x33c
}

// RotAddDelta__8NPCGlyphFP7xMat3x3
// Start address: 0x3cdc70
void NPCGlyph::RotAddDelta(xMat3x3* mat_rot)
{
	// Line 707, Address: 0x3cdc70, Func Offset: 0
	// Line 711, Address: 0x3cdc80, Func Offset: 0x10
	// Line 713, Address: 0x3cdc90, Func Offset: 0x20
	// Line 715, Address: 0x3cdc98, Func Offset: 0x28
	// Line 717, Address: 0x3cdca4, Func Offset: 0x34
	// Line 720, Address: 0x3cdcb8, Func Offset: 0x48
	// Func End, Address: 0x3cdccc, Func Offset: 0x5c
}

// VelSet_Shiny__8NPCGlyphFv
// Start address: 0x3cdcd0
void NPCGlyph::VelSet_Shiny()
{
	xVec3 vel;
	xVec3* dest;
	xVec3* src;
	xVec3 vec;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 total_mult;
	// Line 655, Address: 0x3cdcd0, Func Offset: 0
	// Line 657, Address: 0x3cdcd4, Func Offset: 0x4
	// Line 655, Address: 0x3cdcd8, Func Offset: 0x8
	// Line 659, Address: 0x3cdcdc, Func Offset: 0xc
	// Line 655, Address: 0x3cdce0, Func Offset: 0x10
	// Line 657, Address: 0x3cdcec, Func Offset: 0x1c
	// Line 659, Address: 0x3cdcf0, Func Offset: 0x20
	// Line 668, Address: 0x3cdd10, Func Offset: 0x40
	// Line 674, Address: 0x3cdd14, Func Offset: 0x44
	// Line 668, Address: 0x3cdd18, Func Offset: 0x48
	// Line 674, Address: 0x3cdd1c, Func Offset: 0x4c
	// Line 671, Address: 0x3cdd20, Func Offset: 0x50
	// Line 672, Address: 0x3cdd30, Func Offset: 0x60
	// Line 673, Address: 0x3cdd40, Func Offset: 0x70
	// Line 674, Address: 0x3cdd4c, Func Offset: 0x7c
	// Line 676, Address: 0x3cdd54, Func Offset: 0x84
	// Line 687, Address: 0x3cdd58, Func Offset: 0x88
	// Line 676, Address: 0x3cdd5c, Func Offset: 0x8c
	// Line 687, Address: 0x3cdd60, Func Offset: 0x90
	// Line 676, Address: 0x3cdd68, Func Offset: 0x98
	// Line 687, Address: 0x3cdd6c, Func Offset: 0x9c
	// Line 676, Address: 0x3cdd70, Func Offset: 0xa0
	// Line 687, Address: 0x3cdd74, Func Offset: 0xa4
	// Line 692, Address: 0x3cdd7c, Func Offset: 0xac
	// Line 676, Address: 0x3cdd80, Func Offset: 0xb0
	// Line 692, Address: 0x3cdd8c, Func Offset: 0xbc
	// Line 676, Address: 0x3cdd90, Func Offset: 0xc0
	// Line 681, Address: 0x3cdd94, Func Offset: 0xc4
	// Line 687, Address: 0x3cddac, Func Offset: 0xdc
	// Line 681, Address: 0x3cddb0, Func Offset: 0xe0
	// Line 687, Address: 0x3cddd0, Func Offset: 0x100
	// Line 692, Address: 0x3cdddc, Func Offset: 0x10c
	// Line 693, Address: 0x3cdde8, Func Offset: 0x118
	// Line 694, Address: 0x3cddf0, Func Offset: 0x120
	// Line 695, Address: 0x3cde08, Func Offset: 0x138
	// Line 697, Address: 0x3cde10, Func Offset: 0x140
	// Line 701, Address: 0x3cde18, Func Offset: 0x148
	// Line 697, Address: 0x3cde1c, Func Offset: 0x14c
	// Line 701, Address: 0x3cde38, Func Offset: 0x168
	// Line 704, Address: 0x3cde98, Func Offset: 0x1c8
	// Func End, Address: 0x3cdeac, Func Offset: 0x1dc
}

// RotSet__8NPCGlyphFP5xVec3i
// Start address: 0x3cdeb0
void NPCGlyph::RotSet(xVec3* ang, int32 doautospin)
{
	xMat3x3 mat_rot;
	// Line 629, Address: 0x3cdeb0, Func Offset: 0
	// Line 630, Address: 0x3cdeb4, Func Offset: 0x4
	// Line 629, Address: 0x3cdeb8, Func Offset: 0x8
	// Line 630, Address: 0x3cdebc, Func Offset: 0xc
	// Line 629, Address: 0x3cdec0, Func Offset: 0x10
	// Line 630, Address: 0x3cdecc, Func Offset: 0x1c
	// Line 631, Address: 0x3cdeec, Func Offset: 0x3c
	// Line 632, Address: 0x3cdef4, Func Offset: 0x44
	// Line 634, Address: 0x3cdf30, Func Offset: 0x80
	// Func End, Address: 0x3cdf44, Func Offset: 0x94
}

// ScaleSet__8NPCGlyphFP5xVec3
// Start address: 0x3cdf50
void NPCGlyph::ScaleSet(xVec3* scale)
{
	xVec3 allone;
	// Line 616, Address: 0x3cdf50, Func Offset: 0
	// Line 617, Address: 0x3cdf58, Func Offset: 0x8
	// Line 618, Address: 0x3cdf70, Func Offset: 0x20
	// Line 619, Address: 0x3cdf78, Func Offset: 0x28
	// Line 621, Address: 0x3cdf80, Func Offset: 0x30
	// Line 623, Address: 0x3cdf98, Func Offset: 0x48
	// Line 621, Address: 0x3cdf9c, Func Offset: 0x4c
	// Line 622, Address: 0x3cdfa0, Func Offset: 0x50
	// Line 623, Address: 0x3cdfb8, Func Offset: 0x68
	// Line 624, Address: 0x3cdfc4, Func Offset: 0x74
	// Line 626, Address: 0x3cdfc8, Func Offset: 0x78
	// Func End, Address: 0x3cdfd0, Func Offset: 0x80
}

// PosSet__8NPCGlyphFP5xVec3
// Start address: 0x3cdfd0
void NPCGlyph::PosSet(xVec3* pos)
{
	// Line 593, Address: 0x3cdfd0, Func Offset: 0
	// Line 594, Address: 0x3cdff8, Func Offset: 0x28
	// Line 596, Address: 0x3ce024, Func Offset: 0x54
	// Line 597, Address: 0x3ce02c, Func Offset: 0x5c
	// Line 600, Address: 0x3ce048, Func Offset: 0x78
	// Func End, Address: 0x3ce050, Func Offset: 0x80
}

// Discard__8NPCGlyphFv
// Start address: 0x3ce050
void NPCGlyph::Discard()
{
	// Line 575, Address: 0x3ce050, Func Offset: 0
	// Line 579, Address: 0x3ce054, Func Offset: 0x4
	// Line 581, Address: 0x3ce064, Func Offset: 0x14
	// Line 582, Address: 0x3ce08c, Func Offset: 0x3c
	// Line 588, Address: 0x3ce0a0, Func Offset: 0x50
	// Func End, Address: 0x3ce0a8, Func Offset: 0x58
}

// Enable__8NPCGlyphFi
// Start address: 0x3ce0b0
void NPCGlyph::Enable(int32 ison)
{
	// Line 569, Address: 0x3ce0b0, Func Offset: 0
	// Line 570, Address: 0x3ce0c8, Func Offset: 0x18
	// Line 572, Address: 0x3ce0d8, Func Offset: 0x28
	// Func End, Address: 0x3ce0e0, Func Offset: 0x30
}

// GLYF_Acquire__F11en_npcglyph
// Start address: 0x3ce0e0
NPCGlyph* GLYF_Acquire(en_npcglyph type)
{
	NPCGlyph* da_glyph;
	int32 i;
	int32 cnt;
	NPCGlyph* list;
	// Line 456, Address: 0x3ce0e0, Func Offset: 0
	// Line 464, Address: 0x3ce0e8, Func Offset: 0x8
	// Line 456, Address: 0x3ce0ec, Func Offset: 0xc
	// Line 462, Address: 0x3ce0f8, Func Offset: 0x18
	// Line 464, Address: 0x3ce0fc, Func Offset: 0x1c
	// Line 466, Address: 0x3ce108, Func Offset: 0x28
	// Line 469, Address: 0x3ce120, Func Offset: 0x40
	// Line 471, Address: 0x3ce130, Func Offset: 0x50
	// Line 474, Address: 0x3ce140, Func Offset: 0x60
	// Line 479, Address: 0x3ce14c, Func Offset: 0x6c
	// Line 475, Address: 0x3ce158, Func Offset: 0x78
	// Line 479, Address: 0x3ce15c, Func Offset: 0x7c
	// Line 476, Address: 0x3ce160, Func Offset: 0x80
	// Line 474, Address: 0x3ce164, Func Offset: 0x84
	// Line 475, Address: 0x3ce1a8, Func Offset: 0xc8
	// Line 479, Address: 0x3ce1ac, Func Offset: 0xcc
	// Line 480, Address: 0x3ce1b4, Func Offset: 0xd4
	// Line 481, Address: 0x3ce1bc, Func Offset: 0xdc
	// Line 483, Address: 0x3ce1d0, Func Offset: 0xf0
	// Line 484, Address: 0x3ce1d8, Func Offset: 0xf8
	// Func End, Address: 0x3ce1ec, Func Offset: 0x10c
}

// zNPCCommon_Glyphs_RenderAll__Fi
// Start address: 0x3ce1f0
void zNPCCommon_Glyphs_RenderAll(int32 doOpaqueStuff)
{
	int32 i;
	int32 k;
	NPCGlyph* glyph;
	int32 cnt;
	NPCGlyph* list;
	_SDRenderState old_rendstat;
	// Line 386, Address: 0x3ce1f0, Func Offset: 0
	// Line 399, Address: 0x3ce21c, Func Offset: 0x2c
	// Line 400, Address: 0x3ce224, Func Offset: 0x34
	// Line 401, Address: 0x3ce240, Func Offset: 0x50
	// Line 404, Address: 0x3ce248, Func Offset: 0x58
	// Line 410, Address: 0x3ce258, Func Offset: 0x68
	// Line 412, Address: 0x3ce2a0, Func Offset: 0xb0
	// Line 416, Address: 0x3ce2e8, Func Offset: 0xf8
	// Line 417, Address: 0x3ce330, Func Offset: 0x140
	// Line 418, Address: 0x3ce340, Func Offset: 0x150
	// Line 419, Address: 0x3ce348, Func Offset: 0x158
	// Line 422, Address: 0x3ce358, Func Offset: 0x168
	// Line 423, Address: 0x3ce368, Func Offset: 0x178
	// Line 426, Address: 0x3ce37c, Func Offset: 0x18c
	// Line 432, Address: 0x3ce388, Func Offset: 0x198
	// Line 433, Address: 0x3ce398, Func Offset: 0x1a8
	// Line 434, Address: 0x3ce3a4, Func Offset: 0x1b4
	// Line 436, Address: 0x3ce3b0, Func Offset: 0x1c0
	// Line 439, Address: 0x3ce3bc, Func Offset: 0x1cc
	// Line 440, Address: 0x3ce420, Func Offset: 0x230
	// Line 444, Address: 0x3ce430, Func Offset: 0x240
	// Line 447, Address: 0x3ce440, Func Offset: 0x250
	// Line 450, Address: 0x3ce450, Func Offset: 0x260
	// Line 453, Address: 0x3ce458, Func Offset: 0x268
	// Func End, Address: 0x3ce484, Func Offset: 0x294
}

// zNPCGlyph_TypeToList__F11en_npcglyphPP8NPCGlyph
// Start address: 0x3ce490
int32 zNPCGlyph_TypeToList(en_npcglyph gtyp, NPCGlyph** glist)
{
	int32 cnt;
	// Line 331, Address: 0x3ce490, Func Offset: 0
	// Line 329, Address: 0x3ce494, Func Offset: 0x4
	// Line 331, Address: 0x3ce498, Func Offset: 0x8
	// Line 333, Address: 0x3ce4bc, Func Offset: 0x2c
	// Line 334, Address: 0x3ce4c0, Func Offset: 0x30
	// Line 336, Address: 0x3ce4cc, Func Offset: 0x3c
	// Line 337, Address: 0x3ce4d4, Func Offset: 0x44
	// Line 338, Address: 0x3ce4d8, Func Offset: 0x48
	// Line 340, Address: 0x3ce4e4, Func Offset: 0x54
	// Line 341, Address: 0x3ce4ec, Func Offset: 0x5c
	// Line 342, Address: 0x3ce4f0, Func Offset: 0x60
	// Line 344, Address: 0x3ce4fc, Func Offset: 0x6c
	// Line 345, Address: 0x3ce504, Func Offset: 0x74
	// Line 346, Address: 0x3ce508, Func Offset: 0x78
	// Line 348, Address: 0x3ce514, Func Offset: 0x84
	// Line 349, Address: 0x3ce51c, Func Offset: 0x8c
	// Line 350, Address: 0x3ce520, Func Offset: 0x90
	// Line 352, Address: 0x3ce52c, Func Offset: 0x9c
	// Line 355, Address: 0x3ce534, Func Offset: 0xa4
	// Line 356, Address: 0x3ce538, Func Offset: 0xa8
	// Line 358, Address: 0x3ce544, Func Offset: 0xb4
	// Line 359, Address: 0x3ce54c, Func Offset: 0xbc
	// Line 360, Address: 0x3ce550, Func Offset: 0xc0
	// Line 362, Address: 0x3ce55c, Func Offset: 0xcc
	// Line 363, Address: 0x3ce564, Func Offset: 0xd4
	// Line 364, Address: 0x3ce568, Func Offset: 0xd8
	// Line 366, Address: 0x3ce574, Func Offset: 0xe4
	// Line 367, Address: 0x3ce57c, Func Offset: 0xec
	// Line 368, Address: 0x3ce580, Func Offset: 0xf0
	// Line 369, Address: 0x3ce58c, Func Offset: 0xfc
	// Line 379, Address: 0x3ce590, Func Offset: 0x100
	// Func End, Address: 0x3ce598, Func Offset: 0x108
}

// zNPCGlyph_Timestep__Ff
// Start address: 0x3ce5a0
void zNPCGlyph_Timestep(float32 dt)
{
	int32 i;
	int32 k;
	int32 cnt;
	NPCGlyph* list;
	NPCGlyph* glyph;
	// Line 216, Address: 0x3ce5a0, Func Offset: 0
	// Line 225, Address: 0x3ce5b8, Func Offset: 0x18
	// Line 216, Address: 0x3ce5bc, Func Offset: 0x1c
	// Line 225, Address: 0x3ce5c8, Func Offset: 0x28
	// Line 216, Address: 0x3ce5cc, Func Offset: 0x2c
	// Line 225, Address: 0x3ce5d0, Func Offset: 0x30
	// Line 221, Address: 0x3ce5d8, Func Offset: 0x38
	// Line 225, Address: 0x3ce5dc, Func Offset: 0x3c
	// Line 227, Address: 0x3ce5e0, Func Offset: 0x40
	// Line 228, Address: 0x3ce5ec, Func Offset: 0x4c
	// Line 231, Address: 0x3ce600, Func Offset: 0x60
	// Line 235, Address: 0x3ce60c, Func Offset: 0x6c
	// Line 236, Address: 0x3ce618, Func Offset: 0x78
	// Line 238, Address: 0x3ce624, Func Offset: 0x84
	// Line 242, Address: 0x3ce630, Func Offset: 0x90
	// Line 244, Address: 0x3ce664, Func Offset: 0xc4
	// Line 246, Address: 0x3ce6b0, Func Offset: 0x110
	// Line 248, Address: 0x3ce6b8, Func Offset: 0x118
	// Line 246, Address: 0x3ce6bc, Func Offset: 0x11c
	// Line 248, Address: 0x3ce6c0, Func Offset: 0x120
	// Line 251, Address: 0x3ce6e4, Func Offset: 0x144
	// Line 252, Address: 0x3ce6fc, Func Offset: 0x15c
	// Line 253, Address: 0x3ce724, Func Offset: 0x184
	// Line 256, Address: 0x3ce728, Func Offset: 0x188
	// Line 257, Address: 0x3ce738, Func Offset: 0x198
	// Line 260, Address: 0x3ce740, Func Offset: 0x1a0
	// Line 264, Address: 0x3ce750, Func Offset: 0x1b0
	// Line 267, Address: 0x3ce760, Func Offset: 0x1c0
	// Func End, Address: 0x3ce78c, Func Offset: 0x1ec
}

// zNPCGlyph_ScenePostInit__Fv
// Start address: 0x3ce790
void zNPCGlyph_ScenePostInit()
{
	// Line 213, Address: 0x3ce790, Func Offset: 0
	// Func End, Address: 0x3ce798, Func Offset: 0x8
}

// zNPCGlyph_SceneReset__Fv
// Start address: 0x3ce7a0
void zNPCGlyph_SceneReset()
{
	// Line 206, Address: 0x3ce7a0, Func Offset: 0
	// Func End, Address: 0x3ce7a8, Func Offset: 0x8
}

// zNPCGlyph_SceneFinish__Fv
// Start address: 0x3ce7b0
void zNPCGlyph_SceneFinish()
{
	int32 i;
	NPCGlyph* glyph;
	int32 k;
	int32 cnt;
	NPCGlyph* list;
	// Line 178, Address: 0x3ce7b0, Func Offset: 0
	// Line 186, Address: 0x3ce7cc, Func Offset: 0x1c
	// Line 184, Address: 0x3ce7d0, Func Offset: 0x20
	// Line 186, Address: 0x3ce7d4, Func Offset: 0x24
	// Line 188, Address: 0x3ce7d8, Func Offset: 0x28
	// Line 189, Address: 0x3ce7e4, Func Offset: 0x34
	// Line 192, Address: 0x3ce7f8, Func Offset: 0x48
	// Line 193, Address: 0x3ce808, Func Offset: 0x58
	// Line 194, Address: 0x3ce814, Func Offset: 0x64
	// Line 195, Address: 0x3ce838, Func Offset: 0x88
	// Line 194, Address: 0x3ce840, Func Offset: 0x90
	// Line 195, Address: 0x3ce884, Func Offset: 0xd4
	// Line 196, Address: 0x3ce88c, Func Offset: 0xdc
	// Line 201, Address: 0x3ce8a0, Func Offset: 0xf0
	// Func End, Address: 0x3ce8c0, Func Offset: 0x110
}

// zNPCGlyph_ScenePrepare__Fv
// Start address: 0x3ce8c0
void zNPCGlyph_ScenePrepare()
{
	RpAtomic* mdl_raw;
	NPCGlyph* glyph;
	uint32 aid;
	int32 i;
	int32 k;
	int32 cnt;
	NPCGlyph* list;
	// Line 125, Address: 0x3ce8c0, Func Offset: 0
	// Line 148, Address: 0x3ce8c4, Func Offset: 0x4
	// Line 125, Address: 0x3ce8c8, Func Offset: 0x8
	// Line 148, Address: 0x3ce8cc, Func Offset: 0xc
	// Line 125, Address: 0x3ce8d0, Func Offset: 0x10
	// Line 148, Address: 0x3ce8d4, Func Offset: 0x14
	// Line 125, Address: 0x3ce8d8, Func Offset: 0x18
	// Line 133, Address: 0x3ce8f8, Func Offset: 0x38
	// Line 148, Address: 0x3ce900, Func Offset: 0x40
	// Line 151, Address: 0x3ce920, Func Offset: 0x60
	// Line 154, Address: 0x3ce938, Func Offset: 0x78
	// Line 155, Address: 0x3ce944, Func Offset: 0x84
	// Line 160, Address: 0x3ce958, Func Offset: 0x98
	// Line 161, Address: 0x3ce964, Func Offset: 0xa4
	// Line 163, Address: 0x3ce970, Func Offset: 0xb0
	// Line 164, Address: 0x3ce984, Func Offset: 0xc4
	// Line 168, Address: 0x3ce988, Func Offset: 0xc8
	// Line 169, Address: 0x3ce998, Func Offset: 0xd8
	// Line 170, Address: 0x3ce99c, Func Offset: 0xdc
	// Line 171, Address: 0x3cea48, Func Offset: 0x188
	// Line 170, Address: 0x3cea4c, Func Offset: 0x18c
	// Line 171, Address: 0x3cea50, Func Offset: 0x190
	// Line 170, Address: 0x3cea54, Func Offset: 0x194
	// Line 171, Address: 0x3cea98, Func Offset: 0x1d8
	// Line 172, Address: 0x3ceaa0, Func Offset: 0x1e0
	// Line 175, Address: 0x3ceab0, Func Offset: 0x1f0
	// Func End, Address: 0x3ceae0, Func Offset: 0x220
}

// zNPCGlyph_Shutdown__Fv
// Start address: 0x3ceae0
void zNPCGlyph_Shutdown()
{
	// Line 122, Address: 0x3ceae0, Func Offset: 0
	// Func End, Address: 0x3ceae8, Func Offset: 0x8
}

// zNPCGlyph_Startup__Fv
// Start address: 0x3ceaf0
void zNPCGlyph_Startup()
{
	// Line 117, Address: 0x3ceaf0, Func Offset: 0
	// Func End, Address: 0x3ceaf8, Func Offset: 0x8
}

