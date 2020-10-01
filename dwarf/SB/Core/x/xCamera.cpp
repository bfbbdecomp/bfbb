typedef struct xCollis;
typedef struct xEnt;
typedef struct RpInterpolator;
typedef struct RxHeap;
typedef struct xModelInstance;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xUpdateCullEnt;
typedef struct _class_0;
typedef struct RxPipelineNode;
typedef struct xAnimTransitionList;
typedef struct zPlayerSettings;
typedef struct xBase;
typedef struct xQuat;
typedef struct xVec3;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct _tagxRumble;
typedef struct xAnimTable;
typedef struct zEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct xUpdateCullGroup;
typedef struct rxHeapBlockHeader;
typedef struct xEnv;
typedef struct xCamera;
typedef struct xAnimTransition;
typedef struct xEntCollis;
typedef struct RpPolygon;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntAsset;
typedef struct cameraFX;
typedef struct RpMaterialList;
typedef struct xBaseAsset;
typedef struct xSweptSphere;
typedef struct xFFX;
typedef struct xJSPNodeInfo;
typedef struct xAnimState;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct zJumpParam;
typedef struct xBinaryCamera;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct _zEnv;
typedef struct xEntBoulder;
typedef enum _tagPadState;
typedef struct xClumpCollBSPBranchNode;
typedef struct zEntHangable;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct xEntFrame;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct RpClump;
typedef struct xMat4x3;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xGlobals;
typedef struct rxReq;
typedef struct RpGeometry;
typedef struct zPlatform;
typedef struct xAnimSingle;
typedef struct RpWorldSector;
typedef struct xEnvAsset;
typedef struct RwRaster;
typedef struct xModelPool;
typedef struct xRay3;
typedef enum RxClusterValidityReq;
typedef struct _tagxPad;
typedef struct xQCData;
typedef struct zCutsceneMgr;
typedef struct RpMorphTarget;
typedef struct xJSPHeader;
typedef struct xShadowSimplePoly;
typedef struct xBound;
typedef struct xAnimMultiFileBase;
typedef struct zAssetPickupTable;
typedef struct RpVertexNormal;
typedef enum RxNodeDefEditable;
typedef struct _tagPadAnalog;
typedef enum RxClusterValid;
typedef struct xGroupAsset;
typedef struct rxHeapFreeBlock;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct xRot;
typedef struct xAnimEffect;
typedef struct RpMeshHeader;
typedef struct xEntBoulderAsset;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xLightKit;
typedef struct xScene;
typedef struct xLightKitLight;
typedef enum rxEmbeddedPacketState;
typedef struct xBBox;
typedef struct xSphere;
typedef struct xGrid;
typedef struct RpWorld;
typedef struct xShadowSimpleCache;
typedef struct tri_data_0;
typedef enum RwCameraProjection;
typedef struct xAnimMultiFile;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimPlay;
typedef struct RwCamera;
typedef struct RpTriangle;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpLight;
typedef struct zLasso;
typedef struct xGridBound;
typedef struct iEnv;
typedef struct RwSphere;
typedef struct zGlobals;
typedef struct RwTexDictionary;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct xPortalAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct xEntShadow;
typedef struct xLinkAsset;
typedef enum RpWorldRenderOrder;
typedef struct cameraFXTableEntry;
typedef struct RwObject;
typedef struct analog_data;
typedef struct RwLLLink;
typedef struct zLedgeGrabParams;
typedef struct RwFrame;
typedef struct RxIoSpec;
typedef struct anim_coll_data;
typedef struct RwTexture;
typedef struct xMemPool;
typedef struct RpSector;
typedef struct cameraFXZoom;
typedef enum _zPlayerWallJumpState;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xSurface;
typedef struct zone_data;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xEntDrive;
typedef enum _tagRumbleType;
typedef struct RwPlane;
typedef enum _zPlayerType;
typedef struct xModelBucket;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct _zPortal;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct config;
typedef struct xModelTag;
typedef struct xClumpCollBSPTriangle;
typedef struct RwRGBAReal;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RwObjectHasFrame;
typedef struct cameraFXShake;
typedef struct RwLinkList;
typedef struct zPlayerCarryInfo;
typedef struct iFogParams;
typedef struct RwV2d;
typedef struct tri_data_1;
typedef union _class_2;
typedef union xiMat4x3Union;
typedef struct xVec2;

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_5)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_8)(void*);
typedef s32(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_11)(u32);
typedef s32(*type_13)(RxNodeDefinition*);
typedef s8*(*type_15)(xBase*);
typedef void(*type_19)(RxNodeDefinition*);
typedef s8*(*type_20)(u32);
typedef s32(*type_23)(RxPipelineNode*);
typedef void(*type_24)(RxPipelineNode*);
typedef s32(*type_26)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_28)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef u32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_41)(xEnt*, xScene*, f32);
typedef void(*type_42)(xEnt*, xVec3*);
typedef void(*type_44)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_46)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_48)(xEnt*);
typedef void(*type_52)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_53)(RpAtomic*);
typedef u32(*type_54)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef u32(*type_56)(void*, void*);
typedef void(*type_58)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_61)(cameraFX*, f32, xMat4x3*, xMat4x3*);
typedef void(*type_63)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(cameraFX*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef void(*type_68)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef void(*type_69)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RwCamera*(*type_71)(RwCamera*);
typedef void(*type_74)(xMemPool*, void*);
typedef RpWorldSector*(*type_78)(RpWorldSector*);
typedef void(*type_83)(RwResEntry*);
typedef RwObjectHasFrame*(*type_94)(RwObjectHasFrame*);

typedef f32 type_1[2];
typedef u8 type_2[2];
typedef u32 type_3[2];
typedef RwFrustumPlane type_4[6];
typedef u8 type_6[2];
typedef f32 type_7[6];
typedef f32 type_10[3];
typedef RwV3d type_12[8];
typedef u32 type_14[72];
typedef f32 type_16[3];
typedef xModelTag type_17[2];
typedef u16 type_18[3];
typedef xBase* type_21[72];
typedef f32 type_22[3];
typedef u8 type_25[2];
typedef xEnt* type_27[111];
typedef xVec3 type_30[3];
typedef s8 type_31[4];
typedef s8 type_32[128];
typedef type_32 type_33[6];
typedef RwTexCoords* type_34[8];
typedef f32 type_35[2];
typedef u8 type_36[14];
typedef xModelTag type_37[4];
typedef s8 type_39[32];
typedef xModelInstance* type_40[14];
typedef f32 type_43[16];
typedef cameraFX type_45[10];
typedef u8 type_47[2];
typedef xAnimMultiFileEntry type_49[1];
typedef u8 type_50[4];
typedef u16 type_51[3];
typedef u32 type_55[4];
typedef u8 type_57[22];
typedef xVec4 type_59[12];
typedef u8 type_60[22];
typedef xVec3 type_62[4];
typedef RpLight* type_65[2];
typedef RwFrame* type_66[2];
typedef RwTexCoords* type_70[8];
typedef xVec3 type_72[60];
typedef u8 type_73[3];
typedef xCollis type_75[18];
typedef f32 type_76[22];
typedef u8 type_77[3];
typedef s8 type_79[32];
typedef f32 type_80[22];
typedef f32 type_81[4];
typedef s8 type_82[32];
typedef u32 type_84[15];
typedef s8 type_85[16];
typedef u32 type_86[15];
typedef u32 type_87[15];
typedef xVec3 type_88[5];
typedef s8 type_89[16];
typedef RxCluster type_90[1];
typedef u8 type_91[5];
typedef cameraFXTableEntry type_92[3];
typedef analog_data type_93[2];
typedef f32 type_95[4];

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
	type_41 update;
	type_41 endUpdate;
	type_42 bupdate;
	type_46 move;
	type_48 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_58 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_56 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct _class_0
{
	xVec3* verts;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_7 MoveSpeed;
	type_10 AnimSneak;
	type_16 AnimWalk;
	type_22 AnimRun;
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
	type_50 talk_filter;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_55 pad;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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
	type_59 frustplane;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	type_75 colls;
	type_44 post;
	type_54 depenq;
};

struct RpPolygon
{
	u16 matIndex;
	type_18 vertIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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

struct cameraFX
{
	s32 type;
	s32 flags;
	f32 elapsedTime;
	f32 maxTime;
	union
	{
		cameraFXShake shake;
		cameraFXZoom zoom;
	};
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xSweptSphere
{
	xVec3 start;
	xVec3 end;
	f32 radius;
	f32 dist;
	xiMat4x3Union basis;
	xiMat4x3Union invbasis;
	xBox box;
	xQCData qcd;
	f32 boxsize;
	f32 curdist;
	xVec3 contact;
	xVec3 polynorm;
	u32 oid;
	void* optr;
	xModelInstance* mptr;
	s32 hitIt;
	xVec3 worldPos;
	xVec3 worldContact;
	xVec3 worldNormal;
	xVec3 worldTangent;
	xVec3 worldPolynorm;
};

struct xFFX
{
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	type_63 BeforeEnter;
	type_52 StateCallback;
	type_69 BeforeAnimMatrices;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xBinaryCamera
{
	config cfg;
	xCamera* camera;
	xQuat cam_dir;
	xVec3* s1;
	xVec3* s2;
	f32 s2_radius;
	xVec2 stick_offset;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xEntBoulder : xEnt
{
	xEntBoulderAsset* basset;
	xShadowSimpleCache simpShadow_embedded;
	xEntShadow entShadow_embedded;
	xVec3 localCenter;
	xVec3 vel;
	xVec3 rotVec;
	xVec3 force;
	xVec3 instForce;
	f32 angVel;
	f32 timeToLive;
	s32 hitpoints;
	f32 lastRolling;
	u32 rollingID;
	u8 collis_chk;
	u8 collis_pen;
	type_25 pad1;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct zEntHangable
{
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_53 renderCallBack;
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
	type_47 NumAnims;
	void** RawData;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_29 callback;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_33 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_39 sceneStart;
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

struct rxReq
{
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
	type_70 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct zPlatform
{
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_35 BilinearLerp;
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

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_34 texCoords;
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxPad
{
	type_57 value;
	type_60 last_value;
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
	type_76 up_tmr;
	type_80 down_tmr;
	type_93 analog;
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

struct zCutsceneMgr
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xJSPHeader
{
	type_31 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xShadowSimplePoly
{
	type_30 vert;
	xVec3 norm;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_77 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct zAssetPickupTable
{
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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
	type_8 activateCB;
	type_8 deactivateCB;
};

struct _tagiPad
{
	s32 port;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_28 Callback;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xEntBoulderAsset
{
	f32 gravity;
	f32 mass;
	f32 bounce;
	f32 friction;
	f32 statFric;
	f32 maxVel;
	f32 maxAngVel;
	f32 stickiness;
	f32 bounceDamp;
	u32 flags;
	f32 killtimer;
	u32 hitpoints;
	u32 soundID;
	f32 volume;
	f32 minSoundVel;
	f32 maxSoundVel;
	f32 innerRadius;
	f32 outerRadius;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_83 destroyNotify;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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
	type_11 resolvID;
	type_15 base2Name;
	type_20 id2Name;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_43 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xGrid
{
	u8 ingrid_id;
	type_73 pad;
	u16 nx;
	u16 nz;
	f32 minx;
	f32 minz;
	f32 maxx;
	f32 maxz;
	f32 csizex;
	f32 csizez;
	f32 inv_csizex;
	f32 inv_csizez;
	f32 maxr;
	xGridBound** cells;
	xGridBound* other;
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
	type_78 renderCallBack;
	RxPipeline* pipeline;
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
	type_62 corner;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_49 Files;
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
	type_69 BeforeAnimMatrices;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_67 beginUpdate;
	type_71 endUpdate;
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
	type_4 frustumPlanes;
	RwBBox frustumBoundBox;
	type_12 frustumCorners;
};

struct RpTriangle
{
	type_51 vertIndex;
	s16 matIndex;
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
	type_88 lastRefs;
	type_91 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_66 light_frame;
	s32 memlvl;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_2 PowerUp;
	type_6 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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
	type_14 baseCount;
	type_21 baseList;
	_zEnv* zen;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_1 radius;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_81 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct cameraFXTableEntry
{
	s32 type;
	type_61 func;
	type_64 funcKill;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_72 tranTable;
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
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct anim_coll_data
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_79 name;
	type_82 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_74 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RpSector
{
	s32 type;
};

struct cameraFXZoom
{
	f32 holdTime;
	f32 vel;
	f32 accel;
	f32 distance;
	u32 mode;
	f32 velCur;
	f32 distanceCur;
	f32 holdTimeCur;
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
	type_9 nodeBody;
	type_13 nodeInit;
	type_19 nodeTerm;
	type_23 pipelineNodeInit;
	type_24 pipelineNodeTerm;
	type_26 pipelineNodeConfig;
	type_5 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xSurface
{
};

struct zone_data
{
	f32 distance;
	f32 height;
	f32 height_focus;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_90 clusters;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct config
{
	zone_data zone_rest;
	zone_data zone_above;
	zone_data zone_below;
	f32 move_speed;
	f32 turn_speed;
	f32 stick_speed;
	f32 stick_yaw_vel;
	f32 max_yaw_vel;
	f32 margin_angle;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_95 wt;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	type_17 BubbleWandTag;
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
	type_37 HangPawTag;
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
	type_84 Inv_PatsSock;
	type_86 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_87 Inv_LevelPickups;
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
	type_3 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_27 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_36 sb_model_indices;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_94 sync;
};

struct cameraFXShake
{
	f32 magnitude;
	xVec3 dir;
	f32 cycleTime;
	f32 cycleMax;
	f32 dampen;
	f32 dampenRate;
	f32 rotate_magnitude;
	f32 radius;
	xVec3* epicenterP;
	xVec3 epicenter;
	xVec3* player;
};

struct RwLinkList
{
	RwLLLink link;
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

struct RwV2d
{
	f32 x;
	f32 y;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

union xiMat4x3Union
{
	xMat4x3 xm;
	RwMatrixTag im;
};

struct xVec2
{
	f32 x;
	f32 y;
};

type_85 buffer;
type_89 buffer;
s32 sCamCollis;
s32 xcam_collis_owner_disable;
s32 xcam_do_collis;
f32 xcam_collis_radius;
f32 xcam_collis_stiffness;
RpAtomic* sInvisWallHack;
s32 s_nestlevel;
f32 gCameraLastFov;
xMat4x3 sCameraFXMatOld;
type_92 sCameraFXTable;
type_45 sCameraFX;
zGlobals globals;
xVec3 m_UnitAxisX;
xMat4x3 g_I3;
type_68 SweptSphereHitsCameraEnt;
xGrid colls_oso_grid;
xGrid colls_grid;

void update(xBinaryCamera* this, f32 dt);
void stop(xBinaryCamera* this);
void start(xBinaryCamera* this, xCamera& camera);
void init(xBinaryCamera* this);
void xCameraRotate(xCamera* cam, xVec3& v, f32 roll, f32 time, f32 accel, f32 decl);
void xCameraRotate(xCamera* cam, xMat3x3& m, f32 time, f32 accel, f32 decl);
void xCameraLookYPR(xCamera* cam, u32 flags, f32 yaw, f32 pitch, f32 roll, f32 tm, f32 tm_acc, f32 tm_dec);
void xCameraLook(xCamera* cam, u32 flags, xQuat* orn_goal, f32 tm, f32 tm_acc, f32 tm_dec);
void xCameraFOV(xCamera* cam, f32 fov, f32 maxSpeed, f32 dt);
void xCameraMove(xCamera* cam, xVec3& loc, f32 maxSpeed);
void xCameraMove(xCamera* cam, xVec3& loc);
void xCameraMove(xCamera* cam, u32 flags, f32 dgoal, f32 hgoal, f32 pgoal, f32 tm, f32 tm_acc, f32 tm_dec);
void xCameraDoCollisions(s32 do_collis, s32 owner);
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetScene(xCamera* cam, xScene* sc);
void xCameraShowRaster(xCamera* cam);
void xCameraEnd(xCamera* cam, f32 seconds, s32 update_scrn_fx);
void xCameraFXEnd(xCamera* cam);
void xCameraFXUpdate(xCamera* cam, f32 dt);
void xCameraFXShakeUpdate(cameraFX* f, f32 dt, xMat4x3* m);
void xCameraFXShake(f32 maxTime, f32 magnitude, f32 cycleMax, f32 rotate_magnitude, f32 radius, xVec3* epicenter, xVec3* player);
void xCameraFXZoomUpdate(cameraFX* f, f32 dt, xMat4x3* m);
void xCameraFXBegin(xCamera* cam);
void xCameraBegin(xCamera* cam, s32 clear);
void xCameraUpdate(xCamera* cam, f32 dt);
void _xCameraUpdate(xCamera* cam, f32 dt);
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
void xCam_worldtocyl(f32& d, f32& h, f32& p, xMat4x3* tgt_mat, xVec3* v, u32 flags);
void xCam_buildbasis(xCamera* cam);
void xCameraReset(xCamera* cam, f32 d, f32 h, f32 pitch);
void xCameraExit(xCamera* cam);
void xCameraInit(xCamera* cam, u32 width, u32 height);

// update__13xBinaryCameraFf
// Start address: 0x1c1220
void update(xBinaryCamera* this, f32 dt)
{
	xVec3& A;
	xVec3& B;
	xVec3& C;
	xVec3 CA;
	f32 dCA;
	f32 yaw_start;
	f32 yaw_end;
	xVec3 Q1;
	xVec3 Q2;
	f32 yaw_Q1;
	f32 yaw_Q2;
	f32 dyaw1;
	f32 dyaw2;
	f32 fov;
	f32 max_dyaw;
	f32 sstick;
	analog_data& stick;
	f32 yaw_diff;
	f32 max_yaw_diff;
	u32 bn;
	u32 bp;
	u32 aa;
	f32 d;
	f32 h;
	f32 hf;
	f32 s;
	f32 s;
	xVec3 end_loc;
	f32 sloc;
	xVec3 cam_loc;
	xVec3 heading;
	f32 heading_dist2;
	xQuat end_dir;
	xMat3x3 mat;
	f32 sdir;
	xMat3x3 mat;
}

// stop__13xBinaryCameraFv
// Start address: 0x1c1c50
void stop(xBinaryCamera* this)
{
}

// start__13xBinaryCameraFR7xCamera
// Start address: 0x1c1c60
void start(xBinaryCamera* this, xCamera& camera)
{
}

// init__13xBinaryCameraFv
// Start address: 0x1c1ca0
void init(xBinaryCamera* this)
{
}

// xCameraRotate__FP7xCameraRC5xVec3ffff
// Start address: 0x1c1cb0
void xCameraRotate(xCamera* cam, xVec3& v, f32 roll, f32 time, f32 accel, f32 decl)
{
}

// xCameraRotate__FP7xCameraRC7xMat3x3fff
// Start address: 0x1c1e50
void xCameraRotate(xCamera* cam, xMat3x3& m, f32 time, f32 accel, f32 decl)
{
	xVec3 eu;
}

// xCameraLookYPR__FP7xCameraUiffffff
// Start address: 0x1c2030
void xCameraLookYPR(xCamera* cam, u32 flags, f32 yaw, f32 pitch, f32 roll, f32 tm, f32 tm_acc, f32 tm_dec)
{
	f32 s;
}

// xCameraLook__FP7xCameraUiPC5xQuatfff
// Start address: 0x1c21b0
void xCameraLook(xCamera* cam, u32 flags, xQuat* orn_goal, f32 tm, f32 tm_acc, f32 tm_dec)
{
	f32 s;
}

// xCameraFOV__FP7xCamerafff
// Start address: 0x1c2370
void xCameraFOV(xCamera* cam, f32 fov, f32 maxSpeed, f32 dt)
{
	f32 speed;
	f32 currentFOV;
	f32 len;
}

// xCameraMove__FP7xCameraRC5xVec3f
// Start address: 0x1c2410
void xCameraMove(xCamera* cam, xVec3& loc, f32 maxSpeed)
{
}

// xCameraMove__FP7xCameraRC5xVec3
// Start address: 0x1c24f0
void xCameraMove(xCamera* cam, xVec3& loc)
{
}

// xCameraMove__FP7xCameraUiffffff
// Start address: 0x1c2540
void xCameraMove(xCamera* cam, u32 flags, f32 dgoal, f32 hgoal, f32 pgoal, f32 tm, f32 tm_acc, f32 tm_dec)
{
	f32 s;
}

// xCameraDoCollisions__Fii
// Start address: 0x1c2760
void xCameraDoCollisions(s32 do_collis, s32 owner)
{
}

// xCameraSetTargetOMatrix__FP7xCameraP7xMat4x3
// Start address: 0x1c27b0
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat)
{
}

// xCameraSetTargetMatrix__FP7xCameraP7xMat4x3
// Start address: 0x1c27c0
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat)
{
}

// xCameraSetScene__FP7xCameraP6xScene
// Start address: 0x1c27d0
void xCameraSetScene(xCamera* cam, xScene* sc)
{
}

// xCameraShowRaster__FP7xCamera
// Start address: 0x1c27f0
void xCameraShowRaster(xCamera* cam)
{
}

// xCameraEnd__FP7xCamerafi
// Start address: 0x1c2800
void xCameraEnd(xCamera* cam, f32 seconds, s32 update_scrn_fx)
{
}

// xCameraFXEnd__FP7xCamera
// Start address: 0x1c2840
void xCameraFXEnd(xCamera* cam)
{
}

// xCameraFXUpdate__FP7xCameraf
// Start address: 0x1c2890
void xCameraFXUpdate(xCamera* cam, f32 dt)
{
	s32 i;
}

// xCameraFXShakeUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x1c29d0
void xCameraFXShakeUpdate(cameraFX* f, f32 dt, xMat4x3* m)
{
	f32 x;
	f32 y;
	f32 scale;
	f32 noise;
	xVec3 e;
}

// xCameraFXShake__FfffffP5xVec3P5xVec3
// Start address: 0x1c2c80
void xCameraFXShake(f32 maxTime, f32 magnitude, f32 cycleMax, f32 rotate_magnitude, f32 radius, xVec3* epicenter, xVec3* player)
{
}

// xCameraFXZoomUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x1c2d40
void xCameraFXZoomUpdate(cameraFX* f, f32 dt, xMat4x3* m)
{
}

// xCameraFXBegin__FP7xCamera
// Start address: 0x1c2e90
void xCameraFXBegin(xCamera* cam)
{
}

// xCameraBegin__FP7xCamerai
// Start address: 0x1c2ee0
void xCameraBegin(xCamera* cam, s32 clear)
{
}

// xCameraUpdate__FP7xCameraf
// Start address: 0x1c2f20
void xCameraUpdate(xCamera* cam, f32 dt)
{
	s32 i;
	s32 num_updates;
	f32 sdt;
}

// _xCameraUpdate__FP7xCameraf
// Start address: 0x1c2fd0
void _xCameraUpdate(xCamera* cam, f32 dt)
{
	f32 wcvx;
	f32 wcvy;
	f32 wcvz;
	f32 m;
	f32 dcv;
	f32 hcv;
	f32 pcv;
	f32 tnext;
	f32 dtg;
	f32 htg;
	f32 ptg;
	f32 dsv;
	f32 hsv;
	f32 psv;
	f32 T_inv;
	f32 T_inv;
	f32 it;
	f32 ot;
	f32 T_inv;
	f32 dpv;
	f32 hpv;
	f32 ppv;
	f32 vax;
	f32 vay;
	f32 vaz;
	f32 s;
	f32 dtg;
	f32 dtg;
	f32 dtg;
	f32 htg;
	f32 htg;
	f32 htg;
	f32 ptg;
	f32 dphi;
	f32 dplo;
	f32 ptg;
	f32 ptg;
	xVec3 oeu;
	xVec3 eu;
	f32 m;
	f32 ycv;
	f32 pcv;
	f32 rcv;
	f32 tnext;
	f32 ytg;
	f32 ptg;
	f32 rtg;
	f32 ysv;
	f32 psv;
	f32 rsv;
	f32 T_inv;
	f32 T_inv;
	f32 it;
	f32 ot;
	f32 T_inv;
	f32 ypv;
	f32 ppv;
	f32 rpv;
	f32 vax;
	f32 vay;
	f32 vaz;
	f32 ytg;
	f32 ptg;
	f32 rtg;
	xQuat oq;
	xQuat qdiff_o_c;
	xRot rot_cv;
	xVec3 f;
	f32 atx;
	f32 aty;
	f32 atz;
	f32 dist;
	f32 dx__;
	f32 dz__;
	f32 dist2;
	f32 dist_inv;
	f32 mpx;
	f32 mpy;
	f32 mpz;
	f32 s;
	xMat3x3 des_mat;
	xMat3x3 latgt;
	f32 ang_dist;
	xQuat a;
	xQuat b;
	xQuat o;
	f32 s;
	xQuat desq;
	xQuat difq;
	xQuat newq;
	xSweptSphere sws;
	xVec3 tgtpos;
	xRay3 ray;
	f32 one_len;
	f32 stopdist;
	f32 last_dt;
}

// SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1c4520
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	xSweptSphere* sws;
	u32 result;
	f32 oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
	xModelInstance* collmod;
}

// xCam_worldtocyl__FRfRfRfPC7xMat4x3PC5xVec3Ui
// Start address: 0x1c4850
void xCam_worldtocyl(f32& d, f32& h, f32& p, xMat4x3* tgt_mat, xVec3* v, u32 flags)
{
	f32 lx;
	f32 lz;
	f32 dx__;
	f32 dz__;
	f32 dist2;
	f32 dist_inv;
	f32 tgt_p;
}

// xCam_buildbasis__FP7xCamera
// Start address: 0x1c49a0
void xCam_buildbasis(xCamera* cam)
{
	f32 d2d;
	f32 dx__;
	f32 dz__;
	f32 dist2;
	f32 dist_inv;
}

// xCameraReset__FP7xCamerafff
// Start address: 0x1c4b60
void xCameraReset(xCamera* cam, f32 d, f32 h, f32 pitch)
{
	f32 goal_p;
}

// xCameraExit__FP7xCamera
// Start address: 0x1c4dd0
void xCameraExit(xCamera* cam)
{
}

// xCameraInit__FP7xCameraUiUi
// Start address: 0x1c4e10
void xCameraInit(xCamera* cam, u32 width, u32 height)
{
}

