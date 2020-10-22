typedef struct RxPipeline;
typedef struct xBase;
typedef struct RwCamera;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct analog_data;
typedef struct RxPipelineNode;
typedef struct xVec3;
typedef struct xQuat;
typedef struct xGroup;
typedef struct xParGroup;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct _tagClimate;
typedef struct _tagEmitVolume;
typedef struct xMat4x3;
typedef struct xParEmitterAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct _tagWind;
typedef struct xLinkAsset;
typedef struct xBound;
typedef struct xParEmitterPropsAsset;
typedef struct xUpdateCullMgr;
typedef enum RpWorldRenderOrder;
typedef struct xScene;
typedef struct RpMaterial;
typedef struct xParSys;
typedef struct xVec4;
typedef struct _tagRain;
typedef struct RwSurfaceProperties;
typedef struct RwTexture;
typedef struct RwMatrixTag;
typedef struct _tagEmitOffsetPoint;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpSector;
typedef struct rxReq;
typedef struct xUpdateCullEnt;
typedef struct RwRaster;
typedef struct xBaseAsset;
typedef enum RxClusterValidityReq;
typedef struct xParEmitter;
typedef struct RpWorldSector;
typedef enum RxNodeDefEditable;
typedef struct _tagxRumble;
typedef enum RxClusterValid;
typedef struct xUpdateCullGroup;
typedef struct xPEVCyl;
typedef struct RpWorld;
typedef struct rxHeapFreeBlock;
typedef struct xBBox;
typedef struct xQCData;
typedef struct xParInterp;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xModelTag;
typedef struct xCylinder;
typedef enum _tagPadState;
typedef struct xPEEntBone;
typedef struct RwLLLink;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xGlobals;
typedef struct xEnvAsset;
typedef struct _tagxPad;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct xGroupAsset;
typedef struct RxOutputSpec;
typedef struct _tagPadAnalog;
typedef struct xPECircle;
typedef struct zParEmitter;
typedef struct _tagiPad;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct xVec2;
typedef struct RxIoSpec;
typedef struct RpPolygon;
typedef struct RpMaterialList;
typedef struct RxNodeMethods;
typedef struct _tagEmitSphere;
typedef struct iFogParams;
typedef struct RxPipelineCluster;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct _tagEmitRect;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct RwObjectHasFrame;
typedef struct RpMeshHeader;
typedef struct RwLinkList;
typedef struct xPEEntBound;
typedef struct _tagEmitLine;
typedef struct RwV2d;
typedef enum _tagRumbleType;
typedef struct xCamera;
typedef struct xParEmitterCustomSettings;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef int32(*type_10)(RxPipelineNode*);
typedef void(*type_11)(RxPipelineNode*);
typedef int32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_13)(RpWorldSector*);
typedef void(*type_14)(void*);
typedef RwCamera*(*type_23)(RwCamera*);
typedef RwCamera*(*type_25)(RwCamera*);
typedef uint32(*type_28)(void*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef uint8 type_3[3];
typedef RwV3d type_5[8];
typedef xVec4 type_7[12];
typedef analog_data type_9[2];
typedef float32 type_15[2];
typedef uint8 type_16[3];
typedef uint8 type_17[3];
typedef uint32 type_18[4];
typedef int8 type_19[128];
typedef float32 type_20[4];
typedef int8 type_21[128][6];
typedef int8 type_22[32];
typedef uint16 type_24[3];
typedef xParInterp type_26[1];
typedef uint8 type_27[3];
typedef int8 type_29[32];
typedef uint8 type_30[22];
typedef int8 type_31[32];
typedef uint8 type_32[22];
typedef xParInterp type_34[4];
typedef xParInterp type_35[4];
typedef RwTexCoords* type_36[8];
typedef float32 type_37[4];
typedef RxCluster type_38[1];
typedef float32 type_40[22];
typedef float32 type_41[22];

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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xParGroup
{
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

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _tagWind
{
	float32 strength;
	float32 angle;
	xVec3 dir;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		xParInterp value[1];
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	xParInterp color_birth[4];
	xParInterp color_death[4];
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xScene
{
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

struct xParSys
{
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct _tagRain
{
	int32 rain;
	float32 strength;
	zParEmitter* rain_emitter;
	zParEmitter* snow_emitter;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpSector
{
	int32 type;
};

struct rxReq
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	uint8 emit_pad[3];
	uint8 rot[3];
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct zParEmitter : xParEmitter
{
};

struct _tagiPad
{
	int32 port;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwLinkList
{
	RwLLLink link;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint8 rot[3];
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

_tagClimate* sClimate;
float32 snow_life;
xVec3 snow_vel;
xVec3 snow_dvel;
uint32 gPTankDisable;
xGlobals* xglobals;
xMat4x3 g_I3;

void xClimateUpdate(_tagClimate* climate, float32 seconds);
void UpdateRain(_tagClimate* climate, float32 seconds);
void xClimateSetRain(float32 stre);
void xClimateSetSnow(float32 stre);
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset);
void xClimateInit(_tagClimate* climate);

// xClimateUpdate__FP11_tagClimatef
// Start address: 0x1c4f20
void xClimateUpdate(_tagClimate* climate, float32 seconds)
{
	// Line 404, Address: 0x1c4f20, Func Offset: 0
	// Func End, Address: 0x1c4f28, Func Offset: 0x8
}

// UpdateRain__FP11_tagClimatef
// Start address: 0x1c4f30
void UpdateRain(_tagClimate* climate, float32 seconds)
{
	_tagRain* r;
	xParEmitterCustomSettings info;
	int32 total_rain_drops;
	int32 i;
	int32 total_snow_flakes;
	int32 i;
	float32 perc;
	int32 num;
	xVec3* pos;
	xVec3* vel;
	xVec3* pp;
	xVec3* vp;
	int32 i;
	float32 xx;
	float32 zz;
	float32 perc;
	// Line 222, Address: 0x1c4f30, Func Offset: 0
	// Line 265, Address: 0x1c4f34, Func Offset: 0x4
	// Line 222, Address: 0x1c4f38, Func Offset: 0x8
	// Line 265, Address: 0x1c4f3c, Func Offset: 0xc
	// Line 222, Address: 0x1c4f40, Func Offset: 0x10
	// Line 265, Address: 0x1c4f60, Func Offset: 0x30
	// Line 222, Address: 0x1c4f64, Func Offset: 0x34
	// Line 265, Address: 0x1c4f80, Func Offset: 0x50
	// Line 267, Address: 0x1c4f8c, Func Offset: 0x5c
	// Line 269, Address: 0x1c4f94, Func Offset: 0x64
	// Line 271, Address: 0x1c4fa0, Func Offset: 0x70
	// Line 278, Address: 0x1c4fc0, Func Offset: 0x90
	// Line 280, Address: 0x1c4fd8, Func Offset: 0xa8
	// Line 282, Address: 0x1c501c, Func Offset: 0xec
	// Line 283, Address: 0x1c503c, Func Offset: 0x10c
	// Line 282, Address: 0x1c5040, Func Offset: 0x110
	// Line 283, Address: 0x1c5050, Func Offset: 0x120
	// Line 284, Address: 0x1c5060, Func Offset: 0x130
	// Line 286, Address: 0x1c5074, Func Offset: 0x144
	// Line 284, Address: 0x1c5078, Func Offset: 0x148
	// Line 286, Address: 0x1c5094, Func Offset: 0x164
	// Line 287, Address: 0x1c50a0, Func Offset: 0x170
	// Line 288, Address: 0x1c50b0, Func Offset: 0x180
	// Line 292, Address: 0x1c50b8, Func Offset: 0x188
	// Line 300, Address: 0x1c50c0, Func Offset: 0x190
	// Line 292, Address: 0x1c50c4, Func Offset: 0x194
	// Line 306, Address: 0x1c50c8, Func Offset: 0x198
	// Line 304, Address: 0x1c50cc, Func Offset: 0x19c
	// Line 292, Address: 0x1c50d4, Func Offset: 0x1a4
	// Line 300, Address: 0x1c50d8, Func Offset: 0x1a8
	// Line 304, Address: 0x1c50e0, Func Offset: 0x1b0
	// Line 306, Address: 0x1c50e4, Func Offset: 0x1b4
	// Line 292, Address: 0x1c50e8, Func Offset: 0x1b8
	// Line 304, Address: 0x1c50f0, Func Offset: 0x1c0
	// Line 306, Address: 0x1c511c, Func Offset: 0x1ec
	// Line 309, Address: 0x1c5124, Func Offset: 0x1f4
	// Line 311, Address: 0x1c5148, Func Offset: 0x218
	// Line 314, Address: 0x1c5150, Func Offset: 0x220
	// Line 315, Address: 0x1c517c, Func Offset: 0x24c
	// Line 320, Address: 0x1c519c, Func Offset: 0x26c
	// Line 321, Address: 0x1c51a4, Func Offset: 0x274
	// Line 315, Address: 0x1c51a8, Func Offset: 0x278
	// Line 320, Address: 0x1c51b8, Func Offset: 0x288
	// Line 321, Address: 0x1c51c4, Func Offset: 0x294
	// Line 320, Address: 0x1c51c8, Func Offset: 0x298
	// Line 323, Address: 0x1c51e0, Func Offset: 0x2b0
	// Line 324, Address: 0x1c5200, Func Offset: 0x2d0
	// Line 325, Address: 0x1c5220, Func Offset: 0x2f0
	// Line 327, Address: 0x1c522c, Func Offset: 0x2fc
	// Line 325, Address: 0x1c5230, Func Offset: 0x300
	// Line 331, Address: 0x1c5234, Func Offset: 0x304
	// Line 327, Address: 0x1c5238, Func Offset: 0x308
	// Line 329, Address: 0x1c5244, Func Offset: 0x314
	// Line 325, Address: 0x1c5248, Func Offset: 0x318
	// Line 327, Address: 0x1c525c, Func Offset: 0x32c
	// Line 329, Address: 0x1c5270, Func Offset: 0x340
	// Line 331, Address: 0x1c527c, Func Offset: 0x34c
	// Line 332, Address: 0x1c5288, Func Offset: 0x358
	// Line 334, Address: 0x1c5298, Func Offset: 0x368
	// Line 340, Address: 0x1c52a0, Func Offset: 0x370
	// Line 342, Address: 0x1c52c8, Func Offset: 0x398
	// Line 343, Address: 0x1c52d0, Func Offset: 0x3a0
	// Line 344, Address: 0x1c52e0, Func Offset: 0x3b0
	// Line 343, Address: 0x1c52e4, Func Offset: 0x3b4
	// Line 344, Address: 0x1c52e8, Func Offset: 0x3b8
	// Line 345, Address: 0x1c52f0, Func Offset: 0x3c0
	// Line 348, Address: 0x1c52f8, Func Offset: 0x3c8
	// Line 346, Address: 0x1c52fc, Func Offset: 0x3cc
	// Line 347, Address: 0x1c5300, Func Offset: 0x3d0
	// Line 348, Address: 0x1c5304, Func Offset: 0x3d4
	// Line 349, Address: 0x1c5310, Func Offset: 0x3e0
	// Line 352, Address: 0x1c5318, Func Offset: 0x3e8
	// Line 353, Address: 0x1c5344, Func Offset: 0x414
	// Line 359, Address: 0x1c5364, Func Offset: 0x434
	// Line 358, Address: 0x1c5368, Func Offset: 0x438
	// Line 361, Address: 0x1c5370, Func Offset: 0x440
	// Line 353, Address: 0x1c5374, Func Offset: 0x444
	// Line 358, Address: 0x1c537c, Func Offset: 0x44c
	// Line 361, Address: 0x1c5380, Func Offset: 0x450
	// Line 353, Address: 0x1c5384, Func Offset: 0x454
	// Line 356, Address: 0x1c538c, Func Offset: 0x45c
	// Line 357, Address: 0x1c5390, Func Offset: 0x460
	// Line 359, Address: 0x1c5394, Func Offset: 0x464
	// Line 361, Address: 0x1c5398, Func Offset: 0x468
	// Line 356, Address: 0x1c539c, Func Offset: 0x46c
	// Line 357, Address: 0x1c53a0, Func Offset: 0x470
	// Line 358, Address: 0x1c53a4, Func Offset: 0x474
	// Line 359, Address: 0x1c53b0, Func Offset: 0x480
	// Line 361, Address: 0x1c53b4, Func Offset: 0x484
	// Line 363, Address: 0x1c53c0, Func Offset: 0x490
	// Line 364, Address: 0x1c53e0, Func Offset: 0x4b0
	// Line 365, Address: 0x1c5400, Func Offset: 0x4d0
	// Line 372, Address: 0x1c540c, Func Offset: 0x4dc
	// Line 365, Address: 0x1c5410, Func Offset: 0x4e0
	// Line 372, Address: 0x1c5414, Func Offset: 0x4e4
	// Line 365, Address: 0x1c541c, Func Offset: 0x4ec
	// Line 372, Address: 0x1c5430, Func Offset: 0x500
	// Line 374, Address: 0x1c5438, Func Offset: 0x508
	// Line 375, Address: 0x1c5448, Func Offset: 0x518
	// Line 381, Address: 0x1c5450, Func Offset: 0x520
	// Func End, Address: 0x1c5494, Func Offset: 0x564
}

// xClimateSetRain__Ff
// Start address: 0x1c54a0
void xClimateSetRain(float32 stre)
{
	// Line 167, Address: 0x1c54a0, Func Offset: 0
	// Line 168, Address: 0x1c54ac, Func Offset: 0xc
	// Line 169, Address: 0x1c54b0, Func Offset: 0x10
	// Func End, Address: 0x1c54b8, Func Offset: 0x18
}

// xClimateSetSnow__Ff
// Start address: 0x1c54c0
void xClimateSetSnow(float32 stre)
{
	// Line 160, Address: 0x1c54c0, Func Offset: 0
	// Line 161, Address: 0x1c54c8, Func Offset: 0x8
	// Line 162, Address: 0x1c54cc, Func Offset: 0xc
	// Func End, Address: 0x1c54d4, Func Offset: 0x14
}

// xClimateInitAsset__FP11_tagClimateP9xEnvAsset
// Start address: 0x1c54e0
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset)
{
	_tagWind* w;
	// Line 107, Address: 0x1c54e0, Func Offset: 0
	// Line 120, Address: 0x1c54e4, Func Offset: 0x4
	// Line 107, Address: 0x1c54e8, Func Offset: 0x8
	// Line 120, Address: 0x1c5504, Func Offset: 0x24
	// Line 114, Address: 0x1c5508, Func Offset: 0x28
	// Line 120, Address: 0x1c550c, Func Offset: 0x2c
	// Line 119, Address: 0x1c5510, Func Offset: 0x30
	// Line 118, Address: 0x1c5514, Func Offset: 0x34
	// Line 120, Address: 0x1c5518, Func Offset: 0x38
	// Line 124, Address: 0x1c557c, Func Offset: 0x9c
	// Line 127, Address: 0x1c5584, Func Offset: 0xa4
	// Line 129, Address: 0x1c5588, Func Offset: 0xa8
	// Line 130, Address: 0x1c5590, Func Offset: 0xb0
	// Line 133, Address: 0x1c559c, Func Offset: 0xbc
	// Line 134, Address: 0x1c55a0, Func Offset: 0xc0
	// Line 133, Address: 0x1c55a4, Func Offset: 0xc4
	// Line 134, Address: 0x1c55a8, Func Offset: 0xc8
	// Line 135, Address: 0x1c55c0, Func Offset: 0xe0
	// Line 136, Address: 0x1c55cc, Func Offset: 0xec
	// Line 137, Address: 0x1c55d8, Func Offset: 0xf8
	// Line 140, Address: 0x1c55e4, Func Offset: 0x104
	// Line 141, Address: 0x1c55e8, Func Offset: 0x108
	// Line 142, Address: 0x1c5608, Func Offset: 0x128
	// Line 154, Address: 0x1c5618, Func Offset: 0x138
	// Func End, Address: 0x1c5634, Func Offset: 0x154
}

// xClimateInit__FP11_tagClimate
// Start address: 0x1c5640
void xClimateInit(_tagClimate* climate)
{
	// Line 85, Address: 0x1c5640, Func Offset: 0
	// Line 88, Address: 0x1c564c, Func Offset: 0xc
	// Line 89, Address: 0x1c5654, Func Offset: 0x14
	// Line 93, Address: 0x1c566c, Func Offset: 0x2c
	// Line 91, Address: 0x1c5670, Func Offset: 0x30
	// Line 93, Address: 0x1c5674, Func Offset: 0x34
	// Line 91, Address: 0x1c5678, Func Offset: 0x38
	// Line 93, Address: 0x1c5680, Func Offset: 0x40
	// Line 95, Address: 0x1c5694, Func Offset: 0x54
	// Line 100, Address: 0x1c56a4, Func Offset: 0x64
	// Func End, Address: 0x1c56b4, Func Offset: 0x74
}

