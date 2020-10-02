typedef struct DoubleChar;
typedef union SJIS_STRUCT;


typedef int8 type_0[16];
typedef int8 type_1[10];
typedef type_1 type_2[6];
typedef uint16 type_3[33];
typedef int8 type_4[0];
typedef uint32 type_5[256];
typedef uint16 type_6[33];
typedef uint16 type_7[2];
typedef type_7 type_8[3];

struct DoubleChar
{
	uint8 byte1;
	uint8 byte2;
};

union SJIS_STRUCT
{
	uint16 sjisChar;
	DoubleChar doubleChar;
};

int32 g_xutilinit;
int32 g_crc_needinit;
type_5 g_crc32_table;
type_8 ascii_table;
type_3 ascii_k_table;
type_6 ascii_special_table;
type_4 _ctype_;

void xUtil_wtadjust(float32* wts, int32 cnt, float32 arbref);
int32 xUtil_yesno(float32 wt_yes);
uint8 itoBCD(uint16 dec);
uint8 itoBCD(uint8 dec);
uint8 BCDtoi(uint8 hex);
void strtosjis(uint8* string, uint8* dest);
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize);
uint32 xUtil_crc_init();
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx);
int32 xUtilShutdown();
int32 xUtilStartup();

// xUtil_wtadjust__FPfif
// Start address: 0x20fc00
void xUtil_wtadjust(float32* wts, int32 cnt, float32 arbref)
{
	int32 i;
	float32 sum;
	float32 fac;
}

// xUtil_yesno__Ff
// Start address: 0x20fd20
int32 xUtil_yesno(float32 wt_yes)
{
}

// itoBCD__FUs
// Start address: 0x20fda0
uint8 itoBCD(uint16 dec)
{
	int32 ones;
}

// itoBCD__FUc
// Start address: 0x20fe00
uint8 itoBCD(uint8 dec)
{
	int32 ones;
}

// BCDtoi__FUc
// Start address: 0x20fe60
uint8 BCDtoi(uint8 hex)
{
	type_0 c;
}

// strtosjis__FPUcPUc
// Start address: 0x20fea0
void strtosjis(uint8* string, uint8* dest)
{
	int32 i;
	int32 sjis_code;
	int32 ascii_code;
	uint8 stmp;
	uint8 stmp2;
	uint8* dest2;
}

// xUtil_crc_update__FUiPci
// Start address: 0x2100d0
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize)
{
	int32 i;
	int32 j;
}

// xUtil_crc_init__Fv
// Start address: 0x2102c0
uint32 xUtil_crc_init()
{
	int32 i;
	int32 j;
	uint32 crc_accum;
}

// xUtil_idtag2string__FUii
// Start address: 0x210350
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx)
{
	uint32 tag;
	int8* strptr;
	int8* uc;
	int32 l;
	int8 t;
	type_2 buf;
}

// xUtilShutdown__Fv
// Start address: 0x210660
int32 xUtilShutdown()
{
}

// xUtilStartup__Fv
// Start address: 0x210680
int32 xUtilStartup()
{
}

