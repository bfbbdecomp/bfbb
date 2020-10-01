typedef struct xAnimState;
typedef struct _tagEmitLine;
typedef struct xEntDrive;
typedef struct RpWorldSector;
typedef struct xBaseAsset;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct xQCData;
typedef struct tagiRenderInput;
typedef struct xSurface;
typedef struct RwBBox;
typedef struct xPar;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xGridBound;
typedef struct RwTexture;
typedef struct RxPipelineNode;
typedef struct zJumpParam;
typedef struct xAnimEffect;
typedef struct xEntAsset;
typedef struct xUpdateCullMgr;
typedef struct xQuat;
typedef struct zPlayerCarryInfo;
typedef struct RpLight;
typedef struct xModelBucket;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xEntCollis;
typedef struct RxObjSpace3DVertex;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct zEntHangable;
typedef struct RpWorld;
typedef struct zPlayerSettings;
typedef struct RwRaster;
typedef struct xEnt;
typedef struct xClumpCollBSPTree;
typedef struct xAnimFile;
typedef struct RwFrame;
typedef struct RwCamera;
typedef struct RxPipelineRequiresCluster;
typedef struct zEnt;
typedef struct xModelInstance;
typedef struct xJSPNodeInfo;
typedef struct xParCmdTex;
typedef struct zPlatform;
typedef struct xEnvAsset;
typedef struct xUpdateCullEnt;
typedef struct xAnimTransition;
typedef struct _zPortal;
typedef struct xAnimTransitionList;
typedef struct xFFX;
typedef struct xEntFrame;
typedef struct xLightKit;
typedef struct RxPipeline;
typedef struct xParGroup;
typedef struct xParCmdAsset;
typedef struct zCutsceneMgr;
typedef struct xModelTag;
typedef struct RpSector;
typedef struct _tagEmitVolume;
typedef struct xMat4x3;
typedef struct xPortalAsset;
typedef struct xVec4;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct zAssetPickupTable;
typedef struct RwMatrixTag;
typedef struct iFogParams;
typedef struct RwLLLink;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct xShadowSimplePoly;
typedef struct rxReq;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct xEntBoulder;
typedef struct xScene;
typedef enum RxClusterValidityReq;
typedef struct tri_data_0;
typedef struct xAnimMultiFile;
typedef struct RpVertexNormal;
typedef struct _tagEmitOffsetPoint;
typedef struct RpAtomic;
typedef struct xCollis;
typedef enum RxNodeDefEditable;
typedef struct xParEmitterAsset;
typedef struct xJSPHeader;
typedef enum RxClusterValid;
typedef struct xLightKitLight;
typedef struct tri_data_1;
typedef enum _tagPadState;
typedef struct RpInterpolator;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xShadowSimpleCache;
typedef struct _class_0;
typedef struct RpMaterial;
typedef struct xGlobals;
typedef struct zParSys;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagxPad;
typedef struct xAnimTable;
typedef enum RwCameraProjection;
typedef struct xPEVCyl;
typedef struct RpPolygon;
typedef enum RxClusterForcePresent;
typedef struct zLasso;
typedef struct xCylinder;
typedef struct RpMaterialList;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct _class_1;
typedef struct xParSysAsset;
typedef struct _tagiPad;
typedef struct xEnv;
typedef struct RwSphere;
typedef struct xAnimMultiFileEntry;
typedef struct xLinkAsset;
typedef struct RpGeometry;
typedef struct xAnimActiveEffect;
typedef struct xPEEntBone;
typedef struct xModelPool;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xEntShadow;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMat3x3;
typedef struct anim_coll_data;
typedef struct RxClusterRef;
typedef struct xClumpCollBSPTriangle;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileBase;
typedef struct xPECircle;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct RxPipelineCluster;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct RwFrustumPlane;
typedef struct xAnimPlay;
typedef struct RpTriangle;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct zPlayerLassoInfo;
typedef struct xParCmd;
typedef union _class_2;
typedef struct xParSys;
typedef struct zScene;
typedef struct xVec2;
typedef struct RxCluster;
typedef struct _tagEmitSphere;
typedef struct zLedgeGrabParams;
typedef struct xBBox;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef enum _zPlayerWallJumpState;
typedef enum RwFogType;
typedef struct tagiRenderArrays;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef enum _tagRumbleType;
typedef struct _tagEmitRect;
typedef struct RwLinkList;
typedef enum _zPlayerType;
typedef enum RpWorldRenderOrder;
typedef struct analog_data;
typedef struct RwV2d;
typedef struct xPEEntBound;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;

typedef s8*(*type_5)(xBase*);
typedef RpWorldSector*(*type_6)(RpWorldSector*);
typedef u32(*type_9)(RxPipelineNode*, u32, u32, void*);
typedef s8*(*type_10)(u32);
typedef s32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef s32(*type_17)(RxPipelineNode*);
typedef u32(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_19)(RxPipelineNode*);
typedef s32(*type_23)(RxPipelineNode*, RxPipeline*);
typedef void(*type_28)(void*);
typedef void(*type_33)(xAnimPlay*, xAnimState*);
typedef void(*type_37)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_38)(xEnt*, xScene*, f32);
typedef void(*type_41)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_45)(void*, xParGroup*);
typedef void(*type_46)(xEnt*, xVec3*);
typedef void(*type_48)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_49)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_52)(xEnt*);
typedef u32(*type_57)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_60)(xEnt*, xVec3*, xMat4x3*);
typedef xBase*(*type_68)(u32);
typedef RpClump*(*type_69)(RpClump*, void*);
typedef u32(*type_72)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_75)(RwCamera*);
typedef u32(*type_77)(void*, void*);
typedef RwCamera*(*type_82)(RwCamera*);
typedef void(*type_84)(xMemPool*, void*);
typedef RpAtomic*(*type_89)(RpAtomic*);
typedef void(*type_91)(RwResEntry*);
typedef s32(*type_96)(xBase*, xBase*, u32, f32*, xBase*);
typedef RwObjectHasFrame*(*type_102)(RwObjectHasFrame*);

typedef u32 type_0[72];
typedef u32 type_1[15];
typedef s8 type_2[4];
typedef u16 type_3[6];
typedef xBase* type_4[72];
typedef analog_data type_7[2];
typedef RwFrustumPlane type_8[6];
typedef u8 type_12[4];
typedef RwV3d type_13[8];
typedef u8 type_16[3];
typedef xVec4 type_20[12];
typedef RwRGBA type_21[8];
typedef u8 type_22[2];
typedef u32 type_24[2];
typedef u8 type_25[2];
typedef u8 type_26[2];
typedef f32 type_27[6];
typedef xVec3 type_29[3];
typedef u8 type_30[3];
typedef f32 type_31[3];
typedef f32 type_32[3];
typedef xModelTag type_34[2];
typedef f32 type_35[3];
typedef f32 type_36[4];
typedef RpLight* type_39[2];
typedef f32 type_40[4];
typedef RxObjSpace3DVertex type_42[4];
typedef f32 type_43[4];
typedef RwFrame* type_44[2];
typedef f32 type_47[16];
typedef u8 type_50[2];
typedef xEnt* type_51[111];
typedef u16 type_53[6];
typedef f32 type_54[256];
typedef s8 type_55[16];
typedef u16 type_56[3];
typedef s8 type_58[128];
typedef type_58 type_59[6];
typedef u32 type_61[4];
typedef s8 type_62[16];
typedef u8 type_63[14];
typedef xModelTag type_64[4];
typedef s8 type_65[32];
typedef xVec3 type_66[4];
typedef xModelInstance* type_67[14];
typedef u8 type_70[4];
typedef u32 type_71[4096];
typedef RwTexCoords* type_73[8];
typedef f32 type_74[2];
typedef RxObjSpace3DVertex type_76[4];
typedef u8 type_78[22];
typedef f32 type_79[4];
typedef xCollis type_80[18];
typedef u8 type_81[22];
typedef u16 type_83[6];
typedef u16 type_85[3];
typedef s8 type_86[32];
typedef xVec3 type_87[5];
typedef s8 type_88[32];
typedef u8 type_90[2];
typedef xAnimMultiFileEntry type_92[1];
typedef f32 type_93[0];
typedef u8 type_94[5];
typedef xVec3 type_95[60];
typedef f32 type_97[22];
typedef u16 type_98[960];
typedef RxCluster type_99[1];
typedef f32 type_100[22];
typedef RxObjSpace3DVertex type_101[480];
typedef f32 type_103[480];
typedef u32 type_104[15];
typedef f32 type_105[2];
typedef xVec3 type_106[4];
typedef RwTexCoords* type_107[8];
typedef RxObjSpace3DVertex type_108[4];
typedef u32 type_109[15];

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
	type_33 BeforeEnter;
	type_37 StateCallback;
	type_41 BeforeAnimMatrices;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
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

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_73 texCoords;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xSurface
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	f32 m_lifetime;
	type_12 m_c;
	xVec3 m_pos;
	f32 m_size;
	xVec3 m_vel;
	f32 m_sizeVel;
	u8 m_flag;
	u8 m_mode;
	type_26 m_texIdx;
	type_30 m_rotdeg;
	u8 pad8;
	f32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_40 m_cvel;
	type_43 m_cfl;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_96 eventFunc;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_88 mask;
	u32 filterAddressing;
	s32 refCount;
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

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_72 Callback;
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
	type_28 activateCB;
	type_28 deactivateCB;
};

struct xQuat
{
	xVec3 v;
	f32 s;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	type_20 frustplane;
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
	type_80 colls;
	type_48 post;
	type_57 depenq;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_69 callback;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_61 pad;
};

struct zEntHangable
{
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
	type_6 renderCallBack;
	RxPipeline* pipeline;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_27 MoveSpeed;
	type_31 AnimSneak;
	type_32 AnimWalk;
	type_35 AnimRun;
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
	type_70 talk_filter;
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
	type_38 update;
	type_38 endUpdate;
	type_46 bupdate;
	type_49 move;
	type_52 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_60 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_90 NumAnims;
	void** RawData;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_75 beginUpdate;
	type_82 endUpdate;
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
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_13 frustumCorners;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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

struct zPlatform
{
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
	type_77 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_18 Conditional;
	type_18 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xFFX
{
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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
	type_45 draw;
	xParCmdTex* m_cmdTex;
};

struct xParCmdAsset
{
	u32 type;
	u8 enabled;
	u8 mode;
	type_50 pad;
};

struct zCutsceneMgr
{
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_36 wt;
};

struct RpSector
{
	s32 type;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct zAssetPickupTable
{
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_16 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xShadowSimplePoly
{
	type_29 vert;
	xVec3 norm;
};

struct rxReq
{
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
	type_39 light;
	type_44 light_frame;
	s32 memlvl;
};

struct xEntBoulder
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
	type_68 resolvID;
	type_5 base2Name;
	type_10 id2Name;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_92 Files;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_89 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xJSPHeader
{
	type_2 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_47 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
	type_66 corner;
};

struct _class_0
{
	xVec3* verts;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_59 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_65 sceneStart;
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

struct zParSys : xParSys
{
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

struct _tagxPad
{
	type_78 value;
	type_81 last_value;
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
	type_97 up_tmr;
	type_100 down_tmr;
	type_7 analog;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct RpPolygon
{
	u16 matIndex;
	type_56 vertIndex;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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
	type_87 lastRefs;
	type_94 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct xParSysAsset : xBaseAsset
{
	u32 type;
	u32 parentParSysID;
	u32 textureID;
	u8 parFlags;
	u8 priority;
	u16 maxPar;
	u8 renderFunc;
	u8 renderSrcBlendMode;
	u8 renderDstBlendMode;
	u8 cmdCount;
	u32 cmdSize;
};

struct _tagiPad
{
	s32 port;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_79 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	type_107 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_105 radius;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_74 BilinearLerp;
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

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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

struct anim_coll_data
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_91 destroyNotify;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_14 nodeInit;
	type_15 nodeTerm;
	type_17 pipelineNodeInit;
	type_19 pipelineNodeTerm;
	type_23 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_84 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	type_22 PowerUp;
	type_25 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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
	type_41 BeforeAnimMatrices;
};

struct RpTriangle
{
	type_85 vertIndex;
	s16 matIndex;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct xParCmd
{
	u32 flag;
	xParCmdAsset* tasset;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xParSys : xBase
{
	xParSysAsset* tasset;
	u32 cmdCount;
	xParCmd* cmd;
	xParSys* parent;
	xParGroup* group;
	u8 visible;
	RwTexture* txtr_particle;
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
	type_0 baseCount;
	type_4 baseList;
	_zEnv* zen;
};

struct xVec2
{
	f32 x;
	f32 y;
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

struct _tagEmitSphere
{
	f32 radius;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_95 tranTable;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_99 clusters;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagiRenderArrays
{
	type_98 m_index;
	type_101 m_vertex;
	type_103 m_vertexTZ;
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
	type_102 sync;
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

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct RwLinkList
{
	RwLLLink link;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct RwV2d
{
	f32 x;
	f32 y;
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
	type_34 BubbleWandTag;
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
	type_64 HangPawTag;
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
	type_104 Inv_PatsSock;
	type_109 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_1 Inv_LevelPickups;
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
	type_24 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_51 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_63 sb_model_indices;
	type_67 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

type_55 buffer;
type_62 buffer;
s32 gColorTableInit;
type_54 gColorTable;
RpAtomic* sParAtomic;
RpClump* sParClump;
RpMaterial* sParMaterial;
RwFrame* sParClumpFrame;
RwFrame* sParAtomicFrame;
RwTexture* sParTexture;
f32 sParEmitterWidth;
f32 sParEmitterLength;
f32 sParEmitterAngle;
f32 sParSize;
f32 sParGrowth;
f32 sParAspectRatio;
f32 sParFlightTime;
f32 sParMinSpeed;
f32 sParMaxSpeed;
f32 sParDamping;
RwV3d sParForce;
s32 sParStartColor;
s32 sParStartAlpha;
s32 sParEndColor;
s32 sParEndAlpha;
type_21 sParColors;
s32 sParAdded;
tagiRenderArrays gRenderArr;
tagiRenderInput gRenderBuffer;
type_93 cosSinPolynomial;
zGlobals globals;
type_71 ourGlobals;

void iParMgrRenderParSys_Flat(void* data, xParGroup* ps);
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps);
void iParMgrRenderParSys_Static();
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps);
void iRenderPushFlat(xPar* p, xParCmdTex* tex);
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex);
void iRenderSetCameraViewMatrix(xMat4x3* m);
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps);
void iParMgrRender();
void iParMgrUpdate();
void iParMgrInit();

// iParMgrRenderParSys_Flat__FPvP9xParGroup
// Start address: 0x1b0b60
void iParMgrRenderParSys_Flat(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
}

// iParMgrRenderParSys_Ground__FPvP9xParGroup
// Start address: 0x1b0c60
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	xParCmdTex* tex;
	xPar* p;
	void* vertices;
	u16* indices;
	s32 vertexCount;
	s32 indexCount;
	f32 size;
	type_106 vert;
	u8 r;
	u8 g;
	u8 b;
	u8 a;
	xMat3x3 groundmat;
	f32 angx;
	f32 angy;
	f32 angz;
	xVec3 zdir;
	xVec3 xdir;
	xVec3 centre;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	f32 u1;
	f32 u2;
	f32 v1;
	f32 v2;
	u16* src;
	u16* dst;
	s32 i;
	type_76 v3d;
	type_83 i3d;
}

// iParMgrRenderParSys_Static__FPvP9xParGroup
// Start address: 0x1b15b0
void iParMgrRenderParSys_Static()
{
}

// iParMgrRenderParSys_QuadStreak__FPvP9xParGroup
// Start address: 0x1b15c0
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
}

// iParMgrRenderParSys_InvStreak__FPvP9xParGroup
// Start address: 0x1b16d0
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps)
{
	u32 transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	xPar* p;
	void* vertices;
	s32 vertexCount;
}

// iParMgrRenderParSys_Streak__FPvP9xParGroup
// Start address: 0x1b19b0
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps)
{
	u32 transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	xPar* p;
	void* vertices;
	s32 vertexCount;
}

// iRenderPushFlat__FP4xParP10xParCmdTex
// Start address: 0x1b1c90
void iRenderPushFlat(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	u16* indices;
	u8 r;
	u8 g;
	u8 b;
	u8 a;
	f32 size;
	xMat3x3 groundmat;
	f32 yaw;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	f32 u1;
	f32 u2;
	f32 v1;
	f32 v2;
	u16* dst;
	type_42 v3d;
	type_53 i3d;
}

// iRenderPushQuadStreak__FP4xParP10xParCmdTex
// Start address: 0x1b21e0
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	u16* indices;
	u8 r;
	u8 g;
	u8 b;
	u8 a;
	f32 size;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	f32 u1;
	f32 u2;
	f32 v1;
	f32 v2;
	u16* dst;
	type_108 v3d;
	type_3 i3d;
}

// iRenderSetCameraViewMatrix__FP7xMat4x3
// Start address: 0x1b26e0
void iRenderSetCameraViewMatrix(xMat4x3* m)
{
	RwMatrixTag* mat;
}

// iParMgrRenderParSys_Sprite__FPvP9xParGroup
// Start address: 0x1b28f0
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	s32 indexCount;
	s32 vertexCount;
	u16* i3d;
	RxObjSpace3DVertex* v3d;
	xParCmdTex* tex;
	u32 pivot;
	xVec3 offset;
	xVec3 temp_offset;
	xPar* p;
	f32 u1;
	f32 u2;
	f32 v1;
	f32 v2;
}

// iParMgrRender__Fv
// Start address: 0x1b30e0
void iParMgrRender()
{
}

// iParMgrUpdate__Ff
// Start address: 0x1b30f0
void iParMgrUpdate()
{
}

// iParMgrInit__Fv
// Start address: 0x1b3100
void iParMgrInit()
{
	s32 i;
}

