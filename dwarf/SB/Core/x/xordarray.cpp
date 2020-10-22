typedef struct st_XORDEREDARRAY;

typedef int32(*type_0)(void*, void*);
typedef int32(*type_1)(void*, void*);


struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

uint32 gActiveHeap;

void XOrdSort(st_XORDEREDARRAY* array, int32(*test)(void*, void*));
int32 XOrdLookup(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*));
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, int32 index);
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, int32(*compare)(void*, void*));
void XOrdAppend(st_XORDEREDARRAY* array, void* elt);
void XOrdDone(st_XORDEREDARRAY* array, int32 wasTempAlloc);
void XOrdReset(st_XORDEREDARRAY* array);
void XOrdInit(st_XORDEREDARRAY* array, int32 size, int32 tempAlloc);

// XOrdSort__FP16st_XORDEREDARRAYPFPvPv_i
// Start address: 0x1f2e80
void XOrdSort(st_XORDEREDARRAY* array, int32(*test)(void*, void*))
{
	void** list;
	int32 num;
	int32 i;
	int32 j;
	int32 h;
	void* v;
	// Line 478, Address: 0x1f2e80, Func Offset: 0
	// Line 481, Address: 0x1f2eb0, Func Offset: 0x30
	// Line 480, Address: 0x1f2eb4, Func Offset: 0x34
	// Line 491, Address: 0x1f2eb8, Func Offset: 0x38
	// Line 493, Address: 0x1f2ed8, Func Offset: 0x58
	// Line 495, Address: 0x1f2ee8, Func Offset: 0x68
	// Line 497, Address: 0x1f2f08, Func Offset: 0x88
	// Line 500, Address: 0x1f2f28, Func Offset: 0xa8
	// Line 499, Address: 0x1f2f30, Func Offset: 0xb0
	// Line 500, Address: 0x1f2f34, Func Offset: 0xb4
	// Line 502, Address: 0x1f2f38, Func Offset: 0xb8
	// Line 503, Address: 0x1f2f40, Func Offset: 0xc0
	// Line 504, Address: 0x1f2f48, Func Offset: 0xc8
	// Line 503, Address: 0x1f2f4c, Func Offset: 0xcc
	// Line 505, Address: 0x1f2f60, Func Offset: 0xe0
	// Line 507, Address: 0x1f2f90, Func Offset: 0x110
	// Line 509, Address: 0x1f2f98, Func Offset: 0x118
	// Line 507, Address: 0x1f2f9c, Func Offset: 0x11c
	// Line 509, Address: 0x1f2fa0, Func Offset: 0x120
	// Line 511, Address: 0x1f2fb0, Func Offset: 0x130
	// Line 514, Address: 0x1f2fc0, Func Offset: 0x140
	// Func End, Address: 0x1f2ff0, Func Offset: 0x170
}

// XOrdLookup__FP16st_XORDEREDARRAYPCvPFPCvPv_i
// Start address: 0x1f2ff0
int32 XOrdLookup(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*))
{
	int32 da_idx;
	int32 k0;
	int32 k1;
	int32 k;
	int32 v;
	// Line 356, Address: 0x1f2ff0, Func Offset: 0
	// Line 358, Address: 0x1f3018, Func Offset: 0x28
	// Line 356, Address: 0x1f301c, Func Offset: 0x2c
	// Line 362, Address: 0x1f3024, Func Offset: 0x34
	// Line 364, Address: 0x1f3028, Func Offset: 0x38
	// Line 366, Address: 0x1f3030, Func Offset: 0x40
	// Line 367, Address: 0x1f3044, Func Offset: 0x54
	// Line 369, Address: 0x1f305c, Func Offset: 0x6c
	// Line 372, Address: 0x1f3064, Func Offset: 0x74
	// Line 373, Address: 0x1f306c, Func Offset: 0x7c
	// Line 375, Address: 0x1f3070, Func Offset: 0x80
	// Line 376, Address: 0x1f3080, Func Offset: 0x90
	// Line 378, Address: 0x1f3084, Func Offset: 0x94
	// Line 380, Address: 0x1f3098, Func Offset: 0xa8
	// Line 381, Address: 0x1f309c, Func Offset: 0xac
	// Func End, Address: 0x1f30c4, Func Offset: 0xd4
}

// XOrdRemove__FP16st_XORDEREDARRAYPvi
// Start address: 0x1f30d0
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, int32 index)
{
	int32 i;
	// Line 253, Address: 0x1f30d0, Func Offset: 0
	// Line 257, Address: 0x1f30d8, Func Offset: 0x8
	// Line 258, Address: 0x1f30e8, Func Offset: 0x18
	// Line 263, Address: 0x1f3100, Func Offset: 0x30
	// Line 265, Address: 0x1f3118, Func Offset: 0x48
	// Line 266, Address: 0x1f3124, Func Offset: 0x54
	// Line 267, Address: 0x1f3130, Func Offset: 0x60
	// Line 271, Address: 0x1f3138, Func Offset: 0x68
	// Line 270, Address: 0x1f313c, Func Offset: 0x6c
	// Line 271, Address: 0x1f3140, Func Offset: 0x70
	// Line 272, Address: 0x1f3150, Func Offset: 0x80
	// Line 274, Address: 0x1f315c, Func Offset: 0x8c
	// Line 276, Address: 0x1f3164, Func Offset: 0x94
	// Line 281, Address: 0x1f3178, Func Offset: 0xa8
	// Line 284, Address: 0x1f3188, Func Offset: 0xb8
	// Line 285, Address: 0x1f3194, Func Offset: 0xc4
	// Line 287, Address: 0x1f31ac, Func Offset: 0xdc
	// Line 285, Address: 0x1f31b0, Func Offset: 0xe0
	// Line 286, Address: 0x1f31b4, Func Offset: 0xe4
	// Line 287, Address: 0x1f31bc, Func Offset: 0xec
	// Line 290, Address: 0x1f31d0, Func Offset: 0x100
	// Line 291, Address: 0x1f31d8, Func Offset: 0x108
	// Func End, Address: 0x1f31e0, Func Offset: 0x110
}

// XOrdInsert__FP16st_XORDEREDARRAYPvPFPvPv_i
// Start address: 0x1f31e0
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, int32(*compare)(void*, void*))
{
	int32 i;
	// Line 161, Address: 0x1f31e0, Func Offset: 0
	// Line 168, Address: 0x1f3204, Func Offset: 0x24
	// Line 173, Address: 0x1f3218, Func Offset: 0x38
	// Line 174, Address: 0x1f3220, Func Offset: 0x40
	// Line 175, Address: 0x1f3230, Func Offset: 0x50
	// Line 176, Address: 0x1f324c, Func Offset: 0x6c
	// Line 177, Address: 0x1f3258, Func Offset: 0x78
	// Line 181, Address: 0x1f3264, Func Offset: 0x84
	// Line 177, Address: 0x1f3268, Func Offset: 0x88
	// Line 179, Address: 0x1f326c, Func Offset: 0x8c
	// Line 181, Address: 0x1f3274, Func Offset: 0x94
	// Line 183, Address: 0x1f3280, Func Offset: 0xa0
	// Line 184, Address: 0x1f3288, Func Offset: 0xa8
	// Func End, Address: 0x1f32a8, Func Offset: 0xc8
}

// XOrdAppend__FP16st_XORDEREDARRAYPv
// Start address: 0x1f32b0
void XOrdAppend(st_XORDEREDARRAY* array, void* elt)
{
	// Line 133, Address: 0x1f32b0, Func Offset: 0
	// Line 145, Address: 0x1f32c4, Func Offset: 0x14
	// Line 148, Address: 0x1f32d8, Func Offset: 0x28
	// Func End, Address: 0x1f32e0, Func Offset: 0x30
}

// XOrdDone__FP16st_XORDEREDARRAYi
// Start address: 0x1f32e0
void XOrdDone(st_XORDEREDARRAY* array, int32 wasTempAlloc)
{
	// Line 99, Address: 0x1f32e0, Func Offset: 0
	// Line 104, Address: 0x1f32ec, Func Offset: 0xc
	// Line 105, Address: 0x1f32f8, Func Offset: 0x18
	// Line 115, Address: 0x1f3308, Func Offset: 0x28
	// Line 116, Address: 0x1f330c, Func Offset: 0x2c
	// Line 117, Address: 0x1f3310, Func Offset: 0x30
	// Line 118, Address: 0x1f3314, Func Offset: 0x34
	// Line 121, Address: 0x1f3318, Func Offset: 0x38
	// Func End, Address: 0x1f3328, Func Offset: 0x48
}

// XOrdReset__FP16st_XORDEREDARRAY
// Start address: 0x1f3330
void XOrdReset(st_XORDEREDARRAY* array)
{
	// Line 96, Address: 0x1f3330, Func Offset: 0
	// Func End, Address: 0x1f3338, Func Offset: 0x8
}

// XOrdInit__FP16st_XORDEREDARRAYii
// Start address: 0x1f3340
void XOrdInit(st_XORDEREDARRAY* array, int32 size, int32 tempAlloc)
{
	// Line 59, Address: 0x1f3340, Func Offset: 0
	// Line 66, Address: 0x1f3350, Func Offset: 0x10
	// Line 72, Address: 0x1f335c, Func Offset: 0x1c
	// Line 73, Address: 0x1f3364, Func Offset: 0x24
	// Line 74, Address: 0x1f336c, Func Offset: 0x2c
	// Line 76, Address: 0x1f3378, Func Offset: 0x38
	// Line 77, Address: 0x1f338c, Func Offset: 0x4c
	// Line 81, Address: 0x1f3390, Func Offset: 0x50
	// Line 79, Address: 0x1f339c, Func Offset: 0x5c
	// Line 81, Address: 0x1f33a0, Func Offset: 0x60
	// Line 80, Address: 0x1f33ac, Func Offset: 0x6c
	// Line 81, Address: 0x1f33b0, Func Offset: 0x70
	// Line 82, Address: 0x1f33c8, Func Offset: 0x88
	// Line 83, Address: 0x1f33d4, Func Offset: 0x94
	// Line 86, Address: 0x1f33e8, Func Offset: 0xa8
	// Func End, Address: 0x1f33fc, Func Offset: 0xbc
}

