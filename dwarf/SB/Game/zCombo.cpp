typedef struct xUpdateCullGroup;
typedef struct xLightKit;
typedef struct RxPipelineCluster;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct xModelInstance;
typedef struct RxNodeDefinition;
typedef struct RpWorld;
typedef struct xAnimTransitionList;
typedef struct RxPipelineRequiresCluster;
typedef enum RwFogType;
typedef struct xBound;
typedef struct RwResEntry;
typedef struct iFogParams;
typedef struct xAnimTable;
typedef struct jot;
typedef struct iColor_tag;
typedef struct xEntBoulder;
typedef struct RxPacket;
typedef struct basic_rect;
typedef struct RwRGBAReal;
typedef struct xEnt;
typedef struct zPlatFMRunTime;
typedef enum _tagPadState;
typedef struct _class_0;
typedef struct RwObjectHasFrame;
typedef struct xAnimTransition;
typedef struct xScene;
typedef struct xVec3;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMovePointAsset;
typedef struct xBase;
typedef struct render_context;
typedef struct zEntHangable;
typedef struct RwLinkList;
typedef struct xGlobals;
typedef struct xGridBound;
typedef struct xAnimState;
typedef struct RxPipelineNode;
typedef struct RpSector;
typedef struct xJSPHeader;
typedef struct _tagxPad;
typedef struct RwMatrixTag;
typedef struct xPortalAsset;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct RwLLLink;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xEntShadow;
typedef struct widget_chunk;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct split_tag;
typedef struct callback;
typedef struct xEntMotionOrbitData;
typedef struct xtextbox;
typedef struct _zEnv;
typedef struct tag_type;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef enum _enum_0;
typedef struct _tagPadAnalog;
typedef struct xClumpCollBSPTree;
typedef struct RxPipeline;
typedef struct _class_1;
typedef struct RxPipelineNodeParam;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct xUpdateCullMgr;
typedef struct xJSPNodeInfo;
typedef struct tri_data_0;
typedef struct xEnvAsset;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xLinkAsset;
typedef struct xQuat;
typedef struct xGroupAsset;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct widget;
typedef struct rxHeapBlockHeader;
typedef struct _tagiPad;
typedef struct RpInterpolator;
typedef struct motive;
typedef struct zUIFont;
typedef enum _enum_1;
typedef struct xAnimMultiFileBase;
typedef struct zUIAsset;
typedef struct xEntMechData;
typedef struct xEntDrive;
typedef struct xfont;
typedef struct xAnimEffect;
typedef struct xEntMotionSplineData;
typedef struct xEntCollis;
typedef struct zUIFontAsset;
typedef struct iEnv;
typedef struct ztextbox;
typedef struct substr;
typedef struct RpPolygon;
typedef struct _class_2;
typedef struct xAnimPlay;
typedef struct _zPortal;
typedef struct RpMaterialList;
typedef struct xVec4;
typedef struct xEntAsset;
typedef struct xCoef3;
typedef struct xSurface;
typedef struct zPlatform;
typedef struct RwSurfaceProperties;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xEntMotionMPData;
typedef struct zGlobals;
typedef struct xEntERData;
typedef struct xModelPool;
typedef union _class_3;
typedef struct _tagxRumble;
typedef struct xDynAsset;
typedef struct rxReq;
typedef struct xFFX;
typedef struct RpLight;
typedef struct zGlobalSettings;
typedef enum RxClusterValidityReq;
typedef struct zAssetPickupTable;
typedef struct zCutsceneMgr;
typedef struct _class_4;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct _class_5;
typedef enum RxNodeDefEditable;
typedef struct zLedgeGrabParams;
typedef struct RpMorphTarget;
typedef enum RxClusterValid;
typedef struct tri_data_1;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct xEntMotionMechData;
typedef struct xRot;
typedef struct xMovePoint;
typedef enum _zPlayerWallJumpState;
typedef struct xEntPenData;
typedef struct xCollis;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct asset_type;
typedef struct xShadowSimplePoly;
typedef struct _zUI;
typedef struct asset;
typedef struct RpMeshHeader;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xEnv;
typedef struct xMemPool;
typedef struct xCylinder;
typedef enum _enum_2;
typedef enum _tagRumbleType;
typedef struct zComboReward;
typedef struct xEntOrbitData;
typedef enum _zPlayerType;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpTriangle;
typedef struct analog_data;
typedef struct xClumpCollBSPVertInfo;
typedef struct color_type;
typedef struct xSpline3;
typedef struct xEntMotion;
typedef struct xLightKitLight;
typedef struct xPlatformAsset;
typedef struct motive_node;
typedef struct xEntMotionAsset;
typedef struct zLasso;
typedef struct xShadowSimpleCache;
typedef struct xClumpCollBSPTriangle;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct xEntFrame;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct RxOutputSpec;
typedef struct xBaseAsset;
typedef struct xMat3x3;
typedef struct _class_6;
typedef struct xEntSplineData;
typedef struct zPlayerCarryInfo;
typedef struct RxClusterRef;
typedef struct xModelTag;
typedef struct zPlayerSettings;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct zEnt;
typedef struct xEntMotionPenData;
typedef struct xCoef;
typedef struct _class_7;
typedef struct RxIoSpec;
typedef struct zJumpParam;
typedef union _class_8;
typedef enum RpWorldRenderOrder;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct xEntMPData;
typedef struct text_widget;
typedef struct xCamera;
typedef struct RwFrustumPlane;
typedef struct anim_coll_data;
typedef struct xVec2;
typedef struct xModelBucket;
typedef struct RwPlane;
typedef struct _class_9;
typedef struct xQCData;
typedef struct xTextAsset;
typedef struct xBBox;
typedef struct RxCluster;
typedef struct xEntMotionERData;

typedef void(*type_1)(xMemPool*, void*);
typedef void(*type_3)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_5)(void*);
typedef s32(*type_7)(RxNodeDefinition*);
typedef u32(*type_9)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_11)(RxNodeDefinition*);
typedef void(*type_12)(RwResEntry*);
typedef void(*type_16)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_19)(RwCamera*);
typedef xBase*(*type_20)(u32);
typedef s32(*type_21)(RxPipelineNode*);
typedef RwCamera*(*type_22)(RwCamera*);
typedef RwObjectHasFrame*(*type_23)(RwObjectHasFrame*);
typedef void(*type_26)(RxPipelineNode*);
typedef s8*(*type_28)(xBase*);
typedef void(*type_30)(jot&, xtextbox&, f32, f32);
typedef s8*(*type_32)(u32);
typedef s32(*type_33)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_34)(RpWorldSector*);
typedef void(*type_38)(jot&, xtextbox&, xtextbox&);
typedef u32(*type_42)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_48)(RxPipelineNode*, u32, u32, void*);
typedef u8(*type_49)(widget&, motive&, f32);
typedef s32(*type_52)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_56)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef u32(*type_57)(xAnimTransition*, xAnimSingle*, void*);
typedef u8(*type_62)(widget&, motive&, f32);
typedef void(*type_67)(xAnimState*, xAnimSingle*, void*);
typedef u32(*type_68)(void*, void*);
typedef RpClump*(*type_71)(RpClump*, void*);
typedef void(*type_75)(xAnimPlay*, xAnimState*);
typedef s32(*type_76)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_82)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_85)(xEnt*, xScene*, f32);
typedef void(*type_87)(xEnt*, xVec3*);
typedef void(*type_92)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_93)(widget&, motive&);
typedef RpAtomic*(*type_94)(RpAtomic*);
typedef void(*type_96)(xEnt*);

typedef xCollis type_0[18];
typedef xModelTag type_2[2];
typedef f32 type_4[3];
typedef xVec4 type_6[12];
typedef f32 type_8[2];
typedef f32 type_10[2];
typedef f32 type_13[2];
typedef zComboReward type_14[16];
typedef RxCluster type_15[1];
typedef xEnt* type_17[111];
typedef f32 type_18[2];
typedef u32 type_24[72];
typedef s8 type_25[4];
typedef xBase* type_27[72];
typedef s8 type_29[128];
typedef type_29 type_31[6];
typedef u8 type_35[14];
typedef xModelTag type_36[4];
typedef u8 type_37[4];
typedef u8 type_39[4];
typedef xModelInstance* type_40[14];
typedef s8 type_41[32];
typedef u16 type_43[4];
typedef RwFrustumPlane type_44[6];
typedef u16 type_45[2];
typedef f32 type_46[2];
typedef zUIFont* type_47[1];
typedef u16 type_50[2];
typedef f32 type_51[2];
typedef u8 type_53[4];
typedef RwV3d type_54[8];
typedef u8 type_55[3];
typedef u16 type_58[3];
typedef s8 type_59[16];
typedef f32 type_60[4];
typedef u8 type_61[22];
typedef u8 type_63[2];
typedef u8 type_64[22];
typedef xAnimMultiFileEntry type_65[1];
typedef RpLight* type_66[2];
typedef RwFrame* type_69[2];
typedef s8 type_70[16];
typedef ztextbox* type_72[5];
typedef xVec3 type_73[60];
typedef RwTexCoords* type_74[8];
typedef xVec3 type_77[3];
typedef xVec3 type_78[5];
typedef f32 type_79[22];
typedef s8* type_80[16];
typedef u8 type_81[5];
typedef f32 type_83[22];
typedef u8 type_84[2];
typedef u32 type_86[15];
typedef u16 type_88[3];
typedef u32 type_89[15];
typedef f32 type_90[12];
typedef u32 type_91[4];
typedef f32 type_95[12];
typedef f32 type_97[16];
typedef u32 type_98[15];
typedef f32 type_99[12];
typedef u8 type_100[3];
typedef f32 type_101[12];
typedef f32 type_102[12];
typedef analog_data type_103[2];
typedef f32 type_104[12];
typedef f32 type_105[4];
typedef u8 type_106[2];
typedef xVec3 type_107[4];
typedef RwTexCoords* type_108[8];
typedef u8 type_109[2];
typedef u32 type_110[2];
typedef f32 type_111[4];
typedef s8 type_112[32];
typedef u8 type_113[2];
typedef f32 type_114[6];
typedef s8 type_115[32];
typedef s8 type_116[128];
typedef u32 type_117[10];
typedef f32 type_118[3];
typedef f32 type_119[3];
typedef u16 type_120[2];

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	_class_1 anim_coll;
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
	type_34 renderCallBack;
	RxPipeline* pipeline;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_55 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_12 destroyNotify;
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

struct jot
{
	substr s;
	_class_6 flag;
	u16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xEntBoulder
{
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_15 clusters;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
	type_85 update;
	type_85 endUpdate;
	type_87 bupdate;
	type_92 move;
	type_96 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_16 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_90 tmrs;
	type_95 ttms;
	type_99 atms;
	type_101 dtms;
	type_102 vms;
	type_104 dss;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _class_0
{
	f32 left;
	f32 top;
	f32 right;
	f32 bottom;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_23 sync;
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
	type_20 resolvID;
	type_28 base2Name;
	type_32 id2Name;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_76 eventFunc;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	f32 r;
	f32 g;
	f32 b;
	f32 a;
};

struct zEntHangable
{
};

struct RwLinkList
{
	RwLLLink link;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_31 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_41 sceneStart;
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
	type_75 BeforeEnter;
	type_67 StateCallback;
	type_82 BeforeAnimMatrices;
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

struct RpSector
{
	s32 type;
};

struct xJSPHeader
{
	type_25 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct _tagxPad
{
	type_61 value;
	type_64 last_value;
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
	type_79 up_tmr;
	type_83 down_tmr;
	type_103 analog;
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

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_51 radius;
};

struct widget_chunk : xBase
{
	text_widget w;
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

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct callback
{
	type_30 render;
	type_38 layout_update;
	type_38 render_update;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	u32 flags;
	f32 line_space;
	f32 tab_stop;
	f32 left_indent;
	f32 right_indent;
	callback* cb;
	void* context;
	s8** texts;
	u32* text_sizes;
	u32 texts_size;
	substr text;
	u32 text_hash;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct tag_type
{
	substr name;
	type_56 parse_tag;
	type_56 reset_tag;
	void* context;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_71 callback;
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
	type_94 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct _class_1
{
	xVec3* verts;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_46 BilinearLerp;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	type_5 activateCB;
	type_5 deactivateCB;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_60 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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

struct widget
{
	_class_4 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum_2 activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_91 pad;
};

struct _tagiPad
{
	s32 port;
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

struct motive
{
	f32* value;
	f32 delta;
	f32 start_delta;
	f32 max_offset;
	f32 offset;
	f32 accel;
	type_62 fp_update;
	void* context;
	u8 inverse;
};

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	u16 uiFontFlags;
	u16 uiFontHackFlags;
	u32 text_id;
	f32 yscroll;
	u32 text_index;
	s8* text;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct zUIAsset : xEntAsset
{
	u32 uiFlags;
	type_120 dim;
	u32 textureID;
	type_8 uva;
	type_10 uvb;
	type_13 uvc;
	type_18 uvd;
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

struct xfont
{
	u32 id;
	f32 width;
	f32 height;
	f32 space;
	iColor_tag color;
	basic_rect clip;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_42 Callback;
};

struct xEntMotionSplineData
{
	s32 unknown;
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
	type_0 colls;
	type_3 post;
	type_9 depenq;
};

struct zUIFontAsset : zUIAsset
{
	u16 uiFontFlags;
	u8 mode;
	u8 fontID;
	u32 textAssetID;
	type_37 bcolor;
	type_39 color;
	type_43 inset;
	type_45 space;
	type_50 cdim;
	u32 max_height;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_66 light;
	type_69 light_frame;
	s32 memlvl;
};

struct ztextbox : xBase
{
	_class_3 flag;
	asset_type* asset;
	xtextbox tb;
	type_80 segments;
	u32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
};

struct substr
{
	s8* text;
	u32 size;
};

struct RpPolygon
{
	u16 matIndex;
	type_58 vertIndex;
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
	type_82 BeforeAnimMatrices;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_100 pad;
	void* moprops;
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

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_65 Files;
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

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

union _class_3
{
	u8 active;
	u8 dirty;
	u8 show_backdrop;
	u8 visible;
	u8 hack_invisible;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct rxReq
{
};

struct xFFX
{
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
	type_109 PowerUp;
	type_113 InitialPowerUp;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zAssetPickupTable
{
};

struct zCutsceneMgr
{
};

struct _class_4
{
	u8 visible;
	u8 enabled;
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
	type_108 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_74 texCoords;
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
	type_24 baseCount;
	type_27 baseList;
	_zEnv* zen;
};

struct _class_5
{
	u32 type;
	color_type color;
	u32 texture;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_73 tranTable;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_68 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_84 pad;
	f32 delay;
	xSpline3* spl;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
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

struct asset_type : xDynAsset
{
	u32 text;
	basic_rect bounds;
	u32 font;
	_class_7 size;
	_class_9 space;
	color_type color;
	_class_0 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	f32 max_height;
	_class_5 backdrop;
};

struct xShadowSimplePoly
{
	type_77 vert;
	xVec3 norm;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	u32 uiFlags;
	u32 uiButton;
	u16 preUpdateIndex;
	u16 updateIndex;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_1 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

enum _enum_2
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
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

struct zComboReward
{
	s32 reward;
	s8* textName;
	type_117 rewardList;
	u32 rewardNum;
	xTextAsset* textAsset;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct RpTriangle
{
	type_88 vertIndex;
	s16 matIndex;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct color_type
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_97 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xPlatformAsset
{
};

struct motive_node
{
	motive m;
	motive_node* next;
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
	type_78 lastRefs;
	type_81 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_107 corner;
};

struct xClumpCollBSPTriangle
{
	_class_8 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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
	type_2 BubbleWandTag;
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
	type_36 HangPawTag;
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
	type_86 Inv_PatsSock;
	type_89 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_98 Inv_LevelPickups;
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
	type_110 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_17 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_35 sb_model_indices;
	type_40 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct _class_6
{
	union
	{
		u8 invisible;
		u8 ethereal;
		u8 merge;
		u8 word_break;
		u8 word_end;
		u8 line_break;
		u8 stop;
		u8 tab;
	};
	union
	{
		u8 insert;
		u8 dynamic;
		u8 page_break;
		u8 stateful;
	};
	u16 dummy;
};

struct xEntSplineData
{
	s32 unknown;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_111 wt;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_114 MoveSpeed;
	type_118 AnimSneak;
	type_119 AnimWalk;
	type_4 AnimRun;
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
	type_53 talk_filter;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_19 beginUpdate;
	type_22 endUpdate;
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
	type_44 frustumPlanes;
	RwBBox frustumBoundBox;
	type_54 frustumCorners;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_106 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct xCoef
{
	type_105 a;
};

struct _class_7
{
	f32 width;
	f32 height;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

union _class_8
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_112 name;
	type_115 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RxNodeMethods
{
	type_52 nodeBody;
	type_7 nodeInit;
	type_11 nodeTerm;
	type_21 pipelineNodeInit;
	type_26 pipelineNodeTerm;
	type_33 pipelineNodeConfig;
	type_48 configMsgHandler;
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

struct text_widget : widget
{
	type_116 text;
	xtextbox tb;
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
	type_6 frustplane;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct anim_coll_data
{
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct _class_9
{
	f32 x;
	f32 y;
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

struct xTextAsset
{
	u32 len;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	f32 ext_tm;
	f32 ext_wait_tm;
	f32 ret_tm;
	f32 ret_wait_tm;
};

type_59 buffer;
type_70 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
xVec3 sUnderCamPos;
type_14 comboReward;
widget_chunk* comboHUD;
type_72 sHideText;
type_47 sHideUIF;
f32 comboMaxTime;
f32 comboDisplayTime;
s32 comboPending;
s32 comboLastCounter;
s32 comboCounter;
f32 comboTimer;
type_93 zComboHideMessage;
type_49 delay_motive_update;
zGlobals globals;

void zCombo_Update(f32 dt);
void zCombo_HideImmediately();
void zComboHideMessage(widget& w);
void zCombo_Add(s32 points);
void zCombo_Setup();
void fillCombo(zComboReward* r);

// zCombo_Update__Ff
// Start address: 0x3d4c30
void zCombo_Update(f32 dt)
{
	s32 toShow;
	zComboReward* c;
	s32 i;
	s32 i;
}

// zCombo_HideImmediately__Fv
// Start address: 0x3d5060
void zCombo_HideImmediately()
{
}

// zComboHideMessage__FRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x3d5080
void zComboHideMessage(widget& w)
{
}

// zCombo_Add__Fi
// Start address: 0x3d5090
void zCombo_Add(s32 points)
{
}

// zCombo_Setup__Fv
// Start address: 0x3d5100
void zCombo_Setup()
{
	s32 i;
	u32 id;
}

// fillCombo__FP12zComboReward
// Start address: 0x3d5380
void fillCombo(zComboReward* r)
{
	s32 rewardLeft;
	s32 j;
}

