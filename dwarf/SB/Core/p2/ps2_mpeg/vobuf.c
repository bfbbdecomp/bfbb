typedef struct VoBuf;
typedef struct VoTag;
typedef struct VoData;


typedef int32 type_0[15];
typedef uint32 type_1[29248];
typedef type_1 type_2[2];
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
	type_0 dummy;
	type_2 v;
};

struct VoData
{
	type_3 v;
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
}

// voBufGetTag__FP5VoBuf
// Start address: 0x1bf3b0
VoTag* voBufGetTag(VoBuf* f)
{
}

// voBufGetData__FP5VoBuf
// Start address: 0x1bf430
VoData* voBufGetData(VoBuf* f)
{
}

// voBufIncCount__FP5VoBuf
// Start address: 0x1bf480
void voBufIncCount(VoBuf* f)
{
}

// voBufIsFull__FP5VoBuf
// Start address: 0x1bf510
int32 voBufIsFull(VoBuf* f)
{
}

// voBufReset__FP5VoBuf
// Start address: 0x1bf530
void voBufReset(VoBuf* f)
{
}

// voBufDelete__FP5VoBuf
// Start address: 0x1bf540
void voBufDelete()
{
}

// voBufCreate__FP5VoBufP6VoDataP5VoTagi
// Start address: 0x1bf550
void voBufCreate(VoBuf* f, VoData* data, VoTag* tag, int32 size)
{
	int32 i;
}

