typedef struct xSerial;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct st_XSAVEGAME_DATA;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef enum en_SAVEGAME_MODE;
typedef struct xVec3;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct st_SERIAL_PERCID_SIZE;
typedef struct st_XSERIAL_DATA_PRIV;
typedef struct st_XORDEREDARRAY;

typedef s32(*type_0)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef s32(*type_1)(u32, xSerial*);
typedef s32(*type_2)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef s32(*type_3)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef s32(*type_5)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef s32(*type_6)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef s32(*type_7)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef s32(*type_10)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef s32(*type_11)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef s32(*type_12)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef s32(*type_14)(void*, void*);
typedef s32(*type_15)(void*, void*);

typedef s8 type_4[9];
typedef s32 type_8[32];
typedef s8 type_9[9];
typedef s32 type_13[32];

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
};

struct st_SERIAL_CLIENTINFO
{
	u32 idtag;
	s32* membuf;
	s32 trueoff;
	s32 actsize;
};

struct st_XSAVEGAME_DATA
{
};

struct st_XSAVEGAME_READCONTEXT
{
};

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct st_SERIAL_PERCID_SIZE
{
	u32 idtag;
	s32 needsize;
};

struct st_XSERIAL_DATA_PRIV
{
	s32 flg_info;
	s32* bitbuf;
	s32 buf_bytcnt;
	st_SERIAL_CLIENTINFO* cltbuf;
	st_SERIAL_CLIENTINFO* cltnext;
	st_XORDEREDARRAY cltlist;
};

struct st_XORDEREDARRAY
{
	void** list;
	s32 cnt;
	s32 max;
	s32 warnlvl;
};

s32 g_serinit;
st_XSERIAL_DATA_PRIV g_xserdata;
type_8 g_tbl_onbit;
type_13 g_tbl_clear;
type_12 xSER_xsgclt_ldproc_fill;
type_7 xSER_xsgclt_ldproc_clt;
type_3 xSER_xsgclt_ldproc_ver;
type_11 xSER_xsgclt_svproc_fill;
type_10 xSER_xsgclt_svinfo_fill;
type_6 xSER_xsgclt_svproc_clt;
type_5 xSER_xsgclt_svinfo_clt;
type_2 xSER_xsgclt_svproc_ver;
type_0 xSER_xsgclt_svinfo_ver;
type_14 xSER_ord_compare;
type_15 xSER_ord_test;
u32 gActiveHeap;

s32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
s32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
s32 xSER_xsgclt_svinfo_fill(s32* cur_space, s32* max_fullgame);
s32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, u32 idtag);
s32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
s32 xSER_xsgclt_svinfo_clt(void* cltdata, s32* cur_space, s32* max_fullgame);
s32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
s32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
s32 xSER_xsgclt_svinfo_ver(s32* cur_space, s32* max_fullgame);
s32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode);
st_SERIAL_CLIENTINFO* XSER_get_client(u32 idtag);
s32 xSER_ord_test(void* key, void* elt);
s32 xSER_ord_compare(void* e1, void* e2);
void xSER_init_buffers(s32 count, st_SERIAL_PERCID_SIZE* sizeinfo);
void xSerialWipeMainBuffer();
s32 rdbit(xSerial* this);
void wrbit(xSerial* this, s32 is_on);
s32 Read(xSerial* this, f32* buf);
s32 Read(xSerial* this, u32* buf);
s32 Read(xSerial* this, s32* buf);
s32 Read(xSerial* this, s16* buf);
s32 Read(xSerial* this, u8* buf);
s32 Read_b7(xSerial* this, u32* bits);
s32 Read_b1(xSerial* this, s32* bits);
s32 Read(xSerial* this, s8* buf, s32 elesize, s32 n);
s32 Write(xSerial* this, f32 data);
s32 Write(xSerial* this, u32 data);
s32 Write(xSerial* this, s32 data);
s32 Write(xSerial* this, s16 data);
s32 Write(xSerial* this, u8 data);
s32 Write_b7(xSerial* this, u32 bits);
s32 Write_b1(xSerial* this, s32 bits);
s32 Write(xSerial* this, s8* data, s32 elesize, s32 n);
void setClient(xSerial* this, u32 idtag);
void* __dt(xSerial* this);
void* __ct(xSerial* this);
void xSerialTraverse(type_1 func);
s32 xSerialShutdown();
s32 xSerialStartup(s32 count, st_SERIAL_PERCID_SIZE* sizeinfo);

// xSER_xsgclt_ldproc_fill__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x202f40
s32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_4 filbuf;
}

// xSER_xsgclt_svproc_fill__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x202fb0
s32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	type_9 filbuf;
}

// xSER_xsgclt_svinfo_fill__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203000
s32 xSER_xsgclt_svinfo_fill(s32* cur_space, s32* max_fullgame)
{
	st_XSERIAL_DATA_PRIV* xsd;
	s32 i;
	s32 tally;
	s32 size;
}

// xSER_xsgclt_ldproc_clt__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x203110
s32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, u32 idtag)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_svproc_clt__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203180
s32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_svinfo_clt__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x2031d0
s32 xSER_xsgclt_svinfo_clt(void* cltdata, s32* cur_space, s32* max_fullgame)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_ldproc_ver__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x2031f0
s32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	st_XSERIAL_DATA_PRIV* xsd;
	s32 ver;
}

// xSER_xsgclt_svproc_ver__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203250
s32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	s32 ver;
}

// xSER_xsgclt_svinfo_ver__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203280
s32 xSER_xsgclt_svinfo_ver(s32* cur_space, s32* max_fullgame)
{
}

// xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE
// Start address: 0x2032a0
s32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	s32 i;
}

// XSER_get_client__FUi
// Start address: 0x203400
st_SERIAL_CLIENTINFO* XSER_get_client(u32 idtag)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	s32 idx;
}

// xSER_ord_test__FPCvPv
// Start address: 0x2034a0
s32 xSER_ord_test(void* key, void* elt)
{
	s32 rc;
	u32 idtag;
}

// xSER_ord_compare__FPvPv
// Start address: 0x2034e0
s32 xSER_ord_compare(void* e1, void* e2)
{
	s32 rc;
}

// xSER_init_buffers__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x203530
void xSER_init_buffers(s32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	st_XSERIAL_DATA_PRIV* xsd;
	s32 i;
	s32 tally;
	s32 sicnt;
	st_SERIAL_PERCID_SIZE* sitmp;
	st_SERIAL_CLIENTINFO* tmp_clt;
}

// xSerialWipeMainBuffer__Fv
// Start address: 0x203740
void xSerialWipeMainBuffer()
{
}

// rdbit__7xSerialFv
// Start address: 0x203760
s32 rdbit(xSerial* this)
{
	st_SERIAL_CLIENTINFO* clt;
}

// wrbit__7xSerialFi
// Start address: 0x203810
void wrbit(xSerial* this, s32 is_on)
{
	st_SERIAL_CLIENTINFO* clt;
}

// Read__7xSerialFPf
// Start address: 0x2038f0
s32 Read(xSerial* this, f32* buf)
{
}

// Read__7xSerialFPUi
// Start address: 0x203900
s32 Read(xSerial* this, u32* buf)
{
}

// Read__7xSerialFPi
// Start address: 0x203910
s32 Read(xSerial* this, s32* buf)
{
}

// Read__7xSerialFPs
// Start address: 0x203920
s32 Read(xSerial* this, s16* buf)
{
}

// Read__7xSerialFPUc
// Start address: 0x203930
s32 Read(xSerial* this, u8* buf)
{
}

// Read_b7__7xSerialFPUi
// Start address: 0x203940
s32 Read_b7(xSerial* this, u32* bits)
{
}

// Read_b1__7xSerialFPi
// Start address: 0x203950
s32 Read_b1(xSerial* this, s32* bits)
{
}

// Read__7xSerialFPcii
// Start address: 0x203960
s32 Read(xSerial* this, s8* buf, s32 elesize, s32 n)
{
	s32 nbit;
	s8* cptr;
	s32* iptr;
	s32 bitval;
	s32 bidx;
	s32 i;
}

// Write__7xSerialFf
// Start address: 0x203b00
s32 Write(xSerial* this, f32 data)
{
}

// Write__7xSerialFUi
// Start address: 0x203b30
s32 Write(xSerial* this, u32 data)
{
}

// Write__7xSerialFi
// Start address: 0x203b60
s32 Write(xSerial* this, s32 data)
{
}

// Write__7xSerialFs
// Start address: 0x203b90
s32 Write(xSerial* this, s16 data)
{
}

// Write__7xSerialFUc
// Start address: 0x203bc0
s32 Write(xSerial* this, u8 data)
{
}

// Write_b7__7xSerialFUi
// Start address: 0x203bf0
s32 Write_b7(xSerial* this, u32 bits)
{
}

// Write_b1__7xSerialFi
// Start address: 0x203c20
s32 Write_b1(xSerial* this, s32 bits)
{
}

// Write__7xSerialFPcii
// Start address: 0x203c50
s32 Write(xSerial* this, s8* data, s32 elesize, s32 n)
{
	s32 nbit;
	s8* cptr;
	s32* iptr;
	s32 bidx;
	s32 i;
}

// setClient__7xSerialFUi
// Start address: 0x203d90
void setClient(xSerial* this, u32 idtag)
{
}

// __dt__7xSerialFv
// Start address: 0x203de0
void* __dt(xSerial* this)
{
}

// __ct__7xSerialFv
// Start address: 0x203e30
void* __ct(xSerial* this)
{
}

// xSerialTraverse__FPFUiP7xSerial_i
// Start address: 0x203e40
void xSerialTraverse(type_1 func)
{
	s32 i;
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	xSerial xser;
	s32 rc;
}

// xSerialShutdown__Fv
// Start address: 0x203f50
s32 xSerialShutdown()
{
}

// xSerialStartup__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x203f70
s32 xSerialStartup(s32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
}

