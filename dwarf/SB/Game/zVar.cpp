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
typedef struct _class_0;
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

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_1)(RxNodeDefinition*);
typedef int8*(*type_5)(uint32);
typedef uint32(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_7)(RxNodeDefinition*);
typedef uint32(*type_8)(void*);
typedef void(*type_10)(RwResEntry*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef RwCamera*(*type_15)(RwCamera*);
typedef int32(*type_16)(RxPipelineNode*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef int8*(*type_29)();
typedef void(*type_31)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_37)(int8*);
typedef int32(*type_39)(RxPipelineNode*, RxPipeline*);
typedef void(*type_40)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_43)(RpWorldSector*);
typedef uint32(*type_49)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_52)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_59)(void*);
typedef void(*type_67)(jot&, xtextbox&, float32, float32);
typedef void(*type_72)(jot&, xtextbox&, xtextbox&);
typedef void(*type_74)(xEnt*, xScene*, float32);
typedef void(*type_81)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_83)(xEnt*, xVec3*);
typedef uint32(*type_85)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_87)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_88)(xEnt*);
typedef void(*type_93)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef xBase*(*type_94)(uint32);
typedef int8*(*type_99)(xBase*);
typedef uint32(*type_101)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_110)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_131)(void*, void*);
typedef RpClump*(*type_134)(RpClump*, void*);
typedef void(*type_151)(xMemPool*, void*);

typedef int8 type_2[16];
typedef int8 type_3[12];
typedef uint32 type_4[15];
typedef uint32 type_9[15];
typedef uint8 type_11[2];
typedef RxCluster type_13[1];
typedef float32 type_14[2];
typedef uint32 type_17[15];
typedef float32 type_19[15];
typedef float32 type_21[15];
typedef int8 type_22[12];
typedef analog_data type_24[2];
typedef int8 type_25[64];
typedef uint32 type_26[15];
typedef int8 type_27[12];
typedef RwTexCoords* type_28[8];
typedef int8 type_30[64];
typedef int8 type_32[16];
typedef int8 type_33[128];
typedef int8 type_34[48];
typedef float32 type_35[4];
typedef int8 type_38[12];
typedef int8 type_41[64];
typedef int8 type_42[16];
typedef int8 type_44[16];
typedef int8 type_45[16];
typedef zVarEntry type_46[19];
typedef var_type type_47[39];
typedef RwFrustumPlane type_48[6];
typedef uint8 type_50[2];
typedef xVec4 type_51[12];
typedef int8 type_53[12];
typedef uint32 type_54[2];
typedef uint8 type_55[2];
typedef RwV3d type_56[8];
typedef float32 type_57[6];
typedef int8 type_58[16];
typedef float32 type_60[3];
typedef float32 type_61[3];
typedef xVec3 type_62[3];
typedef zVarMagicEntry type_63[23];
typedef xModelTag type_64[2];
typedef float32 type_65[3];
typedef int8 type_66[64];
typedef int8 type_68[12];
typedef int8 type_69[256];
typedef int8 type_70[12];
typedef int8 type_71[32];
typedef int8 type_73[12];
typedef int8 type_75[64];
typedef xEnt* type_76[111];
typedef int8 type_77[32];
typedef uint32 type_78[72];
typedef uint8 type_79[2];
typedef float32 type_80[16];
typedef int8 type_82[4];
typedef int8 type_84[12];
typedef xBase* type_86[72];
typedef float32 type_89[2];
typedef int8 type_90[32];
typedef xCutsceneZbuffer type_91[4];
typedef int8 type_92[32];
typedef int8 type_95[128];
typedef int8* type_96[4];
typedef int8 type_97[128][6];
typedef uint32 type_98[2];
typedef int8 type_100[64];
typedef uint32 type_102[2];
typedef int8* type_103[3];
typedef int8 type_104[12];
typedef uint8 type_105[3];
typedef int8 type_106[32];
typedef uint8 type_107[14];
typedef xModelTag type_108[4];
typedef uint32 type_109[2];
typedef int8 type_111[64];
typedef int8 type_112[32];
typedef int8 type_113[32];
typedef int8 type_114[64];
typedef int8 type_115[32];
typedef xModelInstance* type_116[14];
typedef uint8 type_117[3];
typedef uint16 type_118[3];
typedef int8 type_119[64];
typedef xVec3 type_120[4];
typedef int8 type_121[12];
typedef uint8 type_122[2];
typedef int8 type_123[12];
typedef uint8 type_124[4];
typedef xAnimMultiFileEntry type_125[1];
typedef int8 type_126[256];
typedef int8 type_127[12];
typedef uint32 type_128[4];
typedef zSaveLoadGame type_129[0];
typedef float32 type_130[4];
typedef uint8 type_132[22];
typedef float32 type_133[4];
typedef int8 type_135[64];
typedef uint8 type_136[22];
typedef RpLight* type_137[2];
typedef int8 type_138[12];
typedef int8 type_139[128];
typedef RwFrame* type_140[2];
typedef xCollis type_141[18];
typedef RwTexCoords* type_142[8];
typedef float32 type_143[5];
typedef int8 type_144[64];
typedef xSndVoiceInfo type_145[48];
typedef xVec3 type_146[5];
typedef xMat4x3 type_147[2];
typedef int8 type_148[12];
typedef uint8 type_149[5];
typedef float32 type_150[12];
typedef float32 type_152[12];
typedef xVec3 type_153[60];
typedef float32 type_154[12];
typedef uint16 type_155[3];
typedef int8 type_156[12];
typedef int8 type_157[32];
typedef int8 type_158[32];
typedef float32 type_159[12];
typedef int8 type_160[32];
typedef int8 type_161[32];
typedef int8 type_162[32];
typedef float32 type_163[12];
typedef float32 type_164[22];
typedef int8* type_165[3];
typedef int8 type_166[64];
typedef float32 type_167[12];
typedef int8 type_168[64];
typedef float32 type_169[22];
typedef int8 type_170[64];
typedef int8 type_171[12];

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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
	int8 SoundLeft[16];
	int8 SoundRight[16];
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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
	uint32 creationAttributes;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xPlatformAsset
{
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
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
	XCSNNosey* cb_nosey;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwLinkList
{
	RwLLLink link;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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
	int16 refCount;
	int16 pad;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	_class_1 anim_coll;
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

struct var_type
{
	substr name;
	int8*(*get_text)();
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	uint8 pad[3];
	void* moprops;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct zVarMagicEntry
{
	uint32 varNameID;
	int8* varName;
	int8*(*varCB)(int8*);
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct substr
{
	int8* text;
	uint32 size;
};

struct RpSector
{
	int32 type;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct xVec2
{
	float32 x;
	float32 y;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	uint32 flags;
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct jot
{
	substr s;
	_class_3 flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
	int32 lastStreamBuffer;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
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

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct callback
{
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	uint32 flags;
	float32 line_space;
	float32 tab_stop;
	float32 left_indent;
	float32 right_indent;
	callback* cb;
	void* context;
	int8** texts;
	uint32* text_sizes;
	uint32 texts_size;
	substr text;
	uint32 text_hash;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void* context;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	xVec3* parentPos;
	int32 internalID;
	uint32 flags;
	uint16 pad;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float32 innerRadius2;
	float32 outerRadius2;
	uint32 lock_owner;
	iSndInfo ps;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct zEntHangable
{
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

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	iColor_tag color;
	basic_rect clip;
};

struct xCutsceneZbufferHack
{
	int8* name;
	xCutsceneZbuffer times[4];
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

struct xEntMotionSplineData
{
	int32 unknown;
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
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zSaveLoadGame
{
	int8 label[64];
	int8 date[32];
	int32 progress;
	uint32 size;
	int8 thumbIconIndex;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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
		_class_2 tuv;
		tri_data_0 tri;
	};
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

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

struct _tagiPad
{
	int32 port;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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
	int32 numMaterials;
	int32 space;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xFFX
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
	tri_data_1 tri;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct zCutsceneMgr : xCutsceneMgr
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

struct xCoef
{
	float32 a[4];
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct anim_coll_data
{
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
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	int32 offset;
	int32 length;
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
	uint32 stereo;
	uint32 SndCount;
	float32 categoryVolFader[5];
	xSndVoiceInfo voice[48];
	xMat4x3 listenerMat[2];
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct tag_xFile
{
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
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
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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
	struct
	{
		uint8 invisible : 1;
		uint8 ethereal : 1;
		uint8 merge : 1;
		uint8 word_break : 1;
		uint8 word_end : 1;
		uint8 line_break : 1;
		uint8 stop : 1;
		uint8 tab : 1;
	};
	struct
	{
		uint8 insert : 1;
		uint8 dynamic : 1;
		uint8 page_break : 1;
		uint8 stateful : 1;
	};
	uint16 dummy : 4;
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
	int32 unknown;
};

struct zVarEntry
{
	uint32 entry;
	uint32 varNameID;
	int8* varName;
	uint32(*varCB)(void*);
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
int32 bad_card_available;
int32 bad_card_needed;
uint32 selSceneID;
var_type vars[39];
zVarEntry zVarEntryTable[19];
zVarMagicEntry sVarMagicEntryTrable[23];
int32 sVarMagicInit;
zGlobals globals;
xSndGlobals gSnd;
_CurrentPlayer gCurrentPlayer;
zSaveLoadGame zSaveLoadGameTable[0];

uint32 zVarEntryCB_IsVisible(void* context);
uint32 zVarEntryCB_IsEnabled(void* context);
uint32 zVarEntryCB_CounterValue(void* context);
uint32 zVarEntryCB_Minute();
uint32 zVarEntryCB_Hour();
uint32 zVarEntryCB_Date();
uint32 zVarEntryCB_Spatulas();
uint32 zVarEntryCB_Shinies();
uint32 zVarEntryCB_TotalPSocks();
uint32 zVarEntryCB_CurrentLevelPSocks();
uint32 zVarEntryCB_CurrentLevelPickup();
uint32 zVarEntryCB_CurrentRoom();
uint32 zVarEntryCB_CurrentSceneLetter();
uint32 zVarEntryCB_VibrationOn();
uint32 zVarEntryCB_MCAvailable();
uint32 zVarEntryCB_SndFXVol();
uint32 zVarEntryCB_SndMusicVol();
uint32 zVarEntryCB_SndMode();
void zVarNewGame();
void zVarInit(zVarEntry* table);
void var_init();
void parse_tag_var(jot& j, split_tag& ti);
var_type* find_var(substr& s);
int8* var_text_MCName();
int8* var_text_TotalPatsSocks();
int8* var_text_SpaceNeeded();
int8* var_text_SpaceAvailableString();
int8* var_text_SpaceAvailable();
int8* var_text_SoundMusicVolume();
int8* var_text_SoundFXVolume();
int8* var_text_ShinyCountText();
int8* var_text_ShinyCount();
int8* var_text_SelectedArea();
int8* var_text_PlayerPosition();
int8* var_text_PlayerName();
int8* var_text_PlayerHeShe();
int8* var_text_MCSelectedGame();
int8* var_text_MCSelectedCard();
int8* var_text_MCPS2MinSpace();
int8* var_text_MCPS2MaxSpace();
int8* var_text_MCAutoSaveCard();
int8* var_text_MCAccessType();
int8* var_text_GameSlot7();
int8* var_text_GameSlot6();
int8* var_text_GameSlot5();
int8* var_text_GameSlot4();
int8* var_text_GameSlot3();
int8* var_text_GameSlot2();
int8* var_text_GameSlot1();
int8* var_text_GameSlot0();
int8* zVarGameSlotInfo(int32 i, int8* buffer);
int8* var_text_CurrentTime();
int8* var_text_CurrentScene();
int8* var_text_CurrentLevelPatsSocks();
int8* var_text_CurrentLevelCollectable();
int8* var_text_CurrentDate();
int8* var_text_CurrentArea();
int8* var_text_CorruptFileName();
int8* var_text_BadCardNeeded();
int8* var_text_BadCardAvailable();
int8* var_text_BadCard();
int8* var_text_ActivePad();

// zVarEntryCB_IsVisible__FPv
// Start address: 0x1a2800
uint32 zVarEntryCB_IsVisible(void* context)
{
	// Line 1289, Address: 0x1a2800, Func Offset: 0
	// Line 1290, Address: 0x1a2810, Func Offset: 0x10
	// Func End, Address: 0x1a2818, Func Offset: 0x18
}

// zVarEntryCB_IsEnabled__FPv
// Start address: 0x1a2820
uint32 zVarEntryCB_IsEnabled(void* context)
{
	// Line 1281, Address: 0x1a2820, Func Offset: 0
	// Line 1282, Address: 0x1a2828, Func Offset: 0x8
	// Func End, Address: 0x1a2830, Func Offset: 0x10
}

// zVarEntryCB_CounterValue__FPv
// Start address: 0x1a2830
uint32 zVarEntryCB_CounterValue(void* context)
{
	// Line 1274, Address: 0x1a2830, Func Offset: 0
	// Func End, Address: 0x1a2838, Func Offset: 0x8
}

// zVarEntryCB_Minute__FPv
// Start address: 0x1a2840
uint32 zVarEntryCB_Minute()
{
	uint32 minute;
	// Line 1262, Address: 0x1a2840, Func Offset: 0
	// Line 1263, Address: 0x1a2848, Func Offset: 0x8
	// Line 1265, Address: 0x1a2850, Func Offset: 0x10
	// Line 1263, Address: 0x1a2854, Func Offset: 0x14
	// Line 1265, Address: 0x1a2858, Func Offset: 0x18
	// Func End, Address: 0x1a2860, Func Offset: 0x20
}

// zVarEntryCB_Hour__FPv
// Start address: 0x1a2860
uint32 zVarEntryCB_Hour()
{
	uint32 hour;
	// Line 1256, Address: 0x1a2860, Func Offset: 0
	// Line 1257, Address: 0x1a2868, Func Offset: 0x8
	// Line 1259, Address: 0x1a2870, Func Offset: 0x10
	// Line 1257, Address: 0x1a2874, Func Offset: 0x14
	// Line 1259, Address: 0x1a2878, Func Offset: 0x18
	// Func End, Address: 0x1a2880, Func Offset: 0x20
}

// zVarEntryCB_Date__FPv
// Start address: 0x1a2880
uint32 zVarEntryCB_Date()
{
	uint32 date;
	// Line 1250, Address: 0x1a2880, Func Offset: 0
	// Line 1251, Address: 0x1a2888, Func Offset: 0x8
	// Line 1253, Address: 0x1a289c, Func Offset: 0x1c
	// Line 1251, Address: 0x1a28a0, Func Offset: 0x20
	// Line 1253, Address: 0x1a28b8, Func Offset: 0x38
	// Func End, Address: 0x1a28c4, Func Offset: 0x44
}

// zVarEntryCB_Spatulas__FPv
// Start address: 0x1a28d0
uint32 zVarEntryCB_Spatulas()
{
	// Line 1241, Address: 0x1a28d0, Func Offset: 0
	// Line 1242, Address: 0x1a28d4, Func Offset: 0x4
	// Func End, Address: 0x1a28dc, Func Offset: 0xc
}

// zVarEntryCB_Shinies__FPv
// Start address: 0x1a28e0
uint32 zVarEntryCB_Shinies()
{
	// Line 1236, Address: 0x1a28e0, Func Offset: 0
	// Line 1237, Address: 0x1a28e4, Func Offset: 0x4
	// Func End, Address: 0x1a28ec, Func Offset: 0xc
}

// zVarEntryCB_TotalPSocks__FPv
// Start address: 0x1a28f0
uint32 zVarEntryCB_TotalPSocks()
{
	// Line 1231, Address: 0x1a28f0, Func Offset: 0
	// Line 1232, Address: 0x1a28f4, Func Offset: 0x4
	// Func End, Address: 0x1a28fc, Func Offset: 0xc
}

// zVarEntryCB_CurrentLevelPSocks__FPv
// Start address: 0x1a2900
uint32 zVarEntryCB_CurrentLevelPSocks()
{
	// Line 1226, Address: 0x1a2900, Func Offset: 0
	// Line 1227, Address: 0x1a2904, Func Offset: 0x4
	// Func End, Address: 0x1a290c, Func Offset: 0xc
}

// zVarEntryCB_CurrentLevelPickup__FPv
// Start address: 0x1a2910
uint32 zVarEntryCB_CurrentLevelPickup()
{
	// Line 1221, Address: 0x1a2910, Func Offset: 0
	// Line 1222, Address: 0x1a2914, Func Offset: 0x4
	// Func End, Address: 0x1a291c, Func Offset: 0xc
}

// zVarEntryCB_CurrentRoom__FPv
// Start address: 0x1a2920
uint32 zVarEntryCB_CurrentRoom()
{
	int32 room;
	int8 s[16];
	// Line 1205, Address: 0x1a2920, Func Offset: 0
	// Line 1209, Address: 0x1a2924, Func Offset: 0x4
	// Line 1205, Address: 0x1a2928, Func Offset: 0x8
	// Line 1209, Address: 0x1a292c, Func Offset: 0xc
	// Line 1211, Address: 0x1a2950, Func Offset: 0x30
	// Line 1213, Address: 0x1a2954, Func Offset: 0x34
	// Line 1211, Address: 0x1a2958, Func Offset: 0x38
	// Line 1213, Address: 0x1a295c, Func Offset: 0x3c
	// Line 1211, Address: 0x1a2960, Func Offset: 0x40
	// Line 1213, Address: 0x1a296c, Func Offset: 0x4c
	// Line 1211, Address: 0x1a2970, Func Offset: 0x50
	// Line 1213, Address: 0x1a2978, Func Offset: 0x58
	// Line 1215, Address: 0x1a2990, Func Offset: 0x70
	// Line 1217, Address: 0x1a29a0, Func Offset: 0x80
	// Line 1215, Address: 0x1a29a4, Func Offset: 0x84
	// Line 1217, Address: 0x1a29bc, Func Offset: 0x9c
	// Func End, Address: 0x1a29c4, Func Offset: 0xa4
}

// zVarEntryCB_CurrentSceneLetter__FPv
// Start address: 0x1a29d0
uint32 zVarEntryCB_CurrentSceneLetter()
{
	int8 s[16];
	// Line 1198, Address: 0x1a29d0, Func Offset: 0
	// Line 1200, Address: 0x1a29d4, Func Offset: 0x4
	// Line 1198, Address: 0x1a29d8, Func Offset: 0x8
	// Line 1200, Address: 0x1a29dc, Func Offset: 0xc
	// Line 1201, Address: 0x1a2a00, Func Offset: 0x30
	// Line 1202, Address: 0x1a2a2c, Func Offset: 0x5c
	// Line 1201, Address: 0x1a2a30, Func Offset: 0x60
	// Line 1202, Address: 0x1a2a34, Func Offset: 0x64
	// Func End, Address: 0x1a2a3c, Func Offset: 0x6c
}

// zVarEntryCB_VibrationOn__FPv
// Start address: 0x1a2a40
uint32 zVarEntryCB_VibrationOn()
{
	// Line 989, Address: 0x1a2a40, Func Offset: 0
	// Line 990, Address: 0x1a2a48, Func Offset: 0x8
	// Func End, Address: 0x1a2a50, Func Offset: 0x10
}

// zVarEntryCB_MCAvailable__FPv
// Start address: 0x1a2a50
uint32 zVarEntryCB_MCAvailable()
{
	// Line 956, Address: 0x1a2a50, Func Offset: 0
	// Line 958, Address: 0x1a2a54, Func Offset: 0x4
	// Line 956, Address: 0x1a2a58, Func Offset: 0x8
	// Line 958, Address: 0x1a2a5c, Func Offset: 0xc
	// Line 961, Address: 0x1a2a70, Func Offset: 0x20
	// Line 962, Address: 0x1a2a84, Func Offset: 0x34
	// Line 963, Address: 0x1a2a90, Func Offset: 0x40
	// Line 964, Address: 0x1a2aa0, Func Offset: 0x50
	// Line 967, Address: 0x1a2aa8, Func Offset: 0x58
	// Line 970, Address: 0x1a2abc, Func Offset: 0x6c
	// Line 971, Address: 0x1a2ad0, Func Offset: 0x80
	// Line 972, Address: 0x1a2ad8, Func Offset: 0x88
	// Line 973, Address: 0x1a2ae8, Func Offset: 0x98
	// Line 977, Address: 0x1a2af0, Func Offset: 0xa0
	// Line 978, Address: 0x1a2af8, Func Offset: 0xa8
	// Func End, Address: 0x1a2b04, Func Offset: 0xb4
}

// zVarEntryCB_SndFXVol__FPv
// Start address: 0x1a2b10
uint32 zVarEntryCB_SndFXVol()
{
	float64 floatVol;
	// Line 932, Address: 0x1a2b10, Func Offset: 0
	// Line 934, Address: 0x1a2b14, Func Offset: 0x4
	// Line 932, Address: 0x1a2b18, Func Offset: 0x8
	// Line 934, Address: 0x1a2b1c, Func Offset: 0xc
	// Line 938, Address: 0x1a2b24, Func Offset: 0x14
	// Line 942, Address: 0x1a2b34, Func Offset: 0x24
	// Line 943, Address: 0x1a2b4c, Func Offset: 0x3c
	// Func End, Address: 0x1a2b58, Func Offset: 0x48
}

// zVarEntryCB_SndMusicVol__FPv
// Start address: 0x1a2b60
uint32 zVarEntryCB_SndMusicVol()
{
	float64 floatVol;
	// Line 910, Address: 0x1a2b60, Func Offset: 0
	// Line 913, Address: 0x1a2b64, Func Offset: 0x4
	// Line 910, Address: 0x1a2b68, Func Offset: 0x8
	// Line 913, Address: 0x1a2b6c, Func Offset: 0xc
	// Line 917, Address: 0x1a2b74, Func Offset: 0x14
	// Line 921, Address: 0x1a2b84, Func Offset: 0x24
	// Line 922, Address: 0x1a2b9c, Func Offset: 0x3c
	// Func End, Address: 0x1a2ba8, Func Offset: 0x48
}

// zVarEntryCB_SndMode__FPv
// Start address: 0x1a2bb0
uint32 zVarEntryCB_SndMode()
{
	// Line 899, Address: 0x1a2bb0, Func Offset: 0
	// Line 900, Address: 0x1a2bb4, Func Offset: 0x4
	// Func End, Address: 0x1a2bbc, Func Offset: 0xc
}

// zVarNewGame__Fv
// Start address: 0x1a2bc0
void zVarNewGame()
{
	// Line 873, Address: 0x1a2bc0, Func Offset: 0
	// Func End, Address: 0x1a2bc8, Func Offset: 0x8
}

// zVarInit__FP9zVarEntry
// Start address: 0x1a2bd0
void zVarInit(zVarEntry* table)
{
	int32 i;
	// Line 854, Address: 0x1a2bd0, Func Offset: 0
	// Line 855, Address: 0x1a2be0, Func Offset: 0x10
	// Line 858, Address: 0x1a2be8, Func Offset: 0x18
	// Line 859, Address: 0x1a2bf0, Func Offset: 0x20
	// Line 858, Address: 0x1a2bf4, Func Offset: 0x24
	// Line 859, Address: 0x1a2bf8, Func Offset: 0x28
	// Line 860, Address: 0x1a2c04, Func Offset: 0x34
	// Func End, Address: 0x1a2c18, Func Offset: 0x48
}

// var_init__Fv
// Start address: 0x1a2c20
void var_init()
{
	tag_type var_tag;
	// Line 577, Address: 0x1a2c20, Func Offset: 0
	// Func End, Address: 0x1a2c30, Func Offset: 0x10
}

// parse_tag_var__18@unnamed@zVar_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1a2c30
void parse_tag_var(jot& j, split_tag& ti)
{
	// Line 563, Address: 0x1a2c30, Func Offset: 0
	// Line 564, Address: 0x1a2c34, Func Offset: 0x4
	// Line 563, Address: 0x1a2c38, Func Offset: 0x8
	// Line 564, Address: 0x1a2c44, Func Offset: 0x14
	// Line 565, Address: 0x1a2c78, Func Offset: 0x48
	// Line 566, Address: 0x1a2c80, Func Offset: 0x50
	// Line 567, Address: 0x1a2cac, Func Offset: 0x7c
	// Line 568, Address: 0x1a2cb0, Func Offset: 0x80
	// Line 569, Address: 0x1a2cbc, Func Offset: 0x8c
	// Line 570, Address: 0x1a2cc0, Func Offset: 0x90
	// Line 569, Address: 0x1a2cc4, Func Offset: 0x94
	// Line 570, Address: 0x1a2cc8, Func Offset: 0x98
	// Line 571, Address: 0x1a2cfc, Func Offset: 0xcc
	// Func End, Address: 0x1a2d10, Func Offset: 0xe0
}

// find_var__18@unnamed@zVar_cpp@FRC6substr
// Start address: 0x1a2d10
var_type* find_var(substr& s)
{
	uint32 start;
	uint32 end;
	uint32 i;
	var_type& t;
	int32 c;
	// Line 545, Address: 0x1a2d10, Func Offset: 0
	// Line 546, Address: 0x1a2d2c, Func Offset: 0x1c
	// Line 545, Address: 0x1a2d30, Func Offset: 0x20
	// Line 546, Address: 0x1a2d34, Func Offset: 0x24
	// Line 549, Address: 0x1a2d38, Func Offset: 0x28
	// Line 551, Address: 0x1a2d40, Func Offset: 0x30
	// Line 550, Address: 0x1a2d44, Func Offset: 0x34
	// Line 551, Address: 0x1a2d5c, Func Offset: 0x4c
	// Line 552, Address: 0x1a2d64, Func Offset: 0x54
	// Line 553, Address: 0x1a2d78, Func Offset: 0x68
	// Line 554, Address: 0x1a2d88, Func Offset: 0x78
	// Line 555, Address: 0x1a2d90, Func Offset: 0x80
	// Line 557, Address: 0x1a2d98, Func Offset: 0x88
	// Func End, Address: 0x1a2db8, Func Offset: 0xa8
}

// var_text_MCName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2dc0
int8* var_text_MCName()
{
	int8 buffer[32];
	// Line 472, Address: 0x1a2dc0, Func Offset: 0
	// Line 474, Address: 0x1a2dc8, Func Offset: 0x8
	// Line 476, Address: 0x1a2dec, Func Offset: 0x2c
	// Line 477, Address: 0x1a2df0, Func Offset: 0x30
	// Line 478, Address: 0x1a2e04, Func Offset: 0x44
	// Line 479, Address: 0x1a2e0c, Func Offset: 0x4c
	// Line 480, Address: 0x1a2e10, Func Offset: 0x50
	// Line 481, Address: 0x1a2e24, Func Offset: 0x64
	// Line 482, Address: 0x1a2e2c, Func Offset: 0x6c
	// Line 483, Address: 0x1a2e30, Func Offset: 0x70
	// Line 485, Address: 0x1a2e44, Func Offset: 0x84
	// Line 487, Address: 0x1a2e48, Func Offset: 0x88
	// Line 486, Address: 0x1a2e4c, Func Offset: 0x8c
	// Line 487, Address: 0x1a2e54, Func Offset: 0x94
	// Func End, Address: 0x1a2e5c, Func Offset: 0x9c
}

// var_text_TotalPatsSocks__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2e60
int8* var_text_TotalPatsSocks()
{
	int8 buffer[12];
	// Line 465, Address: 0x1a2e60, Func Offset: 0
	// Line 467, Address: 0x1a2e64, Func Offset: 0x4
	// Line 465, Address: 0x1a2e68, Func Offset: 0x8
	// Line 467, Address: 0x1a2e6c, Func Offset: 0xc
	// Line 469, Address: 0x1a2e84, Func Offset: 0x24
	// Line 468, Address: 0x1a2e88, Func Offset: 0x28
	// Line 469, Address: 0x1a2e90, Func Offset: 0x30
	// Func End, Address: 0x1a2e98, Func Offset: 0x38
}

// var_text_SpaceNeeded__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2ea0
int8* var_text_SpaceNeeded()
{
	int8 buffer[12];
	// Line 458, Address: 0x1a2ea0, Func Offset: 0
	// Line 460, Address: 0x1a2ea8, Func Offset: 0x8
	// Line 462, Address: 0x1a2ec8, Func Offset: 0x28
	// Line 461, Address: 0x1a2ecc, Func Offset: 0x2c
	// Line 462, Address: 0x1a2ed4, Func Offset: 0x34
	// Func End, Address: 0x1a2edc, Func Offset: 0x3c
}

// var_text_SpaceAvailableString__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2ee0
int8* var_text_SpaceAvailableString()
{
	int8 spaceStr[32];
	int32 spaceAvailable;
	int8 buffer[64];
	// Line 435, Address: 0x1a2ee0, Func Offset: 0
	// Line 438, Address: 0x1a2ee8, Func Offset: 0x8
	// Line 439, Address: 0x1a2ef4, Func Offset: 0x14
	// Line 440, Address: 0x1a2f04, Func Offset: 0x24
	// Line 450, Address: 0x1a2f18, Func Offset: 0x38
	// Line 453, Address: 0x1a2f2c, Func Offset: 0x4c
	// Line 455, Address: 0x1a2f44, Func Offset: 0x64
	// Line 454, Address: 0x1a2f48, Func Offset: 0x68
	// Line 455, Address: 0x1a2f4c, Func Offset: 0x6c
	// Line 454, Address: 0x1a2f50, Func Offset: 0x70
	// Line 455, Address: 0x1a2f54, Func Offset: 0x74
	// Func End, Address: 0x1a2f5c, Func Offset: 0x7c
}

// var_text_SpaceAvailable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2f60
int8* var_text_SpaceAvailable()
{
	int8 buffer[12];
	// Line 428, Address: 0x1a2f60, Func Offset: 0
	// Line 430, Address: 0x1a2f68, Func Offset: 0x8
	// Line 432, Address: 0x1a2f88, Func Offset: 0x28
	// Line 431, Address: 0x1a2f8c, Func Offset: 0x2c
	// Line 432, Address: 0x1a2f94, Func Offset: 0x34
	// Func End, Address: 0x1a2f9c, Func Offset: 0x3c
}

// var_text_SoundMusicVolume__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2fa0
int8* var_text_SoundMusicVolume()
{
	int8 buffer[12];
	// Line 421, Address: 0x1a2fa0, Func Offset: 0
	// Line 423, Address: 0x1a2fa4, Func Offset: 0x4
	// Line 421, Address: 0x1a2fa8, Func Offset: 0x8
	// Line 423, Address: 0x1a2fac, Func Offset: 0xc
	// Line 425, Address: 0x1a2ff4, Func Offset: 0x54
	// Line 424, Address: 0x1a2ff8, Func Offset: 0x58
	// Line 425, Address: 0x1a3000, Func Offset: 0x60
	// Func End, Address: 0x1a3008, Func Offset: 0x68
}

// var_text_SoundFXVolume__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3010
int8* var_text_SoundFXVolume()
{
	int8 buffer[12];
	// Line 414, Address: 0x1a3010, Func Offset: 0
	// Line 416, Address: 0x1a3014, Func Offset: 0x4
	// Line 414, Address: 0x1a3018, Func Offset: 0x8
	// Line 416, Address: 0x1a301c, Func Offset: 0xc
	// Line 418, Address: 0x1a3064, Func Offset: 0x54
	// Line 417, Address: 0x1a3068, Func Offset: 0x58
	// Line 418, Address: 0x1a3070, Func Offset: 0x60
	// Func End, Address: 0x1a3078, Func Offset: 0x68
}

// var_text_ShinyCountText__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3080
int8* var_text_ShinyCountText()
{
	int8 buffer[64];
	// Line 405, Address: 0x1a3080, Func Offset: 0
	// Line 407, Address: 0x1a3090, Func Offset: 0x10
	// Line 408, Address: 0x1a30b0, Func Offset: 0x30
	// Line 409, Address: 0x1a30d8, Func Offset: 0x58
	// Line 411, Address: 0x1a30f0, Func Offset: 0x70
	// Line 410, Address: 0x1a30f4, Func Offset: 0x74
	// Line 411, Address: 0x1a30fc, Func Offset: 0x7c
	// Func End, Address: 0x1a3104, Func Offset: 0x84
}

// var_text_ShinyCount__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3110
int8* var_text_ShinyCount()
{
	int8 buffer[12];
	// Line 398, Address: 0x1a3110, Func Offset: 0
	// Line 400, Address: 0x1a3114, Func Offset: 0x4
	// Line 398, Address: 0x1a3118, Func Offset: 0x8
	// Line 400, Address: 0x1a311c, Func Offset: 0xc
	// Line 402, Address: 0x1a3134, Func Offset: 0x24
	// Line 401, Address: 0x1a3138, Func Offset: 0x28
	// Line 402, Address: 0x1a3140, Func Offset: 0x30
	// Func End, Address: 0x1a3148, Func Offset: 0x38
}

// var_text_SelectedArea__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3150
int8* var_text_SelectedArea()
{
	// Line 394, Address: 0x1a3150, Func Offset: 0
	// Func End, Address: 0x1a3158, Func Offset: 0x8
}

// var_text_PlayerPosition__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3160
int8* var_text_PlayerPosition()
{
	xVec3& v;
	int8 buffer[48];
	// Line 384, Address: 0x1a3160, Func Offset: 0
	// Line 387, Address: 0x1a3164, Func Offset: 0x4
	// Line 384, Address: 0x1a3168, Func Offset: 0x8
	// Line 386, Address: 0x1a316c, Func Offset: 0xc
	// Line 387, Address: 0x1a3174, Func Offset: 0x14
	// Line 389, Address: 0x1a31a8, Func Offset: 0x48
	// Line 388, Address: 0x1a31ac, Func Offset: 0x4c
	// Line 389, Address: 0x1a31b4, Func Offset: 0x54
	// Func End, Address: 0x1a31bc, Func Offset: 0x5c
}

// var_text_PlayerName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a31c0
int8* var_text_PlayerName()
{
	int8* text[3];
	// Line 380, Address: 0x1a31c0, Func Offset: 0
	// Line 381, Address: 0x1a31d4, Func Offset: 0x14
	// Func End, Address: 0x1a31dc, Func Offset: 0x1c
}

// var_text_PlayerHeShe__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a31e0
int8* var_text_PlayerHeShe()
{
	int8* text[3];
	// Line 367, Address: 0x1a31e0, Func Offset: 0
	// Line 368, Address: 0x1a31f4, Func Offset: 0x14
	// Func End, Address: 0x1a31fc, Func Offset: 0x1c
}

// var_text_MCSelectedGame__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3200
int8* var_text_MCSelectedGame()
{
	int8 buffer[12];
	// Line 351, Address: 0x1a3200, Func Offset: 0
	// Line 353, Address: 0x1a3208, Func Offset: 0x8
	// Line 355, Address: 0x1a3228, Func Offset: 0x28
	// Line 354, Address: 0x1a322c, Func Offset: 0x2c
	// Line 355, Address: 0x1a3234, Func Offset: 0x34
	// Func End, Address: 0x1a323c, Func Offset: 0x3c
}

// var_text_MCSelectedCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3240
int8* var_text_MCSelectedCard()
{
	int8 buffer[12];
	// Line 333, Address: 0x1a3240, Func Offset: 0
	// Line 340, Address: 0x1a3248, Func Offset: 0x8
	// Line 348, Address: 0x1a3268, Func Offset: 0x28
	// Line 347, Address: 0x1a326c, Func Offset: 0x2c
	// Line 348, Address: 0x1a3274, Func Offset: 0x34
	// Func End, Address: 0x1a327c, Func Offset: 0x3c
}

// var_text_MCPS2MinSpace__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3280
int8* var_text_MCPS2MinSpace()
{
	int8 buffer[12];
	// Line 317, Address: 0x1a3280, Func Offset: 0
	// Line 327, Address: 0x1a3284, Func Offset: 0x4
	// Line 317, Address: 0x1a328c, Func Offset: 0xc
	// Line 327, Address: 0x1a3290, Func Offset: 0x10
	// Line 330, Address: 0x1a32a0, Func Offset: 0x20
	// Line 329, Address: 0x1a32a4, Func Offset: 0x24
	// Line 330, Address: 0x1a32ac, Func Offset: 0x2c
	// Func End, Address: 0x1a32b4, Func Offset: 0x34
}

// var_text_MCPS2MaxSpace__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a32c0
int8* var_text_MCPS2MaxSpace()
{
	int8 buffer[12];
	// Line 301, Address: 0x1a32c0, Func Offset: 0
	// Line 311, Address: 0x1a32c4, Func Offset: 0x4
	// Line 301, Address: 0x1a32cc, Func Offset: 0xc
	// Line 311, Address: 0x1a32d0, Func Offset: 0x10
	// Line 314, Address: 0x1a32e0, Func Offset: 0x20
	// Line 313, Address: 0x1a32e4, Func Offset: 0x24
	// Line 314, Address: 0x1a32ec, Func Offset: 0x2c
	// Func End, Address: 0x1a32f4, Func Offset: 0x34
}

// var_text_MCAutoSaveCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3300
int8* var_text_MCAutoSaveCard()
{
	int8 buffer[12];
	// Line 283, Address: 0x1a3300, Func Offset: 0
	// Line 290, Address: 0x1a3308, Func Offset: 0x8
	// Line 298, Address: 0x1a3328, Func Offset: 0x28
	// Line 297, Address: 0x1a332c, Func Offset: 0x2c
	// Line 298, Address: 0x1a3334, Func Offset: 0x34
	// Func End, Address: 0x1a333c, Func Offset: 0x3c
}

// var_text_MCAccessType__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3340
int8* var_text_MCAccessType()
{
	int32 i;
	int8* state_text[4];
	// Line 265, Address: 0x1a3340, Func Offset: 0
	// Line 277, Address: 0x1a3348, Func Offset: 0x8
	// Line 279, Address: 0x1a3350, Func Offset: 0x10
	// Line 280, Address: 0x1a3354, Func Offset: 0x14
	// Line 279, Address: 0x1a3358, Func Offset: 0x18
	// Line 280, Address: 0x1a3368, Func Offset: 0x28
	// Func End, Address: 0x1a3370, Func Offset: 0x30
}

// var_text_GameSlot7__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3370
int8* var_text_GameSlot7()
{
	int8 buffer[64];
	// Line 261, Address: 0x1a3370, Func Offset: 0
	// Func End, Address: 0x1a3384, Func Offset: 0x14
}

// var_text_GameSlot6__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3390
int8* var_text_GameSlot6()
{
	int8 buffer[64];
	// Line 260, Address: 0x1a3390, Func Offset: 0
	// Func End, Address: 0x1a33a4, Func Offset: 0x14
}

// var_text_GameSlot5__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33b0
int8* var_text_GameSlot5()
{
	int8 buffer[64];
	// Line 259, Address: 0x1a33b0, Func Offset: 0
	// Func End, Address: 0x1a33c4, Func Offset: 0x14
}

// var_text_GameSlot4__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33d0
int8* var_text_GameSlot4()
{
	int8 buffer[64];
	// Line 258, Address: 0x1a33d0, Func Offset: 0
	// Func End, Address: 0x1a33e4, Func Offset: 0x14
}

// var_text_GameSlot3__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33f0
int8* var_text_GameSlot3()
{
	int8 buffer[64];
	// Line 257, Address: 0x1a33f0, Func Offset: 0
	// Func End, Address: 0x1a3404, Func Offset: 0x14
}

// var_text_GameSlot2__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3410
int8* var_text_GameSlot2()
{
	int8 buffer[64];
	// Line 256, Address: 0x1a3410, Func Offset: 0
	// Func End, Address: 0x1a3424, Func Offset: 0x14
}

// var_text_GameSlot1__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3430
int8* var_text_GameSlot1()
{
	int8 buffer[64];
	// Line 255, Address: 0x1a3430, Func Offset: 0
	// Func End, Address: 0x1a3444, Func Offset: 0x14
}

// var_text_GameSlot0__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3450
int8* var_text_GameSlot0()
{
	int8 buffer[64];
	// Line 254, Address: 0x1a3450, Func Offset: 0
	// Func End, Address: 0x1a3464, Func Offset: 0x14
}

// zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUi
// Start address: 0x1a3470
int8* zVarGameSlotInfo(int32 i, int8* buffer)
{
	int8 date[32];
	int8 time[32];
	int32 hour;
	int8 ampm[32];
	int8 biggerbuf[256];
	// Line 193, Address: 0x1a3470, Func Offset: 0
	// Line 194, Address: 0x1a3474, Func Offset: 0x4
	// Line 193, Address: 0x1a3478, Func Offset: 0x8
	// Line 194, Address: 0x1a347c, Func Offset: 0xc
	// Line 193, Address: 0x1a3480, Func Offset: 0x10
	// Line 194, Address: 0x1a3498, Func Offset: 0x28
	// Line 195, Address: 0x1a34b8, Func Offset: 0x48
	// Line 197, Address: 0x1a34dc, Func Offset: 0x6c
	// Line 198, Address: 0x1a3500, Func Offset: 0x90
	// Line 201, Address: 0x1a3528, Func Offset: 0xb8
	// Line 198, Address: 0x1a352c, Func Offset: 0xbc
	// Line 201, Address: 0x1a3530, Func Offset: 0xc0
	// Line 198, Address: 0x1a353c, Func Offset: 0xcc
	// Line 201, Address: 0x1a3540, Func Offset: 0xd0
	// Line 203, Address: 0x1a3554, Func Offset: 0xe4
	// Line 202, Address: 0x1a3558, Func Offset: 0xe8
	// Line 203, Address: 0x1a355c, Func Offset: 0xec
	// Line 202, Address: 0x1a3564, Func Offset: 0xf4
	// Line 203, Address: 0x1a3568, Func Offset: 0xf8
	// Line 204, Address: 0x1a3590, Func Offset: 0x120
	// Line 208, Address: 0x1a35a0, Func Offset: 0x130
	// Line 204, Address: 0x1a35a4, Func Offset: 0x134
	// Line 208, Address: 0x1a35a8, Func Offset: 0x138
	// Line 205, Address: 0x1a35b4, Func Offset: 0x144
	// Line 208, Address: 0x1a35b8, Func Offset: 0x148
	// Line 209, Address: 0x1a35d8, Func Offset: 0x168
	// Line 210, Address: 0x1a35e4, Func Offset: 0x174
	// Line 212, Address: 0x1a35f0, Func Offset: 0x180
	// Line 213, Address: 0x1a3600, Func Offset: 0x190
	// Line 215, Address: 0x1a360c, Func Offset: 0x19c
	// Line 218, Address: 0x1a3618, Func Offset: 0x1a8
	// Line 219, Address: 0x1a362c, Func Offset: 0x1bc
	// Line 220, Address: 0x1a3634, Func Offset: 0x1c4
	// Line 223, Address: 0x1a3638, Func Offset: 0x1c8
	// Line 224, Address: 0x1a3670, Func Offset: 0x200
	// Line 231, Address: 0x1a3688, Func Offset: 0x218
	// Line 227, Address: 0x1a3694, Func Offset: 0x224
	// Line 231, Address: 0x1a3698, Func Offset: 0x228
	// Line 233, Address: 0x1a36b0, Func Offset: 0x240
	// Line 235, Address: 0x1a36bc, Func Offset: 0x24c
	// Line 238, Address: 0x1a36c8, Func Offset: 0x258
	// Line 239, Address: 0x1a36d4, Func Offset: 0x264
	// Line 241, Address: 0x1a36d8, Func Offset: 0x268
	// Line 242, Address: 0x1a36dc, Func Offset: 0x26c
	// Func End, Address: 0x1a36fc, Func Offset: 0x28c
}

// var_text_CurrentTime__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3700
int8* var_text_CurrentTime()
{
	int8 buffer[32];
	// Line 185, Address: 0x1a3700, Func Offset: 0
	// Line 187, Address: 0x1a3704, Func Offset: 0x4
	// Line 185, Address: 0x1a3708, Func Offset: 0x8
	// Line 187, Address: 0x1a370c, Func Offset: 0xc
	// Line 190, Address: 0x1a3714, Func Offset: 0x14
	// Line 189, Address: 0x1a3718, Func Offset: 0x18
	// Line 190, Address: 0x1a3720, Func Offset: 0x20
	// Func End, Address: 0x1a3728, Func Offset: 0x28
}

// var_text_CurrentScene__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3730
int8* var_text_CurrentScene()
{
	int8 buffer[32];
	// Line 178, Address: 0x1a3730, Func Offset: 0
	// Line 180, Address: 0x1a3734, Func Offset: 0x4
	// Line 178, Address: 0x1a3738, Func Offset: 0x8
	// Line 180, Address: 0x1a373c, Func Offset: 0xc
	// Line 182, Address: 0x1a3764, Func Offset: 0x34
	// Line 181, Address: 0x1a3768, Func Offset: 0x38
	// Line 182, Address: 0x1a3770, Func Offset: 0x40
	// Func End, Address: 0x1a3778, Func Offset: 0x48
}

// var_text_CurrentLevelPatsSocks__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3780
int8* var_text_CurrentLevelPatsSocks()
{
	int8 buffer[12];
	// Line 171, Address: 0x1a3780, Func Offset: 0
	// Line 173, Address: 0x1a3784, Func Offset: 0x4
	// Line 171, Address: 0x1a3788, Func Offset: 0x8
	// Line 173, Address: 0x1a378c, Func Offset: 0xc
	// Line 175, Address: 0x1a37a4, Func Offset: 0x24
	// Line 174, Address: 0x1a37a8, Func Offset: 0x28
	// Line 175, Address: 0x1a37b0, Func Offset: 0x30
	// Func End, Address: 0x1a37b8, Func Offset: 0x38
}

// var_text_CurrentLevelCollectable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a37c0
int8* var_text_CurrentLevelCollectable()
{
	int8 buffer[12];
	// Line 164, Address: 0x1a37c0, Func Offset: 0
	// Line 166, Address: 0x1a37c4, Func Offset: 0x4
	// Line 164, Address: 0x1a37c8, Func Offset: 0x8
	// Line 166, Address: 0x1a37cc, Func Offset: 0xc
	// Line 168, Address: 0x1a37e4, Func Offset: 0x24
	// Line 167, Address: 0x1a37e8, Func Offset: 0x28
	// Line 168, Address: 0x1a37f0, Func Offset: 0x30
	// Func End, Address: 0x1a37f8, Func Offset: 0x38
}

// var_text_CurrentDate__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3800
int8* var_text_CurrentDate()
{
	int8 buffer[32];
	// Line 156, Address: 0x1a3800, Func Offset: 0
	// Line 158, Address: 0x1a3804, Func Offset: 0x4
	// Line 156, Address: 0x1a3808, Func Offset: 0x8
	// Line 158, Address: 0x1a380c, Func Offset: 0xc
	// Line 161, Address: 0x1a3814, Func Offset: 0x14
	// Line 160, Address: 0x1a3818, Func Offset: 0x18
	// Line 161, Address: 0x1a3820, Func Offset: 0x20
	// Func End, Address: 0x1a3828, Func Offset: 0x28
}

// var_text_CurrentArea__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3830
int8* var_text_CurrentArea()
{
	// Line 152, Address: 0x1a3830, Func Offset: 0
	// Func End, Address: 0x1a3840, Func Offset: 0x10
}

// var_text_CorruptFileName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3840
int8* var_text_CorruptFileName()
{
	int8 buffer[128];
	// Line 130, Address: 0x1a3840, Func Offset: 0
	// Line 145, Address: 0x1a3844, Func Offset: 0x4
	// Line 130, Address: 0x1a384c, Func Offset: 0xc
	// Line 145, Address: 0x1a3850, Func Offset: 0x10
	// Line 148, Address: 0x1a385c, Func Offset: 0x1c
	// Line 147, Address: 0x1a3860, Func Offset: 0x20
	// Line 148, Address: 0x1a3868, Func Offset: 0x28
	// Func End, Address: 0x1a3870, Func Offset: 0x30
}

// var_text_BadCardNeeded__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3870
int8* var_text_BadCardNeeded()
{
	int8 buffer[12];
	// Line 118, Address: 0x1a3870, Func Offset: 0
	// Line 124, Address: 0x1a3874, Func Offset: 0x4
	// Line 118, Address: 0x1a387c, Func Offset: 0xc
	// Line 121, Address: 0x1a3880, Func Offset: 0x10
	// Line 124, Address: 0x1a3884, Func Offset: 0x14
	// Line 121, Address: 0x1a3888, Func Offset: 0x18
	// Line 124, Address: 0x1a388c, Func Offset: 0x1c
	// Line 127, Address: 0x1a3894, Func Offset: 0x24
	// Line 126, Address: 0x1a3898, Func Offset: 0x28
	// Line 127, Address: 0x1a38a0, Func Offset: 0x30
	// Func End, Address: 0x1a38a8, Func Offset: 0x38
}

// var_text_BadCardAvailable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a38b0
int8* var_text_BadCardAvailable()
{
	int8 buffer[12];
	// Line 111, Address: 0x1a38b0, Func Offset: 0
	// Line 113, Address: 0x1a38b4, Func Offset: 0x4
	// Line 111, Address: 0x1a38b8, Func Offset: 0x8
	// Line 113, Address: 0x1a38bc, Func Offset: 0xc
	// Line 115, Address: 0x1a38d0, Func Offset: 0x20
	// Line 114, Address: 0x1a38d4, Func Offset: 0x24
	// Line 115, Address: 0x1a38dc, Func Offset: 0x2c
	// Func End, Address: 0x1a38e4, Func Offset: 0x34
}

// var_text_BadCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a38f0
int8* var_text_BadCard()
{
	int32 card;
	int8 buffer[12];
	// Line 76, Address: 0x1a38f0, Func Offset: 0
	// Line 96, Address: 0x1a38f8, Func Offset: 0x8
	// Line 97, Address: 0x1a3900, Func Offset: 0x10
	// Line 99, Address: 0x1a3908, Func Offset: 0x18
	// Line 100, Address: 0x1a391c, Func Offset: 0x2c
	// Line 103, Address: 0x1a3928, Func Offset: 0x38
	// Line 104, Address: 0x1a393c, Func Offset: 0x4c
	// Line 108, Address: 0x1a3940, Func Offset: 0x50
	// Line 107, Address: 0x1a3944, Func Offset: 0x54
	// Line 108, Address: 0x1a394c, Func Offset: 0x5c
	// Func End, Address: 0x1a3954, Func Offset: 0x64
}

// var_text_ActivePad__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3960
int8* var_text_ActivePad()
{
	int8 buffer[12];
	// Line 69, Address: 0x1a3960, Func Offset: 0
	// Line 71, Address: 0x1a3964, Func Offset: 0x4
	// Line 69, Address: 0x1a3968, Func Offset: 0x8
	// Line 71, Address: 0x1a396c, Func Offset: 0xc
	// Line 73, Address: 0x1a3988, Func Offset: 0x28
	// Line 72, Address: 0x1a398c, Func Offset: 0x2c
	// Line 73, Address: 0x1a3994, Func Offset: 0x34
	// Func End, Address: 0x1a399c, Func Offset: 0x3c
}

