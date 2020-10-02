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

typedef int32(*type_0)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_1)(uint32, xSerial*);
typedef int32(*type_2)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_3)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_5)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_6)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_7)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_10)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_11)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_12)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_14)(void*, void*);
typedef int32(*type_15)(void*, void*);

typedef int8 type_4[9];
typedef int32 type_8[32];
typedef int8 type_9[9];
typedef int32 type_13[32];

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct st_SERIAL_CLIENTINFO
{
	uint32 idtag;
	int32* membuf;
	int32 trueoff;
	int32 actsize;
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
	float32 x;
	float32 y;
	float32 z;
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct st_SERIAL_PERCID_SIZE
{
	uint32 idtag;
	int32 needsize;
};

struct st_XSERIAL_DATA_PRIV
{
	int32 flg_info;
	int32* bitbuf;
	int32 buf_bytcnt;
	st_SERIAL_CLIENTINFO* cltbuf;
	st_SERIAL_CLIENTINFO* cltnext;
	st_XORDEREDARRAY cltlist;
};

struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

int32 g_serinit;
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
uint32 gActiveHeap;

int32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSER_xsgclt_svinfo_fill(int32* cur_space, int32* max_fullgame);
int32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, uint32 idtag);
int32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSER_xsgclt_svinfo_clt(void* cltdata, int32* cur_space, int32* max_fullgame);
int32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSER_xsgclt_svinfo_ver(int32* cur_space, int32* max_fullgame);
int32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode);
st_SERIAL_CLIENTINFO* XSER_get_client(uint32 idtag);
int32 xSER_ord_test(void* key, void* elt);
int32 xSER_ord_compare(void* e1, void* e2);
void xSER_init_buffers(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo);
void xSerialWipeMainBuffer();
int32 rdbit(xSerial* this);
void wrbit(xSerial* this, int32 is_on);
int32 Read(xSerial* this, float32* buf);
int32 Read(xSerial* this, uint32* buf);
int32 Read(xSerial* this, int32* buf);
int32 Read(xSerial* this, int16* buf);
int32 Read(xSerial* this, uint8* buf);
int32 Read_b7(xSerial* this, uint32* bits);
int32 Read_b1(xSerial* this, int32* bits);
int32 Read(xSerial* this, int8* buf, int32 elesize, int32 n);
int32 Write(xSerial* this, float32 data);
int32 Write(xSerial* this, uint32 data);
int32 Write(xSerial* this, int32 data);
int32 Write(xSerial* this, int16 data);
int32 Write(xSerial* this, uint8 data);
int32 Write_b7(xSerial* this, uint32 bits);
int32 Write_b1(xSerial* this, int32 bits);
int32 Write(xSerial* this, int8* data, int32 elesize, int32 n);
void setClient(xSerial* this, uint32 idtag);
void* __dt(xSerial* this);
void* __ct(xSerial* this);
void xSerialTraverse(type_1 func);
int32 xSerialShutdown();
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo);

// xSER_xsgclt_ldproc_fill__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x202f40
int32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_4 filbuf;
}

// xSER_xsgclt_svproc_fill__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x202fb0
int32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	type_9 filbuf;
}

// xSER_xsgclt_svinfo_fill__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203000
int32 xSER_xsgclt_svinfo_fill(int32* cur_space, int32* max_fullgame)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 i;
	int32 tally;
	int32 size;
}

// xSER_xsgclt_ldproc_clt__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x203110
int32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, uint32 idtag)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_svproc_clt__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203180
int32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_svinfo_clt__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x2031d0
int32 xSER_xsgclt_svinfo_clt(void* cltdata, int32* cur_space, int32* max_fullgame)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_ldproc_ver__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x2031f0
int32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 ver;
}

// xSER_xsgclt_svproc_ver__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203250
int32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 ver;
}

// xSER_xsgclt_svinfo_ver__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203280
int32 xSER_xsgclt_svinfo_ver(int32* cur_space, int32* max_fullgame)
{
}

// xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE
// Start address: 0x2032a0
int32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int32 i;
}

// XSER_get_client__FUi
// Start address: 0x203400
st_SERIAL_CLIENTINFO* XSER_get_client(uint32 idtag)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int32 idx;
}

// xSER_ord_test__FPCvPv
// Start address: 0x2034a0
int32 xSER_ord_test(void* key, void* elt)
{
	int32 rc;
	uint32 idtag;
}

// xSER_ord_compare__FPvPv
// Start address: 0x2034e0
int32 xSER_ord_compare(void* e1, void* e2)
{
	int32 rc;
}

// xSER_init_buffers__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x203530
void xSER_init_buffers(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 i;
	int32 tally;
	int32 sicnt;
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
int32 rdbit(xSerial* this)
{
	st_SERIAL_CLIENTINFO* clt;
}

// wrbit__7xSerialFi
// Start address: 0x203810
void wrbit(xSerial* this, int32 is_on)
{
	st_SERIAL_CLIENTINFO* clt;
}

// Read__7xSerialFPf
// Start address: 0x2038f0
int32 Read(xSerial* this, float32* buf)
{
}

// Read__7xSerialFPUi
// Start address: 0x203900
int32 Read(xSerial* this, uint32* buf)
{
}

// Read__7xSerialFPi
// Start address: 0x203910
int32 Read(xSerial* this, int32* buf)
{
}

// Read__7xSerialFPs
// Start address: 0x203920
int32 Read(xSerial* this, int16* buf)
{
}

// Read__7xSerialFPUc
// Start address: 0x203930
int32 Read(xSerial* this, uint8* buf)
{
}

// Read_b7__7xSerialFPUi
// Start address: 0x203940
int32 Read_b7(xSerial* this, uint32* bits)
{
}

// Read_b1__7xSerialFPi
// Start address: 0x203950
int32 Read_b1(xSerial* this, int32* bits)
{
}

// Read__7xSerialFPcii
// Start address: 0x203960
int32 Read(xSerial* this, int8* buf, int32 elesize, int32 n)
{
	int32 nbit;
	int8* cptr;
	int32* iptr;
	int32 bitval;
	int32 bidx;
	int32 i;
}

// Write__7xSerialFf
// Start address: 0x203b00
int32 Write(xSerial* this, float32 data)
{
}

// Write__7xSerialFUi
// Start address: 0x203b30
int32 Write(xSerial* this, uint32 data)
{
}

// Write__7xSerialFi
// Start address: 0x203b60
int32 Write(xSerial* this, int32 data)
{
}

// Write__7xSerialFs
// Start address: 0x203b90
int32 Write(xSerial* this, int16 data)
{
}

// Write__7xSerialFUc
// Start address: 0x203bc0
int32 Write(xSerial* this, uint8 data)
{
}

// Write_b7__7xSerialFUi
// Start address: 0x203bf0
int32 Write_b7(xSerial* this, uint32 bits)
{
}

// Write_b1__7xSerialFi
// Start address: 0x203c20
int32 Write_b1(xSerial* this, int32 bits)
{
}

// Write__7xSerialFPcii
// Start address: 0x203c50
int32 Write(xSerial* this, int8* data, int32 elesize, int32 n)
{
	int32 nbit;
	int8* cptr;
	int32* iptr;
	int32 bidx;
	int32 i;
}

// setClient__7xSerialFUi
// Start address: 0x203d90
void setClient(xSerial* this, uint32 idtag)
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
	int32 i;
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	xSerial xser;
	int32 rc;
}

// xSerialShutdown__Fv
// Start address: 0x203f50
int32 xSerialShutdown()
{
}

// xSerialStartup__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x203f70
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
}

