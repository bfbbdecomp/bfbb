typedef struct VoBuf;
typedef struct VoTag;
typedef struct VoData;


typedef int32 type_0[15];
typedef uint32 type_1[29248];
typedef uint32 type_2[29248][2];
typedef uint8 type_3[1228800];

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int32 write;
	int32 count;
	int32 size;
};

struct VoTag
{
	int32 status;
	int32 dummy[15];
	uint32 v[29248][2];
};

struct VoData
{
	uint8 v[1228800];
};


void voBufDecCount(VoBuf* f);
VoTag* voBufGetTag(VoBuf* f);
VoData* voBufGetData(VoBuf* f);
void voBufIncCount(VoBuf* f);
int32 voBufIsFull(VoBuf* f);
void voBufReset(VoBuf* f);
void voBufDelete();
void voBufCreate(VoBuf* f, VoData* data, VoTag* tag, int32 size);

// voBufDecCount__FP5VoBuf
// Start address: 0x1bf390
void voBufDecCount(VoBuf* f)
{
	// Line 100, Address: 0x1bf390, Func Offset: 0
	// Line 101, Address: 0x1bf39c, Func Offset: 0xc
	// Line 103, Address: 0x1bf3a8, Func Offset: 0x18
	// Func End, Address: 0x1bf3b0, Func Offset: 0x20
}

// voBufGetTag__FP5VoBuf
// Start address: 0x1bf3b0
VoTag* voBufGetTag(VoBuf* f)
{
	// Line 94, Address: 0x1bf3b0, Func Offset: 0
	// Line 96, Address: 0x1bf420, Func Offset: 0x70
	// Func End, Address: 0x1bf428, Func Offset: 0x78
}

// voBufGetData__FP5VoBuf
// Start address: 0x1bf430
VoData* voBufGetData(VoBuf* f)
{
	// Line 80, Address: 0x1bf430, Func Offset: 0
	// Line 81, Address: 0x1bf470, Func Offset: 0x40
	// Func End, Address: 0x1bf478, Func Offset: 0x48
}

// voBufIncCount__FP5VoBuf
// Start address: 0x1bf480
void voBufIncCount(VoBuf* f)
{
	// Line 66, Address: 0x1bf480, Func Offset: 0
	// Line 68, Address: 0x1bf48c, Func Offset: 0xc
	// Line 70, Address: 0x1bf494, Func Offset: 0x14
	// Line 71, Address: 0x1bf4cc, Func Offset: 0x4c
	// Line 72, Address: 0x1bf4d8, Func Offset: 0x58
	// Line 75, Address: 0x1bf4f4, Func Offset: 0x74
	// Line 76, Address: 0x1bf4fc, Func Offset: 0x7c
	// Func End, Address: 0x1bf50c, Func Offset: 0x8c
}

// voBufIsFull__FP5VoBuf
// Start address: 0x1bf510
int32 voBufIsFull(VoBuf* f)
{
	// Line 62, Address: 0x1bf510, Func Offset: 0
	// Line 63, Address: 0x1bf51c, Func Offset: 0xc
	// Func End, Address: 0x1bf524, Func Offset: 0x14
}

// voBufReset__FP5VoBuf
// Start address: 0x1bf530
void voBufReset(VoBuf* f)
{
	// Line 56, Address: 0x1bf530, Func Offset: 0
	// Line 58, Address: 0x1bf534, Func Offset: 0x4
	// Func End, Address: 0x1bf53c, Func Offset: 0xc
}

// voBufDelete__FP5VoBuf
// Start address: 0x1bf540
void voBufDelete()
{
	// Line 52, Address: 0x1bf540, Func Offset: 0
	// Func End, Address: 0x1bf548, Func Offset: 0x8
}

// voBufCreate__FP5VoBufP6VoDataP5VoTagi
// Start address: 0x1bf550
void voBufCreate(VoBuf* f, VoData* data, VoTag* tag, int32 size)
{
	int32 i;
	// Line 39, Address: 0x1bf550, Func Offset: 0
	// Line 45, Address: 0x1bf554, Func Offset: 0x4
	// Line 40, Address: 0x1bf558, Func Offset: 0x8
	// Line 41, Address: 0x1bf55c, Func Offset: 0xc
	// Line 45, Address: 0x1bf560, Func Offset: 0x10
	// Line 42, Address: 0x1bf564, Func Offset: 0x14
	// Line 45, Address: 0x1bf568, Func Offset: 0x18
	// Line 46, Address: 0x1bf588, Func Offset: 0x38
	// Line 45, Address: 0x1bf664, Func Offset: 0x114
	// Line 46, Address: 0x1bf668, Func Offset: 0x118
	// Line 47, Address: 0x1bf66c, Func Offset: 0x11c
	// Line 46, Address: 0x1bf674, Func Offset: 0x124
	// Line 47, Address: 0x1bf67c, Func Offset: 0x12c
	// Line 48, Address: 0x1bf688, Func Offset: 0x138
	// Func End, Address: 0x1bf690, Func Offset: 0x140
}

