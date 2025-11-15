#include <dolphin/mix.h>

#include <dolphin/ai.h>
#include <dolphin/os.h>

static MIXChannel __MIXChannel[64];

static int __MIXDvdStreamAttenCurrent;
static int __MIXDvdStreamAttenUser;
static u32 __MIXSoundMode;

u16 __MIXVolumeTable[] =
{
    0x0000, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0002, 0x0002,
    0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002,
    0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002,
    0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002,
    0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002,
    0x0002, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003,
    0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003,
    0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003,
    0x0003, 0x0003, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004,
    0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004,
    0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0005, 0x0005, 0x0005,
    0x0005, 0x0005, 0x0005, 0x0005, 0x0005, 0x0005, 0x0005, 0x0005,
    0x0005, 0x0005, 0x0005, 0x0005, 0x0005, 0x0006, 0x0006, 0x0006,
    0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006,
    0x0006, 0x0006, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007,
    0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0008, 0x0008,
    0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008,
    0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009,
    0x0009, 0x000A, 0x000A, 0x000A, 0x000A, 0x000A, 0x000A, 0x000A,
    0x000A, 0x000A, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B, 0x000B,
    0x000B, 0x000C, 0x000C, 0x000C, 0x000C, 0x000C, 0x000C, 0x000C,
    0x000D, 0x000D, 0x000D, 0x000D, 0x000D, 0x000D, 0x000D, 0x000E,
    0x000E, 0x000E, 0x000E, 0x000E, 0x000E, 0x000F, 0x000F, 0x000F,
    0x000F, 0x000F, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0011,
    0x0011, 0x0011, 0x0011, 0x0011, 0x0012, 0x0012, 0x0012, 0x0012,
    0x0012, 0x0013, 0x0013, 0x0013, 0x0013, 0x0013, 0x0014, 0x0014,
    0x0014, 0x0014, 0x0015, 0x0015, 0x0015, 0x0015, 0x0016, 0x0016,
    0x0016, 0x0016, 0x0017, 0x0017, 0x0017, 0x0018, 0x0018, 0x0018,
    0x0018, 0x0019, 0x0019, 0x0019, 0x001A, 0x001A, 0x001A, 0x001A,
    0x001B, 0x001B, 0x001B, 0x001C, 0x001C, 0x001C, 0x001D, 0x001D,
    0x001D, 0x001E, 0x001E, 0x001E, 0x001F, 0x001F, 0x0020, 0x0020,
    0x0020, 0x0021, 0x0021, 0x0021, 0x0022, 0x0022, 0x0023, 0x0023,
    0x0023, 0x0024, 0x0024, 0x0025, 0x0025, 0x0026, 0x0026, 0x0026,
    0x0027, 0x0027, 0x0028, 0x0028, 0x0029, 0x0029, 0x002A, 0x002A,
    0x002B, 0x002B, 0x002C, 0x002C, 0x002D, 0x002D, 0x002E, 0x002E,
    0x002F, 0x002F, 0x0030, 0x0031, 0x0031, 0x0032, 0x0032, 0x0033,
    0x0033, 0x0034, 0x0035, 0x0035, 0x0036, 0x0037, 0x0037, 0x0038,
    0x0038, 0x0039, 0x003A, 0x003A, 0x003B, 0x003C, 0x003D, 0x003D,
    0x003E, 0x003F, 0x003F, 0x0040, 0x0041, 0x0042, 0x0042, 0x0043,
    0x0044, 0x0045, 0x0046, 0x0046, 0x0047, 0x0048, 0x0049, 0x004A,
    0x004B, 0x004B, 0x004C, 0x004D, 0x004E, 0x004F, 0x0050, 0x0051,
    0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058, 0x0059,
    0x005A, 0x005B, 0x005C, 0x005D, 0x005E, 0x005F, 0x0060, 0x0061,
    0x0062, 0x0064, 0x0065, 0x0066, 0x0067, 0x0068, 0x006A, 0x006B,
    0x006C, 0x006D, 0x006F, 0x0070, 0x0071, 0x0072, 0x0074, 0x0075,
    0x0076, 0x0078, 0x0079, 0x007B, 0x007C, 0x007E, 0x007F, 0x0080,
    0x0082, 0x0083, 0x0085, 0x0087, 0x0088, 0x008A, 0x008B, 0x008D,
    0x008F, 0x0090, 0x0092, 0x0094, 0x0095, 0x0097, 0x0099, 0x009B,
    0x009C, 0x009E, 0x00A0, 0x00A2, 0x00A4, 0x00A6, 0x00A8, 0x00AA,
    0x00AB, 0x00AD, 0x00AF, 0x00B2, 0x00B4, 0x00B6, 0x00B8, 0x00BA,
    0x00BC, 0x00BE, 0x00C0, 0x00C3, 0x00C5, 0x00C7, 0x00CA, 0x00CC,
    0x00CE, 0x00D1, 0x00D3, 0x00D6, 0x00D8, 0x00DB, 0x00DD, 0x00E0,
    0x00E2, 0x00E5, 0x00E7, 0x00EA, 0x00ED, 0x00F0, 0x00F2, 0x00F5,
    0x00F8, 0x00FB, 0x00FE, 0x0101, 0x0104, 0x0107, 0x010A, 0x010D,
    0x0110, 0x0113, 0x0116, 0x011A, 0x011D, 0x0120, 0x0124, 0x0127,
    0x012A, 0x012E, 0x0131, 0x0135, 0x0138, 0x013C, 0x0140, 0x0143,
    0x0147, 0x014B, 0x014F, 0x0153, 0x0157, 0x015B, 0x015F, 0x0163,
    0x0167, 0x016B, 0x016F, 0x0173, 0x0178, 0x017C, 0x0180, 0x0185,
    0x0189, 0x018E, 0x0193, 0x0197, 0x019C, 0x01A1, 0x01A6, 0x01AB,
    0x01AF, 0x01B4, 0x01BA, 0x01BF, 0x01C4, 0x01C9, 0x01CE, 0x01D4,
    0x01D9, 0x01DF, 0x01E4, 0x01EA, 0x01EF, 0x01F5, 0x01FB, 0x0201,
    0x0207, 0x020D, 0x0213, 0x0219, 0x021F, 0x0226, 0x022C, 0x0232,
    0x0239, 0x0240, 0x0246, 0x024D, 0x0254, 0x025B, 0x0262, 0x0269,
    0x0270, 0x0277, 0x027E, 0x0286, 0x028D, 0x0295, 0x029D, 0x02A4,
    0x02AC, 0x02B4, 0x02BC, 0x02C4, 0x02CC, 0x02D5, 0x02DD, 0x02E6,
    0x02EE, 0x02F7, 0x0300, 0x0309, 0x0312, 0x031B, 0x0324, 0x032D,
    0x0337, 0x0340, 0x034A, 0x0354, 0x035D, 0x0367, 0x0371, 0x037C,
    0x0386, 0x0390, 0x039B, 0x03A6, 0x03B1, 0x03BB, 0x03C7, 0x03D2,
    0x03DD, 0x03E9, 0x03F4, 0x0400, 0x040C, 0x0418, 0x0424, 0x0430,
    0x043D, 0x0449, 0x0456, 0x0463, 0x0470, 0x047D, 0x048A, 0x0498,
    0x04A5, 0x04B3, 0x04C1, 0x04CF, 0x04DD, 0x04EC, 0x04FA, 0x0509,
    0x0518, 0x0527, 0x0536, 0x0546, 0x0555, 0x0565, 0x0575, 0x0586,
    0x0596, 0x05A6, 0x05B7, 0x05C8, 0x05D9, 0x05EB, 0x05FC, 0x060E,
    0x0620, 0x0632, 0x0644, 0x0657, 0x066A, 0x067D, 0x0690, 0x06A4,
    0x06B7, 0x06CB, 0x06DF, 0x06F4, 0x0708, 0x071D, 0x0732, 0x0748,
    0x075D, 0x0773, 0x0789, 0x079F, 0x07B6, 0x07CD, 0x07E4, 0x07FB,
    0x0813, 0x082B, 0x0843, 0x085C, 0x0874, 0x088E, 0x08A7, 0x08C1,
    0x08DA, 0x08F5, 0x090F, 0x092A, 0x0945, 0x0961, 0x097D, 0x0999,
    0x09B5, 0x09D2, 0x09EF, 0x0A0D, 0x0A2A, 0x0A48, 0x0A67, 0x0A86,
    0x0AA5, 0x0AC5, 0x0AE5, 0x0B05, 0x0B25, 0x0B47, 0x0B68, 0x0B8A,
    0x0BAC, 0x0BCF, 0x0BF2, 0x0C15, 0x0C39, 0x0C5D, 0x0C82, 0x0CA7,
    0x0CCC, 0x0CF2, 0x0D19, 0x0D3F, 0x0D67, 0x0D8E, 0x0DB7, 0x0DDF,
    0x0E08, 0x0E32, 0x0E5C, 0x0E87, 0x0EB2, 0x0EDD, 0x0F09, 0x0F36,
    0x0F63, 0x0F91, 0x0FBF, 0x0FEE, 0x101D, 0x104D, 0x107D, 0x10AE,
    0x10DF, 0x1111, 0x1144, 0x1177, 0x11AB, 0x11DF, 0x1214, 0x124A,
    0x1280, 0x12B7, 0x12EE, 0x1326, 0x135F, 0x1399, 0x13D3, 0x140D,
    0x1449, 0x1485, 0x14C2, 0x14FF, 0x153E, 0x157D, 0x15BC, 0x15FD,
    0x163E, 0x1680, 0x16C3, 0x1706, 0x174A, 0x178F, 0x17D5, 0x181C,
    0x1863, 0x18AC, 0x18F5, 0x193F, 0x198A, 0x19D5, 0x1A22, 0x1A6F,
    0x1ABE, 0x1B0D, 0x1B5D, 0x1BAE, 0x1C00, 0x1C53, 0x1CA7, 0x1CFC,
    0x1D52, 0x1DA9, 0x1E01, 0x1E5A, 0x1EB4, 0x1F0F, 0x1F6B, 0x1FC8,
    0x2026, 0x2086, 0x20E6, 0x2148, 0x21AA, 0x220E, 0x2273, 0x22D9,
    0x2341, 0x23A9, 0x2413, 0x247E, 0x24EA, 0x2557, 0x25C6, 0x2636,
    0x26A7, 0x271A, 0x278E, 0x2803, 0x287A, 0x28F2, 0x296B, 0x29E6,
    0x2A62, 0x2AE0, 0x2B5F, 0x2BDF, 0x2C61, 0x2CE5, 0x2D6A, 0x2DF1,
    0x2E79, 0x2F03, 0x2F8E, 0x301B, 0x30AA, 0x313A, 0x31CC, 0x325F,
    0x32F5, 0x338C, 0x3425, 0x34BF, 0x355B, 0x35FA, 0x369A, 0x373C,
    0x37DF, 0x3885, 0x392C, 0x39D6, 0x3A81, 0x3B2F, 0x3BDE, 0x3C90,
    0x3D43, 0x3DF9, 0x3EB1, 0x3F6A, 0x4026, 0x40E5, 0x41A5, 0x4268,
    0x432C, 0x43F4, 0x44BD, 0x4589, 0x4657, 0x4727, 0x47FA, 0x48D0,
    0x49A8, 0x4A82, 0x4B5F, 0x4C3E, 0x4D20, 0x4E05, 0x4EEC, 0x4FD6,
    0x50C3, 0x51B2, 0x52A4, 0x5399, 0x5491, 0x558C, 0x5689, 0x578A,
    0x588D, 0x5994, 0x5A9D, 0x5BAA, 0x5CBA, 0x5DCD, 0x5EE3, 0x5FFC,
    0x6119, 0x6238, 0x635C, 0x6482, 0x65AC, 0x66D9, 0x680A, 0x693F,
    0x6A77, 0x6BB2, 0x6CF2, 0x6E35, 0x6F7B, 0x70C6, 0x7214, 0x7366,
    0x74BC, 0x7616, 0x7774, 0x78D6, 0x7A3D, 0x7BA7, 0x7D16, 0x7E88,
    0x7FFF,

   -0x7E85, -0x7D05, -0x7B81, -0x79F8, -0x786B, -0x76D9, -0x7542, -0x73A7,
   -0x7207, -0x7062, -0x6EB8, -0x6D0A, -0x6B56, -0x699D, -0x67E0, -0x661D,
   -0x6455, -0x6287, -0x60B4, -0x5EDC, -0x5CFE, -0x5B1B, -0x5932, -0x5744,
   -0x5550, -0x5356, -0x5156, -0x4F50, -0x4D44, -0x4B32, -0x491B, -0x46FC,
   -0x44D8, -0x42AD, -0x407C, -0x3E44, -0x3C06, -0x39C1, -0x3775, -0x3523,
   -0x32C9, -0x3069, -0x2E02, -0x2B93, -0x291D, -0x26A0, -0x241C, -0x2190,
   -0x1EFD, -0x1C62, -0x19BF, -0x1715, -0x1462, -0x11A8, -0x0EE5, -0x0C1A,
   -0x0947, -0x066C, -0x0388, -0x009C

};

int __MIXPanTable[] =
{
    0x0000,  0x0000, -0x0001, -0x0001, -0x0001, -0x0002, -0x0002, -0x0002,
   -0x0003, -0x0003, -0x0004, -0x0004, -0x0004, -0x0005, -0x0005, -0x0005,
   -0x0006, -0x0006, -0x0007, -0x0007, -0x0007, -0x0008, -0x0008, -0x0009,
   -0x0009, -0x000A, -0x000A, -0x000A, -0x000B, -0x000B, -0x000C, -0x000C,
   -0x000D, -0x000D, -0x000E, -0x000E, -0x000E, -0x000F, -0x000F, -0x0010,
   -0x0010, -0x0011, -0x0011, -0x0012, -0x0012, -0x0013, -0x0014, -0x0014,
   -0x0015, -0x0015, -0x0016, -0x0016, -0x0017, -0x0017, -0x0018, -0x0019,
   -0x0019, -0x001A, -0x001A, -0x001B, -0x001C, -0x001C, -0x001D, -0x001E,
   -0x001E, -0x001F, -0x0020, -0x0021, -0x0021, -0x0022, -0x0023, -0x0024,
   -0x0024, -0x0025, -0x0026, -0x0027, -0x0028, -0x0028, -0x0029, -0x002A,
   -0x002B, -0x002C, -0x002D, -0x002E, -0x002F, -0x0030, -0x0031, -0x0032,
   -0x0033, -0x0034, -0x0036, -0x0037, -0x0038, -0x0039, -0x003B, -0x003C,
   -0x003D, -0x003F, -0x0040, -0x0042, -0x0043, -0x0045, -0x0047, -0x0048,
   -0x004A, -0x004C, -0x004E, -0x0050, -0x0053, -0x0055, -0x0057, -0x005A,
   -0x005D, -0x0060, -0x0063, -0x0066, -0x006A, -0x006E, -0x0073, -0x0078,
   -0x007E, -0x0085, -0x008C, -0x0096, -0x00A3, -0x00B4, -0x00D2, -0x0388
};

S16 __MIX_DPL2_front[] =
{
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,  0x0000,
    0x0000,  0x0000,  0x0000,  0x0000,  0x0000, -0x0001, -0x0001, -0x0001,
   -0x0001, -0x0001, -0x0002, -0x0002, -0x0002, -0x0002, -0x0003, -0x0003,
   -0x0003, -0x0004, -0x0004, -0x0004, -0x0005, -0x0005, -0x0006, -0x0006,
   -0x0006, -0x0007, -0x0007, -0x0008, -0x0008, -0x0009, -0x0009, -0x000A,
   -0x000B, -0x000B, -0x000C, -0x000C, -0x000D, -0x000E, -0x000E, -0x000F,
   -0x0010, -0x0011, -0x0011, -0x0012, -0x0013, -0x0014, -0x0015, -0x0015,
   -0x0016, -0x0017, -0x0018, -0x0019, -0x001A, -0x001B, -0x001C, -0x001D,
   -0x001E, -0x001F, -0x0020, -0x0022, -0x0023, -0x0024, -0x0025, -0x0026,
   -0x0028, -0x0029, -0x002A, -0x002C, -0x002D, -0x002F, -0x0030, -0x0032,
   -0x0034, -0x0035, -0x0037, -0x0039, -0x003A, -0x003C, -0x003E, -0x0040,
   -0x0042, -0x0044, -0x0046, -0x0049, -0x004B, -0x004D, -0x0050, -0x0052,
   -0x0055, -0x0058, -0x005A, -0x005D, -0x0060, -0x0064, -0x0067, -0x006A,
   -0x006E, -0x0072, -0x0076, -0x007A, -0x007E, -0x0083, -0x0088, -0x008D,
   -0x0092, -0x0098, -0x009F, -0x00A6, -0x00AD, -0x00B5, -0x00BE, -0x00C9,
   -0x00D4, -0x00E1, -0x00F1, -0x0105, -0x011E, -0x0141, -0x017D, -0x03C0
};

S16 __MIX_DPL2_rear[] =
{
   -0x003D, -0x003D, -0x003C, -0x003B, -0x003B, -0x003A, -0x003A, -0x0039,
   -0x0038, -0x0038, -0x0037, -0x0037, -0x0036, -0x0035, -0x0035, -0x0034,
   -0x0034, -0x0033, -0x0032, -0x0032, -0x0031, -0x0031, -0x0030, -0x0030,
   -0x002F, -0x002F, -0x002E, -0x002E, -0x002D, -0x002D, -0x002C, -0x002C,
   -0x002B, -0x002B, -0x002A, -0x002A, -0x0029, -0x0029, -0x0028, -0x0028,
   -0x0027, -0x0027, -0x0026, -0x0026, -0x0026, -0x0025, -0x0025, -0x0024,
   -0x0024, -0x0023, -0x0023, -0x0023, -0x0022, -0x0022, -0x0021, -0x0021,
   -0x0020, -0x0020, -0x0020, -0x001F, -0x001F, -0x001F, -0x001E, -0x001E,
   -0x001D, -0x001D, -0x001D, -0x001C, -0x001C, -0x001C, -0x001B, -0x001B,
   -0x001B, -0x001A, -0x001A, -0x001A, -0x0019, -0x0019, -0x0019, -0x0018,
   -0x0018, -0x0018, -0x0017, -0x0017, -0x0017, -0x0016, -0x0016, -0x0016,
   -0x0015, -0x0015, -0x0015, -0x0014, -0x0014, -0x0014, -0x0014, -0x0013,
   -0x0013, -0x0013, -0x0012, -0x0012, -0x0012, -0x0012, -0x0011, -0x0011,
   -0x0011, -0x0011, -0x0010, -0x0010, -0x0010, -0x0010, -0x000F, -0x000F,
   -0x000F, -0x000F, -0x000E, -0x000E, -0x000E, -0x000E, -0x000D, -0x000D,
   -0x000D, -0x000D, -0x000D, -0x000C, -0x000C, -0x000C, -0x000C, -0x000B
};

S8 __MIXAIVolumeTable[] =
{
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02,
    0x02, 0x02, 0x02, 0x03, 0x03, 0x04, 0x04, 0x05,
    0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C,
    0x0E, 0x10, 0x12, 0x14, 0x16, 0x19, 0x1C, 0x20,
    0x24, 0x28, 0x2D, 0x32, 0x39, 0x40, 0x47, 0x50,
    0x5A, 0x65, 0x71, 0x7F, 0x8F, 0xA0, 0xB4, 0xCA,
    0xE3, 0xFF

};

static u16 __MIXGetVolume(int index)
{
    if (index <= -0x388)
    {
        return 0;
    }
    if (0x3c <= index)
    {
        return 0xff64;
    }
    return __MIXVolumeTable[index + 0x388];
}

static void __MIXSetPan(MIXChannel* chan)
{
    int l  = chan->pan;
    int b = chan->span;
    int r = 0x7f - l;
    int f = 0x7f - b;

    if (__MIXSoundMode == 3)
    {
        chan->l  = __MIX_DPL2_front[l];
        chan->r  = __MIX_DPL2_front[r];
        chan->f  = __MIX_DPL2_front[f];
        chan->b  = __MIX_DPL2_front[b];
        chan->l1 = __MIX_DPL2_rear[r];
        chan->r1 = __MIX_DPL2_rear[l];
    }
    else
    {
        chan->l  = __MIXPanTable[l];
        chan->r  = __MIXPanTable[r];
        chan->f  = __MIXPanTable[f];
        chan->b  = __MIXPanTable[b];
    }
}

static void __MIXResetChannel(MIXChannel* chan)
{
    chan->mode = 0x50000000;
    chan->input = 0;
    chan->auxA = 0xfffffc40;
    chan->auxB = 0xfffffc40;
    chan->fader = 0;
    chan->pan = 0x40;
    chan->span = 0x7f;

    chan->vBS = 0;
    chan->vBR = 0;
    chan->vBL = 0;

    chan->vAS = 0;
    chan->vAR = 0;
    chan->vAL = 0;
    chan->vS = 0;
    chan->vR = 0;
    chan->vL = 0;
    chan->v = 0;

    __MIXSetPan(chan);
}

static int __MIXClampPan(int pan)
{
    int retval;
    if (pan < 0)
    {
        return 0;
    }
    retval = 0x7f;
    if (pan <= 0x7f)
    {
        retval = pan;
    }
    return retval;
}

void MIXInit()
{
    for (int i = 0; i < (int)(sizeof(__MIXChannel) / sizeof(MIXChannel)); i++)
    {
        __MIXResetChannel(&__MIXChannel[i]);
    }
    __MIXDvdStreamAttenCurrent = 0;
    __MIXDvdStreamAttenUser = 0;
    __MIXSoundMode = OSGetSoundMode();
}

void MIXInitChannel(AXVPB* p, u32 mode, int input, int auxA, int auxB, int pan,
                    int span, int fader)
{
    MIXChannel* chan = &__MIXChannel[p->index];

    u16 mixerCtrl;

    chan->axvpb = p;
    chan->mode  = mode & 7;
    chan->input = input;
    chan->auxA  = auxA;
    chan->auxB  = auxB;
    chan->pan   = pan;
    chan->span  = span;
    chan->fader = fader;

    __MIXSetPan(chan);

    if (chan->mode & 4)
    {
        chan->v = 0;
    }
    else
    {
        chan->v = __MIXGetVolume(input);
    }

    mixerCtrl = 0;

    switch (__MIXSoundMode)
    {
    case 0:
        chan->vL  = __MIXGetVolume(chan->fader + chan->f);
        chan->vR  = __MIXGetVolume(chan->fader + chan->f);
        chan->vS  = __MIXGetVolume(chan->fader + chan->b);
        if (chan->mode & 1)
        {
            chan->vAL = __MIXGetVolume(chan->auxA + chan->f);
            chan->vAR = __MIXGetVolume(chan->auxA + chan->f);
            chan->vAS = __MIXGetVolume(chan->auxA + chan->b - 0x3c);
        }
        else
        {
            chan->vAL = __MIXGetVolume(chan->fader + chan->auxA + chan->f);
            chan->vAR = __MIXGetVolume(chan->fader + chan->auxA + chan->f);
            chan->vAS = __MIXGetVolume(chan->fader + chan->auxA + chan->b - 0x3c);
        }

        if (chan->mode & 2)
        {
            chan->vBL = __MIXGetVolume(chan->auxB + chan->f);
            chan->vBR = __MIXGetVolume(chan->auxB + chan->f);
            chan->vBS = __MIXGetVolume(chan->auxB + chan->b - 0x3c);
        }
        else
        {
            chan->vBL = __MIXGetVolume(chan->fader + chan->auxB + chan->f);
            chan->vBR = __MIXGetVolume(chan->fader + chan->auxB + chan->f);
            chan->vBS = __MIXGetVolume(chan->fader + chan->auxB + chan->b - 0x3c);
        }

        break;

    case 1:
    case 2:
        chan->vL = __MIXGetVolume(chan->fader + chan->l + chan->f);
        chan->vR = __MIXGetVolume(chan->fader + chan->r + chan->f);
        chan->vS = __MIXGetVolume(chan->fader + chan->b);

        if (chan->mode & 1)
        {
            chan->vAL = __MIXGetVolume(chan->auxA + chan->l + chan->f);
            chan->vAR = __MIXGetVolume(chan->auxA + chan->r + chan->f);
            chan->vAS = __MIXGetVolume(chan->auxA + chan->b - 0x3c);
        }
        else
        {
            chan->vAL = __MIXGetVolume(chan->fader + chan->auxA + chan->l + chan->f);
            chan->vAR = __MIXGetVolume(chan->fader + chan->auxA + chan->r + chan->f);
            chan->vAS = __MIXGetVolume(chan->fader + chan->auxA + chan->b - 0x3c);
        }
        if (chan->mode & 2)
        {
            chan->vBL = __MIXGetVolume(chan->auxB + chan->l + chan->f);
            chan->vBR = __MIXGetVolume(chan->auxB + chan->r + chan->f);
            chan->vBS = __MIXGetVolume(chan->auxB + chan->b - 0x3c);
        }
        else
        {
            chan->vBL = __MIXGetVolume(chan->fader + chan->auxB + chan->l + chan->f);
            chan->vBR = __MIXGetVolume(chan->fader + chan->auxB + chan->r + chan->f);
            chan->vBS = __MIXGetVolume(chan->fader + chan->auxB + chan->b - 0x3c);
        }
        break;

    case 3:
        chan->vL  = __MIXGetVolume(chan->fader + chan->l + chan->f);
        chan->vR  = __MIXGetVolume(chan->fader + chan->r + chan->f);
        chan->vBL = __MIXGetVolume(chan->fader + chan->l1 + chan->b);
        chan->vBR = __MIXGetVolume(chan->fader + chan->r1 + chan->b);

        if (chan->mode & 1)
        {
            chan->vAL = __MIXGetVolume(chan->auxA + chan->l + chan->f);
            chan->vAR = __MIXGetVolume(chan->auxA + chan->r + chan->f);
            chan->vAS = __MIXGetVolume(chan->auxA + chan->l1 + chan->b);
            chan->vBS = __MIXGetVolume(chan->auxA + chan->r1 + chan->b);
        }
        else
        {
            chan->vAL = __MIXGetVolume(chan->fader + chan->auxA + chan->l + chan->f);
            chan->vAR = __MIXGetVolume(chan->fader + chan->auxA + chan->r + chan->f);
            chan->vAS = __MIXGetVolume(chan->fader + chan->auxA + chan->l1 + chan->b);
            chan->vBS = __MIXGetVolume(chan->fader + chan->auxA + chan->r1 + chan->b);
        }

        mixerCtrl |= 0x4000;
        break;
    }

    int enabled = OSDisableInterrupts();

    p->pb.ve.currentVolume = chan->v;
    p->pb.ve.currentDelta  = 0;

    if (p->pb.mix.vL = chan->vL)
    {
        mixerCtrl |= 0x01;
    }
    p->pb.mix.vDeltaL = 0;

    if (p->pb.mix.vR = chan->vR)
    {
        mixerCtrl |= 0x02;
    }
    p->pb.mix.vDeltaR = 0;

    if (p->pb.mix.vAuxAL = chan->vAL)
    {
        mixerCtrl |= 0x10;
    }
    p->pb.mix.vDeltaAuxAL = 0;

    if (p->pb.mix.vAuxAR = chan->vAR)
    {
        mixerCtrl |= 0x20;
    }
    p->pb.mix.vDeltaAuxAR = 0;

    if (p->pb.mix.vAuxBL = chan->vBL)
    {
        mixerCtrl |= 0x200;
    }
    p->pb.mix.vDeltaAuxBL = 0;

    if (p->pb.mix.vAuxBR = chan->vBR)
    {
        mixerCtrl |= 0x400;
    }
    p->pb.mix.vDeltaAuxBR = 0;

    if (p->pb.mix.vAuxBS = chan->vBS)
    {
        mixerCtrl |= 0x1000;
    }
    p->pb.mix.vDeltaAuxBS = 0;

    if (p->pb.mix.vS = chan->vS)
    {
        mixerCtrl |= 0x04;
    }
    p->pb.mix.vDeltaS = 0;

    if (p->pb.mix.vAuxAS = chan->vAS)
    {
        mixerCtrl |= 0x80;
    }
    p->pb.mix.vDeltaAuxAS = 0;
    p->pb.mixerCtrl = mixerCtrl;
    p->sync |= 0x212;
    OSRestoreInterrupts(enabled);
}

void MIXReleaseChannel(AXVPB* p)
{
    __MIXChannel[p->index].axvpb = NULL;
}

void MIXAdjustInput(_AXVPB* p, int adjust)
{
    MIXChannel* chan = &__MIXChannel[p->index];
    chan->input += adjust;
    chan->mode |= 0x10000000;
}

int MIXGetInput(_AXVPB* p)
{
    MIXChannel* chan = &__MIXChannel[p->index];
    return chan->input;
}

void MIXAdjustPan(_AXVPB* p, int adjust)
{
    MIXChannel* chan = &__MIXChannel[p->index];
    chan->pan = __MIXClampPan(chan->pan + adjust);
    __MIXSetPan(chan);
    chan->mode |= 0x40000000;
}

int MIXGetPan(_AXVPB* p)
{
    MIXChannel* chan = &__MIXChannel[p->index];
    return chan->pan;
}

void MIXUnMute(_AXVPB* p)
{
    MIXChannel* chan = &__MIXChannel[p->index];
    chan->mode &= ~4;
    chan->mode |= 0x10000000;
}

void MIXAdjustFader(_AXVPB* p, int adjust)
{
    MIXChannel* chan = &__MIXChannel[p->index];
    chan->fader += adjust;
    chan->mode |= 0x40000000;
}

int MIXGetFader(_AXVPB* p)
{
    MIXChannel* chan = &__MIXChannel[p->index];
    return chan->fader;
}

void MIXUpdateSettings()
{
    int i;
    int cond1;
    int cond2;
    int cond3;
    AXVPB* axvpb;
    u16 mixerCtrl;
    for (i = 0; i < (int)(sizeof(__MIXChannel) / sizeof(MIXChannel)); i++)
    {
        cond3 = 0;
        axvpb = __MIXChannel[i].axvpb;
        cond1 = 0;
        if (axvpb == NULL)
        {
            continue;
        }
        mixerCtrl = 0;
        if (__MIXChannel[i].mode & 0x20000000)
        {
            __MIXChannel[i].v = __MIXChannel[i].v1;
            __MIXChannel[i].mode &= 0xdfffffff;
            cond3 = 1;
        }
        if (__MIXChannel[i].mode & 0x10000000)
        {
            if (__MIXChannel[i].mode & 4)
            {
                __MIXChannel[i].v1 = 0;
            }
            else
            {
                __MIXChannel[i].v1 = __MIXGetVolume(__MIXChannel[i].input);
            }
            cond3 = 1;
            __MIXChannel[i].mode &= 0xefffffff;
            __MIXChannel[i].mode |= 0x20000000;
        }
        if (__MIXChannel[i].mode & 0x80000000)
        {
            cond1 = 1;
            __MIXChannel[i].vL  = __MIXChannel[i].vL1;
            __MIXChannel[i].vR  = __MIXChannel[i].vR1;
            __MIXChannel[i].vS  = __MIXChannel[i].vS1;
            __MIXChannel[i].vAL = __MIXChannel[i].vAL1;
            __MIXChannel[i].vAR = __MIXChannel[i].vAR1;
            __MIXChannel[i].vAS = __MIXChannel[i].vAS1;
            __MIXChannel[i].vBL = __MIXChannel[i].vBL1;
            __MIXChannel[i].vBR = __MIXChannel[i].vBR1;
            __MIXChannel[i].vBS = __MIXChannel[i].vBS1;
            __MIXChannel[i].mode &= 0x7fffffff;
            cond2 = 1;
        }

        if (__MIXChannel[i].mode & 0x40000000)
        {
            switch (__MIXSoundMode)
            {
                case 0:
                    __MIXChannel[i].vL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].f);
                    __MIXChannel[i].vR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].f);
                    __MIXChannel[i].vS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].b - 0x3c);

                    if (__MIXChannel[i].mode & 1)
                    {
                        __MIXChannel[i].vAL1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].f);
                        __MIXChannel[i].vAR1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].f);
                        __MIXChannel[i].vAS1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].b - 0x3c);
                    }
                    else
                    {
                        __MIXChannel[i].vAL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].f);
                        __MIXChannel[i].vAR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].f);
                        __MIXChannel[i].vAS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].b - 0x3c);
                    }

                    if (__MIXChannel[i].mode & 2)
                    {
                        __MIXChannel[i].vBL1 = __MIXGetVolume(__MIXChannel[i].auxB + __MIXChannel[i].f);
                        __MIXChannel[i].vBR1 = __MIXGetVolume(__MIXChannel[i].auxB + __MIXChannel[i].f);
                        __MIXChannel[i].vBS1 = __MIXGetVolume(__MIXChannel[i].auxB + __MIXChannel[i].b - 0x3c);
                    }
                    else
                    {
                        __MIXChannel[i].vBL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxB + __MIXChannel[i].f);
                        __MIXChannel[i].vBR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxB + __MIXChannel[i].f);
                        __MIXChannel[i].vBS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxB + __MIXChannel[i].b - 0x3c);
                    }

                break;
                case 1:
                case 2:
                    __MIXChannel[i].vL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].l + __MIXChannel[i].f);
                    __MIXChannel[i].vR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].r + __MIXChannel[i].f);
                    __MIXChannel[i].vS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].b - 0x3c);
                    if (__MIXChannel[i].mode & 1)
                    {
                        __MIXChannel[i].vAL1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].l + __MIXChannel[i].f);
                        __MIXChannel[i].vAR1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].r + __MIXChannel[i].f);
                        __MIXChannel[i].vAS1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].b - 0x3c);
                    }
                    else
                    {
                        __MIXChannel[i].vAL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].l + __MIXChannel[i].f);
                        __MIXChannel[i].vAR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].r + __MIXChannel[i].f);
                        __MIXChannel[i].vAS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].b - 0x3c);
                    }
                    if (__MIXChannel[i].mode & 2)
                    {
                        __MIXChannel[i].vBL1 = __MIXGetVolume(__MIXChannel[i].auxB + __MIXChannel[i].l + __MIXChannel[i].f);
                        __MIXChannel[i].vBR1 = __MIXGetVolume(__MIXChannel[i].auxB + __MIXChannel[i].r + __MIXChannel[i].f);
                        __MIXChannel[i].vBS1 = __MIXGetVolume(__MIXChannel[i].auxB + __MIXChannel[i].b - 0x3c);
                    }
                    else
                    {
                        __MIXChannel[i].vBL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxB + __MIXChannel[i].l + __MIXChannel[i].f);
                        __MIXChannel[i].vBR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxB + __MIXChannel[i].r + __MIXChannel[i].f);
                        __MIXChannel[i].vBS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxB + __MIXChannel[i].b - 0x3c);
                    }
                    break;
                case 3:
                    __MIXChannel[i].vL1  = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].l  + __MIXChannel[i].f);
                    __MIXChannel[i].vR1  = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].r  + __MIXChannel[i].f);
                    __MIXChannel[i].vBL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].l1 + __MIXChannel[i].b);
                    __MIXChannel[i].vBR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].r1 + __MIXChannel[i].b);
                    if (__MIXChannel[i].mode & 1)
                    {
                        __MIXChannel[i].vAL1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].l  + __MIXChannel[i].f);
                        __MIXChannel[i].vAR1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].r  + __MIXChannel[i].f);
                        __MIXChannel[i].vAS1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].l1 + __MIXChannel[i].b);
                        __MIXChannel[i].vBS1 = __MIXGetVolume(__MIXChannel[i].auxA + __MIXChannel[i].r1 + __MIXChannel[i].b);
                    }
                    else
                    {
                        __MIXChannel[i].vAL1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].l  + __MIXChannel[i].f);
                        __MIXChannel[i].vAR1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].r  + __MIXChannel[i].f);
                        __MIXChannel[i].vAS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].l1 + __MIXChannel[i].b);
                        __MIXChannel[i].vBS1 = __MIXGetVolume(__MIXChannel[i].fader + __MIXChannel[i].auxA + __MIXChannel[i].r1 + __MIXChannel[i].b);
                    }
                    mixerCtrl |= 0x4000;
                    break;

            }

            cond1 = true;

            __MIXChannel[i].mode &= 0xbfffffff;
            __MIXChannel[i].mode |= 0x80000000;
        }
        if ((cond3 != 0) && (axvpb != NULL))
        {
            axvpb->pb.ve.currentVolume = __MIXChannel[i].v;
            axvpb->pb.ve.currentDelta = (__MIXChannel[i].v1 - __MIXChannel[i].v) / 0xa0;
            axvpb->sync |= 0x200;
        }

        if ((cond1 == 0) || (axvpb == NULL))
        {
            continue;
        }

        if (axvpb->pb.mix.vL = __MIXChannel[i].vL)
        {
            mixerCtrl |= 0x1;
        }
        axvpb->pb.mix.vDeltaL = 1;
        mixerCtrl |= 0x8;

        if (axvpb->pb.mix.vR = __MIXChannel[i].vR)
        {
            mixerCtrl |= 0x02;
        }
        axvpb->pb.mix.vDeltaR = 1;
        mixerCtrl |= 0x8;

        if (axvpb->pb.mix.vAuxAL = __MIXChannel[i].vAL)
        {
            mixerCtrl |= 0x10;
        }
        if (axvpb->pb.mix.vDeltaAuxAL = (__MIXChannel[i].vAL1 - __MIXChannel[i].vAL) / 0xa0)
        {
            mixerCtrl |= 0x40;
        }
        if (axvpb->pb.mix.vAuxAR = __MIXChannel[i].vAR)
        {
            mixerCtrl |= 0x20;
        }
        if (axvpb->pb.mix.vDeltaAuxAR = (__MIXChannel[i].vAR1 - __MIXChannel[i].vAR) / 0xa0)
        {
            mixerCtrl |= 0x40;
        }
        if (axvpb->pb.mix.vAuxBL = __MIXChannel[i].vBL)
        {
            mixerCtrl |= 0x200;
        }
        if (axvpb->pb.mix.vDeltaAuxBL = (__MIXChannel[i].vBL1 - __MIXChannel[i].vBL) / 0xa0)
        {
            mixerCtrl |= 0x800;
        }
        if (axvpb->pb.mix.vAuxBR = __MIXChannel[i].vBR)
        {
            mixerCtrl |= 0x400;
        }
        if (axvpb->pb.mix.vDeltaAuxBR = (__MIXChannel[i].vBR1 - __MIXChannel[i].vBR) / 0xa0)
        {
            mixerCtrl |= 0x800;
        }
        if (axvpb->pb.mix.vAuxBS = __MIXChannel[i].vBS)
        {
            mixerCtrl |= 0x1000;
        }
        if (axvpb->pb.mix.vDeltaAuxBS = (__MIXChannel[i].vBS1 - __MIXChannel[i].vBS) / 0xa0)
        {
            mixerCtrl |= 0x2000;
        }
        if (axvpb->pb.mix.vS = __MIXChannel[i].vS)
        {
            mixerCtrl |= 0x4;
        }
        if (axvpb->pb.mix.vDeltaS = (__MIXChannel[i].vS1 - __MIXChannel[i].vS) / 0xa0)
        {
            mixerCtrl |= 0x8;
        }
        if (axvpb->pb.mix.vAuxAS = __MIXChannel[i].vAS)
        {
            mixerCtrl |= 0x80;
        }
        if (axvpb->pb.mix.vDeltaAuxAS = (__MIXChannel[i].vAS1 - __MIXChannel[i].vAS) / 0xa0)
        {
            mixerCtrl |= 0x100;
        }
        axvpb->pb.mixerCtrl = mixerCtrl;
        axvpb->sync |= 0x12;
    }

    if ( __MIXDvdStreamAttenUser > __MIXDvdStreamAttenCurrent)
    {
        __MIXDvdStreamAttenCurrent++;
        AISetStreamVolLeft(__MIXAIVolumeTable[*((volatile int*)(&__MIXDvdStreamAttenCurrent))]);
        AISetStreamVolRight(__MIXAIVolumeTable[__MIXDvdStreamAttenCurrent]);
    }
    else if (__MIXDvdStreamAttenUser < __MIXDvdStreamAttenCurrent)
    {
        __MIXDvdStreamAttenCurrent--;
        AISetStreamVolLeft(__MIXAIVolumeTable[*((volatile int*)(&__MIXDvdStreamAttenCurrent))]);
        AISetStreamVolRight(__MIXAIVolumeTable[__MIXDvdStreamAttenCurrent]);
    }
}