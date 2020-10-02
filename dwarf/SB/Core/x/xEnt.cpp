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
typedef uint32(*type_8)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_11)(zShrapnelAsset*, xModelInstance*, xVec3*, type_1);
typedef RpClump*(*type_15)(RpClump*, void*);
typedef int32(*type_17)(RxNodeDefinition*);
typedef void(*type_20)(RxNodeDefinition*);
typedef int32(*type_22)(RxPipelineNode*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef void(*type_26)(RxPipelineNode*);
typedef uint32(*type_27)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_28)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_32)(uint32);
typedef void(*type_33)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_37)(xBase*);
typedef int8*(*type_39)(uint32);
typedef RpAtomic*(*type_44)(RpAtomic*);
typedef void(*type_45)(xEnt*, xScene*, float32);
typedef void(*type_50)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_52)(xEnt*, xVec3*);
typedef void(*type_55)(xEnt*, xScene*, float32, xEntFrame*);
typedef xEnt*(*type_58)(xEnt*, xScene*, void*);
typedef uint32(*type_59)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_60)(void*);
typedef void(*type_61)(xEnt*);
typedef uint32(*type_67)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_68)(xEnt*, xScene*, float32, void*);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_73)(zEntDestructObj&, void*);
typedef int32(*type_82)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_83)(xEnt*, xScene*, float32);
typedef xEnt*(*type_86)(xEnt*, xScene*, void*);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void(*type_93)(xEnt*, xVec3*);
typedef RwCamera*(*type_100)(RwCamera*);
typedef void(*type_102)(xMemPool*, void*);
typedef void(*type_109)(RwResEntry*);
typedef void(*type_113)(xEnt*);
typedef void(*type_115)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_116)(void*, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);
typedef void(*type_125)(xAnimPlay*, xAnimState*);
typedef void(*type_133)(zEntDestructObj&, void*);

typedef xAnimMultiFileEntry type_0[1];
typedef float32 type_3[22];
typedef float32 type_4[22];
typedef xCutsceneZbuffer type_5[4];
typedef RwFrustumPlane type_6[6];
typedef xParInterp type_7[1];
typedef uint32 type_9[2];
typedef uint32 type_12[15];
typedef uint32 type_13[15];
typedef RwV3d type_14[8];
typedef uint32 type_16[2];
typedef uint32 type_18[15];
typedef int8 type_19[128];
typedef uint32 type_21[2];
typedef RwTexCoords* type_23[8];
typedef uint32 type_25[15];
typedef zSurfacePropTexAnim type_29[2];
typedef analog_data type_30[2];
typedef xParInterp type_31[4];
typedef zSurfacePropUVFX type_34[2];
typedef xParInterp type_35[4];
typedef xVec3 type_36[3];
typedef uint32 type_38[72];
typedef int8 type_40[4];
typedef int8 type_41[32];
typedef xBase* type_42[72];
typedef uint16 type_43[3];
typedef int8 type_46[80];
typedef uint8 type_47[2];
typedef float32 type_48[16];
typedef uint8 type_49[3];
typedef float32 type_51[4];
typedef uint32 type_53[2];
typedef uint8 type_54[2];
typedef float32 type_56[6];
typedef xVec4 type_57[12];
typedef float32 type_62[3];
typedef float32 type_63[3];
typedef int8 type_64[16];
typedef xModelTag type_65[2];
typedef float32 type_66[3];
typedef uint32 type_70[4];
typedef int8 type_71[16];
typedef RwTexCoords* type_72[8];
typedef xEnt* type_74[111];
typedef zSurfTextureAnim type_75[2];
typedef xVec3 type_76[4];
typedef int32 type_77[2];
typedef float32 type_78[4];
typedef uint32 type_79[2];
typedef type_77 type_80[3];
typedef type_80 type_81[4];
typedef zSurfUVFX type_84[2];
typedef RpLight* type_85[2];
typedef RwFrame* type_87[2];
typedef uint8 type_89[3];
typedef int8 type_90[128];
typedef type_90 type_91[6];
typedef uint8 type_94[3];
typedef uint8 type_95[14];
typedef xModelTag type_96[4];
typedef uint8 type_97[3];
typedef int8 type_98[32];
typedef xModelInstance* type_99[14];
typedef xCollis type_101[18];
typedef int8 type_103[80];
typedef uint8 type_104[2];
typedef uint8 type_105[4];
typedef int8 type_106[32];
typedef int8 type_107[32];
typedef float32 type_108[15];
typedef float32 type_110[2];
typedef float32 type_111[15];
typedef uint8 type_112[3];
typedef uint32 type_114[15];
typedef uint8 type_117[22];
typedef uint8 type_118[22];
typedef float32 type_119[2];
typedef uint8 type_120[3];
typedef int8 type_121[16];
typedef RxCluster type_122[1];
typedef int8 type_123[16];
typedef float32 type_126[2];
typedef uint16 type_127[3];
typedef xVec3 type_128[5];
typedef xVec3 type_129[60];
typedef float32 type_130[2];
typedef uint8 type_131[5];
typedef uint8 type_132[2];

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
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zFragAsset
{
	zFragType type;
	uint32 id;
	type_79 parentID;
	float32 lifetime;
	float32 delay;
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
	type_32 resolvID;
	type_37 base2Name;
	type_39 id2Name;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xCutsceneZbufferHack
{
	int8* name;
	type_5 times;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	uint16 gx;
	uint16 gz;
	uint8 ingrid;
	uint8 oversize;
	uint8 deleted;
	uint8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	uint32 texanim_flags;
	type_29 texanim;
	uint32 uvfx_flags;
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
	float32 s;
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
	type_72 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	type_11 initCB;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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
		_class_1 tuv;
		tri_data_1 tri;
	};
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
	type_70 pad;
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
	int32 memlvl;
};

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
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
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_82 eventFunc;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
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
	type_33 BeforeAnimMatrices;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct tag_iFile
{
	uint32 flags;
	type_19 path;
	int32 fd;
	int32 offset;
	int32 length;
};

struct _tagEmitSphere
{
	float32 radius;
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
	type_132 NumAnims;
	void** RawData;
};

struct RpPolygon
{
	uint16 matIndex;
	type_127 vertIndex;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_27 Callback;
};

struct zEntDestructObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint32 health;
	uint32 spawnItemID;
	uint32 dflags;
	uint8 collType;
	uint8 fxType;
	type_104 pad;
	float32 blast_radius;
	float32 blast_strength;
	uint32 shrapnelID_destroy;
	uint32 shrapnelID_hit;
	uint32 sfx_destroy;
	uint32 sfx_hit;
	uint32 hitModel;
	uint32 destroyModel;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_51 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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
	type_119 BilinearLerp;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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
	type_65 BubbleWandTag;
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
	type_96 HangPawTag;
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
	type_13 Inv_PatsSock;
	type_18 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_25 Inv_LevelPickups;
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
	type_53 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_74 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_95 sb_model_indices;
	type_99 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
};

struct st_SERIAL_CLIENTINFO
{
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
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
	type_101 colls;
	type_50 post;
	type_67 depenq;
};

struct zSurfAssetBase : xBaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	type_75 texture_anim;
	uint32 uvfx_flags;
	type_84 uvfx;
	uint8 on;
	type_89 surf_pad;
	float32 oob_delay;
	float32 walljump_scale_xz;
	float32 walljump_scale_y;
	float32 damage_timer;
	float32 damage_bounce;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct zEntHangable
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	type_108 startTime;
	type_111 endTime;
	type_114 emitID;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_102 InitCB;
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
	type_109 destroyNotify;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct zFrag
{
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
	type_9 SndChannelReq;
	type_16 SndAssetID;
	type_21 SndHandle;
	XCSNNosey* cb_nosey;
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct rxReq
{
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_56 MoveSpeed;
	type_62 AnimSneak;
	type_63 AnimWalk;
	type_66 AnimRun;
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
	uint32 state;
	uint32 healthCnt;
	float32 fx_timer;
	zParEmitter* fx_emitter;
	float32 respawn_timer;
	uint32 throw_target;
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
	uint32 version;
	uint32 jspNodeCount;
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
	uint32 filterAddressing;
	int32 refCount;
};

struct RpTriangle
{
	type_43 vertIndex;
	int16 matIndex;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
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
	uint32 NumMatrices;
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
	uint32 flags;
	uint32 bones;
	xMat4x3 old_mat;
	xMat4x3 new_mat;
	uint32 verts_size;
	xVec3* verts;
	xVec3* normals;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_48 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct zParEmitter : xParEmitter
{
};

struct xEntBoulder
{
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
	type_76 corner;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xFFX
{
	uint32 flags;
	type_68 doEffect;
	void* fdata;
	xFFX* next;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_126 radius;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_59 Conditional;
	type_59 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
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
	float32 r;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
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
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
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

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	uint8 rate_mode;
	float32 rate;
	float32 rate_time;
	float32 rate_fraction;
	float32 rate_fraction_cull;
	uint8 emit_flags;
	type_94 emit_pad;
	type_97 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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
	uint32 emit_volumeID;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_0 Files;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xParEmitterAsset : xBaseAsset
{
	uint8 emit_flags;
	uint8 emit_type;
	uint16 pad;
	uint32 propID;
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
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint32 cull_mode;
	float32 cull_dist_sqr;
};

struct RpSector
{
	int32 type;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_91 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_98 sceneStart;
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

struct xGrid
{
	uint8 ingrid_id;
	type_120 pad;
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
	int32 ClipFlags;
	uint32 PipeFlags;
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
	uint32 parSysID;
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
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagxPad
{
	type_117 value;
	type_118 last_value;
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
	type_3 up_tmr;
	type_4 down_tmr;
	type_30 analog;
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
	type_38 baseCount;
	type_42 baseList;
	_zEnv* zen;
};

struct xSFXAsset : xBaseAsset
{
	uint16 flagsSFX;
	uint16 freq;
	float32 freqm;
	uint32 soundAssetID;
	uint32 attachID;
	uint8 loopCount;
	uint8 priority;
	uint8 volume;
	uint8 pad;
	xVec3 pos;
	float32 innerRadius;
	float32 outerRadius;
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
	uint32 reserved;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
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
	int8 x;
	int8 y;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct _tagiPad
{
	int32 port;
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
	type_121 SoundLeft;
	type_123 SoundRight;
};

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
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
	uint32 creationAttributes;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xParSys
{
};

struct xParInterp
{
	type_110 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
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
	uint32 delfound;
};

struct _class_0
{
	xVec3* verts;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xPEEntBone
{
	uint8 flags;
	uint8 type;
	uint8 bone;
	uint8 pad1;
	xVec3 offset;
	float32 radius;
	float32 deflection;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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
	type_47 PowerUp;
	type_54 InitialPowerUp;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_124 sync;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_129 tranTable;
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

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
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
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
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
int8* g_xEnt_FMT;
float32 nsn_angle;
float32 sEntityTimePassed;
xBox all_ents_box;
int32 all_ents_box_init;
int32 setMaterialTextureRestore;
int32 sSetPipeline;
RxPipeline* oldPipe;
int32 xent_entent;
uint32 gActiveHeap;
zGlobals globals;
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
int32 gGridIterActive;
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
uint8 xEntValidType(uint8 type);
void xEntAnimateCollision(xEnt& ent, uint8 on);
xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(float32 angle);
void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt);
void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt);
void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt);
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data);
void xEntCollCheckNPCs(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckDyns(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckStats(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckByGrid(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, type_58 hitIt, xGrid* grid);
void xEntCollCheckEnv(xEnt* p, xScene* sc);
void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginCollide(xEnt* ent);
void xEntCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt);
void xEntMove(xEnt* ent, xScene* sc, float32 dt);
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame);
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat);
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos);
void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginUpdate(xEnt* ent, float32 dt);
void xEntUpdate(xEnt* ent, xScene* sc, float32 dt);
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
uint8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float32 max_dist);
void xEntInitForType(xEnt* ent);
void xEntInit(xEnt* ent, xEntAsset* asset);
void xEntAddHittableFlag(xEnt* ent);
void xEntSceneExit();
void xEntSceneInit();
void xEntSetTimePassed(float32 sec);
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
uint8 xEntValidType(uint8 type)
{
}

// xEntAnimateCollision__FR4xEntb
// Start address: 0x1d0f70
void xEntAnimateCollision(xEnt& ent, uint8 on)
{
}

// xEntGetAllEntsBox__Fv
// Start address: 0x1d1010
xBox* xEntGetAllEntsBox()
{
}

// xEntSetNostepNormAngle__Ff
// Start address: 0x1d1020
void xEntSetNostepNormAngle(float32 angle)
{
}

// xEntCollideWalls__FP4xEntP6xScenef
// Start address: 0x1d1030
void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	xEnt* cent;
	uint8 sidx;
	uint8 idx;
	float32 sbr;
}

// xEntCollideCeiling__FP4xEntP6xScenef
// Start address: 0x1d1470
void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	uint8 idx;
	xCollis* ml;
	float32 sbr;
	xCollis* mf;
	xEnt* fent;
	float32 ceil_dist;
}

// xEntCollideFloor__FP4xEntP6xScenef
// Start address: 0x1d1730
void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	uint8 idx;
	xCollis* ml;
	xVec3 motion;
	float32 mlen;
	int32 stepping;
	float32 sbr;
	xCollis* mf;
	xEnt* fent;
	float32 flr_dist;
	xEnt* fent;
}

// xEntCollCheckOneEntNoDepen__FP4xEntP6xScenePv
// Start address: 0x1d1bf0
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data)
{
	xEnt* p;
	xCollis* coll;
	uint32 modl_coll;
	xBound tmp;
	xBound* bptr;
	uint8 ncolls;
	xVec3* upper;
	xVec3* lower;
	uint8 idx;
	float32 rsum;
	float32 dx;
	float32 dy;
	float32 dz;
	float32 hsqr;
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
	int32 px;
	int32 pz;
	xGridBound* cell;
	float32 clcenterx;
	float32 clcenterz;
	int32 i;
	int32 _x;
	int32 _z;
	type_81 offs;
	int32 k;
}

// xEntCollCheckEnv__FP4xEntP6xScene
// Start address: 0x1d28b0
void xEntCollCheckEnv(xEnt* p, xScene* sc)
{
	xCollis* coll;
	uint8 ncolls;
}

// xEntEndCollide__FP4xEntP6xScenef
// Start address: 0x1d2950
void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt)
{
}

// xEntBeginCollide__FP4xEntP6xScenef
// Start address: 0x1d2980
void xEntBeginCollide(xEnt* ent)
{
	uint8 idx;
	xCollis* coll;
}

// xEntCollide__FP4xEntP6xScenef
// Start address: 0x1d2ac0
void xEntCollide(xEnt* ent, xScene* sc, float32 dt)
{
	xCollis* coll;
	float32 h_dot_n;
	float32 depen_len;
}

// xEntApplyPhysics__FP4xEntP6xScenef
// Start address: 0x1d2e30
void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt)
{
	xVec3 dposvel;
	float32 tfric;
	float32 tdrag;
	float32 dposXZ;
	float32 scaleXZ;
	float32 scaleY;
}

// xEntMove__FP4xEntP6xScenef
// Start address: 0x1d30f0
void xEntMove(xEnt* ent, xScene* sc, float32 dt)
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
void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	xVec3* mpos;
	xVec3* upos;
}

// xEntBeginUpdate__FP4xEntP6xScenef
// Start address: 0x1d3950
void xEntBeginUpdate(xEnt* ent, float32 dt)
{
}

// xEntUpdate__FP4xEntP6xScenef
// Start address: 0x1d3a70
void xEntUpdate(xEnt* ent, xScene* sc, float32 dt)
{
}

// xEntRender__FP4xEnt
// Start address: 0x1d3c10
void xEntRender(xEnt* ent)
{
	int32 shadowOutside;
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
	uint32 texid;
	RwTexture* texptr;
	xGroup* g;
	uint32 texid;
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
	int8 @4889;
}

// xEntLoad__FP4xEntP7xSerial
// Start address: 0x1d46e0
void xEntLoad(xEnt* ent, xSerial* s)
{
	int32 b;
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
	int32 i;
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
uint8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float32 max_dist)
{
	xRay3 ray;
	uint8 old_bound_type;
	float32 old_bound_radius;
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
	uint32 i;
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
void xEntSetTimePassed(float32 sec)
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
	float32 max_size;
}

