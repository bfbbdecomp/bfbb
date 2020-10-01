typedef struct RxPipelineNodeParam;
typedef enum RwPrimitiveType;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct RxPS2AllPipeData;
typedef struct RwTexture;
typedef struct RwRGBA;
typedef struct rwPS2AllFieldRec;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxNodePS2AllMatPvtData;
typedef struct rxHeapBlockHeader;
typedef struct DBWATCHData;
typedef struct sceCdCLOCK;
typedef struct RpPDSSkyMatTemplate;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct RpPDSSkyVU1CodeTemplate;
typedef enum RxInstanceFlags;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef enum RwVideoModeFlag;
typedef struct rwPS2AllResEntryFormat;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct RpPDSSkyObjTemplate;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef enum RpPDSPipeType;
typedef struct RxClusterDefinition;
typedef struct RwTexDictionary;
typedef struct RwVideoMode;
typedef struct RxOutputSpec;
typedef union RpPDSPipeDefinition;
typedef struct RxClusterRef;
typedef struct RwMeshCache;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMesh;
typedef struct RxIoSpec;
typedef struct RwResEntry;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RpPDSRegister;
typedef enum RpPDSPipeID;
typedef struct rxNodePS2AllPvtData;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RpPDSSkyMatCluster;
typedef struct RpMeshHeader;
typedef struct RxPacket;
typedef struct RwEngineOpenParams;
typedef struct RwLinkList;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RpPDSSkyMatPrimitive;
typedef enum RpMeshHeaderFlags;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_1)(RxPS2AllPipeData*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_5)(RxPS2AllPipeData*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, uint32, type_31);
typedef void(*type_9)(RxNodeDefinition*);
typedef int32(*type_10)(RxPS2AllPipeData*, void**, uint32);
typedef int32(*type_11)(RxPipelineNode*);
typedef int32(*type_12)(RxPS2AllPipeData*);
typedef RwTexture*(*type_14)(int8*, int8*);
typedef void(*type_15)(RxPipelineNode*);
typedef int32(*type_23)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_25)(RxPS2AllPipeData*);
typedef void(*type_31)(RwResEntry*);
typedef int32(*type_34)(int32);

typedef int8 type_3[512];
typedef RpPDSSkyMatCluster type_8[10];
typedef uint8 type_13[1];
typedef int8 type_16[16];
typedef int8 type_17[256];
typedef int8 type_18[16];
typedef rwPS2AllClusterInstanceInfo type_19[12];
typedef uint32 type_20[12];
typedef uint8 type_21[2];
typedef int8* type_22[3];
typedef rwPS2AllFieldRec type_24[12];
typedef uint32 type_26[4];
typedef int8* type_27[3];
typedef RwResEntry* type_28[1];
typedef int8 type_29[32];
typedef int8 type_30[32];
typedef int8 type_32[256];
typedef RxCluster type_33[1];

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum RwPrimitiveType
{
	rwPRIMTYPENAPRIMTYPE,
	rwPRIMTYPELINELIST,
	rwPRIMTYPEPOLYLINE,
	rwPRIMTYPETRILIST,
	rwPRIMTYPETRISTRIP,
	rwPRIMTYPETRIFAN,
	rwPRIMTYPEPOINTLIST,
	rwPRIMITIVETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	uint32 objIdentifier;
	float32 spExtra;
	int32 numMorphTargets;
	uint32 fastMorphing;
	uint8 transType;
	uint8 primType;
	uint8 matModulate;
	uint8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	uint32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_29 name;
	type_30 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct rwPS2AllFieldRec
{
	int32 numVerts;
	int32 morphNumVerts;
	int32 dataoffset;
	int32 morphDataoffset;
	int16 skip;
	int16 morphSkip;
	int16 reverse;
	uint8 vuoffset;
	type_13 pad;
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

struct rxNodePS2AllMatPvtData
{
	type_5 meshInstanceTestCB;
	type_7 resEntryAllocCB;
	type_10 instanceCB;
	type_12 bridgeCB;
	type_1 postMeshCB;
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	type_19 clinfo;
	type_20 cliIndex;
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_26 pad;
};

struct DBWATCHData
{
	type_3 putWatchOnMe;
};

struct sceCdCLOCK
{
	uint8 stat;
	uint8 second;
	uint8 minute;
	uint8 hour;
	uint8 pad;
	uint8 day;
	uint8 month;
	uint8 year;
};

struct RpPDSSkyMatTemplate
{
	uint32 pluginId;
	uint32 pluginData;
	type_8 clusters;
	RpPDSSkyMatPrimitive primitive;
	RpPDSSkyVU1CodeTemplate* vu1code;
	type_5 meshInstanceTestCallBack;
	type_7 resEntryAllocCallBack;
	type_10 instanceCallBack;
	type_12 bridgeCallBack;
	type_1 postMeshCallBack;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RpPDSSkyVU1CodeTemplate
{
	void** array;
	uint32 slots;
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x100,
	rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x200,
	rwVIDEOMODE_XBOX_WIDESCREEN = 0x100,
	rwVIDEOMODE_XBOX_PROGRESSIVE = 0x200,
	rwVIDEOMODE_XBOX_FIELD = 0x400,
	rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x800,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	type_21 pad;
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	type_24 fieldRec;
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

struct RpPDSSkyObjTemplate
{
	uint32 pluginId;
	uint32 pluginData;
	type_23 objectSetupCallBack;
	type_25 objectFinalizeCallBack;
	RxPipeline* matGroup;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum RpPDSPipeType
{
	rpNAPDSPIPETYPE,
	rpPDSMATPIPE,
	rpPDSOBJPIPE,
	rpPDSPIPETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
	int32 refRate;
	int32 format;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

union RpPDSPipeDefinition
{
	void* ptr;
	RpPDSSkyMatTemplate* mat;
	RpPDSSkyObjTemplate* obj;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	type_28 meshes;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_31 destroyNotify;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_9 nodeTerm;
	type_11 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RpPDSRegister
{
	RpPDSPipeDefinition def;
	RpPDSPipeID attachId;
	RpPDSPipeID id;
	RpPDSPipeType type;
	RxPipeline* pipe;
};

enum RpPDSPipeID
{
	rpNAPDSPIPEID,
	rwPDS_G3_Generic_MatPipeID,
	rwPDS_G3_Generic_AtmPipeID,
	rwPDS_G3_Generic_SctPipeID,
	rwPDS_G3_Im3D_TriPipeID,
	rwPDS_G3_Im3D_SegPipeID,
	rwPDS_G3_Im3D_TriObjPipeID,
	rwPDS_G3_Im3D_SegObjPipeID,
	rwPDS_G3_Generic_GrpMatPipeID = 0x1001,
	rwPDS_G3_Generic_GrpAtmPipeID,
	rwPDS_G3_Generic_GrpSctPipeID,
	rwPDS_G3_Skin_MatPipeID = 0x10001,
	rwPDS_G3_Skin_AtmPipeID,
	rwPDS_G3_Emb_MatPipeID,
	rwPDS_G3_Gem_MatPipeID,
	rwPDS_G3_Bem_MatPipeID,
	rwPDS_G3_Dup_MatPipeID,
	rwPDS_G3_Toon_MatPipeID,
	rwPDS_G3_SkinEmb_MatPipeID,
	rwPDS_G3_SkinGem_MatPipeID,
	rwPDS_G3_SkinBem_MatPipeID,
	rwPDS_G3_SkinDup_MatPipeID,
	rwPDS_G3_SkinToon_MatPipeID,
	rwPDS_G2_BPatch_AtmPipeID,
	rwPDS_G2_BPatch_MatPipeID,
	rwPDS_G2_SkinBPatch_AtmPipeID,
	rwPDS_G2_SkinBPatch_MatPipeID,
	rwPDS_G2_EmbBPatch_MatPipeID,
	rwPDS_G2_GemBPatch_MatPipeID,
	rwPDS_G2_BemBPatch_MatPipeID,
	rwPDS_G2_DupBPatch_MatPipeID,
	rwPDS_G2_SkinEmbBPatch_MatPipeID,
	rwPDS_G2_SkinGemBPatch_MatPipeID,
	rwPDS_G2_SkinBemBPatch_MatPipeID,
	rwPDS_G2_SkinDupBPatch_MatPipeID,
	rwPDS_G3_2DStroke_MatPipeID,
	rwPDS_G3_2DStroke_ObjPipeID,
	rwPDS_G3_2DFont_MatPipeID,
	rwPDS_G3_2DFont_ObjPipeID,
	rwPDS_G3_2DFill_MatPipeID,
	rwPDS_G3_2DFill_ObjPipeID,
	rwPDS_G3_SkSpt_AtmPipeID,
	rwPDS_G3_SkSpt_MatPipeID,
	rwPDS_G3_SkSptEmb_MatPipeID,
	rwPDS_G3_SkSptGem_MatPipeID,
	rwPDS_G3_SkSptBem_MatPipeID,
	rwPDS_G3_SkSptDup_MatPipeID,
	rwPDS_G3_SkSptToon_MatPipeID,
	rwPDS_G3_Uva_MatPipeID,
	rwPDS_G3_DupUva_MatPipeID,
	rwPDS_G3_SkinUva_MatPipeID,
	rwPDS_G3_SkinDupUva_MatPipeID,
	rwPDS_G3_SkSptUva_MatPipeID,
	rwPDS_G3_SkSptDupUva_MatPipeID,
	rwPDS_G3_Skin_GrpMatPipeID = 0x11001,
	rwPDS_G3_Skin_GrpAtmPipeID,
	rwPDS_G2_DarkMaps_GrpMatPipeID,
	rwPDS_G2_DarkMaps_GrpAtmPipeID,
	rwPDS_G2_DarkMaps_GrpSctPipeID,
	rwPDS_G3_Toon_GrpMatPipeID,
	rwPDS_G3_Toon_GrpAtmPipeID,
	rwPDS_G3_Toon_GrpSctPipeID,
	rwPDS_G3_SkinToon_GrpMatPipeID,
	rwPDS_G3_SkinToon_GrpAtmPipeID,
	rwPDS_G3_MatfxUV1_GrpMatPipeID,
	rwPDS_G3_MatfxUV2_GrpMatPipeID,
	rwPDS_G3_MatfxUV1_GrpAtmPipeID,
	rwPDS_G3_MatfxUV2_GrpAtmPipeID,
	rwPDS_G3_MatfxUV1_GrpSctPipeID,
	rwPDS_G3_MatfxUV2_GrpSctPipeID,
	rwPDS_G3_SkinfxUV1_GrpMatPipeID,
	rwPDS_G3_SkinfxUV2_GrpMatPipeID,
	rwPDS_G3_SkinfxUV1_GrpAtmPipeID,
	rwPDS_G3_SkinfxUV2_GrpAtmPipeID,
	rwPDS_G2_BPatch_GrpAtmPipeID,
	rwPDS_G2_BPatch_GrpMatPipeID,
	rwPDS_G2_SkinBPatch_GrpAtmPipeID,
	rwPDS_G2_SkinBPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV1BPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV2BPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV1BPatch_GrpAtmPipeID,
	rwPDS_G2_MatfxUV2BPatch_GrpAtmPipeID,
	rwPDS_G2_SkinfxUV1BPatch_GrpMatPipeID,
	rwPDS_G2_SkinfxUV2BPatch_GrpMatPipeID,
	rwPDS_G2_SkinfxUV1BPatch_GrpAtmPipeID,
	rwPDS_G2_SkinfxUV2BPatch_GrpAtmPipeID,
	rwPDS_VCL_Uva_MatPipeID = 0x12000,
	rwPDS_VCL_DupUva_MatPipeID,
	rwPDS_VCL_SkinUva_MatPipeID,
	rwPDS_VCL_SkinDupUva_MatPipeID,
	rwPDS_G3x_Generic_AtmPipeID = 0x50001,
	rwPDS_G3x_APL_MatPipeID,
	rwPDS_G3x_ADL_MatPipeID,
	rwPDS_G3x_A4D_MatPipeID,
	rwPDS_G3x_APLDup_MatPipeID,
	rwPDS_G3x_ADLDup_MatPipeID,
	rwPDS_G3x_A4DDup_MatPipeID,
	rwPDS_G3x_APLGem_MatPipeID,
	rwPDS_G3x_ADLGem_MatPipeID,
	rwPDS_G3x_A4DGem_MatPipeID,
	rwPDS_G3x_Skin_AtmPipeID,
	rwPDS_G3x_APLSkin_MatPipeID,
	rwPDS_G3x_ADLSkin_MatPipeID,
	rwPDS_G3x_A4DSkin_MatPipeID,
	rwPDS_G3x_APLSkinDup_MatPipeID,
	rwPDS_G3x_ADLSkinDup_MatPipeID,
	rwPDS_G3x_A4DSkinDup_MatPipeID,
	rwPDS_G3x_APLSkinGem_MatPipeID,
	rwPDS_G3x_ADLSkinGem_MatPipeID,
	rwPDS_G3x_A4DSkinGem_MatPipeID,
	rwPDS_G3x_ADLClone_MatPipeID,
	rwPDS_G3x_ADLClone_AtmPipeID,
	rwPDS_G3x_OPLClone_MatPipeID,
	rwPDS_G3x_OPLClone_AtmPipeID,
	rwPDS_G3x_Team_MatPipeID,
	rwPDS_G3x_DupTeam_MatPipeID,
	rwPDS_G3x_GemTeam_MatPipeID,
	rwPDS_G3x_SkinTeam_MatPipeID,
	rwPDS_G3x_SkinDupTeam_MatPipeID,
	rwPDS_G3x_SkinGemTeam_MatPipeID,
	rwPDS_G3x_Team_AtmPipeID,
	rwPDS_G3x_SkinTeam_AtmPipeID,
	rwPDS_G3x_APLUva_MatPipeID,
	rwPDS_G3x_ADLUva_MatPipeID,
	rwPDS_G3x_A4DUva_MatPipeID,
	rwPDS_G3x_APLDupUva_MatPipeID,
	rwPDS_G3x_ADLDupUva_MatPipeID,
	rwPDS_G3x_A4DDupUva_MatPipeID,
	rwPDS_G3x_APLSkinUva_MatPipeID,
	rwPDS_G3x_ADLSkinUva_MatPipeID,
	rwPDS_G3x_A4DSkinUva_MatPipeID,
	rwPDS_G3x_APLSkDupUva_MatPipeID,
	rwPDS_G3x_ADLSkDupUva_MatPipeID,
	rwPDS_G3x_A4DSkDupUva_MatPipeID,
	rwPDS_G3xd_APL_MatPipeID,
	rwPDS_G3xd_ADL_MatPipeID,
	rwPDS_G3xd_A4D_MatPipeID,
	rwPDS_G3xd_APLDup_MatPipeID,
	rwPDS_G3xd_ADLDup_MatPipeID,
	rwPDS_G3xd_A4DDup_MatPipeID,
	rwPDS_G3xd_APLGem_MatPipeID,
	rwPDS_G3xd_ADLGem_MatPipeID,
	rwPDS_G3xd_A4DGem_MatPipeID,
	rwPDS_G3xd_APLUva_MatPipeID,
	rwPDS_G3xd_ADLUva_MatPipeID,
	rwPDS_G3xd_A4DUva_MatPipeID,
	rwPDS_G3xd_APLDupUva_MatPipeID,
	rwPDS_G3xd_ADLDupUva_MatPipeID,
	rwPDS_G3xd_A4DDupUva_MatPipeID,
	rwPDS_G3xd_APLSkin_MatPipeID,
	rwPDS_G3xd_ADLSkin_MatPipeID,
	rwPDS_G3xd_A4DSkin_MatPipeID,
	rwPDS_G3xd_APLSkinDup_MatPipeID,
	rwPDS_G3xd_ADLSkinDup_MatPipeID,
	rwPDS_G3xd_A4DSkinDup_MatPipeID,
	rwPDS_G3xd_APLSkinGem_MatPipeID,
	rwPDS_G3xd_ADLSkinGem_MatPipeID,
	rwPDS_G3xd_A4DSkinGem_MatPipeID,
	rwPDS_G3xd_APLSkinUva_MatPipeID,
	rwPDS_G3xd_ADLSkinUva_MatPipeID,
	rwPDS_G3xd_A4DSkinUva_MatPipeID,
	rwPDS_G3xd_APLSkDupUva_MatPipeID,
	rwPDS_G3xd_ADLSkDupUva_MatPipeID,
	rwPDS_G3xd_A4DSkDupUva_MatPipeID,
	rwPDS_VCL_Generic_AtmPipeID = 0x51000,
	rwPDS_VCL_ADLDot3_MatPipeID,
	rwPDS_VCL_APLDot3_MatPipeID,
	rwPDS_VCL_ADLSpec_MatPipeID,
	rwPDS_VCL_APLSpec_MatPipeID,
	rwPDS_VCL_Skin_AtmPipeID,
	rwPDS_VCL_ADLSkinDot3_MatPipeID,
	rwPDS_VCL_APLSkinDot3_MatPipeID,
	rwPDS_VCL_ADLSkinSpec_MatPipeID,
	rwPDS_VCL_APLSkinSpec_MatPipeID,
	rpPDSMAXPIPEID,
	rpPDSPIPEIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxNodePS2AllPvtData
{
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

struct RpPDSSkyMatCluster
{
	RxClusterDefinition* definition;
	uint32 type;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_33 clusters;
};

struct RwEngineOpenParams
{
	void* displayID;
};

struct RwLinkList
{
	RwLLLink link;
};

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
};

struct RpPDSSkyMatPrimitive
{
	RwPrimitiveType type;
	int32 clusterStride;
	int32 vertexCount;
	int32 primCount;
	int32 vifOffset;
};

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

type_16 buffer;
type_18 buffer;
void* hackResourceArenaPointer;
int32 DVD;
int32 g_dumpEachAllocOp;
RwVideoMode sVideoMode;
int32 gFB_Flags;
DBWATCHData* g_watchthisblock;
uint32 gVsyncCount;
uint32 gTransitionSceneID;
type_34 vsyncCounterHandler;
type_14 TextureRead;
RpPDSSkyObjTemplate rwPDS_G3_SkinfxUV2_AtmPipe;
RpPDSSkyObjTemplate rwPDS_G3_SkinfxUV1_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_SkinfxUV2_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3_SkinfxUV1_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_Skin_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_Skin_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV2_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV1_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV2_AtmPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV1_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_MatfxUV2_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3_MatfxUV1_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_Im3D_SegObjPipe;
RpPDSSkyObjTemplate rwPDS_G3_Im3D_TriObjPipe;
RpPDSSkyMatTemplate rwPDS_G3_Im3D_SegPipe;
RpPDSSkyMatTemplate rwPDS_G3_Im3D_TriPipe;
RpPDSSkyObjTemplate rwPDS_G3_Generic_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_Generic_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_Generic_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_OPLClone_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3x_OPLClone_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DSkinGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLSkinGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4D_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADL_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_A4DSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_ADLSkin_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_Skin_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3x_A4D_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_ADL_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_Generic_AtmPipe;

void iSystem_GapTrackReport();
void iLoadModule(int8* moduleName, int8* arguments);
uint32 iGetCurrFormattedTime(int8* str);
uint32 iGetCurrFormattedDate(int8* str);
uint8 iGetMonth();
uint8 iGetDay();
uint8 iGetHour();
uint8 iGetMinute();
void iVSync();
RwTexture* TextureRead(int8* name, int8* maskName);
uint32 iRenderWareInit();
int32 vsyncCounterHandler();
uint32 RWAttachPlugins();
void iSystemExit();
void iSystemInit(uint32 options);
uint32 psSelectDevice();

// iSystem_GapTrackReport__Fv
// Start address: 0x1b9c50
void iSystem_GapTrackReport()
{
}

// iLoadModule__FPCcPCc
// Start address: 0x1b9c60
void iLoadModule(int8* moduleName, int8* arguments)
{
	type_32 workingName;
	int32 j;
	int32 errorCode;
	type_22 PATHS_CDROM;
	type_27 PATHS_HOST;
}

// iGetCurrFormattedTime__FPc
// Start address: 0x1b9db0
uint32 iGetCurrFormattedTime(int8* str)
{
	sceCdCLOCK clock;
}

// iGetCurrFormattedDate__FPc
// Start address: 0x1b9f10
uint32 iGetCurrFormattedDate(int8* str)
{
	sceCdCLOCK clock;
}

// iGetMonth__Fv
// Start address: 0x1ba010
uint8 iGetMonth()
{
	sceCdCLOCK clock;
}

// iGetDay__Fv
// Start address: 0x1ba040
uint8 iGetDay()
{
	sceCdCLOCK clock;
}

// iGetHour__Fv
// Start address: 0x1ba070
uint8 iGetHour()
{
	sceCdCLOCK clock;
}

// iGetMinute__Fv
// Start address: 0x1ba0a0
uint8 iGetMinute()
{
	sceCdCLOCK clock;
}

// iVSync__Fv
// Start address: 0x1ba0d0
void iVSync()
{
}

// TextureRead__FPCcPCc
// Start address: 0x1ba0e0
RwTexture* TextureRead(int8* name, int8* maskName)
{
	type_17 tmpname;
	RwTexture* result;
	uint32 assetid;
	uint32 tmpsize;
}

// iRenderWareInit__Fv
// Start address: 0x1ba1e0
uint32 iRenderWareInit()
{
	RwEngineOpenParams openParams;
}

// vsyncCounterHandler__Fi
// Start address: 0x1ba2e0
int32 vsyncCounterHandler()
{
}

// RWAttachPlugins__Fv
// Start address: 0x1ba300
uint32 RWAttachPlugins()
{
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
}

// iSystemExit__Fv
// Start address: 0x1bab10
void iSystemExit()
{
}

// iSystemInit__FUi
// Start address: 0x1bab70
void iSystemInit(uint32 options)
{
	int8* CDROM_IMAGE_FILE;
	int8* HOSTIO_IMAGE_FILE;
	int8* iopImageFile;
	int32 disk_type;
}

// psSelectDevice__Fv
// Start address: 0x1bad40
uint32 psSelectDevice()
{
	RwVideoMode videoMode;
	int32 i;
	int32 num;
}

