typedef struct xJawDataTable;


typedef int8 type_0[16];
typedef int8 type_1[16];

struct xJawDataTable
{
	uint32 soundHashID;
	uint32 dataStart;
	uint32 dataLength;
};

int8 buffer[16];
int8 buffer[16];

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
	// Line 36, Address: 0x35d2c0, Func Offset: 0
	// Line 63, Address: 0x35d2c4, Func Offset: 0x4
	// Line 36, Address: 0x35d2c8, Func Offset: 0x8
	// Line 63, Address: 0x35d2cc, Func Offset: 0xc
	// Line 36, Address: 0x35d2d0, Func Offset: 0x10
	// Line 40, Address: 0x35d2e8, Func Offset: 0x28
	// Line 63, Address: 0x35d2ec, Func Offset: 0x2c
	// Line 64, Address: 0x35d2f0, Func Offset: 0x30
	// Line 65, Address: 0x35d300, Func Offset: 0x40
	// Line 66, Address: 0x35d308, Func Offset: 0x48
	// Line 67, Address: 0x35d310, Func Offset: 0x50
	// Line 68, Address: 0x35d31c, Func Offset: 0x5c
	// Line 69, Address: 0x35d320, Func Offset: 0x60
	// Line 70, Address: 0x35d330, Func Offset: 0x70
	// Line 71, Address: 0x35d33c, Func Offset: 0x7c
	// Line 72, Address: 0x35d340, Func Offset: 0x80
	// Line 75, Address: 0x35d344, Func Offset: 0x84
	// Line 76, Address: 0x35d3d8, Func Offset: 0x118
	// Func End, Address: 0x35d3f4, Func Offset: 0x134
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
	// Line 13, Address: 0x35d400, Func Offset: 0
	// Line 15, Address: 0x35d404, Func Offset: 0x4
	// Line 13, Address: 0x35d408, Func Offset: 0x8
	// Line 15, Address: 0x35d418, Func Offset: 0x18
	// Line 17, Address: 0x35d428, Func Offset: 0x28
	// Line 18, Address: 0x35d438, Func Offset: 0x38
	// Line 19, Address: 0x35d44c, Func Offset: 0x4c
	// Line 20, Address: 0x35d450, Func Offset: 0x50
	// Line 24, Address: 0x35d454, Func Offset: 0x54
	// Line 21, Address: 0x35d458, Func Offset: 0x58
	// Line 24, Address: 0x35d45c, Func Offset: 0x5c
	// Line 21, Address: 0x35d460, Func Offset: 0x60
	// Line 24, Address: 0x35d468, Func Offset: 0x68
	// Line 25, Address: 0x35d478, Func Offset: 0x78
	// Line 26, Address: 0x35d484, Func Offset: 0x84
	// Line 28, Address: 0x35d49c, Func Offset: 0x9c
	// Line 29, Address: 0x35d4b0, Func Offset: 0xb0
	// Line 30, Address: 0x35d4c0, Func Offset: 0xc0
	// Line 31, Address: 0x35d4c8, Func Offset: 0xc8
	// Line 32, Address: 0x35d4d0, Func Offset: 0xd0
	// Func End, Address: 0x35d4e8, Func Offset: 0xe8
}

