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
typedef struct _class_2;
typedef struct xiMat4x3Union;
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
typedef int8 type_33[128][6];
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
	uint32(*cb)(void*, void*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint32 pad[4];
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
	xVec4 frustplane[12];
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

	void update(float32 dt);
	void stop();
	void start(xCamera& camera);
	void init();
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
	uint8 pad1[2];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint8 NumAnims[2];
	void** RawData;
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
	RwTexCoords* texCoords[8];
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
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	void(*destroyNotify)(RwResEntry*);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	uint8 pad[3];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	xVec3 corner[4];
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
	xAnimMultiFileEntry Files[1];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct RpTriangle
{
	uint16 vertIndex[3];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint32 baseCount[72];
	xBase* baseList[72];
	_zEnv* zen;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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
	void(*func)(cameraFX*, float32, xMat4x3*, xMat4x3*);
	void(*funcKill)(cameraFX*);
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
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	RxCluster clusters[1];
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
	float32 wt[4];
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct xiMat4x3Union
{
	union
	{
		xMat4x3 xm;
		RwMatrixTag im;
	};
};

struct xVec2
{
	float32 x;
	float32 y;
};

int8 buffer[16];
int8 buffer[16];
int32 sCamCollis;
int32 xcam_collis_owner_disable;
int32 xcam_do_collis;
float32 xcam_collis_radius;
float32 xcam_collis_stiffness;
RpAtomic* sInvisWallHack;
int32 s_nestlevel;
float32 gCameraLastFov;
xMat4x3 sCameraFXMatOld;
cameraFXTableEntry sCameraFXTable[3];
cameraFX sCameraFX[10];
zGlobals globals;
xVec3 m_UnitAxisX;
xMat4x3 g_I3;
void(*SweptSphereHitsCameraEnt)(xScene*, xRay3*, xQCData*, xEnt*, void*);
xGrid colls_oso_grid;
xGrid colls_grid;

void update(float32 dt);
void stop();
void start(xCamera& camera);
void init();
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
void xBinaryCamera::update(float32 dt)
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
	// Line 2540, Address: 0x1c1220, Func Offset: 0
	// Line 2550, Address: 0x1c1224, Func Offset: 0x4
	// Line 2540, Address: 0x1c1228, Func Offset: 0x8
	// Line 2550, Address: 0x1c122c, Func Offset: 0xc
	// Line 2540, Address: 0x1c1230, Func Offset: 0x10
	// Line 2544, Address: 0x1c1258, Func Offset: 0x38
	// Line 2545, Address: 0x1c1260, Func Offset: 0x40
	// Line 2546, Address: 0x1c1264, Func Offset: 0x44
	// Line 2550, Address: 0x1c1268, Func Offset: 0x48
	// Line 2552, Address: 0x1c128c, Func Offset: 0x6c
	// Line 2550, Address: 0x1c1290, Func Offset: 0x70
	// Line 2552, Address: 0x1c1294, Func Offset: 0x74
	// Line 2551, Address: 0x1c1298, Func Offset: 0x78
	// Line 2552, Address: 0x1c129c, Func Offset: 0x7c
	// Line 2550, Address: 0x1c12a0, Func Offset: 0x80
	// Line 2551, Address: 0x1c12a8, Func Offset: 0x88
	// Line 2550, Address: 0x1c12ac, Func Offset: 0x8c
	// Line 2551, Address: 0x1c12b4, Func Offset: 0x94
	// Line 2550, Address: 0x1c12b8, Func Offset: 0x98
	// Line 2551, Address: 0x1c12bc, Func Offset: 0x9c
	// Line 2550, Address: 0x1c12d0, Func Offset: 0xb0
	// Line 2551, Address: 0x1c12d4, Func Offset: 0xb4
	// Line 2552, Address: 0x1c12dc, Func Offset: 0xbc
	// Line 2554, Address: 0x1c12e8, Func Offset: 0xc8
	// Line 2555, Address: 0x1c13a0, Func Offset: 0x180
	// Line 2556, Address: 0x1c13ac, Func Offset: 0x18c
	// Line 2557, Address: 0x1c13b8, Func Offset: 0x198
	// Line 2561, Address: 0x1c13e8, Func Offset: 0x1c8
	// Line 2563, Address: 0x1c140c, Func Offset: 0x1ec
	// Line 2568, Address: 0x1c141c, Func Offset: 0x1fc
	// Line 2571, Address: 0x1c1468, Func Offset: 0x248
	// Line 2568, Address: 0x1c146c, Func Offset: 0x24c
	// Line 2571, Address: 0x1c147c, Func Offset: 0x25c
	// Line 2568, Address: 0x1c1480, Func Offset: 0x260
	// Line 2571, Address: 0x1c14a4, Func Offset: 0x284
	// Line 2572, Address: 0x1c14c4, Func Offset: 0x2a4
	// Line 2573, Address: 0x1c14e8, Func Offset: 0x2c8
	// Line 2572, Address: 0x1c1504, Func Offset: 0x2e4
	// Line 2573, Address: 0x1c1508, Func Offset: 0x2e8
	// Line 2574, Address: 0x1c15a4, Func Offset: 0x384
	// Line 2573, Address: 0x1c15b0, Func Offset: 0x390
	// Line 2574, Address: 0x1c15b4, Func Offset: 0x394
	// Line 2575, Address: 0x1c1640, Func Offset: 0x420
	// Line 2574, Address: 0x1c1644, Func Offset: 0x424
	// Line 2576, Address: 0x1c1650, Func Offset: 0x430
	// Line 2575, Address: 0x1c1654, Func Offset: 0x434
	// Line 2574, Address: 0x1c1658, Func Offset: 0x438
	// Line 2575, Address: 0x1c165c, Func Offset: 0x43c
	// Line 2576, Address: 0x1c1660, Func Offset: 0x440
	// Line 2575, Address: 0x1c1664, Func Offset: 0x444
	// Line 2576, Address: 0x1c166c, Func Offset: 0x44c
	// Line 2575, Address: 0x1c1674, Func Offset: 0x454
	// Line 2576, Address: 0x1c1678, Func Offset: 0x458
	// Line 2579, Address: 0x1c1684, Func Offset: 0x464
	// Line 2581, Address: 0x1c16a4, Func Offset: 0x484
	// Line 2582, Address: 0x1c16c8, Func Offset: 0x4a8
	// Line 2583, Address: 0x1c16d0, Func Offset: 0x4b0
	// Line 2584, Address: 0x1c16dc, Func Offset: 0x4bc
	// Line 2585, Address: 0x1c1708, Func Offset: 0x4e8
	// Line 2587, Address: 0x1c1718, Func Offset: 0x4f8
	// Line 2588, Address: 0x1c1724, Func Offset: 0x504
	// Line 2590, Address: 0x1c1730, Func Offset: 0x510
	// Line 2591, Address: 0x1c1734, Func Offset: 0x514
	// Line 2594, Address: 0x1c1740, Func Offset: 0x520
	// Line 2596, Address: 0x1c1744, Func Offset: 0x524
	// Line 2599, Address: 0x1c1750, Func Offset: 0x530
	// Line 2603, Address: 0x1c1778, Func Offset: 0x558
	// Line 2604, Address: 0x1c1788, Func Offset: 0x568
	// Line 2603, Address: 0x1c178c, Func Offset: 0x56c
	// Line 2604, Address: 0x1c1790, Func Offset: 0x570
	// Line 2603, Address: 0x1c1794, Func Offset: 0x574
	// Line 2607, Address: 0x1c1798, Func Offset: 0x578
	// Line 2603, Address: 0x1c179c, Func Offset: 0x57c
	// Line 2611, Address: 0x1c17a0, Func Offset: 0x580
	// Line 2607, Address: 0x1c17b0, Func Offset: 0x590
	// Line 2611, Address: 0x1c17b8, Func Offset: 0x598
	// Line 2607, Address: 0x1c17c4, Func Offset: 0x5a4
	// Line 2608, Address: 0x1c17d8, Func Offset: 0x5b8
	// Line 2607, Address: 0x1c17dc, Func Offset: 0x5bc
	// Line 2611, Address: 0x1c17e0, Func Offset: 0x5c0
	// Line 2612, Address: 0x1c1870, Func Offset: 0x650
	// Line 2613, Address: 0x1c1874, Func Offset: 0x654
	// Line 2612, Address: 0x1c1878, Func Offset: 0x658
	// Line 2613, Address: 0x1c1880, Func Offset: 0x660
	// Line 2615, Address: 0x1c1894, Func Offset: 0x674
	// Line 2616, Address: 0x1c18bc, Func Offset: 0x69c
	// Line 2615, Address: 0x1c18c0, Func Offset: 0x6a0
	// Line 2617, Address: 0x1c18c4, Func Offset: 0x6a4
	// Line 2621, Address: 0x1c18c8, Func Offset: 0x6a8
	// Line 2622, Address: 0x1c18d0, Func Offset: 0x6b0
	// Line 2621, Address: 0x1c18d8, Func Offset: 0x6b8
	// Line 2622, Address: 0x1c18e4, Func Offset: 0x6c4
	// Line 2625, Address: 0x1c18f0, Func Offset: 0x6d0
	// Line 2626, Address: 0x1c18f8, Func Offset: 0x6d8
	// Line 2627, Address: 0x1c1900, Func Offset: 0x6e0
	// Line 2624, Address: 0x1c1908, Func Offset: 0x6e8
	// Line 2625, Address: 0x1c190c, Func Offset: 0x6ec
	// Line 2626, Address: 0x1c1910, Func Offset: 0x6f0
	// Line 2627, Address: 0x1c1914, Func Offset: 0x6f4
	// Line 2625, Address: 0x1c1918, Func Offset: 0x6f8
	// Line 2626, Address: 0x1c191c, Func Offset: 0x6fc
	// Line 2627, Address: 0x1c1920, Func Offset: 0x700
	// Line 2625, Address: 0x1c1924, Func Offset: 0x704
	// Line 2626, Address: 0x1c1928, Func Offset: 0x708
	// Line 2628, Address: 0x1c192c, Func Offset: 0x70c
	// Line 2631, Address: 0x1c1938, Func Offset: 0x718
	// Line 2632, Address: 0x1c193c, Func Offset: 0x71c
	// Line 2633, Address: 0x1c1944, Func Offset: 0x724
	// Line 2634, Address: 0x1c194c, Func Offset: 0x72c
	// Line 2632, Address: 0x1c1954, Func Offset: 0x734
	// Line 2633, Address: 0x1c1958, Func Offset: 0x738
	// Line 2634, Address: 0x1c195c, Func Offset: 0x73c
	// Line 2632, Address: 0x1c1960, Func Offset: 0x740
	// Line 2633, Address: 0x1c1964, Func Offset: 0x744
	// Line 2634, Address: 0x1c1968, Func Offset: 0x748
	// Line 2632, Address: 0x1c196c, Func Offset: 0x74c
	// Line 2633, Address: 0x1c1970, Func Offset: 0x750
	// Line 2634, Address: 0x1c1974, Func Offset: 0x754
	// Line 2638, Address: 0x1c1978, Func Offset: 0x758
	// Line 2647, Address: 0x1c19d8, Func Offset: 0x7b8
	// Line 2648, Address: 0x1c19ec, Func Offset: 0x7cc
	// Line 2647, Address: 0x1c19f0, Func Offset: 0x7d0
	// Line 2648, Address: 0x1c19fc, Func Offset: 0x7dc
	// Line 2656, Address: 0x1c1a20, Func Offset: 0x800
	// Line 2648, Address: 0x1c1a24, Func Offset: 0x804
	// Line 2656, Address: 0x1c1a28, Func Offset: 0x808
	// Line 2648, Address: 0x1c1a2c, Func Offset: 0x80c
	// Line 2656, Address: 0x1c1a68, Func Offset: 0x848
	// Line 2663, Address: 0x1c1a8c, Func Offset: 0x86c
	// Line 2656, Address: 0x1c1a90, Func Offset: 0x870
	// Line 2663, Address: 0x1c1a94, Func Offset: 0x874
	// Line 2656, Address: 0x1c1a98, Func Offset: 0x878
	// Line 2663, Address: 0x1c1aa0, Func Offset: 0x880
	// Line 2656, Address: 0x1c1aa8, Func Offset: 0x888
	// Line 2662, Address: 0x1c1ab4, Func Offset: 0x894
	// Line 2656, Address: 0x1c1ab8, Func Offset: 0x898
	// Line 2662, Address: 0x1c1ac4, Func Offset: 0x8a4
	// Line 2656, Address: 0x1c1ac8, Func Offset: 0x8a8
	// Line 2662, Address: 0x1c1acc, Func Offset: 0x8ac
	// Line 2656, Address: 0x1c1ad0, Func Offset: 0x8b0
	// Line 2662, Address: 0x1c1ad4, Func Offset: 0x8b4
	// Line 2663, Address: 0x1c1ae4, Func Offset: 0x8c4
	// Line 2665, Address: 0x1c1af0, Func Offset: 0x8d0
	// Line 2668, Address: 0x1c1af8, Func Offset: 0x8d8
	// Line 2665, Address: 0x1c1b18, Func Offset: 0x8f8
	// Line 2668, Address: 0x1c1b44, Func Offset: 0x924
	// Line 2669, Address: 0x1c1b6c, Func Offset: 0x94c
	// Line 2670, Address: 0x1c1b78, Func Offset: 0x958
	// Line 2671, Address: 0x1c1b8c, Func Offset: 0x96c
	// Line 2670, Address: 0x1c1b90, Func Offset: 0x970
	// Line 2671, Address: 0x1c1b94, Func Offset: 0x974
	// Line 2672, Address: 0x1c1ba4, Func Offset: 0x984
	// Line 2676, Address: 0x1c1ba8, Func Offset: 0x988
	// Line 2677, Address: 0x1c1bb4, Func Offset: 0x994
	// Line 2678, Address: 0x1c1bc4, Func Offset: 0x9a4
	// Line 2677, Address: 0x1c1bcc, Func Offset: 0x9ac
	// Line 2678, Address: 0x1c1c10, Func Offset: 0x9f0
	// Line 2681, Address: 0x1c1c1c, Func Offset: 0x9fc
	// Func End, Address: 0x1c1c4c, Func Offset: 0xa2c
}

// stop__13xBinaryCameraFv
// Start address: 0x1c1c50
void xBinaryCamera::stop()
{
	// Line 2537, Address: 0x1c1c50, Func Offset: 0
	// Func End, Address: 0x1c1c58, Func Offset: 0x8
}

// start__13xBinaryCameraFR7xCamera
// Start address: 0x1c1c60
void xBinaryCamera::start(xCamera& camera)
{
	// Line 2528, Address: 0x1c1c60, Func Offset: 0
	// Line 2529, Address: 0x1c1c6c, Func Offset: 0xc
	// Line 2530, Address: 0x1c1c74, Func Offset: 0x14
	// Line 2531, Address: 0x1c1c80, Func Offset: 0x20
	// Line 2532, Address: 0x1c1c88, Func Offset: 0x28
	// Func End, Address: 0x1c1c98, Func Offset: 0x38
}

// init__13xBinaryCameraFv
// Start address: 0x1c1ca0
void xBinaryCamera::init()
{
	// Line 2519, Address: 0x1c1ca0, Func Offset: 0
	// Line 2520, Address: 0x1c1ca4, Func Offset: 0x4
	// Line 2525, Address: 0x1c1ca8, Func Offset: 0x8
	// Func End, Address: 0x1c1cb0, Func Offset: 0x10
}

// xCameraRotate__FP7xCameraRC5xVec3ffff
// Start address: 0x1c1cb0
void xCameraRotate(xCamera* cam, xVec3& v, float32 roll, float32 time, float32 accel, float32 decl)
{
	// Line 2394, Address: 0x1c1cb0, Func Offset: 0
	// Line 2402, Address: 0x1c1ce0, Func Offset: 0x30
	// Line 2403, Address: 0x1c1d00, Func Offset: 0x50
	// Line 2406, Address: 0x1c1d10, Func Offset: 0x60
	// Line 2407, Address: 0x1c1d24, Func Offset: 0x74
	// Line 2408, Address: 0x1c1d2c, Func Offset: 0x7c
	// Line 2409, Address: 0x1c1d34, Func Offset: 0x84
	// Line 2410, Address: 0x1c1d3c, Func Offset: 0x8c
	// Line 2412, Address: 0x1c1d40, Func Offset: 0x90
	// Line 2413, Address: 0x1c1d54, Func Offset: 0xa4
	// Line 2414, Address: 0x1c1d68, Func Offset: 0xb8
	// Line 2415, Address: 0x1c1d7c, Func Offset: 0xcc
	// Line 2417, Address: 0x1c1de0, Func Offset: 0x130
	// Line 2418, Address: 0x1c1df4, Func Offset: 0x144
	// Line 2420, Address: 0x1c1e08, Func Offset: 0x158
	// Line 2421, Address: 0x1c1e0c, Func Offset: 0x15c
	// Line 2422, Address: 0x1c1e10, Func Offset: 0x160
	// Line 2423, Address: 0x1c1e14, Func Offset: 0x164
	// Line 2425, Address: 0x1c1e18, Func Offset: 0x168
	// Line 2426, Address: 0x1c1e24, Func Offset: 0x174
	// Func End, Address: 0x1c1e48, Func Offset: 0x198
}

// xCameraRotate__FP7xCameraRC7xMat3x3fff
// Start address: 0x1c1e50
void xCameraRotate(xCamera* cam, xMat3x3& m, float32 time, float32 accel, float32 decl)
{
	xVec3 eu;
	// Line 2357, Address: 0x1c1e50, Func Offset: 0
	// Line 2364, Address: 0x1c1e54, Func Offset: 0x4
	// Line 2357, Address: 0x1c1e58, Func Offset: 0x8
	// Line 2367, Address: 0x1c1e74, Func Offset: 0x24
	// Line 2357, Address: 0x1c1e78, Func Offset: 0x28
	// Line 2364, Address: 0x1c1e7c, Func Offset: 0x2c
	// Line 2367, Address: 0x1c1e98, Func Offset: 0x48
	// Line 2368, Address: 0x1c1ea0, Func Offset: 0x50
	// Line 2372, Address: 0x1c1ea8, Func Offset: 0x58
	// Line 2369, Address: 0x1c1eac, Func Offset: 0x5c
	// Line 2372, Address: 0x1c1eb0, Func Offset: 0x60
	// Line 2368, Address: 0x1c1eb4, Func Offset: 0x64
	// Line 2369, Address: 0x1c1eb8, Func Offset: 0x68
	// Line 2370, Address: 0x1c1ec0, Func Offset: 0x70
	// Line 2372, Address: 0x1c1ec4, Func Offset: 0x74
	// Line 2373, Address: 0x1c1ecc, Func Offset: 0x7c
	// Line 2374, Address: 0x1c1ed4, Func Offset: 0x84
	// Line 2375, Address: 0x1c1edc, Func Offset: 0x8c
	// Line 2376, Address: 0x1c1ee4, Func Offset: 0x94
	// Line 2378, Address: 0x1c1ee8, Func Offset: 0x98
	// Line 2379, Address: 0x1c1efc, Func Offset: 0xac
	// Line 2378, Address: 0x1c1f08, Func Offset: 0xb8
	// Line 2379, Address: 0x1c1f58, Func Offset: 0x108
	// Line 2380, Address: 0x1c1f60, Func Offset: 0x110
	// Line 2382, Address: 0x1c1fc0, Func Offset: 0x170
	// Line 2383, Address: 0x1c1fd4, Func Offset: 0x184
	// Line 2385, Address: 0x1c1fe8, Func Offset: 0x198
	// Line 2386, Address: 0x1c1fec, Func Offset: 0x19c
	// Line 2387, Address: 0x1c1ff0, Func Offset: 0x1a0
	// Line 2388, Address: 0x1c1ff4, Func Offset: 0x1a4
	// Line 2390, Address: 0x1c1ff8, Func Offset: 0x1a8
	// Line 2391, Address: 0x1c2004, Func Offset: 0x1b4
	// Func End, Address: 0x1c2024, Func Offset: 0x1d4
}

// xCameraLookYPR__FP7xCameraUiffffff
// Start address: 0x1c2030
void xCameraLookYPR(xCamera* cam, uint32 flags, float32 yaw, float32 pitch, float32 roll, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
	// Line 2307, Address: 0x1c2030, Func Offset: 0
	// Line 2315, Address: 0x1c2034, Func Offset: 0x4
	// Line 2307, Address: 0x1c2038, Func Offset: 0x8
	// Line 2326, Address: 0x1c203c, Func Offset: 0xc
	// Line 2307, Address: 0x1c2040, Func Offset: 0x10
	// Line 2315, Address: 0x1c2044, Func Offset: 0x14
	// Line 2307, Address: 0x1c2048, Func Offset: 0x18
	// Line 2315, Address: 0x1c2058, Func Offset: 0x28
	// Line 2326, Address: 0x1c205c, Func Offset: 0x2c
	// Line 2315, Address: 0x1c2068, Func Offset: 0x38
	// Line 2322, Address: 0x1c2078, Func Offset: 0x48
	// Line 2323, Address: 0x1c207c, Func Offset: 0x4c
	// Line 2326, Address: 0x1c2080, Func Offset: 0x50
	// Line 2327, Address: 0x1c2088, Func Offset: 0x58
	// Line 2330, Address: 0x1c2094, Func Offset: 0x64
	// Line 2333, Address: 0x1c2098, Func Offset: 0x68
	// Line 2331, Address: 0x1c209c, Func Offset: 0x6c
	// Line 2333, Address: 0x1c20a0, Func Offset: 0x70
	// Line 2334, Address: 0x1c20a8, Func Offset: 0x78
	// Line 2335, Address: 0x1c2104, Func Offset: 0xd4
	// Line 2337, Address: 0x1c210c, Func Offset: 0xdc
	// Line 2338, Address: 0x1c2110, Func Offset: 0xe0
	// Line 2344, Address: 0x1c2114, Func Offset: 0xe4
	// Line 2340, Address: 0x1c211c, Func Offset: 0xec
	// Line 2338, Address: 0x1c2120, Func Offset: 0xf0
	// Line 2344, Address: 0x1c2128, Func Offset: 0xf8
	// Line 2340, Address: 0x1c212c, Func Offset: 0xfc
	// Line 2344, Address: 0x1c2130, Func Offset: 0x100
	// Line 2341, Address: 0x1c2134, Func Offset: 0x104
	// Line 2344, Address: 0x1c2138, Func Offset: 0x108
	// Line 2342, Address: 0x1c2144, Func Offset: 0x114
	// Line 2344, Address: 0x1c2148, Func Offset: 0x118
	// Line 2345, Address: 0x1c214c, Func Offset: 0x11c
	// Line 2344, Address: 0x1c2150, Func Offset: 0x120
	// Line 2345, Address: 0x1c2158, Func Offset: 0x128
	// Line 2346, Address: 0x1c2168, Func Offset: 0x138
	// Line 2347, Address: 0x1c217c, Func Offset: 0x14c
	// Line 2348, Address: 0x1c2190, Func Offset: 0x160
	// Func End, Address: 0x1c21ac, Func Offset: 0x17c
}

// xCameraLook__FP7xCameraUiPC5xQuatfff
// Start address: 0x1c21b0
void xCameraLook(xCamera* cam, uint32 flags, xQuat* orn_goal, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
	// Line 2263, Address: 0x1c21b0, Func Offset: 0
	// Line 2271, Address: 0x1c21b4, Func Offset: 0x4
	// Line 2263, Address: 0x1c21b8, Func Offset: 0x8
	// Line 2276, Address: 0x1c21bc, Func Offset: 0xc
	// Line 2263, Address: 0x1c21c0, Func Offset: 0x10
	// Line 2271, Address: 0x1c21c4, Func Offset: 0x14
	// Line 2263, Address: 0x1c21c8, Func Offset: 0x18
	// Line 2271, Address: 0x1c21d0, Func Offset: 0x20
	// Line 2276, Address: 0x1c21d4, Func Offset: 0x24
	// Line 2271, Address: 0x1c21d8, Func Offset: 0x28
	// Line 2274, Address: 0x1c21e4, Func Offset: 0x34
	// Line 2276, Address: 0x1c2200, Func Offset: 0x50
	// Line 2277, Address: 0x1c2208, Func Offset: 0x58
	// Line 2280, Address: 0x1c2214, Func Offset: 0x64
	// Line 2281, Address: 0x1c221c, Func Offset: 0x6c
	// Line 2282, Address: 0x1c2278, Func Offset: 0xc8
	// Line 2291, Address: 0x1c2280, Func Offset: 0xd0
	// Line 2285, Address: 0x1c2288, Func Offset: 0xd8
	// Line 2291, Address: 0x1c228c, Func Offset: 0xdc
	// Line 2292, Address: 0x1c2290, Func Offset: 0xe0
	// Line 2291, Address: 0x1c2298, Func Offset: 0xe8
	// Line 2287, Address: 0x1c229c, Func Offset: 0xec
	// Line 2285, Address: 0x1c22a0, Func Offset: 0xf0
	// Line 2287, Address: 0x1c22a8, Func Offset: 0xf8
	// Line 2291, Address: 0x1c22ac, Func Offset: 0xfc
	// Line 2288, Address: 0x1c22b8, Func Offset: 0x108
	// Line 2291, Address: 0x1c22bc, Func Offset: 0x10c
	// Line 2289, Address: 0x1c22c0, Func Offset: 0x110
	// Line 2291, Address: 0x1c22c4, Func Offset: 0x114
	// Line 2292, Address: 0x1c22cc, Func Offset: 0x11c
	// Line 2293, Address: 0x1c22d8, Func Offset: 0x128
	// Line 2294, Address: 0x1c2350, Func Offset: 0x1a0
	// Func End, Address: 0x1c2364, Func Offset: 0x1b4
}

// xCameraFOV__FP7xCamerafff
// Start address: 0x1c2370
void xCameraFOV(xCamera* cam, float32 fov, float32 maxSpeed, float32 dt)
{
	float32 speed;
	float32 currentFOV;
	float32 len;
	// Line 2219, Address: 0x1c2370, Func Offset: 0
	// Line 2226, Address: 0x1c2378, Func Offset: 0x8
	// Line 2227, Address: 0x1c237c, Func Offset: 0xc
	// Line 2229, Address: 0x1c2388, Func Offset: 0x18
	// Line 2232, Address: 0x1c239c, Func Offset: 0x2c
	// Line 2234, Address: 0x1c23b0, Func Offset: 0x40
	// Line 2235, Address: 0x1c23c0, Func Offset: 0x50
	// Line 2236, Address: 0x1c23d0, Func Offset: 0x60
	// Line 2237, Address: 0x1c23d8, Func Offset: 0x68
	// Line 2238, Address: 0x1c23e4, Func Offset: 0x74
	// Line 2240, Address: 0x1c23f0, Func Offset: 0x80
	// Line 2245, Address: 0x1c2400, Func Offset: 0x90
	// Func End, Address: 0x1c240c, Func Offset: 0x9c
}

// xCameraMove__FP7xCameraRC5xVec3f
// Start address: 0x1c2410
void xCameraMove(xCamera* cam, xVec3& loc, float32 maxSpeed)
{
	// Line 2201, Address: 0x1c2410, Func Offset: 0
	// Line 2192, Address: 0x1c2418, Func Offset: 0x8
	// Line 2201, Address: 0x1c2420, Func Offset: 0x10
	// Line 2202, Address: 0x1c2434, Func Offset: 0x24
	// Line 2203, Address: 0x1c2450, Func Offset: 0x40
	// Line 2204, Address: 0x1c2468, Func Offset: 0x58
	// Line 2205, Address: 0x1c246c, Func Offset: 0x5c
	// Line 2204, Address: 0x1c2474, Func Offset: 0x64
	// Line 2205, Address: 0x1c2478, Func Offset: 0x68
	// Line 2204, Address: 0x1c247c, Func Offset: 0x6c
	// Line 2205, Address: 0x1c2480, Func Offset: 0x70
	// Line 2206, Address: 0x1c2490, Func Offset: 0x80
	// Line 2207, Address: 0x1c2498, Func Offset: 0x88
	// Line 2211, Address: 0x1c24b0, Func Offset: 0xa0
	// Line 2208, Address: 0x1c24b4, Func Offset: 0xa4
	// Line 2211, Address: 0x1c24cc, Func Offset: 0xbc
	// Line 2212, Address: 0x1c24d8, Func Offset: 0xc8
	// Line 2213, Address: 0x1c24e0, Func Offset: 0xd0
	// Func End, Address: 0x1c24e8, Func Offset: 0xd8
}

// xCameraMove__FP7xCameraRC5xVec3
// Start address: 0x1c24f0
void xCameraMove(xCamera* cam, xVec3& loc)
{
	// Line 2185, Address: 0x1c24f0, Func Offset: 0
	// Line 2187, Address: 0x1c24f4, Func Offset: 0x4
	// Line 2185, Address: 0x1c24f8, Func Offset: 0x8
	// Line 2187, Address: 0x1c2524, Func Offset: 0x34
	// Line 2188, Address: 0x1c2530, Func Offset: 0x40
	// Line 2189, Address: 0x1c2538, Func Offset: 0x48
	// Func End, Address: 0x1c2540, Func Offset: 0x50
}

// xCameraMove__FP7xCameraUiffffff
// Start address: 0x1c2540
void xCameraMove(xCamera* cam, uint32 flags, float32 dgoal, float32 hgoal, float32 pgoal, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
	// Line 2132, Address: 0x1c2540, Func Offset: 0
	// Line 2140, Address: 0x1c2544, Func Offset: 0x4
	// Line 2132, Address: 0x1c2548, Func Offset: 0x8
	// Line 2147, Address: 0x1c254c, Func Offset: 0xc
	// Line 2132, Address: 0x1c2550, Func Offset: 0x10
	// Line 2140, Address: 0x1c2554, Func Offset: 0x14
	// Line 2132, Address: 0x1c2558, Func Offset: 0x18
	// Line 2147, Address: 0x1c255c, Func Offset: 0x1c
	// Line 2132, Address: 0x1c2564, Func Offset: 0x24
	// Line 2140, Address: 0x1c2570, Func Offset: 0x30
	// Line 2143, Address: 0x1c2588, Func Offset: 0x48
	// Line 2144, Address: 0x1c258c, Func Offset: 0x4c
	// Line 2147, Address: 0x1c2590, Func Offset: 0x50
	// Line 2148, Address: 0x1c2598, Func Offset: 0x58
	// Line 2151, Address: 0x1c25a4, Func Offset: 0x64
	// Line 2152, Address: 0x1c25a8, Func Offset: 0x68
	// Line 2153, Address: 0x1c25ac, Func Offset: 0x6c
	// Line 2154, Address: 0x1c25b0, Func Offset: 0x70
	// Line 2159, Address: 0x1c2660, Func Offset: 0x120
	// Line 2156, Address: 0x1c2664, Func Offset: 0x124
	// Line 2159, Address: 0x1c2668, Func Offset: 0x128
	// Line 2156, Address: 0x1c2674, Func Offset: 0x134
	// Line 2159, Address: 0x1c268c, Func Offset: 0x14c
	// Line 2161, Address: 0x1c26a8, Func Offset: 0x168
	// Line 2164, Address: 0x1c26b0, Func Offset: 0x170
	// Line 2170, Address: 0x1c26b4, Func Offset: 0x174
	// Line 2166, Address: 0x1c26bc, Func Offset: 0x17c
	// Line 2164, Address: 0x1c26c0, Func Offset: 0x180
	// Line 2170, Address: 0x1c26c8, Func Offset: 0x188
	// Line 2166, Address: 0x1c26cc, Func Offset: 0x18c
	// Line 2170, Address: 0x1c26d0, Func Offset: 0x190
	// Line 2167, Address: 0x1c26d4, Func Offset: 0x194
	// Line 2170, Address: 0x1c26d8, Func Offset: 0x198
	// Line 2168, Address: 0x1c26e4, Func Offset: 0x1a4
	// Line 2170, Address: 0x1c26e8, Func Offset: 0x1a8
	// Line 2171, Address: 0x1c26ec, Func Offset: 0x1ac
	// Line 2172, Address: 0x1c26fc, Func Offset: 0x1bc
	// Line 2173, Address: 0x1c270c, Func Offset: 0x1cc
	// Line 2175, Address: 0x1c273c, Func Offset: 0x1fc
	// Func End, Address: 0x1c2760, Func Offset: 0x220
}

// xCameraDoCollisions__Fii
// Start address: 0x1c2760
void xCameraDoCollisions(int32 do_collis, int32 owner)
{
	// Line 2116, Address: 0x1c2760, Func Offset: 0
	// Line 2115, Address: 0x1c2768, Func Offset: 0x8
	// Line 2116, Address: 0x1c2770, Func Offset: 0x10
	// Line 2115, Address: 0x1c2778, Func Offset: 0x18
	// Line 2116, Address: 0x1c2788, Func Offset: 0x28
	// Line 2117, Address: 0x1c2794, Func Offset: 0x34
	// Line 2118, Address: 0x1c27a4, Func Offset: 0x44
	// Func End, Address: 0x1c27ac, Func Offset: 0x4c
}

// xCameraSetTargetOMatrix__FP7xCameraP7xMat4x3
// Start address: 0x1c27b0
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat)
{
	// Line 2028, Address: 0x1c27b0, Func Offset: 0
	// Func End, Address: 0x1c27b8, Func Offset: 0x8
}

// xCameraSetTargetMatrix__FP7xCameraP7xMat4x3
// Start address: 0x1c27c0
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat)
{
	// Line 2022, Address: 0x1c27c0, Func Offset: 0
	// Func End, Address: 0x1c27c8, Func Offset: 0x8
}

// xCameraSetScene__FP7xCameraP6xScene
// Start address: 0x1c27d0
void xCameraSetScene(xCamera* cam, xScene* sc)
{
	// Line 2000, Address: 0x1c27d0, Func Offset: 0
	// Line 2001, Address: 0x1c27d4, Func Offset: 0x4
	// Func End, Address: 0x1c27e4, Func Offset: 0x14
}

// xCameraShowRaster__FP7xCamera
// Start address: 0x1c27f0
void xCameraShowRaster(xCamera* cam)
{
	// Line 1991, Address: 0x1c27f0, Func Offset: 0
	// Func End, Address: 0x1c27f8, Func Offset: 0x8
}

// xCameraEnd__FP7xCamerafi
// Start address: 0x1c2800
void xCameraEnd(xCamera* cam, float32 seconds, int32 update_scrn_fx)
{
	// Line 1969, Address: 0x1c2800, Func Offset: 0
	// Line 1973, Address: 0x1c280c, Func Offset: 0xc
	// Line 1974, Address: 0x1c2814, Func Offset: 0x14
	// Line 1976, Address: 0x1c2820, Func Offset: 0x20
	// Line 1983, Address: 0x1c2828, Func Offset: 0x28
	// Func End, Address: 0x1c2838, Func Offset: 0x38
}

// xCameraFXEnd__FP7xCamera
// Start address: 0x1c2840
void xCameraFXEnd(xCamera* cam)
{
	// Line 1957, Address: 0x1c2840, Func Offset: 0
	// Line 1963, Address: 0x1c2844, Func Offset: 0x4
	// Line 1957, Address: 0x1c2848, Func Offset: 0x8
	// Line 1963, Address: 0x1c284c, Func Offset: 0xc
	// Line 1957, Address: 0x1c2850, Func Offset: 0x10
	// Line 1963, Address: 0x1c2854, Func Offset: 0x14
	// Line 1964, Address: 0x1c2864, Func Offset: 0x24
	// Line 1965, Address: 0x1c2874, Func Offset: 0x34
	// Func End, Address: 0x1c2884, Func Offset: 0x44
}

// xCameraFXUpdate__FP7xCameraf
// Start address: 0x1c2890
void xCameraFXUpdate(xCamera* cam, float32 dt)
{
	int32 i;
	// Line 1918, Address: 0x1c2890, Func Offset: 0
	// Line 1924, Address: 0x1c28a8, Func Offset: 0x18
	// Line 1918, Address: 0x1c28ac, Func Offset: 0x1c
	// Line 1924, Address: 0x1c28b0, Func Offset: 0x20
	// Line 1927, Address: 0x1c28c0, Func Offset: 0x30
	// Line 1929, Address: 0x1c28d0, Func Offset: 0x40
	// Line 1930, Address: 0x1c28d4, Func Offset: 0x44
	// Line 1929, Address: 0x1c28dc, Func Offset: 0x4c
	// Line 1930, Address: 0x1c28e8, Func Offset: 0x58
	// Line 1935, Address: 0x1c2918, Func Offset: 0x88
	// Line 1936, Address: 0x1c293c, Func Offset: 0xac
	// Line 1938, Address: 0x1c2944, Func Offset: 0xb4
	// Line 1940, Address: 0x1c294c, Func Offset: 0xbc
	// Line 1943, Address: 0x1c2978, Func Offset: 0xe8
	// Line 1945, Address: 0x1c2980, Func Offset: 0xf0
	// Line 1950, Address: 0x1c2994, Func Offset: 0x104
	// Line 1953, Address: 0x1c29a8, Func Offset: 0x118
	// Line 1954, Address: 0x1c29b4, Func Offset: 0x124
	// Func End, Address: 0x1c29d0, Func Offset: 0x140
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
	// Line 1869, Address: 0x1c29d0, Func Offset: 0
	// Line 1870, Address: 0x1c29f0, Func Offset: 0x20
	// Line 1872, Address: 0x1c29fc, Func Offset: 0x2c
	// Line 1875, Address: 0x1c2a10, Func Offset: 0x40
	// Line 1876, Address: 0x1c2a1c, Func Offset: 0x4c
	// Line 1877, Address: 0x1c2a28, Func Offset: 0x58
	// Line 1878, Address: 0x1c2a38, Func Offset: 0x68
	// Line 1881, Address: 0x1c2a48, Func Offset: 0x78
	// Line 1882, Address: 0x1c2a58, Func Offset: 0x88
	// Line 1886, Address: 0x1c2a7c, Func Offset: 0xac
	// Line 1890, Address: 0x1c2a9c, Func Offset: 0xcc
	// Line 1892, Address: 0x1c2ac0, Func Offset: 0xf0
	// Line 1893, Address: 0x1c2adc, Func Offset: 0x10c
	// Line 1896, Address: 0x1c2ae8, Func Offset: 0x118
	// Line 1899, Address: 0x1c2af0, Func Offset: 0x120
	// Line 1901, Address: 0x1c2b14, Func Offset: 0x144
	// Line 1903, Address: 0x1c2b18, Func Offset: 0x148
	// Line 1904, Address: 0x1c2b6c, Func Offset: 0x19c
	// Line 1905, Address: 0x1c2b90, Func Offset: 0x1c0
	// Line 1904, Address: 0x1c2ba0, Func Offset: 0x1d0
	// Line 1905, Address: 0x1c2ba4, Func Offset: 0x1d4
	// Line 1907, Address: 0x1c2bbc, Func Offset: 0x1ec
	// Line 1905, Address: 0x1c2bc0, Func Offset: 0x1f0
	// Line 1907, Address: 0x1c2bcc, Func Offset: 0x1fc
	// Line 1905, Address: 0x1c2bd0, Func Offset: 0x200
	// Line 1907, Address: 0x1c2be8, Func Offset: 0x218
	// Line 1908, Address: 0x1c2bf0, Func Offset: 0x220
	// Line 1911, Address: 0x1c2bfc, Func Offset: 0x22c
	// Line 1912, Address: 0x1c2c08, Func Offset: 0x238
	// Line 1913, Address: 0x1c2c1c, Func Offset: 0x24c
	// Line 1912, Address: 0x1c2c20, Func Offset: 0x250
	// Line 1913, Address: 0x1c2c24, Func Offset: 0x254
	// Line 1912, Address: 0x1c2c28, Func Offset: 0x258
	// Line 1913, Address: 0x1c2c50, Func Offset: 0x280
	// Line 1915, Address: 0x1c2c58, Func Offset: 0x288
	// Func End, Address: 0x1c2c78, Func Offset: 0x2a8
}

// xCameraFXShake__FfffffP5xVec3P5xVec3
// Start address: 0x1c2c80
void xCameraFXShake(float32 maxTime, float32 magnitude, float32 cycleMax, float32 rotate_magnitude, float32 radius, xVec3* epicenter, xVec3* player)
{
	// Line 1844, Address: 0x1c2c80, Func Offset: 0
	// Line 1845, Address: 0x1c2cc8, Func Offset: 0x48
	// Line 1848, Address: 0x1c2cd0, Func Offset: 0x50
	// Line 1851, Address: 0x1c2cd4, Func Offset: 0x54
	// Line 1848, Address: 0x1c2cd8, Func Offset: 0x58
	// Line 1849, Address: 0x1c2cdc, Func Offset: 0x5c
	// Line 1856, Address: 0x1c2ce0, Func Offset: 0x60
	// Line 1850, Address: 0x1c2ce4, Func Offset: 0x64
	// Line 1851, Address: 0x1c2ce8, Func Offset: 0x68
	// Line 1852, Address: 0x1c2cec, Func Offset: 0x6c
	// Line 1853, Address: 0x1c2cf0, Func Offset: 0x70
	// Line 1854, Address: 0x1c2cf4, Func Offset: 0x74
	// Line 1855, Address: 0x1c2cf8, Func Offset: 0x78
	// Line 1856, Address: 0x1c2cfc, Func Offset: 0x7c
	// Line 1857, Address: 0x1c2d00, Func Offset: 0x80
	// Line 1859, Address: 0x1c2d04, Func Offset: 0x84
	// Line 1860, Address: 0x1c2d08, Func Offset: 0x88
	// Line 1861, Address: 0x1c2d10, Func Offset: 0x90
	// Line 1862, Address: 0x1c2d18, Func Offset: 0x98
	// Line 1863, Address: 0x1c2d30, Func Offset: 0xb0
	// Line 1865, Address: 0x1c2d34, Func Offset: 0xb4
	// Func End, Address: 0x1c2d40, Func Offset: 0xc0
}

// xCameraFXZoomUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x1c2d40
void xCameraFXZoomUpdate(cameraFX* f, float32 dt, xMat4x3* m)
{
	// Line 1772, Address: 0x1c2d40, Func Offset: 0
	// Line 1773, Address: 0x1c2d44, Func Offset: 0x4
	// Line 1772, Address: 0x1c2d48, Func Offset: 0x8
	// Line 1773, Address: 0x1c2d4c, Func Offset: 0xc
	// Line 1776, Address: 0x1c2d80, Func Offset: 0x40
	// Line 1777, Address: 0x1c2d90, Func Offset: 0x50
	// Line 1776, Address: 0x1c2d94, Func Offset: 0x54
	// Line 1777, Address: 0x1c2d98, Func Offset: 0x58
	// Line 1778, Address: 0x1c2da8, Func Offset: 0x68
	// Line 1780, Address: 0x1c2db8, Func Offset: 0x78
	// Line 1781, Address: 0x1c2dbc, Func Offset: 0x7c
	// Line 1782, Address: 0x1c2dc0, Func Offset: 0x80
	// Line 1783, Address: 0x1c2dc4, Func Offset: 0x84
	// Line 1784, Address: 0x1c2dc8, Func Offset: 0x88
	// Line 1785, Address: 0x1c2dd4, Func Offset: 0x94
	// Line 1787, Address: 0x1c2ddc, Func Offset: 0x9c
	// Line 1788, Address: 0x1c2de0, Func Offset: 0xa0
	// Line 1789, Address: 0x1c2dec, Func Offset: 0xac
	// Line 1791, Address: 0x1c2dfc, Func Offset: 0xbc
	// Line 1792, Address: 0x1c2e00, Func Offset: 0xc0
	// Line 1795, Address: 0x1c2e08, Func Offset: 0xc8
	// Line 1798, Address: 0x1c2e10, Func Offset: 0xd0
	// Line 1799, Address: 0x1c2e1c, Func Offset: 0xdc
	// Line 1801, Address: 0x1c2e24, Func Offset: 0xe4
	// Line 1802, Address: 0x1c2e28, Func Offset: 0xe8
	// Line 1804, Address: 0x1c2e30, Func Offset: 0xf0
	// Line 1802, Address: 0x1c2e34, Func Offset: 0xf4
	// Line 1803, Address: 0x1c2e3c, Func Offset: 0xfc
	// Line 1802, Address: 0x1c2e40, Func Offset: 0x100
	// Line 1803, Address: 0x1c2e44, Func Offset: 0x104
	// Line 1804, Address: 0x1c2e4c, Func Offset: 0x10c
	// Line 1806, Address: 0x1c2e58, Func Offset: 0x118
	// Line 1807, Address: 0x1c2e5c, Func Offset: 0x11c
	// Line 1810, Address: 0x1c2e60, Func Offset: 0x120
	// Line 1811, Address: 0x1c2e6c, Func Offset: 0x12c
	// Line 1812, Address: 0x1c2e70, Func Offset: 0x130
	// Line 1820, Address: 0x1c2e7c, Func Offset: 0x13c
	// Line 1822, Address: 0x1c2e80, Func Offset: 0x140
	// Func End, Address: 0x1c2e8c, Func Offset: 0x14c
}

// xCameraFXBegin__FP7xCamera
// Start address: 0x1c2e90
void xCameraFXBegin(xCamera* cam)
{
	// Line 1630, Address: 0x1c2e90, Func Offset: 0
	// Line 1634, Address: 0x1c2e94, Func Offset: 0x4
	// Line 1630, Address: 0x1c2e98, Func Offset: 0x8
	// Line 1634, Address: 0x1c2e9c, Func Offset: 0xc
	// Line 1630, Address: 0x1c2ea0, Func Offset: 0x10
	// Line 1634, Address: 0x1c2ea4, Func Offset: 0x14
	// Line 1635, Address: 0x1c2eb8, Func Offset: 0x28
	// Line 1636, Address: 0x1c2ecc, Func Offset: 0x3c
	// Func End, Address: 0x1c2edc, Func Offset: 0x4c
}

// xCameraBegin__FP7xCamerai
// Start address: 0x1c2ee0
void xCameraBegin(xCamera* cam, int32 clear)
{
	// Line 1600, Address: 0x1c2ee0, Func Offset: 0
	// Line 1617, Address: 0x1c2ef0, Func Offset: 0x10
	// Line 1620, Address: 0x1c2ef8, Func Offset: 0x18
	// Line 1625, Address: 0x1c2f04, Func Offset: 0x24
	// Line 1626, Address: 0x1c2f10, Func Offset: 0x30
	// Func End, Address: 0x1c2f20, Func Offset: 0x40
}

// xCameraUpdate__FP7xCameraf
// Start address: 0x1c2f20
void xCameraUpdate(xCamera* cam, float32 dt)
{
	int32 i;
	int32 num_updates;
	float32 sdt;
	// Line 1492, Address: 0x1c2f20, Func Offset: 0
	// Line 1585, Address: 0x1c2f24, Func Offset: 0x4
	// Line 1492, Address: 0x1c2f28, Func Offset: 0x8
	// Line 1585, Address: 0x1c2f2c, Func Offset: 0xc
	// Line 1492, Address: 0x1c2f30, Func Offset: 0x10
	// Line 1585, Address: 0x1c2f48, Func Offset: 0x28
	// Line 1591, Address: 0x1c2f54, Func Offset: 0x34
	// Line 1585, Address: 0x1c2f58, Func Offset: 0x38
	// Line 1590, Address: 0x1c2f5c, Func Offset: 0x3c
	// Line 1591, Address: 0x1c2f6c, Func Offset: 0x4c
	// Line 1592, Address: 0x1c2f78, Func Offset: 0x58
	// Line 1593, Address: 0x1c2f80, Func Offset: 0x60
	// Line 1592, Address: 0x1c2f84, Func Offset: 0x64
	// Line 1593, Address: 0x1c2f8c, Func Offset: 0x6c
	// Line 1594, Address: 0x1c2f94, Func Offset: 0x74
	// Line 1596, Address: 0x1c2fa8, Func Offset: 0x88
	// Func End, Address: 0x1c2fc4, Func Offset: 0xa4
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
	// Line 738, Address: 0x1c2fd0, Func Offset: 0
	// Line 741, Address: 0x1c3000, Func Offset: 0x30
	// Line 755, Address: 0x1c300c, Func Offset: 0x3c
	// Line 763, Address: 0x1c3024, Func Offset: 0x54
	// Line 770, Address: 0x1c3030, Func Offset: 0x60
	// Line 762, Address: 0x1c3034, Func Offset: 0x64
	// Line 763, Address: 0x1c3044, Func Offset: 0x74
	// Line 762, Address: 0x1c3048, Func Offset: 0x78
	// Line 767, Address: 0x1c3058, Func Offset: 0x88
	// Line 764, Address: 0x1c305c, Func Offset: 0x8c
	// Line 767, Address: 0x1c3060, Func Offset: 0x90
	// Line 762, Address: 0x1c3068, Func Offset: 0x98
	// Line 764, Address: 0x1c306c, Func Offset: 0x9c
	// Line 767, Address: 0x1c3070, Func Offset: 0xa0
	// Line 764, Address: 0x1c3078, Func Offset: 0xa8
	// Line 770, Address: 0x1c307c, Func Offset: 0xac
	// Line 772, Address: 0x1c3084, Func Offset: 0xb4
	// Line 774, Address: 0x1c308c, Func Offset: 0xbc
	// Line 773, Address: 0x1c3090, Func Offset: 0xc0
	// Line 787, Address: 0x1c3094, Func Offset: 0xc4
	// Line 774, Address: 0x1c3098, Func Offset: 0xc8
	// Line 772, Address: 0x1c309c, Func Offset: 0xcc
	// Line 774, Address: 0x1c30a4, Func Offset: 0xd4
	// Line 786, Address: 0x1c30a8, Func Offset: 0xd8
	// Line 787, Address: 0x1c30ac, Func Offset: 0xdc
	// Line 786, Address: 0x1c30b8, Func Offset: 0xe8
	// Line 787, Address: 0x1c30bc, Func Offset: 0xec
	// Line 774, Address: 0x1c30c4, Func Offset: 0xf4
	// Line 787, Address: 0x1c30c8, Func Offset: 0xf8
	// Line 786, Address: 0x1c30cc, Func Offset: 0xfc
	// Line 787, Address: 0x1c30d0, Func Offset: 0x100
	// Line 791, Address: 0x1c30d8, Func Offset: 0x108
	// Line 797, Address: 0x1c30e8, Func Offset: 0x118
	// Line 799, Address: 0x1c30ec, Func Offset: 0x11c
	// Line 797, Address: 0x1c30f4, Func Offset: 0x124
	// Line 799, Address: 0x1c30f8, Func Offset: 0x128
	// Line 801, Address: 0x1c3104, Func Offset: 0x134
	// Line 802, Address: 0x1c310c, Func Offset: 0x13c
	// Line 803, Address: 0x1c3110, Func Offset: 0x140
	// Line 805, Address: 0x1c3124, Func Offset: 0x154
	// Line 822, Address: 0x1c3130, Func Offset: 0x160
	// Line 823, Address: 0x1c3138, Func Offset: 0x168
	// Line 824, Address: 0x1c3140, Func Offset: 0x170
	// Line 822, Address: 0x1c3148, Func Offset: 0x178
	// Line 823, Address: 0x1c314c, Func Offset: 0x17c
	// Line 824, Address: 0x1c3150, Func Offset: 0x180
	// Line 830, Address: 0x1c3164, Func Offset: 0x194
	// Line 824, Address: 0x1c3168, Func Offset: 0x198
	// Line 830, Address: 0x1c3174, Func Offset: 0x1a4
	// Line 832, Address: 0x1c3180, Func Offset: 0x1b0
	// Line 833, Address: 0x1c318c, Func Offset: 0x1bc
	// Line 832, Address: 0x1c3194, Func Offset: 0x1c4
	// Line 833, Address: 0x1c3198, Func Offset: 0x1c8
	// Line 834, Address: 0x1c31a4, Func Offset: 0x1d4
	// Line 835, Address: 0x1c31b0, Func Offset: 0x1e0
	// Line 841, Address: 0x1c31b8, Func Offset: 0x1e8
	// Line 843, Address: 0x1c31d0, Func Offset: 0x200
	// Line 844, Address: 0x1c31e0, Func Offset: 0x210
	// Line 843, Address: 0x1c31e8, Func Offset: 0x218
	// Line 845, Address: 0x1c31f8, Func Offset: 0x228
	// Line 843, Address: 0x1c31fc, Func Offset: 0x22c
	// Line 844, Address: 0x1c3200, Func Offset: 0x230
	// Line 845, Address: 0x1c3204, Func Offset: 0x234
	// Line 846, Address: 0x1c320c, Func Offset: 0x23c
	// Line 852, Address: 0x1c3214, Func Offset: 0x244
	// Line 858, Address: 0x1c3220, Func Offset: 0x250
	// Line 857, Address: 0x1c3224, Func Offset: 0x254
	// Line 859, Address: 0x1c3228, Func Offset: 0x258
	// Line 858, Address: 0x1c322c, Func Offset: 0x25c
	// Line 859, Address: 0x1c3230, Func Offset: 0x260
	// Line 860, Address: 0x1c3234, Func Offset: 0x264
	// Line 863, Address: 0x1c3238, Func Offset: 0x268
	// Line 857, Address: 0x1c323c, Func Offset: 0x26c
	// Line 858, Address: 0x1c3248, Func Offset: 0x278
	// Line 859, Address: 0x1c3250, Func Offset: 0x280
	// Line 858, Address: 0x1c3258, Func Offset: 0x288
	// Line 860, Address: 0x1c325c, Func Offset: 0x28c
	// Line 863, Address: 0x1c3268, Func Offset: 0x298
	// Line 861, Address: 0x1c3270, Func Offset: 0x2a0
	// Line 862, Address: 0x1c3280, Func Offset: 0x2b0
	// Line 864, Address: 0x1c3288, Func Offset: 0x2b8
	// Line 862, Address: 0x1c328c, Func Offset: 0x2bc
	// Line 864, Address: 0x1c3294, Func Offset: 0x2c4
	// Line 865, Address: 0x1c3298, Func Offset: 0x2c8
	// Line 863, Address: 0x1c329c, Func Offset: 0x2cc
	// Line 864, Address: 0x1c32a4, Func Offset: 0x2d4
	// Line 865, Address: 0x1c32ac, Func Offset: 0x2dc
	// Line 864, Address: 0x1c32b8, Func Offset: 0x2e8
	// Line 865, Address: 0x1c32bc, Func Offset: 0x2ec
	// Line 880, Address: 0x1c32c0, Func Offset: 0x2f0
	// Line 879, Address: 0x1c32c4, Func Offset: 0x2f4
	// Line 880, Address: 0x1c32c8, Func Offset: 0x2f8
	// Line 883, Address: 0x1c32d4, Func Offset: 0x304
	// Line 882, Address: 0x1c32d8, Func Offset: 0x308
	// Line 883, Address: 0x1c32dc, Func Offset: 0x30c
	// Line 889, Address: 0x1c32ec, Func Offset: 0x31c
	// Line 888, Address: 0x1c32f0, Func Offset: 0x320
	// Line 889, Address: 0x1c32f4, Func Offset: 0x324
	// Line 883, Address: 0x1c32fc, Func Offset: 0x32c
	// Line 881, Address: 0x1c3308, Func Offset: 0x338
	// Line 883, Address: 0x1c330c, Func Offset: 0x33c
	// Line 889, Address: 0x1c3310, Func Offset: 0x340
	// Line 888, Address: 0x1c3314, Func Offset: 0x344
	// Line 889, Address: 0x1c3318, Func Offset: 0x348
	// Line 888, Address: 0x1c3324, Func Offset: 0x354
	// Line 889, Address: 0x1c3328, Func Offset: 0x358
	// Line 894, Address: 0x1c3330, Func Offset: 0x360
	// Line 897, Address: 0x1c3338, Func Offset: 0x368
	// Line 898, Address: 0x1c3344, Func Offset: 0x374
	// Line 900, Address: 0x1c337c, Func Offset: 0x3ac
	// Line 902, Address: 0x1c33cc, Func Offset: 0x3fc
	// Line 904, Address: 0x1c33ec, Func Offset: 0x41c
	// Line 905, Address: 0x1c33fc, Func Offset: 0x42c
	// Line 906, Address: 0x1c3400, Func Offset: 0x430
	// Line 908, Address: 0x1c344c, Func Offset: 0x47c
	// Line 909, Address: 0x1c3464, Func Offset: 0x494
	// Line 910, Address: 0x1c3468, Func Offset: 0x498
	// Line 913, Address: 0x1c34b8, Func Offset: 0x4e8
	// Line 914, Address: 0x1c34c8, Func Offset: 0x4f8
	// Line 916, Address: 0x1c34fc, Func Offset: 0x52c
	// Line 915, Address: 0x1c350c, Func Offset: 0x53c
	// Line 916, Address: 0x1c3510, Func Offset: 0x540
	// Line 918, Address: 0x1c3534, Func Offset: 0x564
	// Line 920, Address: 0x1c3554, Func Offset: 0x584
	// Line 922, Address: 0x1c3564, Func Offset: 0x594
	// Line 921, Address: 0x1c356c, Func Offset: 0x59c
	// Line 922, Address: 0x1c3570, Func Offset: 0x5a0
	// Line 924, Address: 0x1c3598, Func Offset: 0x5c8
	// Line 926, Address: 0x1c35ac, Func Offset: 0x5dc
	// Line 925, Address: 0x1c35c0, Func Offset: 0x5f0
	// Line 926, Address: 0x1c35c4, Func Offset: 0x5f4
	// Line 928, Address: 0x1c35ec, Func Offset: 0x61c
	// Line 929, Address: 0x1c35f0, Func Offset: 0x620
	// Line 930, Address: 0x1c3600, Func Offset: 0x630
	// Line 931, Address: 0x1c3634, Func Offset: 0x664
	// Line 933, Address: 0x1c363c, Func Offset: 0x66c
	// Line 931, Address: 0x1c3644, Func Offset: 0x674
	// Line 933, Address: 0x1c3648, Func Offset: 0x678
	// Line 931, Address: 0x1c3660, Func Offset: 0x690
	// Line 933, Address: 0x1c3664, Func Offset: 0x694
	// Line 935, Address: 0x1c369c, Func Offset: 0x6cc
	// Line 938, Address: 0x1c36bc, Func Offset: 0x6ec
	// Line 939, Address: 0x1c36cc, Func Offset: 0x6fc
	// Line 940, Address: 0x1c36dc, Func Offset: 0x70c
	// Line 941, Address: 0x1c3718, Func Offset: 0x748
	// Line 943, Address: 0x1c3720, Func Offset: 0x750
	// Line 941, Address: 0x1c3724, Func Offset: 0x754
	// Line 943, Address: 0x1c3730, Func Offset: 0x760
	// Line 941, Address: 0x1c373c, Func Offset: 0x76c
	// Line 943, Address: 0x1c3740, Func Offset: 0x770
	// Line 945, Address: 0x1c378c, Func Offset: 0x7bc
	// Line 946, Address: 0x1c37ac, Func Offset: 0x7dc
	// Line 948, Address: 0x1c37b4, Func Offset: 0x7e4
	// Line 946, Address: 0x1c37b8, Func Offset: 0x7e8
	// Line 948, Address: 0x1c37c0, Func Offset: 0x7f0
	// Line 946, Address: 0x1c37cc, Func Offset: 0x7fc
	// Line 948, Address: 0x1c37d0, Func Offset: 0x800
	// Line 949, Address: 0x1c381c, Func Offset: 0x84c
	// Line 951, Address: 0x1c3828, Func Offset: 0x858
	// Line 953, Address: 0x1c3860, Func Offset: 0x890
	// Line 955, Address: 0x1c3868, Func Offset: 0x898
	// Line 975, Address: 0x1c38a4, Func Offset: 0x8d4
	// Line 980, Address: 0x1c38a8, Func Offset: 0x8d8
	// Line 987, Address: 0x1c38b8, Func Offset: 0x8e8
	// Line 988, Address: 0x1c38c0, Func Offset: 0x8f0
	// Line 990, Address: 0x1c38cc, Func Offset: 0x8fc
	// Line 991, Address: 0x1c38d8, Func Offset: 0x908
	// Line 990, Address: 0x1c38e0, Func Offset: 0x910
	// Line 991, Address: 0x1c38ec, Func Offset: 0x91c
	// Line 992, Address: 0x1c38f8, Func Offset: 0x928
	// Line 993, Address: 0x1c390c, Func Offset: 0x93c
	// Line 997, Address: 0x1c3920, Func Offset: 0x950
	// Line 998, Address: 0x1c3924, Func Offset: 0x954
	// Line 999, Address: 0x1c3928, Func Offset: 0x958
	// Line 1002, Address: 0x1c392c, Func Offset: 0x95c
	// Line 997, Address: 0x1c3938, Func Offset: 0x968
	// Line 1002, Address: 0x1c393c, Func Offset: 0x96c
	// Line 998, Address: 0x1c394c, Func Offset: 0x97c
	// Line 999, Address: 0x1c3950, Func Offset: 0x980
	// Line 1002, Address: 0x1c3954, Func Offset: 0x984
	// Line 1005, Address: 0x1c3964, Func Offset: 0x994
	// Line 1002, Address: 0x1c3968, Func Offset: 0x998
	// Line 1006, Address: 0x1c3978, Func Offset: 0x9a8
	// Line 1007, Address: 0x1c397c, Func Offset: 0x9ac
	// Line 1002, Address: 0x1c3980, Func Offset: 0x9b0
	// Line 1005, Address: 0x1c39a4, Func Offset: 0x9d4
	// Line 1006, Address: 0x1c39b0, Func Offset: 0x9e0
	// Line 1007, Address: 0x1c39bc, Func Offset: 0x9ec
	// Line 1009, Address: 0x1c39c8, Func Offset: 0x9f8
	// Line 1015, Address: 0x1c39d8, Func Offset: 0xa08
	// Line 1017, Address: 0x1c39dc, Func Offset: 0xa0c
	// Line 1015, Address: 0x1c39e4, Func Offset: 0xa14
	// Line 1017, Address: 0x1c39e8, Func Offset: 0xa18
	// Line 1019, Address: 0x1c39f4, Func Offset: 0xa24
	// Line 1022, Address: 0x1c39fc, Func Offset: 0xa2c
	// Line 1033, Address: 0x1c3a08, Func Offset: 0xa38
	// Line 1034, Address: 0x1c3a1c, Func Offset: 0xa4c
	// Line 1035, Address: 0x1c3a30, Func Offset: 0xa60
	// Line 1040, Address: 0x1c3a40, Func Offset: 0xa70
	// Line 1042, Address: 0x1c3a50, Func Offset: 0xa80
	// Line 1043, Address: 0x1c3a5c, Func Offset: 0xa8c
	// Line 1042, Address: 0x1c3a68, Func Offset: 0xa98
	// Line 1043, Address: 0x1c3a6c, Func Offset: 0xa9c
	// Line 1044, Address: 0x1c3a78, Func Offset: 0xaa8
	// Line 1045, Address: 0x1c3a80, Func Offset: 0xab0
	// Line 1044, Address: 0x1c3a84, Func Offset: 0xab4
	// Line 1045, Address: 0x1c3a88, Func Offset: 0xab8
	// Line 1051, Address: 0x1c3a8c, Func Offset: 0xabc
	// Line 1053, Address: 0x1c3aa8, Func Offset: 0xad8
	// Line 1054, Address: 0x1c3ab8, Func Offset: 0xae8
	// Line 1053, Address: 0x1c3ac0, Func Offset: 0xaf0
	// Line 1055, Address: 0x1c3ad0, Func Offset: 0xb00
	// Line 1053, Address: 0x1c3ad4, Func Offset: 0xb04
	// Line 1054, Address: 0x1c3ad8, Func Offset: 0xb08
	// Line 1055, Address: 0x1c3adc, Func Offset: 0xb0c
	// Line 1056, Address: 0x1c3ae0, Func Offset: 0xb10
	// Line 1055, Address: 0x1c3ae8, Func Offset: 0xb18
	// Line 1062, Address: 0x1c3aec, Func Offset: 0xb1c
	// Line 1068, Address: 0x1c3af8, Func Offset: 0xb28
	// Line 1067, Address: 0x1c3afc, Func Offset: 0xb2c
	// Line 1069, Address: 0x1c3b00, Func Offset: 0xb30
	// Line 1068, Address: 0x1c3b04, Func Offset: 0xb34
	// Line 1069, Address: 0x1c3b08, Func Offset: 0xb38
	// Line 1070, Address: 0x1c3b0c, Func Offset: 0xb3c
	// Line 1067, Address: 0x1c3b18, Func Offset: 0xb48
	// Line 1068, Address: 0x1c3b24, Func Offset: 0xb54
	// Line 1069, Address: 0x1c3b2c, Func Offset: 0xb5c
	// Line 1068, Address: 0x1c3b34, Func Offset: 0xb64
	// Line 1070, Address: 0x1c3b38, Func Offset: 0xb68
	// Line 1073, Address: 0x1c3b44, Func Offset: 0xb74
	// Line 1071, Address: 0x1c3b50, Func Offset: 0xb80
	// Line 1072, Address: 0x1c3b60, Func Offset: 0xb90
	// Line 1075, Address: 0x1c3b70, Func Offset: 0xba0
	// Line 1074, Address: 0x1c3b74, Func Offset: 0xba4
	// Line 1075, Address: 0x1c3b78, Func Offset: 0xba8
	// Line 1074, Address: 0x1c3b7c, Func Offset: 0xbac
	// Line 1073, Address: 0x1c3b80, Func Offset: 0xbb0
	// Line 1074, Address: 0x1c3b84, Func Offset: 0xbb4
	// Line 1073, Address: 0x1c3b88, Func Offset: 0xbb8
	// Line 1074, Address: 0x1c3b8c, Func Offset: 0xbbc
	// Line 1075, Address: 0x1c3b90, Func Offset: 0xbc0
	// Line 1074, Address: 0x1c3b98, Func Offset: 0xbc8
	// Line 1075, Address: 0x1c3b9c, Func Offset: 0xbcc
	// Line 1089, Address: 0x1c3ba0, Func Offset: 0xbd0
	// Line 1097, Address: 0x1c3ba4, Func Offset: 0xbd4
	// Line 1090, Address: 0x1c3bb0, Func Offset: 0xbe0
	// Line 1098, Address: 0x1c3bb4, Func Offset: 0xbe4
	// Line 1097, Address: 0x1c3bb8, Func Offset: 0xbe8
	// Line 1098, Address: 0x1c3bbc, Func Offset: 0xbec
	// Line 1091, Address: 0x1c3bc0, Func Offset: 0xbf0
	// Line 1099, Address: 0x1c3bc4, Func Offset: 0xbf4
	// Line 1098, Address: 0x1c3bc8, Func Offset: 0xbf8
	// Line 1099, Address: 0x1c3bd0, Func Offset: 0xc00
	// Line 1102, Address: 0x1c3bdc, Func Offset: 0xc0c
	// Line 1107, Address: 0x1c3bf0, Func Offset: 0xc20
	// Line 1110, Address: 0x1c3bf8, Func Offset: 0xc28
	// Line 1111, Address: 0x1c3c24, Func Offset: 0xc54
	// Line 1112, Address: 0x1c3c2c, Func Offset: 0xc5c
	// Line 1113, Address: 0x1c3c74, Func Offset: 0xca4
	// Line 1116, Address: 0x1c3c78, Func Offset: 0xca8
	// Line 1117, Address: 0x1c3ca4, Func Offset: 0xcd4
	// Line 1118, Address: 0x1c3cac, Func Offset: 0xcdc
	// Line 1119, Address: 0x1c3cf4, Func Offset: 0xd24
	// Line 1122, Address: 0x1c3cf8, Func Offset: 0xd28
	// Line 1123, Address: 0x1c3d24, Func Offset: 0xd54
	// Line 1124, Address: 0x1c3d2c, Func Offset: 0xd5c
	// Line 1125, Address: 0x1c3d74, Func Offset: 0xda4
	// Line 1129, Address: 0x1c3d78, Func Offset: 0xda8
	// Line 1149, Address: 0x1c3d8c, Func Offset: 0xdbc
	// Line 1150, Address: 0x1c3d98, Func Offset: 0xdc8
	// Line 1152, Address: 0x1c3da4, Func Offset: 0xdd4
	// Line 1157, Address: 0x1c3db0, Func Offset: 0xde0
	// Line 1166, Address: 0x1c3dc0, Func Offset: 0xdf0
	// Line 1167, Address: 0x1c3dd0, Func Offset: 0xe00
	// Line 1341, Address: 0x1c3dd4, Func Offset: 0xe04
	// Line 1168, Address: 0x1c3de0, Func Offset: 0xe10
	// Line 1171, Address: 0x1c3de4, Func Offset: 0xe14
	// Line 1341, Address: 0x1c3df0, Func Offset: 0xe20
	// Line 1171, Address: 0x1c3df4, Func Offset: 0xe24
	// Line 1167, Address: 0x1c3e00, Func Offset: 0xe30
	// Line 1168, Address: 0x1c3e08, Func Offset: 0xe38
	// Line 1171, Address: 0x1c3e0c, Func Offset: 0xe3c
	// Line 1341, Address: 0x1c3e18, Func Offset: 0xe48
	// Line 1171, Address: 0x1c3e20, Func Offset: 0xe50
	// Line 1336, Address: 0x1c3e74, Func Offset: 0xea4
	// Line 1338, Address: 0x1c3f08, Func Offset: 0xf38
	// Line 1341, Address: 0x1c3f40, Func Offset: 0xf70
	// Line 1343, Address: 0x1c3fd8, Func Offset: 0x1008
	// Line 1342, Address: 0x1c3fdc, Func Offset: 0x100c
	// Line 1343, Address: 0x1c3fe0, Func Offset: 0x1010
	// Line 1349, Address: 0x1c4008, Func Offset: 0x1038
	// Line 1350, Address: 0x1c400c, Func Offset: 0x103c
	// Line 1349, Address: 0x1c4010, Func Offset: 0x1040
	// Line 1350, Address: 0x1c4024, Func Offset: 0x1054
	// Line 1349, Address: 0x1c4028, Func Offset: 0x1058
	// Line 1350, Address: 0x1c4034, Func Offset: 0x1064
	// Line 1351, Address: 0x1c4048, Func Offset: 0x1078
	// Line 1352, Address: 0x1c404c, Func Offset: 0x107c
	// Line 1351, Address: 0x1c4050, Func Offset: 0x1080
	// Line 1352, Address: 0x1c4058, Func Offset: 0x1088
	// Line 1353, Address: 0x1c406c, Func Offset: 0x109c
	// Line 1359, Address: 0x1c4070, Func Offset: 0x10a0
	// Line 1365, Address: 0x1c40ac, Func Offset: 0x10dc
	// Line 1366, Address: 0x1c40ec, Func Offset: 0x111c
	// Line 1367, Address: 0x1c4118, Func Offset: 0x1148
	// Line 1366, Address: 0x1c411c, Func Offset: 0x114c
	// Line 1367, Address: 0x1c4120, Func Offset: 0x1150
	// Line 1370, Address: 0x1c4138, Func Offset: 0x1168
	// Line 1371, Address: 0x1c4140, Func Offset: 0x1170
	// Line 1372, Address: 0x1c414c, Func Offset: 0x117c
	// Line 1375, Address: 0x1c4178, Func Offset: 0x11a8
	// Line 1376, Address: 0x1c4190, Func Offset: 0x11c0
	// Line 1377, Address: 0x1c41ac, Func Offset: 0x11dc
	// Line 1378, Address: 0x1c41b8, Func Offset: 0x11e8
	// Line 1380, Address: 0x1c41d4, Func Offset: 0x1204
	// Line 1381, Address: 0x1c41e0, Func Offset: 0x1210
	// Line 1382, Address: 0x1c420c, Func Offset: 0x123c
	// Line 1383, Address: 0x1c4210, Func Offset: 0x1240
	// Line 1384, Address: 0x1c421c, Func Offset: 0x124c
	// Line 1388, Address: 0x1c4220, Func Offset: 0x1250
	// Line 1390, Address: 0x1c422c, Func Offset: 0x125c
	// Line 1393, Address: 0x1c424c, Func Offset: 0x127c
	// Line 1394, Address: 0x1c4250, Func Offset: 0x1280
	// Line 1393, Address: 0x1c425c, Func Offset: 0x128c
	// Line 1394, Address: 0x1c4280, Func Offset: 0x12b0
	// Line 1404, Address: 0x1c4288, Func Offset: 0x12b8
	// Line 1405, Address: 0x1c42a4, Func Offset: 0x12d4
	// Line 1414, Address: 0x1c42b0, Func Offset: 0x12e0
	// Line 1458, Address: 0x1c42b8, Func Offset: 0x12e8
	// Line 1461, Address: 0x1c42bc, Func Offset: 0x12ec
	// Line 1459, Address: 0x1c42c0, Func Offset: 0x12f0
	// Line 1461, Address: 0x1c42c4, Func Offset: 0x12f4
	// Line 1459, Address: 0x1c42c8, Func Offset: 0x12f8
	// Line 1461, Address: 0x1c42cc, Func Offset: 0x12fc
	// Line 1459, Address: 0x1c42d4, Func Offset: 0x1304
	// Line 1461, Address: 0x1c42d8, Func Offset: 0x1308
	// Line 1458, Address: 0x1c42e0, Func Offset: 0x1310
	// Line 1459, Address: 0x1c42e8, Func Offset: 0x1318
	// Line 1460, Address: 0x1c42f8, Func Offset: 0x1328
	// Line 1461, Address: 0x1c4300, Func Offset: 0x1330
	// Line 1462, Address: 0x1c4308, Func Offset: 0x1338
	// Line 1466, Address: 0x1c431c, Func Offset: 0x134c
	// Line 1467, Address: 0x1c4348, Func Offset: 0x1378
	// Line 1466, Address: 0x1c434c, Func Offset: 0x137c
	// Line 1467, Address: 0x1c435c, Func Offset: 0x138c
	// Line 1466, Address: 0x1c4360, Func Offset: 0x1390
	// Line 1467, Address: 0x1c43d8, Func Offset: 0x1408
	// Line 1468, Address: 0x1c43e0, Func Offset: 0x1410
	// Line 1469, Address: 0x1c43e4, Func Offset: 0x1414
	// Line 1468, Address: 0x1c43e8, Func Offset: 0x1418
	// Line 1470, Address: 0x1c43ec, Func Offset: 0x141c
	// Line 1471, Address: 0x1c43f0, Func Offset: 0x1420
	// Line 1472, Address: 0x1c4418, Func Offset: 0x1448
	// Line 1475, Address: 0x1c4440, Func Offset: 0x1470
	// Line 1476, Address: 0x1c4454, Func Offset: 0x1484
	// Line 1477, Address: 0x1c4480, Func Offset: 0x14b0
	// Line 1478, Address: 0x1c4494, Func Offset: 0x14c4
	// Line 1479, Address: 0x1c44a8, Func Offset: 0x14d8
	// Line 1483, Address: 0x1c44b8, Func Offset: 0x14e8
	// Line 1484, Address: 0x1c44c0, Func Offset: 0x14f0
	// Line 1486, Address: 0x1c44d8, Func Offset: 0x1508
	// Line 1488, Address: 0x1c44dc, Func Offset: 0x150c
	// Line 1489, Address: 0x1c44e8, Func Offset: 0x1518
	// Func End, Address: 0x1c4518, Func Offset: 0x1548
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
	// Line 626, Address: 0x1c4520, Func Offset: 0
	// Line 628, Address: 0x1c4540, Func Offset: 0x20
	// Line 631, Address: 0x1c454c, Func Offset: 0x2c
	// Line 634, Address: 0x1c455c, Func Offset: 0x3c
	// Line 637, Address: 0x1c456c, Func Offset: 0x4c
	// Line 641, Address: 0x1c4584, Func Offset: 0x64
	// Line 646, Address: 0x1c4598, Func Offset: 0x78
	// Line 647, Address: 0x1c45ac, Func Offset: 0x8c
	// Line 648, Address: 0x1c45b8, Func Offset: 0x98
	// Line 649, Address: 0x1c45c8, Func Offset: 0xa8
	// Line 650, Address: 0x1c45dc, Func Offset: 0xbc
	// Line 651, Address: 0x1c45ec, Func Offset: 0xcc
	// Line 652, Address: 0x1c45f0, Func Offset: 0xd0
	// Line 655, Address: 0x1c45f8, Func Offset: 0xd8
	// Line 664, Address: 0x1c4600, Func Offset: 0xe0
	// Line 669, Address: 0x1c4638, Func Offset: 0x118
	// Line 667, Address: 0x1c463c, Func Offset: 0x11c
	// Line 669, Address: 0x1c4640, Func Offset: 0x120
	// Line 668, Address: 0x1c4644, Func Offset: 0x124
	// Line 669, Address: 0x1c464c, Func Offset: 0x12c
	// Line 670, Address: 0x1c4654, Func Offset: 0x134
	// Line 672, Address: 0x1c4658, Func Offset: 0x138
	// Line 682, Address: 0x1c4660, Func Offset: 0x140
	// Line 676, Address: 0x1c4664, Func Offset: 0x144
	// Line 682, Address: 0x1c4668, Func Offset: 0x148
	// Line 676, Address: 0x1c466c, Func Offset: 0x14c
	// Line 682, Address: 0x1c46c4, Func Offset: 0x1a4
	// Line 684, Address: 0x1c46cc, Func Offset: 0x1ac
	// Line 685, Address: 0x1c46d4, Func Offset: 0x1b4
	// Line 692, Address: 0x1c46d8, Func Offset: 0x1b8
	// Line 695, Address: 0x1c46dc, Func Offset: 0x1bc
	// Line 692, Address: 0x1c46e0, Func Offset: 0x1c0
	// Line 695, Address: 0x1c4708, Func Offset: 0x1e8
	// Line 696, Address: 0x1c4710, Func Offset: 0x1f0
	// Line 697, Address: 0x1c4750, Func Offset: 0x230
	// Line 698, Address: 0x1c4760, Func Offset: 0x240
	// Line 708, Address: 0x1c4764, Func Offset: 0x244
	// Line 698, Address: 0x1c476c, Func Offset: 0x24c
	// Line 699, Address: 0x1c4774, Func Offset: 0x254
	// Line 700, Address: 0x1c4780, Func Offset: 0x260
	// Line 702, Address: 0x1c4788, Func Offset: 0x268
	// Line 708, Address: 0x1c4800, Func Offset: 0x2e0
	// Line 714, Address: 0x1c480c, Func Offset: 0x2ec
	// Line 715, Address: 0x1c4810, Func Offset: 0x2f0
	// Line 720, Address: 0x1c4818, Func Offset: 0x2f8
	// Line 721, Address: 0x1c481c, Func Offset: 0x2fc
	// Line 722, Address: 0x1c482c, Func Offset: 0x30c
	// Func End, Address: 0x1c484c, Func Offset: 0x32c
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
	// Line 439, Address: 0x1c4850, Func Offset: 0
	// Line 444, Address: 0x1c4854, Func Offset: 0x4
	// Line 439, Address: 0x1c4858, Func Offset: 0x8
	// Line 444, Address: 0x1c485c, Func Offset: 0xc
	// Line 439, Address: 0x1c4860, Func Offset: 0x10
	// Line 444, Address: 0x1c4874, Func Offset: 0x24
	// Line 446, Address: 0x1c4920, Func Offset: 0xd0
	// Line 447, Address: 0x1c492c, Func Offset: 0xdc
	// Line 448, Address: 0x1c4930, Func Offset: 0xe0
	// Line 449, Address: 0x1c4938, Func Offset: 0xe8
	// Line 452, Address: 0x1c4948, Func Offset: 0xf8
	// Line 454, Address: 0x1c4958, Func Offset: 0x108
	// Line 455, Address: 0x1c4964, Func Offset: 0x114
	// Line 456, Address: 0x1c4978, Func Offset: 0x128
	// Line 459, Address: 0x1c4988, Func Offset: 0x138
	// Func End, Address: 0x1c49a0, Func Offset: 0x150
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
	// Line 379, Address: 0x1c49a0, Func Offset: 0
	// Line 382, Address: 0x1c49b0, Func Offset: 0x10
	// Line 391, Address: 0x1c49bc, Func Offset: 0x1c
	// Line 392, Address: 0x1c4a78, Func Offset: 0xd8
	// Line 393, Address: 0x1c4a94, Func Offset: 0xf4
	// Line 396, Address: 0x1c4a98, Func Offset: 0xf8
	// Line 393, Address: 0x1c4aa8, Func Offset: 0x108
	// Line 394, Address: 0x1c4aac, Func Offset: 0x10c
	// Line 395, Address: 0x1c4ab4, Func Offset: 0x114
	// Line 396, Address: 0x1c4ad4, Func Offset: 0x134
	// Line 397, Address: 0x1c4ae0, Func Offset: 0x140
	// Line 398, Address: 0x1c4af4, Func Offset: 0x154
	// Line 399, Address: 0x1c4afc, Func Offset: 0x15c
	// Line 400, Address: 0x1c4b08, Func Offset: 0x168
	// Line 401, Address: 0x1c4b14, Func Offset: 0x174
	// Line 406, Address: 0x1c4b20, Func Offset: 0x180
	// Line 407, Address: 0x1c4b24, Func Offset: 0x184
	// Line 408, Address: 0x1c4b28, Func Offset: 0x188
	// Line 409, Address: 0x1c4b30, Func Offset: 0x190
	// Line 410, Address: 0x1c4b34, Func Offset: 0x194
	// Line 411, Address: 0x1c4b3c, Func Offset: 0x19c
	// Line 412, Address: 0x1c4b40, Func Offset: 0x1a0
	// Line 413, Address: 0x1c4b4c, Func Offset: 0x1ac
	// Func End, Address: 0x1c4b60, Func Offset: 0x1c0
}

// xCameraReset__FP7xCamerafff
// Start address: 0x1c4b60
void xCameraReset(xCamera* cam, float32 d, float32 h, float32 pitch)
{
	float32 goal_p;
	// Line 253, Address: 0x1c4b60, Func Offset: 0
	// Line 257, Address: 0x1c4b64, Func Offset: 0x4
	// Line 253, Address: 0x1c4b68, Func Offset: 0x8
	// Line 257, Address: 0x1c4b6c, Func Offset: 0xc
	// Line 253, Address: 0x1c4b70, Func Offset: 0x10
	// Line 257, Address: 0x1c4b80, Func Offset: 0x20
	// Line 253, Address: 0x1c4b84, Func Offset: 0x24
	// Line 257, Address: 0x1c4b94, Func Offset: 0x34
	// Line 260, Address: 0x1c4b9c, Func Offset: 0x3c
	// Line 257, Address: 0x1c4ba0, Func Offset: 0x40
	// Line 260, Address: 0x1c4ba4, Func Offset: 0x44
	// Line 261, Address: 0x1c4bb4, Func Offset: 0x54
	// Line 272, Address: 0x1c4bb8, Func Offset: 0x58
	// Line 261, Address: 0x1c4bbc, Func Offset: 0x5c
	// Line 272, Address: 0x1c4bc0, Func Offset: 0x60
	// Line 261, Address: 0x1c4bc4, Func Offset: 0x64
	// Line 265, Address: 0x1c4bc8, Func Offset: 0x68
	// Line 272, Address: 0x1c4bcc, Func Offset: 0x6c
	// Line 261, Address: 0x1c4bd0, Func Offset: 0x70
	// Line 263, Address: 0x1c4c44, Func Offset: 0xe4
	// Line 264, Address: 0x1c4c48, Func Offset: 0xe8
	// Line 265, Address: 0x1c4c4c, Func Offset: 0xec
	// Line 266, Address: 0x1c4c50, Func Offset: 0xf0
	// Line 267, Address: 0x1c4c54, Func Offset: 0xf4
	// Line 268, Address: 0x1c4c58, Func Offset: 0xf8
	// Line 270, Address: 0x1c4c5c, Func Offset: 0xfc
	// Line 272, Address: 0x1c4c60, Func Offset: 0x100
	// Line 273, Address: 0x1c4c64, Func Offset: 0x104
	// Line 274, Address: 0x1c4c6c, Func Offset: 0x10c
	// Line 275, Address: 0x1c4c84, Func Offset: 0x124
	// Line 277, Address: 0x1c4c88, Func Offset: 0x128
	// Line 289, Address: 0x1c4cb4, Func Offset: 0x154
	// Line 292, Address: 0x1c4cbc, Func Offset: 0x15c
	// Line 295, Address: 0x1c4cc0, Func Offset: 0x160
	// Line 296, Address: 0x1c4cd4, Func Offset: 0x174
	// Line 318, Address: 0x1c4cd8, Func Offset: 0x178
	// Line 296, Address: 0x1c4cdc, Func Offset: 0x17c
	// Line 318, Address: 0x1c4ce0, Func Offset: 0x180
	// Line 296, Address: 0x1c4ce4, Func Offset: 0x184
	// Line 322, Address: 0x1c4ce8, Func Offset: 0x188
	// Line 316, Address: 0x1c4cec, Func Offset: 0x18c
	// Line 322, Address: 0x1c4cf0, Func Offset: 0x190
	// Line 331, Address: 0x1c4cf4, Func Offset: 0x194
	// Line 296, Address: 0x1c4cf8, Func Offset: 0x198
	// Line 316, Address: 0x1c4d6c, Func Offset: 0x20c
	// Line 317, Address: 0x1c4d70, Func Offset: 0x210
	// Line 318, Address: 0x1c4d74, Func Offset: 0x214
	// Line 319, Address: 0x1c4d78, Func Offset: 0x218
	// Line 320, Address: 0x1c4d7c, Func Offset: 0x21c
	// Line 321, Address: 0x1c4d80, Func Offset: 0x220
	// Line 322, Address: 0x1c4d84, Func Offset: 0x224
	// Line 323, Address: 0x1c4d88, Func Offset: 0x228
	// Line 324, Address: 0x1c4d8c, Func Offset: 0x22c
	// Line 325, Address: 0x1c4d90, Func Offset: 0x230
	// Line 326, Address: 0x1c4d94, Func Offset: 0x234
	// Line 327, Address: 0x1c4d98, Func Offset: 0x238
	// Line 329, Address: 0x1c4d9c, Func Offset: 0x23c
	// Line 331, Address: 0x1c4da8, Func Offset: 0x248
	// Line 332, Address: 0x1c4dac, Func Offset: 0x24c
	// Line 333, Address: 0x1c4db0, Func Offset: 0x250
	// Func End, Address: 0x1c4dd0, Func Offset: 0x270
}

// xCameraExit__FP7xCamera
// Start address: 0x1c4dd0
void xCameraExit(xCamera* cam)
{
	// Line 238, Address: 0x1c4dd0, Func Offset: 0
	// Line 242, Address: 0x1c4de4, Func Offset: 0x14
	// Line 244, Address: 0x1c4dec, Func Offset: 0x1c
	// Line 245, Address: 0x1c4df4, Func Offset: 0x24
	// Line 248, Address: 0x1c4df8, Func Offset: 0x28
	// Func End, Address: 0x1c4e08, Func Offset: 0x38
}

// xCameraInit__FP7xCameraUiUi
// Start address: 0x1c4e10
void xCameraInit(xCamera* cam, uint32 width, uint32 height)
{
	// Line 189, Address: 0x1c4e10, Func Offset: 0
	// Line 192, Address: 0x1c4e30, Func Offset: 0x20
	// Line 202, Address: 0x1c4e70, Func Offset: 0x60
	// Line 205, Address: 0x1c4e84, Func Offset: 0x74
	// Line 207, Address: 0x1c4e98, Func Offset: 0x88
	// Line 210, Address: 0x1c4e9c, Func Offset: 0x8c
	// Line 208, Address: 0x1c4ea0, Func Offset: 0x90
	// Line 209, Address: 0x1c4ea4, Func Offset: 0x94
	// Line 210, Address: 0x1c4ea8, Func Offset: 0x98
	// Line 212, Address: 0x1c4eac, Func Offset: 0x9c
	// Line 213, Address: 0x1c4eb0, Func Offset: 0xa0
	// Line 214, Address: 0x1c4eb4, Func Offset: 0xa4
	// Line 215, Address: 0x1c4eb8, Func Offset: 0xa8
	// Line 230, Address: 0x1c4ebc, Func Offset: 0xac
	// Line 231, Address: 0x1c4ec0, Func Offset: 0xb0
	// Line 232, Address: 0x1c4ec4, Func Offset: 0xb4
	// Line 235, Address: 0x1c4ec8, Func Offset: 0xb8
	// Func End, Address: 0x1c4ee0, Func Offset: 0xd0
}

