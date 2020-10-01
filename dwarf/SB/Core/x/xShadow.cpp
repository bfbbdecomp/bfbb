typedef struct xGroup;
typedef struct RwCamera;
typedef struct xAnimTransition;
typedef struct RwRaster;
typedef struct tagiRenderInput;
typedef struct xEntMotionPenData;
typedef struct xShadowMgr;
typedef struct RpAtomic;
typedef struct RxHeap;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct xModelPool;
typedef struct xShadowCache;
typedef struct RxPipelineNode;
typedef struct RpMaterial;
typedef struct xModelInstance;
typedef struct xBase;
typedef struct ShadowCacheContext;
typedef struct xEnt;
typedef struct zScene;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct zCheckPoint;
typedef struct xJSPHeader;
typedef struct xVec3;
typedef struct RxObjSpace3DVertex;
typedef struct xPlatformAsset;
typedef struct zPlayerGlobals;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpGeometry;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct zJumpParam;
typedef struct xEntMPData;
typedef struct tri_data_0;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct RwFrame;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct RpWorldSector;
typedef struct xMat4x3;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xNPCBasic;
typedef struct xEntMotionAsset;
typedef struct zEntHangable;
typedef struct RpTriangle;
typedef struct xMovePoint;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct xCollis;
typedef struct RxPipeline;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct zEnt;
typedef struct RpV3dGradient;
typedef struct RpMaterialList;
typedef struct RpPolygon;
typedef struct RpCollisionTriangle;
typedef struct xJSPNodeInfo;
typedef struct xSurface;
typedef struct xSpline3;
typedef struct zPlatform;
typedef struct xAnimEffect;
typedef struct xEnvAsset;
typedef struct xUpdateCullEnt;
typedef struct RpIntersection;
typedef struct xEntMotionERData;
typedef struct xScene;
typedef struct xGridBound;
typedef struct xVec4;
typedef struct RwMatrixTag;
typedef struct xRay3;
typedef struct RpVertexNormal;
typedef struct RwSurfaceProperties;
typedef struct xEntFrame;
typedef struct xQCData;
typedef struct zCutsceneMgr;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zPlatFMRunTime;
typedef struct rxReq;
typedef struct RwV4dTag;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct zAssetPickupTable;
typedef struct RpMeshHeader;
typedef enum RxClusterValidityReq;
typedef struct xLinkAsset;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct ShadowCBParam;
typedef struct iFogParams;
typedef struct xCoef;
typedef struct _tagxRumble;
typedef struct xBound;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct xShadowSimplePoly;
typedef struct xEntBoulder;
typedef struct xFactoryInst;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xEntMotionOrbitData;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBaseAsset;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xCoef3;
typedef enum _tagPadState;
typedef struct xSphere;
typedef struct xAnimFile;
typedef struct _ProjectionParam;
typedef struct xShadowSimpleCache;
typedef enum RwCameraProjection;
typedef struct xMovePointAsset;
typedef struct xEntCollis;
typedef enum RxClusterForcePresent;
typedef struct xGlobals;
typedef struct xCylinder;
typedef struct xAnimTransitionList;
typedef union RxColorUnion;
typedef struct xModelTag;
typedef struct _tagxPad;
typedef struct xBox;
typedef struct RwV2d;
typedef enum RpIntersectType;
typedef struct RxClusterDefinition;
typedef struct zLasso;
typedef struct xShadowPoly;
typedef struct xEntMechData;
typedef struct xEntMotionSplineData;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct RwSphere;
typedef struct xGroupAsset;
typedef struct _tagiPad;
typedef struct RwTexDictionary;
typedef struct xVec2;
typedef struct xFFX;
typedef struct RxOutputSpec;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xGrid;
typedef struct xBBox;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct RwObject;
typedef struct xEntShadow;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwLLLink;
typedef union RpIntersectData;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxIoSpec;
typedef struct anim_coll_data;
typedef struct xClumpCollBSPTriangle;
typedef struct RwLine;
typedef struct RxNodeMethods;
typedef struct RyzMemData;
typedef struct RxPipelineCluster;
typedef struct RwSky2DVertexFields;
typedef struct xPortalAsset;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xEntMotionMechData;
typedef struct _zPortal;
typedef struct zGlobals;
typedef struct RwPlane;
typedef struct xEntPenData;
typedef struct zGlobalSettings;
typedef struct RxCluster;
typedef struct xQCControl;
typedef struct RxPipelineNodeParam;
typedef struct zPlayerLassoInfo;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef union _class_0;
typedef struct RxPacket;
typedef struct xEntOrbitData;
typedef struct zLedgeGrabParams;
typedef enum RwFogType;
typedef struct _class_1;
typedef struct tri_data_1;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xEntDrive;
typedef enum _zPlayerWallJumpState;
typedef struct xEntMotion;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RpSkin;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef enum RwBlendFunction;
typedef struct xEntSplineData;
typedef struct analog_data;
typedef struct _class_2;

typedef s32(*type_6)(xEnt*, void*);
typedef void(*type_9)(xModelInstance*);
typedef void(*type_11)(xEnt*);
typedef u32(*type_16)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_17)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_21)(xEnt*);
typedef s32(*type_23)(RxNodeDefinition*);
typedef void(*type_25)(RxNodeDefinition*);
typedef s32(*type_27)(RxPipelineNode*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef void(*type_29)(RxPipelineNode*);
typedef s32(*type_30)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_32)(RxPipelineNode*, RxPipeline*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef RpCollisionTriangle*(*type_35)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef RpCollisionTriangle*(*type_36)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef void(*type_37)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef u32(*type_39)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_45)(u32);
typedef void(*type_47)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_49)(void*);
typedef s8*(*type_52)(xBase*);
typedef s8*(*type_54)(u32);
typedef RpAtomic*(*type_59)(RpAtomic*);
typedef void(*type_61)(xEnt*, xScene*, f32);
typedef s32(*type_65)(void*, void*);
typedef void(*type_66)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_67)(xEnt*, xVec3*);
typedef void(*type_69)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_72)(xEnt*);
typedef u32(*type_73)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_74)(void*);
typedef u32(*type_77)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_81)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_90)(void*);
typedef RpWorldSector*(*type_95)(RpWorldSector*);
typedef RwCamera*(*type_96)(RwCamera*);
typedef RwCamera*(*type_99)(RwCamera*);
typedef u32(*type_100)(void*, void*);
typedef void(*type_104)(xMemPool*, void*);
typedef void(*type_110)(void*);
typedef void(*type_111)(RwResEntry*);
typedef s32(*type_116)(s32, s32, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);

typedef xVec3 type_0[3];
typedef f32 type_1[2];
typedef u16 type_2[3];
typedef u32 type_3[15];
typedef f32 type_4[5];
typedef u8 type_5[2];
typedef xAnimMultiFileEntry type_7[1];
typedef u8 type_8[2];
typedef u32 type_10[72];
typedef s8 type_12[16];
typedef u32 type_13[15];
typedef RwFrustumPlane type_14[6];
typedef s8 type_15[4];
typedef xBase* type_18[72];
typedef analog_data type_20[2];
typedef RwV3d type_22[8];
typedef xShadowCache type_24[6];
typedef RxObjSpace3DVertex type_26[36];
typedef f32 type_31[5];
typedef RwTexCoords* type_33[8];
typedef xEnt* type_38[16];
typedef xVec4 type_40[12];
typedef u8 type_41[2];
typedef xVec3 type_42[6];
typedef xShadowPoly type_43[256];
typedef u32 type_44[2];
typedef u8 type_46[2];
typedef f32 type_48[6];
typedef f32 type_50[4];
typedef xVec3 type_51[3];
typedef f32 type_53[3];
typedef f32 type_55[3];
typedef u16 type_56[3];
typedef xModelTag type_57[2];
typedef f32 type_58[3];
typedef RpLight* type_60[2];
typedef RwFrame* type_62[2];
typedef u8 type_63[3];
typedef f32 type_64[16];
typedef xEnt* type_68[111];
typedef RwV3d type_70[3];
typedef RwV2d type_71[2];
typedef xEnt* type_75[16];
typedef u8 type_76[2];
typedef s8 type_78[128];
typedef u32 type_79[4];
typedef type_78 type_80[6];
typedef u8 type_82[14];
typedef xModelTag type_83[4];
typedef s8 type_84[32];
typedef RwTexCoords* type_85[8];
typedef xVec3 type_86[4];
typedef xVec3 type_87[3];
typedef xModelInstance* type_88[14];
typedef f32 type_89[4];
typedef u32 type_91[4096];
typedef u32 type_92[4];
typedef type_92 type_93[6];
typedef u8 type_94[4];
typedef u32 type_97[11];
typedef xRay3 type_98[1];
typedef u8 type_101[22];
typedef xCollis type_102[1];
typedef xEnt* type_103[5];
typedef u8 type_105[22];
typedef xCollis type_106[18];
typedef xCollis type_107[1];
typedef s8 type_108[32];
typedef s8 type_109[32];
typedef f32 type_112[2];
typedef type_112 type_113[3];
typedef s8* type_114[11];
typedef xVec3 type_115[5];
typedef u8 type_117[5];
typedef f32 type_118[12];
typedef xVec3 type_119[60];
typedef RxCluster type_120[1];
typedef f32 type_121[12];
typedef f32 type_122[2];
typedef f32 type_123[12];
typedef f32 type_125[22];
typedef f32 type_126[12];
typedef u8 type_127[3];
typedef <unknown type (0xa510)> type_128[4];
typedef RwV3d* type_129[3];
typedef f32 type_130[22];
typedef RwSky2DVertex type_131[4];
typedef f32 type_132[12];
typedef xVec3 type_133[8];
typedef f32 type_134[12];
typedef s32 type_135[6];
typedef f32 type_136[4];
typedef u8 type_137[3];
typedef s8 type_138[16];
typedef u32 type_139[15];

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_96 beginUpdate;
	type_99 endUpdate;
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
	type_14 frustumPlanes;
	RwBBox frustumBoundBox;
	type_22 frustumCorners;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_73 Conditional;
	type_73 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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

struct tagiRenderInput
{
	u16* m_index;
	RxObjSpace3DVertex* m_vertex;
	f32* m_vertexTZ;
	u32 m_mode;
	s32 m_vertexType;
	s32 m_vertexTypeSize;
	s32 m_indexCount;
	s32 m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_8 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct xShadowMgr
{
	xEnt* ent;
	xShadowCache* cache;
	s32 priority;
	s32 cacheReady;
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
	type_59 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_34 BeforeEnter;
	type_17 StateCallback;
	type_47 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_7 Files;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xShadowCache
{
	xVec3 pos;
	f32 radius;
	u32 entCount;
	u32 polyCount;
	type_31 polyRayDepth;
	u16 castOnEnt;
	u16 castOnPoly;
	type_38 ent;
	type_43 poly;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_30 eventFunc;
};

struct ShadowCacheContext
{
	xShadowCache* cache;
	f32 minNormY;
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
	type_61 update;
	type_61 endUpdate;
	type_67 bupdate;
	type_69 move;
	type_72 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_81 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_10 baseCount;
	type_18 baseList;
	_zEnv* zen;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_122 BilinearLerp;
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

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct xJSPHeader
{
	type_15 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
};

struct xPlatformAsset
{
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
	type_57 BubbleWandTag;
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
	type_83 HangPawTag;
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
	type_139 Inv_PatsSock;
	type_3 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_13 Inv_LevelPickups;
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
	type_44 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_68 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_82 sb_model_indices;
	type_88 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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
	type_85 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_79 pad;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_28 callback;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	type_49 activateCB;
	type_49 deactivateCB;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_33 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	type_40 frustplane;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_11 f_setup;
	type_21 f_reset;
	union
	{
		s32 flg_basenpc;
		s32 inUpdate;
		s32 flg_upward;
	};
	s32 colFreq;
	s32 colFreqReset;
	union
	{
		u32 flg_colCheck;
		u32 flg_penCheck;
		u32 flg_unused;
	};
	s32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
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

struct zEntHangable
{
};

struct RpTriangle
{
	type_56 vertIndex;
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
	type_76 pad;
	f32 delay;
	xSpline3* spl;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_48 MoveSpeed;
	type_53 AnimSneak;
	type_55 AnimWalk;
	type_58 AnimRun;
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
	type_94 talk_filter;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
		tri_data_1 tri;
	};
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
	type_47 BeforeAnimMatrices;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpV3dGradient
{
	f32 dydx;
	f32 dzdx;
	f32 dxdy;
	f32 dzdy;
	f32 dxdz;
	f32 dydz;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RpPolygon
{
	u16 matIndex;
	type_2 vertIndex;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	s32 index;
	type_129 vertices;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	type_63 pad;
	void* moprops;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_39 Callback;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_100 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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
	type_45 resolvID;
	type_52 base2Name;
	type_54 id2Name;
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

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_118 tmrs;
	type_121 ttms;
	type_123 atms;
	type_126 dtms;
	type_132 vms;
	type_134 dss;
};

struct rxReq
{
};

struct RwV4dTag
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct zAssetPickupTable
{
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_136 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_104 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_111 destroyNotify;
};

struct ShadowCBParam
{
	xShadowCache* cache;
	RpIntersection* isx;
	xVec3 capsuleStart;
	xVec3 capsuleEnd;
	f32 capsuleRadius;
	xEnt* ent;
	RwLine localLine;
	RwV3d localDelta;
	f32 localRadius;
	RwMatrixTag* modelMat;
	RpGeometry* geom;
	u32 polyFound;
	type_103 rayCloser;
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

struct xCoef
{
	type_50 a;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_127 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_60 light;
	type_62 light_frame;
	s32 memlvl;
};

struct xShadowSimplePoly
{
	type_51 vert;
	xVec3 norm;
};

struct xEntBoulder
{
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	type_95 renderCallBack;
	RxPipeline* pipeline;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_64 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xSphere
{
	xVec3 center;
	f32 r;
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
	type_5 NumAnims;
	void** RawData;
};

struct _ProjectionParam
{
	RwV3d at;
	RwMatrixTag invMatrix;
	u8 shadowValue;
	s32 fade;
	u32 numIm3DBatch;
	u32 shadowWord;
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
	type_86 corner;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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
	type_106 colls;
	type_66 post;
	type_77 depenq;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_80 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_84 sceneStart;
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

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_89 wt;
};

struct _tagxPad
{
	type_101 value;
	type_105 last_value;
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
	type_125 up_tmr;
	type_130 down_tmr;
	type_20 analog;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	type_115 lastRefs;
	type_117 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xShadowPoly
{
	type_0 vert;
	xVec3 norm;
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

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct _tagiPad
{
	s32 port;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct xFFX
{
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_108 name;
	type_109 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RpSector
{
	s32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xGrid
{
	u8 ingrid_id;
	type_137 pad;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
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

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_1 radius;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RxNodeMethods
{
	type_19 nodeBody;
	type_23 nodeInit;
	type_25 nodeTerm;
	type_27 pipelineNodeInit;
	type_29 pipelineNodeTerm;
	type_32 pipelineNodeConfig;
	type_16 configMsgHandler;
};

struct RyzMemData
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	f32 camVertex_z;
	f32 u;
	f32 v;
	f32 recipZ;
	f32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	f32 pad2;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
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
	type_41 PowerUp;
	type_46 InitialPowerUp;
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

struct xQCControl
{
	f32 world_xmin;
	f32 world_ymin;
	f32 world_zmin;
	f32 world_xmax;
	f32 world_ymax;
	f32 world_zmax;
	f32 world_xsz;
	f32 world_ysz;
	f32 world_zsz;
	f32 scale_x;
	f32 scale_y;
	f32 scale_z;
	f32 center_x;
	f32 center_y;
	f32 center_z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_120 clusters;
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

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_119 tranTable;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_1
{
	xVec3* verts;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_124 sync;
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
	tri_data_0 tri;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_128 qWords;
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

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RpSkin
{
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

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntSplineData
{
	s32 unknown;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct _class_2
{
	f32 t;
	f32 u;
	f32 v;
};

type_138 buffer;
type_12 buffer;
RpLight* ShadowLight;
RwRGBAReal ShadowLightColor;
type_114 sCacheBlendLabels;
type_97 sCacheBlendValues;
u32 sCacheNumBlendModes;
f32 SHADOW_BF_DOT;
f32 SHADOW_BOTH;
RxObjSpace3DVertex* Im3DBuffer;
u32 Im3DBufferPos;
f32 ShadowThreshold;
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
RwRaster* ShadowRenderRaster;
type_71 ShadowPreviewVerts;
f32 ShadowStrength;
u32 gShadowFlags;
f32 gShadowObjectRadius;
u32 shadow_ent_count;
type_75 shadow_ent_list;
s32 sShadowCollJSP;
RwMatrixTag sm_matrix;
f32 rscale;
RwV3d gCamPos;
u32 skyOldTest;
type_93 shadvolquad_idx;
xEnt* sEntSelf;
xShadowMgr* sMgrList;
s32 sMgrCount;
s32 sMgrTotal;
type_24 sCacheList;
RxPipeline* adlSkinPipe;
RxPipeline* a4dSkinPipe;
RxPipeline* adlSkinPipeADC;
RxPipeline* a4dSkinPipeADC;
xVec3 g_NY3;
u8 xClumpColl_FilterFlags;
type_9 xModelRender;
type_65 CmpShadowMgr;
zGlobals globals;
u32 gActiveHeap;
tagiRenderInput gRenderBuffer;
type_6 shadowCacheEntityCB;
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
type_36 shadowCacheEnvCB;
type_116 shadowCacheLeafCB;
s32 _rpCollisionGeometryDataOffset;
type_91 ourGlobals;
type_35 ShadowRenderTriangleCB;
s32 iModelHack_DisablePrelight;
type_110 modelRenderCB;
type_37 xRayHitsEnt;

void xShadow_PickEntForNPC(xShadowMgr* mgr);
void xShadow_PickByRayCast(xShadowMgr* mgr);
void xShadowManager_Render();
s32 CmpShadowMgr(void* a, void* b);
void xShadowManager_Remove(xEnt* ent);
void xShadowManager_Add(xEnt* ent);
void xShadowManager_Reset();
void xShadowManager_Init(s32 numEnts);
void xShadowVertical_DrawCache(xShadowCache* cache, f32 shadowFactor, f32 fadeDist, s32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, f32 r, f32 depth, f32 minNormY);
s32 shadowCacheEntityCB(xEnt* ent, void* cbdata);
s32 shadowCacheLeafCB(s32 numTriangles, s32 triOffset, void* data);
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data);
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, f32 depth);
void DrawAlphaBox(xVec3* volume, s32 frontface, u8 alpha);
u8 ShadowInsideBoxAdjust(xVec3* volume);
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, f32 radius);
s32 ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, f32 shadowFactor, f32 fadeDist);
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data);
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, type_74 renderCB);
void ShadowCameraDestroy(RwCamera* shadowCamera);
s32 Im2DRenderQuad(f32 x1, f32 y1, f32 x2, f32 y2, f32 z, f32 recipCamZ, f32 uvOffset);
void xShadow_ListAdd(xEnt* ent);
void xShadowRender(xEnt* ent, f32 max_dist);
void xShadowReceiveShadow(xEnt* ent, f32 shadowFactor, s32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowReceiveShadowFastPS2(xEnt* ent, f32 shadowFactor, s32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
u32 xShadowReceiveShadowSetup(xEnt* ent);
void modelRenderCB(void* model);
void xShadowRenderWorld(xVec3* center, f32 radius, f32 max_dist);
void xShadowCameraUpdate(void* model, type_90 renderCB, xVec3* center, f32 radius, s32 shadowMode);
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec);
void xShadowSetWorld(RpWorld* world);
s32 SetupShadow();
void xShadowInit();

// xShadow_PickEntForNPC__FP10xShadowMgr
// Start address: 0x2040a0
void xShadow_PickEntForNPC(xShadowMgr* mgr)
{
}

// xShadow_PickByRayCast__FP10xShadowMgr
// Start address: 0x204100
void xShadow_PickByRayCast(xShadowMgr* mgr)
{
	xEnt* ent_best;
	s32 idx_best;
	xCollis colrec;
	xRay3 ray;
	s32 num;
	s32 i;
	xEnt* ep;
}

// xShadowManager_Render__Fv
// Start address: 0x2042a0
void xShadowManager_Render()
{
	s32 i;
	type_135 cacheUsed;
	u32 j;
	u8 old_xClumpColl_FilterFlags;
	s32 bestIndex;
	s32 foundPriority;
	xVec3 center;
	f32 radius;
	xShadowMgr* mgr_best;
	f32 dst_depth;
	xEnt* ep;
	xEnt* ent;
	s32 shadowOutside;
	xVec3 shadVec;
	xVec3 center;
	f32 radius;
	RpAtomic* old_model;
	xModelInstance* old_mnext;
	xEnt* ep;
	xShadowMgr* mgr;
	xNPCBasic* npc_base;
	s32 num;
	s32 a;
	xEnt* ep;
	f32 rad;
	xVec3* lower;
	xVec3* upper;
}

// CmpShadowMgr__FPCvPCv
// Start address: 0x204cf0
s32 CmpShadowMgr(void* a, void* b)
{
	xEnt* entA;
	xEnt* entB;
	s32 isPlayerA;
	s32 isPlayerB;
	f32 distA;
	f32 distB;
	xVec3* campos;
	f32 dx__;
	f32 dy__;
	f32 dz__;
	f32 dx__;
	f32 dy__;
	f32 dz__;
}

// xShadowManager_Remove__FP4xEnt
// Start address: 0x204e20
void xShadowManager_Remove(xEnt* ent)
{
	s32 i;
}

// xShadowManager_Add__FP4xEnt
// Start address: 0x204ee0
void xShadowManager_Add(xEnt* ent)
{
	s32 i;
}

// xShadowManager_Reset__Fv
// Start address: 0x204f90
void xShadowManager_Reset()
{
}

// xShadowManager_Init__Fi
// Start address: 0x204fa0
void xShadowManager_Init(s32 numEnts)
{
}

// xShadowVertical_DrawCache__FP12xShadowCacheffiP11RwMatrixTagP8RwRaster
// Start address: 0x205020
void xShadowVertical_DrawCache(xShadowCache* cache, f32 shadowFactor, f32 fadeDist, s32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	f32 radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
	u32 i;
	RpCollisionTriangle tri;
}

// xShadowVertical_FillCache__FP12xShadowCacheP5xVec3fff
// Start address: 0x205430
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, f32 r, f32 depth, f32 minNormY)
{
	s32 i;
	s32 j;
	xEnv* env;
	RpIntersection isx;
	ShadowCacheContext context;
	type_4 sortRayDepth;
	f32 objMaxDepth;
	xQCData qcd;
	ShadowCBParam cbparam;
}

// shadowCacheEntityCB__FP4xEntPv
// Start address: 0x205720
s32 shadowCacheEntityCB(xEnt* ent, void* cbdata)
{
	ShadowCBParam* cbparam;
	xCollis coll;
	RwMatrixTag inverseLTM;
	RpV3dGradient grad;
}

// shadowCacheLeafCB__FiiPv
// Start address: 0x205b10
s32 shadowCacheLeafCB(s32 numTriangles, s32 triOffset, void* data)
{
	ShadowCBParam* cbparam;
	xShadowCache* cache;
	RpGeometry* geometry;
	RwV3d* vertices;
	RpTriangle* triangles;
	s32 triSlot;
	u16* triIndex;
	s32 i;
	RpTriangle* tri;
	s32 vertIndex0;
	s32 vertIndex1;
	s32 vertIndex2;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	type_87 worldV;
	f32 posX;
	f32 posZ;
	f32 nx;
	f32 nz;
	f32 nmag2;
	f32 pdot;
	xVec3* vert0;
	xVec3* vert1;
	f32 dotA;
	f32 dotB;
	xVec3* vert0;
	xVec3* vert1;
	xVec3* vert2;
	xVec3 aa;
	xVec3 bb;
	xVec3 trinorm;
	f32 depthtest;
	f32 dydx;
	f32 dydz;
	f32 depth0;
	f32 n0x;
	f32 n0z;
	f32 n0d;
	f32 n1x;
	f32 n1z;
	f32 n1d;
	f32 n2x;
	f32 n2z;
	f32 n2d;
	f32 denom;
}

// shadowCacheEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x206370
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data)
{
	ShadowCacheContext* context;
	xShadowCache* cache;
	xShadowPoly* poly;
	f32 dydx;
	f32 dydz;
	f32 depth0;
	f32 n0x;
	f32 n0z;
	f32 n0d;
	f32 n1x;
	f32 n1z;
	f32 n1d;
	f32 n2x;
	f32 n2z;
	f32 n2d;
}

// xShadowSetVolume__FP8RwCameraP5xVec3f
// Start address: 0x206770
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, f32 depth)
{
	s32 i;
	type_133 volume;
	f32 invNearFar;
	f32 lerp;
	RwMatrixTag* camMatrix;
	s32 cullstate;
	s32 ztest;
	s32 zwrite;
	s32 srcblend;
	s32 destblend;
}

// DrawAlphaBox__FP5xVec3iUc
// Start address: 0x206a50
void DrawAlphaBox(xVec3* volume, s32 frontface, u8 alpha)
{
	u32 i;
	u32 numV;
	type_26 boxV;
	RxObjSpace3DVertex* v3d;
	RwMatrixTag* mainMatrix;
	xVec3 normal;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// ShadowInsideBoxAdjust__FP5xVec3
// Start address: 0x206d90
u8 ShadowInsideBoxAdjust(xVec3* volume)
{
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	type_42 normal;
	u32 i;
	RwCamera* mainCamera;
	RwMatrixTag* mainMatrix;
	f32 nearclip;
}

// ShadowCameraSetSpherePersp__FP8RwCameraP5RwV3df
// Start address: 0x207100
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, f32 radius)
{
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	RwV3d* camPos;
	f32 objDepth;
	f32 nearZ;
	f32 farZ;
}

// ShadowRender__FP8RwCameraP8RwRasterP14RpIntersectionff
// Start address: 0x207240
s32 ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, f32 shadowFactor, f32 fadeDist)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	f32 radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
}

// ShadowRenderTriangleCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x207560
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data)
{
	_ProjectionParam* param;
	type_70 vShad;
	RxObjSpace3DVertex* imv;
	xVec3 c;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	u32* p0;
	u32* p1;
	u32* p2;
	u32 sw;
}

// ShadowCameraUpdate__FP8RwCameraPvPFPv_vP5xVec3fi
// Start address: 0x2079b0
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, type_74 renderCB)
{
	RwRGBA bgColor;
	RwCamera* camera;
	s32 fogstate;
}

// ShadowCameraDestroy__FP8RwCamera
// Start address: 0x207b20
void ShadowCameraDestroy(RwCamera* shadowCamera)
{
	RwRaster* raster;
	RwFrame* frame;
}

// Im2DRenderQuad__Ffffffff
// Start address: 0x207bb0
s32 Im2DRenderQuad(f32 x1, f32 y1, f32 x2, f32 y2, f32 z, f32 recipCamZ, f32 uvOffset)
{
	type_131 vx;
}

// xShadow_ListAdd__FP4xEnt
// Start address: 0x207c90
void xShadow_ListAdd(xEnt* ent)
{
}

// xShadowRender__FP4xEntf
// Start address: 0x207ca0
void xShadowRender(xEnt* ent, f32 max_dist)
{
	xVec3 center;
	f32 radius;
}

// xShadowReceiveShadow__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207d40
void xShadowReceiveShadow(xEnt* ent, f32 shadowFactor, s32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwMatrixTag oldroot;
}

// xShadowReceiveShadowFastPS2__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207f90
void xShadowReceiveShadowFastPS2(xEnt* ent, f32 shadowFactor, s32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwCamera* shadowCamera;
	RwMatrixTag* shadowMatrix;
	RwMatrixTag invMatrix;
	RwV4dTag at;
	f32 radius;
	RwV3d scl;
	RwV3d tr;
	f32 fadeDist;
	u32 i;
	u32 num_verts;
	xVec3* xvert;
	RpTriangle* tri;
	RpGeometry* geom;
	RwMatrixTag* mat;
	RpSkin* skin;
	u8 val;
	u32 vertex_color;
	xModelInstance* model;
	u32 max_verts;
	u32 model_num;
	u32 ent_id;
	xVec3* vert;
	RxObjSpace3DVertex* imv;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	f32 local_SHADOW_BIAS_AMT;
	f32 local_SHADOW_MINNORMY;
}

// xShadowReceiveShadowSetup__FP4xEnt
// Start address: 0x208670
u32 xShadowReceiveShadowSetup(xEnt* ent)
{
}

// modelRenderCB__FPv
// Start address: 0x2086e0
void modelRenderCB(void* model)
{
}

// xShadowRenderWorld__FP5xVec3ff
// Start address: 0x2086f0
void xShadowRenderWorld(xVec3* center, f32 radius, f32 max_dist)
{
	RpIntersection shadowZone;
	f32 fadeDistance;
	xSphere zone;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	xVec3* at;
	xVec3* up;
	xVec3* rt;
	type_98 R;
	type_102 entcoll;
	type_107 envcoll;
	type_113 sf;
	u32 hit_env;
	u32 hit_ent;
	f32 ent_dist;
	f32 env_dist;
	xVec3 ent_pos;
	xVec3 env_pos;
	s32 i;
	xQCData q;
}

// xShadowCameraUpdate__FPvPFPv_vP5xVec3fi
// Start address: 0x208d10
void xShadowCameraUpdate(void* model, type_90 renderCB, xVec3* center, f32 radius, s32 shadowMode)
{
}

// xShadowSetLight__FP5xVec3P5xVec3f
// Start address: 0x208d90
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec)
{
	xVec3 zvec;
	xMat4x3 matrix;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
}

// xShadowSetWorld__FP7RpWorld
// Start address: 0x208e20
void xShadowSetWorld(RpWorld* world)
{
}

// SetupShadow__Fv
// Start address: 0x208e50
s32 SetupShadow()
{
	s32 res;
}

// xShadowInit__Fv
// Start address: 0x208f70
void xShadowInit()
{
	RwFrame* frame;
}

