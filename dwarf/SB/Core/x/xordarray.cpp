typedef struct st_XORDEREDARRAY;

typedef s32(*type_0)(void*, void*);
typedef s32(*type_1)(void*, void*);


struct st_XORDEREDARRAY
{
	void** list;
	s32 cnt;
	s32 max;
	s32 warnlvl;
};

u32 gActiveHeap;

void XOrdSort(st_XORDEREDARRAY* array, type_0 test);
s32 XOrdLookup(st_XORDEREDARRAY* array, void* key, type_1 test);
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, s32 index);
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, type_0 compare);
void XOrdAppend(st_XORDEREDARRAY* array, void* elt);
void XOrdDone(st_XORDEREDARRAY* array, s32 wasTempAlloc);
void XOrdReset(st_XORDEREDARRAY* array);
void XOrdInit(st_XORDEREDARRAY* array, s32 size, s32 tempAlloc);

// XOrdSort__FP16st_XORDEREDARRAYPFPvPv_i
// Start address: 0x1f2e80
void XOrdSort(st_XORDEREDARRAY* array, type_0 test)
{
	void** list;
	s32 num;
	s32 i;
	s32 j;
	s32 h;
	void* v;
}

// XOrdLookup__FP16st_XORDEREDARRAYPCvPFPCvPv_i
// Start address: 0x1f2ff0
s32 XOrdLookup(st_XORDEREDARRAY* array, void* key, type_1 test)
{
	s32 da_idx;
	s32 k0;
	s32 k1;
	s32 k;
	s32 v;
}

// XOrdRemove__FP16st_XORDEREDARRAYPvi
// Start address: 0x1f30d0
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, s32 index)
{
	s32 i;
}

// XOrdInsert__FP16st_XORDEREDARRAYPvPFPvPv_i
// Start address: 0x1f31e0
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, type_0 compare)
{
	s32 i;
}

// XOrdAppend__FP16st_XORDEREDARRAYPv
// Start address: 0x1f32b0
void XOrdAppend(st_XORDEREDARRAY* array, void* elt)
{
}

// XOrdDone__FP16st_XORDEREDARRAYi
// Start address: 0x1f32e0
void XOrdDone(st_XORDEREDARRAY* array, s32 wasTempAlloc)
{
}

// XOrdReset__FP16st_XORDEREDARRAY
// Start address: 0x1f3330
void XOrdReset(st_XORDEREDARRAY* array)
{
}

// XOrdInit__FP16st_XORDEREDARRAYii
// Start address: 0x1f3340
void XOrdInit(st_XORDEREDARRAY* array, s32 size, s32 tempAlloc)
{
}

