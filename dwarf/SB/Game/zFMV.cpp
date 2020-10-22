typedef enum _GameOstrich;
typedef enum eFMVFile;
typedef struct zFMVFile;


typedef int8 type_0[64];
typedef zFMVFile type_1[9];
typedef int8 type_2[32];

enum _GameOstrich
{
	eGameOstrich_Loading,
	eGameOstrich_PlayingMovie,
	eGameOstrich_InScene,
	eGameOstrich_Total
};

enum eFMVFile
{
	eFMVFile_PromoFOP,
	eFMVFile_PromoTak,
	eFMVFile_PromoJN,
	eFMVFile_PromoSB,
	eFMVFile_LogoHeavyIron,
	eFMVFile_LogoNick,
	eFMVFile_LogoRW,
	eFMVFile_LogoTHQ,
	eFMVFile_Demo1,
	eFMVFile_Demo2,
	eFMVFile_Demo3,
	eFMVFile_LogoPixar,
	eFMVFileCount
};

struct zFMVFile
{
	eFMVFile type;
	int8 fileName[32];
};

zFMVFile zFMVFileTable[9];

int8* zFMVFileGetName(eFMVFile fileEnum);
uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time, uint8 skippable, uint8 lockController);

// zFMVFileGetName__F8eFMVFile
// Start address: 0x175720
int8* zFMVFileGetName(eFMVFile fileEnum)
{
	int32 i;
	// Line 106, Address: 0x175720, Func Offset: 0
	// Line 107, Address: 0x175730, Func Offset: 0x10
	// Line 108, Address: 0x17573c, Func Offset: 0x1c
	// Line 109, Address: 0x175760, Func Offset: 0x40
	// Line 110, Address: 0x175770, Func Offset: 0x50
	// Line 111, Address: 0x175778, Func Offset: 0x58
	// Func End, Address: 0x175780, Func Offset: 0x60
}

// zFMVPlay__FPcUifbb
// Start address: 0x175780
uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time, uint8 skippable, uint8 lockController)
{
	int8 fullname[64];
	_GameOstrich old;
	uint32 ret;
	// Line 51, Address: 0x175780, Func Offset: 0
	// Line 52, Address: 0x1757a8, Func Offset: 0x28
	// Line 53, Address: 0x1757b0, Func Offset: 0x30
	// Line 59, Address: 0x1757b8, Func Offset: 0x38
	// Line 73, Address: 0x1757d8, Func Offset: 0x58
	// Line 77, Address: 0x1757f0, Func Offset: 0x70
	// Line 80, Address: 0x1757f8, Func Offset: 0x78
	// Line 82, Address: 0x175800, Func Offset: 0x80
	// Line 83, Address: 0x17580c, Func Offset: 0x8c
	// Line 85, Address: 0x175814, Func Offset: 0x94
	// Line 87, Address: 0x175830, Func Offset: 0xb0
	// Line 89, Address: 0x175838, Func Offset: 0xb8
	// Line 92, Address: 0x175840, Func Offset: 0xc0
	// Line 95, Address: 0x175848, Func Offset: 0xc8
	// Line 96, Address: 0x175850, Func Offset: 0xd0
	// Func End, Address: 0x175870, Func Offset: 0xf0
}

