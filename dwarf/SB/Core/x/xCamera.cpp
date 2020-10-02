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

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_5)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_8)(void*);
typedef int32(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_11)(uint32);
typedef int32(*type_13)(RxNodeDefinition*);
typedef int8*(*type_15)(xBase*);
typedef void(*type_19)(RxNodeDefinition*);
typedef int8*(*type_20)(uint32);
typedef int32(*type_23)(RxPipelineNode*);
typedef void(*type_24)(RxPipelineNode*);
typedef int32(*type_26)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_28)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef uint32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_41)(xEnt*, xScene*, float32);
typedef void(*type_42)(xEnt*, xVec3*);
typedef void(*type_44)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_46)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_48)(xEnt*);
typedef void(*type_52)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_53)(RpAtomic*);
typedef uint32(*type_54)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef uint32(*type_56)(void*, void*);
typedef void(*type_58)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_61)(cameraFX*, float32, xMat4x3*, xMat4x3*);
typedef void(*type_63)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(cameraFX*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef void(*type_68)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef void(*type_69)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RwCamera*(*type_71)(RwCamera*);
typedef void(*type_74)(xMemPool*, void*);
typedef RpWorldSector*(*type_78)(RpWorldSector*);
typedef void(*type_83)(RwResEntry*);
typedef RwObjectHasFrame*(*type_94)(RwObjectHasFrame*);

typedef float32 type_1[2];
typedef uint8 type_2[2];
typedef uint32 type_3[2];
typedef RwFrustumPlane type_4[6];
typedef uint8 type_6[2];
typedef float32 type_7[6];
typedef float32 type_10[3];
typedef RwV3d type_12[8];
typedef uint32 type_14[72];
typedef float32 type_16[3];
typedef xModelTag type_17[2];
typedef uint16 type_18[3];
typedef xBase* type_21[72];
typedef float32 type_22[3];
typedef uint8 type_25[2];
typedef xEnt* type_27[111];
typedef xVec3 type_30[3];
typedef int8 type_31[4];
typedef int8 type_32[128];
typedef type_32 type_33[6];
typedef RwTexCoords* type_34[8];
typedef float32 type_35[2];
typedef uint8 type_36[14];
typedef xModelTag type_37[4];
typedef int8 type_39[32];
typedef xModelInstance* type_40[14];
typedef float32 type_43[16];
typedef cameraFX type_45[10];
typedef uint8 type_47[2];
typedef xAnimMultiFileEntry type_49[1];
typedef uint8 type_50[4];
typedef uint16 type_51[3];
typedef uint32 type_55[4];
typedef uint8 type_57[22];
typedef xVec4 type_59[12];
typedef uint8 type_60[22];
typedef xVec3 type_62[4];
typedef RpLight* type_65[2];
typedef RwFrame* type_66[2];
typedef RwTexCoords* type_70[8];
typedef xVec3 type_72[60];
typedef uint8 type_73[3];
typedef xCollis type_75[18];
typedef float32 type_76[22];
typedef uint8 type_77[3];
typedef int8 type_79[32];
typedef float32 type_80[22];
typedef float32 type_81[4];
typedef int8 type_82[32];
typedef uint32 type_84[15];
typedef int8 type_85[16];
typedef uint32 type_86[15];
typedef uint32 type_87[15];
typedef xVec3 type_88[5];
typedef int8 type_89[16];
typedef RxCluster type_90[1];
typedef uint8 type_91[5];
typedef cameraFXTableEntry type_92[3];
typedef analog_data type_93[2];
typedef float32 type_95[4];

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
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
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
	type_50 talk_filter;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
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
	type_59 frustplane;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	type_75 colls;
	type_44 post;
	type_54 depenq;
};

struct RpPolygon
{
	uint16 matIndex;
	type_18 vertIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct cameraFX
{
	int32 type;
	int32 flags;
	float32 elapsedTime;
	float32 maxTime;
	union
	{
		cameraFXShake shake;
		cameraFXZoom zoom;
	};
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xSweptSphere
{
	xVec3 start;
	xVec3 end;
	float32 radius;
	float32 dist;
	xiMat4x3Union basis;
	xiMat4x3Union invbasis;
	xBox box;
	xQCData qcd;
	float32 boxsize;
	float32 curdist;
	xVec3 contact;
	xVec3 polynorm;
	uint32 oid;
	void* optr;
	xModelInstance* mptr;
	int32 hitIt;
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
	int32 originalMatIndex;
	int32 nodeFlags;
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
	type_63 BeforeEnter;
	type_52 StateCallback;
	type_69 BeforeAnimMatrices;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xBinaryCamera
{
	config cfg;
	xCamera* camera;
	xQuat cam_dir;
	xVec3* s1;
	xVec3* s2;
	float32 s2_radius;
	xVec2 stick_offset;
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
	float32 angVel;
	float32 timeToLive;
	int32 hitpoints;
	float32 lastRolling;
	uint32 rollingID;
	uint8 collis_chk;
	uint8 collis_pen;
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
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct zEntHangable
{
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	uint32 pad3;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_33 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_39 sceneStart;
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

struct rxReq
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
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_35 BilinearLerp;
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

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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
	type_76 up_tmr;
	type_80 down_tmr;
	type_93 analog;
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
	uint32 version;
	uint32 jspNodeCount;
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
	uint8 type;
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
	uint32 Count;
};

struct zAssetPickupTable
{
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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
	uint16 itemCount;
	uint16 groupFlags;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_8 activateCB;
	type_8 deactivateCB;
};

struct _tagiPad
{
	int32 port;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_28 Callback;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xEntBoulderAsset
{
	float32 gravity;
	float32 mass;
	float32 bounce;
	float32 friction;
	float32 statFric;
	float32 maxVel;
	float32 maxAngVel;
	float32 stickiness;
	float32 bounceDamp;
	uint32 flags;
	float32 killtimer;
	uint32 hitpoints;
	uint32 soundID;
	float32 volume;
	float32 minSoundVel;
	float32 maxSoundVel;
	float32 innerRadius;
	float32 outerRadius;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_83 destroyNotify;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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
	type_11 resolvID;
	type_15 base2Name;
	type_20 id2Name;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_43 matrix;
	float32 radius;
	float32 angle;
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
	float32 r;
};

struct xGrid
{
	uint8 ingrid_id;
	type_73 pad;
	uint16 nx;
	uint16 nz;
	float32 minx;
	float32 minz;
	float32 maxx;
	float32 maxz;
	float32 csizex;
	float32 csizez;
	float32 inv_csizex;
	float32 inv_csizez;
	float32 maxr;
	xGridBound** cells;
	xGridBound* other;
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
	type_78 renderCallBack;
	RxPipeline* pipeline;
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
	type_62 corner;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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
	float32 r;
	float32 h;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_4 frustumPlanes;
	RwBBox frustumBoundBox;
	type_12 frustumCorners;
};

struct RpTriangle
{
	type_51 vertIndex;
	int16 matIndex;
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
	type_88 lastRefs;
	type_91 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_66 light_frame;
	int32 memlvl;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
	float32 t;
	float32 u;
	float32 v;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_2 PowerUp;
	type_6 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	type_14 baseCount;
	type_21 baseList;
	_zEnv* zen;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_1 radius;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_81 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	int32 type;
	type_61 func;
	type_64 funcKill;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_72 tranTable;
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
	uint32 filterAddressing;
	int32 refCount;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_74 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RpSector
{
	int32 type;
};

struct cameraFXZoom
{
	float32 holdTime;
	float32 vel;
	float32 accel;
	float32 distance;
	uint32 mode;
	float32 velCur;
	float32 distanceCur;
	float32 holdTimeCur;
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
	uint32 creationAttributes;
};

struct xSurface
{
};

struct zone_data
{
	float32 distance;
	float32 height;
	float32 height_focus;
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
	float32 distance;
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
	int32 ClipFlags;
	uint32 PipeFlags;
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
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
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
	float32 move_speed;
	float32 turn_speed;
	float32 stick_speed;
	float32 stick_yaw_vel;
	float32 max_yaw_vel;
	float32 margin_angle;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_95 wt;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	type_17 BubbleWandTag;
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
	type_37 HangPawTag;
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
	type_84 Inv_PatsSock;
	type_86 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_87 Inv_LevelPickups;
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
	type_3 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_27 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_36 sb_model_indices;
	type_40 sb_models;
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
	type_94 sync;
};

struct cameraFXShake
{
	float32 magnitude;
	xVec3 dir;
	float32 cycleTime;
	float32 cycleMax;
	float32 dampen;
	float32 dampenRate;
	float32 rotate_magnitude;
	float32 radius;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
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
	float32 x;
	float32 y;
};

type_85 buffer;
type_89 buffer;
int32 sCamCollis;
int32 xcam_collis_owner_disable;
int32 xcam_do_collis;
float32 xcam_collis_radius;
float32 xcam_collis_stiffness;
RpAtomic* sInvisWallHack;
int32 s_nestlevel;
float32 gCameraLastFov;
xMat4x3 sCameraFXMatOld;
type_92 sCameraFXTable;
type_45 sCameraFX;
zGlobals globals;
xVec3 m_UnitAxisX;
xMat4x3 g_I3;
type_68 SweptSphereHitsCameraEnt;
xGrid colls_oso_grid;
xGrid colls_grid;

void update(xBinaryCamera* this, float32 dt);
void stop(xBinaryCamera* this);
void start(xBinaryCamera* this, xCamera& camera);
void init(xBinaryCamera* this);
void xCameraRotate(xCamera* cam, xVec3& v, float32 roll, float32 time, float32 accel, float32 decl);
void xCameraRotate(xCamera* cam, xMat3x3& m, float32 time, float32 accel, float32 decl);
void xCameraLookYPR(xCamera* cam, uint32 flags, float32 yaw, float32 pitch, float32 roll, float32 tm, float32 tm_acc, float32 tm_dec);
void xCameraLook(xCamera* cam, uint32 flags, xQuat* orn_goal, float32 tm, float32 tm_acc, float32 tm_dec);
void xCameraFOV(xCamera* cam, float32 fov, float32 maxSpeed, float32 dt);
void xCameraMove(xCamera* cam, xVec3& loc, float32 maxSpeed);
void xCameraMove(xCamera* cam, xVec3& loc);
void xCameraMove(xCamera* cam, uint32 flags, float32 dgoal, float32 hgoal, float32 pgoal, float32 tm, float32 tm_acc, float32 tm_dec);
void xCameraDoCollisions(int32 do_collis, int32 owner);
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetScene(xCamera* cam, xScene* sc);
void xCameraShowRaster(xCamera* cam);
void xCameraEnd(xCamera* cam, float32 seconds, int32 update_scrn_fx);
void xCameraFXEnd(xCamera* cam);
void xCameraFXUpdate(xCamera* cam, float32 dt);
void xCameraFXShakeUpdate(cameraFX* f, float32 dt, xMat4x3* m);
void xCameraFXShake(float32 maxTime, float32 magnitude, float32 cycleMax, float32 rotate_magnitude, float32 radius, xVec3* epicenter, xVec3* player);
void xCameraFXZoomUpdate(cameraFX* f, float32 dt, xMat4x3* m);
void xCameraFXBegin(xCamera* cam);
void xCameraBegin(xCamera* cam, int32 clear);
void xCameraUpdate(xCamera* cam, float32 dt);
void _xCameraUpdate(xCamera* cam, float32 dt);
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
void xCam_worldtocyl(float32& d, float32& h, float32& p, xMat4x3* tgt_mat, xVec3* v, uint32 flags);
void xCam_buildbasis(xCamera* cam);
void xCameraReset(xCamera* cam, float32 d, float32 h, float32 pitch);
void xCameraExit(xCamera* cam);
void xCameraInit(xCamera* cam, uint32 width, uint32 height);

// update__13xBinaryCameraFf
// Start address: 0x1c1220
void update(xBinaryCamera* this, float32 dt)
{
	xVec3& A;
	xVec3& B;
	xVec3& C;
	xVec3 CA;
	float32 dCA;
	float32 yaw_start;
	float32 yaw_end;
	xVec3 Q1;
	xVec3 Q2;
	float32 yaw_Q1;
	float32 yaw_Q2;
	float32 dyaw1;
	float32 dyaw2;
	float32 fov;
	float32 max_dyaw;
	float32 sstick;
	analog_data& stick;
	float32 yaw_diff;
	float32 max_yaw_diff;
	uint32 bn;
	uint32 bp;
	uint32 aa;
	float32 d;
	float32 h;
	float32 hf;
	float32 s;
	float32 s;
	xVec3 end_loc;
	float32 sloc;
	xVec3 cam_loc;
	xVec3 heading;
	float32 heading_dist2;
	xQuat end_dir;
	xMat3x3 mat;
	float32 sdir;
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
void xCameraRotate(xCamera* cam, xVec3& v, float32 roll, float32 time, float32 accel, float32 decl)
{
}

// xCameraRotate__FP7xCameraRC7xMat3x3fff
// Start address: 0x1c1e50
void xCameraRotate(xCamera* cam, xMat3x3& m, float32 time, float32 accel, float32 decl)
{
	xVec3 eu;
}

// xCameraLookYPR__FP7xCameraUiffffff
// Start address: 0x1c2030
void xCameraLookYPR(xCamera* cam, uint32 flags, float32 yaw, float32 pitch, float32 roll, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
}

// xCameraLook__FP7xCameraUiPC5xQuatfff
// Start address: 0x1c21b0
void xCameraLook(xCamera* cam, uint32 flags, xQuat* orn_goal, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
}

// xCameraFOV__FP7xCamerafff
// Start address: 0x1c2370
void xCameraFOV(xCamera* cam, float32 fov, float32 maxSpeed, float32 dt)
{
	float32 speed;
	float32 currentFOV;
	float32 len;
}

// xCameraMove__FP7xCameraRC5xVec3f
// Start address: 0x1c2410
void xCameraMove(xCamera* cam, xVec3& loc, float32 maxSpeed)
{
}

// xCameraMove__FP7xCameraRC5xVec3
// Start address: 0x1c24f0
void xCameraMove(xCamera* cam, xVec3& loc)
{
}

// xCameraMove__FP7xCameraUiffffff
// Start address: 0x1c2540
void xCameraMove(xCamera* cam, uint32 flags, float32 dgoal, float32 hgoal, float32 pgoal, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
}

// xCameraDoCollisions__Fii
// Start address: 0x1c2760
void xCameraDoCollisions(int32 do_collis, int32 owner)
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
void xCameraEnd(xCamera* cam, float32 seconds, int32 update_scrn_fx)
{
}

// xCameraFXEnd__FP7xCamera
// Start address: 0x1c2840
void xCameraFXEnd(xCamera* cam)
{
}

// xCameraFXUpdate__FP7xCameraf
// Start address: 0x1c2890
void xCameraFXUpdate(xCamera* cam, float32 dt)
{
	int32 i;
}

// xCameraFXShakeUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x1c29d0
void xCameraFXShakeUpdate(cameraFX* f, float32 dt, xMat4x3* m)
{
	float32 x;
	float32 y;
	float32 scale;
	float32 noise;
	xVec3 e;
}

// xCameraFXShake__FfffffP5xVec3P5xVec3
// Start address: 0x1c2c80
void xCameraFXShake(float32 maxTime, float32 magnitude, float32 cycleMax, float32 rotate_magnitude, float32 radius, xVec3* epicenter, xVec3* player)
{
}

// xCameraFXZoomUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x1c2d40
void xCameraFXZoomUpdate(cameraFX* f, float32 dt, xMat4x3* m)
{
}

// xCameraFXBegin__FP7xCamera
// Start address: 0x1c2e90
void xCameraFXBegin(xCamera* cam)
{
}

// xCameraBegin__FP7xCamerai
// Start address: 0x1c2ee0
void xCameraBegin(xCamera* cam, int32 clear)
{
}

// xCameraUpdate__FP7xCameraf
// Start address: 0x1c2f20
void xCameraUpdate(xCamera* cam, float32 dt)
{
	int32 i;
	int32 num_updates;
	float32 sdt;
}

// _xCameraUpdate__FP7xCameraf
// Start address: 0x1c2fd0
void _xCameraUpdate(xCamera* cam, float32 dt)
{
	float32 wcvx;
	float32 wcvy;
	float32 wcvz;
	float32 m;
	float32 dcv;
	float32 hcv;
	float32 pcv;
	float32 tnext;
	float32 dtg;
	float32 htg;
	float32 ptg;
	float32 dsv;
	float32 hsv;
	float32 psv;
	float32 T_inv;
	float32 T_inv;
	float32 it;
	float32 ot;
	float32 T_inv;
	float32 dpv;
	float32 hpv;
	float32 ppv;
	float32 vax;
	float32 vay;
	float32 vaz;
	float32 s;
	float32 dtg;
	float32 dtg;
	float32 dtg;
	float32 htg;
	float32 htg;
	float32 htg;
	float32 ptg;
	float32 dphi;
	float32 dplo;
	float32 ptg;
	float32 ptg;
	xVec3 oeu;
	xVec3 eu;
	float32 m;
	float32 ycv;
	float32 pcv;
	float32 rcv;
	float32 tnext;
	float32 ytg;
	float32 ptg;
	float32 rtg;
	float32 ysv;
	float32 psv;
	float32 rsv;
	float32 T_inv;
	float32 T_inv;
	float32 it;
	float32 ot;
	float32 T_inv;
	float32 ypv;
	float32 ppv;
	float32 rpv;
	float32 vax;
	float32 vay;
	float32 vaz;
	float32 ytg;
	float32 ptg;
	float32 rtg;
	xQuat oq;
	xQuat qdiff_o_c;
	xRot rot_cv;
	xVec3 f;
	float32 atx;
	float32 aty;
	float32 atz;
	float32 dist;
	float32 dx__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
	float32 mpx;
	float32 mpy;
	float32 mpz;
	float32 s;
	xMat3x3 des_mat;
	xMat3x3 latgt;
	float32 ang_dist;
	xQuat a;
	xQuat b;
	xQuat o;
	float32 s;
	xQuat desq;
	xQuat difq;
	xQuat newq;
	xSweptSphere sws;
	xVec3 tgtpos;
	xRay3 ray;
	float32 one_len;
	float32 stopdist;
	float32 last_dt;
}

// SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1c4520
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	xSweptSphere* sws;
	uint32 result;
	float32 oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
	xModelInstance* collmod;
}

// xCam_worldtocyl__FRfRfRfPC7xMat4x3PC5xVec3Ui
// Start address: 0x1c4850
void xCam_worldtocyl(float32& d, float32& h, float32& p, xMat4x3* tgt_mat, xVec3* v, uint32 flags)
{
	float32 lx;
	float32 lz;
	float32 dx__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
	float32 tgt_p;
}

// xCam_buildbasis__FP7xCamera
// Start address: 0x1c49a0
void xCam_buildbasis(xCamera* cam)
{
	float32 d2d;
	float32 dx__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
}

// xCameraReset__FP7xCamerafff
// Start address: 0x1c4b60
void xCameraReset(xCamera* cam, float32 d, float32 h, float32 pitch)
{
	float32 goal_p;
}

// xCameraExit__FP7xCamera
// Start address: 0x1c4dd0
void xCameraExit(xCamera* cam)
{
}

// xCameraInit__FP7xCameraUiUi
// Start address: 0x1c4e10
void xCameraInit(xCamera* cam, uint32 width, uint32 height)
{
}

