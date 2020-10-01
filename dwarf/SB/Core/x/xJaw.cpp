typedef struct xJawDataTable;


typedef s8 type_0[16];
typedef s8 type_1[16];

struct xJawDataTable
{
	u32 soundHashID;
	u32 dataStart;
	u32 dataLength;
};

type_1 buffer;
type_0 buffer;

f32 xJaw_EvalData(void* data, f32 time);
void* xJaw_FindData(u32 soundID);

// xJaw_EvalData__FPvf
// Start address: 0x35d2c0
f32 xJaw_EvalData(void* data, f32 time)
{
	f32 lerp;
	s32 idx;
	s32 numdata;
	u8* jawdata;
}

// xJaw_FindData__FUi
// Start address: 0x35d400
void* xJaw_FindData(u32 soundID)
{
	s32 i;
	s32 numJawTables;
	u32 j;
	void* data;
	u32 jawcount;
	xJawDataTable* tbl;
	void* rawdata;
}

