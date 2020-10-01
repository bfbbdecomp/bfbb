typedef struct DoubleChar;
typedef union SJIS_STRUCT;


typedef s8 type_0[16];
typedef s8 type_1[10];
typedef type_1 type_2[6];
typedef u16 type_3[33];
typedef s8 type_4[0];
typedef u32 type_5[256];
typedef u16 type_6[33];
typedef u16 type_7[2];
typedef type_7 type_8[3];

struct DoubleChar
{
	u8 byte1;
	u8 byte2;
};

union SJIS_STRUCT
{
	u16 sjisChar;
	DoubleChar doubleChar;
};

s32 g_xutilinit;
s32 g_crc_needinit;
type_5 g_crc32_table;
type_8 ascii_table;
type_3 ascii_k_table;
type_6 ascii_special_table;
type_4 _ctype_;

void xUtil_wtadjust(f32* wts, s32 cnt, f32 arbref);
s32 xUtil_yesno(f32 wt_yes);
u8 itoBCD(u16 dec);
u8 itoBCD(u8 dec);
u8 BCDtoi(u8 hex);
void strtosjis(u8* string, u8* dest);
u32 xUtil_crc_update(u32 crc_accum, s8* data, s32 datasize);
u32 xUtil_crc_init();
s8* xUtil_idtag2string(u32 srctag, s32 bufidx);
s32 xUtilShutdown();
s32 xUtilStartup();

// xUtil_wtadjust__FPfif
// Start address: 0x20fc00
void xUtil_wtadjust(f32* wts, s32 cnt, f32 arbref)
{
	s32 i;
	f32 sum;
	f32 fac;
}

// xUtil_yesno__Ff
// Start address: 0x20fd20
s32 xUtil_yesno(f32 wt_yes)
{
}

// itoBCD__FUs
// Start address: 0x20fda0
u8 itoBCD(u16 dec)
{
	s32 ones;
}

// itoBCD__FUc
// Start address: 0x20fe00
u8 itoBCD(u8 dec)
{
	s32 ones;
}

// BCDtoi__FUc
// Start address: 0x20fe60
u8 BCDtoi(u8 hex)
{
	type_0 c;
}

// strtosjis__FPUcPUc
// Start address: 0x20fea0
void strtosjis(u8* string, u8* dest)
{
	s32 i;
	s32 sjis_code;
	s32 ascii_code;
	u8 stmp;
	u8 stmp2;
	u8* dest2;
}

// xUtil_crc_update__FUiPci
// Start address: 0x2100d0
u32 xUtil_crc_update(u32 crc_accum, s8* data, s32 datasize)
{
	s32 i;
	s32 j;
}

// xUtil_crc_init__Fv
// Start address: 0x2102c0
u32 xUtil_crc_init()
{
	s32 i;
	s32 j;
	u32 crc_accum;
}

// xUtil_idtag2string__FUii
// Start address: 0x210350
s8* xUtil_idtag2string(u32 srctag, s32 bufidx)
{
	u32 tag;
	s8* strptr;
	s8* uc;
	s32 l;
	s8 t;
	type_2 buf;
}

// xUtilShutdown__Fv
// Start address: 0x210660
s32 xUtilShutdown()
{
}

// xUtilStartup__Fv
// Start address: 0x210680
s32 xUtilStartup()
{
}

