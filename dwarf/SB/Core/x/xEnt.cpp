typedef struct xEnt;
typedef struct zFragAsset;
typedef struct xModelInstance;
typedef struct xScene;
typedef struct RwV3d;
typedef struct RxHeap;
typedef struct xCutsceneZbufferHack;
typedef struct xVec3;
typedef struct xEntFrame;
typedef struct xPortalAsset;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RpClump;
typedef struct xGridBound;
typedef struct zSurfaceProps;
typedef enum _tagRumbleType;
typedef struct xEntAsset;
typedef enum _zPlayerType;
typedef struct xQuat;
typedef struct RpGeometry;
typedef struct RwTexCoords;
typedef struct zShrapnelAsset;
typedef struct xUpdateCullGroup;
typedef struct RpWorldSector;
typedef struct xCollis;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct iEnv;
typedef struct zSurfUVFX;
typedef struct xBase;
typedef struct analog_data;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct xAnimPlay;
typedef struct RxPipelineRequiresCluster;
typedef struct tag_iFile;
typedef struct _tagEmitSphere;
typedef struct xAnimFile;
typedef struct RpPolygon;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct xAnimEffect;
typedef struct zEntDestructObjAsset;
typedef struct xLinkAsset;
typedef struct xJSPNodeInfo;
typedef struct xGroup;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct RxPipeline;
typedef struct zJumpParam;
typedef struct zPlayerGlobals;
typedef struct XCSNNosey;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zCheckPoint;
typedef struct xCutsceneMgr;
typedef struct xEntCollis;
typedef struct zSurfAssetBase;
typedef struct xVec4;
typedef struct zEntHangable;
typedef struct RpMeshHeader;
typedef struct RwSurfaceProperties;
typedef struct xEnv;
typedef struct RwMatrixTag;
typedef struct xCutsceneMgrAsset;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPBranchNode;
typedef struct zFrag;
typedef struct xCutscene;
typedef struct zPlayerCarryInfo;
typedef struct xVec2;
typedef struct rxReq;
typedef struct _tagEmitRect;
typedef struct xUpdateCullMgr;
typedef struct xShadowSimplePoly;
typedef struct zPlatform;
typedef struct RwRaster;
typedef struct zPlayerSettings;
typedef enum RxClusterValidityReq;
typedef struct zEntDestructObj;
typedef struct xJSPHeader;
typedef struct RwTexture;
typedef struct RpTriangle;
typedef struct xRay3;
typedef struct xCutsceneBreak;
typedef struct xSurface;
typedef struct xCamera;
typedef struct zCutsceneMgr;
typedef struct RpAtomic;
typedef struct xMat4x3;
typedef struct xSerial;
typedef struct zSurfMatFX;
typedef struct xUpdateCullEnt;
typedef struct RwCamera;
typedef enum RxNodeDefEditable;
typedef struct zAssetPickupTable;
typedef struct _zEnv;
typedef struct xModelPool;
typedef enum RxClusterValid;
typedef enum zFragType;
typedef struct anim_coll_data;
typedef struct xLightKitLight;
typedef struct xPEEntBound;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPTree;
typedef struct xRot;
typedef struct zParEmitter;
typedef struct xEntBoulder;
typedef struct xShadowSimpleCache;
typedef struct _tagEmitLine;
typedef struct xFFX;
typedef struct xEnvAsset;
typedef struct xEntShadow;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xBound;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagxRumble;
typedef struct xModelTag;
typedef enum RwCameraProjection;
typedef struct RpLight;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct iFogParams;
typedef struct xEntDrive;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef enum RpWorldRenderOrder;
typedef struct RpMaterial;
typedef struct xParEmitter;
typedef struct RpWorld;
typedef enum _tagPadState;
typedef struct tag_xFile;
typedef struct _tagEmitVolume;
typedef struct xQCData;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xParEmitterAsset;
typedef struct RpSector;
typedef struct xGlobals;
typedef struct xGrid;
typedef struct zLasso;
typedef struct xModelBucket;
typedef struct xParGroup;
typedef struct RwTexDictionary;
typedef struct xParEmitterPropsAsset;
typedef struct RxOutputSpec;
typedef struct _tagxPad;
typedef struct zScene;
typedef struct xSFXAsset;
typedef struct xMat3x3;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct xCutsceneTime;
typedef struct RwObject;
typedef struct _tagEmitOffsetPoint;
typedef struct RwLLLink;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct RxIoSpec;
typedef struct tri_data_0;
typedef struct _tagiPad;
typedef struct xCutsceneInfo;
typedef struct zSurfTextureAnim;
typedef struct xCutsceneData;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xBaseAsset;
typedef struct xPEVCyl;
typedef struct RwPlane;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xParSys;
typedef struct xParInterp;
typedef struct RxCluster;
typedef struct zSurfacePropTexAnim;
typedef struct RxPipelineNodeParam;
typedef struct xGridIterator;
typedef struct _class_0;
typedef struct RxPacket;
typedef struct tri_data_1;
typedef struct xClumpCollBSPVertInfo;
typedef struct zGlobals;
typedef enum RwFogType;
typedef struct xClumpCollBSPTriangle;
typedef struct xPEEntBone;
typedef struct RwRGBAReal;
typedef struct zGlobalSettings;
typedef struct RpInterpolator;
typedef struct RwObjectHasFrame;
typedef struct xAnimMultiFileBase;
typedef struct RwLinkList;
typedef struct xCutsceneZbuffer;
typedef struct zPlayerLassoInfo;
typedef struct _zPortal;
typedef struct zLedgeGrabParams;
typedef struct zSurfacePropUVFX;
typedef struct zSurfColorFX;
typedef struct RwV2d;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xPECircle;
typedef enum _zPlayerWallJumpState;
typedef union _class_2;
typedef struct xBBox;

typedef void(*type_1)(zFrag*, zFragAsset*);
typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef u32(*type_8)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_11)(zShrapnelAsset*, xModelInstance*, xVec3*, type_1);
typedef RpClump*(*type_15)(RpClump*, void*);
typedef s32(*type_17)(RxNodeDefinition*);
typedef void(*type_20)(RxNodeDefinition*);
typedef s32(*type_22)(RxPipelineNode*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef void(*type_26)(RxPipelineNode*);
typedef u32(*type_27)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_28)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_32)(u32);
typedef void(*type_33)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s8*(*type_37)(xBase*);
typedef s8*(*type_39)(u32);
typedef RpAtomic*(*type_44)(RpAtomic*);
typedef void(*type_45)(xEnt*, xScene*, f32);
typedef void(*type_50)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_52)(xEnt*, xVec3*);
typedef void(*type_55)(xEnt*, xScene*, f32, xEntFrame*);
typedef xEnt*(*type_58)(xEnt*, xScene*, void*);
typedef u32(*type_59)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_60)(void*);
typedef void(*type_61)(xEnt*);
typedef u32(*type_67)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_68)(xEnt*, xScene*, f32, void*);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_73)(zEntDestructObj&, void*);
typedef s32(*type_82)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_83)(xEnt*, xScene*, f32);
typedef xEnt*(*type_86)(xEnt*, xScene*, void*);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void(*type_93)(xEnt*, xVec3*);
typedef RwCamera*(*type_100)(RwCamera*);
typedef void(*type_102)(xMemPool*, void*);
typedef void(*type_109)(RwResEntry*);
typedef void(*type_113)(xEnt*);
typedef void(*type_115)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_116)(void*, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);
typedef void(*type_125)(xAnimPlay*, xAnimState*);
typedef void(*type_133)(zEntDestructObj&, void*);

typedef xAnimMultiFileEntry type_0[1];
typedef f32 type_3[22];
typedef f32 type_4[22];
typedef xCutsceneZbuffer type_5[4];
typedef RwFrustumPlane type_6[6];
typedef xParInterp type_7[1];
typedef u32 type_9[2];
typedef u32 type_12[15];
typedef u32 type_13[15];
typedef RwV3d type_14[8];
typedef u32 type_16[2];
typedef u32 type_18[15];
typedef s8 type_19[128];
typedef u32 type_21[2];
typedef RwTexCoords* type_23[8];
typedef u32 type_25[15];
typedef zSurfacePropTexAnim type_29[2];
typedef analog_data type_30[2];
typedef xParInterp type_31[4];
typedef zSurfacePropUVFX type_34[2];
typedef xParInterp type_35[4];
typedef xVec3 type_36[3];
typedef u32 type_38[72];
typedef s8 type_40[4];
typedef s8 type_41[32];
typedef xBase* type_42[72];
typedef u16 type_43[3];
typedef s8 type_46[80];
typedef u8 type_47[2];
typedef f32 type_48[16];
typedef u8 type_49[3];
typedef f32 type_51[4];
typedef u32 type_53[2];
typedef u8 type_54[2];
typedef f32 type_56[6];
typedef xVec4 type_57[12];
typedef f32 type_62[3];
typedef f32 type_63[3];
typedef s8 type_64[16];
typedef xModelTag type_65[2];
typedef f32 type_66[3];
typedef u32 type_70[4];
typedef s8 type_71[16];
typedef RwTexCoords* type_72[8];
typedef xEnt* type_74[111];
typedef zSurfTextureAnim type_75[2];
typedef xVec3 type_76[4];
typedef s32 type_77[2];
typedef f32 type_78[4];
typedef u32 type_79[2];
typedef type_77 type_80[3];
typedef type_80 type_81[4];
typedef zSurfUVFX type_84[2];
typedef RpLight* type_85[2];
typedef RwFrame* type_87[2];
typedef u8 type_89[3];
typedef s8 type_90[128];
typedef type_90 type_91[6];
typedef u8 type_94[3];
typedef u8 type_95[14];
typedef xModelTag type_96[4];
typedef u8 type_97[3];
typedef s8 type_98[32];
typedef xModelInstance* type_99[14];
typedef xCollis type_101[18];
typedef s8 type_103[80];
typedef u8 type_104[2];
typedef u8 type_105[4];
typedef s8 type_106[32];
typedef s8 type_107[32];
typedef f32 type_108[15];
typedef f32 type_110[2];
typedef f32 type_111[15];
typedef u8 type_112[3];
typedef u32 type_114[15];
typedef u8 type_117[22];
typedef u8 type_118[22];
typedef f32 type_119[2];
typedef u8 type_120[3];
typedef s8 type_121[16];
typedef RxCluster type_122[1];
typedef s8 type_123[16];
typedef f32 type_126[2];
typedef u16 type_127[3];
typedef xVec3 type_128[5];
typedef xVec3 type_129[60];
typedef f32 type_130[2];
typedef u8 type_131[5];
typedef u8 type_132[2];

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
	type_45 update;
	type_45 endUpdate;
	type_52 bupdate;
	type_55 move;
	type_61 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_69 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zFragAsset
{
	zFragType type;
	u32 id;
	type_79 parentID;
	f32 lifetime;
	f32 delay;
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
	type_32 resolvID;
	type_37 base2Name;
	type_39 id2Name;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
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

struct xCutsceneZbufferHack
{
	s8* name;
	type_5 times;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_15 callback;
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

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	u32 texanim_flags;
	type_29 texanim;
	u32 uvfx_flags;
	type_34 uvfx;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xQuat
{
	xVec3 v;
	f32 s;
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
	type_72 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct zShrapnelAsset
{
	s32 fassetCount;
	u32 shrapnelID;
	type_11 initCB;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_23 texCoords;
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
		tri_data_1 tri;
	};
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
	type_70 pad;
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
	type_24 BeforeEnter;
	type_2 StateCallback;
	type_33 BeforeAnimMatrices;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_85 light;
	type_87 light_frame;
	s32 memlvl;
};

struct zSurfUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_82 eventFunc;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_33 BeforeAnimMatrices;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct tag_iFile
{
	u32 flags;
	type_19 path;
	s32 fd;
	s32 offset;
	s32 length;
};

struct _tagEmitSphere
{
	f32 radius;
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
	type_132 NumAnims;
	void** RawData;
};

struct RpPolygon
{
	u16 matIndex;
	type_127 vertIndex;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_27 Callback;
};

struct zEntDestructObjAsset
{
	f32 animSpeed;
	u32 initAnimState;
	u32 health;
	u32 spawnItemID;
	u32 dflags;
	u8 collType;
	u8 fxType;
	type_104 pad;
	f32 blast_radius;
	f32 blast_strength;
	u32 shrapnelID_destroy;
	u32 shrapnelID_hit;
	u32 sfx_destroy;
	u32 sfx_hit;
	u32 hitModel;
	u32 destroyModel;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_51 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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
	type_119 BilinearLerp;
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

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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
	type_65 BubbleWandTag;
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
	type_96 HangPawTag;
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
	type_13 Inv_PatsSock;
	type_18 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_25 Inv_LevelPickups;
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
	type_53 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_74 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_95 sb_model_indices;
	type_99 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
};

struct st_SERIAL_CLIENTINFO
{
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
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
	type_101 colls;
	type_50 post;
	type_67 depenq;
};

struct zSurfAssetBase : xBaseAsset
{
	u8 game_damage_type;
	u8 game_sticky;
	u8 game_damage_flags;
	u8 surf_type;
	u8 phys_pad;
	u8 sld_start;
	u8 sld_stop;
	u8 phys_flags;
	f32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	u32 texture_anim_flags;
	type_75 texture_anim;
	u32 uvfx_flags;
	type_84 uvfx;
	u8 on;
	type_89 surf_pad;
	f32 oob_delay;
	f32 walljump_scale_xz;
	f32 walljump_scale_y;
	f32 damage_timer;
	f32 damage_bounce;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct zEntHangable
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

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
	type_108 startTime;
	type_111 endTime;
	type_114 emitID;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_102 InitCB;
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
	type_109 destroyNotify;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct zFrag
{
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
	type_9 SndChannelReq;
	type_16 SndAssetID;
	type_21 SndHandle;
	XCSNNosey* cb_nosey;
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

struct xVec2
{
	f32 x;
	f32 y;
};

struct rxReq
{
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
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
	type_60 activateCB;
	type_60 deactivateCB;
};

struct xShadowSimplePoly
{
	type_36 vert;
	xVec3 norm;
};

struct zPlatform
{
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_56 MoveSpeed;
	type_62 AnimSneak;
	type_63 AnimWalk;
	type_66 AnimRun;
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
	type_105 talk_filter;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zEntDestructObj : zEnt
{
	zEntDestructObjAsset* dasset;
	u32 state;
	u32 healthCnt;
	f32 fx_timer;
	zParEmitter* fx_emitter;
	f32 respawn_timer;
	u32 throw_target;
	zShrapnelAsset* shrapnel_destroy;
	zShrapnelAsset* shrapnel_hit;
	xModelInstance* base_model;
	xModelInstance* hit_model;
	xModelInstance* destroy_model;
	type_73 destroy_notify;
	void* notify_context;
	xSFXAsset* sfx_destroy;
	xSFXAsset* sfx_hit;
};

struct xJSPHeader
{
	type_40 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_106 name;
	type_107 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RpTriangle
{
	type_43 vertIndex;
	s16 matIndex;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
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
	type_112 pad;
	void* moprops;
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
	type_57 frustplane;
};

struct zCutsceneMgr : xCutsceneMgr
{
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
	type_44 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
};

struct zSurfMatFX
{
	u32 flags;
	u32 bumpmapID;
	u32 envmapID;
	f32 shininess;
	f32 bumpiness;
	u32 dualmapID;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_116 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_92 beginUpdate;
	type_100 endUpdate;
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
	type_6 frustumPlanes;
	RwBBox frustumBoundBox;
	type_14 frustumCorners;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zAssetPickupTable
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct anim_coll_data
{
	u32 flags;
	u32 bones;
	xMat4x3 old_mat;
	xMat4x3 new_mat;
	u32 verts_size;
	xVec3* verts;
	xVec3* normals;
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

struct xPEEntBound
{
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct zParEmitter : xParEmitter
{
};

struct xEntBoulder
{
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
	type_76 corner;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct xFFX
{
	u32 flags;
	type_68 doEffect;
	void* fdata;
	xFFX* next;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_126 radius;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_59 Conditional;
	type_59 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_78 wt;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_94 emit_pad;
	type_97 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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
	type_88 renderCallBack;
	RxPipeline* pipeline;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct tag_xFile
{
	type_41 relname;
	tag_iFile ps;
	void* user_data;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_0 Files;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct RpSector
{
	s32 type;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_91 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_98 sceneStart;
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

struct xGrid
{
	u8 ingrid_id;
	type_120 pad;
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
	type_128 lastRefs;
	type_131 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct xParGroup
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
	union
	{
		xParInterp rate;
		type_7 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_31 color_birth;
	type_35 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagxPad
{
	type_117 value;
	type_118 last_value;
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
	type_3 up_tmr;
	type_4 down_tmr;
	type_30 analog;
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
	type_38 baseCount;
	type_42 baseList;
	_zEnv* zen;
};

struct xSFXAsset : xBaseAsset
{
	u16 flagsSFX;
	u16 freq;
	f32 freqm;
	u32 soundAssetID;
	u32 attachID;
	u8 loopCount;
	u8 priority;
	u8 volume;
	u8 pad;
	xVec3 pos;
	f32 innerRadius;
	f32 outerRadius;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct _tagiPad
{
	s32 port;
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
	type_121 SoundLeft;
	type_123 SoundRight;
};

struct zSurfTextureAnim
{
	u16 pad;
	u16 mode;
	u32 group;
	f32 speed;
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

struct RxNodeMethods
{
	type_10 nodeBody;
	type_17 nodeInit;
	type_20 nodeTerm;
	type_22 pipelineNodeInit;
	type_26 pipelineNodeTerm;
	type_28 pipelineNodeConfig;
	type_8 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct xParSys
{
};

struct xParInterp
{
	type_110 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
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

struct zSurfacePropTexAnim
{
	u16 mode;
	f32 speed;
	f32 frame;
	u32 group;
	s32 group_idx;
	xBase* group_ptr;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	u32 delfound;
};

struct _class_0
{
	xVec3* verts;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
	type_47 PowerUp;
	type_54 InitialPowerUp;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_124 sync;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCutsceneZbuffer
{
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_129 tranTable;
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

struct zSurfacePropUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	type_130 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct zSurfColorFX
{
	u16 flags;
	u16 mode;
	f32 speed;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

type_64 buffer;
type_71 buffer;
s8* g_xEnt_FMT;
f32 nsn_angle;
f32 sEntityTimePassed;
xBox all_ents_box;
s32 all_ents_box_init;
s32 setMaterialTextureRestore;
s32 sSetPipeline;
RxPipeline* oldPipe;
s32 xent_entent;
u32 gActiveHeap;
zGlobals globals;
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
s32 gGridIterActive;
type_86 xEntCollCheckOneEntNoDepen;
type_133 stacked_owner_destroyed;
type_125 xAnimDefaultBeforeEnter;
xVec3 g_O3;
xScene* g_xSceneCur;
type_113 xEntRender;
type_83 xEntUpdate;
type_115 xEntDefaultTranslate;
type_93 xEntDefaultBoundUpdate;
xMat4x3 g_I3;

void xEntInitShadow(xEnt& ent, xEntShadow& shadow);
void xEntReposition(xEnt& ent, xMat4x3& mat);
u8 xEntValidType(u8 type);
void xEntAnimateCollision(xEnt& ent, u8 on);
xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(f32 angle);
void xEntCollideWalls(xEnt* p, xScene* sc, f32 dt);
void xEntCollideCeiling(xEnt* p, xScene* sc, f32 dt);
void xEntCollideFloor(xEnt* p, xScene* sc, f32 dt);
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data);
void xEntCollCheckNPCs(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckDyns(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckStats(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckByGrid(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, type_58 hitIt, xGrid* grid);
void xEntCollCheckEnv(xEnt* p, xScene* sc);
void xEntEndCollide(xEnt* ent, xScene* sc, f32 dt);
void xEntBeginCollide(xEnt* ent);
void xEntCollide(xEnt* ent, xScene* sc, f32 dt);
void xEntApplyPhysics(xEnt* ent, xScene* sc, f32 dt);
void xEntMove(xEnt* ent, xScene* sc, f32 dt);
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame);
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat);
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos);
void xEntEndUpdate(xEnt* ent, xScene* sc, f32 dt);
void xEntBeginUpdate(xEnt* ent, f32 dt);
void xEntUpdate(xEnt* ent, xScene* sc, f32 dt);
void xEntRender(xEnt* ent);
void xEntRestorePipeline(RpAtomic* model);
void xEntRestorePipeline(xModelInstance* model);
void xEntSetupPipeline(xSurface* surf, RpAtomic* model);
void xEntSetupPipeline(xModelInstance* model);
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel);
void xEntReset(xEnt* ent);
void xEntLoad(xEnt* ent, xSerial* s);
void xEntSave(xEnt* ent, xSerial* s);
void xEntSetup(xEnt* ent);
void stacked_owner_destroyed(void* context);
u8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, f32 max_dist);
void xEntInitForType(xEnt* ent);
void xEntInit(xEnt* ent, xEntAsset* asset);
void xEntAddHittableFlag(xEnt* ent);
void xEntSceneExit();
void xEntSceneInit();
void xEntSetTimePassed(f32 sec);
void refresh(xEnt& ent);
void reset(xEnt& ent);

// xEntInitShadow__FR4xEntR10xEntShadow
// Start address: 0x1d0c30
void xEntInitShadow(xEnt& ent, xEntShadow& shadow)
{
}

// xEntReposition__FR4xEntRC7xMat4x3
// Start address: 0x1d0c80
void xEntReposition(xEnt& ent, xMat4x3& mat)
{
}

// xEntValidType__FUc
// Start address: 0x1d0f20
u8 xEntValidType(u8 type)
{
}

// xEntAnimateCollision__FR4xEntb
// Start address: 0x1d0f70
void xEntAnimateCollision(xEnt& ent, u8 on)
{
}

// xEntGetAllEntsBox__Fv
// Start address: 0x1d1010
xBox* xEntGetAllEntsBox()
{
}

// xEntSetNostepNormAngle__Ff
// Start address: 0x1d1020
void xEntSetNostepNormAngle(f32 angle)
{
}

// xEntCollideWalls__FP4xEntP6xScenef
// Start address: 0x1d1030
void xEntCollideWalls(xEnt* p, xScene* sc, f32 dt)
{
	xCollis* coll;
	xEnt* cent;
	u8 sidx;
	u8 idx;
	f32 sbr;
}

// xEntCollideCeiling__FP4xEntP6xScenef
// Start address: 0x1d1470
void xEntCollideCeiling(xEnt* p, xScene* sc, f32 dt)
{
	xCollis* coll;
	u8 idx;
	xCollis* ml;
	f32 sbr;
	xCollis* mf;
	xEnt* fent;
	f32 ceil_dist;
}

// xEntCollideFloor__FP4xEntP6xScenef
// Start address: 0x1d1730
void xEntCollideFloor(xEnt* p, xScene* sc, f32 dt)
{
	xCollis* coll;
	u8 idx;
	xCollis* ml;
	xVec3 motion;
	f32 mlen;
	s32 stepping;
	f32 sbr;
	xCollis* mf;
	xEnt* fent;
	f32 flr_dist;
	xEnt* fent;
}

// xEntCollCheckOneEntNoDepen__FP4xEntP6xScenePv
// Start address: 0x1d1bf0
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data)
{
	xEnt* p;
	xCollis* coll;
	u32 modl_coll;
	xBound tmp;
	xBound* bptr;
	u8 ncolls;
	xVec3* upper;
	xVec3* lower;
	u8 idx;
	f32 rsum;
	f32 dx;
	f32 dy;
	f32 dz;
	f32 hsqr;
}

// xEntCollCheckNPCs__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2120
void xEntCollCheckNPCs(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckDyns__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2170
void xEntCollCheckDyns(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckStats__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d21c0
void xEntCollCheckStats(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckNPCsByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2210
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2260
void xEntCollCheckByGrid(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckOneGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEntP5xGrid
// Start address: 0x1d22f0
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, type_58 hitIt, xGrid* grid)
{
	xGridIterator it;
	s32 px;
	s32 pz;
	xGridBound* cell;
	f32 clcenterx;
	f32 clcenterz;
	s32 i;
	s32 _x;
	s32 _z;
	type_81 offs;
	s32 k;
}

// xEntCollCheckEnv__FP4xEntP6xScene
// Start address: 0x1d28b0
void xEntCollCheckEnv(xEnt* p, xScene* sc)
{
	xCollis* coll;
	u8 ncolls;
}

// xEntEndCollide__FP4xEntP6xScenef
// Start address: 0x1d2950
void xEntEndCollide(xEnt* ent, xScene* sc, f32 dt)
{
}

// xEntBeginCollide__FP4xEntP6xScenef
// Start address: 0x1d2980
void xEntBeginCollide(xEnt* ent)
{
	u8 idx;
	xCollis* coll;
}

// xEntCollide__FP4xEntP6xScenef
// Start address: 0x1d2ac0
void xEntCollide(xEnt* ent, xScene* sc, f32 dt)
{
	xCollis* coll;
	f32 h_dot_n;
	f32 depen_len;
}

// xEntApplyPhysics__FP4xEntP6xScenef
// Start address: 0x1d2e30
void xEntApplyPhysics(xEnt* ent, xScene* sc, f32 dt)
{
	xVec3 dposvel;
	f32 tfric;
	f32 tdrag;
	f32 dposXZ;
	f32 scaleXZ;
	f32 scaleY;
}

// xEntMove__FP4xEntP6xScenef
// Start address: 0x1d30f0
void xEntMove(xEnt* ent, xScene* sc, f32 dt)
{
	xEntFrame* dframe;
	xVec3 dpos;
	xMat4x3 invOldmat;
	xMat4x3 deltaMat;
}

// xEntMotionToMatrix__FP4xEntP9xEntFrame
// Start address: 0x1d3310
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame)
{
}

// xEntDefaultTranslate__FP4xEntP5xVec3P7xMat4x3
// Start address: 0x1d3600
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat)
{
}

// xEntDefaultBoundUpdate__FP4xEntP5xVec3
// Start address: 0x1d37c0
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos)
{
	xBound* bound;
}

// xEntEndUpdate__FP4xEntP6xScenef
// Start address: 0x1d3840
void xEntEndUpdate(xEnt* ent, xScene* sc, f32 dt)
{
	xVec3* mpos;
	xVec3* upos;
}

// xEntBeginUpdate__FP4xEntP6xScenef
// Start address: 0x1d3950
void xEntBeginUpdate(xEnt* ent, f32 dt)
{
}

// xEntUpdate__FP4xEntP6xScenef
// Start address: 0x1d3a70
void xEntUpdate(xEnt* ent, xScene* sc, f32 dt)
{
}

// xEntRender__FP4xEnt
// Start address: 0x1d3c10
void xEntRender(xEnt* ent)
{
	s32 shadowOutside;
	xVec3 shadVec;
}

// xEntRestorePipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x1d3d80
void xEntRestorePipeline(RpAtomic* model)
{
}

// xEntRestorePipeline__FP14xModelInstance
// Start address: 0x1d3dd0
void xEntRestorePipeline(xModelInstance* model)
{
}

// xEntSetupPipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x1d3e20
void xEntSetupPipeline(xSurface* surf, RpAtomic* model)
{
	zSurfaceProps* pp;
	xGroup* g;
	u32 texid;
	RwTexture* texptr;
	xGroup* g;
	u32 texid;
	RwTexture* texptr;
	RwTexture* texptr;
}

// xEntSetupPipeline__FP14xModelInstance
// Start address: 0x1d4020
void xEntSetupPipeline(xModelInstance* model)
{
}

// xEntLoadModel__FP4xEntP8RpAtomic
// Start address: 0x1d4030
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel)
{
	xModelInstance* model;
}

// xEntReset__FP4xEnt
// Start address: 0x1d40e0
void xEntReset(xEnt* ent)
{
	xMat4x3 frame;
	xModelInstance* minst;
	type_12 receive_models;
	s8 @4889;
}

// xEntLoad__FP4xEntP7xSerial
// Start address: 0x1d46e0
void xEntLoad(xEnt* ent, xSerial* s)
{
	s32 b;
}

// xEntSave__FP4xEntP7xSerial
// Start address: 0x1d4750
void xEntSave(xEnt* ent, xSerial* s)
{
}

// xEntSetup__FP4xEnt
// Start address: 0x1d47c0
void xEntSetup(xEnt* ent)
{
	xSurface* surf;
	xModelInstance* minst;
	s32 i;
	xLinkAsset* la;
	xEnt* dent;
}

// stacked_owner_destroyed__18@unnamed@xEnt_cpp@FR15zEntDestructObjPv
// Start address: 0x1d4bf0
void stacked_owner_destroyed(void* context)
{
}

// collide_downward__18@unnamed@xEnt_cpp@FR5xVec3RP4xEntR6xSceneR4xEntf
// Start address: 0x1d4c30
u8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, f32 max_dist)
{
	xRay3 ray;
	u8 old_bound_type;
	f32 old_bound_radius;
	xCollis coll;
}

// xEntInitForType__FP4xEnt
// Start address: 0x1d4e50
void xEntInitForType(xEnt* ent)
{
}

// xEntInit__FP4xEntP9xEntAsset
// Start address: 0x1d5070
void xEntInit(xEnt* ent, xEntAsset* asset)
{
}

// xEntAddHittableFlag__FP4xEnt
// Start address: 0x1d5180
void xEntAddHittableFlag(xEnt* ent)
{
	u32 i;
}

// xEntSceneExit__Fv
// Start address: 0x1d5260
void xEntSceneExit()
{
}

// xEntSceneInit__Fv
// Start address: 0x1d5270
void xEntSceneInit()
{
}

// xEntSetTimePassed__Ff
// Start address: 0x1d5280
void xEntSetTimePassed(f32 sec)
{
}

// refresh__Q218@unnamed@xEnt_cpp@9anim_collFR4xEnt
// Start address: 0x1d5290
void refresh(xEnt& ent)
{
	anim_coll_data& ac;
	xMat4x3& bone_mat;
}

// reset__Q218@unnamed@xEnt_cpp@9anim_collFR4xEnt
// Start address: 0x1d5400
void reset(xEnt& ent)
{
	xModelInstance& model;
	xMat4x3& mat;
	anim_coll_data& ac;
	xBox& box;
	xVec3 size;
	f32 max_size;
}

