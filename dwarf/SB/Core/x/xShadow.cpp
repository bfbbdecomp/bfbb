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
typedef struct RxColorUnion;
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
typedef struct RpIntersectData;
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
typedef struct _class_0;
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
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RpSkin;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef enum RwBlendFunction;
typedef struct xEntSplineData;
typedef struct analog_data;
typedef struct _class_2;

typedef int32(*type_6)(xEnt*, void*);
typedef void(*type_9)(xModelInstance*);
typedef void(*type_11)(xEnt*);
typedef uint32(*type_16)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_17)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_21)(xEnt*);
typedef int32(*type_23)(RxNodeDefinition*);
typedef void(*type_25)(RxNodeDefinition*);
typedef int32(*type_27)(RxPipelineNode*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef void(*type_29)(RxPipelineNode*);
typedef int32(*type_30)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_32)(RxPipelineNode*, RxPipeline*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef RpCollisionTriangle*(*type_35)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_36)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_37)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef uint32(*type_39)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_45)(uint32);
typedef void(*type_47)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_49)(void*);
typedef int8*(*type_52)(xBase*);
typedef int8*(*type_54)(uint32);
typedef RpAtomic*(*type_59)(RpAtomic*);
typedef void(*type_61)(xEnt*, xScene*, float32);
typedef int32(*type_65)(void*, void*);
typedef void(*type_66)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_67)(xEnt*, xVec3*);
typedef void(*type_69)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_72)(xEnt*);
typedef uint32(*type_73)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_74)(void*);
typedef uint32(*type_77)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_81)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_90)(void*);
typedef RpWorldSector*(*type_95)(RpWorldSector*);
typedef RwCamera*(*type_96)(RwCamera*);
typedef RwCamera*(*type_99)(RwCamera*);
typedef uint32(*type_100)(void*, void*);
typedef void(*type_104)(xMemPool*, void*);
typedef void(*type_110)(void*);
typedef void(*type_111)(RwResEntry*);
typedef int32(*type_116)(int32, int32, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);

typedef xVec3 type_0[3];
typedef float32 type_1[2];
typedef uint16 type_2[3];
typedef uint32 type_3[15];
typedef float32 type_4[5];
typedef uint8 type_5[2];
typedef xAnimMultiFileEntry type_7[1];
typedef uint8 type_8[2];
typedef uint32 type_10[72];
typedef int8 type_12[16];
typedef uint32 type_13[15];
typedef RwFrustumPlane type_14[6];
typedef int8 type_15[4];
typedef xBase* type_18[72];
typedef analog_data type_20[2];
typedef RwV3d type_22[8];
typedef xShadowCache type_24[6];
typedef RxObjSpace3DVertex type_26[36];
typedef float32 type_31[5];
typedef RwTexCoords* type_33[8];
typedef xEnt* type_38[16];
typedef xVec4 type_40[12];
typedef uint8 type_41[2];
typedef xVec3 type_42[6];
typedef xShadowPoly type_43[256];
typedef uint32 type_44[2];
typedef uint8 type_46[2];
typedef float32 type_48[6];
typedef float32 type_50[4];
typedef xVec3 type_51[3];
typedef float32 type_53[3];
typedef float32 type_55[3];
typedef uint16 type_56[3];
typedef xModelTag type_57[2];
typedef float32 type_58[3];
typedef RpLight* type_60[2];
typedef RwFrame* type_62[2];
typedef uint8 type_63[3];
typedef float32 type_64[16];
typedef xEnt* type_68[111];
typedef RwV3d type_70[3];
typedef RwV2d type_71[2];
typedef xEnt* type_75[16];
typedef uint8 type_76[2];
typedef int8 type_78[128];
typedef uint32 type_79[4];
typedef int8 type_80[128][6];
typedef uint8 type_82[14];
typedef xModelTag type_83[4];
typedef int8 type_84[32];
typedef RwTexCoords* type_85[8];
typedef xVec3 type_86[4];
typedef xVec3 type_87[3];
typedef xModelInstance* type_88[14];
typedef float32 type_89[4];
typedef uint32 type_91[4096];
typedef uint32 type_92[4];
typedef uint32 type_93[4][6];
typedef uint8 type_94[4];
typedef uint32 type_97[11];
typedef xRay3 type_98[1];
typedef uint8 type_101[22];
typedef xCollis type_102[1];
typedef xEnt* type_103[5];
typedef uint8 type_105[22];
typedef xCollis type_106[18];
typedef xCollis type_107[1];
typedef int8 type_108[32];
typedef int8 type_109[32];
typedef float32 type_112[2];
typedef float32 type_113[2][3];
typedef int8* type_114[11];
typedef xVec3 type_115[5];
typedef uint8 type_117[5];
typedef float32 type_118[12];
typedef xVec3 type_119[60];
typedef RxCluster type_120[1];
typedef float32 type_121[12];
typedef float32 type_122[2];
typedef float32 type_123[12];
typedef float32 type_125[22];
typedef float32 type_126[12];
typedef uint8 type_127[3];
typedef <unknown fundamental type (0xa510)> type_128[4];
typedef RwV3d* type_129[3];
typedef float32 type_130[22];
typedef RwSky2DVertex type_131[4];
typedef float32 type_132[12];
typedef xVec3 type_133[8];
typedef float32 type_134[12];
typedef int32 type_135[6];
typedef float32 type_136[4];
typedef uint8 type_137[3];
typedef int8 type_138[16];
typedef uint32 type_139[15];

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct tagiRenderInput
{
	uint16* m_index;
	RxObjSpace3DVertex* m_vertex;
	float32* m_vertexTZ;
	uint32 m_mode;
	int32 m_vertexType;
	int32 m_vertexTypeSize;
	int32 m_indexCount;
	int32 m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
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

struct xShadowMgr
{
	xEnt* ent;
	xShadowCache* cache;
	int32 priority;
	int32 cacheReady;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xShadowCache
{
	xVec3 pos;
	float32 radius;
	uint32 entCount;
	uint32 polyCount;
	float32 polyRayDepth[5];
	uint16 castOnEnt;
	uint16 castOnPoly;
	xEnt* ent[16];
	xShadowPoly poly[256];
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct ShadowCacheContext
{
	xShadowCache* cache;
	float32 minNormY;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xNPCBasic : xEnt, xFactoryInst
{
	void(*f_setup)(xEnt*);
	void(*f_reset)(xEnt*);
	struct
	{
		int32 flg_basenpc : 16;
		int32 inUpdate : 8;
		int32 flg_upward : 8;
	};
	int32 colFreq;
	int32 colFreqReset;
	struct
	{
		uint32 flg_colCheck : 8;
		uint32 flg_penCheck : 8;
		uint32 flg_unused : 16;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
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

struct zEntHangable
{
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
		tri_data_1 tri;
	};
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
	float32 dydx;
	float32 dzdx;
	float32 dxdy;
	float32 dzdy;
	float32 dxdz;
	float32 dydz;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
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
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct rxReq
{
};

struct RwV4dTag
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct zAssetPickupTable
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct ShadowCBParam
{
	xShadowCache* cache;
	RpIntersection* isx;
	xVec3 capsuleStart;
	xVec3 capsuleEnd;
	float32 capsuleRadius;
	xEnt* ent;
	RwLine localLine;
	RwV3d localDelta;
	float32 localRadius;
	RwMatrixTag* modelMat;
	RpGeometry* geom;
	uint32 polyFound;
	xEnt* rayCloser[5];
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

struct xCoef
{
	float32 a[4];
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct xEntBoulder
{
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	float32 r;
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

struct _ProjectionParam
{
	RwV3d at;
	RwMatrixTag invMatrix;
	uint8 shadowValue;
	int32 fade;
	uint32 numIm3DBatch;
	uint32 shadowWord;
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwV2d
{
	float32 x;
	float32 y;
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
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xShadowPoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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
	float32 radius;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagiPad
{
	int32 port;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xFFX
{
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct RpSector
{
	int32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpIntersectData
{
	union
	{
		RwLine line;
		RwV3d point;
		RwSphere sphere;
		RwBBox box;
		void* object;
	};
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
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

struct RyzMemData
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	float32 distance;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
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

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
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
	uint32 index;
	float32 r;
	float32 d;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RwLinkList
{
	RwLLLink link;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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
	int32 unknown;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

int8 buffer[16];
int8 buffer[16];
RpLight* ShadowLight;
RwRGBAReal ShadowLightColor;
int8* sCacheBlendLabels[11];
uint32 sCacheBlendValues[11];
uint32 sCacheNumBlendModes;
float32 SHADOW_BF_DOT;
float32 SHADOW_BOTH;
RxObjSpace3DVertex* Im3DBuffer;
uint32 Im3DBufferPos;
float32 ShadowThreshold;
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
RwRaster* ShadowRenderRaster;
RwV2d ShadowPreviewVerts[2];
float32 ShadowStrength;
uint32 gShadowFlags;
float32 gShadowObjectRadius;
uint32 shadow_ent_count;
xEnt* shadow_ent_list[16];
int32 sShadowCollJSP;
RwMatrixTag sm_matrix;
float32 rscale;
RwV3d gCamPos;
uint32 skyOldTest;
uint32 shadvolquad_idx[4][6];
xEnt* sEntSelf;
xShadowMgr* sMgrList;
int32 sMgrCount;
int32 sMgrTotal;
xShadowCache sCacheList[6];
RxPipeline* adlSkinPipe;
RxPipeline* a4dSkinPipe;
RxPipeline* adlSkinPipeADC;
RxPipeline* a4dSkinPipeADC;
xVec3 g_NY3;
uint8 xClumpColl_FilterFlags;
void(*xModelRender)(xModelInstance*);
int32(*CmpShadowMgr)(void*, void*);
zGlobals globals;
uint32 gActiveHeap;
tagiRenderInput gRenderBuffer;
int32(*shadowCacheEntityCB)(xEnt*, void*);
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
RpCollisionTriangle*(*shadowCacheEnvCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
int32(*shadowCacheLeafCB)(int32, int32, void*);
int32 _rpCollisionGeometryDataOffset;
uint32 ourGlobals[4096];
RpCollisionTriangle*(*ShadowRenderTriangleCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
int32 iModelHack_DisablePrelight;
void(*modelRenderCB)(void*);
void(*xRayHitsEnt)(xScene*, xRay3*, xQCData*, xEnt*, void*);

void xShadow_PickEntForNPC(xShadowMgr* mgr);
void xShadow_PickByRayCast(xShadowMgr* mgr);
void xShadowManager_Render();
int32 CmpShadowMgr(void* a, void* b);
void xShadowManager_Remove(xEnt* ent);
void xShadowManager_Add(xEnt* ent);
void xShadowManager_Reset();
void xShadowManager_Init(int32 numEnts);
void xShadowVertical_DrawCache(xShadowCache* cache, float32 shadowFactor, float32 fadeDist, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float32 r, float32 depth, float32 minNormY);
int32 shadowCacheEntityCB(xEnt* ent, void* cbdata);
int32 shadowCacheLeafCB(int32 numTriangles, int32 triOffset, void* data);
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data);
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float32 depth);
void DrawAlphaBox(xVec3* volume, int32 frontface, uint8 alpha);
uint8 ShadowInsideBoxAdjust(xVec3* volume);
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float32 radius);
int32 ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, float32 shadowFactor, float32 fadeDist);
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data);
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*));
void ShadowCameraDestroy(RwCamera* shadowCamera);
int32 Im2DRenderQuad(float32 x1, float32 y1, float32 x2, float32 y2, float32 z, float32 recipCamZ, float32 uvOffset);
void xShadow_ListAdd(xEnt* ent);
void xShadowRender(xEnt* ent, float32 max_dist);
void xShadowReceiveShadow(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowReceiveShadowFastPS2(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
uint32 xShadowReceiveShadowSetup(xEnt* ent);
void modelRenderCB(void* model);
void xShadowRenderWorld(xVec3* center, float32 radius, float32 max_dist);
void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, float32 radius, int32 shadowMode);
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec);
void xShadowSetWorld(RpWorld* world);
int32 SetupShadow();
void xShadowInit();

// xShadow_PickEntForNPC__FP10xShadowMgr
// Start address: 0x2040a0
void xShadow_PickEntForNPC(xShadowMgr* mgr)
{
	// Line 5291, Address: 0x2040a0, Func Offset: 0
	// Line 5292, Address: 0x2040a8, Func Offset: 0x8
	// Line 5293, Address: 0x2040c0, Func Offset: 0x20
	// Line 5296, Address: 0x2040d0, Func Offset: 0x30
	// Line 5320, Address: 0x2040e0, Func Offset: 0x40
	// Line 5337, Address: 0x2040e8, Func Offset: 0x48
	// Func End, Address: 0x2040f4, Func Offset: 0x54
}

// xShadow_PickByRayCast__FP10xShadowMgr
// Start address: 0x204100
void xShadow_PickByRayCast(xShadowMgr* mgr)
{
	xEnt* ent_best;
	int32 idx_best;
	xCollis colrec;
	xRay3 ray;
	int32 num;
	int32 i;
	xEnt* ep;
	// Line 5234, Address: 0x204100, Func Offset: 0
	// Line 5242, Address: 0x204104, Func Offset: 0x4
	// Line 5234, Address: 0x204108, Func Offset: 0x8
	// Line 5242, Address: 0x20410c, Func Offset: 0xc
	// Line 5234, Address: 0x204110, Func Offset: 0x10
	// Line 5242, Address: 0x204128, Func Offset: 0x28
	// Line 5234, Address: 0x20412c, Func Offset: 0x2c
	// Line 5237, Address: 0x204130, Func Offset: 0x30
	// Line 5234, Address: 0x204134, Func Offset: 0x34
	// Line 5238, Address: 0x204138, Func Offset: 0x38
	// Line 5234, Address: 0x20413c, Func Offset: 0x3c
	// Line 5242, Address: 0x204140, Func Offset: 0x40
	// Line 5246, Address: 0x204148, Func Offset: 0x48
	// Line 5248, Address: 0x20414c, Func Offset: 0x4c
	// Line 5246, Address: 0x204150, Func Offset: 0x50
	// Line 5248, Address: 0x204154, Func Offset: 0x54
	// Line 5249, Address: 0x204158, Func Offset: 0x58
	// Line 5247, Address: 0x20415c, Func Offset: 0x5c
	// Line 5249, Address: 0x204160, Func Offset: 0x60
	// Line 5246, Address: 0x204164, Func Offset: 0x64
	// Line 5252, Address: 0x204180, Func Offset: 0x80
	// Line 5254, Address: 0x204188, Func Offset: 0x88
	// Line 5255, Address: 0x2041a0, Func Offset: 0xa0
	// Line 5267, Address: 0x2041a4, Func Offset: 0xa4
	// Line 5255, Address: 0x2041a8, Func Offset: 0xa8
	// Line 5260, Address: 0x2041b0, Func Offset: 0xb0
	// Line 5262, Address: 0x2041b4, Func Offset: 0xb4
	// Line 5263, Address: 0x2041c0, Func Offset: 0xc0
	// Line 5264, Address: 0x2041d0, Func Offset: 0xd0
	// Line 5265, Address: 0x2041e0, Func Offset: 0xe0
	// Line 5267, Address: 0x2041f4, Func Offset: 0xf4
	// Line 5269, Address: 0x204200, Func Offset: 0x100
	// Line 5270, Address: 0x204210, Func Offset: 0x110
	// Line 5274, Address: 0x204230, Func Offset: 0x130
	// Line 5275, Address: 0x204234, Func Offset: 0x134
	// Line 5277, Address: 0x204238, Func Offset: 0x138
	// Line 5279, Address: 0x204248, Func Offset: 0x148
	// Line 5283, Address: 0x204254, Func Offset: 0x154
	// Line 5284, Address: 0x204264, Func Offset: 0x164
	// Line 5285, Address: 0x20426c, Func Offset: 0x16c
	// Line 5288, Address: 0x204270, Func Offset: 0x170
	// Func End, Address: 0x2042a0, Func Offset: 0x1a0
}

// xShadowManager_Render__Fv
// Start address: 0x2042a0
void xShadowManager_Render()
{
	int32 i;
	int32 cacheUsed[6];
	uint32 j;
	uint8 old_xClumpColl_FilterFlags;
	int32 bestIndex;
	int32 foundPriority;
	xVec3 center;
	float32 radius;
	xShadowMgr* mgr_best;
	float32 dst_depth;
	xEnt* ep;
	xEnt* ent;
	int32 shadowOutside;
	xVec3 shadVec;
	xVec3 center;
	float32 radius;
	RpAtomic* old_model;
	xModelInstance* old_mnext;
	xEnt* ep;
	xShadowMgr* mgr;
	xNPCBasic* npc_base;
	int32 num;
	int32 a;
	xEnt* ep;
	float32 rad;
	xVec3* lower;
	xVec3* upper;
	// Line 4790, Address: 0x2042a0, Func Offset: 0
	// Line 4803, Address: 0x2042a4, Func Offset: 0x4
	// Line 4790, Address: 0x2042a8, Func Offset: 0x8
	// Line 4799, Address: 0x2042d4, Func Offset: 0x34
	// Line 4803, Address: 0x2042d8, Func Offset: 0x38
	// Line 4800, Address: 0x2042dc, Func Offset: 0x3c
	// Line 4803, Address: 0x2042e0, Func Offset: 0x40
	// Line 4804, Address: 0x2042f0, Func Offset: 0x50
	// Line 4805, Address: 0x2042f4, Func Offset: 0x54
	// Line 4804, Address: 0x2042f8, Func Offset: 0x58
	// Line 4805, Address: 0x204300, Func Offset: 0x60
	// Line 4809, Address: 0x204310, Func Offset: 0x70
	// Line 4810, Address: 0x204328, Func Offset: 0x88
	// Line 4814, Address: 0x204358, Func Offset: 0xb8
	// Line 4815, Address: 0x204384, Func Offset: 0xe4
	// Line 4817, Address: 0x20438c, Func Offset: 0xec
	// Line 4819, Address: 0x20439c, Func Offset: 0xfc
	// Line 4821, Address: 0x2043a4, Func Offset: 0x104
	// Line 4824, Address: 0x2043b0, Func Offset: 0x110
	// Line 4827, Address: 0x2043c4, Func Offset: 0x124
	// Line 4828, Address: 0x2043d4, Func Offset: 0x134
	// Line 4829, Address: 0x2043fc, Func Offset: 0x15c
	// Line 4830, Address: 0x204404, Func Offset: 0x164
	// Line 4832, Address: 0x20442c, Func Offset: 0x18c
	// Line 4830, Address: 0x204430, Func Offset: 0x190
	// Line 4832, Address: 0x204434, Func Offset: 0x194
	// Line 4833, Address: 0x204450, Func Offset: 0x1b0
	// Line 4834, Address: 0x20447c, Func Offset: 0x1dc
	// Line 4835, Address: 0x204488, Func Offset: 0x1e8
	// Line 4836, Address: 0x204490, Func Offset: 0x1f0
	// Line 4842, Address: 0x2044a0, Func Offset: 0x200
	// Line 4836, Address: 0x2044a8, Func Offset: 0x208
	// Line 4837, Address: 0x2044ac, Func Offset: 0x20c
	// Line 4838, Address: 0x2044b0, Func Offset: 0x210
	// Line 4839, Address: 0x2044bc, Func Offset: 0x21c
	// Line 4840, Address: 0x2044c8, Func Offset: 0x228
	// Line 4841, Address: 0x2044cc, Func Offset: 0x22c
	// Line 4843, Address: 0x2044d0, Func Offset: 0x230
	// Line 4845, Address: 0x2044d8, Func Offset: 0x238
	// Line 4847, Address: 0x2044ec, Func Offset: 0x24c
	// Line 4848, Address: 0x204510, Func Offset: 0x270
	// Line 4849, Address: 0x204528, Func Offset: 0x288
	// Line 4850, Address: 0x20452c, Func Offset: 0x28c
	// Line 4849, Address: 0x204530, Func Offset: 0x290
	// Line 4850, Address: 0x204538, Func Offset: 0x298
	// Line 4854, Address: 0x204548, Func Offset: 0x2a8
	// Line 4855, Address: 0x20454c, Func Offset: 0x2ac
	// Line 4856, Address: 0x204550, Func Offset: 0x2b0
	// Line 4857, Address: 0x204560, Func Offset: 0x2c0
	// Line 4858, Address: 0x204580, Func Offset: 0x2e0
	// Line 4860, Address: 0x20458c, Func Offset: 0x2ec
	// Line 4859, Address: 0x204590, Func Offset: 0x2f0
	// Line 4862, Address: 0x204594, Func Offset: 0x2f4
	// Line 4860, Address: 0x204598, Func Offset: 0x2f8
	// Line 4862, Address: 0x20459c, Func Offset: 0x2fc
	// Line 4866, Address: 0x2045c0, Func Offset: 0x320
	// Line 4870, Address: 0x2045cc, Func Offset: 0x32c
	// Line 4876, Address: 0x2045ec, Func Offset: 0x34c
	// Line 4878, Address: 0x2045f0, Func Offset: 0x350
	// Line 4880, Address: 0x2045f8, Func Offset: 0x358
	// Line 4876, Address: 0x2045fc, Func Offset: 0x35c
	// Line 4879, Address: 0x204600, Func Offset: 0x360
	// Line 4880, Address: 0x20460c, Func Offset: 0x36c
	// Line 4881, Address: 0x204618, Func Offset: 0x378
	// Line 4882, Address: 0x20461c, Func Offset: 0x37c
	// Line 4885, Address: 0x204620, Func Offset: 0x380
	// Line 4886, Address: 0x204624, Func Offset: 0x384
	// Line 4891, Address: 0x204640, Func Offset: 0x3a0
	// Line 4892, Address: 0x204644, Func Offset: 0x3a4
	// Line 4888, Address: 0x204648, Func Offset: 0x3a8
	// Line 4896, Address: 0x20464c, Func Offset: 0x3ac
	// Line 4891, Address: 0x204650, Func Offset: 0x3b0
	// Line 4892, Address: 0x204658, Func Offset: 0x3b8
	// Line 4896, Address: 0x204660, Func Offset: 0x3c0
	// Line 4918, Address: 0x204668, Func Offset: 0x3c8
	// Line 4920, Address: 0x204680, Func Offset: 0x3e0
	// Line 4926, Address: 0x204684, Func Offset: 0x3e4
	// Line 4928, Address: 0x204688, Func Offset: 0x3e8
	// Line 4926, Address: 0x20468c, Func Offset: 0x3ec
	// Line 4920, Address: 0x204690, Func Offset: 0x3f0
	// Line 4925, Address: 0x204698, Func Offset: 0x3f8
	// Line 4926, Address: 0x2046a8, Func Offset: 0x408
	// Line 4927, Address: 0x2046c0, Func Offset: 0x420
	// Line 4928, Address: 0x2046d8, Func Offset: 0x438
	// Line 4929, Address: 0x2046e8, Func Offset: 0x448
	// Line 4932, Address: 0x2046fc, Func Offset: 0x45c
	// Line 4936, Address: 0x204714, Func Offset: 0x474
	// Line 4937, Address: 0x204718, Func Offset: 0x478
	// Line 4940, Address: 0x204720, Func Offset: 0x480
	// Line 4942, Address: 0x204724, Func Offset: 0x484
	// Line 4936, Address: 0x204728, Func Offset: 0x488
	// Line 4937, Address: 0x204738, Func Offset: 0x498
	// Line 4938, Address: 0x204750, Func Offset: 0x4b0
	// Line 4939, Address: 0x204764, Func Offset: 0x4c4
	// Line 4940, Address: 0x20476c, Func Offset: 0x4cc
	// Line 4941, Address: 0x204774, Func Offset: 0x4d4
	// Line 4942, Address: 0x204780, Func Offset: 0x4e0
	// Line 4947, Address: 0x2047e8, Func Offset: 0x548
	// Line 4952, Address: 0x2047fc, Func Offset: 0x55c
	// Line 4951, Address: 0x204800, Func Offset: 0x560
	// Line 4952, Address: 0x204804, Func Offset: 0x564
	// Line 4953, Address: 0x20480c, Func Offset: 0x56c
	// Line 4955, Address: 0x204814, Func Offset: 0x574
	// Line 4956, Address: 0x204818, Func Offset: 0x578
	// Line 4957, Address: 0x20481c, Func Offset: 0x57c
	// Line 4958, Address: 0x204824, Func Offset: 0x584
	// Line 4959, Address: 0x204828, Func Offset: 0x588
	// Line 4960, Address: 0x2048b8, Func Offset: 0x618
	// Line 4959, Address: 0x2048bc, Func Offset: 0x61c
	// Line 4960, Address: 0x2048c0, Func Offset: 0x620
	// Line 4961, Address: 0x2048f8, Func Offset: 0x658
	// Line 4962, Address: 0x204988, Func Offset: 0x6e8
	// Line 4963, Address: 0x204990, Func Offset: 0x6f0
	// Line 4964, Address: 0x204998, Func Offset: 0x6f8
	// Line 4971, Address: 0x2049a0, Func Offset: 0x700
	// Line 4972, Address: 0x2049a8, Func Offset: 0x708
	// Line 4973, Address: 0x2049bc, Func Offset: 0x71c
	// Line 4977, Address: 0x2049c0, Func Offset: 0x720
	// Line 4981, Address: 0x2049e4, Func Offset: 0x744
	// Line 4982, Address: 0x204a08, Func Offset: 0x768
	// Line 4983, Address: 0x204a28, Func Offset: 0x788
	// Line 4985, Address: 0x204a3c, Func Offset: 0x79c
	// Line 4986, Address: 0x204a98, Func Offset: 0x7f8
	// Line 4987, Address: 0x204ab8, Func Offset: 0x818
	// Line 4988, Address: 0x204ad8, Func Offset: 0x838
	// Line 4997, Address: 0x204ae0, Func Offset: 0x840
	// Line 5002, Address: 0x204b0c, Func Offset: 0x86c
	// Line 5004, Address: 0x204b14, Func Offset: 0x874
	// Line 5007, Address: 0x204b18, Func Offset: 0x878
	// Line 5008, Address: 0x204b28, Func Offset: 0x888
	// Line 5009, Address: 0x204b38, Func Offset: 0x898
	// Line 5010, Address: 0x204b98, Func Offset: 0x8f8
	// Line 5012, Address: 0x204bb8, Func Offset: 0x918
	// Line 5018, Address: 0x204bc8, Func Offset: 0x928
	// Line 5019, Address: 0x204bd0, Func Offset: 0x930
	// Line 5023, Address: 0x204bdc, Func Offset: 0x93c
	// Line 5027, Address: 0x204be8, Func Offset: 0x948
	// Line 5029, Address: 0x204bfc, Func Offset: 0x95c
	// Line 5027, Address: 0x204c04, Func Offset: 0x964
	// Line 5029, Address: 0x204c0c, Func Offset: 0x96c
	// Line 5030, Address: 0x204c20, Func Offset: 0x980
	// Line 5031, Address: 0x204c28, Func Offset: 0x988
	// Line 5033, Address: 0x204c40, Func Offset: 0x9a0
	// Line 5036, Address: 0x204c48, Func Offset: 0x9a8
	// Line 5039, Address: 0x204c84, Func Offset: 0x9e4
	// Line 5041, Address: 0x204c88, Func Offset: 0x9e8
	// Line 5044, Address: 0x204c9c, Func Offset: 0x9fc
	// Line 5047, Address: 0x204cb8, Func Offset: 0xa18
	// Line 5048, Address: 0x204cbc, Func Offset: 0xa1c
	// Func End, Address: 0x204cf0, Func Offset: 0xa50
}

// CmpShadowMgr__FPCvPCv
// Start address: 0x204cf0
int32 CmpShadowMgr(void* a, void* b)
{
	xEnt* entA;
	xEnt* entB;
	int32 isPlayerA;
	int32 isPlayerB;
	float32 distA;
	float32 distB;
	xVec3* campos;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	// Line 4766, Address: 0x204cf0, Func Offset: 0
	// Line 4770, Address: 0x204cf4, Func Offset: 0x4
	// Line 4767, Address: 0x204cf8, Func Offset: 0x8
	// Line 4770, Address: 0x204cfc, Func Offset: 0xc
	// Line 4772, Address: 0x204d18, Func Offset: 0x28
	// Line 4770, Address: 0x204d1c, Func Offset: 0x2c
	// Line 4772, Address: 0x204d20, Func Offset: 0x30
	// Line 4774, Address: 0x204d40, Func Offset: 0x50
	// Line 4775, Address: 0x204d58, Func Offset: 0x68
	// Line 4779, Address: 0x204d70, Func Offset: 0x80
	// Line 4780, Address: 0x204d74, Func Offset: 0x84
	// Line 4779, Address: 0x204d78, Func Offset: 0x88
	// Line 4780, Address: 0x204d84, Func Offset: 0x94
	// Line 4779, Address: 0x204d8c, Func Offset: 0x9c
	// Line 4780, Address: 0x204d90, Func Offset: 0xa0
	// Line 4781, Address: 0x204d9c, Func Offset: 0xac
	// Line 4780, Address: 0x204da4, Func Offset: 0xb4
	// Line 4781, Address: 0x204da8, Func Offset: 0xb8
	// Line 4780, Address: 0x204dac, Func Offset: 0xbc
	// Line 4781, Address: 0x204db4, Func Offset: 0xc4
	// Line 4780, Address: 0x204dbc, Func Offset: 0xcc
	// Line 4781, Address: 0x204dcc, Func Offset: 0xdc
	// Line 4780, Address: 0x204dd4, Func Offset: 0xe4
	// Line 4781, Address: 0x204dd8, Func Offset: 0xe8
	// Line 4782, Address: 0x204de4, Func Offset: 0xf4
	// Line 4783, Address: 0x204df8, Func Offset: 0x108
	// Line 4785, Address: 0x204e10, Func Offset: 0x120
	// Func End, Address: 0x204e18, Func Offset: 0x128
}

// xShadowManager_Remove__FP4xEnt
// Start address: 0x204e20
void xShadowManager_Remove(xEnt* ent)
{
	int32 i;
	// Line 4745, Address: 0x204e20, Func Offset: 0
	// Line 4746, Address: 0x204e38, Func Offset: 0x18
	// Line 4747, Address: 0x204e3c, Func Offset: 0x1c
	// Line 4746, Address: 0x204e40, Func Offset: 0x20
	// Line 4747, Address: 0x204e48, Func Offset: 0x28
	// Line 4750, Address: 0x204e58, Func Offset: 0x38
	// Line 4751, Address: 0x204e70, Func Offset: 0x50
	// Line 4754, Address: 0x204e7c, Func Offset: 0x5c
	// Line 4755, Address: 0x204ea4, Func Offset: 0x84
	// Line 4757, Address: 0x204eac, Func Offset: 0x8c
	// Line 4759, Address: 0x204ebc, Func Offset: 0x9c
	// Line 4761, Address: 0x204ec4, Func Offset: 0xa4
	// Line 4762, Address: 0x204ed0, Func Offset: 0xb0
	// Func End, Address: 0x204ed8, Func Offset: 0xb8
}

// xShadowManager_Add__FP4xEnt
// Start address: 0x204ee0
void xShadowManager_Add(xEnt* ent)
{
	int32 i;
	// Line 4724, Address: 0x204ee0, Func Offset: 0
	// Line 4725, Address: 0x204ef8, Func Offset: 0x18
	// Line 4728, Address: 0x204f04, Func Offset: 0x24
	// Line 4730, Address: 0x204f18, Func Offset: 0x38
	// Line 4733, Address: 0x204f28, Func Offset: 0x48
	// Line 4735, Address: 0x204f30, Func Offset: 0x50
	// Line 4733, Address: 0x204f34, Func Offset: 0x54
	// Line 4734, Address: 0x204f3c, Func Offset: 0x5c
	// Line 4735, Address: 0x204f50, Func Offset: 0x70
	// Line 4736, Address: 0x204f64, Func Offset: 0x84
	// Line 4737, Address: 0x204f78, Func Offset: 0x98
	// Line 4738, Address: 0x204f84, Func Offset: 0xa4
	// Func End, Address: 0x204f90, Func Offset: 0xb0
}

// xShadowManager_Reset__Fv
// Start address: 0x204f90
void xShadowManager_Reset()
{
	// Line 4714, Address: 0x204f90, Func Offset: 0
	// Func End, Address: 0x204f98, Func Offset: 0x8
}

// xShadowManager_Init__Fi
// Start address: 0x204fa0
void xShadowManager_Init(int32 numEnts)
{
	// Line 4699, Address: 0x204fa0, Func Offset: 0
	// Line 4700, Address: 0x204fa4, Func Offset: 0x4
	// Line 4699, Address: 0x204fa8, Func Offset: 0x8
	// Line 4700, Address: 0x204fb4, Func Offset: 0x14
	// Line 4704, Address: 0x204fc0, Func Offset: 0x20
	// Line 4700, Address: 0x204fc4, Func Offset: 0x24
	// Line 4704, Address: 0x204fc8, Func Offset: 0x28
	// Line 4701, Address: 0x204fcc, Func Offset: 0x2c
	// Line 4704, Address: 0x204fd0, Func Offset: 0x30
	// Line 4705, Address: 0x204fdc, Func Offset: 0x3c
	// Line 4706, Address: 0x204fec, Func Offset: 0x4c
	// Line 4707, Address: 0x204ffc, Func Offset: 0x5c
	// Line 4709, Address: 0x20500c, Func Offset: 0x6c
	// Func End, Address: 0x20501c, Func Offset: 0x7c
}

// xShadowVertical_DrawCache__FP12xShadowCacheffiP11RwMatrixTagP8RwRaster
// Start address: 0x205020
void xShadowVertical_DrawCache(xShadowCache* cache, float32 shadowFactor, float32 fadeDist, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
	uint32 i;
	RpCollisionTriangle tri;
	// Line 4399, Address: 0x205020, Func Offset: 0
	// Line 4437, Address: 0x205050, Func Offset: 0x30
	// Line 4438, Address: 0x205058, Func Offset: 0x38
	// Line 4440, Address: 0x205064, Func Offset: 0x44
	// Line 4441, Address: 0x205070, Func Offset: 0x50
	// Line 4444, Address: 0x205080, Func Offset: 0x60
	// Line 4446, Address: 0x20508c, Func Offset: 0x6c
	// Line 4453, Address: 0x205098, Func Offset: 0x78
	// Line 4455, Address: 0x2050b0, Func Offset: 0x90
	// Line 4457, Address: 0x2050bc, Func Offset: 0x9c
	// Line 4459, Address: 0x2050c4, Func Offset: 0xa4
	// Line 4460, Address: 0x2050c8, Func Offset: 0xa8
	// Line 4462, Address: 0x2050d4, Func Offset: 0xb4
	// Line 4464, Address: 0x2050d8, Func Offset: 0xb8
	// Line 4470, Address: 0x2050ec, Func Offset: 0xcc
	// Line 4473, Address: 0x205108, Func Offset: 0xe8
	// Line 4474, Address: 0x205114, Func Offset: 0xf4
	// Line 4475, Address: 0x205120, Func Offset: 0x100
	// Line 4481, Address: 0x205128, Func Offset: 0x108
	// Line 4488, Address: 0x205134, Func Offset: 0x114
	// Line 4491, Address: 0x205140, Func Offset: 0x120
	// Line 4494, Address: 0x205158, Func Offset: 0x138
	// Line 4495, Address: 0x205164, Func Offset: 0x144
	// Line 4498, Address: 0x20516c, Func Offset: 0x14c
	// Line 4501, Address: 0x205170, Func Offset: 0x150
	// Line 4508, Address: 0x20517c, Func Offset: 0x15c
	// Line 4516, Address: 0x205180, Func Offset: 0x160
	// Line 4518, Address: 0x205188, Func Offset: 0x168
	// Line 4519, Address: 0x205190, Func Offset: 0x170
	// Line 4520, Address: 0x20519c, Func Offset: 0x17c
	// Line 4524, Address: 0x2051a0, Func Offset: 0x180
	// Line 4521, Address: 0x2051a4, Func Offset: 0x184
	// Line 4524, Address: 0x2051a8, Func Offset: 0x188
	// Line 4522, Address: 0x2051ac, Func Offset: 0x18c
	// Line 4521, Address: 0x2051b0, Func Offset: 0x190
	// Line 4524, Address: 0x2051c0, Func Offset: 0x1a0
	// Line 4526, Address: 0x2051c8, Func Offset: 0x1a8
	// Line 4527, Address: 0x2051cc, Func Offset: 0x1ac
	// Line 4526, Address: 0x2051d0, Func Offset: 0x1b0
	// Line 4528, Address: 0x2051d4, Func Offset: 0x1b4
	// Line 4527, Address: 0x2051d8, Func Offset: 0x1b8
	// Line 4528, Address: 0x2051dc, Func Offset: 0x1bc
	// Line 4526, Address: 0x2051e0, Func Offset: 0x1c0
	// Line 4528, Address: 0x2051e4, Func Offset: 0x1c4
	// Line 4527, Address: 0x2051e8, Func Offset: 0x1c8
	// Line 4526, Address: 0x2051f0, Func Offset: 0x1d0
	// Line 4527, Address: 0x2051f8, Func Offset: 0x1d8
	// Line 4528, Address: 0x205200, Func Offset: 0x1e0
	// Line 4540, Address: 0x205208, Func Offset: 0x1e8
	// Line 4541, Address: 0x205230, Func Offset: 0x210
	// Line 4540, Address: 0x205238, Func Offset: 0x218
	// Line 4541, Address: 0x20523c, Func Offset: 0x21c
	// Line 4549, Address: 0x205284, Func Offset: 0x264
	// Line 4542, Address: 0x205288, Func Offset: 0x268
	// Line 4558, Address: 0x20528c, Func Offset: 0x26c
	// Line 4549, Address: 0x205290, Func Offset: 0x270
	// Line 4558, Address: 0x205294, Func Offset: 0x274
	// Line 4547, Address: 0x205298, Func Offset: 0x278
	// Line 4558, Address: 0x20529c, Func Offset: 0x27c
	// Line 4550, Address: 0x2052a0, Func Offset: 0x280
	// Line 4558, Address: 0x2052a4, Func Offset: 0x284
	// Line 4542, Address: 0x2052a8, Func Offset: 0x288
	// Line 4549, Address: 0x2052b0, Func Offset: 0x290
	// Line 4542, Address: 0x2052b4, Func Offset: 0x294
	// Line 4557, Address: 0x2052c8, Func Offset: 0x2a8
	// Line 4558, Address: 0x2052f4, Func Offset: 0x2d4
	// Line 4560, Address: 0x2052fc, Func Offset: 0x2dc
	// Line 4566, Address: 0x205300, Func Offset: 0x2e0
	// Line 4560, Address: 0x205304, Func Offset: 0x2e4
	// Line 4566, Address: 0x205308, Func Offset: 0x2e8
	// Line 4560, Address: 0x20530c, Func Offset: 0x2ec
	// Line 4566, Address: 0x205310, Func Offset: 0x2f0
	// Line 4596, Address: 0x20531c, Func Offset: 0x2fc
	// Line 4603, Address: 0x205330, Func Offset: 0x310
	// Line 4607, Address: 0x205338, Func Offset: 0x318
	// Line 4612, Address: 0x205340, Func Offset: 0x320
	// Line 4607, Address: 0x205344, Func Offset: 0x324
	// Line 4612, Address: 0x205348, Func Offset: 0x328
	// Line 4607, Address: 0x20534c, Func Offset: 0x32c
	// Line 4612, Address: 0x205350, Func Offset: 0x330
	// Line 4607, Address: 0x205354, Func Offset: 0x334
	// Line 4608, Address: 0x205358, Func Offset: 0x338
	// Line 4609, Address: 0x20535c, Func Offset: 0x33c
	// Line 4610, Address: 0x205360, Func Offset: 0x340
	// Line 4612, Address: 0x205364, Func Offset: 0x344
	// Line 4607, Address: 0x20536c, Func Offset: 0x34c
	// Line 4608, Address: 0x205380, Func Offset: 0x360
	// Line 4609, Address: 0x205384, Func Offset: 0x364
	// Line 4612, Address: 0x205388, Func Offset: 0x368
	// Line 4613, Address: 0x205390, Func Offset: 0x370
	// Line 4618, Address: 0x2053a8, Func Offset: 0x388
	// Line 4620, Address: 0x2053b4, Func Offset: 0x394
	// Line 4623, Address: 0x2053cc, Func Offset: 0x3ac
	// Line 4624, Address: 0x2053d4, Func Offset: 0x3b4
	// Line 4625, Address: 0x2053dc, Func Offset: 0x3bc
	// Line 4627, Address: 0x2053e0, Func Offset: 0x3c0
	// Line 4628, Address: 0x2053e4, Func Offset: 0x3c4
	// Line 4637, Address: 0x2053e8, Func Offset: 0x3c8
	// Line 4638, Address: 0x2053f4, Func Offset: 0x3d4
	// Line 4644, Address: 0x205400, Func Offset: 0x3e0
	// Func End, Address: 0x205424, Func Offset: 0x404
}

// xShadowVertical_FillCache__FP12xShadowCacheP5xVec3fff
// Start address: 0x205430
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float32 r, float32 depth, float32 minNormY)
{
	int32 i;
	int32 j;
	xEnv* env;
	RpIntersection isx;
	ShadowCacheContext context;
	float32 sortRayDepth[5];
	float32 objMaxDepth;
	xQCData qcd;
	ShadowCBParam cbparam;
	// Line 4281, Address: 0x205430, Func Offset: 0
	// Line 4289, Address: 0x205434, Func Offset: 0x4
	// Line 4281, Address: 0x205438, Func Offset: 0x8
	// Line 4289, Address: 0x20543c, Func Offset: 0xc
	// Line 4281, Address: 0x205440, Func Offset: 0x10
	// Line 4294, Address: 0x205444, Func Offset: 0x14
	// Line 4281, Address: 0x205448, Func Offset: 0x18
	// Line 4296, Address: 0x205454, Func Offset: 0x24
	// Line 4281, Address: 0x205458, Func Offset: 0x28
	// Line 4300, Address: 0x20545c, Func Offset: 0x2c
	// Line 4281, Address: 0x205460, Func Offset: 0x30
	// Line 4284, Address: 0x205468, Func Offset: 0x38
	// Line 4285, Address: 0x205484, Func Offset: 0x54
	// Line 4286, Address: 0x205488, Func Offset: 0x58
	// Line 4287, Address: 0x20548c, Func Offset: 0x5c
	// Line 4289, Address: 0x205490, Func Offset: 0x60
	// Line 4294, Address: 0x2054a4, Func Offset: 0x74
	// Line 4296, Address: 0x2054ac, Func Offset: 0x7c
	// Line 4297, Address: 0x2054b0, Func Offset: 0x80
	// Line 4298, Address: 0x2054bc, Func Offset: 0x8c
	// Line 4299, Address: 0x2054c8, Func Offset: 0x98
	// Line 4300, Address: 0x2054d4, Func Offset: 0xa4
	// Line 4301, Address: 0x2054e0, Func Offset: 0xb0
	// Line 4302, Address: 0x2054f0, Func Offset: 0xc0
	// Line 4313, Address: 0x2054f8, Func Offset: 0xc8
	// Line 4314, Address: 0x2054fc, Func Offset: 0xcc
	// Line 4302, Address: 0x205500, Func Offset: 0xd0
	// Line 4314, Address: 0x205504, Func Offset: 0xd4
	// Line 4315, Address: 0x205508, Func Offset: 0xd8
	// Line 4316, Address: 0x205514, Func Offset: 0xe4
	// Line 4317, Address: 0x205518, Func Offset: 0xe8
	// Line 4316, Address: 0x20551c, Func Offset: 0xec
	// Line 4317, Address: 0x205520, Func Offset: 0xf0
	// Line 4319, Address: 0x20553c, Func Offset: 0x10c
	// Line 4320, Address: 0x205548, Func Offset: 0x118
	// Line 4341, Address: 0x205560, Func Offset: 0x130
	// Line 4342, Address: 0x205570, Func Offset: 0x140
	// Line 4343, Address: 0x205578, Func Offset: 0x148
	// Line 4344, Address: 0x205588, Func Offset: 0x158
	// Line 4347, Address: 0x205594, Func Offset: 0x164
	// Line 4348, Address: 0x205598, Func Offset: 0x168
	// Line 4350, Address: 0x20559c, Func Offset: 0x16c
	// Line 4351, Address: 0x2055c0, Func Offset: 0x190
	// Line 4352, Address: 0x2055c4, Func Offset: 0x194
	// Line 4353, Address: 0x2055e0, Func Offset: 0x1b0
	// Line 4355, Address: 0x205600, Func Offset: 0x1d0
	// Line 4356, Address: 0x20560c, Func Offset: 0x1dc
	// Line 4361, Address: 0x205610, Func Offset: 0x1e0
	// Line 4362, Address: 0x20562c, Func Offset: 0x1fc
	// Line 4369, Address: 0x205630, Func Offset: 0x200
	// Line 4368, Address: 0x205634, Func Offset: 0x204
	// Line 4381, Address: 0x205638, Func Offset: 0x208
	// Line 4369, Address: 0x20563c, Func Offset: 0x20c
	// Line 4381, Address: 0x205640, Func Offset: 0x210
	// Line 4370, Address: 0x205644, Func Offset: 0x214
	// Line 4381, Address: 0x205648, Func Offset: 0x218
	// Line 4370, Address: 0x20564c, Func Offset: 0x21c
	// Line 4371, Address: 0x205650, Func Offset: 0x220
	// Line 4372, Address: 0x205658, Func Offset: 0x228
	// Line 4373, Address: 0x205660, Func Offset: 0x230
	// Line 4374, Address: 0x205668, Func Offset: 0x238
	// Line 4375, Address: 0x20566c, Func Offset: 0x23c
	// Line 4381, Address: 0x205674, Func Offset: 0x244
	// Line 4382, Address: 0x20567c, Func Offset: 0x24c
	// Line 4383, Address: 0x20569c, Func Offset: 0x26c
	// Line 4384, Address: 0x2056bc, Func Offset: 0x28c
	// Line 4389, Address: 0x2056dc, Func Offset: 0x2ac
	// Line 4390, Address: 0x2056e8, Func Offset: 0x2b8
	// Line 4393, Address: 0x2056f4, Func Offset: 0x2c4
	// Func End, Address: 0x205714, Func Offset: 0x2e4
}

// shadowCacheEntityCB__FP4xEntPv
// Start address: 0x205720
int32 shadowCacheEntityCB(xEnt* ent, void* cbdata)
{
	ShadowCBParam* cbparam;
	xCollis coll;
	RwMatrixTag inverseLTM;
	RpV3dGradient grad;
	// Line 4137, Address: 0x205720, Func Offset: 0
	// Line 4139, Address: 0x20573c, Func Offset: 0x1c
	// Line 4140, Address: 0x20574c, Func Offset: 0x2c
	// Line 4151, Address: 0x205758, Func Offset: 0x38
	// Line 4152, Address: 0x20576c, Func Offset: 0x4c
	// Line 4153, Address: 0x205774, Func Offset: 0x54
	// Line 4156, Address: 0x205778, Func Offset: 0x58
	// Line 4157, Address: 0x205784, Func Offset: 0x64
	// Line 4177, Address: 0x205790, Func Offset: 0x70
	// Line 4178, Address: 0x205798, Func Offset: 0x78
	// Line 4179, Address: 0x2057a4, Func Offset: 0x84
	// Line 4180, Address: 0x2057b4, Func Offset: 0x94
	// Line 4181, Address: 0x2057cc, Func Offset: 0xac
	// Line 4183, Address: 0x2057e0, Func Offset: 0xc0
	// Line 4186, Address: 0x2057f8, Func Offset: 0xd8
	// Line 4192, Address: 0x205870, Func Offset: 0x150
	// Line 4194, Address: 0x20587c, Func Offset: 0x15c
	// Line 4195, Address: 0x205880, Func Offset: 0x160
	// Line 4202, Address: 0x205894, Func Offset: 0x174
	// Line 4204, Address: 0x2058b8, Func Offset: 0x198
	// Line 4205, Address: 0x2058c4, Func Offset: 0x1a4
	// Line 4212, Address: 0x2058f4, Func Offset: 0x1d4
	// Line 4213, Address: 0x205900, Func Offset: 0x1e0
	// Line 4214, Address: 0x205914, Func Offset: 0x1f4
	// Line 4223, Address: 0x205918, Func Offset: 0x1f8
	// Line 4214, Address: 0x20591c, Func Offset: 0x1fc
	// Line 4223, Address: 0x205920, Func Offset: 0x200
	// Line 4214, Address: 0x205928, Func Offset: 0x208
	// Line 4216, Address: 0x20595c, Func Offset: 0x23c
	// Line 4215, Address: 0x205960, Func Offset: 0x240
	// Line 4216, Address: 0x205974, Func Offset: 0x254
	// Line 4219, Address: 0x20597c, Func Offset: 0x25c
	// Line 4220, Address: 0x205988, Func Offset: 0x268
	// Line 4221, Address: 0x205990, Func Offset: 0x270
	// Line 4223, Address: 0x205994, Func Offset: 0x274
	// Line 4238, Address: 0x2059a0, Func Offset: 0x280
	// Line 4239, Address: 0x205a60, Func Offset: 0x340
	// Line 4238, Address: 0x205a70, Func Offset: 0x350
	// Line 4239, Address: 0x205a84, Func Offset: 0x364
	// Line 4248, Address: 0x205a94, Func Offset: 0x374
	// Line 4249, Address: 0x205aa0, Func Offset: 0x380
	// Line 4260, Address: 0x205ab8, Func Offset: 0x398
	// Line 4263, Address: 0x205ac0, Func Offset: 0x3a0
	// Line 4273, Address: 0x205adc, Func Offset: 0x3bc
	// Line 4275, Address: 0x205ae0, Func Offset: 0x3c0
	// Line 4276, Address: 0x205ae8, Func Offset: 0x3c8
	// Func End, Address: 0x205b04, Func Offset: 0x3e4
}

// shadowCacheLeafCB__FiiPv
// Start address: 0x205b10
int32 shadowCacheLeafCB(int32 numTriangles, int32 triOffset, void* data)
{
	ShadowCBParam* cbparam;
	xShadowCache* cache;
	RpGeometry* geometry;
	RwV3d* vertices;
	RpTriangle* triangles;
	int32 triSlot;
	uint16* triIndex;
	int32 i;
	RpTriangle* tri;
	int32 vertIndex0;
	int32 vertIndex1;
	int32 vertIndex2;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	xVec3 worldV[3];
	float32 posX;
	float32 posZ;
	float32 nx;
	float32 nz;
	float32 nmag2;
	float32 pdot;
	xVec3* vert0;
	xVec3* vert1;
	float32 dotA;
	float32 dotB;
	xVec3* vert0;
	xVec3* vert1;
	xVec3* vert2;
	xVec3 aa;
	xVec3 bb;
	xVec3 trinorm;
	float32 depthtest;
	float32 dydx;
	float32 dydz;
	float32 depth0;
	float32 n0x;
	float32 n0z;
	float32 n0d;
	float32 n1x;
	float32 n1z;
	float32 n1d;
	float32 n2x;
	float32 n2z;
	float32 n2d;
	float32 denom;
	// Line 3954, Address: 0x205b10, Func Offset: 0
	// Line 3958, Address: 0x205b34, Func Offset: 0x24
	// Line 3966, Address: 0x205b38, Func Offset: 0x28
	// Line 3957, Address: 0x205b3c, Func Offset: 0x2c
	// Line 3959, Address: 0x205b40, Func Offset: 0x30
	// Line 3960, Address: 0x205b44, Func Offset: 0x34
	// Line 3966, Address: 0x205b48, Func Offset: 0x38
	// Line 3959, Address: 0x205b4c, Func Offset: 0x3c
	// Line 3966, Address: 0x205b50, Func Offset: 0x40
	// Line 3969, Address: 0x205b70, Func Offset: 0x60
	// Line 3982, Address: 0x205b78, Func Offset: 0x68
	// Line 3997, Address: 0x205b7c, Func Offset: 0x6c
	// Line 4013, Address: 0x205b80, Func Offset: 0x70
	// Line 3985, Address: 0x205b8c, Func Offset: 0x7c
	// Line 3986, Address: 0x205b94, Func Offset: 0x84
	// Line 3997, Address: 0x205b98, Func Offset: 0x88
	// Line 3987, Address: 0x205b9c, Func Offset: 0x8c
	// Line 3997, Address: 0x205ba0, Func Offset: 0x90
	// Line 3988, Address: 0x205ba4, Func Offset: 0x94
	// Line 3997, Address: 0x205ba8, Func Offset: 0x98
	// Line 3989, Address: 0x205bc0, Func Offset: 0xb0
	// Line 3990, Address: 0x205bc8, Func Offset: 0xb8
	// Line 3989, Address: 0x205bcc, Func Offset: 0xbc
	// Line 3990, Address: 0x205bd0, Func Offset: 0xc0
	// Line 3989, Address: 0x205bd4, Func Offset: 0xc4
	// Line 3990, Address: 0x205bd8, Func Offset: 0xc8
	// Line 3997, Address: 0x205bdc, Func Offset: 0xcc
	// Line 3990, Address: 0x205be0, Func Offset: 0xd0
	// Line 3997, Address: 0x205be4, Func Offset: 0xd4
	// Line 3991, Address: 0x205be8, Func Offset: 0xd8
	// Line 3997, Address: 0x205bf4, Func Offset: 0xe4
	// Line 3991, Address: 0x205bf8, Func Offset: 0xe8
	// Line 3997, Address: 0x205bfc, Func Offset: 0xec
	// Line 3998, Address: 0x205c6c, Func Offset: 0x15c
	// Line 3999, Address: 0x205d0c, Func Offset: 0x1fc
	// Line 4011, Address: 0x205dac, Func Offset: 0x29c
	// Line 4013, Address: 0x205db4, Func Offset: 0x2a4
	// Line 4015, Address: 0x205dc0, Func Offset: 0x2b0
	// Line 4016, Address: 0x205dd0, Func Offset: 0x2c0
	// Line 4017, Address: 0x205df0, Func Offset: 0x2e0
	// Line 4016, Address: 0x205df4, Func Offset: 0x2e4
	// Line 4017, Address: 0x205e00, Func Offset: 0x2f0
	// Line 4018, Address: 0x205e04, Func Offset: 0x2f4
	// Line 4021, Address: 0x205e0c, Func Offset: 0x2fc
	// Line 4017, Address: 0x205e10, Func Offset: 0x300
	// Line 4018, Address: 0x205e14, Func Offset: 0x304
	// Line 4021, Address: 0x205e18, Func Offset: 0x308
	// Line 4019, Address: 0x205e1c, Func Offset: 0x30c
	// Line 4021, Address: 0x205e24, Func Offset: 0x314
	// Line 4023, Address: 0x205e2c, Func Offset: 0x31c
	// Line 4028, Address: 0x205e54, Func Offset: 0x344
	// Line 4031, Address: 0x205e6c, Func Offset: 0x35c
	// Line 4034, Address: 0x205e80, Func Offset: 0x370
	// Line 4035, Address: 0x205e88, Func Offset: 0x378
	// Line 4034, Address: 0x205e90, Func Offset: 0x380
	// Line 4036, Address: 0x205e9c, Func Offset: 0x38c
	// Line 4037, Address: 0x205ea0, Func Offset: 0x390
	// Line 4035, Address: 0x205eac, Func Offset: 0x39c
	// Line 4036, Address: 0x205eb0, Func Offset: 0x3a0
	// Line 4037, Address: 0x205eb4, Func Offset: 0x3a4
	// Line 4035, Address: 0x205eb8, Func Offset: 0x3a8
	// Line 4037, Address: 0x205ecc, Func Offset: 0x3bc
	// Line 4036, Address: 0x205ed4, Func Offset: 0x3c4
	// Line 4037, Address: 0x205ed8, Func Offset: 0x3c8
	// Line 4036, Address: 0x205edc, Func Offset: 0x3cc
	// Line 4037, Address: 0x205eec, Func Offset: 0x3dc
	// Line 4036, Address: 0x205ef0, Func Offset: 0x3e0
	// Line 4037, Address: 0x205ef4, Func Offset: 0x3e4
	// Line 4039, Address: 0x205efc, Func Offset: 0x3ec
	// Line 4038, Address: 0x205f00, Func Offset: 0x3f0
	// Line 4039, Address: 0x205f14, Func Offset: 0x404
	// Line 4045, Address: 0x205f44, Func Offset: 0x434
	// Line 4048, Address: 0x205f5c, Func Offset: 0x44c
	// Line 4055, Address: 0x205f60, Func Offset: 0x450
	// Line 4048, Address: 0x205f68, Func Offset: 0x458
	// Line 4052, Address: 0x205f70, Func Offset: 0x460
	// Line 4054, Address: 0x205f88, Func Offset: 0x478
	// Line 4052, Address: 0x205f8c, Func Offset: 0x47c
	// Line 4054, Address: 0x205f9c, Func Offset: 0x48c
	// Line 4052, Address: 0x205fa0, Func Offset: 0x490
	// Line 4053, Address: 0x205fa8, Func Offset: 0x498
	// Line 4054, Address: 0x205fb0, Func Offset: 0x4a0
	// Line 4053, Address: 0x205fb4, Func Offset: 0x4a4
	// Line 4054, Address: 0x205fc4, Func Offset: 0x4b4
	// Line 4053, Address: 0x205fc8, Func Offset: 0x4b8
	// Line 4054, Address: 0x205fd8, Func Offset: 0x4c8
	// Line 4053, Address: 0x205fdc, Func Offset: 0x4cc
	// Line 4054, Address: 0x205fe0, Func Offset: 0x4d0
	// Line 4053, Address: 0x205fe4, Func Offset: 0x4d4
	// Line 4054, Address: 0x205fe8, Func Offset: 0x4d8
	// Line 4055, Address: 0x206008, Func Offset: 0x4f8
	// Line 4059, Address: 0x206010, Func Offset: 0x500
	// Line 4077, Address: 0x206038, Func Offset: 0x528
	// Line 4060, Address: 0x20603c, Func Offset: 0x52c
	// Line 4077, Address: 0x206040, Func Offset: 0x530
	// Line 4061, Address: 0x206044, Func Offset: 0x534
	// Line 4062, Address: 0x206048, Func Offset: 0x538
	// Line 4065, Address: 0x206050, Func Offset: 0x540
	// Line 4062, Address: 0x206054, Func Offset: 0x544
	// Line 4060, Address: 0x206058, Func Offset: 0x548
	// Line 4061, Address: 0x20605c, Func Offset: 0x54c
	// Line 4060, Address: 0x206060, Func Offset: 0x550
	// Line 4062, Address: 0x206064, Func Offset: 0x554
	// Line 4061, Address: 0x206068, Func Offset: 0x558
	// Line 4062, Address: 0x20606c, Func Offset: 0x55c
	// Line 4064, Address: 0x206070, Func Offset: 0x560
	// Line 4062, Address: 0x206074, Func Offset: 0x564
	// Line 4068, Address: 0x206078, Func Offset: 0x568
	// Line 4062, Address: 0x20607c, Func Offset: 0x56c
	// Line 4069, Address: 0x206080, Func Offset: 0x570
	// Line 4062, Address: 0x206084, Func Offset: 0x574
	// Line 4064, Address: 0x206090, Func Offset: 0x580
	// Line 4072, Address: 0x206094, Func Offset: 0x584
	// Line 4068, Address: 0x206098, Func Offset: 0x588
	// Line 4065, Address: 0x20609c, Func Offset: 0x58c
	// Line 4066, Address: 0x2060a0, Func Offset: 0x590
	// Line 4069, Address: 0x2060a8, Func Offset: 0x598
	// Line 4073, Address: 0x2060ac, Func Offset: 0x59c
	// Line 4070, Address: 0x2060b0, Func Offset: 0x5a0
	// Line 4077, Address: 0x2060b4, Func Offset: 0x5a4
	// Line 4070, Address: 0x2060b8, Func Offset: 0x5a8
	// Line 4074, Address: 0x2060c0, Func Offset: 0x5b0
	// Line 4070, Address: 0x2060c4, Func Offset: 0x5b4
	// Line 4074, Address: 0x2060c8, Func Offset: 0x5b8
	// Line 4077, Address: 0x2060d0, Func Offset: 0x5c0
	// Line 4081, Address: 0x2060f4, Func Offset: 0x5e4
	// Line 4082, Address: 0x206104, Func Offset: 0x5f4
	// Line 4083, Address: 0x20610c, Func Offset: 0x5fc
	// Line 4086, Address: 0x206110, Func Offset: 0x600
	// Line 4090, Address: 0x206170, Func Offset: 0x660
	// Line 4091, Address: 0x206178, Func Offset: 0x668
	// Line 4090, Address: 0x20617c, Func Offset: 0x66c
	// Line 4091, Address: 0x206180, Func Offset: 0x670
	// Line 4092, Address: 0x20618c, Func Offset: 0x67c
	// Line 4093, Address: 0x206194, Func Offset: 0x684
	// Line 4096, Address: 0x206198, Func Offset: 0x688
	// Line 4100, Address: 0x2061fc, Func Offset: 0x6ec
	// Line 4101, Address: 0x206200, Func Offset: 0x6f0
	// Line 4100, Address: 0x206204, Func Offset: 0x6f4
	// Line 4101, Address: 0x206208, Func Offset: 0x6f8
	// Line 4102, Address: 0x206214, Func Offset: 0x704
	// Line 4103, Address: 0x20621c, Func Offset: 0x70c
	// Line 4106, Address: 0x206220, Func Offset: 0x710
	// Line 4110, Address: 0x206280, Func Offset: 0x770
	// Line 4111, Address: 0x206288, Func Offset: 0x778
	// Line 4110, Address: 0x20628c, Func Offset: 0x77c
	// Line 4111, Address: 0x206290, Func Offset: 0x780
	// Line 4112, Address: 0x20629c, Func Offset: 0x78c
	// Line 4113, Address: 0x2062a4, Func Offset: 0x794
	// Line 4116, Address: 0x2062a8, Func Offset: 0x798
	// Line 4120, Address: 0x206308, Func Offset: 0x7f8
	// Line 4121, Address: 0x206310, Func Offset: 0x800
	// Line 4120, Address: 0x206314, Func Offset: 0x804
	// Line 4121, Address: 0x206318, Func Offset: 0x808
	// Line 4122, Address: 0x206324, Func Offset: 0x814
	// Line 4123, Address: 0x20632c, Func Offset: 0x81c
	// Line 4128, Address: 0x206330, Func Offset: 0x820
	// Line 4132, Address: 0x20633c, Func Offset: 0x82c
	// Line 4131, Address: 0x206340, Func Offset: 0x830
	// Line 4132, Address: 0x206344, Func Offset: 0x834
	// Func End, Address: 0x206364, Func Offset: 0x854
}

// shadowCacheEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x206370
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data)
{
	ShadowCacheContext* context;
	xShadowCache* cache;
	xShadowPoly* poly;
	float32 dydx;
	float32 dydz;
	float32 depth0;
	float32 n0x;
	float32 n0z;
	float32 n0d;
	float32 n1x;
	float32 n1z;
	float32 n1d;
	float32 n2x;
	float32 n2z;
	float32 n2d;
	// Line 3851, Address: 0x206370, Func Offset: 0
	// Line 3855, Address: 0x206378, Func Offset: 0x8
	// Line 3863, Address: 0x206384, Func Offset: 0x14
	// Line 3865, Address: 0x20638c, Func Offset: 0x1c
	// Line 3868, Address: 0x206390, Func Offset: 0x20
	// Line 3869, Address: 0x2063a4, Func Offset: 0x34
	// Line 3870, Address: 0x2063ac, Func Offset: 0x3c
	// Line 3873, Address: 0x2063b0, Func Offset: 0x40
	// Line 3874, Address: 0x2063d0, Func Offset: 0x60
	// Line 3878, Address: 0x2063d8, Func Offset: 0x68
	// Line 3879, Address: 0x2063e0, Func Offset: 0x70
	// Line 3878, Address: 0x2063e4, Func Offset: 0x74
	// Line 3904, Address: 0x2063e8, Func Offset: 0x78
	// Line 3878, Address: 0x2063ec, Func Offset: 0x7c
	// Line 3904, Address: 0x2063f0, Func Offset: 0x80
	// Line 3879, Address: 0x2063f8, Func Offset: 0x88
	// Line 3880, Address: 0x206400, Func Offset: 0x90
	// Line 3881, Address: 0x20641c, Func Offset: 0xac
	// Line 3882, Address: 0x206438, Func Offset: 0xc8
	// Line 3883, Address: 0x206454, Func Offset: 0xe4
	// Line 3887, Address: 0x20646c, Func Offset: 0xfc
	// Line 3888, Address: 0x206470, Func Offset: 0x100
	// Line 3883, Address: 0x206474, Func Offset: 0x104
	// Line 3888, Address: 0x206478, Func Offset: 0x108
	// Line 3891, Address: 0x20647c, Func Offset: 0x10c
	// Line 3888, Address: 0x206480, Func Offset: 0x110
	// Line 3887, Address: 0x206484, Func Offset: 0x114
	// Line 3888, Address: 0x206488, Func Offset: 0x118
	// Line 3887, Address: 0x20648c, Func Offset: 0x11c
	// Line 3888, Address: 0x206494, Func Offset: 0x124
	// Line 3889, Address: 0x2064a0, Func Offset: 0x130
	// Line 3893, Address: 0x2064a4, Func Offset: 0x134
	// Line 3889, Address: 0x2064a8, Func Offset: 0x138
	// Line 3892, Address: 0x2064b0, Func Offset: 0x140
	// Line 3889, Address: 0x2064b8, Func Offset: 0x148
	// Line 3891, Address: 0x2064bc, Func Offset: 0x14c
	// Line 3893, Address: 0x2064c0, Func Offset: 0x150
	// Line 3899, Address: 0x2064c4, Func Offset: 0x154
	// Line 3893, Address: 0x2064c8, Func Offset: 0x158
	// Line 3889, Address: 0x2064cc, Func Offset: 0x15c
	// Line 3895, Address: 0x2064d0, Func Offset: 0x160
	// Line 3901, Address: 0x2064d8, Func Offset: 0x168
	// Line 3896, Address: 0x2064dc, Func Offset: 0x16c
	// Line 3900, Address: 0x2064e0, Func Offset: 0x170
	// Line 3897, Address: 0x2064e4, Func Offset: 0x174
	// Line 3901, Address: 0x2064f0, Func Offset: 0x180
	// Line 3897, Address: 0x2064f4, Func Offset: 0x184
	// Line 3901, Address: 0x2064f8, Func Offset: 0x188
	// Line 3904, Address: 0x2064fc, Func Offset: 0x18c
	// Line 3907, Address: 0x206524, Func Offset: 0x1b4
	// Line 3909, Address: 0x206540, Func Offset: 0x1d0
	// Line 3907, Address: 0x206544, Func Offset: 0x1d4
	// Line 3909, Address: 0x206548, Func Offset: 0x1d8
	// Line 3912, Address: 0x2065a4, Func Offset: 0x234
	// Line 3914, Address: 0x2065c0, Func Offset: 0x250
	// Line 3912, Address: 0x2065c4, Func Offset: 0x254
	// Line 3914, Address: 0x2065c8, Func Offset: 0x258
	// Line 3917, Address: 0x206630, Func Offset: 0x2c0
	// Line 3918, Address: 0x20664c, Func Offset: 0x2dc
	// Line 3919, Address: 0x206658, Func Offset: 0x2e8
	// Line 3917, Address: 0x20665c, Func Offset: 0x2ec
	// Line 3919, Address: 0x206660, Func Offset: 0x2f0
	// Line 3922, Address: 0x2066bc, Func Offset: 0x34c
	// Line 3924, Address: 0x2066d8, Func Offset: 0x368
	// Line 3922, Address: 0x2066dc, Func Offset: 0x36c
	// Line 3924, Address: 0x2066e0, Func Offset: 0x370
	// Line 3927, Address: 0x206744, Func Offset: 0x3d4
	// Line 3931, Address: 0x206760, Func Offset: 0x3f0
	// Line 3932, Address: 0x206768, Func Offset: 0x3f8
	// Func End, Address: 0x206770, Func Offset: 0x400
}

// xShadowSetVolume__FP8RwCameraP5xVec3f
// Start address: 0x206770
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float32 depth)
{
	int32 i;
	xVec3 volume[8];
	float32 invNearFar;
	float32 lerp;
	RwMatrixTag* camMatrix;
	int32 cullstate;
	int32 ztest;
	int32 zwrite;
	int32 srcblend;
	int32 destblend;
	// Line 3652, Address: 0x206770, Func Offset: 0
	// Line 3662, Address: 0x206774, Func Offset: 0x4
	// Line 3652, Address: 0x206778, Func Offset: 0x8
	// Line 3660, Address: 0x206780, Func Offset: 0x10
	// Line 3662, Address: 0x206788, Func Offset: 0x18
	// Line 3661, Address: 0x20678c, Func Offset: 0x1c
	// Line 3668, Address: 0x206798, Func Offset: 0x28
	// Line 3664, Address: 0x2067a0, Func Offset: 0x30
	// Line 3662, Address: 0x2067a4, Func Offset: 0x34
	// Line 3664, Address: 0x2067a8, Func Offset: 0x38
	// Line 3673, Address: 0x2067b0, Func Offset: 0x40
	// Line 3666, Address: 0x2067b4, Func Offset: 0x44
	// Line 3673, Address: 0x2067b8, Func Offset: 0x48
	// Line 3666, Address: 0x2067bc, Func Offset: 0x4c
	// Line 3672, Address: 0x2067c0, Func Offset: 0x50
	// Line 3668, Address: 0x2067c4, Func Offset: 0x54
	// Line 3664, Address: 0x2067c8, Func Offset: 0x58
	// Line 3666, Address: 0x2067d8, Func Offset: 0x68
	// Line 3664, Address: 0x2067e4, Func Offset: 0x74
	// Line 3666, Address: 0x2067e8, Func Offset: 0x78
	// Line 3664, Address: 0x2067ec, Func Offset: 0x7c
	// Line 3666, Address: 0x2067f0, Func Offset: 0x80
	// Line 3668, Address: 0x2067f4, Func Offset: 0x84
	// Line 3669, Address: 0x206810, Func Offset: 0xa0
	// Line 3670, Address: 0x206818, Func Offset: 0xa8
	// Line 3671, Address: 0x206828, Func Offset: 0xb8
	// Line 3670, Address: 0x206830, Func Offset: 0xc0
	// Line 3671, Address: 0x206838, Func Offset: 0xc8
	// Line 3670, Address: 0x20683c, Func Offset: 0xcc
	// Line 3671, Address: 0x206864, Func Offset: 0xf4
	// Line 3672, Address: 0x206868, Func Offset: 0xf8
	// Line 3673, Address: 0x2068b0, Func Offset: 0x140
	// Line 3693, Address: 0x2068b8, Func Offset: 0x148
	// Line 3694, Address: 0x2068c4, Func Offset: 0x154
	// Line 3695, Address: 0x2068d0, Func Offset: 0x160
	// Line 3696, Address: 0x2068dc, Func Offset: 0x16c
	// Line 3697, Address: 0x2068e8, Func Offset: 0x178
	// Line 3699, Address: 0x2068f4, Func Offset: 0x184
	// Line 3700, Address: 0x206900, Func Offset: 0x190
	// Line 3701, Address: 0x20690c, Func Offset: 0x19c
	// Line 3702, Address: 0x206918, Func Offset: 0x1a8
	// Line 3703, Address: 0x206924, Func Offset: 0x1b4
	// Line 3704, Address: 0x206930, Func Offset: 0x1c0
	// Line 3705, Address: 0x20693c, Func Offset: 0x1cc
	// Line 3706, Address: 0x206948, Func Offset: 0x1d8
	// Line 3719, Address: 0x206954, Func Offset: 0x1e4
	// Line 3720, Address: 0x206960, Func Offset: 0x1f0
	// Line 3746, Address: 0x206974, Func Offset: 0x204
	// Line 3749, Address: 0x206984, Func Offset: 0x214
	// Line 3757, Address: 0x206990, Func Offset: 0x220
	// Line 3774, Address: 0x2069ac, Func Offset: 0x23c
	// Line 3778, Address: 0x2069b8, Func Offset: 0x248
	// Line 3783, Address: 0x2069c8, Func Offset: 0x258
	// Line 3791, Address: 0x2069d8, Func Offset: 0x268
	// Line 3809, Address: 0x2069f4, Func Offset: 0x284
	// Line 3813, Address: 0x2069f8, Func Offset: 0x288
	// Line 3814, Address: 0x206a04, Func Offset: 0x294
	// Line 3815, Address: 0x206a10, Func Offset: 0x2a0
	// Line 3816, Address: 0x206a1c, Func Offset: 0x2ac
	// Line 3817, Address: 0x206a28, Func Offset: 0x2b8
	// Line 3818, Address: 0x206a34, Func Offset: 0x2c4
	// Line 3819, Address: 0x206a3c, Func Offset: 0x2cc
	// Func End, Address: 0x206a48, Func Offset: 0x2d8
}

// DrawAlphaBox__FP5xVec3iUc
// Start address: 0x206a50
void DrawAlphaBox(xVec3* volume, int32 frontface, uint8 alpha)
{
	uint32 i;
	uint32 numV;
	RxObjSpace3DVertex boxV[36];
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
	// Line 3596, Address: 0x206a50, Func Offset: 0
	// Line 3601, Address: 0x206a54, Func Offset: 0x4
	// Line 3596, Address: 0x206a58, Func Offset: 0x8
	// Line 3604, Address: 0x206a64, Func Offset: 0x14
	// Line 3596, Address: 0x206a68, Func Offset: 0x18
	// Line 3604, Address: 0x206a74, Func Offset: 0x24
	// Line 3596, Address: 0x206a78, Func Offset: 0x28
	// Line 3603, Address: 0x206a84, Func Offset: 0x34
	// Line 3596, Address: 0x206a88, Func Offset: 0x38
	// Line 3604, Address: 0x206a8c, Func Offset: 0x3c
	// Line 3596, Address: 0x206a90, Func Offset: 0x40
	// Line 3601, Address: 0x206aa4, Func Offset: 0x54
	// Line 3602, Address: 0x206aac, Func Offset: 0x5c
	// Line 3601, Address: 0x206ab0, Func Offset: 0x60
	// Line 3604, Address: 0x206abc, Func Offset: 0x6c
	// Line 3613, Address: 0x206ac0, Func Offset: 0x70
	// Line 3609, Address: 0x206ac4, Func Offset: 0x74
	// Line 3619, Address: 0x206ac8, Func Offset: 0x78
	// Line 3610, Address: 0x206acc, Func Offset: 0x7c
	// Line 3619, Address: 0x206ad0, Func Offset: 0x80
	// Line 3611, Address: 0x206ad4, Func Offset: 0x84
	// Line 3612, Address: 0x206ad8, Func Offset: 0x88
	// Line 3613, Address: 0x206adc, Func Offset: 0x8c
	// Line 3614, Address: 0x206ae0, Func Offset: 0x90
	// Line 3609, Address: 0x206ae4, Func Offset: 0x94
	// Line 3615, Address: 0x206ae8, Func Offset: 0x98
	// Line 3609, Address: 0x206aec, Func Offset: 0x9c
	// Line 3610, Address: 0x206af4, Func Offset: 0xa4
	// Line 3609, Address: 0x206afc, Func Offset: 0xac
	// Line 3610, Address: 0x206b00, Func Offset: 0xb0
	// Line 3609, Address: 0x206b04, Func Offset: 0xb4
	// Line 3610, Address: 0x206b08, Func Offset: 0xb8
	// Line 3611, Address: 0x206b0c, Func Offset: 0xbc
	// Line 3612, Address: 0x206b14, Func Offset: 0xc4
	// Line 3611, Address: 0x206b18, Func Offset: 0xc8
	// Line 3612, Address: 0x206b1c, Func Offset: 0xcc
	// Line 3614, Address: 0x206b20, Func Offset: 0xd0
	// Line 3611, Address: 0x206b24, Func Offset: 0xd4
	// Line 3612, Address: 0x206b28, Func Offset: 0xd8
	// Line 3616, Address: 0x206b30, Func Offset: 0xe0
	// Line 3613, Address: 0x206b34, Func Offset: 0xe4
	// Line 3616, Address: 0x206b38, Func Offset: 0xe8
	// Line 3611, Address: 0x206b40, Func Offset: 0xf0
	// Line 3612, Address: 0x206b44, Func Offset: 0xf4
	// Line 3615, Address: 0x206b48, Func Offset: 0xf8
	// Line 3618, Address: 0x206b4c, Func Offset: 0xfc
	// Line 3613, Address: 0x206b50, Func Offset: 0x100
	// Line 3617, Address: 0x206b54, Func Offset: 0x104
	// Line 3616, Address: 0x206b58, Func Offset: 0x108
	// Line 3617, Address: 0x206b5c, Func Offset: 0x10c
	// Line 3616, Address: 0x206b6c, Func Offset: 0x11c
	// Line 3617, Address: 0x206b70, Func Offset: 0x120
	// Line 3616, Address: 0x206b74, Func Offset: 0x124
	// Line 3618, Address: 0x206b78, Func Offset: 0x128
	// Line 3614, Address: 0x206b9c, Func Offset: 0x14c
	// Line 3619, Address: 0x206ba0, Func Offset: 0x150
	// Line 3620, Address: 0x206ba8, Func Offset: 0x158
	// Line 3621, Address: 0x206bc8, Func Offset: 0x178
	// Line 3622, Address: 0x206be4, Func Offset: 0x194
	// Line 3623, Address: 0x206be8, Func Offset: 0x198
	// Line 3627, Address: 0x206c04, Func Offset: 0x1b4
	// Line 3639, Address: 0x206c08, Func Offset: 0x1b8
	// Line 3627, Address: 0x206c0c, Func Offset: 0x1bc
	// Line 3639, Address: 0x206c14, Func Offset: 0x1c4
	// Line 3627, Address: 0x206c1c, Func Offset: 0x1cc
	// Line 3628, Address: 0x206c2c, Func Offset: 0x1dc
	// Line 3629, Address: 0x206c44, Func Offset: 0x1f4
	// Line 3630, Address: 0x206c5c, Func Offset: 0x20c
	// Line 3631, Address: 0x206c74, Func Offset: 0x224
	// Line 3632, Address: 0x206c8c, Func Offset: 0x23c
	// Line 3633, Address: 0x206ca4, Func Offset: 0x254
	// Line 3634, Address: 0x206cb4, Func Offset: 0x264
	// Line 3635, Address: 0x206cc4, Func Offset: 0x274
	// Line 3636, Address: 0x206cd4, Func Offset: 0x284
	// Line 3637, Address: 0x206ce4, Func Offset: 0x294
	// Line 3638, Address: 0x206cf4, Func Offset: 0x2a4
	// Line 3640, Address: 0x206d04, Func Offset: 0x2b4
	// Line 3641, Address: 0x206d08, Func Offset: 0x2b8
	// Line 3643, Address: 0x206d18, Func Offset: 0x2c8
	// Line 3645, Address: 0x206d34, Func Offset: 0x2e4
	// Line 3646, Address: 0x206d3c, Func Offset: 0x2ec
	// Line 3647, Address: 0x206d40, Func Offset: 0x2f0
	// Line 3648, Address: 0x206d48, Func Offset: 0x2f8
	// Func End, Address: 0x206d84, Func Offset: 0x334
}

// ShadowInsideBoxAdjust__FP5xVec3
// Start address: 0x206d90
uint8 ShadowInsideBoxAdjust(xVec3* volume)
{
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	xVec3 normal[6];
	uint32 i;
	RwCamera* mainCamera;
	RwMatrixTag* mainMatrix;
	float32 nearclip;
	// Line 3541, Address: 0x206d90, Func Offset: 0
	// Line 3549, Address: 0x206d94, Func Offset: 0x4
	// Line 3541, Address: 0x206d98, Func Offset: 0x8
	// Line 3549, Address: 0x206d9c, Func Offset: 0xc
	// Line 3541, Address: 0x206da0, Func Offset: 0x10
	// Line 3545, Address: 0x206da4, Func Offset: 0x14
	// Line 3541, Address: 0x206da8, Func Offset: 0x18
	// Line 3549, Address: 0x206dac, Func Offset: 0x1c
	// Line 3541, Address: 0x206db0, Func Offset: 0x20
	// Line 3551, Address: 0x206db4, Func Offset: 0x24
	// Line 3541, Address: 0x206db8, Func Offset: 0x28
	// Line 3551, Address: 0x206dbc, Func Offset: 0x2c
	// Line 3541, Address: 0x206dc0, Func Offset: 0x30
	// Line 3551, Address: 0x206dc4, Func Offset: 0x34
	// Line 3541, Address: 0x206dc8, Func Offset: 0x38
	// Line 3551, Address: 0x206dcc, Func Offset: 0x3c
	// Line 3541, Address: 0x206dd0, Func Offset: 0x40
	// Line 3551, Address: 0x206ddc, Func Offset: 0x4c
	// Line 3541, Address: 0x206de0, Func Offset: 0x50
	// Line 3551, Address: 0x206de4, Func Offset: 0x54
	// Line 3541, Address: 0x206de8, Func Offset: 0x58
	// Line 3545, Address: 0x206df0, Func Offset: 0x60
	// Line 3546, Address: 0x206df4, Func Offset: 0x64
	// Line 3549, Address: 0x206df8, Func Offset: 0x68
	// Line 3546, Address: 0x206e08, Func Offset: 0x78
	// Line 3549, Address: 0x206e0c, Func Offset: 0x7c
	// Line 3554, Address: 0x206e38, Func Offset: 0xa8
	// Line 3555, Address: 0x206e3c, Func Offset: 0xac
	// Line 3560, Address: 0x206e40, Func Offset: 0xb0
	// Line 3556, Address: 0x206e44, Func Offset: 0xb4
	// Line 3558, Address: 0x206e48, Func Offset: 0xb8
	// Line 3559, Address: 0x206e4c, Func Offset: 0xbc
	// Line 3564, Address: 0x206e50, Func Offset: 0xc0
	// Line 3554, Address: 0x206e58, Func Offset: 0xc8
	// Line 3555, Address: 0x206e60, Func Offset: 0xd0
	// Line 3554, Address: 0x206e68, Func Offset: 0xd8
	// Line 3555, Address: 0x206e6c, Func Offset: 0xdc
	// Line 3554, Address: 0x206e70, Func Offset: 0xe0
	// Line 3559, Address: 0x206e74, Func Offset: 0xe4
	// Line 3555, Address: 0x206e78, Func Offset: 0xe8
	// Line 3556, Address: 0x206e7c, Func Offset: 0xec
	// Line 3561, Address: 0x206e8c, Func Offset: 0xfc
	// Line 3556, Address: 0x206e90, Func Offset: 0x100
	// Line 3558, Address: 0x206e94, Func Offset: 0x104
	// Line 3560, Address: 0x206e98, Func Offset: 0x108
	// Line 3562, Address: 0x206e9c, Func Offset: 0x10c
	// Line 3561, Address: 0x206ea0, Func Offset: 0x110
	// Line 3558, Address: 0x206ea4, Func Offset: 0x114
	// Line 3561, Address: 0x206ea8, Func Offset: 0x118
	// Line 3562, Address: 0x206eb0, Func Offset: 0x120
	// Line 3561, Address: 0x206ec0, Func Offset: 0x130
	// Line 3562, Address: 0x206ec4, Func Offset: 0x134
	// Line 3561, Address: 0x206ec8, Func Offset: 0x138
	// Line 3563, Address: 0x206ecc, Func Offset: 0x13c
	// Line 3559, Address: 0x206ee0, Func Offset: 0x150
	// Line 3563, Address: 0x206ee4, Func Offset: 0x154
	// Line 3564, Address: 0x206ef0, Func Offset: 0x160
	// Line 3566, Address: 0x206ef8, Func Offset: 0x168
	// Line 3567, Address: 0x206f30, Func Offset: 0x1a0
	// Line 3569, Address: 0x206f38, Func Offset: 0x1a8
	// Line 3567, Address: 0x206f40, Func Offset: 0x1b0
	// Line 3569, Address: 0x206f48, Func Offset: 0x1b8
	// Line 3572, Address: 0x206f54, Func Offset: 0x1c4
	// Line 3573, Address: 0x206f68, Func Offset: 0x1d8
	// Line 3577, Address: 0x206f6c, Func Offset: 0x1dc
	// Line 3589, Address: 0x206f70, Func Offset: 0x1e0
	// Line 3574, Address: 0x206f74, Func Offset: 0x1e4
	// Line 3589, Address: 0x206f78, Func Offset: 0x1e8
	// Line 3575, Address: 0x206f7c, Func Offset: 0x1ec
	// Line 3576, Address: 0x206f80, Func Offset: 0x1f0
	// Line 3573, Address: 0x206f84, Func Offset: 0x1f4
	// Line 3574, Address: 0x206f8c, Func Offset: 0x1fc
	// Line 3573, Address: 0x206f94, Func Offset: 0x204
	// Line 3574, Address: 0x206f98, Func Offset: 0x208
	// Line 3573, Address: 0x206f9c, Func Offset: 0x20c
	// Line 3588, Address: 0x206fa0, Func Offset: 0x210
	// Line 3577, Address: 0x206fa4, Func Offset: 0x214
	// Line 3574, Address: 0x206fa8, Func Offset: 0x218
	// Line 3577, Address: 0x206fac, Func Offset: 0x21c
	// Line 3575, Address: 0x206fb0, Func Offset: 0x220
	// Line 3576, Address: 0x206fb8, Func Offset: 0x228
	// Line 3575, Address: 0x206fc0, Func Offset: 0x230
	// Line 3576, Address: 0x206fc4, Func Offset: 0x234
	// Line 3577, Address: 0x206fc8, Func Offset: 0x238
	// Line 3575, Address: 0x206fcc, Func Offset: 0x23c
	// Line 3576, Address: 0x206fd0, Func Offset: 0x240
	// Line 3577, Address: 0x206fd4, Func Offset: 0x244
	// Line 3578, Address: 0x206fd8, Func Offset: 0x248
	// Line 3579, Address: 0x206fec, Func Offset: 0x25c
	// Line 3580, Address: 0x207000, Func Offset: 0x270
	// Line 3581, Address: 0x207014, Func Offset: 0x284
	// Line 3582, Address: 0x207028, Func Offset: 0x298
	// Line 3583, Address: 0x20703c, Func Offset: 0x2ac
	// Line 3584, Address: 0x207050, Func Offset: 0x2c0
	// Line 3585, Address: 0x207064, Func Offset: 0x2d4
	// Line 3586, Address: 0x207078, Func Offset: 0x2e8
	// Line 3587, Address: 0x20708c, Func Offset: 0x2fc
	// Line 3588, Address: 0x2070a0, Func Offset: 0x310
	// Line 3589, Address: 0x2070b4, Func Offset: 0x324
	// Line 3590, Address: 0x2070bc, Func Offset: 0x32c
	// Line 3591, Address: 0x2070c0, Func Offset: 0x330
	// Func End, Address: 0x2070f8, Func Offset: 0x368
}

// ShadowCameraSetSpherePersp__FP8RwCameraP5RwV3df
// Start address: 0x207100
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float32 radius)
{
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	RwV3d* camPos;
	float32 objDepth;
	float32 nearZ;
	float32 farZ;
	// Line 3495, Address: 0x207100, Func Offset: 0
	// Line 3501, Address: 0x207104, Func Offset: 0x4
	// Line 3495, Address: 0x207108, Func Offset: 0x8
	// Line 3501, Address: 0x20710c, Func Offset: 0xc
	// Line 3495, Address: 0x207110, Func Offset: 0x10
	// Line 3501, Address: 0x207114, Func Offset: 0x14
	// Line 3495, Address: 0x207118, Func Offset: 0x18
	// Line 3501, Address: 0x20713c, Func Offset: 0x3c
	// Line 3496, Address: 0x207140, Func Offset: 0x40
	// Line 3501, Address: 0x207148, Func Offset: 0x48
	// Line 3497, Address: 0x20714c, Func Offset: 0x4c
	// Line 3498, Address: 0x207154, Func Offset: 0x54
	// Line 3502, Address: 0x207158, Func Offset: 0x58
	// Line 3503, Address: 0x20715c, Func Offset: 0x5c
	// Line 3507, Address: 0x207160, Func Offset: 0x60
	// Line 3509, Address: 0x207164, Func Offset: 0x64
	// Line 3510, Address: 0x20716c, Func Offset: 0x6c
	// Line 3515, Address: 0x207178, Func Offset: 0x78
	// Line 3517, Address: 0x20717c, Func Offset: 0x7c
	// Line 3518, Address: 0x207184, Func Offset: 0x84
	// Line 3515, Address: 0x207188, Func Offset: 0x88
	// Line 3516, Address: 0x20719c, Func Offset: 0x9c
	// Line 3517, Address: 0x2071d8, Func Offset: 0xd8
	// Line 3518, Address: 0x2071f4, Func Offset: 0xf4
	// Line 3519, Address: 0x2071fc, Func Offset: 0xfc
	// Line 3522, Address: 0x207204, Func Offset: 0x104
	// Line 3524, Address: 0x207208, Func Offset: 0x108
	// Line 3525, Address: 0x20720c, Func Offset: 0x10c
	// Func End, Address: 0x207238, Func Offset: 0x138
}

// ShadowRender__FP8RwCameraP8RwRasterP14RpIntersectionff
// Start address: 0x207240
int32 ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, float32 shadowFactor, float32 fadeDist)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
	// Line 3101, Address: 0x207240, Func Offset: 0
	// Line 3130, Address: 0x207260, Func Offset: 0x20
	// Line 3101, Address: 0x207264, Func Offset: 0x24
	// Line 3130, Address: 0x207268, Func Offset: 0x28
	// Line 3132, Address: 0x207278, Func Offset: 0x38
	// Line 3134, Address: 0x207284, Func Offset: 0x44
	// Line 3141, Address: 0x207290, Func Offset: 0x50
	// Line 3143, Address: 0x20729c, Func Offset: 0x5c
	// Line 3150, Address: 0x2072b0, Func Offset: 0x70
	// Line 3154, Address: 0x2072bc, Func Offset: 0x7c
	// Line 3158, Address: 0x2072c8, Func Offset: 0x88
	// Line 3162, Address: 0x2072d4, Func Offset: 0x94
	// Line 3170, Address: 0x2072d8, Func Offset: 0x98
	// Line 3172, Address: 0x2072dc, Func Offset: 0x9c
	// Line 3174, Address: 0x2072e0, Func Offset: 0xa0
	// Line 3171, Address: 0x2072e4, Func Offset: 0xa4
	// Line 3170, Address: 0x2072e8, Func Offset: 0xa8
	// Line 3174, Address: 0x2072ec, Func Offset: 0xac
	// Line 3171, Address: 0x2072f0, Func Offset: 0xb0
	// Line 3174, Address: 0x207300, Func Offset: 0xc0
	// Line 3176, Address: 0x207308, Func Offset: 0xc8
	// Line 3177, Address: 0x20730c, Func Offset: 0xcc
	// Line 3176, Address: 0x207310, Func Offset: 0xd0
	// Line 3178, Address: 0x207314, Func Offset: 0xd4
	// Line 3177, Address: 0x207318, Func Offset: 0xd8
	// Line 3178, Address: 0x20731c, Func Offset: 0xdc
	// Line 3176, Address: 0x207320, Func Offset: 0xe0
	// Line 3178, Address: 0x207324, Func Offset: 0xe4
	// Line 3177, Address: 0x207328, Func Offset: 0xe8
	// Line 3176, Address: 0x207330, Func Offset: 0xf0
	// Line 3177, Address: 0x207338, Func Offset: 0xf8
	// Line 3178, Address: 0x207340, Func Offset: 0x100
	// Line 3190, Address: 0x207348, Func Offset: 0x108
	// Line 3191, Address: 0x207370, Func Offset: 0x130
	// Line 3190, Address: 0x207378, Func Offset: 0x138
	// Line 3191, Address: 0x20737c, Func Offset: 0x13c
	// Line 3199, Address: 0x2073c4, Func Offset: 0x184
	// Line 3192, Address: 0x2073c8, Func Offset: 0x188
	// Line 3208, Address: 0x2073cc, Func Offset: 0x18c
	// Line 3199, Address: 0x2073d0, Func Offset: 0x190
	// Line 3208, Address: 0x2073d4, Func Offset: 0x194
	// Line 3197, Address: 0x2073d8, Func Offset: 0x198
	// Line 3208, Address: 0x2073dc, Func Offset: 0x19c
	// Line 3200, Address: 0x2073e0, Func Offset: 0x1a0
	// Line 3208, Address: 0x2073e4, Func Offset: 0x1a4
	// Line 3192, Address: 0x2073e8, Func Offset: 0x1a8
	// Line 3199, Address: 0x2073f0, Func Offset: 0x1b0
	// Line 3192, Address: 0x2073f4, Func Offset: 0x1b4
	// Line 3207, Address: 0x207408, Func Offset: 0x1c8
	// Line 3208, Address: 0x207434, Func Offset: 0x1f4
	// Line 3210, Address: 0x20743c, Func Offset: 0x1fc
	// Line 3216, Address: 0x207440, Func Offset: 0x200
	// Line 3210, Address: 0x207444, Func Offset: 0x204
	// Line 3216, Address: 0x207448, Func Offset: 0x208
	// Line 3210, Address: 0x20744c, Func Offset: 0x20c
	// Line 3216, Address: 0x207450, Func Offset: 0x210
	// Line 3246, Address: 0x20745c, Func Offset: 0x21c
	// Line 3249, Address: 0x207470, Func Offset: 0x230
	// Line 3253, Address: 0x20748c, Func Offset: 0x24c
	// Line 3252, Address: 0x207490, Func Offset: 0x250
	// Line 3253, Address: 0x207494, Func Offset: 0x254
	// Line 3257, Address: 0x2074b4, Func Offset: 0x274
	// Line 3258, Address: 0x2074c0, Func Offset: 0x280
	// Line 3268, Address: 0x2074d8, Func Offset: 0x298
	// Line 3270, Address: 0x2074e4, Func Offset: 0x2a4
	// Line 3273, Address: 0x2074fc, Func Offset: 0x2bc
	// Line 3274, Address: 0x207504, Func Offset: 0x2c4
	// Line 3275, Address: 0x20750c, Func Offset: 0x2cc
	// Line 3277, Address: 0x207510, Func Offset: 0x2d0
	// Line 3278, Address: 0x207514, Func Offset: 0x2d4
	// Line 3287, Address: 0x207518, Func Offset: 0x2d8
	// Line 3288, Address: 0x207524, Func Offset: 0x2e4
	// Line 3296, Address: 0x207530, Func Offset: 0x2f0
	// Line 3295, Address: 0x207548, Func Offset: 0x308
	// Line 3296, Address: 0x20754c, Func Offset: 0x30c
	// Func End, Address: 0x207554, Func Offset: 0x314
}

// ShadowRenderTriangleCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x207560
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data)
{
	_ProjectionParam* param;
	RwV3d vShad[3];
	RxObjSpace3DVertex* imv;
	xVec3 c;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	uint32* p0;
	uint32* p1;
	uint32* p2;
	uint32 sw;
	// Line 2936, Address: 0x207560, Func Offset: 0
	// Line 2973, Address: 0x207574, Func Offset: 0x14
	// Line 2975, Address: 0x2075ac, Func Offset: 0x4c
	// Line 2976, Address: 0x2075b4, Func Offset: 0x54
	// Line 2980, Address: 0x2075b8, Func Offset: 0x58
	// Line 3008, Address: 0x207688, Func Offset: 0x128
	// Line 3015, Address: 0x2077b0, Func Offset: 0x250
	// Line 3022, Address: 0x2077b8, Func Offset: 0x258
	// Line 3024, Address: 0x2077c8, Func Offset: 0x268
	// Line 3027, Address: 0x2077e0, Func Offset: 0x280
	// Line 3028, Address: 0x2077e8, Func Offset: 0x288
	// Line 3031, Address: 0x2077f0, Func Offset: 0x290
	// Line 3032, Address: 0x2077fc, Func Offset: 0x29c
	// Line 3042, Address: 0x207800, Func Offset: 0x2a0
	// Line 3038, Address: 0x207810, Func Offset: 0x2b0
	// Line 3085, Address: 0x207818, Func Offset: 0x2b8
	// Line 3042, Address: 0x20781c, Func Offset: 0x2bc
	// Line 3038, Address: 0x207820, Func Offset: 0x2c0
	// Line 3042, Address: 0x207830, Func Offset: 0x2d0
	// Line 3043, Address: 0x207834, Func Offset: 0x2d4
	// Line 3050, Address: 0x207838, Func Offset: 0x2d8
	// Line 3043, Address: 0x20783c, Func Offset: 0x2dc
	// Line 3044, Address: 0x207844, Func Offset: 0x2e4
	// Line 3050, Address: 0x207848, Func Offset: 0x2e8
	// Line 3044, Address: 0x20784c, Func Offset: 0x2ec
	// Line 3050, Address: 0x207854, Func Offset: 0x2f4
	// Line 3051, Address: 0x2078a0, Func Offset: 0x340
	// Line 3052, Address: 0x2078f4, Func Offset: 0x394
	// Line 3054, Address: 0x207948, Func Offset: 0x3e8
	// Line 3055, Address: 0x207950, Func Offset: 0x3f0
	// Line 3056, Address: 0x207958, Func Offset: 0x3f8
	// Line 3058, Address: 0x207960, Func Offset: 0x400
	// Line 3059, Address: 0x207968, Func Offset: 0x408
	// Line 3060, Address: 0x207970, Func Offset: 0x410
	// Line 3066, Address: 0x207978, Func Offset: 0x418
	// Line 3067, Address: 0x20797c, Func Offset: 0x41c
	// Line 3068, Address: 0x207980, Func Offset: 0x420
	// Line 3069, Address: 0x207984, Func Offset: 0x424
	// Line 3080, Address: 0x207988, Func Offset: 0x428
	// Line 3085, Address: 0x207994, Func Offset: 0x434
	// Line 3086, Address: 0x207998, Func Offset: 0x438
	// Func End, Address: 0x2079ac, Func Offset: 0x44c
}

// ShadowCameraUpdate__FP8RwCameraPvPFPv_vP5xVec3fi
// Start address: 0x2079b0
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*))
{
	RwRGBA bgColor;
	RwCamera* camera;
	int32 fogstate;
	// Line 2450, Address: 0x2079b0, Func Offset: 0
	// Line 2453, Address: 0x2079b4, Func Offset: 0x4
	// Line 2450, Address: 0x2079b8, Func Offset: 0x8
	// Line 2451, Address: 0x2079bc, Func Offset: 0xc
	// Line 2450, Address: 0x2079c0, Func Offset: 0x10
	// Line 2451, Address: 0x2079dc, Func Offset: 0x2c
	// Line 2459, Address: 0x2079e0, Func Offset: 0x30
	// Line 2451, Address: 0x2079e4, Func Offset: 0x34
	// Line 2453, Address: 0x2079e8, Func Offset: 0x38
	// Line 2459, Address: 0x2079ec, Func Offset: 0x3c
	// Line 2460, Address: 0x2079f4, Func Offset: 0x44
	// Line 2466, Address: 0x207a00, Func Offset: 0x50
	// Line 2467, Address: 0x207a08, Func Offset: 0x58
	// Line 2470, Address: 0x207a10, Func Offset: 0x60
	// Line 2471, Address: 0x207a18, Func Offset: 0x68
	// Line 2518, Address: 0x207a20, Func Offset: 0x70
	// Line 2523, Address: 0x207a30, Func Offset: 0x80
	// Line 2528, Address: 0x207a38, Func Offset: 0x88
	// Line 2531, Address: 0x207a48, Func Offset: 0x98
	// Line 2533, Address: 0x207a54, Func Offset: 0xa4
	// Line 2534, Address: 0x207a60, Func Offset: 0xb0
	// Line 2535, Address: 0x207a6c, Func Offset: 0xbc
	// Line 2536, Address: 0x207a78, Func Offset: 0xc8
	// Line 2542, Address: 0x207a84, Func Offset: 0xd4
	// Line 2543, Address: 0x207a8c, Func Offset: 0xdc
	// Line 2547, Address: 0x207a94, Func Offset: 0xe4
	// Line 2550, Address: 0x207a9c, Func Offset: 0xec
	// Line 2569, Address: 0x207aa4, Func Offset: 0xf4
	// Line 2570, Address: 0x207ab0, Func Offset: 0x100
	// Line 2571, Address: 0x207abc, Func Offset: 0x10c
	// Line 2576, Address: 0x207ac4, Func Offset: 0x114
	// Line 2578, Address: 0x207ac8, Func Offset: 0x118
	// Line 2579, Address: 0x207ad0, Func Offset: 0x120
	// Line 2582, Address: 0x207ad8, Func Offset: 0x128
	// Line 2589, Address: 0x207ae8, Func Offset: 0x138
	// Line 2592, Address: 0x207af4, Func Offset: 0x144
	// Line 2593, Address: 0x207af8, Func Offset: 0x148
	// Func End, Address: 0x207b14, Func Offset: 0x164
}

// ShadowCameraDestroy__FP8RwCamera
// Start address: 0x207b20
void ShadowCameraDestroy(RwCamera* shadowCamera)
{
	RwRaster* raster;
	RwFrame* frame;
	// Line 2278, Address: 0x207b20, Func Offset: 0
	// Line 2279, Address: 0x207b30, Func Offset: 0x10
	// Line 2286, Address: 0x207b38, Func Offset: 0x18
	// Line 2288, Address: 0x207b40, Func Offset: 0x20
	// Line 2289, Address: 0x207b44, Func Offset: 0x24
	// Line 2291, Address: 0x207b4c, Func Offset: 0x2c
	// Line 2292, Address: 0x207b54, Func Offset: 0x34
	// Line 2293, Address: 0x207b5c, Func Offset: 0x3c
	// Line 2295, Address: 0x207b60, Func Offset: 0x40
	// Line 2296, Address: 0x207b64, Func Offset: 0x44
	// Line 2299, Address: 0x207b6c, Func Offset: 0x4c
	// Line 2300, Address: 0x207b74, Func Offset: 0x54
	// Line 2302, Address: 0x207b78, Func Offset: 0x58
	// Line 2303, Address: 0x207b7c, Func Offset: 0x5c
	// Line 2307, Address: 0x207b84, Func Offset: 0x64
	// Line 2308, Address: 0x207b8c, Func Offset: 0x6c
	// Line 2310, Address: 0x207b90, Func Offset: 0x70
	// Line 2314, Address: 0x207b98, Func Offset: 0x78
	// Func End, Address: 0x207bac, Func Offset: 0x8c
}

// Im2DRenderQuad__Ffffffff
// Start address: 0x207bb0
int32 Im2DRenderQuad(float32 x1, float32 y1, float32 x2, float32 y2, float32 z, float32 recipCamZ, float32 uvOffset)
{
	RwSky2DVertex vx[4];
	// Line 2141, Address: 0x207bb4, Func Offset: 0x4
	// Line 2152, Address: 0x207bc0, Func Offset: 0x10
	// Line 2181, Address: 0x207bc4, Func Offset: 0x14
	// Line 2152, Address: 0x207bcc, Func Offset: 0x1c
	// Line 2181, Address: 0x207bd4, Func Offset: 0x24
	// Line 2152, Address: 0x207bd8, Func Offset: 0x28
	// Line 2181, Address: 0x207bdc, Func Offset: 0x2c
	// Line 2152, Address: 0x207be0, Func Offset: 0x30
	// Line 2149, Address: 0x207be4, Func Offset: 0x34
	// Line 2160, Address: 0x207be8, Func Offset: 0x38
	// Line 2157, Address: 0x207bec, Func Offset: 0x3c
	// Line 2160, Address: 0x207bf0, Func Offset: 0x40
	// Line 2150, Address: 0x207bf4, Func Offset: 0x44
	// Line 2160, Address: 0x207bf8, Func Offset: 0x48
	// Line 2166, Address: 0x207bfc, Func Offset: 0x4c
	// Line 2160, Address: 0x207c00, Func Offset: 0x50
	// Line 2151, Address: 0x207c04, Func Offset: 0x54
	// Line 2168, Address: 0x207c08, Func Offset: 0x58
	// Line 2153, Address: 0x207c0c, Func Offset: 0x5c
	// Line 2168, Address: 0x207c10, Func Offset: 0x60
	// Line 2154, Address: 0x207c14, Func Offset: 0x64
	// Line 2168, Address: 0x207c18, Func Offset: 0x68
	// Line 2155, Address: 0x207c1c, Func Offset: 0x6c
	// Line 2168, Address: 0x207c20, Func Offset: 0x70
	// Line 2158, Address: 0x207c24, Func Offset: 0x74
	// Line 2176, Address: 0x207c28, Func Offset: 0x78
	// Line 2174, Address: 0x207c2c, Func Offset: 0x7c
	// Line 2176, Address: 0x207c30, Func Offset: 0x80
	// Line 2159, Address: 0x207c34, Func Offset: 0x84
	// Line 2176, Address: 0x207c38, Func Offset: 0x88
	// Line 2161, Address: 0x207c3c, Func Offset: 0x8c
	// Line 2176, Address: 0x207c40, Func Offset: 0x90
	// Line 2162, Address: 0x207c44, Func Offset: 0x94
	// Line 2171, Address: 0x207c48, Func Offset: 0x98
	// Line 2163, Address: 0x207c4c, Func Offset: 0x9c
	// Line 2165, Address: 0x207c50, Func Offset: 0xa0
	// Line 2173, Address: 0x207c54, Func Offset: 0xa4
	// Line 2167, Address: 0x207c58, Func Offset: 0xa8
	// Line 2175, Address: 0x207c5c, Func Offset: 0xac
	// Line 2169, Address: 0x207c60, Func Offset: 0xb0
	// Line 2177, Address: 0x207c64, Func Offset: 0xb4
	// Line 2170, Address: 0x207c68, Func Offset: 0xb8
	// Line 2178, Address: 0x207c6c, Func Offset: 0xbc
	// Line 2181, Address: 0x207c70, Func Offset: 0xc0
	// Line 2184, Address: 0x207c78, Func Offset: 0xc8
	// Line 2183, Address: 0x207c7c, Func Offset: 0xcc
	// Line 2184, Address: 0x207c80, Func Offset: 0xd0
	// Func End, Address: 0x207c88, Func Offset: 0xd8
}

// xShadow_ListAdd__FP4xEnt
// Start address: 0x207c90
void xShadow_ListAdd(xEnt* ent)
{
	// Line 2050, Address: 0x207c90, Func Offset: 0
	// Func End, Address: 0x207c98, Func Offset: 0x8
}

// xShadowRender__FP4xEntf
// Start address: 0x207ca0
void xShadowRender(xEnt* ent, float32 max_dist)
{
	xVec3 center;
	float32 radius;
	// Line 2030, Address: 0x207ca0, Func Offset: 0
	// Line 2035, Address: 0x207ca4, Func Offset: 0x4
	// Line 2030, Address: 0x207ca8, Func Offset: 0x8
	// Line 2035, Address: 0x207cac, Func Offset: 0xc
	// Line 2030, Address: 0x207cb0, Func Offset: 0x10
	// Line 2035, Address: 0x207cb4, Func Offset: 0x14
	// Line 2030, Address: 0x207cb8, Func Offset: 0x18
	// Line 2035, Address: 0x207cc4, Func Offset: 0x24
	// Line 2037, Address: 0x207cd0, Func Offset: 0x30
	// Line 2038, Address: 0x207d08, Func Offset: 0x68
	// Line 2039, Address: 0x207d1c, Func Offset: 0x7c
	// Func End, Address: 0x207d34, Func Offset: 0x94
}

// xShadowReceiveShadow__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207d40
void xShadowReceiveShadow(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwMatrixTag oldroot;
	// Line 1655, Address: 0x207d40, Func Offset: 0
	// Line 1658, Address: 0x207d48, Func Offset: 0x8
	// Line 1655, Address: 0x207d4c, Func Offset: 0xc
	// Line 1658, Address: 0x207d58, Func Offset: 0x18
	// Line 1659, Address: 0x207d68, Func Offset: 0x28
	// Line 1660, Address: 0x207df8, Func Offset: 0xb8
	// Line 1669, Address: 0x207ec4, Func Offset: 0x184
	// Line 1673, Address: 0x207ec8, Func Offset: 0x188
	// Line 2024, Address: 0x207ed4, Func Offset: 0x194
	// Line 2025, Address: 0x207ee8, Func Offset: 0x1a8
	// Line 2026, Address: 0x207f7c, Func Offset: 0x23c
	// Line 2027, Address: 0x207f80, Func Offset: 0x240
	// Func End, Address: 0x207f90, Func Offset: 0x250
}

// xShadowReceiveShadowFastPS2__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207f90
void xShadowReceiveShadowFastPS2(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwCamera* shadowCamera;
	RwMatrixTag* shadowMatrix;
	RwMatrixTag invMatrix;
	RwV4dTag at;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	float32 fadeDist;
	uint32 i;
	uint32 num_verts;
	xVec3* xvert;
	RpTriangle* tri;
	RpGeometry* geom;
	RwMatrixTag* mat;
	RpSkin* skin;
	uint8 val;
	uint32 vertex_color;
	xModelInstance* model;
	uint32 max_verts;
	uint32 model_num;
	uint32 ent_id;
	xVec3* vert;
	RxObjSpace3DVertex* imv;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	float32 local_SHADOW_BIAS_AMT;
	float32 local_SHADOW_MINNORMY;
	// Line 1074, Address: 0x207f90, Func Offset: 0
	// Line 1075, Address: 0x207fc8, Func Offset: 0x38
	// Line 1080, Address: 0x207fcc, Func Offset: 0x3c
	// Line 1126, Address: 0x207fd0, Func Offset: 0x40
	// Line 1127, Address: 0x207fd8, Func Offset: 0x48
	// Line 1129, Address: 0x207fe4, Func Offset: 0x54
	// Line 1130, Address: 0x207ff0, Func Offset: 0x60
	// Line 1132, Address: 0x207ffc, Func Offset: 0x6c
	// Line 1133, Address: 0x208000, Func Offset: 0x70
	// Line 1135, Address: 0x20800c, Func Offset: 0x7c
	// Line 1142, Address: 0x208018, Func Offset: 0x88
	// Line 1144, Address: 0x208030, Func Offset: 0xa0
	// Line 1146, Address: 0x20803c, Func Offset: 0xac
	// Line 1148, Address: 0x208044, Func Offset: 0xb4
	// Line 1149, Address: 0x208048, Func Offset: 0xb8
	// Line 1151, Address: 0x208054, Func Offset: 0xc4
	// Line 1154, Address: 0x208058, Func Offset: 0xc8
	// Line 1160, Address: 0x20806c, Func Offset: 0xdc
	// Line 1163, Address: 0x208088, Func Offset: 0xf8
	// Line 1164, Address: 0x208094, Func Offset: 0x104
	// Line 1165, Address: 0x2080a0, Func Offset: 0x110
	// Line 1170, Address: 0x2080a8, Func Offset: 0x118
	// Line 1174, Address: 0x2080b4, Func Offset: 0x124
	// Line 1177, Address: 0x2080c0, Func Offset: 0x130
	// Line 1180, Address: 0x2080d8, Func Offset: 0x148
	// Line 1181, Address: 0x2080e4, Func Offset: 0x154
	// Line 1184, Address: 0x2080ec, Func Offset: 0x15c
	// Line 1186, Address: 0x2080f0, Func Offset: 0x160
	// Line 1190, Address: 0x2080fc, Func Offset: 0x16c
	// Line 1199, Address: 0x208100, Func Offset: 0x170
	// Line 1201, Address: 0x208108, Func Offset: 0x178
	// Line 1202, Address: 0x208110, Func Offset: 0x180
	// Line 1209, Address: 0x208118, Func Offset: 0x188
	// Line 1204, Address: 0x20811c, Func Offset: 0x18c
	// Line 1209, Address: 0x208120, Func Offset: 0x190
	// Line 1207, Address: 0x208124, Func Offset: 0x194
	// Line 1204, Address: 0x208128, Func Offset: 0x198
	// Line 1205, Address: 0x20812c, Func Offset: 0x19c
	// Line 1206, Address: 0x208134, Func Offset: 0x1a4
	// Line 1209, Address: 0x208138, Func Offset: 0x1a8
	// Line 1212, Address: 0x208140, Func Offset: 0x1b0
	// Line 1211, Address: 0x208144, Func Offset: 0x1b4
	// Line 1212, Address: 0x208148, Func Offset: 0x1b8
	// Line 1213, Address: 0x20814c, Func Offset: 0x1bc
	// Line 1211, Address: 0x208158, Func Offset: 0x1c8
	// Line 1212, Address: 0x20815c, Func Offset: 0x1cc
	// Line 1211, Address: 0x208160, Func Offset: 0x1d0
	// Line 1212, Address: 0x208164, Func Offset: 0x1d4
	// Line 1211, Address: 0x208168, Func Offset: 0x1d8
	// Line 1213, Address: 0x208170, Func Offset: 0x1e0
	// Line 1215, Address: 0x208178, Func Offset: 0x1e8
	// Line 1217, Address: 0x20817c, Func Offset: 0x1ec
	// Line 1215, Address: 0x208180, Func Offset: 0x1f0
	// Line 1217, Address: 0x208184, Func Offset: 0x1f4
	// Line 1215, Address: 0x208188, Func Offset: 0x1f8
	// Line 1217, Address: 0x20818c, Func Offset: 0x1fc
	// Line 1245, Address: 0x208198, Func Offset: 0x208
	// Line 1248, Address: 0x2081ac, Func Offset: 0x21c
	// Line 1254, Address: 0x2081fc, Func Offset: 0x26c
	// Line 1249, Address: 0x208200, Func Offset: 0x270
	// Line 1255, Address: 0x20820c, Func Offset: 0x27c
	// Line 1249, Address: 0x208210, Func Offset: 0x280
	// Line 1258, Address: 0x208218, Func Offset: 0x288
	// Line 1249, Address: 0x20821c, Func Offset: 0x28c
	// Line 1260, Address: 0x208220, Func Offset: 0x290
	// Line 1264, Address: 0x208228, Func Offset: 0x298
	// Line 1263, Address: 0x20822c, Func Offset: 0x29c
	// Line 1265, Address: 0x208230, Func Offset: 0x2a0
	// Line 1266, Address: 0x208234, Func Offset: 0x2a4
	// Line 1267, Address: 0x208238, Func Offset: 0x2a8
	// Line 1268, Address: 0x20823c, Func Offset: 0x2ac
	// Line 1269, Address: 0x208240, Func Offset: 0x2b0
	// Line 1270, Address: 0x208244, Func Offset: 0x2b4
	// Line 1271, Address: 0x208248, Func Offset: 0x2b8
	// Line 1272, Address: 0x20824c, Func Offset: 0x2bc
	// Line 1273, Address: 0x208250, Func Offset: 0x2c0
	// Line 1274, Address: 0x208254, Func Offset: 0x2c4
	// Line 1275, Address: 0x208258, Func Offset: 0x2c8
	// Line 1276, Address: 0x20825c, Func Offset: 0x2cc
	// Line 1277, Address: 0x208260, Func Offset: 0x2d0
	// Line 1278, Address: 0x208264, Func Offset: 0x2d4
	// Line 1282, Address: 0x208268, Func Offset: 0x2d8
	// Line 1284, Address: 0x20826c, Func Offset: 0x2dc
	// Line 1285, Address: 0x208270, Func Offset: 0x2e0
	// Line 1286, Address: 0x20827c, Func Offset: 0x2ec
	// Line 1288, Address: 0x208280, Func Offset: 0x2f0
	// Line 1289, Address: 0x208284, Func Offset: 0x2f4
	// Line 1291, Address: 0x208290, Func Offset: 0x300
	// Line 1292, Address: 0x2082a0, Func Offset: 0x310
	// Line 1298, Address: 0x2082a8, Func Offset: 0x318
	// Line 1295, Address: 0x2082ac, Func Offset: 0x31c
	// Line 1299, Address: 0x2082b4, Func Offset: 0x324
	// Line 1300, Address: 0x2082b8, Func Offset: 0x328
	// Line 1301, Address: 0x2082bc, Func Offset: 0x32c
	// Line 1302, Address: 0x2082c0, Func Offset: 0x330
	// Line 1321, Address: 0x2082c4, Func Offset: 0x334
	// Line 1325, Address: 0x2082d0, Func Offset: 0x340
	// Line 1326, Address: 0x2082d4, Func Offset: 0x344
	// Line 1332, Address: 0x2082d8, Func Offset: 0x348
	// Line 1325, Address: 0x2082e0, Func Offset: 0x350
	// Line 1328, Address: 0x2082e4, Func Offset: 0x354
	// Line 1332, Address: 0x2082e8, Func Offset: 0x358
	// Line 1342, Address: 0x2082f0, Func Offset: 0x360
	// Line 1343, Address: 0x2082f4, Func Offset: 0x364
	// Line 1348, Address: 0x208300, Func Offset: 0x370
	// Line 1350, Address: 0x208310, Func Offset: 0x380
	// Line 1353, Address: 0x208328, Func Offset: 0x398
	// Line 1354, Address: 0x208330, Func Offset: 0x3a0
	// Line 1357, Address: 0x208338, Func Offset: 0x3a8
	// Line 1358, Address: 0x20833c, Func Offset: 0x3ac
	// Line 1360, Address: 0x208340, Func Offset: 0x3b0
	// Line 1362, Address: 0x208344, Func Offset: 0x3b4
	// Line 1363, Address: 0x208348, Func Offset: 0x3b8
	// Line 1364, Address: 0x20834c, Func Offset: 0x3bc
	// Line 1360, Address: 0x208350, Func Offset: 0x3c0
	// Line 1362, Address: 0x208360, Func Offset: 0x3d0
	// Line 1360, Address: 0x208368, Func Offset: 0x3d8
	// Line 1362, Address: 0x20836c, Func Offset: 0x3dc
	// Line 1363, Address: 0x208370, Func Offset: 0x3e0
	// Line 1362, Address: 0x208374, Func Offset: 0x3e4
	// Line 1363, Address: 0x208378, Func Offset: 0x3e8
	// Line 1364, Address: 0x208380, Func Offset: 0x3f0
	// Line 1363, Address: 0x20838c, Func Offset: 0x3fc
	// Line 1364, Address: 0x208390, Func Offset: 0x400
	// Line 1392, Address: 0x208394, Func Offset: 0x404
	// Line 1393, Address: 0x208398, Func Offset: 0x408
	// Line 1394, Address: 0x20839c, Func Offset: 0x40c
	// Line 1395, Address: 0x2083a0, Func Offset: 0x410
	// Line 1396, Address: 0x2083a4, Func Offset: 0x414
	// Line 1397, Address: 0x2083a8, Func Offset: 0x418
	// Line 1398, Address: 0x2083ac, Func Offset: 0x41c
	// Line 1399, Address: 0x2083b0, Func Offset: 0x420
	// Line 1401, Address: 0x2083b4, Func Offset: 0x424
	// Line 1402, Address: 0x2083b8, Func Offset: 0x428
	// Line 1403, Address: 0x2083bc, Func Offset: 0x42c
	// Line 1404, Address: 0x2083c0, Func Offset: 0x430
	// Line 1405, Address: 0x2083c4, Func Offset: 0x434
	// Line 1406, Address: 0x2083c8, Func Offset: 0x438
	// Line 1407, Address: 0x2083cc, Func Offset: 0x43c
	// Line 1409, Address: 0x2083d0, Func Offset: 0x440
	// Line 1410, Address: 0x2083d4, Func Offset: 0x444
	// Line 1411, Address: 0x2083d8, Func Offset: 0x448
	// Line 1412, Address: 0x2083dc, Func Offset: 0x44c
	// Line 1413, Address: 0x2083e0, Func Offset: 0x450
	// Line 1414, Address: 0x2083e4, Func Offset: 0x454
	// Line 1416, Address: 0x2083e8, Func Offset: 0x458
	// Line 1417, Address: 0x2083ec, Func Offset: 0x45c
	// Line 1418, Address: 0x2083f0, Func Offset: 0x460
	// Line 1419, Address: 0x2083f4, Func Offset: 0x464
	// Line 1421, Address: 0x2083f8, Func Offset: 0x468
	// Line 1422, Address: 0x2083fc, Func Offset: 0x46c
	// Line 1423, Address: 0x208400, Func Offset: 0x470
	// Line 1424, Address: 0x208404, Func Offset: 0x474
	// Line 1426, Address: 0x208408, Func Offset: 0x478
	// Line 1427, Address: 0x20840c, Func Offset: 0x47c
	// Line 1428, Address: 0x208410, Func Offset: 0x480
	// Line 1429, Address: 0x208414, Func Offset: 0x484
	// Line 1460, Address: 0x208418, Func Offset: 0x488
	// Line 1461, Address: 0x20841c, Func Offset: 0x48c
	// Line 1462, Address: 0x208420, Func Offset: 0x490
	// Line 1463, Address: 0x208424, Func Offset: 0x494
	// Line 1468, Address: 0x208428, Func Offset: 0x498
	// Line 1469, Address: 0x20842c, Func Offset: 0x49c
	// Line 1470, Address: 0x208430, Func Offset: 0x4a0
	// Line 1471, Address: 0x208434, Func Offset: 0x4a4
	// Line 1472, Address: 0x208438, Func Offset: 0x4a8
	// Line 1473, Address: 0x20843c, Func Offset: 0x4ac
	// Line 1474, Address: 0x208440, Func Offset: 0x4b0
	// Line 1475, Address: 0x208444, Func Offset: 0x4b4
	// Line 1476, Address: 0x208448, Func Offset: 0x4b8
	// Line 1477, Address: 0x20844c, Func Offset: 0x4bc
	// Line 1478, Address: 0x208450, Func Offset: 0x4c0
	// Line 1479, Address: 0x208454, Func Offset: 0x4c4
	// Line 1481, Address: 0x208458, Func Offset: 0x4c8
	// Line 1482, Address: 0x20845c, Func Offset: 0x4cc
	// Line 1483, Address: 0x208460, Func Offset: 0x4d0
	// Line 1484, Address: 0x208464, Func Offset: 0x4d4
	// Line 1486, Address: 0x20846c, Func Offset: 0x4dc
	// Line 1496, Address: 0x208470, Func Offset: 0x4e0
	// Line 1497, Address: 0x208474, Func Offset: 0x4e4
	// Line 1496, Address: 0x208478, Func Offset: 0x4e8
	// Line 1497, Address: 0x20847c, Func Offset: 0x4ec
	// Line 1496, Address: 0x208480, Func Offset: 0x4f0
	// Line 1497, Address: 0x208484, Func Offset: 0x4f4
	// Line 1498, Address: 0x208488, Func Offset: 0x4f8
	// Line 1504, Address: 0x208490, Func Offset: 0x500
	// Line 1507, Address: 0x208494, Func Offset: 0x504
	// Line 1508, Address: 0x208498, Func Offset: 0x508
	// Line 1509, Address: 0x20849c, Func Offset: 0x50c
	// Line 1511, Address: 0x2084a0, Func Offset: 0x510
	// Line 1512, Address: 0x2084a4, Func Offset: 0x514
	// Line 1513, Address: 0x2084a8, Func Offset: 0x518
	// Line 1514, Address: 0x2084ac, Func Offset: 0x51c
	// Line 1515, Address: 0x2084b0, Func Offset: 0x520
	// Line 1516, Address: 0x2084b4, Func Offset: 0x524
	// Line 1517, Address: 0x2084b8, Func Offset: 0x528
	// Line 1518, Address: 0x2084bc, Func Offset: 0x52c
	// Line 1520, Address: 0x2084c0, Func Offset: 0x530
	// Line 1521, Address: 0x2084c4, Func Offset: 0x534
	// Line 1522, Address: 0x2084c8, Func Offset: 0x538
	// Line 1523, Address: 0x2084cc, Func Offset: 0x53c
	// Line 1524, Address: 0x2084d0, Func Offset: 0x540
	// Line 1525, Address: 0x2084d4, Func Offset: 0x544
	// Line 1526, Address: 0x2084d8, Func Offset: 0x548
	// Line 1527, Address: 0x2084dc, Func Offset: 0x54c
	// Line 1529, Address: 0x2084e0, Func Offset: 0x550
	// Line 1530, Address: 0x2084e4, Func Offset: 0x554
	// Line 1531, Address: 0x2084e8, Func Offset: 0x558
	// Line 1532, Address: 0x2084ec, Func Offset: 0x55c
	// Line 1535, Address: 0x2084f4, Func Offset: 0x564
	// Line 1536, Address: 0x2084f8, Func Offset: 0x568
	// Line 1537, Address: 0x2084fc, Func Offset: 0x56c
	// Line 1538, Address: 0x208500, Func Offset: 0x570
	// Line 1539, Address: 0x208504, Func Offset: 0x574
	// Line 1540, Address: 0x208508, Func Offset: 0x578
	// Line 1541, Address: 0x20850c, Func Offset: 0x57c
	// Line 1542, Address: 0x208510, Func Offset: 0x580
	// Line 1543, Address: 0x208514, Func Offset: 0x584
	// Line 1549, Address: 0x208518, Func Offset: 0x588
	// Line 1550, Address: 0x20851c, Func Offset: 0x58c
	// Line 1551, Address: 0x208520, Func Offset: 0x590
	// Line 1557, Address: 0x208528, Func Offset: 0x598
	// Line 1558, Address: 0x20852c, Func Offset: 0x59c
	// Line 1559, Address: 0x208530, Func Offset: 0x5a0
	// Line 1560, Address: 0x208534, Func Offset: 0x5a4
	// Line 1561, Address: 0x208538, Func Offset: 0x5a8
	// Line 1563, Address: 0x20853c, Func Offset: 0x5ac
	// Line 1564, Address: 0x208540, Func Offset: 0x5b0
	// Line 1565, Address: 0x208544, Func Offset: 0x5b4
	// Line 1566, Address: 0x208548, Func Offset: 0x5b8
	// Line 1567, Address: 0x20854c, Func Offset: 0x5bc
	// Line 1568, Address: 0x208550, Func Offset: 0x5c0
	// Line 1570, Address: 0x208554, Func Offset: 0x5c4
	// Line 1571, Address: 0x208558, Func Offset: 0x5c8
	// Line 1572, Address: 0x20855c, Func Offset: 0x5cc
	// Line 1573, Address: 0x208560, Func Offset: 0x5d0
	// Line 1574, Address: 0x208564, Func Offset: 0x5d4
	// Line 1575, Address: 0x208568, Func Offset: 0x5d8
	// Line 1582, Address: 0x20856c, Func Offset: 0x5dc
	// Line 1583, Address: 0x208570, Func Offset: 0x5e0
	// Line 1584, Address: 0x208574, Func Offset: 0x5e4
	// Line 1585, Address: 0x208578, Func Offset: 0x5e8
	// Line 1587, Address: 0x20857c, Func Offset: 0x5ec
	// Line 1588, Address: 0x208580, Func Offset: 0x5f0
	// Line 1589, Address: 0x208584, Func Offset: 0x5f4
	// Line 1590, Address: 0x208588, Func Offset: 0x5f8
	// Line 1592, Address: 0x20858c, Func Offset: 0x5fc
	// Line 1593, Address: 0x208590, Func Offset: 0x600
	// Line 1594, Address: 0x208594, Func Offset: 0x604
	// Line 1595, Address: 0x208598, Func Offset: 0x608
	// Line 1601, Address: 0x20859c, Func Offset: 0x60c
	// Line 1602, Address: 0x2085a0, Func Offset: 0x610
	// Line 1603, Address: 0x2085a4, Func Offset: 0x614
	// Line 1605, Address: 0x2085a8, Func Offset: 0x618
	// Line 1607, Address: 0x2085b4, Func Offset: 0x624
	// Line 1609, Address: 0x2085b8, Func Offset: 0x628
	// Line 1614, Address: 0x2085d0, Func Offset: 0x640
	// Line 1616, Address: 0x2085dc, Func Offset: 0x64c
	// Line 1619, Address: 0x2085f4, Func Offset: 0x664
	// Line 1620, Address: 0x2085fc, Func Offset: 0x66c
	// Line 1621, Address: 0x208604, Func Offset: 0x674
	// Line 1623, Address: 0x208608, Func Offset: 0x678
	// Line 1627, Address: 0x20860c, Func Offset: 0x67c
	// Line 1630, Address: 0x208610, Func Offset: 0x680
	// Line 1631, Address: 0x208614, Func Offset: 0x684
	// Line 1633, Address: 0x208620, Func Offset: 0x690
	// Line 1638, Address: 0x208628, Func Offset: 0x698
	// Line 1639, Address: 0x208634, Func Offset: 0x6a4
	// Line 1646, Address: 0x208640, Func Offset: 0x6b0
	// Func End, Address: 0x208670, Func Offset: 0x6e0
}

// xShadowReceiveShadowSetup__FP4xEnt
// Start address: 0x208670
uint32 xShadowReceiveShadowSetup(xEnt* ent)
{
	// Line 995, Address: 0x208670, Func Offset: 0
	// Line 1007, Address: 0x20867c, Func Offset: 0xc
	// Line 1012, Address: 0x20869c, Func Offset: 0x2c
	// Line 1017, Address: 0x2086ac, Func Offset: 0x3c
	// Line 1029, Address: 0x2086c0, Func Offset: 0x50
	// Line 1035, Address: 0x2086c8, Func Offset: 0x58
	// Line 1036, Address: 0x2086d0, Func Offset: 0x60
	// Func End, Address: 0x2086dc, Func Offset: 0x6c
}

// modelRenderCB__FPv
// Start address: 0x2086e0
void modelRenderCB(void* model)
{
	// Line 941, Address: 0x2086e0, Func Offset: 0
	// Func End, Address: 0x2086e8, Func Offset: 0x8
}

// xShadowRenderWorld__FP5xVec3ff
// Start address: 0x2086f0
void xShadowRenderWorld(xVec3* center, float32 radius, float32 max_dist)
{
	RpIntersection shadowZone;
	float32 fadeDistance;
	xSphere zone;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	xVec3* at;
	xVec3* up;
	xVec3* rt;
	xRay3 R[1];
	xCollis entcoll[1];
	xCollis envcoll[1];
	float32 sf[2][3];
	uint32 hit_env;
	uint32 hit_ent;
	float32 ent_dist;
	float32 env_dist;
	xVec3 ent_pos;
	xVec3 env_pos;
	int32 i;
	xQCData q;
	// Line 717, Address: 0x2086f0, Func Offset: 0
	// Line 751, Address: 0x2086f4, Func Offset: 0x4
	// Line 717, Address: 0x2086f8, Func Offset: 0x8
	// Line 751, Address: 0x2086fc, Func Offset: 0xc
	// Line 717, Address: 0x208700, Func Offset: 0x10
	// Line 751, Address: 0x208704, Func Offset: 0x14
	// Line 717, Address: 0x208708, Func Offset: 0x18
	// Line 767, Address: 0x208720, Func Offset: 0x30
	// Line 717, Address: 0x208724, Func Offset: 0x34
	// Line 767, Address: 0x208728, Func Offset: 0x38
	// Line 717, Address: 0x20872c, Func Offset: 0x3c
	// Line 772, Address: 0x208730, Func Offset: 0x40
	// Line 717, Address: 0x208734, Func Offset: 0x44
	// Line 751, Address: 0x208740, Func Offset: 0x50
	// Line 734, Address: 0x208750, Func Offset: 0x60
	// Line 768, Address: 0x208754, Func Offset: 0x64
	// Line 734, Address: 0x20875c, Func Offset: 0x6c
	// Line 769, Address: 0x208760, Func Offset: 0x70
	// Line 735, Address: 0x208764, Func Offset: 0x74
	// Line 751, Address: 0x208768, Func Offset: 0x78
	// Line 736, Address: 0x208770, Func Offset: 0x80
	// Line 766, Address: 0x208774, Func Offset: 0x84
	// Line 737, Address: 0x208778, Func Offset: 0x88
	// Line 770, Address: 0x20877c, Func Offset: 0x8c
	// Line 771, Address: 0x208788, Func Offset: 0x98
	// Line 772, Address: 0x208790, Func Offset: 0xa0
	// Line 774, Address: 0x208798, Func Offset: 0xa8
	// Line 776, Address: 0x2087a8, Func Offset: 0xb8
	// Line 774, Address: 0x2087ac, Func Offset: 0xbc
	// Line 783, Address: 0x2087b0, Func Offset: 0xc0
	// Line 780, Address: 0x2087b4, Func Offset: 0xc4
	// Line 783, Address: 0x2087b8, Func Offset: 0xc8
	// Line 774, Address: 0x2087c4, Func Offset: 0xd4
	// Line 775, Address: 0x2087d8, Func Offset: 0xe8
	// Line 776, Address: 0x2087f0, Func Offset: 0x100
	// Line 777, Address: 0x208830, Func Offset: 0x140
	// Line 778, Address: 0x208870, Func Offset: 0x180
	// Line 779, Address: 0x208874, Func Offset: 0x184
	// Line 783, Address: 0x208878, Func Offset: 0x188
	// Line 793, Address: 0x208880, Func Offset: 0x190
	// Line 794, Address: 0x208894, Func Offset: 0x1a4
	// Line 793, Address: 0x208898, Func Offset: 0x1a8
	// Line 794, Address: 0x20889c, Func Offset: 0x1ac
	// Line 793, Address: 0x2088a0, Func Offset: 0x1b0
	// Line 794, Address: 0x2088a4, Func Offset: 0x1b4
	// Line 795, Address: 0x2088d4, Func Offset: 0x1e4
	// Line 796, Address: 0x20891c, Func Offset: 0x22c
	// Line 797, Address: 0x208964, Func Offset: 0x274
	// Line 798, Address: 0x208994, Func Offset: 0x2a4
	// Line 799, Address: 0x20899c, Func Offset: 0x2ac
	// Line 800, Address: 0x2089a8, Func Offset: 0x2b8
	// Line 804, Address: 0x2089b8, Func Offset: 0x2c8
	// Line 805, Address: 0x2089c0, Func Offset: 0x2d0
	// Line 804, Address: 0x2089c4, Func Offset: 0x2d4
	// Line 805, Address: 0x2089cc, Func Offset: 0x2dc
	// Line 804, Address: 0x2089d0, Func Offset: 0x2e0
	// Line 805, Address: 0x2089d4, Func Offset: 0x2e4
	// Line 804, Address: 0x2089d8, Func Offset: 0x2e8
	// Line 805, Address: 0x2089dc, Func Offset: 0x2ec
	// Line 804, Address: 0x2089e0, Func Offset: 0x2f0
	// Line 805, Address: 0x2089e4, Func Offset: 0x2f4
	// Line 806, Address: 0x2089fc, Func Offset: 0x30c
	// Line 807, Address: 0x208a2c, Func Offset: 0x33c
	// Line 808, Address: 0x208a34, Func Offset: 0x344
	// Line 809, Address: 0x208a40, Func Offset: 0x350
	// Line 812, Address: 0x208a50, Func Offset: 0x360
	// Line 817, Address: 0x208a70, Func Offset: 0x380
	// Line 819, Address: 0x208a80, Func Offset: 0x390
	// Line 818, Address: 0x208a8c, Func Offset: 0x39c
	// Line 819, Address: 0x208a90, Func Offset: 0x3a0
	// Line 820, Address: 0x208aa0, Func Offset: 0x3b0
	// Line 819, Address: 0x208aa4, Func Offset: 0x3b4
	// Line 820, Address: 0x208aac, Func Offset: 0x3bc
	// Line 819, Address: 0x208ab0, Func Offset: 0x3c0
	// Line 820, Address: 0x208ab4, Func Offset: 0x3c4
	// Line 824, Address: 0x208aec, Func Offset: 0x3fc
	// Line 825, Address: 0x208af0, Func Offset: 0x400
	// Line 827, Address: 0x208b10, Func Offset: 0x420
	// Line 829, Address: 0x208b20, Func Offset: 0x430
	// Line 828, Address: 0x208b2c, Func Offset: 0x43c
	// Line 829, Address: 0x208b30, Func Offset: 0x440
	// Line 830, Address: 0x208b40, Func Offset: 0x450
	// Line 829, Address: 0x208b44, Func Offset: 0x454
	// Line 830, Address: 0x208b4c, Func Offset: 0x45c
	// Line 829, Address: 0x208b50, Func Offset: 0x460
	// Line 830, Address: 0x208b54, Func Offset: 0x464
	// Line 881, Address: 0x208b8c, Func Offset: 0x49c
	// Line 888, Address: 0x208ba0, Func Offset: 0x4b0
	// Line 891, Address: 0x208be4, Func Offset: 0x4f4
	// Line 892, Address: 0x208bf0, Func Offset: 0x500
	// Line 893, Address: 0x208c18, Func Offset: 0x528
	// Line 894, Address: 0x208c28, Func Offset: 0x538
	// Line 895, Address: 0x208c50, Func Offset: 0x560
	// Line 897, Address: 0x208c60, Func Offset: 0x570
	// Line 898, Address: 0x208c70, Func Offset: 0x580
	// Line 899, Address: 0x208c7c, Func Offset: 0x58c
	// Line 898, Address: 0x208c80, Func Offset: 0x590
	// Line 904, Address: 0x208c88, Func Offset: 0x598
	// Line 909, Address: 0x208c90, Func Offset: 0x5a0
	// Line 912, Address: 0x208c98, Func Offset: 0x5a8
	// Line 913, Address: 0x208c9c, Func Offset: 0x5ac
	// Line 934, Address: 0x208ca0, Func Offset: 0x5b0
	// Line 913, Address: 0x208ca4, Func Offset: 0x5b4
	// Line 934, Address: 0x208ca8, Func Offset: 0x5b8
	// Line 913, Address: 0x208cac, Func Offset: 0x5bc
	// Line 912, Address: 0x208cb0, Func Offset: 0x5c0
	// Line 914, Address: 0x208cb4, Func Offset: 0x5c4
	// Line 934, Address: 0x208cb8, Func Offset: 0x5c8
	// Line 925, Address: 0x208cc0, Func Offset: 0x5d0
	// Line 913, Address: 0x208cc4, Func Offset: 0x5d4
	// Line 934, Address: 0x208cd0, Func Offset: 0x5e0
	// Line 937, Address: 0x208cd8, Func Offset: 0x5e8
	// Func End, Address: 0x208d10, Func Offset: 0x620
}

// xShadowCameraUpdate__FPvPFPv_vP5xVec3fi
// Start address: 0x208d10
void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, float32 radius, int32 shadowMode)
{
	// Line 596, Address: 0x208d10, Func Offset: 0
	// Line 606, Address: 0x208d3c, Func Offset: 0x2c
	// Line 655, Address: 0x208d4c, Func Offset: 0x3c
	// Line 675, Address: 0x208d68, Func Offset: 0x58
	// Line 690, Address: 0x208d70, Func Offset: 0x60
	// Func End, Address: 0x208d90, Func Offset: 0x80
}

// xShadowSetLight__FP5xVec3P5xVec3f
// Start address: 0x208d90
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec)
{
	xVec3 zvec;
	xMat4x3 matrix;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	// Line 539, Address: 0x208d90, Func Offset: 0
	// Line 542, Address: 0x208da4, Func Offset: 0x14
	// Line 545, Address: 0x208dac, Func Offset: 0x1c
	// Line 547, Address: 0x208db8, Func Offset: 0x28
	// Line 549, Address: 0x208dbc, Func Offset: 0x2c
	// Line 551, Address: 0x208dc0, Func Offset: 0x30
	// Line 547, Address: 0x208dc8, Func Offset: 0x38
	// Line 549, Address: 0x208ddc, Func Offset: 0x4c
	// Line 550, Address: 0x208de0, Func Offset: 0x50
	// Line 551, Address: 0x208de4, Func Offset: 0x54
	// Line 555, Address: 0x208dec, Func Offset: 0x5c
	// Line 558, Address: 0x208df4, Func Offset: 0x64
	// Line 561, Address: 0x208dfc, Func Offset: 0x6c
	// Line 562, Address: 0x208e04, Func Offset: 0x74
	// Func End, Address: 0x208e18, Func Offset: 0x88
}

// xShadowSetWorld__FP7RpWorld
// Start address: 0x208e20
void xShadowSetWorld(RpWorld* world)
{
	// Line 495, Address: 0x208e20, Func Offset: 0
	// Line 500, Address: 0x208e28, Func Offset: 0x8
	// Line 505, Address: 0x208e30, Func Offset: 0x10
	// Line 534, Address: 0x208e38, Func Offset: 0x18
	// Func End, Address: 0x208e44, Func Offset: 0x24
}

// SetupShadow__Fv
// Start address: 0x208e50
int32 SetupShadow()
{
	int32 res;
	// Line 364, Address: 0x208e50, Func Offset: 0
	// Line 375, Address: 0x208e60, Func Offset: 0x10
	// Line 376, Address: 0x208e68, Func Offset: 0x18
	// Line 377, Address: 0x208e6c, Func Offset: 0x1c
	// Line 393, Address: 0x208e84, Func Offset: 0x34
	// Line 397, Address: 0x208f08, Func Offset: 0xb8
	// Line 399, Address: 0x208f10, Func Offset: 0xc0
	// Line 416, Address: 0x208f18, Func Offset: 0xc8
	// Line 417, Address: 0x208f2c, Func Offset: 0xdc
	// Line 419, Address: 0x208f34, Func Offset: 0xe4
	// Line 420, Address: 0x208f3c, Func Offset: 0xec
	// Line 422, Address: 0x208f40, Func Offset: 0xf0
	// Line 445, Address: 0x208f48, Func Offset: 0xf8
	// Line 446, Address: 0x208f50, Func Offset: 0x100
	// Func End, Address: 0x208f64, Func Offset: 0x114
}

// xShadowInit__Fv
// Start address: 0x208f70
void xShadowInit()
{
	RwFrame* frame;
	// Line 199, Address: 0x208f70, Func Offset: 0
	// Line 200, Address: 0x208f78, Func Offset: 0x8
	// Line 203, Address: 0x208f80, Func Offset: 0x10
	// Line 218, Address: 0x208f8c, Func Offset: 0x1c
	// Line 221, Address: 0x208f94, Func Offset: 0x24
	// Line 222, Address: 0x208fa0, Func Offset: 0x30
	// Line 223, Address: 0x208fb0, Func Offset: 0x40
	// Line 224, Address: 0x208fb8, Func Offset: 0x48
	// Line 236, Address: 0x208fc4, Func Offset: 0x54
	// Func End, Address: 0x208fd0, Func Offset: 0x60
}

