typedef struct RpAtomic;
typedef struct RwObjectHasFrame;
typedef struct xAnimActiveEffect;
typedef struct xBBox;
typedef struct xParCmdKillDistance;
typedef struct xParCmd;
typedef struct xAnimFile;
typedef struct xBase;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimSingle;
typedef struct RwRaster;
typedef struct xEntMotionOrbitData;
typedef struct xEntFrame;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xParGroup;
typedef struct _zEnv;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct xVec3;
typedef struct _tagPadAnalog;
typedef struct RpPolygon;
typedef struct xPar;
typedef struct xEnv;
typedef struct zEnt;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xUpdateCullMgr;
typedef struct RpMaterialList;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xParCmdTex;
typedef struct iEnv;
typedef struct _class_0;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineNodeParam;
typedef struct xAnimMultiFileBase;
typedef struct xSurface;
typedef struct zJumpParam;
typedef struct RpMaterial;
typedef struct _tagEmitSphere;
typedef struct RxHeap;
typedef struct xEntAsset;
typedef struct xModelInstance;
typedef struct xAnimEffect;
typedef struct RwRGBA;
typedef struct xAnimTransition;
typedef struct RwBBox;
typedef struct xLightKit;
typedef struct xGroupAsset;
typedef struct _zPortal;
typedef struct xModelBucket;
typedef struct xQuat;
typedef struct xParCmdJet;
typedef struct xClumpCollBSPBranchNode;
typedef struct _tagiPad;
typedef struct RpWorld;
typedef struct xGridBound;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xEnt;
typedef struct xEntMechData;
typedef struct rxHeapBlockHeader;
typedef struct xLinkAsset;
typedef struct xPortalAsset;
typedef struct RpClump;
typedef struct xEntMotionSplineData;
typedef struct RpGeometry;
typedef struct xAnimPlay;
typedef struct xVolume;
typedef struct RpWorldSector;
typedef struct RxPipelineRequiresCluster;
typedef struct xQCControl;
typedef struct xAnimMultiFile;
typedef struct xJSPHeader;
typedef struct RpMorphTarget;
typedef struct _tagEmitRect;
typedef struct xParCmdAsset;
typedef struct xParCmdApplyCamMat;
typedef struct zPlatform;
typedef struct xVec4;
typedef struct xScene;
typedef struct xCoef3;
typedef struct RpVertexNormal;
typedef struct xEntMotionMPData;
typedef struct zEntHangable;
typedef struct zGlobals;
typedef struct xEntERData;
typedef struct _tagxRumble;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xMat4x3;
typedef struct xMovePoint;
typedef struct rxReq;
typedef struct zGlobalSettings;
typedef struct zCutsceneMgr;
typedef struct xParEmitterAsset;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct zAssetPickupTable;
typedef struct xShadowSimplePoly;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct xMovePointAsset;
typedef struct xLightKitLight;
typedef struct zPlayerLassoInfo;
typedef struct xPEEntBound;
typedef struct zScene;
typedef struct _tagEmitLine;
typedef struct xEnvAsset;
typedef struct _class_1;
typedef struct xVolumeAsset;
typedef struct zLedgeGrabParams;
typedef struct xGroup;
typedef struct xEntBoulder;
typedef struct xUpdateCullEnt;
typedef struct RpTriangle;
typedef enum RxNodeDefEditable;
typedef struct xEntMotionMechData;
typedef enum RxClusterValid;
typedef struct xAnimTable;
typedef struct xEntCollis;
typedef struct xRot;
typedef struct RpLight;
typedef enum _zPlayerWallJumpState;
typedef struct xEntPenData;
typedef struct xMemPool;
typedef struct xSpline3;
typedef struct xShadowSimpleCache;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntDrive;
typedef enum _tagRumbleType;
typedef enum RwCameraProjection;
typedef enum _zPlayerType;
typedef enum RxClusterForcePresent;
typedef struct xEntOrbitData;
typedef struct xCylinder;
typedef struct xCollis;
typedef struct _tagEmitVolume;
typedef struct xParCmdDamagePlayer;
typedef struct xBox;
typedef struct analog_data;
typedef struct zPlatFMRunTime;
typedef struct RxClusterDefinition;
typedef struct xFFX;
typedef struct xEntMotion;
typedef struct xUpdateCullGroup;
typedef struct zLasso;
typedef struct xPlatformAsset;
typedef struct xModelPool;
typedef struct xBound;
typedef struct xEntMotionAsset;
typedef enum RpWorldRenderOrder;
typedef struct RwFrame;
typedef struct RwSphere;
typedef struct xAnimTransitionList;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct RwTexture;
typedef struct _tagEmitOffsetPoint;
typedef struct RpSector;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef struct xEntSplineData;
typedef struct zPlayerCarryInfo;
typedef struct xMat3x3;
typedef struct zPlayerSettings;
typedef struct xBaseAsset;
typedef struct RxClusterRef;
typedef struct xEntMotionPenData;
typedef struct RwCamera;
typedef struct xCoef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct tri_data_0;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPVertInfo;
typedef struct xPEVCyl;
typedef struct xVec2;
typedef struct xCamera;
typedef struct xEntMPData;
typedef struct RxNodeMethods;
typedef struct zVolume;
typedef struct xClumpCollBSPTriangle;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xModelTag;
typedef struct xEntMotionERData;
typedef struct RxCluster;
typedef struct xPEEntBone;
typedef struct _tagxPad;
typedef struct RxPacket;
typedef struct iFogParams;
typedef union _class_2;
typedef enum RwFogType;
typedef enum _tagPadState;
typedef struct RwRGBAReal;
typedef struct tri_data_1;
typedef struct xGlobals;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;
typedef struct xPECircle;
typedef struct RpInterpolator;
typedef struct xQCData;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_7)(void*, xParGroup*);
typedef u32(*type_8)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_17)(xParCmd*, xParGroup*, f32);
typedef u32(*type_19)(RxPipelineNode*, u32, u32, void*);
typedef u32(*type_20)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_24)(RxNodeDefinition*);
typedef void(*type_25)(RxNodeDefinition*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef s32(*type_30)(RxPipelineNode*);
typedef void(*type_34)(xAnimState*, xAnimSingle*, void*);
typedef u32(*type_39)(void*, void*);
typedef xBase*(*type_40)(u32);
typedef s8*(*type_43)(xBase*);
typedef void(*type_46)(void*);
typedef s8*(*type_47)(u32);
typedef void(*type_50)(xEnt*, xScene*, f32);
typedef void(*type_51)(xAnimPlay*, xAnimState*);
typedef void(*type_52)(xParCmd*, xParGroup*, f32);
typedef void(*type_54)(xEnt*, xVec3*);
typedef void(*type_56)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_57)(xEnt*, xScene*, f32, xEntFrame*);
typedef RpAtomic*(*type_58)(RpAtomic*);
typedef void(*type_60)(xEnt*);
typedef void(*type_62)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_63)(xParCmd*, xParGroup*, f32);
typedef s32(*type_67)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_68)(xParCmd*, xParGroup*, f32);
typedef u32(*type_70)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_71)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_73)(xParCmd*, xParGroup*, f32);
typedef void(*type_83)(xParCmd*, xParGroup*, f32);
typedef void(*type_90)(xParCmd*, xParGroup*, f32);
typedef RpWorldSector*(*type_91)(RpWorldSector*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void(*type_96)(xParCmd*, xParGroup*, f32);
typedef void(*type_100)(xMemPool*, void*);
typedef void(*type_107)(RwResEntry*);

typedef xBase* type_2[72];
typedef f32 type_4[2];
typedef s8 type_5[128];
typedef type_5 type_6[6];
typedef u8 type_9[14];
typedef xModelTag type_11[4];
typedef f32 type_12[2];
typedef u16 type_13[3];
typedef s8 type_14[32];
typedef u8 type_15[4];
typedef xModelInstance* type_16[14];
typedef RwFrustumPlane type_18[6];
typedef u8 type_21[4];
typedef RwV3d type_23[8];
typedef u8 type_26[2];
typedef u8 type_27[2];
typedef xAnimMultiFileEntry type_29[1];
typedef s8 type_31[4];
typedef u8 type_32[3];
typedef u8 type_33[22];
typedef s8 type_35[16];
typedef u8 type_36[22];
typedef RwTexCoords* type_37[8];
typedef f32 type_38[4];
typedef f32 type_41[4];
typedef s8 type_42[16];
typedef xVec3 type_44[3];
typedef f32 type_45[4];
typedef f32 type_48[16];
typedef u8 type_49[3];
typedef u8 type_53[2];
typedef u16 type_55[3];
typedef xVec3 type_59[60];
typedef u8 type_61[2];
typedef xVec3 type_64[5];
typedef f32 type_65[22];
typedef u8 type_66[5];
typedef f32 type_69[22];
typedef u32 type_72[15];
typedef RpLight* type_74[2];
typedef u32 type_75[15];
typedef f32 type_76[12];
typedef RwFrame* type_77[2];
typedef u32 type_78[4];
typedef f32 type_79[12];
typedef u32 type_80[15];
typedef f32 type_81[12];
typedef u8 type_82[3];
typedef xVec3 type_84[4];
typedef f32 type_85[12];
typedef RwTexCoords* type_86[8];
typedef f32 type_87[12];
typedef analog_data type_88[2];
typedef f32 type_89[12];
typedef f32 type_93[4];
typedef u8 type_94[2];
typedef xCollis type_95[18];
typedef s8 type_97[64];
typedef u8 type_98[2];
typedef u32 type_99[2];
typedef u8 type_101[2];
typedef f32 type_102[6];
typedef zVolume* type_103[32];
typedef s8 type_104[32];
typedef f32 type_105[3];
typedef s8 type_106[32];
typedef f32 type_108[3];
typedef xModelTag type_109[2];
typedef xVec4 type_110[12];
typedef f32 type_111[3];
typedef xEnt* type_112[111];
typedef RxCluster type_113[1];
typedef f32 type_114[4];
typedef u32 type_115[72];

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_58 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xParCmdKillDistance : xParCmdAsset
{
	f32 dSqr;
	u32 kill_greater_than;
};

struct xParCmd
{
	u32 flag;
	xParCmdAsset* tasset;
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
	type_27 NumAnims;
	void** RawData;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_67 eventFunc;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_12 BilinearLerp;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
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

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	s32 m_num_of_particles;
	u8 m_alive;
	u8 m_killWhenDead;
	u8 m_active;
	u8 m_visible;
	u8 m_culled;
	u8 m_priority;
	u8 m_flags;
	u8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	type_7 draw;
	xParCmdTex* m_cmdTex;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_51 BeforeEnter;
	type_34 StateCallback;
	type_62 BeforeAnimMatrices;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RpPolygon
{
	u16 matIndex;
	type_13 vertIndex;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	f32 m_lifetime;
	type_15 m_c;
	xVec3 m_pos;
	f32 m_size;
	xVec3 m_vel;
	f32 m_sizeVel;
	u8 m_flag;
	u8 m_mode;
	type_26 m_texIdx;
	type_32 m_rotdeg;
	u8 pad8;
	f32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_41 m_cvel;
	type_45 m_cfl;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_46 activateCB;
	type_46 deactivateCB;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xParCmdTex : xParCmdAsset
{
	f32 x1;
	f32 y1;
	f32 x2;
	f32 y2;
	u8 birthMode;
	u8 rows;
	u8 cols;
	u8 unit_count;
	f32 unit_width;
	f32 unit_height;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_74 light;
	type_77 light_frame;
	s32 memlvl;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimMultiFileBase
{
	u32 Count;
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
	type_82 pad;
	void* moprops;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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

struct _tagEmitSphere
{
	f32 radius;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_8 Callback;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_20 Conditional;
	type_20 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xParCmdJet : xParCmdAsset
{
	xVec3 center;
	xVec3 acc;
	f32 gravity;
	f32 epsilon;
	f32 radiusSqr;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct _tagiPad
{
	s32 port;
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
	type_91 renderCallBack;
	RxPipeline* pipeline;
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
	type_50 update;
	type_50 endUpdate;
	type_54 bupdate;
	type_57 move;
	type_60 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_71 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_78 pad;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_38 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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

struct xEntMotionSplineData
{
	s32 unknown;
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
	type_86 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_62 BeforeAnimMatrices;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_37 texCoords;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_29 Files;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct xParCmdAsset
{
	u32 type;
	u8 enabled;
	u8 mode;
	type_61 pad;
};

struct xParCmdApplyCamMat : xParCmdAsset
{
	xVec3 apply;
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

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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
	type_40 resolvID;
	type_43 base2Name;
	type_47 id2Name;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
};

struct zEntHangable
{
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

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_53 pad;
	f32 delay;
	xSpline3* spl;
};

struct rxReq
{
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
	type_98 PowerUp;
	type_101 InitialPowerUp;
};

struct zCutsceneMgr
{
};

struct xParEmitterAsset : xBaseAsset
{
	u8 emit_flags;
	u8 emit_type;
	u16 pad;
	u32 propID;
	union
	{
		xPECircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
		xPEVCyl e_vcyl;
		xPEEntBone e_entbone;
		xPEEntBound e_entbound;
	};
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	u32 cull_mode;
	f32 cull_dist_sqr;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zAssetPickupTable
{
};

struct xShadowSimplePoly
{
	type_44 vert;
	xVec3 norm;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_107 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_48 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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

struct xPEEntBound
{
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
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
	type_115 baseCount;
	type_2 baseList;
	_zEnv* zen;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
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

struct _class_1
{
	xVec3* verts;
};

struct xVolumeAsset : xBaseAsset
{
	u32 flags;
	xBound bound;
	f32 rot;
	f32 xpivot;
	f32 zpivot;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_59 tranTable;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xEntBoulder
{
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_39 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpTriangle
{
	type_55 vertIndex;
	s16 matIndex;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_95 colls;
	type_56 post;
	type_70 depenq;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_100 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	type_84 corner;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
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
		_class_0 tuv;
		tri_data_1 tri;
	};
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct xParCmdDamagePlayer : xParCmdAsset
{
	s32 damage;
	s32 granular;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_76 tmrs;
	type_79 ttms;
	type_81 atms;
	type_85 dtms;
	type_87 vms;
	type_89 dss;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xFFX
{
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

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
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
	type_64 lastRefs;
	type_66 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xPlatformAsset
{
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_49 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_109 BubbleWandTag;
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
	type_11 HangPawTag;
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
	type_72 Inv_PatsSock;
	type_75 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_80 Inv_LevelPickups;
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
	type_99 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_112 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_9 sb_model_indices;
	type_16 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_4 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_104 name;
	type_106 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RpSector
{
	s32 type;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct anim_coll_data
{
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

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_102 MoveSpeed;
	type_105 AnimSneak;
	type_108 AnimWalk;
	type_111 AnimRun;
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
	type_21 talk_filter;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_94 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_92 beginUpdate;
	type_0 endUpdate;
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
	type_18 frustumPlanes;
	RwBBox frustumBoundBox;
	type_23 frustumCorners;
};

struct xCoef
{
	type_93 a;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xVec2
{
	f32 x;
	f32 y;
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
	type_110 frustplane;
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

struct RxNodeMethods
{
	type_22 nodeBody;
	type_24 nodeInit;
	type_25 nodeTerm;
	type_30 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_19 configMsgHandler;
};

struct zVolume : xVolume
{
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_114 wt;
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

struct xPEEntBone
{
	u8 flags;
	u8 type;
	u8 bone;
	u8 pad1;
	xVec3 offset;
	f32 radius;
	f32 deflection;
};

struct _tagxPad
{
	type_33 value;
	type_36 last_value;
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
	type_65 up_tmr;
	type_69 down_tmr;
	type_88 analog;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_113 clusters;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_6 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_14 sceneStart;
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

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
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

type_35 buffer;
type_42 buffer;
type_103 sClipVolume;
s32 sClipVolumeTotal;
zGlobals globals;
xQCControl xqc_def_ctrl;
type_63 xParCmdKillDistance_Update;
type_17 xParCmdApplyCamMat_Update;
type_96 xParCmdDamagePlayer_Update;
type_90 xParCmdAnimalMagentism_Update;
type_83 xParCmdClipVolumes_Update;
type_73 xParCmdCustom_Update;
type_68 xParCmdPlayerCollision_Update;
type_52 xParCmdJet_Update;

void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdCustom_Grass_Update(xParGroup* ps, f32 dt);
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps);
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, f32 dt);
void xParCmdPlayerCollision_Update();
void xParCmdClipVolumes_Update(xParGroup* ps);
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps);
void zParCmdFindClipVolumes();
void zParCmdInit();

// xParCmdCustom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c150
void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	f32 mdt;
	f32 rSqr;
	f32 oorSqr;
}

// xParCmdApplyCamMat_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c320
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdApplyCamMat* cmd;
	xMat4x3* mat;
	f32 mul;
}

// xParCmdCustom_Grass_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c480
void xParCmdCustom_Grass_Update(xParGroup* ps, f32 dt)
{
	xPar* p;
}

// xParCmdJet_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c560
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xParCmdJet* cmd;
	f32 mdt;
	f32 rSqr;
	f32 oorSqr;
}

// xParCmdDamagePlayer_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c6b0
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdDamagePlayer* cmd;
	xBound* pbound;
	s32 last_idx;
	s32 i;
	xCollis collis;
	xBound bnd_fake;
}

// xParCmdAnimalMagentism_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c870
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, f32 dt)
{
	xPar* p;
	xVec3 pos;
	f32 mul;
	xVec3 vec;
	f32 dist;
}

// xParCmdPlayerCollision_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca10
void xParCmdPlayerCollision_Update()
{
}

// xParCmdClipVolumes_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca20
void xParCmdClipVolumes_Update(xParGroup* ps)
{
	xPar* p;
	s32 i;
	xCollis collis;
}

// xParCmdKillDistance_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18cad0
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdKillDistance* cmd;
	xVec3* camera_pos;
}

// zParCmdFindClipVolumes__Fv
// Start address: 0x18cbb0
void zParCmdFindClipVolumes()
{
	type_97 findname;
	zVolume* vol;
}

// zParCmdInit__Fv
// Start address: 0x18cc50
void zParCmdInit()
{
}

