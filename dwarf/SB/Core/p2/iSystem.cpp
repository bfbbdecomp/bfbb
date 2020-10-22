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
typedef struct RpPDSPipeDefinition;
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
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
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
	int8 name[32];
	int8 mask[32];
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
	uint8 pad[1];
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
	int32(*meshInstanceTestCB)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCB)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCB)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCB)(RxPS2AllPipeData*);
	int32(*postMeshCB)(RxPS2AllPipeData*);
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	rwPS2AllClusterInstanceInfo clinfo[12];
	uint32 cliIndex[12];
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
	uint32 pad[4];
};

struct DBWATCHData
{
	int8 putWatchOnMe[512];
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
	RpPDSSkyMatCluster clusters[10];
	RpPDSSkyMatPrimitive primitive;
	RpPDSSkyVU1CodeTemplate* vu1code;
	int32(*meshInstanceTestCallBack)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCallBack)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCallBack)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCallBack)(RxPS2AllPipeData*);
	int32(*postMeshCallBack)(RxPS2AllPipeData*);
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
	uint8 pad[2];
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	rwPS2AllFieldRec fieldRec[12];
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
	int32(*objectSetupCallBack)(RxPS2AllPipeData*, RwMatrixTag**);
	int32(*objectFinalizeCallBack)(RxPS2AllPipeData*);
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

struct RpPDSPipeDefinition
{
	union
	{
		void* ptr;
		RpPDSSkyMatTemplate* mat;
		RpPDSSkyObjTemplate* obj;
	};
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
	RwResEntry* meshes[1];
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
	void(*destroyNotify)(RwResEntry*);
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
	RxCluster clusters[1];
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

int8 buffer[16];
int8 buffer[16];
void* hackResourceArenaPointer;
int32 DVD;
int32 g_dumpEachAllocOp;
RwVideoMode sVideoMode;
int32 gFB_Flags;
DBWATCHData* g_watchthisblock;
uint32 gVsyncCount;
uint32 gTransitionSceneID;
int32(*vsyncCounterHandler)(int32);
RwTexture*(*TextureRead)(int8*, int8*);
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
	// Line 2562, Address: 0x1b9c50, Func Offset: 0
	// Func End, Address: 0x1b9c58, Func Offset: 0x8
}

// iLoadModule__FPCcPCc
// Start address: 0x1b9c60
void iLoadModule(int8* moduleName, int8* arguments)
{
	int8 workingName[256];
	int32 j;
	int32 errorCode;
	int8* PATHS_CDROM[3];
	int8* PATHS_HOST[3];
	// Line 1874, Address: 0x1b9c60, Func Offset: 0
	// Line 1891, Address: 0x1b9c64, Func Offset: 0x4
	// Line 1874, Address: 0x1b9c68, Func Offset: 0x8
	// Line 1891, Address: 0x1b9c7c, Func Offset: 0x1c
	// Line 1894, Address: 0x1b9c9c, Func Offset: 0x3c
	// Line 1896, Address: 0x1b9ca8, Func Offset: 0x48
	// Line 1897, Address: 0x1b9cb4, Func Offset: 0x54
	// Line 1898, Address: 0x1b9cc0, Func Offset: 0x60
	// Line 1899, Address: 0x1b9cdc, Func Offset: 0x7c
	// Line 1900, Address: 0x1b9ce8, Func Offset: 0x88
	// Line 1902, Address: 0x1b9cf8, Func Offset: 0x98
	// Line 1901, Address: 0x1b9cfc, Func Offset: 0x9c
	// Line 1900, Address: 0x1b9d00, Func Offset: 0xa0
	// Line 1901, Address: 0x1b9d04, Func Offset: 0xa4
	// Line 1902, Address: 0x1b9d0c, Func Offset: 0xac
	// Line 1903, Address: 0x1b9d18, Func Offset: 0xb8
	// Line 1904, Address: 0x1b9d38, Func Offset: 0xd8
	// Line 1905, Address: 0x1b9d3c, Func Offset: 0xdc
	// Line 1904, Address: 0x1b9d40, Func Offset: 0xe0
	// Line 1905, Address: 0x1b9d44, Func Offset: 0xe4
	// Line 1909, Address: 0x1b9d50, Func Offset: 0xf0
	// Line 1910, Address: 0x1b9d70, Func Offset: 0x110
	// Line 1927, Address: 0x1b9d7c, Func Offset: 0x11c
	// Line 1930, Address: 0x1b9d88, Func Offset: 0x128
	// Line 1932, Address: 0x1b9d98, Func Offset: 0x138
	// Func End, Address: 0x1b9db0, Func Offset: 0x150
}

// iGetCurrFormattedTime__FPc
// Start address: 0x1b9db0
uint32 iGetCurrFormattedTime(int8* str)
{
	sceCdCLOCK clock;
	// Line 1772, Address: 0x1b9db0, Func Offset: 0
	// Line 1774, Address: 0x1b9dc0, Func Offset: 0x10
	// Line 1777, Address: 0x1b9dd0, Func Offset: 0x20
	// Line 1778, Address: 0x1b9ddc, Func Offset: 0x2c
	// Line 1779, Address: 0x1b9dec, Func Offset: 0x3c
	// Line 1780, Address: 0x1b9df0, Func Offset: 0x40
	// Line 1781, Address: 0x1b9df8, Func Offset: 0x48
	// Line 1782, Address: 0x1b9ef0, Func Offset: 0x140
	// Line 1784, Address: 0x1b9ef8, Func Offset: 0x148
	// Func End, Address: 0x1b9f08, Func Offset: 0x158
}

// iGetCurrFormattedDate__FPc
// Start address: 0x1b9f10
uint32 iGetCurrFormattedDate(int8* str)
{
	sceCdCLOCK clock;
	// Line 1758, Address: 0x1b9f10, Func Offset: 0
	// Line 1760, Address: 0x1b9f20, Func Offset: 0x10
	// Line 1763, Address: 0x1b9f30, Func Offset: 0x20
	// Line 1764, Address: 0x1b9f3c, Func Offset: 0x2c
	// Line 1765, Address: 0x1b9f4c, Func Offset: 0x3c
	// Line 1766, Address: 0x1b9f50, Func Offset: 0x40
	// Line 1767, Address: 0x1b9f58, Func Offset: 0x48
	// Line 1768, Address: 0x1b9ff8, Func Offset: 0xe8
	// Line 1769, Address: 0x1ba000, Func Offset: 0xf0
	// Func End, Address: 0x1ba010, Func Offset: 0x100
}

// iGetMonth__Fv
// Start address: 0x1ba010
uint8 iGetMonth()
{
	sceCdCLOCK clock;
	// Line 1705, Address: 0x1ba010, Func Offset: 0
	// Line 1707, Address: 0x1ba018, Func Offset: 0x8
	// Line 1708, Address: 0x1ba020, Func Offset: 0x10
	// Line 1709, Address: 0x1ba028, Func Offset: 0x18
	// Line 1710, Address: 0x1ba030, Func Offset: 0x20
	// Func End, Address: 0x1ba03c, Func Offset: 0x2c
}

// iGetDay__Fv
// Start address: 0x1ba040
uint8 iGetDay()
{
	sceCdCLOCK clock;
	// Line 1698, Address: 0x1ba040, Func Offset: 0
	// Line 1700, Address: 0x1ba048, Func Offset: 0x8
	// Line 1701, Address: 0x1ba050, Func Offset: 0x10
	// Line 1702, Address: 0x1ba058, Func Offset: 0x18
	// Line 1703, Address: 0x1ba060, Func Offset: 0x20
	// Func End, Address: 0x1ba06c, Func Offset: 0x2c
}

// iGetHour__Fv
// Start address: 0x1ba070
uint8 iGetHour()
{
	sceCdCLOCK clock;
	// Line 1691, Address: 0x1ba070, Func Offset: 0
	// Line 1693, Address: 0x1ba078, Func Offset: 0x8
	// Line 1694, Address: 0x1ba080, Func Offset: 0x10
	// Line 1695, Address: 0x1ba088, Func Offset: 0x18
	// Line 1696, Address: 0x1ba090, Func Offset: 0x20
	// Func End, Address: 0x1ba09c, Func Offset: 0x2c
}

// iGetMinute__Fv
// Start address: 0x1ba0a0
uint8 iGetMinute()
{
	sceCdCLOCK clock;
	// Line 1684, Address: 0x1ba0a0, Func Offset: 0
	// Line 1686, Address: 0x1ba0a8, Func Offset: 0x8
	// Line 1687, Address: 0x1ba0b0, Func Offset: 0x10
	// Line 1688, Address: 0x1ba0b8, Func Offset: 0x18
	// Line 1689, Address: 0x1ba0c0, Func Offset: 0x20
	// Func End, Address: 0x1ba0cc, Func Offset: 0x2c
}

// iVSync__Fv
// Start address: 0x1ba0d0
void iVSync()
{
	// Line 1673, Address: 0x1ba0d0, Func Offset: 0
	// Func End, Address: 0x1ba0d8, Func Offset: 0x8
}

// TextureRead__FPCcPCc
// Start address: 0x1ba0e0
RwTexture* TextureRead(int8* name, int8* maskName)
{
	int8 tmpname[256];
	RwTexture* result;
	uint32 assetid;
	uint32 tmpsize;
	// Line 1503, Address: 0x1ba0e0, Func Offset: 0
	// Line 1512, Address: 0x1ba0f8, Func Offset: 0x18
	// Line 1513, Address: 0x1ba110, Func Offset: 0x30
	// Line 1514, Address: 0x1ba118, Func Offset: 0x38
	// Line 1589, Address: 0x1ba128, Func Offset: 0x48
	// Line 1593, Address: 0x1ba130, Func Offset: 0x50
	// Line 1598, Address: 0x1ba144, Func Offset: 0x64
	// Line 1602, Address: 0x1ba14c, Func Offset: 0x6c
	// Line 1598, Address: 0x1ba154, Func Offset: 0x74
	// Line 1602, Address: 0x1ba160, Func Offset: 0x80
	// Line 1603, Address: 0x1ba180, Func Offset: 0xa0
	// Line 1612, Address: 0x1ba194, Func Offset: 0xb4
	// Line 1616, Address: 0x1ba198, Func Offset: 0xb8
	// Line 1617, Address: 0x1ba1a4, Func Offset: 0xc4
	// Line 1618, Address: 0x1ba1b0, Func Offset: 0xd0
	// Line 1666, Address: 0x1ba1b8, Func Offset: 0xd8
	// Line 1667, Address: 0x1ba1c0, Func Offset: 0xe0
	// Func End, Address: 0x1ba1d8, Func Offset: 0xf8
}

// iRenderWareInit__Fv
// Start address: 0x1ba1e0
uint32 iRenderWareInit()
{
	RwEngineOpenParams openParams;
	// Line 1368, Address: 0x1ba1e0, Func Offset: 0
	// Line 1405, Address: 0x1ba1e4, Func Offset: 0x4
	// Line 1368, Address: 0x1ba1e8, Func Offset: 0x8
	// Line 1405, Address: 0x1ba1ec, Func Offset: 0xc
	// Line 1408, Address: 0x1ba200, Func Offset: 0x20
	// Line 1421, Address: 0x1ba208, Func Offset: 0x28
	// Line 1426, Address: 0x1ba210, Func Offset: 0x30
	// Line 1428, Address: 0x1ba220, Func Offset: 0x40
	// Line 1439, Address: 0x1ba228, Func Offset: 0x48
	// Line 1440, Address: 0x1ba238, Func Offset: 0x58
	// Line 1444, Address: 0x1ba240, Func Offset: 0x60
	// Line 1446, Address: 0x1ba254, Func Offset: 0x74
	// Line 1447, Address: 0x1ba25c, Func Offset: 0x7c
	// Line 1448, Address: 0x1ba264, Func Offset: 0x84
	// Line 1451, Address: 0x1ba268, Func Offset: 0x88
	// Line 1456, Address: 0x1ba270, Func Offset: 0x90
	// Line 1458, Address: 0x1ba280, Func Offset: 0xa0
	// Line 1459, Address: 0x1ba288, Func Offset: 0xa8
	// Line 1460, Address: 0x1ba290, Func Offset: 0xb0
	// Line 1467, Address: 0x1ba298, Func Offset: 0xb8
	// Line 1470, Address: 0x1ba2a4, Func Offset: 0xc4
	// Line 1473, Address: 0x1ba2ac, Func Offset: 0xcc
	// Line 1475, Address: 0x1ba2c0, Func Offset: 0xe0
	// Line 1476, Address: 0x1ba2c8, Func Offset: 0xe8
	// Func End, Address: 0x1ba2d4, Func Offset: 0xf4
}

// vsyncCounterHandler__Fi
// Start address: 0x1ba2e0
int32 vsyncCounterHandler()
{
	// Line 1362, Address: 0x1ba2e0, Func Offset: 0
	// Line 1363, Address: 0x1ba2e4, Func Offset: 0x4
	// Line 1362, Address: 0x1ba2e8, Func Offset: 0x8
	// Line 1364, Address: 0x1ba2ec, Func Offset: 0xc
	// Func End, Address: 0x1ba2f4, Func Offset: 0x14
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
	// Line 537, Address: 0x1ba300, Func Offset: 0
	// Line 545, Address: 0x1ba308, Func Offset: 0x8
	// Line 547, Address: 0x1ba318, Func Offset: 0x18
	// Line 551, Address: 0x1ba320, Func Offset: 0x20
	// Line 552, Address: 0x1ba350, Func Offset: 0x50
	// Line 553, Address: 0x1ba380, Func Offset: 0x80
	// Line 556, Address: 0x1ba3b0, Func Offset: 0xb0
	// Line 557, Address: 0x1ba3d8, Func Offset: 0xd8
	// Line 560, Address: 0x1ba400, Func Offset: 0x100
	// Line 561, Address: 0x1ba430, Func Offset: 0x130
	// Line 562, Address: 0x1ba460, Func Offset: 0x160
	// Line 565, Address: 0x1ba490, Func Offset: 0x190
	// Line 566, Address: 0x1ba4c0, Func Offset: 0x1c0
	// Line 567, Address: 0x1ba4f0, Func Offset: 0x1f0
	// Line 568, Address: 0x1ba520, Func Offset: 0x220
	// Line 571, Address: 0x1ba550, Func Offset: 0x250
	// Line 572, Address: 0x1ba580, Func Offset: 0x280
	// Line 573, Address: 0x1ba5b0, Func Offset: 0x2b0
	// Line 574, Address: 0x1ba5e0, Func Offset: 0x2e0
	// Line 577, Address: 0x1ba610, Func Offset: 0x310
	// Line 580, Address: 0x1ba640, Func Offset: 0x340
	// Line 581, Address: 0x1ba670, Func Offset: 0x370
	// Line 583, Address: 0x1ba6a0, Func Offset: 0x3a0
	// Line 584, Address: 0x1ba7e4, Func Offset: 0x4e4
	// Line 585, Address: 0x1ba914, Func Offset: 0x614
	// Line 589, Address: 0x1baa40, Func Offset: 0x740
	// Line 591, Address: 0x1baa50, Func Offset: 0x750
	// Line 603, Address: 0x1baa58, Func Offset: 0x758
	// Line 605, Address: 0x1baa68, Func Offset: 0x768
	// Line 617, Address: 0x1baa70, Func Offset: 0x770
	// Line 619, Address: 0x1baa80, Func Offset: 0x780
	// Line 623, Address: 0x1baa88, Func Offset: 0x788
	// Line 625, Address: 0x1baa98, Func Offset: 0x798
	// Line 629, Address: 0x1baaa0, Func Offset: 0x7a0
	// Line 631, Address: 0x1baab0, Func Offset: 0x7b0
	// Line 635, Address: 0x1baab8, Func Offset: 0x7b8
	// Line 637, Address: 0x1baac8, Func Offset: 0x7c8
	// Line 647, Address: 0x1baad0, Func Offset: 0x7d0
	// Line 649, Address: 0x1baae0, Func Offset: 0x7e0
	// Line 653, Address: 0x1baae8, Func Offset: 0x7e8
	// Line 657, Address: 0x1bab00, Func Offset: 0x800
	// Func End, Address: 0x1bab0c, Func Offset: 0x80c
}

// iSystemExit__Fv
// Start address: 0x1bab10
void iSystemExit()
{
	// Line 432, Address: 0x1bab10, Func Offset: 0
	// Line 434, Address: 0x1bab18, Func Offset: 0x8
	// Line 437, Address: 0x1bab20, Func Offset: 0x10
	// Line 438, Address: 0x1bab28, Func Offset: 0x18
	// Line 456, Address: 0x1bab30, Func Offset: 0x20
	// Line 459, Address: 0x1bab38, Func Offset: 0x28
	// Line 462, Address: 0x1bab40, Func Offset: 0x30
	// Line 465, Address: 0x1bab48, Func Offset: 0x38
	// Line 468, Address: 0x1bab50, Func Offset: 0x40
	// Line 472, Address: 0x1bab58, Func Offset: 0x48
	// Func End, Address: 0x1bab64, Func Offset: 0x54
}

// iSystemInit__FUi
// Start address: 0x1bab70
void iSystemInit(uint32 options)
{
	int8* CDROM_IMAGE_FILE;
	int8* HOSTIO_IMAGE_FILE;
	int8* iopImageFile;
	int32 disk_type;
	// Line 307, Address: 0x1bab70, Func Offset: 0
	// Line 315, Address: 0x1bab84, Func Offset: 0x14
	// Line 316, Address: 0x1bab8c, Func Offset: 0x1c
	// Line 318, Address: 0x1baba0, Func Offset: 0x30
	// Line 323, Address: 0x1babb0, Func Offset: 0x40
	// Line 330, Address: 0x1babb8, Func Offset: 0x48
	// Line 334, Address: 0x1babc4, Func Offset: 0x54
	// Line 336, Address: 0x1babc8, Func Offset: 0x58
	// Line 334, Address: 0x1babcc, Func Offset: 0x5c
	// Line 336, Address: 0x1babd0, Func Offset: 0x60
	// Line 341, Address: 0x1babd8, Func Offset: 0x68
	// Line 345, Address: 0x1babe8, Func Offset: 0x78
	// Line 350, Address: 0x1bac00, Func Offset: 0x90
	// Line 353, Address: 0x1bac1c, Func Offset: 0xac
	// Line 360, Address: 0x1bac24, Func Offset: 0xb4
	// Line 361, Address: 0x1bac30, Func Offset: 0xc0
	// Line 362, Address: 0x1bac3c, Func Offset: 0xcc
	// Line 368, Address: 0x1bac50, Func Offset: 0xe0
	// Line 369, Address: 0x1bac58, Func Offset: 0xe8
	// Line 371, Address: 0x1bac68, Func Offset: 0xf8
	// Line 372, Address: 0x1bac70, Func Offset: 0x100
	// Line 373, Address: 0x1bac78, Func Offset: 0x108
	// Line 374, Address: 0x1bac80, Func Offset: 0x110
	// Line 375, Address: 0x1bacac, Func Offset: 0x13c
	// Line 379, Address: 0x1bacc0, Func Offset: 0x150
	// Line 383, Address: 0x1bacc8, Func Offset: 0x158
	// Line 392, Address: 0x1bacd0, Func Offset: 0x160
	// Line 395, Address: 0x1bacd8, Func Offset: 0x168
	// Line 398, Address: 0x1bace0, Func Offset: 0x170
	// Line 401, Address: 0x1bace8, Func Offset: 0x178
	// Line 404, Address: 0x1bacf0, Func Offset: 0x180
	// Line 407, Address: 0x1bacf8, Func Offset: 0x188
	// Line 414, Address: 0x1bad00, Func Offset: 0x190
	// Line 415, Address: 0x1bad08, Func Offset: 0x198
	// Line 418, Address: 0x1bad10, Func Offset: 0x1a0
	// Line 421, Address: 0x1bad18, Func Offset: 0x1a8
	// Line 427, Address: 0x1bad20, Func Offset: 0x1b0
	// Func End, Address: 0x1bad34, Func Offset: 0x1c4
}

// psSelectDevice__Fv
// Start address: 0x1bad40
uint32 psSelectDevice()
{
	RwVideoMode videoMode;
	int32 i;
	int32 num;
	// Line 215, Address: 0x1bad40, Func Offset: 0
	// Line 221, Address: 0x1bad44, Func Offset: 0x4
	// Line 215, Address: 0x1bad48, Func Offset: 0x8
	// Line 221, Address: 0x1bad5c, Func Offset: 0x1c
	// Line 224, Address: 0x1bad64, Func Offset: 0x24
	// Line 225, Address: 0x1bad70, Func Offset: 0x30
	// Line 226, Address: 0x1bad88, Func Offset: 0x48
	// Line 232, Address: 0x1bad94, Func Offset: 0x54
	// Line 234, Address: 0x1bada4, Func Offset: 0x64
	// Line 237, Address: 0x1badb4, Func Offset: 0x74
	// Line 240, Address: 0x1badc8, Func Offset: 0x88
	// Line 244, Address: 0x1badd8, Func Offset: 0x98
	// Line 245, Address: 0x1bade0, Func Offset: 0xa0
	// Line 246, Address: 0x1bade8, Func Offset: 0xa8
	// Line 247, Address: 0x1badf8, Func Offset: 0xb8
	// Line 249, Address: 0x1bae00, Func Offset: 0xc0
	// Line 252, Address: 0x1bae08, Func Offset: 0xc8
	// Line 255, Address: 0x1bae1c, Func Offset: 0xdc
	// Line 256, Address: 0x1bae20, Func Offset: 0xe0
	// Func End, Address: 0x1bae40, Func Offset: 0x100
}

