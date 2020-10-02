typedef struct xJawDataTable;


typedef int8 type_0[16];
typedef int8 type_1[16];

struct xJawDataTable
{
	uint32 soundHashID;
	uint32 dataStart;
	uint32 dataLength;
};

type_1 buffer;
type_0 buffer;

float32 xJaw_EvalData(void* data, float32 time);
void* xJaw_FindData(uint32 soundID);

// xJaw_EvalData__FPvf
// Start address: 0x35d2c0
float32 xJaw_EvalData(void* data, float32 time)
{
	float32 lerp;
	int32 idx;
	int32 numdata;
	uint8* jawdata;
}

// xJaw_FindData__FUi
// Start address: 0x35d400
void* xJaw_FindData(uint32 soundID)
{
	int32 i;
	int32 numJawTables;
	uint32 j;
	void* data;
	uint32 jawcount;
	xJawDataTable* tbl;
	void* rawdata;
}

