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
	type_2 fileName;
};

type_1 zFMVFileTable;

int8* zFMVFileGetName(eFMVFile fileEnum);
uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time, uint8 skippable, uint8 lockController);

// zFMVFileGetName__F8eFMVFile
// Start address: 0x175720
int8* zFMVFileGetName(eFMVFile fileEnum)
{
	int32 i;
}

// zFMVPlay__FPcUifbb
// Start address: 0x175780
uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time, uint8 skippable, uint8 lockController)
{
	type_0 fullname;
	_GameOstrich old;
	uint32 ret;
}

