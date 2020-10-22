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

	int32 rdbit();
	void wrbit(int32 is_on);
	int32 Read(float32* buf);
	int32 Read(uint32* buf);
	int32 Read(int32* buf);
	int32 Read(int16* buf);
	int32 Read(uint8* buf);
	int32 Read_b7(uint32* bits);
	int32 Read_b1(int32* bits);
	int32 Read(int8* buf, int32 elesize, int32 n);
	int32 Write(float32 data);
	int32 Write(uint32 data);
	int32 Write(int32 data);
	int32 Write(int16 data);
	int32 Write(uint8 data);
	int32 Write_b7(uint32 bits);
	int32 Write_b1(int32 bits);
	int32 Write(int8* data, int32 elesize, int32 n);
	void setClient(uint32 idtag);
	void* __dt();
	void* __ct();
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
int32 g_tbl_onbit[32];
int32 g_tbl_clear[32];
int32(*xSER_xsgclt_ldproc_fill)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSER_xsgclt_ldproc_clt)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSER_xsgclt_ldproc_ver)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSER_xsgclt_svproc_fill)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSER_xsgclt_svinfo_fill)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSER_xsgclt_svproc_clt)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSER_xsgclt_svinfo_clt)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSER_xsgclt_svproc_ver)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSER_xsgclt_svinfo_ver)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSER_ord_compare)(void*, void*);
int32(*xSER_ord_test)(void*, void*);
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
int32 rdbit();
void wrbit(int32 is_on);
int32 Read(float32* buf);
int32 Read(uint32* buf);
int32 Read(int32* buf);
int32 Read(int16* buf);
int32 Read(uint8* buf);
int32 Read_b7(uint32* bits);
int32 Read_b1(int32* bits);
int32 Read(int8* buf, int32 elesize, int32 n);
int32 Write(float32 data);
int32 Write(uint32 data);
int32 Write(int32 data);
int32 Write(int16 data);
int32 Write(uint8 data);
int32 Write_b7(uint32 bits);
int32 Write_b1(int32 bits);
int32 Write(int8* data, int32 elesize, int32 n);
void setClient(uint32 idtag);
void* __dt();
void* __ct();
void xSerialTraverse(int32(*func)(uint32, xSerial*));
int32 xSerialShutdown();
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo);

// xSER_xsgclt_ldproc_fill__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x202f40
int32 xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 filbuf[9];
	// Line 1359, Address: 0x202f40, Func Offset: 0
	// Line 1361, Address: 0x202f44, Func Offset: 0x4
	// Line 1364, Address: 0x202f6c, Func Offset: 0x2c
	// Line 1367, Address: 0x202f88, Func Offset: 0x48
	// Line 1370, Address: 0x202f9c, Func Offset: 0x5c
	// Line 1371, Address: 0x202fa0, Func Offset: 0x60
	// Func End, Address: 0x202fac, Func Offset: 0x6c
}

// xSER_xsgclt_svproc_fill__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x202fb0
int32 xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int8 filbuf[9];
	// Line 1347, Address: 0x202fb0, Func Offset: 0
	// Line 1349, Address: 0x202fb4, Func Offset: 0x4
	// Line 1347, Address: 0x202fb8, Func Offset: 0x8
	// Line 1349, Address: 0x202fbc, Func Offset: 0xc
	// Line 1352, Address: 0x202fc4, Func Offset: 0x14
	// Line 1349, Address: 0x202fc8, Func Offset: 0x18
	// Line 1352, Address: 0x202fcc, Func Offset: 0x1c
	// Line 1349, Address: 0x202fd8, Func Offset: 0x28
	// Line 1352, Address: 0x202fe0, Func Offset: 0x30
	// Line 1355, Address: 0x202fe8, Func Offset: 0x38
	// Line 1354, Address: 0x202fec, Func Offset: 0x3c
	// Line 1355, Address: 0x202ff0, Func Offset: 0x40
	// Func End, Address: 0x202ff8, Func Offset: 0x48
}

// xSER_xsgclt_svinfo_fill__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203000
int32 xSER_xsgclt_svinfo_fill(int32* cur_space, int32* max_fullgame)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 i;
	int32 tally;
	int32 size;
	// Line 1307, Address: 0x203000, Func Offset: 0
	// Line 1308, Address: 0x203004, Func Offset: 0x4
	// Line 1307, Address: 0x203008, Func Offset: 0x8
	// Line 1321, Address: 0x20300c, Func Offset: 0xc
	// Line 1308, Address: 0x203014, Func Offset: 0x14
	// Line 1320, Address: 0x203018, Func Offset: 0x18
	// Line 1321, Address: 0x20301c, Func Offset: 0x1c
	// Line 1324, Address: 0x203040, Func Offset: 0x40
	// Line 1325, Address: 0x2030cc, Func Offset: 0xcc
	// Line 1324, Address: 0x2030d4, Func Offset: 0xd4
	// Line 1325, Address: 0x2030dc, Func Offset: 0xdc
	// Line 1328, Address: 0x2030e8, Func Offset: 0xe8
	// Line 1343, Address: 0x2030ec, Func Offset: 0xec
	// Line 1332, Address: 0x2030f0, Func Offset: 0xf0
	// Line 1340, Address: 0x2030f4, Func Offset: 0xf4
	// Line 1341, Address: 0x2030fc, Func Offset: 0xfc
	// Line 1344, Address: 0x203100, Func Offset: 0x100
	// Func End, Address: 0x20310c, Func Offset: 0x10c
}

// xSER_xsgclt_ldproc_clt__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x203110
int32 xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, uint32 idtag)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1282, Address: 0x203110, Func Offset: 0
	// Line 1288, Address: 0x203114, Func Offset: 0x4
	// Line 1282, Address: 0x203118, Func Offset: 0x8
	// Line 1288, Address: 0x203128, Func Offset: 0x18
	// Line 1291, Address: 0x203140, Func Offset: 0x30
	// Line 1298, Address: 0x203148, Func Offset: 0x38
	// Line 1300, Address: 0x20315c, Func Offset: 0x4c
	// Line 1301, Address: 0x203160, Func Offset: 0x50
	// Func End, Address: 0x203174, Func Offset: 0x64
}

// xSER_xsgclt_svproc_clt__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203180
int32 xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1260, Address: 0x203180, Func Offset: 0
	// Line 1266, Address: 0x203194, Func Offset: 0x14
	// Line 1270, Address: 0x2031a0, Func Offset: 0x20
	// Line 1273, Address: 0x2031b4, Func Offset: 0x34
	// Line 1272, Address: 0x2031b8, Func Offset: 0x38
	// Line 1273, Address: 0x2031bc, Func Offset: 0x3c
	// Func End, Address: 0x2031cc, Func Offset: 0x4c
}

// xSER_xsgclt_svinfo_clt__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x2031d0
int32 xSER_xsgclt_svinfo_clt(void* cltdata, int32* cur_space, int32* max_fullgame)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 1253, Address: 0x2031d0, Func Offset: 0
	// Line 1256, Address: 0x2031d4, Func Offset: 0x4
	// Line 1253, Address: 0x2031d8, Func Offset: 0x8
	// Line 1254, Address: 0x2031dc, Func Offset: 0xc
	// Line 1257, Address: 0x2031e0, Func Offset: 0x10
	// Func End, Address: 0x2031e8, Func Offset: 0x18
}

// xSER_xsgclt_ldproc_ver__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x2031f0
int32 xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int32 ver;
	// Line 1230, Address: 0x2031f0, Func Offset: 0
	// Line 1235, Address: 0x2031f4, Func Offset: 0x4
	// Line 1230, Address: 0x2031f8, Func Offset: 0x8
	// Line 1235, Address: 0x2031fc, Func Offset: 0xc
	// Line 1230, Address: 0x203200, Func Offset: 0x10
	// Line 1235, Address: 0x203204, Func Offset: 0x14
	// Line 1231, Address: 0x203208, Func Offset: 0x18
	// Line 1235, Address: 0x20320c, Func Offset: 0x1c
	// Line 1232, Address: 0x203210, Func Offset: 0x20
	// Line 1235, Address: 0x203214, Func Offset: 0x24
	// Line 1239, Address: 0x20321c, Func Offset: 0x2c
	// Line 1242, Address: 0x203238, Func Offset: 0x48
	// Line 1241, Address: 0x203240, Func Offset: 0x50
	// Line 1242, Address: 0x203244, Func Offset: 0x54
	// Func End, Address: 0x20324c, Func Offset: 0x5c
}

// xSER_xsgclt_svproc_ver__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203250
int32 xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 ver;
	// Line 1218, Address: 0x203250, Func Offset: 0
	// Line 1223, Address: 0x203254, Func Offset: 0x4
	// Line 1218, Address: 0x20325c, Func Offset: 0xc
	// Line 1220, Address: 0x203260, Func Offset: 0x10
	// Line 1223, Address: 0x203264, Func Offset: 0x14
	// Line 1226, Address: 0x203270, Func Offset: 0x20
	// Line 1225, Address: 0x203274, Func Offset: 0x24
	// Line 1226, Address: 0x203278, Func Offset: 0x28
	// Func End, Address: 0x203280, Func Offset: 0x30
}

// xSER_xsgclt_svinfo_ver__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203280
int32 xSER_xsgclt_svinfo_ver(int32* cur_space, int32* max_fullgame)
{
	// Line 1211, Address: 0x203280, Func Offset: 0
	// Line 1214, Address: 0x203284, Func Offset: 0x4
	// Line 1211, Address: 0x203288, Func Offset: 0x8
	// Line 1215, Address: 0x20328c, Func Offset: 0xc
	// Func End, Address: 0x203294, Func Offset: 0x14
}

// xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE
// Start address: 0x2032a0
int32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int32 i;
	// Line 1152, Address: 0x2032a0, Func Offset: 0
	// Line 1157, Address: 0x2032a4, Func Offset: 0x4
	// Line 1152, Address: 0x2032a8, Func Offset: 0x8
	// Line 1157, Address: 0x2032ac, Func Offset: 0xc
	// Line 1152, Address: 0x2032b0, Func Offset: 0x10
	// Line 1162, Address: 0x2032b4, Func Offset: 0x14
	// Line 1152, Address: 0x2032b8, Func Offset: 0x18
	// Line 1153, Address: 0x2032c4, Func Offset: 0x24
	// Line 1152, Address: 0x2032c8, Func Offset: 0x28
	// Line 1153, Address: 0x2032cc, Func Offset: 0x2c
	// Line 1157, Address: 0x2032d0, Func Offset: 0x30
	// Line 1162, Address: 0x2032dc, Func Offset: 0x3c
	// Line 1165, Address: 0x2032e4, Func Offset: 0x44
	// Line 1170, Address: 0x203304, Func Offset: 0x64
	// Line 1172, Address: 0x203318, Func Offset: 0x78
	// Line 1173, Address: 0x20331c, Func Offset: 0x7c
	// Line 1172, Address: 0x20332c, Func Offset: 0x8c
	// Line 1173, Address: 0x203334, Func Offset: 0x94
	// Line 1175, Address: 0x203340, Func Offset: 0xa0
	// Line 1178, Address: 0x203358, Func Offset: 0xb8
	// Line 1180, Address: 0x203380, Func Offset: 0xe0
	// Line 1181, Address: 0x203388, Func Offset: 0xe8
	// Line 1184, Address: 0x203394, Func Offset: 0xf4
	// Line 1191, Address: 0x2033a8, Func Offset: 0x108
	// Line 1195, Address: 0x2033c0, Func Offset: 0x120
	// Line 1200, Address: 0x2033dc, Func Offset: 0x13c
	// Line 1203, Address: 0x2033e0, Func Offset: 0x140
	// Line 1202, Address: 0x2033e8, Func Offset: 0x148
	// Line 1203, Address: 0x2033ec, Func Offset: 0x14c
	// Func End, Address: 0x203400, Func Offset: 0x160
}

// XSER_get_client__FUi
// Start address: 0x203400
st_SERIAL_CLIENTINFO* XSER_get_client(uint32 idtag)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int32 idx;
	// Line 1100, Address: 0x203400, Func Offset: 0
	// Line 1106, Address: 0x203404, Func Offset: 0x4
	// Line 1100, Address: 0x203408, Func Offset: 0x8
	// Line 1106, Address: 0x20340c, Func Offset: 0xc
	// Line 1100, Address: 0x203410, Func Offset: 0x10
	// Line 1106, Address: 0x20341c, Func Offset: 0x1c
	// Line 1101, Address: 0x203420, Func Offset: 0x20
	// Line 1106, Address: 0x203424, Func Offset: 0x24
	// Line 1100, Address: 0x20342c, Func Offset: 0x2c
	// Line 1106, Address: 0x203430, Func Offset: 0x30
	// Line 1107, Address: 0x203438, Func Offset: 0x38
	// Line 1113, Address: 0x203440, Func Offset: 0x40
	// Line 1123, Address: 0x203444, Func Offset: 0x44
	// Line 1114, Address: 0x203450, Func Offset: 0x50
	// Line 1123, Address: 0x203454, Func Offset: 0x54
	// Line 1114, Address: 0x203458, Func Offset: 0x58
	// Line 1123, Address: 0x20345c, Func Offset: 0x5c
	// Line 1124, Address: 0x203464, Func Offset: 0x64
	// Line 1128, Address: 0x203470, Func Offset: 0x70
	// Line 1143, Address: 0x203480, Func Offset: 0x80
	// Line 1144, Address: 0x203484, Func Offset: 0x84
	// Func End, Address: 0x20349c, Func Offset: 0x9c
}

// xSER_ord_test__FPCvPv
// Start address: 0x2034a0
int32 xSER_ord_test(void* key, void* elt)
{
	int32 rc;
	uint32 idtag;
	// Line 1088, Address: 0x2034a0, Func Offset: 0
	// Line 1091, Address: 0x2034a4, Func Offset: 0x4
	// Line 1092, Address: 0x2034b8, Func Offset: 0x18
	// Line 1093, Address: 0x2034d0, Func Offset: 0x30
	// Line 1096, Address: 0x2034d8, Func Offset: 0x38
	// Func End, Address: 0x2034e0, Func Offset: 0x40
}

// xSER_ord_compare__FPvPv
// Start address: 0x2034e0
int32 xSER_ord_compare(void* e1, void* e2)
{
	int32 rc;
	// Line 1071, Address: 0x2034e0, Func Offset: 0
	// Line 1077, Address: 0x2034e8, Func Offset: 0x8
	// Line 1078, Address: 0x203500, Func Offset: 0x20
	// Line 1079, Address: 0x203518, Func Offset: 0x38
	// Line 1082, Address: 0x203520, Func Offset: 0x40
	// Func End, Address: 0x203528, Func Offset: 0x48
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
	// Line 955, Address: 0x203530, Func Offset: 0
	// Line 968, Address: 0x203534, Func Offset: 0x4
	// Line 955, Address: 0x203538, Func Offset: 0x8
	// Line 958, Address: 0x203548, Func Offset: 0x18
	// Line 955, Address: 0x20354c, Func Offset: 0x1c
	// Line 968, Address: 0x20355c, Func Offset: 0x2c
	// Line 955, Address: 0x203560, Func Offset: 0x30
	// Line 956, Address: 0x203564, Func Offset: 0x34
	// Line 968, Address: 0x203568, Func Offset: 0x38
	// Line 956, Address: 0x203570, Func Offset: 0x40
	// Line 968, Address: 0x203574, Func Offset: 0x44
	// Line 969, Address: 0x20357c, Func Offset: 0x4c
	// Line 971, Address: 0x203590, Func Offset: 0x60
	// Line 969, Address: 0x203594, Func Offset: 0x64
	// Line 971, Address: 0x203598, Func Offset: 0x68
	// Line 972, Address: 0x2035a8, Func Offset: 0x78
	// Line 981, Address: 0x2035b8, Func Offset: 0x88
	// Line 982, Address: 0x2035c4, Func Offset: 0x94
	// Line 983, Address: 0x2035cc, Func Offset: 0x9c
	// Line 982, Address: 0x2035d0, Func Offset: 0xa0
	// Line 984, Address: 0x2035d4, Func Offset: 0xa4
	// Line 982, Address: 0x2035d8, Func Offset: 0xa8
	// Line 985, Address: 0x2035dc, Func Offset: 0xac
	// Line 990, Address: 0x2035e8, Func Offset: 0xb8
	// Line 995, Address: 0x2035f0, Func Offset: 0xc0
	// Line 990, Address: 0x2035f4, Func Offset: 0xc4
	// Line 995, Address: 0x2035f8, Func Offset: 0xc8
	// Line 990, Address: 0x2035fc, Func Offset: 0xcc
	// Line 995, Address: 0x20360c, Func Offset: 0xdc
	// Line 996, Address: 0x203618, Func Offset: 0xe8
	// Line 998, Address: 0x203628, Func Offset: 0xf8
	// Line 1011, Address: 0x20362c, Func Offset: 0xfc
	// Line 1008, Address: 0x203630, Func Offset: 0x100
	// Line 1011, Address: 0x203634, Func Offset: 0x104
	// Line 1016, Address: 0x203640, Func Offset: 0x110
	// Line 1018, Address: 0x203644, Func Offset: 0x114
	// Line 1020, Address: 0x203648, Func Offset: 0x118
	// Line 1016, Address: 0x20364c, Func Offset: 0x11c
	// Line 1017, Address: 0x203650, Func Offset: 0x120
	// Line 1018, Address: 0x203654, Func Offset: 0x124
	// Line 1020, Address: 0x203660, Func Offset: 0x130
	// Line 1023, Address: 0x203674, Func Offset: 0x144
	// Line 1020, Address: 0x203678, Func Offset: 0x148
	// Line 1023, Address: 0x20367c, Func Offset: 0x14c
	// Line 1020, Address: 0x203680, Func Offset: 0x150
	// Line 1023, Address: 0x203684, Func Offset: 0x154
	// Line 1029, Address: 0x20368c, Func Offset: 0x15c
	// Line 1026, Address: 0x203690, Func Offset: 0x160
	// Line 1031, Address: 0x203694, Func Offset: 0x164
	// Line 1026, Address: 0x203698, Func Offset: 0x168
	// Line 1031, Address: 0x20369c, Func Offset: 0x16c
	// Line 1037, Address: 0x2036a8, Func Offset: 0x178
	// Line 1049, Address: 0x2036b8, Func Offset: 0x188
	// Line 1052, Address: 0x2036c4, Func Offset: 0x194
	// Line 1050, Address: 0x2036c8, Func Offset: 0x198
	// Line 1051, Address: 0x2036cc, Func Offset: 0x19c
	// Line 1054, Address: 0x2036d0, Func Offset: 0x1a0
	// Line 1061, Address: 0x2036ec, Func Offset: 0x1bc
	// Line 1054, Address: 0x2036f4, Func Offset: 0x1c4
	// Line 1057, Address: 0x2036fc, Func Offset: 0x1cc
	// Line 1061, Address: 0x203704, Func Offset: 0x1d4
	// Line 1068, Address: 0x203710, Func Offset: 0x1e0
	// Func End, Address: 0x203734, Func Offset: 0x204
}

// xSerialWipeMainBuffer__Fv
// Start address: 0x203740
void xSerialWipeMainBuffer()
{
	// Line 924, Address: 0x203740, Func Offset: 0
	// Func End, Address: 0x203758, Func Offset: 0x18
}

// rdbit__7xSerialFv
// Start address: 0x203760
int32 xSerial::rdbit()
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 831, Address: 0x203760, Func Offset: 0
	// Line 848, Address: 0x203764, Func Offset: 0x4
	// Line 855, Address: 0x203780, Func Offset: 0x20
	// Line 864, Address: 0x20378c, Func Offset: 0x2c
	// Line 868, Address: 0x2037a4, Func Offset: 0x44
	// Line 864, Address: 0x2037a8, Func Offset: 0x48
	// Line 867, Address: 0x2037c0, Func Offset: 0x60
	// Line 864, Address: 0x2037c4, Func Offset: 0x64
	// Line 867, Address: 0x2037c8, Func Offset: 0x68
	// Line 864, Address: 0x2037cc, Func Offset: 0x6c
	// Line 868, Address: 0x2037d0, Func Offset: 0x70
	// Line 870, Address: 0x2037dc, Func Offset: 0x7c
	// Line 871, Address: 0x2037e8, Func Offset: 0x88
	// Line 872, Address: 0x2037ec, Func Offset: 0x8c
	// Line 876, Address: 0x2037f0, Func Offset: 0x90
	// Line 878, Address: 0x2037fc, Func Offset: 0x9c
	// Line 879, Address: 0x203800, Func Offset: 0xa0
	// Func End, Address: 0x203808, Func Offset: 0xa8
}

// wrbit__7xSerialFi
// Start address: 0x203810
void xSerial::wrbit(int32 is_on)
{
	st_SERIAL_CLIENTINFO* clt;
	// Line 774, Address: 0x203810, Func Offset: 0
	// Line 790, Address: 0x203814, Func Offset: 0x4
	// Line 794, Address: 0x203830, Func Offset: 0x20
	// Line 803, Address: 0x203838, Func Offset: 0x28
	// Line 808, Address: 0x203868, Func Offset: 0x58
	// Line 811, Address: 0x2038a8, Func Offset: 0x98
	// Line 812, Address: 0x2038ac, Func Offset: 0x9c
	// Line 811, Address: 0x2038b0, Func Offset: 0xa0
	// Line 812, Address: 0x2038b8, Func Offset: 0xa8
	// Line 814, Address: 0x2038c4, Func Offset: 0xb4
	// Line 815, Address: 0x2038d0, Func Offset: 0xc0
	// Line 816, Address: 0x2038d4, Func Offset: 0xc4
	// Line 820, Address: 0x2038d8, Func Offset: 0xc8
	// Line 822, Address: 0x2038e4, Func Offset: 0xd4
	// Line 823, Address: 0x2038e8, Func Offset: 0xd8
	// Func End, Address: 0x2038f0, Func Offset: 0xe0
}

// Read__7xSerialFPf
// Start address: 0x2038f0
int32 xSerial::Read(float32* buf)
{
	// Line 711, Address: 0x2038f0, Func Offset: 0
	// Func End, Address: 0x2038fc, Func Offset: 0xc
}

// Read__7xSerialFPUi
// Start address: 0x203900
int32 xSerial::Read(uint32* buf)
{
	// Line 706, Address: 0x203900, Func Offset: 0
	// Func End, Address: 0x20390c, Func Offset: 0xc
}

// Read__7xSerialFPi
// Start address: 0x203910
int32 xSerial::Read(int32* buf)
{
	// Line 701, Address: 0x203910, Func Offset: 0
	// Func End, Address: 0x20391c, Func Offset: 0xc
}

// Read__7xSerialFPs
// Start address: 0x203920
int32 xSerial::Read(int16* buf)
{
	// Line 691, Address: 0x203920, Func Offset: 0
	// Func End, Address: 0x20392c, Func Offset: 0xc
}

// Read__7xSerialFPUc
// Start address: 0x203930
int32 xSerial::Read(uint8* buf)
{
	// Line 681, Address: 0x203930, Func Offset: 0
	// Func End, Address: 0x20393c, Func Offset: 0xc
}

// Read_b7__7xSerialFPUi
// Start address: 0x203940
int32 xSerial::Read_b7(uint32* bits)
{
	// Line 669, Address: 0x203940, Func Offset: 0
	// Func End, Address: 0x20394c, Func Offset: 0xc
}

// Read_b1__7xSerialFPi
// Start address: 0x203950
int32 xSerial::Read_b1(int32* bits)
{
	// Line 604, Address: 0x203950, Func Offset: 0
	// Func End, Address: 0x20395c, Func Offset: 0xc
}

// Read__7xSerialFPcii
// Start address: 0x203960
int32 xSerial::Read(int8* buf, int32 elesize, int32 n)
{
	int32 nbit;
	int8* cptr;
	int32* iptr;
	int32 bitval;
	int32 bidx;
	int32 i;
	// Line 495, Address: 0x203960, Func Offset: 0
	// Line 515, Address: 0x20397c, Func Offset: 0x1c
	// Line 530, Address: 0x203994, Func Offset: 0x34
	// Line 534, Address: 0x20399c, Func Offset: 0x3c
	// Line 533, Address: 0x2039a0, Func Offset: 0x40
	// Line 535, Address: 0x2039a4, Func Offset: 0x44
	// Line 538, Address: 0x2039b0, Func Offset: 0x50
	// Line 541, Address: 0x2039b8, Func Offset: 0x58
	// Line 542, Address: 0x2039e8, Func Offset: 0x88
	// Line 545, Address: 0x203a08, Func Offset: 0xa8
	// Line 548, Address: 0x203a0c, Func Offset: 0xac
	// Line 549, Address: 0x203a18, Func Offset: 0xb8
	// Line 550, Address: 0x203a1c, Func Offset: 0xbc
	// Line 554, Address: 0x203a20, Func Offset: 0xc0
	// Line 555, Address: 0x203a30, Func Offset: 0xd0
	// Line 559, Address: 0x203a38, Func Offset: 0xd8
	// Line 558, Address: 0x203a3c, Func Offset: 0xdc
	// Line 557, Address: 0x203a40, Func Offset: 0xe0
	// Line 559, Address: 0x203a44, Func Offset: 0xe4
	// Line 562, Address: 0x203a50, Func Offset: 0xf0
	// Line 565, Address: 0x203a58, Func Offset: 0xf8
	// Line 566, Address: 0x203a88, Func Offset: 0x128
	// Line 569, Address: 0x203aa8, Func Offset: 0x148
	// Line 572, Address: 0x203aac, Func Offset: 0x14c
	// Line 573, Address: 0x203ab8, Func Offset: 0x158
	// Line 574, Address: 0x203abc, Func Offset: 0x15c
	// Line 578, Address: 0x203ac0, Func Offset: 0x160
	// Line 586, Address: 0x203ad0, Func Offset: 0x170
	// Line 587, Address: 0x203ad4, Func Offset: 0x174
	// Func End, Address: 0x203af4, Func Offset: 0x194
}

// Write__7xSerialFf
// Start address: 0x203b00
int32 xSerial::Write(float32 data)
{
	// Line 441, Address: 0x203b00, Func Offset: 0
	// Line 442, Address: 0x203b04, Func Offset: 0x4
	// Line 441, Address: 0x203b08, Func Offset: 0x8
	// Line 442, Address: 0x203b0c, Func Offset: 0xc
	// Line 441, Address: 0x203b10, Func Offset: 0x10
	// Line 442, Address: 0x203b14, Func Offset: 0x14
	// Line 443, Address: 0x203b1c, Func Offset: 0x1c
	// Func End, Address: 0x203b28, Func Offset: 0x28
}

// Write__7xSerialFUi
// Start address: 0x203b30
int32 xSerial::Write(uint32 data)
{
	// Line 436, Address: 0x203b30, Func Offset: 0
	// Line 437, Address: 0x203b34, Func Offset: 0x4
	// Line 436, Address: 0x203b38, Func Offset: 0x8
	// Line 437, Address: 0x203b3c, Func Offset: 0xc
	// Line 436, Address: 0x203b40, Func Offset: 0x10
	// Line 437, Address: 0x203b44, Func Offset: 0x14
	// Line 438, Address: 0x203b4c, Func Offset: 0x1c
	// Func End, Address: 0x203b58, Func Offset: 0x28
}

// Write__7xSerialFi
// Start address: 0x203b60
int32 xSerial::Write(int32 data)
{
	// Line 431, Address: 0x203b60, Func Offset: 0
	// Line 432, Address: 0x203b64, Func Offset: 0x4
	// Line 431, Address: 0x203b68, Func Offset: 0x8
	// Line 432, Address: 0x203b6c, Func Offset: 0xc
	// Line 431, Address: 0x203b70, Func Offset: 0x10
	// Line 432, Address: 0x203b74, Func Offset: 0x14
	// Line 433, Address: 0x203b7c, Func Offset: 0x1c
	// Func End, Address: 0x203b88, Func Offset: 0x28
}

// Write__7xSerialFs
// Start address: 0x203b90
int32 xSerial::Write(int16 data)
{
	// Line 421, Address: 0x203b90, Func Offset: 0
	// Line 422, Address: 0x203b94, Func Offset: 0x4
	// Line 421, Address: 0x203b98, Func Offset: 0x8
	// Line 422, Address: 0x203b9c, Func Offset: 0xc
	// Line 421, Address: 0x203ba0, Func Offset: 0x10
	// Line 422, Address: 0x203ba4, Func Offset: 0x14
	// Line 423, Address: 0x203bac, Func Offset: 0x1c
	// Func End, Address: 0x203bb8, Func Offset: 0x28
}

// Write__7xSerialFUc
// Start address: 0x203bc0
int32 xSerial::Write(uint8 data)
{
	// Line 411, Address: 0x203bc0, Func Offset: 0
	// Line 412, Address: 0x203bc4, Func Offset: 0x4
	// Line 411, Address: 0x203bc8, Func Offset: 0x8
	// Line 412, Address: 0x203bcc, Func Offset: 0xc
	// Line 411, Address: 0x203bd0, Func Offset: 0x10
	// Line 412, Address: 0x203bd4, Func Offset: 0x14
	// Line 413, Address: 0x203bdc, Func Offset: 0x1c
	// Func End, Address: 0x203be8, Func Offset: 0x28
}

// Write_b7__7xSerialFUi
// Start address: 0x203bf0
int32 xSerial::Write_b7(uint32 bits)
{
	// Line 399, Address: 0x203bf0, Func Offset: 0
	// Line 400, Address: 0x203bf4, Func Offset: 0x4
	// Line 399, Address: 0x203bf8, Func Offset: 0x8
	// Line 400, Address: 0x203bfc, Func Offset: 0xc
	// Line 399, Address: 0x203c00, Func Offset: 0x10
	// Line 400, Address: 0x203c04, Func Offset: 0x14
	// Line 401, Address: 0x203c0c, Func Offset: 0x1c
	// Func End, Address: 0x203c18, Func Offset: 0x28
}

// Write_b1__7xSerialFi
// Start address: 0x203c20
int32 xSerial::Write_b1(int32 bits)
{
	// Line 334, Address: 0x203c20, Func Offset: 0
	// Line 335, Address: 0x203c24, Func Offset: 0x4
	// Line 334, Address: 0x203c28, Func Offset: 0x8
	// Line 335, Address: 0x203c2c, Func Offset: 0xc
	// Line 334, Address: 0x203c30, Func Offset: 0x10
	// Line 335, Address: 0x203c34, Func Offset: 0x14
	// Line 336, Address: 0x203c3c, Func Offset: 0x1c
	// Func End, Address: 0x203c48, Func Offset: 0x28
}

// Write__7xSerialFPcii
// Start address: 0x203c50
int32 xSerial::Write(int8* data, int32 elesize, int32 n)
{
	int32 nbit;
	int8* cptr;
	int32* iptr;
	int32 bidx;
	int32 i;
	// Line 172, Address: 0x203c50, Func Offset: 0
	// Line 185, Address: 0x203c6c, Func Offset: 0x1c
	// Line 222, Address: 0x203c7c, Func Offset: 0x2c
	// Line 197, Address: 0x203c80, Func Offset: 0x30
	// Line 240, Address: 0x203c90, Func Offset: 0x40
	// Line 243, Address: 0x203c98, Func Offset: 0x48
	// Line 242, Address: 0x203c9c, Func Offset: 0x4c
	// Line 244, Address: 0x203ca0, Func Offset: 0x50
	// Line 249, Address: 0x203ca8, Func Offset: 0x58
	// Line 252, Address: 0x203ccc, Func Offset: 0x7c
	// Line 255, Address: 0x203cd0, Func Offset: 0x80
	// Line 257, Address: 0x203cdc, Func Offset: 0x8c
	// Line 258, Address: 0x203ce0, Func Offset: 0x90
	// Line 263, Address: 0x203ce4, Func Offset: 0x94
	// Line 264, Address: 0x203cf8, Func Offset: 0xa8
	// Line 270, Address: 0x203d00, Func Offset: 0xb0
	// Line 269, Address: 0x203d04, Func Offset: 0xb4
	// Line 268, Address: 0x203d08, Func Offset: 0xb8
	// Line 270, Address: 0x203d0c, Func Offset: 0xbc
	// Line 275, Address: 0x203d18, Func Offset: 0xc8
	// Line 278, Address: 0x203d3c, Func Offset: 0xec
	// Line 281, Address: 0x203d40, Func Offset: 0xf0
	// Line 283, Address: 0x203d4c, Func Offset: 0xfc
	// Line 284, Address: 0x203d50, Func Offset: 0x100
	// Line 289, Address: 0x203d54, Func Offset: 0x104
	// Line 297, Address: 0x203d68, Func Offset: 0x118
	// Line 298, Address: 0x203d70, Func Offset: 0x120
	// Func End, Address: 0x203d90, Func Offset: 0x140
}

// setClient__7xSerialFUi
// Start address: 0x203d90
void xSerial::setClient(uint32 idtag)
{
	// Line 159, Address: 0x203d90, Func Offset: 0
	// Line 160, Address: 0x203da0, Func Offset: 0x10
	// Line 162, Address: 0x203dcc, Func Offset: 0x3c
	// Func End, Address: 0x203ddc, Func Offset: 0x4c
}

// __dt__7xSerialFv
// Start address: 0x203de0
void* xSerial::__dt()
{
	// Line 123, Address: 0x203de0, Func Offset: 0
	// Line 130, Address: 0x203df8, Func Offset: 0x18
	// Line 140, Address: 0x203e04, Func Offset: 0x24
	// Line 148, Address: 0x203e14, Func Offset: 0x34
	// Func End, Address: 0x203e24, Func Offset: 0x44
}

// __ct__7xSerialFv
// Start address: 0x203e30
void* xSerial::__ct()
{
	// Line 121, Address: 0x203e30, Func Offset: 0
	// Func End, Address: 0x203e38, Func Offset: 0x8
}

// xSerialTraverse__FPFUiP7xSerial_i
// Start address: 0x203e40
void xSerialTraverse(int32(*func)(uint32, xSerial*))
{
	int32 i;
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	xSerial xser;
	int32 rc;
	// Line 87, Address: 0x203e40, Func Offset: 0
	// Line 96, Address: 0x203e44, Func Offset: 0x4
	// Line 87, Address: 0x203e48, Func Offset: 0x8
	// Line 96, Address: 0x203e68, Func Offset: 0x28
	// Line 87, Address: 0x203e6c, Func Offset: 0x2c
	// Line 89, Address: 0x203e70, Func Offset: 0x30
	// Line 87, Address: 0x203e74, Func Offset: 0x34
	// Line 96, Address: 0x203e7c, Func Offset: 0x3c
	// Line 98, Address: 0x203ea0, Func Offset: 0x60
	// Line 103, Address: 0x203eac, Func Offset: 0x6c
	// Line 106, Address: 0x203ee0, Func Offset: 0xa0
	// Line 107, Address: 0x203eec, Func Offset: 0xac
	// Line 109, Address: 0x203ef4, Func Offset: 0xb4
	// Line 112, Address: 0x203f20, Func Offset: 0xe0
	// Func End, Address: 0x203f50, Func Offset: 0x110
}

// xSerialShutdown__Fv
// Start address: 0x203f50
int32 xSerialShutdown()
{
	// Line 73, Address: 0x203f50, Func Offset: 0
	// Line 83, Address: 0x203f5c, Func Offset: 0xc
	// Func End, Address: 0x203f64, Func Offset: 0x14
}

// xSerialStartup__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x203f70
int32 xSerialStartup(int32 count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	// Line 47, Address: 0x203f70, Func Offset: 0
	// Line 48, Address: 0x203f84, Func Offset: 0x14
	// Line 50, Address: 0x203f98, Func Offset: 0x28
	// Line 52, Address: 0x203fac, Func Offset: 0x3c
	// Line 53, Address: 0x204074, Func Offset: 0x104
	// Line 68, Address: 0x204080, Func Offset: 0x110
	// Line 67, Address: 0x20408c, Func Offset: 0x11c
	// Line 68, Address: 0x204090, Func Offset: 0x120
	// Func End, Address: 0x204098, Func Offset: 0x128
}

