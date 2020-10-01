typedef struct xAnimTransitionList;
typedef struct RxNodeDefinition;
typedef struct xEntMotionPenData;
typedef struct analog_data;
typedef struct xCutsceneInfo;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimState;
typedef struct xPortalAsset;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelTag;
typedef struct RpClump;
typedef enum RwFogType;
typedef struct RwResEntry;
typedef struct iColor_tag;
typedef struct RxPacket;
typedef enum _CurrentPlayer;
typedef struct RxPipelineCluster;
typedef struct xClumpCollBSPTriangle;
typedef struct RwRGBAReal;
typedef struct xGroup;
typedef struct RwObjectHasFrame;
typedef struct RpAtomic;
typedef struct xPlatformAsset;
typedef struct xScene;
typedef struct xCutscene;
typedef struct xCutsceneTime;
typedef struct RwLinkList;
typedef struct xEntMPData;
typedef struct xEnvAsset;
typedef struct zCheckPoint;
typedef struct RxPipelineNode;
typedef struct zPlayerGlobals;
typedef enum RpWorldRenderOrder;
typedef struct RpMaterial;
typedef struct xBaseAsset;
typedef struct xCutsceneData;
typedef struct xModelInstance;
typedef struct xEntMotionAsset;
typedef struct var_type;
typedef struct RpTriangle;
typedef struct xMovePoint;
typedef struct rxHeapFreeBlock;
typedef struct _zPortal;
typedef struct xSurface;
typedef struct zPlayerCarryInfo;
typedef struct RxPipeline;
typedef struct RwRaster;
typedef struct RwRGBA;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwTexture;
typedef struct xUpdateCullMgr;
typedef struct RwV2d;
typedef struct zVarMagicEntry;
typedef struct xAnimMultiFile;
typedef struct substr;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xSpline3;
typedef struct xModelBucket;
typedef struct xCamera;
typedef struct zPlayerSettings;
typedef struct xBound;
typedef struct xEnt;
typedef struct xVec2;
typedef struct xEntMotionERData;
typedef struct xEntAsset;
typedef struct RpMeshHeader;
typedef struct xCutsceneBreak;
typedef struct xVec3;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zEnt;
typedef struct RwCamera;
typedef struct RpWorldSector;
typedef struct RxPipelineNodeParam;
typedef union _class_0;
typedef struct RpMorphTarget;
typedef struct xBBox;
typedef struct zPlatFMRunTime;
typedef struct xUpdateCullEnt;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwV3d;
typedef struct jot;
typedef struct xQuat;
typedef struct RpLight;
typedef struct xLightKit;
typedef struct XCSNNosey;
typedef struct xCoef3;
typedef struct xEntFrame;
typedef struct RpWorld;
typedef struct rxHeapBlockHeader;
typedef struct xMat4x3;
typedef struct xAnimTable;
typedef struct xBase;
typedef struct iEnv;
typedef struct iFogParams;
typedef struct basic_rect;
typedef struct _tagxRumble;
typedef struct xAnimTransition;
typedef struct xUpdateCullGroup;
typedef struct xJSPNodeInfo;
typedef struct xShadowSimplePoly;
typedef struct iSndInfo;
typedef struct xCutsceneZbuffer;
typedef struct xGridBound;
typedef struct split_tag;
typedef struct callback;
typedef struct xtextbox;
typedef struct xEntMotionOrbitData;
typedef struct RwMatrixTag;
typedef struct tag_type;
typedef struct xVec4;
typedef struct RwLLLink;
typedef struct RwSurfaceProperties;
typedef enum sound_listener_game_mode;
typedef struct xAnimMultiFileEntry;
typedef struct xMovePointAsset;
typedef struct xAnimActiveEffect;
typedef struct rxReq;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct xSndVoiceInfo;
typedef struct tri_data_0;
typedef struct xAnimFile;
typedef enum RxClusterValidityReq;
typedef struct xLightKitLight;
typedef struct _class_1;
typedef struct xGlobals;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct zEntHangable;
typedef struct xJSPHeader;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct _tagxPad;
typedef struct xfont;
typedef struct xCutsceneZbufferHack;
typedef struct xEntMechData;
typedef struct xEntMotionSplineData;
typedef enum RxNodeDefEditable;
typedef struct xEnv;
typedef enum RxClusterValid;
typedef struct RpInterpolator;
typedef struct _zEnv;
typedef struct xAnimMultiFileBase;
typedef struct xRot;
typedef struct xAnimEffect;
typedef struct xClumpCollBSPTree;
typedef struct zSaveLoadGame;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xCollis;
typedef struct zScene;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _class_2;
typedef struct _tagiPad;
typedef struct RpPolygon;
typedef struct zJumpParam;
typedef enum RwCameraProjection;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct xAnimPlay;
typedef struct xLinkAsset;
typedef struct xCylinder;
typedef struct xFFX;
typedef struct xEntDrive;
typedef struct xCutsceneMgr;
typedef struct xModelPool;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xCutsceneMgrAsset;
typedef struct zPlatform;
typedef struct xEntShadow;
typedef struct zCutsceneMgr;
typedef struct RpGeometry;
typedef struct xCoef;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct xEntMotionMechData;
typedef struct RwTexDictionary;
typedef struct zAssetPickupTable;
typedef struct RxOutputSpec;
typedef struct iSndVol;
typedef struct xEntPenData;
typedef struct tag_iFile;
typedef struct xMat3x3;
typedef struct zGlobals;
typedef struct xSndGlobals;
typedef struct xQCData;
typedef struct zGlobalSettings;
typedef struct RxClusterRef;
typedef struct RwFrame;
typedef struct RwObject;
typedef struct xEntOrbitData;
typedef struct zPlayerLassoInfo;
typedef struct RxIoSpec;
typedef struct tri_data_1;
typedef struct tag_xFile;
typedef struct xMemPool;
typedef struct zLedgeGrabParams;
typedef struct xEntMotion;
typedef struct RxNodeMethods;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct zLasso;
typedef struct RxCluster;
typedef enum sound_category;
typedef struct _class_3;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xEntSplineData;
typedef struct zVarEntry;

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_1)(RxNodeDefinition*);
typedef s8*(*type_5)(u32);
typedef u32(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_7)(RxNodeDefinition*);
typedef u32(*type_8)(void*);
typedef void(*type_10)(RwResEntry*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef RwCamera*(*type_15)(RwCamera*);
typedef s32(*type_16)(RxPipelineNode*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef s8*(*type_29)();
typedef void(*type_31)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef s8*(*type_37)(s8*);
typedef s32(*type_39)(RxPipelineNode*, RxPipeline*);
typedef void(*type_40)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpWorldSector*(*type_43)(RpWorldSector*);
typedef u32(*type_49)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_52)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_59)(void*);
typedef void(*type_67)(jot&, xtextbox&, f32, f32);
typedef void(*type_72)(jot&, xtextbox&, xtextbox&);
typedef void(*type_74)(xEnt*, xScene*, f32);
typedef void(*type_81)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_83)(xEnt*, xVec3*);
typedef u32(*type_85)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_87)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_88)(xEnt*);
typedef void(*type_93)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef xBase*(*type_94)(u32);
typedef s8*(*type_99)(xBase*);
typedef u32(*type_101)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_110)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_131)(void*, void*);
typedef RpClump*(*type_134)(RpClump*, void*);
typedef void(*type_151)(xMemPool*, void*);

typedef s8 type_2[16];
typedef s8 type_3[12];
typedef u32 type_4[15];
typedef u32 type_9[15];
typedef u8 type_11[2];
typedef RxCluster type_13[1];
typedef f32 type_14[2];
typedef u32 type_17[15];
typedef f32 type_19[15];
typedef f32 type_21[15];
typedef s8 type_22[12];
typedef analog_data type_24[2];
typedef s8 type_25[64];
typedef u32 type_26[15];
typedef s8 type_27[12];
typedef RwTexCoords* type_28[8];
typedef s8 type_30[64];
typedef s8 type_32[16];
typedef s8 type_33[128];
typedef s8 type_34[48];
typedef f32 type_35[4];
typedef s8 type_38[12];
typedef s8 type_41[64];
typedef s8 type_42[16];
typedef s8 type_44[16];
typedef s8 type_45[16];
typedef zVarEntry type_46[19];
typedef var_type type_47[39];
typedef RwFrustumPlane type_48[6];
typedef u8 type_50[2];
typedef xVec4 type_51[12];
typedef s8 type_53[12];
typedef u32 type_54[2];
typedef u8 type_55[2];
typedef RwV3d type_56[8];
typedef f32 type_57[6];
typedef s8 type_58[16];
typedef f32 type_60[3];
typedef f32 type_61[3];
typedef xVec3 type_62[3];
typedef zVarMagicEntry type_63[23];
typedef xModelTag type_64[2];
typedef f32 type_65[3];
typedef s8 type_66[64];
typedef s8 type_68[12];
typedef s8 type_69[256];
typedef s8 type_70[12];
typedef s8 type_71[32];
typedef s8 type_73[12];
typedef s8 type_75[64];
typedef xEnt* type_76[111];
typedef s8 type_77[32];
typedef u32 type_78[72];
typedef u8 type_79[2];
typedef f32 type_80[16];
typedef s8 type_82[4];
typedef s8 type_84[12];
typedef xBase* type_86[72];
typedef f32 type_89[2];
typedef s8 type_90[32];
typedef xCutsceneZbuffer type_91[4];
typedef s8 type_92[32];
typedef s8 type_95[128];
typedef s8* type_96[4];
typedef type_95 type_97[6];
typedef u32 type_98[2];
typedef s8 type_100[64];
typedef u32 type_102[2];
typedef s8* type_103[3];
typedef s8 type_104[12];
typedef u8 type_105[3];
typedef s8 type_106[32];
typedef u8 type_107[14];
typedef xModelTag type_108[4];
typedef u32 type_109[2];
typedef s8 type_111[64];
typedef s8 type_112[32];
typedef s8 type_113[32];
typedef s8 type_114[64];
typedef s8 type_115[32];
typedef xModelInstance* type_116[14];
typedef u8 type_117[3];
typedef u16 type_118[3];
typedef s8 type_119[64];
typedef xVec3 type_120[4];
typedef s8 type_121[12];
typedef u8 type_122[2];
typedef s8 type_123[12];
typedef u8 type_124[4];
typedef xAnimMultiFileEntry type_125[1];
typedef s8 type_126[256];
typedef s8 type_127[12];
typedef u32 type_128[4];
typedef zSaveLoadGame type_129[0];
typedef f32 type_130[4];
typedef u8 type_132[22];
typedef f32 type_133[4];
typedef s8 type_135[64];
typedef u8 type_136[22];
typedef RpLight* type_137[2];
typedef s8 type_138[12];
typedef s8 type_139[128];
typedef RwFrame* type_140[2];
typedef xCollis type_141[18];
typedef RwTexCoords* type_142[8];
typedef f32 type_143[5];
typedef s8 type_144[64];
typedef xSndVoiceInfo type_145[48];
typedef xVec3 type_146[5];
typedef xMat4x3 type_147[2];
typedef s8 type_148[12];
typedef u8 type_149[5];
typedef f32 type_150[12];
typedef f32 type_152[12];
typedef xVec3 type_153[60];
typedef f32 type_154[12];
typedef u16 type_155[3];
typedef s8 type_156[12];
typedef s8 type_157[32];
typedef s8 type_158[32];
typedef f32 type_159[12];
typedef s8 type_160[32];
typedef s8 type_161[32];
typedef s8 type_162[32];
typedef f32 type_163[12];
typedef f32 type_164[22];
typedef s8* type_165[3];
typedef s8 type_166[64];
typedef f32 type_167[12];
typedef s8 type_168[64];
typedef f32 type_169[22];
typedef s8 type_170[64];
typedef s8 type_171[12];

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_11 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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
	type_42 SoundLeft;
	type_44 SoundRight;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	type_31 BeforeEnter;
	type_36 StateCallback;
	type_40 BeforeAnimMatrices;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_35 wt;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_134 callback;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_10 destroyNotify;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_13 clusters;
};

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_20 sync;
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
	type_12 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xPlatformAsset
{
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
	type_94 resolvID;
	type_99 base2Name;
	type_5 id2Name;
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
	type_98 SndChannelReq;
	type_102 SndAssetID;
	type_109 SndHandle;
	XCSNNosey* cb_nosey;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
};

struct RwLinkList
{
	RwLLLink link;
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

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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
	type_64 BubbleWandTag;
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
	type_108 HangPawTag;
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
	type_4 Inv_PatsSock;
	type_9 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_17 Inv_LevelPickups;
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
	type_54 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_76 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_107 sb_model_indices;
	type_116 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct var_type
{
	substr name;
	type_29 get_text;
};

struct RpTriangle
{
	type_155 vertIndex;
	s16 matIndex;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_79 pad;
	f32 delay;
	xSpline3* spl;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_117 pad;
	void* moprops;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_158 name;
	type_160 mask;
	u32 filterAddressing;
	s32 refCount;
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
	type_59 activateCB;
	type_59 deactivateCB;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct zVarMagicEntry
{
	u32 varNameID;
	s8* varName;
	type_37 varCB;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_125 Files;
};

struct substr
{
	s8* text;
	u32 size;
};

struct RpSector
{
	s32 type;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	type_51 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_57 MoveSpeed;
	type_60 AnimSneak;
	type_61 AnimWalk;
	type_65 AnimRun;
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
	type_124 talk_filter;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_105 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_74 update;
	type_74 endUpdate;
	type_83 bupdate;
	type_87 move;
	type_88 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_110 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xVec2
{
	f32 x;
	f32 y;
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_15 beginUpdate;
	type_18 endUpdate;
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
	type_48 frustumPlanes;
	RwBBox frustumBoundBox;
	type_56 frustumCorners;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_142 texCoords;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_150 tmrs;
	type_152 ttms;
	type_154 atms;
	type_159 dtms;
	type_163 vms;
	type_167 dss;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_131 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct jot
{
	substr s;
	_class_3 flag;
	u16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct xQuat
{
	xVec3 v;
	f32 s;
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_43 renderCallBack;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_128 pad;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_137 light;
	type_140 light_frame;
	s32 memlvl;
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

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_6 Conditional;
	type_6 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xShadowSimplePoly
{
	type_62 vert;
	xVec3 norm;
};

struct iSndInfo
{
	u32 flags;
	iSndVol vol;
	u32 pitch;
	s32 lastStreamBuffer;
};

struct xCutsceneZbuffer
{
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
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

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct callback
{
	type_67 render;
	type_72 layout_update;
	type_72 render_update;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
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

struct tag_type
{
	substr name;
	type_93 parse_tag;
	type_93 reset_tag;
	void* context;
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

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct rxReq
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

struct xEntBoulder
{
};

struct xSndVoiceInfo
{
	u32 assetID;
	u32 sndID;
	u32 parentID;
	xVec3* parentPos;
	s32 internalID;
	u32 flags;
	u16 pad;
	u16 priority;
	f32 vol;
	f32 pitch;
	u32 sample_rate;
	u32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	f32 innerRadius2;
	f32 outerRadius2;
	u32 lock_owner;
	iSndInfo ps;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
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
	type_122 NumAnims;
	void** RawData;
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
	u32 type;
	RwRGBAReal color;
	type_80 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct _class_1
{
	xVec3* verts;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_97 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_112 sceneStart;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_89 BilinearLerp;
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

struct zEntHangable
{
};

struct xJSPHeader
{
	type_82 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_120 corner;
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
	type_141 colls;
	type_81 post;
	type_101 depenq;
};

struct _tagxPad
{
	type_132 value;
	type_136 last_value;
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
	type_164 up_tmr;
	type_169 down_tmr;
	type_24 analog;
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

struct xCutsceneZbufferHack
{
	s8* name;
	type_91 times;
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

struct xEntMotionSplineData
{
	s32 unknown;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xAnimMultiFileBase
{
	u32 Count;
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
	type_85 Callback;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zSaveLoadGame
{
	type_100 label;
	type_106 date;
	s32 progress;
	u32 size;
	s8 thumbIconIndex;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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
	type_78 baseCount;
	type_86 baseList;
	_zEnv* zen;
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

struct _class_2
{
	f32 t;
	f32 u;
	f32 v;
};

struct _tagiPad
{
	s32 port;
};

struct RpPolygon
{
	u16 matIndex;
	type_118 vertIndex;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	type_40 BeforeAnimMatrices;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_133 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xFFX
{
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

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
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

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
	type_19 startTime;
	type_21 endTime;
	type_26 emitID;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_14 radius;
};

struct zCutsceneMgr : xCutsceneMgr
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
	type_28 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xCoef
{
	type_130 a;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct anim_coll_data
{
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zAssetPickupTable
{
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct iSndVol
{
	s16 volL;
	s16 volR;
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct tag_iFile
{
	u32 flags;
	type_139 path;
	s32 fd;
	s32 offset;
	s32 length;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xSndGlobals
{
	u32 stereo;
	u32 SndCount;
	type_143 categoryVolFader;
	type_145 voice;
	type_147 listenerMat;
	sound_listener_game_mode listenerMode;
	u32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
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
	type_50 PowerUp;
	type_55 InitialPowerUp;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
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

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct tag_xFile
{
	type_157 relname;
	tag_iFile ps;
	void* user_data;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_151 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_153 tranTable;
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

struct RxNodeMethods
{
	type_52 nodeBody;
	type_1 nodeInit;
	type_7 nodeTerm;
	type_16 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_39 pipelineNodeConfig;
	type_49 configMsgHandler;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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
	type_146 lastRefs;
	type_149 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
};

struct _class_3
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

struct xEntSplineData
{
	s32 unknown;
};

struct zVarEntry
{
	u32 entry;
	u32 varNameID;
	s8* varName;
	type_8 varCB;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_45 buffer;
type_58 buffer;
s32 bad_card_available;
s32 bad_card_needed;
u32 selSceneID;
type_47 vars;
type_46 zVarEntryTable;
type_63 sVarMagicEntryTrable;
s32 sVarMagicInit;
zGlobals globals;
xSndGlobals gSnd;
_CurrentPlayer gCurrentPlayer;
type_129 zSaveLoadGameTable;

u32 zVarEntryCB_IsVisible(void* context);
u32 zVarEntryCB_IsEnabled(void* context);
u32 zVarEntryCB_CounterValue(void* context);
u32 zVarEntryCB_Minute();
u32 zVarEntryCB_Hour();
u32 zVarEntryCB_Date();
u32 zVarEntryCB_Spatulas();
u32 zVarEntryCB_Shinies();
u32 zVarEntryCB_TotalPSocks();
u32 zVarEntryCB_CurrentLevelPSocks();
u32 zVarEntryCB_CurrentLevelPickup();
u32 zVarEntryCB_CurrentRoom();
u32 zVarEntryCB_CurrentSceneLetter();
u32 zVarEntryCB_VibrationOn();
u32 zVarEntryCB_MCAvailable();
u32 zVarEntryCB_SndFXVol();
u32 zVarEntryCB_SndMusicVol();
u32 zVarEntryCB_SndMode();
void zVarNewGame();
void zVarInit(zVarEntry* table);
void var_init();
void parse_tag_var(jot& j, split_tag& ti);
var_type* find_var(substr& s);
s8* var_text_MCName();
s8* var_text_TotalPatsSocks();
s8* var_text_SpaceNeeded();
s8* var_text_SpaceAvailableString();
s8* var_text_SpaceAvailable();
s8* var_text_SoundMusicVolume();
s8* var_text_SoundFXVolume();
s8* var_text_ShinyCountText();
s8* var_text_ShinyCount();
s8* var_text_SelectedArea();
s8* var_text_PlayerPosition();
s8* var_text_PlayerName();
s8* var_text_PlayerHeShe();
s8* var_text_MCSelectedGame();
s8* var_text_MCSelectedCard();
s8* var_text_MCPS2MinSpace();
s8* var_text_MCPS2MaxSpace();
s8* var_text_MCAutoSaveCard();
s8* var_text_MCAccessType();
s8* var_text_GameSlot7();
s8* var_text_GameSlot6();
s8* var_text_GameSlot5();
s8* var_text_GameSlot4();
s8* var_text_GameSlot3();
s8* var_text_GameSlot2();
s8* var_text_GameSlot1();
s8* var_text_GameSlot0();
s8* zVarGameSlotInfo(s32 i, s8* buffer);
s8* var_text_CurrentTime();
s8* var_text_CurrentScene();
s8* var_text_CurrentLevelPatsSocks();
s8* var_text_CurrentLevelCollectable();
s8* var_text_CurrentDate();
s8* var_text_CurrentArea();
s8* var_text_CorruptFileName();
s8* var_text_BadCardNeeded();
s8* var_text_BadCardAvailable();
s8* var_text_BadCard();
s8* var_text_ActivePad();

// zVarEntryCB_IsVisible__FPv
// Start address: 0x1a2800
u32 zVarEntryCB_IsVisible(void* context)
{
}

// zVarEntryCB_IsEnabled__FPv
// Start address: 0x1a2820
u32 zVarEntryCB_IsEnabled(void* context)
{
}

// zVarEntryCB_CounterValue__FPv
// Start address: 0x1a2830
u32 zVarEntryCB_CounterValue(void* context)
{
}

// zVarEntryCB_Minute__FPv
// Start address: 0x1a2840
u32 zVarEntryCB_Minute()
{
	u32 minute;
}

// zVarEntryCB_Hour__FPv
// Start address: 0x1a2860
u32 zVarEntryCB_Hour()
{
	u32 hour;
}

// zVarEntryCB_Date__FPv
// Start address: 0x1a2880
u32 zVarEntryCB_Date()
{
	u32 date;
}

// zVarEntryCB_Spatulas__FPv
// Start address: 0x1a28d0
u32 zVarEntryCB_Spatulas()
{
}

// zVarEntryCB_Shinies__FPv
// Start address: 0x1a28e0
u32 zVarEntryCB_Shinies()
{
}

// zVarEntryCB_TotalPSocks__FPv
// Start address: 0x1a28f0
u32 zVarEntryCB_TotalPSocks()
{
}

// zVarEntryCB_CurrentLevelPSocks__FPv
// Start address: 0x1a2900
u32 zVarEntryCB_CurrentLevelPSocks()
{
}

// zVarEntryCB_CurrentLevelPickup__FPv
// Start address: 0x1a2910
u32 zVarEntryCB_CurrentLevelPickup()
{
}

// zVarEntryCB_CurrentRoom__FPv
// Start address: 0x1a2920
u32 zVarEntryCB_CurrentRoom()
{
	s32 room;
	type_2 s;
}

// zVarEntryCB_CurrentSceneLetter__FPv
// Start address: 0x1a29d0
u32 zVarEntryCB_CurrentSceneLetter()
{
	type_32 s;
}

// zVarEntryCB_VibrationOn__FPv
// Start address: 0x1a2a40
u32 zVarEntryCB_VibrationOn()
{
}

// zVarEntryCB_MCAvailable__FPv
// Start address: 0x1a2a50
u32 zVarEntryCB_MCAvailable()
{
}

// zVarEntryCB_SndFXVol__FPv
// Start address: 0x1a2b10
u32 zVarEntryCB_SndFXVol()
{
	f64 floatVol;
}

// zVarEntryCB_SndMusicVol__FPv
// Start address: 0x1a2b60
u32 zVarEntryCB_SndMusicVol()
{
	f64 floatVol;
}

// zVarEntryCB_SndMode__FPv
// Start address: 0x1a2bb0
u32 zVarEntryCB_SndMode()
{
}

// zVarNewGame__Fv
// Start address: 0x1a2bc0
void zVarNewGame()
{
}

// zVarInit__FP9zVarEntry
// Start address: 0x1a2bd0
void zVarInit(zVarEntry* table)
{
	s32 i;
}

// var_init__Fv
// Start address: 0x1a2c20
void var_init()
{
	tag_type var_tag;
}

// parse_tag_var__18@unnamed@zVar_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1a2c30
void parse_tag_var(jot& j, split_tag& ti)
{
}

// find_var__18@unnamed@zVar_cpp@FRC6substr
// Start address: 0x1a2d10
var_type* find_var(substr& s)
{
	u32 start;
	u32 end;
	u32 i;
	var_type& t;
	s32 c;
}

// var_text_MCName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2dc0
s8* var_text_MCName()
{
	type_90 buffer;
}

// var_text_TotalPatsSocks__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2e60
s8* var_text_TotalPatsSocks()
{
	type_3 buffer;
}

// var_text_SpaceNeeded__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2ea0
s8* var_text_SpaceNeeded()
{
	type_104 buffer;
}

// var_text_SpaceAvailableString__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2ee0
s8* var_text_SpaceAvailableString()
{
	type_113 spaceStr;
	s32 spaceAvailable;
	type_119 buffer;
}

// var_text_SpaceAvailable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2f60
s8* var_text_SpaceAvailable()
{
	type_22 buffer;
}

// var_text_SoundMusicVolume__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2fa0
s8* var_text_SoundMusicVolume()
{
	type_121 buffer;
}

// var_text_SoundFXVolume__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3010
s8* var_text_SoundFXVolume()
{
	type_27 buffer;
}

// var_text_ShinyCountText__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3080
s8* var_text_ShinyCountText()
{
	type_30 buffer;
}

// var_text_ShinyCount__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3110
s8* var_text_ShinyCount()
{
	type_127 buffer;
}

// var_text_SelectedArea__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3150
s8* var_text_SelectedArea()
{
}

// var_text_PlayerPosition__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3160
s8* var_text_PlayerPosition()
{
	xVec3& v;
	type_34 buffer;
}

// var_text_PlayerName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a31c0
s8* var_text_PlayerName()
{
	type_103 text;
}

// var_text_PlayerHeShe__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a31e0
s8* var_text_PlayerHeShe()
{
	type_165 text;
}

// var_text_MCSelectedGame__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3200
s8* var_text_MCSelectedGame()
{
	type_84 buffer;
}

// var_text_MCSelectedCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3240
s8* var_text_MCSelectedCard()
{
	type_171 buffer;
}

// var_text_MCPS2MinSpace__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3280
s8* var_text_MCPS2MinSpace()
{
	type_68 buffer;
}

// var_text_MCPS2MaxSpace__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a32c0
s8* var_text_MCPS2MaxSpace()
{
	type_138 buffer;
}

// var_text_MCAutoSaveCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3300
s8* var_text_MCAutoSaveCard()
{
	type_53 buffer;
}

// var_text_MCAccessType__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3340
s8* var_text_MCAccessType()
{
	s32 i;
	type_96 state_text;
}

// var_text_GameSlot7__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3370
s8* var_text_GameSlot7()
{
	type_25 buffer;
}

// var_text_GameSlot6__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3390
s8* var_text_GameSlot6()
{
	type_135 buffer;
}

// var_text_GameSlot5__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33b0
s8* var_text_GameSlot5()
{
	type_66 buffer;
}

// var_text_GameSlot4__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33d0
s8* var_text_GameSlot4()
{
	type_168 buffer;
}

// var_text_GameSlot3__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33f0
s8* var_text_GameSlot3()
{
	type_114 buffer;
}

// var_text_GameSlot2__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3410
s8* var_text_GameSlot2()
{
	type_41 buffer;
}

// var_text_GameSlot1__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3430
s8* var_text_GameSlot1()
{
	type_144 buffer;
}

// var_text_GameSlot0__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3450
s8* var_text_GameSlot0()
{
	type_75 buffer;
}

// zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUi
// Start address: 0x1a3470
s8* zVarGameSlotInfo(s32 i, s8* buffer)
{
	type_77 date;
	type_92 time;
	s32 hour;
	type_115 ampm;
	type_126 biggerbuf;
}

// var_text_CurrentTime__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3700
s8* var_text_CurrentTime()
{
	type_162 buffer;
}

// var_text_CurrentScene__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3730
s8* var_text_CurrentScene()
{
	type_71 buffer;
}

// var_text_CurrentLevelPatsSocks__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3780
s8* var_text_CurrentLevelPatsSocks()
{
	type_156 buffer;
}

// var_text_CurrentLevelCollectable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a37c0
s8* var_text_CurrentLevelCollectable()
{
	type_73 buffer;
}

// var_text_CurrentDate__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3800
s8* var_text_CurrentDate()
{
	type_161 buffer;
}

// var_text_CurrentArea__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3830
s8* var_text_CurrentArea()
{
}

// var_text_CorruptFileName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3840
s8* var_text_CorruptFileName()
{
	type_33 buffer;
}

// var_text_BadCardNeeded__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3870
s8* var_text_BadCardNeeded()
{
	type_123 buffer;
}

// var_text_BadCardAvailable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a38b0
s8* var_text_BadCardAvailable()
{
	type_38 buffer;
}

// var_text_BadCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a38f0
s8* var_text_BadCard()
{
	s32 card;
	type_70 buffer;
}

// var_text_ActivePad__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3960
s8* var_text_ActivePad()
{
	type_148 buffer;
}

