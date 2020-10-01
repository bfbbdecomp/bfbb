typedef enum _GameOstrich;
typedef enum eFMVFile;
typedef struct zFMVFile;


typedef s8 type_0[64];
typedef zFMVFile type_1[9];
typedef s8 type_2[32];

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
	type_2 fileName;
};

type_1 zFMVFileTable;

s8* zFMVFileGetName(eFMVFile fileEnum);
u32 zFMVPlay(s8* filename, u32 buttons, f32 time, u8 skippable, u8 lockController);

// zFMVFileGetName__F8eFMVFile
// Start address: 0x175720
s8* zFMVFileGetName(eFMVFile fileEnum)
{
	s32 i;
}

// zFMVPlay__FPcUifbb
// Start address: 0x175780
u32 zFMVPlay(s8* filename, u32 buttons, f32 time, u8 skippable, u8 lockController)
{
	type_0 fullname;
	_GameOstrich old;
	u32 ret;
}

