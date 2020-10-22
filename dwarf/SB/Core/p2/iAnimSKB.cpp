typedef struct xQuat;
typedef struct ANMHeader;
typedef struct xVec3;
typedef struct iAnimSKBHeader;
typedef struct iAnimSKBKey;
typedef struct SKAKey;
typedef struct ANMKey;
typedef struct SKAHeader;

typedef int32(*type_11)(void*, void*);
typedef int32(*type_16)(void*, void*);

typedef int16 type_0[4];
typedef float32 type_1[3];
typedef int16 type_2[3];
typedef float32 type_3[3];
typedef float32 type_4[4];
typedef float32 type_5[3];
typedef float32 type_6[3];
typedef SKAKey* type_7[64];
typedef float32 type_8[4];
typedef float32 type_9[3];
typedef float32 type_10[3];
typedef float32 type_12[4];
typedef float32 type_13[3];
typedef int16 type_14[4];
typedef int16 type_15[3];
typedef float32 type_17[24];
typedef float32 type_18[3];
typedef float32 type_19[3];

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct ANMHeader
{
	uint32 chunkType;
	uint32 chunkLength;
	uint32 chunkVersion;
	int32 hanimVersion;
	int32 hanimTypeID;
	uint32 numFrames;
	int32 flags;
	float32 duration;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct iAnimSKBHeader
{
	uint32 Magic;
	uint32 Flags;
	uint16 BoneCount;
	uint16 TimeCount;
	uint32 KeyCount;
	float32 Scale[3];
};

struct iAnimSKBKey
{
	uint16 TimeIndex;
	int16 Quat[4];
	int16 Tran[3];
};

struct SKAKey
{
	float32 quat[4];
	float32 tran[3];
	float32 time;
	uint32 prevFrame;
};

struct ANMKey
{
	float32 time;
	float32 quat[4];
	float32 tran[3];
	uint32 prevFrame;
};

struct SKAHeader
{
	uint32 numFrames;
	uint32 flags;
	float32 duration;
};

float32 slerpPolynomial[24];
int32(*CmpBoneTime)(void*, void*);
uint32 gActiveHeap;
int32(*CmpTime)(void*, void*);
uint8* giAnimScratch;

int32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray);
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* starttran, float32* endtran);
float32 iAnimDurationSKB(iAnimSKBHeader* data);
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat);

// _iAnimSKBExtractTranslate__FP14iAnimSKBHeaderUiP5xVec3i
// Start address: 0x1a4410
int32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray)
{
	uint32 i;
	uint32 j;
	uint32 keylast;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	xVec3* lastTran;
	int32 tranFound;
	int32 lastTime;
	int32 currTime;
	float32 lerp;
	// Line 1388, Address: 0x1a4410, Func Offset: 0
	// Line 1389, Address: 0x1a4414, Func Offset: 0x4
	// Line 1390, Address: 0x1a4418, Func Offset: 0x8
	// Line 1400, Address: 0x1a441c, Func Offset: 0xc
	// Line 1397, Address: 0x1a4420, Func Offset: 0x10
	// Line 1393, Address: 0x1a4424, Func Offset: 0x14
	// Line 1391, Address: 0x1a4428, Func Offset: 0x18
	// Line 1397, Address: 0x1a442c, Func Offset: 0x1c
	// Line 1390, Address: 0x1a4430, Func Offset: 0x20
	// Line 1397, Address: 0x1a4434, Func Offset: 0x24
	// Line 1390, Address: 0x1a4438, Func Offset: 0x28
	// Line 1391, Address: 0x1a443c, Func Offset: 0x2c
	// Line 1400, Address: 0x1a4440, Func Offset: 0x30
	// Line 1397, Address: 0x1a4448, Func Offset: 0x38
	// Line 1400, Address: 0x1a445c, Func Offset: 0x4c
	// Line 1403, Address: 0x1a4470, Func Offset: 0x60
	// Line 1404, Address: 0x1a4478, Func Offset: 0x68
	// Line 1405, Address: 0x1a447c, Func Offset: 0x6c
	// Line 1404, Address: 0x1a4480, Func Offset: 0x70
	// Line 1403, Address: 0x1a4484, Func Offset: 0x74
	// Line 1405, Address: 0x1a4488, Func Offset: 0x78
	// Line 1406, Address: 0x1a448c, Func Offset: 0x7c
	// Line 1404, Address: 0x1a4494, Func Offset: 0x84
	// Line 1405, Address: 0x1a4498, Func Offset: 0x88
	// Line 1404, Address: 0x1a449c, Func Offset: 0x8c
	// Line 1403, Address: 0x1a44a0, Func Offset: 0x90
	// Line 1405, Address: 0x1a44a8, Func Offset: 0x98
	// Line 1406, Address: 0x1a44b0, Func Offset: 0xa0
	// Line 1403, Address: 0x1a44b4, Func Offset: 0xa4
	// Line 1404, Address: 0x1a44b8, Func Offset: 0xa8
	// Line 1403, Address: 0x1a44bc, Func Offset: 0xac
	// Line 1406, Address: 0x1a44c0, Func Offset: 0xb0
	// Line 1403, Address: 0x1a44c4, Func Offset: 0xb4
	// Line 1409, Address: 0x1a44cc, Func Offset: 0xbc
	// Line 1410, Address: 0x1a44e4, Func Offset: 0xd4
	// Line 1411, Address: 0x1a44e8, Func Offset: 0xd8
	// Line 1415, Address: 0x1a4504, Func Offset: 0xf4
	// Line 1418, Address: 0x1a4548, Func Offset: 0x138
	// Line 1415, Address: 0x1a454c, Func Offset: 0x13c
	// Line 1416, Address: 0x1a4550, Func Offset: 0x140
	// Line 1417, Address: 0x1a4564, Func Offset: 0x154
	// Line 1418, Address: 0x1a4578, Func Offset: 0x168
	// Line 1415, Address: 0x1a458c, Func Offset: 0x17c
	// Line 1418, Address: 0x1a45c0, Func Offset: 0x1b0
	// Line 1416, Address: 0x1a45c8, Func Offset: 0x1b8
	// Line 1418, Address: 0x1a45d4, Func Offset: 0x1c4
	// Line 1417, Address: 0x1a45dc, Func Offset: 0x1cc
	// Line 1418, Address: 0x1a45e8, Func Offset: 0x1d8
	// Line 1415, Address: 0x1a4604, Func Offset: 0x1f4
	// Line 1418, Address: 0x1a4638, Func Offset: 0x228
	// Line 1416, Address: 0x1a4640, Func Offset: 0x230
	// Line 1418, Address: 0x1a464c, Func Offset: 0x23c
	// Line 1417, Address: 0x1a4654, Func Offset: 0x244
	// Line 1418, Address: 0x1a4660, Func Offset: 0x250
	// Line 1415, Address: 0x1a467c, Func Offset: 0x26c
	// Line 1418, Address: 0x1a46b0, Func Offset: 0x2a0
	// Line 1416, Address: 0x1a46b8, Func Offset: 0x2a8
	// Line 1418, Address: 0x1a46c4, Func Offset: 0x2b4
	// Line 1417, Address: 0x1a46cc, Func Offset: 0x2bc
	// Line 1418, Address: 0x1a46d8, Func Offset: 0x2c8
	// Line 1415, Address: 0x1a46f4, Func Offset: 0x2e4
	// Line 1418, Address: 0x1a4728, Func Offset: 0x318
	// Line 1416, Address: 0x1a4730, Func Offset: 0x320
	// Line 1418, Address: 0x1a473c, Func Offset: 0x32c
	// Line 1417, Address: 0x1a4744, Func Offset: 0x334
	// Line 1418, Address: 0x1a4750, Func Offset: 0x340
	// Line 1415, Address: 0x1a476c, Func Offset: 0x35c
	// Line 1418, Address: 0x1a47a0, Func Offset: 0x390
	// Line 1416, Address: 0x1a47a8, Func Offset: 0x398
	// Line 1418, Address: 0x1a47b4, Func Offset: 0x3a4
	// Line 1417, Address: 0x1a47bc, Func Offset: 0x3ac
	// Line 1418, Address: 0x1a47c8, Func Offset: 0x3b8
	// Line 1415, Address: 0x1a47e4, Func Offset: 0x3d4
	// Line 1418, Address: 0x1a4818, Func Offset: 0x408
	// Line 1416, Address: 0x1a4820, Func Offset: 0x410
	// Line 1418, Address: 0x1a482c, Func Offset: 0x41c
	// Line 1417, Address: 0x1a4834, Func Offset: 0x424
	// Line 1418, Address: 0x1a4840, Func Offset: 0x430
	// Line 1415, Address: 0x1a485c, Func Offset: 0x44c
	// Line 1421, Address: 0x1a4890, Func Offset: 0x480
	// Line 1418, Address: 0x1a489c, Func Offset: 0x48c
	// Line 1416, Address: 0x1a48a0, Func Offset: 0x490
	// Line 1418, Address: 0x1a48ac, Func Offset: 0x49c
	// Line 1417, Address: 0x1a48b4, Func Offset: 0x4a4
	// Line 1418, Address: 0x1a48c0, Func Offset: 0x4b0
	// Line 1421, Address: 0x1a48d8, Func Offset: 0x4c8
	// Line 1415, Address: 0x1a48ec, Func Offset: 0x4dc
	// Line 1421, Address: 0x1a48f4, Func Offset: 0x4e4
	// Line 1415, Address: 0x1a4900, Func Offset: 0x4f0
	// Line 1422, Address: 0x1a4930, Func Offset: 0x520
	// Line 1421, Address: 0x1a4938, Func Offset: 0x528
	// Line 1416, Address: 0x1a4940, Func Offset: 0x530
	// Line 1421, Address: 0x1a494c, Func Offset: 0x53c
	// Line 1417, Address: 0x1a4954, Func Offset: 0x544
	// Line 1421, Address: 0x1a4960, Func Offset: 0x550
	// Line 1418, Address: 0x1a4968, Func Offset: 0x558
	// Line 1421, Address: 0x1a4974, Func Offset: 0x564
	// Line 1422, Address: 0x1a4978, Func Offset: 0x568
	// Line 1427, Address: 0x1a4980, Func Offset: 0x570
	// Line 1431, Address: 0x1a4988, Func Offset: 0x578
	// Line 1436, Address: 0x1a498c, Func Offset: 0x57c
	// Line 1432, Address: 0x1a4990, Func Offset: 0x580
	// Line 1433, Address: 0x1a4994, Func Offset: 0x584
	// Line 1434, Address: 0x1a4998, Func Offset: 0x588
	// Line 1437, Address: 0x1a499c, Func Offset: 0x58c
	// Line 1441, Address: 0x1a49a0, Func Offset: 0x590
	// Line 1444, Address: 0x1a49a4, Func Offset: 0x594
	// Line 1442, Address: 0x1a49a8, Func Offset: 0x598
	// Line 1443, Address: 0x1a49ac, Func Offset: 0x59c
	// Line 1444, Address: 0x1a49b0, Func Offset: 0x5a0
	// Line 1438, Address: 0x1a49b4, Func Offset: 0x5a4
	// Line 1444, Address: 0x1a49b8, Func Offset: 0x5a8
	// Line 1447, Address: 0x1a49c0, Func Offset: 0x5b0
	// Func End, Address: 0x1a49c8, Func Offset: 0x5b8
}

// _iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPfPf
// Start address: 0x1a49d0
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* starttran, float32* endtran)
{
	int32 ipos;
	uint32 i;
	uint32 idx;
	uint32 keyfirst;
	uint32 keylast;
	uint32 kcount;
	uint32 bcount;
	uint32 tcount;
	float32 outScale[3];
	float32 pos;
	float32 factor[3];
	float32 oldmax[3];
	float32 newmax[3];
	float32 timefirst;
	float32 timelast;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	// Line 1324, Address: 0x1a49d0, Func Offset: 0
	// Line 1327, Address: 0x1a49d8, Func Offset: 0x8
	// Line 1326, Address: 0x1a49dc, Func Offset: 0xc
	// Line 1327, Address: 0x1a49e8, Func Offset: 0x18
	// Line 1329, Address: 0x1a4a2c, Func Offset: 0x5c
	// Line 1330, Address: 0x1a4a30, Func Offset: 0x60
	// Line 1339, Address: 0x1a4a38, Func Offset: 0x68
	// Line 1331, Address: 0x1a4a3c, Func Offset: 0x6c
	// Line 1335, Address: 0x1a4a44, Func Offset: 0x74
	// Line 1334, Address: 0x1a4a4c, Func Offset: 0x7c
	// Line 1336, Address: 0x1a4a54, Func Offset: 0x84
	// Line 1337, Address: 0x1a4a58, Func Offset: 0x88
	// Line 1335, Address: 0x1a4a5c, Func Offset: 0x8c
	// Line 1334, Address: 0x1a4a60, Func Offset: 0x90
	// Line 1335, Address: 0x1a4a64, Func Offset: 0x94
	// Line 1339, Address: 0x1a4a70, Func Offset: 0xa0
	// Line 1340, Address: 0x1a4a80, Func Offset: 0xb0
	// Line 1341, Address: 0x1a4a98, Func Offset: 0xc8
	// Line 1342, Address: 0x1a4ac0, Func Offset: 0xf0
	// Line 1343, Address: 0x1a4ae8, Func Offset: 0x118
	// Line 1344, Address: 0x1a4b18, Func Offset: 0x148
	// Line 1345, Address: 0x1a4b28, Func Offset: 0x158
	// Line 1346, Address: 0x1a4b48, Func Offset: 0x178
	// Line 1345, Address: 0x1a4b50, Func Offset: 0x180
	// Line 1346, Address: 0x1a4b54, Func Offset: 0x184
	// Line 1345, Address: 0x1a4b58, Func Offset: 0x188
	// Line 1346, Address: 0x1a4b80, Func Offset: 0x1b0
	// Line 1348, Address: 0x1a4ba0, Func Offset: 0x1d0
	// Line 1350, Address: 0x1a4bc4, Func Offset: 0x1f4
	// Line 1351, Address: 0x1a4bd8, Func Offset: 0x208
	// Line 1352, Address: 0x1a4c00, Func Offset: 0x230
	// Line 1353, Address: 0x1a4c40, Func Offset: 0x270
	// Line 1354, Address: 0x1a4c50, Func Offset: 0x280
	// Line 1355, Address: 0x1a4c64, Func Offset: 0x294
	// Line 1357, Address: 0x1a4c7c, Func Offset: 0x2ac
	// Line 1358, Address: 0x1a4c88, Func Offset: 0x2b8
	// Line 1359, Address: 0x1a4ca0, Func Offset: 0x2d0
	// Line 1360, Address: 0x1a4cc8, Func Offset: 0x2f8
	// Line 1363, Address: 0x1a4cd8, Func Offset: 0x308
	// Line 1364, Address: 0x1a4d48, Func Offset: 0x378
	// Line 1365, Address: 0x1a4d60, Func Offset: 0x390
	// Line 1366, Address: 0x1a4d78, Func Offset: 0x3a8
	// Line 1368, Address: 0x1a4d80, Func Offset: 0x3b0
	// Line 1371, Address: 0x1a4da8, Func Offset: 0x3d8
	// Line 1372, Address: 0x1a4dd8, Func Offset: 0x408
	// Line 1373, Address: 0x1a4df0, Func Offset: 0x420
	// Line 1374, Address: 0x1a4e08, Func Offset: 0x438
	// Line 1376, Address: 0x1a4e14, Func Offset: 0x444
	// Line 1378, Address: 0x1a4e3c, Func Offset: 0x46c
	// Line 1379, Address: 0x1a4e48, Func Offset: 0x478
	// Line 1380, Address: 0x1a4e70, Func Offset: 0x4a0
	// Line 1381, Address: 0x1a4e84, Func Offset: 0x4b4
	// Line 1382, Address: 0x1a4e9c, Func Offset: 0x4cc
	// Func End, Address: 0x1a4ea8, Func Offset: 0x4d8
}

// iAnimDurationSKB__FP14iAnimSKBHeader
// Start address: 0x1a4eb0
float32 iAnimDurationSKB(iAnimSKBHeader* data)
{
	// Line 883, Address: 0x1a4eb0, Func Offset: 0
	// Line 884, Address: 0x1a4ec8, Func Offset: 0x18
	// Func End, Address: 0x1a4ed0, Func Offset: 0x20
}

// iAnimEvalSKB__FP14iAnimSKBHeaderfUiP5xVec3P5xQuat
// Start address: 0x1a4ed0
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
	uint32 i;
	uint32 tidx;
	uint32 bcount;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	int32 asdf;
	float32 scalex;
	float32 scaley;
	float32 scalez;
	iAnimSKBKey* k;
	float32 time1;
	float32 time2;
	float32 lerp;
	iAnimSKBKey* k;
	uint32 costheta;
	uint32 theta;
	// Line 542, Address: 0x1a4ed4, Func Offset: 0x4
	// Line 538, Address: 0x1a4ed8, Func Offset: 0x8
	// Line 541, Address: 0x1a4ee4, Func Offset: 0x14
	// Line 545, Address: 0x1a4ee8, Func Offset: 0x18
	// Line 542, Address: 0x1a4eec, Func Offset: 0x1c
	// Line 543, Address: 0x1a4ef0, Func Offset: 0x20
	// Line 542, Address: 0x1a4ef4, Func Offset: 0x24
	// Line 543, Address: 0x1a4ef8, Func Offset: 0x28
	// Line 548, Address: 0x1a4efc, Func Offset: 0x2c
	// Line 552, Address: 0x1a4f00, Func Offset: 0x30
	// Line 553, Address: 0x1a4f18, Func Offset: 0x48
	// Line 562, Address: 0x1a4f38, Func Offset: 0x68
	// Line 563, Address: 0x1a4f3c, Func Offset: 0x6c
	// Line 564, Address: 0x1a4f48, Func Offset: 0x78
	// Line 566, Address: 0x1a4f68, Func Offset: 0x98
	// Line 567, Address: 0x1a4f70, Func Offset: 0xa0
	// Line 573, Address: 0x1a4f98, Func Offset: 0xc8
	// Line 570, Address: 0x1a4f9c, Func Offset: 0xcc
	// Line 573, Address: 0x1a4fa4, Func Offset: 0xd4
	// Line 574, Address: 0x1a4fac, Func Offset: 0xdc
	// Line 576, Address: 0x1a4fb0, Func Offset: 0xe0
	// Line 577, Address: 0x1a4fbc, Func Offset: 0xec
	// Line 578, Address: 0x1a4fc0, Func Offset: 0xf0
	// Line 579, Address: 0x1a4fc4, Func Offset: 0xf4
	// Line 582, Address: 0x1a4fc8, Func Offset: 0xf8
	// Line 594, Address: 0x1a4fd4, Func Offset: 0x104
	// Line 595, Address: 0x1a4fe8, Func Offset: 0x118
	// Line 613, Address: 0x1a4ff0, Func Offset: 0x120
	// Line 598, Address: 0x1a4ff4, Func Offset: 0x124
	// Line 599, Address: 0x1a500c, Func Offset: 0x13c
	// Line 600, Address: 0x1a5024, Func Offset: 0x154
	// Line 601, Address: 0x1a503c, Func Offset: 0x16c
	// Line 603, Address: 0x1a5054, Func Offset: 0x184
	// Line 611, Address: 0x1a505c, Func Offset: 0x18c
	// Line 603, Address: 0x1a5060, Func Offset: 0x190
	// Line 604, Address: 0x1a5074, Func Offset: 0x1a4
	// Line 605, Address: 0x1a5090, Func Offset: 0x1c0
	// Line 612, Address: 0x1a50ac, Func Offset: 0x1dc
	// Line 613, Address: 0x1a50b0, Func Offset: 0x1e0
	// Line 614, Address: 0x1a50bc, Func Offset: 0x1ec
	// Line 621, Address: 0x1a50c4, Func Offset: 0x1f4
	// Line 622, Address: 0x1a5100, Func Offset: 0x230
	// Line 623, Address: 0x1a5104, Func Offset: 0x234
	// Line 624, Address: 0x1a5108, Func Offset: 0x238
	// Line 625, Address: 0x1a510c, Func Offset: 0x23c
	// Line 626, Address: 0x1a5110, Func Offset: 0x240
	// Line 627, Address: 0x1a5114, Func Offset: 0x244
	// Line 628, Address: 0x1a5118, Func Offset: 0x248
	// Line 629, Address: 0x1a511c, Func Offset: 0x24c
	// Line 630, Address: 0x1a5120, Func Offset: 0x250
	// Line 631, Address: 0x1a5124, Func Offset: 0x254
	// Line 642, Address: 0x1a5128, Func Offset: 0x258
	// Line 645, Address: 0x1a5130, Func Offset: 0x260
	// Line 646, Address: 0x1a5138, Func Offset: 0x268
	// Line 645, Address: 0x1a513c, Func Offset: 0x26c
	// Line 648, Address: 0x1a5140, Func Offset: 0x270
	// Line 667, Address: 0x1a5144, Func Offset: 0x274
	// Line 649, Address: 0x1a5148, Func Offset: 0x278
	// Line 648, Address: 0x1a514c, Func Offset: 0x27c
	// Line 649, Address: 0x1a5158, Func Offset: 0x288
	// Line 650, Address: 0x1a5164, Func Offset: 0x294
	// Line 668, Address: 0x1a5170, Func Offset: 0x2a0
	// Line 669, Address: 0x1a5174, Func Offset: 0x2a4
	// Line 670, Address: 0x1a5178, Func Offset: 0x2a8
	// Line 671, Address: 0x1a517c, Func Offset: 0x2ac
	// Line 672, Address: 0x1a5180, Func Offset: 0x2b0
	// Line 673, Address: 0x1a5184, Func Offset: 0x2b4
	// Line 674, Address: 0x1a5188, Func Offset: 0x2b8
	// Line 675, Address: 0x1a518c, Func Offset: 0x2bc
	// Line 676, Address: 0x1a5190, Func Offset: 0x2c0
	// Line 677, Address: 0x1a5194, Func Offset: 0x2c4
	// Line 678, Address: 0x1a5198, Func Offset: 0x2c8
	// Line 679, Address: 0x1a519c, Func Offset: 0x2cc
	// Line 680, Address: 0x1a51a0, Func Offset: 0x2d0
	// Line 681, Address: 0x1a51a4, Func Offset: 0x2d4
	// Line 682, Address: 0x1a51a8, Func Offset: 0x2d8
	// Line 683, Address: 0x1a51ac, Func Offset: 0x2dc
	// Line 684, Address: 0x1a51b0, Func Offset: 0x2e0
	// Line 685, Address: 0x1a51b4, Func Offset: 0x2e4
	// Line 686, Address: 0x1a51b8, Func Offset: 0x2e8
	// Line 687, Address: 0x1a51bc, Func Offset: 0x2ec
	// Line 688, Address: 0x1a51c0, Func Offset: 0x2f0
	// Line 689, Address: 0x1a51c4, Func Offset: 0x2f4
	// Line 690, Address: 0x1a51c8, Func Offset: 0x2f8
	// Line 691, Address: 0x1a51cc, Func Offset: 0x2fc
	// Line 692, Address: 0x1a51d0, Func Offset: 0x300
	// Line 693, Address: 0x1a51d4, Func Offset: 0x304
	// Line 694, Address: 0x1a51d8, Func Offset: 0x308
	// Line 695, Address: 0x1a51dc, Func Offset: 0x30c
	// Line 696, Address: 0x1a51e0, Func Offset: 0x310
	// Line 697, Address: 0x1a51e4, Func Offset: 0x314
	// Line 698, Address: 0x1a51e8, Func Offset: 0x318
	// Line 699, Address: 0x1a51ec, Func Offset: 0x31c
	// Line 700, Address: 0x1a51f4, Func Offset: 0x324
	// Line 701, Address: 0x1a51f8, Func Offset: 0x328
	// Line 702, Address: 0x1a51fc, Func Offset: 0x32c
	// Line 703, Address: 0x1a5200, Func Offset: 0x330
	// Line 704, Address: 0x1a5204, Func Offset: 0x334
	// Line 705, Address: 0x1a5208, Func Offset: 0x338
	// Line 706, Address: 0x1a520c, Func Offset: 0x33c
	// Line 707, Address: 0x1a5210, Func Offset: 0x340
	// Line 709, Address: 0x1a5218, Func Offset: 0x348
	// Line 710, Address: 0x1a521c, Func Offset: 0x34c
	// Line 711, Address: 0x1a5220, Func Offset: 0x350
	// Line 712, Address: 0x1a5224, Func Offset: 0x354
	// Line 713, Address: 0x1a5228, Func Offset: 0x358
	// Line 714, Address: 0x1a522c, Func Offset: 0x35c
	// Line 715, Address: 0x1a5230, Func Offset: 0x360
	// Line 716, Address: 0x1a5234, Func Offset: 0x364
	// Line 717, Address: 0x1a5238, Func Offset: 0x368
	// Line 718, Address: 0x1a523c, Func Offset: 0x36c
	// Line 719, Address: 0x1a5240, Func Offset: 0x370
	// Line 720, Address: 0x1a5244, Func Offset: 0x374
	// Line 721, Address: 0x1a5248, Func Offset: 0x378
	// Line 722, Address: 0x1a524c, Func Offset: 0x37c
	// Line 723, Address: 0x1a5250, Func Offset: 0x380
	// Line 729, Address: 0x1a5254, Func Offset: 0x384
	// Line 730, Address: 0x1a5414, Func Offset: 0x544
	// Line 731, Address: 0x1a5464, Func Offset: 0x594
	// Line 754, Address: 0x1a5468, Func Offset: 0x598
	// Line 755, Address: 0x1a546c, Func Offset: 0x59c
	// Line 756, Address: 0x1a5470, Func Offset: 0x5a0
	// Line 793, Address: 0x1a5474, Func Offset: 0x5a4
	// Line 794, Address: 0x1a5478, Func Offset: 0x5a8
	// Line 795, Address: 0x1a547c, Func Offset: 0x5ac
	// Line 796, Address: 0x1a548c, Func Offset: 0x5bc
	// Line 797, Address: 0x1a5490, Func Offset: 0x5c0
	// Func End, Address: 0x1a5498, Func Offset: 0x5c8
}

