#include "angles_common.h"
const uint16_t angle_32F_single[4][32][8] = {
{{	 0x06FE,  0x04FE,  0x03E4,  0x02D2,  0x0245,  0x01BC,  0x01B4,  0x012E, },
{	 0x07FE,  0x05FD,  0x0461,  0x0350,  0x02C3,  0x023A,  0x01B2,  0x01AD, },
{	 0x097E,  0x06F9,  0x04DE,  0x03CC,  0x0340,  0x02B7,  0x0230,  0x022B, },
{	 0x0A7E,  0x0776,  0x05DA,  0x04C9,  0x03BE,  0x0335,  0x02AF,  0x022A, },
{	 0x0BFE,  0x0870,  0x0657,  0x0546,  0x043B,  0x03B3,  0x032D,  0x02A8, },
{	 0x0CFE,  0x096C,  0x0753,  0x05C4,  0x04B9,  0x0431,  0x032C,  0x0326, },
{	 0x0E7E,  0x0A67,  0x07D0,  0x0641,  0x0537,  0x0430,  0x03AA,  0x0324, },
{	 0x0F7E,  0x0B62,  0x08CC,  0x06BE,  0x05B4,  0x04AD,  0x0427,  0x03A3, },
{	 0x10FE,  0x0C5E,  0x0949,  0x073C,  0x0632,  0x052B,  0x04A6,  0x0421, },
{	 0x127E,  0x0CDA,  0x09C6,  0x0838,  0x06AF,  0x05A9,  0x04A4,  0x0420, },
{	 0x1378,  0x0DD5,  0x0AC2,  0x08B6,  0x072D,  0x0626,  0x0522,  0x049E, },
{	 0x14F1,  0x0ED1,  0x0B3F,  0x0933,  0x07AA,  0x06A4,  0x05A0,  0x051C, },
{	 0x15EC,  0x0FCC,  0x0C3B,  0x09B0,  0x0828,  0x0722,  0x061E,  0x051A, },
{	 0x1765,  0x10C8,  0x0CB8,  0x0A2D,  0x08A6,  0x0720,  0x069C,  0x0599, },
{	 0x1860,  0x1144,  0x0DB4,  0x0AAA,  0x0923,  0x079E,  0x069A,  0x0617, },
{	 0x19D9,  0x123F,  0x0E31,  0x0BA7,  0x09A1,  0x081C,  0x0718,  0x0616, },
{	 0x1AD4,  0x133B,  0x0EAE,  0x0C24,  0x0A1E,  0x089A,  0x0796,  0x0694, },
{	 0x1C4C,  0x1436,  0x0FAA,  0x0CA2,  0x0A9C,  0x0918,  0x0814,  0x0712, },
{	 0x1D48,  0x1531,  0x1026,  0x0D1F,  0x0B1A,  0x0996,  0x0813,  0x0710, },
{	 0x1E42,  0x162D,  0x1122,  0x0D9C,  0x0B97,  0x0A14,  0x0891,  0x078F, },
{	 0x1FB9,  0x16AA,  0x11A0,  0x0E1A,  0x0C15,  0x0A12,  0x090F,  0x080D, },
{	 0x1FB3,  0x17A5,  0x129C,  0x0F16,  0x0C92,  0x0A90,  0x098D,  0x088C, },
{	 0x1FAD,  0x18A0,  0x1318,  0x0F93,  0x0D10,  0x0B0E,  0x098C,  0x088A, },
{	 0x1FA7,  0x199C,  0x1396,  0x1011,  0x0D8E,  0x0B8B,  0x0A0A,  0x0908, },
{	 0x1FA1,  0x1A97,  0x1491,  0x108E,  0x0E0B,  0x0C09,  0x0A88,  0x0986, },
{	 0x1F9B,  0x1B14,  0x150E,  0x110B,  0x0E89,  0x0C87,  0x0B06,  0x0985, },
{	 0x1F95,  0x1C10,  0x160A,  0x1208,  0x0F06,  0x0D05,  0x0B04,  0x0A03, },
{	 0x1F8F,  0x1D0A,  0x1687,  0x1285,  0x0F84,  0x0D83,  0x0B82,  0x0A82, },
{	 0x1F89,  0x1E06,  0x1704,  0x1302,  0x1001,  0x0D82,  0x0C00,  0x0A80, },
{	 0x1F83,  0x1F01,  0x1800,  0x137F,  0x107F,  0x0DFF,  0x0C7E,  0x0AFE, },
{	 0x1F7D,  0x1F7D,  0x187E,  0x13FD,  0x10FD,  0x0E7C,  0x0CFC,  0x0B7C, },
{	 0x1F77,  0x1F78,  0x1979,  0x147A,  0x117A,  0x0EFA,  0x0CFB,  0x0B7B, },
},{{	 0x012A,  0x0126,  0x00A2,  0x00A0,  0x009E,  0x009C,  0x009A,  0x0018, },
{	 0x0128,  0x0124,  0x0122,  0x011E,  0x009C,  0x009A,  0x0098,  0x0097, },
{	 0x01A7,  0x01A3,  0x0120,  0x011E,  0x011C,  0x009A,  0x0098,  0x0096, },
{	 0x0225,  0x01A2,  0x019F,  0x011C,  0x011A,  0x0118,  0x0116,  0x0115, },
{	 0x0224,  0x0220,  0x019E,  0x019B,  0x0199,  0x0118,  0x0116,  0x0114, },
{	 0x02A2,  0x021F,  0x021C,  0x019A,  0x0198,  0x0196,  0x0114,  0x0114, },
{	 0x0320,  0x029E,  0x021B,  0x0218,  0x0216,  0x0195,  0x0194,  0x0192, },
{	 0x031F,  0x029C,  0x029A,  0x0218,  0x0216,  0x0214,  0x0192,  0x0192, },
{	 0x039E,  0x031B,  0x0298,  0x0296,  0x0214,  0x0213,  0x0212,  0x0190, },
{	 0x039C,  0x039A,  0x0317,  0x0296,  0x0294,  0x0212,  0x0210,  0x0210, },
{	 0x041A,  0x0398,  0x0316,  0x0314,  0x0292,  0x0291,  0x0210,  0x020E, },
{	 0x0499,  0x0416,  0x0394,  0x0313,  0x0312,  0x0290,  0x028F,  0x020E, },
{	 0x0498,  0x0416,  0x0394,  0x0392,  0x0310,  0x030F,  0x028E,  0x028D, },
{	 0x0516,  0x0494,  0x0412,  0x0390,  0x038F,  0x030E,  0x030D,  0x028C, },
{	 0x0514,  0x0492,  0x0490,  0x0410,  0x038E,  0x038D,  0x030C,  0x030B, },
{	 0x0593,  0x0511,  0x0490,  0x040E,  0x040D,  0x038C,  0x030B,  0x030A, },
{	 0x0612,  0x0590,  0x050E,  0x048D,  0x040C,  0x038B,  0x038A,  0x030A, },
{	 0x0610,  0x058E,  0x050D,  0x048C,  0x040C,  0x040A,  0x0389,  0x0388, },
{	 0x068E,  0x060D,  0x058C,  0x050A,  0x048A,  0x0409,  0x0408,  0x0388, },
{	 0x070D,  0x060C,  0x058A,  0x050A,  0x0488,  0x0488,  0x0408,  0x0386, },
{	 0x070C,  0x068A,  0x060A,  0x0588,  0x0508,  0x0487,  0x0406,  0x0406, },
{	 0x078A,  0x0689,  0x0608,  0x0587,  0x0506,  0x0486,  0x0486,  0x0404, },
{	 0x0788,  0x0708,  0x0686,  0x0606,  0x0586,  0x0505,  0x0484,  0x0484, },
{	 0x0807,  0x0786,  0x0686,  0x0605,  0x0584,  0x0504,  0x0504,  0x0483, },
{	 0x0886,  0x0785,  0x0704,  0x0684,  0x0603,  0x0582,  0x0502,  0x0482, },
{	 0x0884,  0x0804,  0x0703,  0x0682,  0x0602,  0x0582,  0x0502,  0x0502, },
{	 0x0902,  0x0802,  0x0782,  0x0682,  0x0602,  0x0600,  0x0580,  0x0500, },
{	 0x0981,  0x0881,  0x0780,  0x0700,  0x0680,  0x0600,  0x0580,  0x0500, },
{	 0x0980,  0x0880,  0x07FF,  0x077F,  0x067F,  0x05FE,  0x05FE,  0x057E, },
{	 0x09FE,  0x08FE,  0x07FE,  0x077E,  0x06FE,  0x067E,  0x05FE,  0x057E, },
{	 0x09FC,  0x08FC,  0x087C,  0x077C,  0x06FC,  0x067C,  0x05FC,  0x05FC, },
{	 0x0A7B,  0x097B,  0x087C,  0x07FC,  0x077C,  0x06FC,  0x067C,  0x05FC, },
},{{	 0x0016,  0x0015,  0x0014,  0x0012,  0x0012,  0x0011,  0x0010,  0x0010, },
{	 0x0096,  0x0094,  0x0014,  0x0012,  0x0011,  0x0010,  0x0010,  0x000E, },
{	 0x0094,  0x0094,  0x0092,  0x0092,  0x0010,  0x0010,  0x000E,  0x000E, },
{	 0x0094,  0x0092,  0x0092,  0x0090,  0x0090,  0x008F,  0x008E,  0x000E, },
{	 0x0113,  0x0112,  0x0090,  0x0090,  0x008F,  0x008E,  0x008E,  0x008C, },
{	 0x0112,  0x0111,  0x0110,  0x010F,  0x008E,  0x008E,  0x008C,  0x008C, },
{	 0x0112,  0x0110,  0x0110,  0x010E,  0x010E,  0x008C,  0x008C,  0x008C, },
{	 0x0190,  0x0190,  0x010E,  0x010E,  0x010D,  0x010C,  0x010C,  0x008C, },
{	 0x0190,  0x018E,  0x018E,  0x010D,  0x010C,  0x010C,  0x010B,  0x010A, },
{	 0x018E,  0x018E,  0x018D,  0x018C,  0x018C,  0x010A,  0x010A,  0x010A, },
{	 0x020E,  0x020C,  0x018C,  0x018C,  0x018A,  0x018A,  0x010A,  0x0109, },
{	 0x020D,  0x020C,  0x020C,  0x018A,  0x018A,  0x018A,  0x0189,  0x0188, },
{	 0x020C,  0x020C,  0x020A,  0x020A,  0x018A,  0x0188,  0x0188,  0x0188, },
{	 0x028C,  0x028A,  0x020A,  0x020A,  0x0208,  0x0188,  0x0188,  0x0188, },
{	 0x028A,  0x028A,  0x0289,  0x0208,  0x0208,  0x0208,  0x0188,  0x0186, },
{	 0x030A,  0x0288,  0x0288,  0x0288,  0x0208,  0x0206,  0x0206,  0x0206, },
{	 0x0308,  0x0308,  0x0288,  0x0287,  0x0286,  0x0206,  0x0206,  0x0206, },
{	 0x0308,  0x0308,  0x0286,  0x0286,  0x0286,  0x0286,  0x0205,  0x0204, },
{	 0x0387,  0x0306,  0x0306,  0x0286,  0x0285,  0x0284,  0x0284,  0x0204, },
{	 0x0386,  0x0386,  0x0306,  0x0304,  0x0284,  0x0284,  0x0284,  0x0284, },
{	 0x0386,  0x0384,  0x0304,  0x0304,  0x0304,  0x0284,  0x0284,  0x0282, },
{	 0x0404,  0x0384,  0x0384,  0x0304,  0x0303,  0x0302,  0x0282,  0x0282, },
{	 0x0404,  0x0384,  0x0382,  0x0382,  0x0302,  0x0302,  0x0302,  0x0282, },
{	 0x0402,  0x0402,  0x0382,  0x0382,  0x0382,  0x0302,  0x0302,  0x0301, },
{	 0x0482,  0x0402,  0x0402,  0x0381,  0x0381,  0x0300,  0x0300,  0x0300, },
{	 0x0481,  0x0480,  0x0400,  0x0400,  0x0380,  0x0380,  0x0300,  0x0300, },
{	 0x0480,  0x0480,  0x0400,  0x0400,  0x0380,  0x0380,  0x0380,  0x0300, },
{	 0x0500,  0x047F,  0x047F,  0x03FF,  0x03FE,  0x037E,  0x037E,  0x037E, },
{	 0x04FE,  0x04FE,  0x047E,  0x03FE,  0x03FE,  0x03FE,  0x037E,  0x037E, },
{	 0x04FE,  0x04FE,  0x047E,  0x047E,  0x03FE,  0x03FE,  0x037E,  0x037E, },
{	 0x057C,  0x04FC,  0x04FC,  0x047C,  0x047C,  0x03FC,  0x03FC,  0x037C, },
{	 0x057C,  0x057C,  0x04FC,  0x047C,  0x047C,  0x03FC,  0x03FC,  0x03FC, },
},{{	 0x000E,  0x000E,  0x000E,  0x000C,  0xFF8C,  0xFF8C,  0xFF8C,  0xFF8A, },
{	 0x000E,  0x000E,  0x000C,  0x000C,  0x000C,  0x000C,  0x000A,  0x000A, },
{	 0x000E,  0x000C,  0x000C,  0x000C,  0x000C,  0x000A,  0x000A,  0x000A, },
{	 0x000C,  0x000C,  0x000C,  0x000C,  0x000A,  0x000A,  0x000A,  0x000A, },
{	 0x008C,  0x008C,  0x000C,  0x000A,  0x000A,  0x000A,  0x000A,  0x0009, },
{	 0x008C,  0x008B,  0x008A,  0x008A,  0x008A,  0x000A,  0x0008,  0x0008, },
{	 0x008B,  0x008A,  0x008A,  0x008A,  0x008A,  0x0088,  0x0088,  0x0088, },
{	 0x008A,  0x008A,  0x008A,  0x0089,  0x0088,  0x0088,  0x0088,  0x0088, },
{	 0x010A,  0x008A,  0x0089,  0x0088,  0x0088,  0x0088,  0x0088,  0x0088, },
{	 0x010A,  0x0108,  0x0108,  0x0088,  0x0088,  0x0088,  0x0087,  0x0086, },
{	 0x0108,  0x0108,  0x0108,  0x0108,  0x0107,  0x0086,  0x0086,  0x0086, },
{	 0x0108,  0x0108,  0x0108,  0x0106,  0x0106,  0x0106,  0x0106,  0x0086, },
{	 0x0188,  0x0108,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106, },
{	 0x0186,  0x0186,  0x0186,  0x0106,  0x0106,  0x0106,  0x0105,  0x0104, },
{	 0x0186,  0x0186,  0x0186,  0x0186,  0x0105,  0x0104,  0x0104,  0x0104, },
{	 0x0186,  0x0186,  0x0185,  0x0184,  0x0184,  0x0184,  0x0104,  0x0104, },
{	 0x0205,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0104, },
{	 0x0204,  0x0204,  0x0184,  0x0184,  0x0184,  0x0184,  0x0183,  0x0182, },
{	 0x0204,  0x0204,  0x0204,  0x0184,  0x0183,  0x0182,  0x0182,  0x0182, },
{	 0x0204,  0x0203,  0x0202,  0x0202,  0x0202,  0x0182,  0x0182,  0x0182, },
{	 0x0282,  0x0202,  0x0202,  0x0202,  0x0202,  0x0202,  0x0182,  0x0182, },
{	 0x0282,  0x0282,  0x0202,  0x0202,  0x0202,  0x0202,  0x0201,  0x0181, },
{	 0x0282,  0x0282,  0x0282,  0x0201,  0x0200,  0x0200,  0x0200,  0x0200, },
{	 0x0280,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200,  0x0200,  0x0200, },
{	 0x0300,  0x0280,  0x0280,  0x0280,  0x0280,  0x0200,  0x0200,  0x0200, },
{	 0x0300,  0x0300,  0x0280,  0x0280,  0x0280,  0x0280,  0x0200,  0x01FF, },
{	 0x02FF,  0x02FF,  0x027E,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE, },
{	 0x02FE,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x027E,  0x027E, },
{	 0x037E,  0x02FE,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E,  0x027E, },
{	 0x037E,  0x02FE,  0x02FE,  0x02FE,  0x02FE,  0x027E,  0x027E,  0x027E, },
{	 0x037C,  0x037C,  0x02FC,  0x02FC,  0x02FC,  0x02FC,  0x027C,  0x027C, },
{	 0x037C,  0x037C,  0x037C,  0x02FC,  0x02FC,  0x02FC,  0x02FC,  0x027C, },
},};
const uint16_t angle_32F_double[8][32][4] = {
{{	 0xFF8A,  0xFF8A,  0xFF88,  0xFF88, },
{	 0xFF8A,  0xFF89,  0xFF88,  0xFF88, },
{	 0x000A,  0x0008,  0x0008,  0xFF88, },
{	 0x0008,  0x0008,  0x0008,  0x0008, },
{	 0x0008,  0x0008,  0x0008,  0x0006, },
{	 0x0008,  0x0008,  0x0006,  0x0006, },
{	 0x0008,  0x0007,  0x0006,  0x0006, },
{	 0x0088,  0x0006,  0x0006,  0x0006, },
{	 0x0086,  0x0086,  0x0086,  0x0006, },
{	 0x0086,  0x0086,  0x0086,  0x0084, },
{	 0x0086,  0x0086,  0x0084,  0x0084, },
{	 0x0086,  0x0084,  0x0084,  0x0084, },
{	 0x0105,  0x0084,  0x0084,  0x0084, },
{	 0x0104,  0x0104,  0x0084,  0x0084, },
{	 0x0104,  0x0104,  0x0104,  0x0082, },
{	 0x0104,  0x0104,  0x0102,  0x0102, },
{	 0x0103,  0x0102,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0182,  0x0102,  0x0101, },
{	 0x0182,  0x0181,  0x0180,  0x0100, },
{	 0x0180,  0x0180,  0x0180,  0x0100, },
{	 0x0180,  0x0180,  0x0180,  0x0180, },
{	 0x0200,  0x0180,  0x0180,  0x0180, },
{	 0x0200,  0x0180,  0x0180,  0x017F, },
{	 0x01FF,  0x01FE,  0x017E,  0x017E, },
{	 0x01FE,  0x01FE,  0x01FE,  0x017E, },
{	 0x01FE,  0x01FE,  0x01FE,  0x017E, },
{	 0x027E,  0x01FE,  0x01FE,  0x01FE, },
{	 0x027E,  0x01FE,  0x01FD,  0x01FD, },
{	 0x027C,  0x027C,  0x01FC,  0x01FC, },
{	 0x027C,  0x027C,  0x01FC,  0x01FC, },
},{{	 0xFF88,  0xFF88,  0xFF86,  0xFF86, },
{	 0xFF88,  0xFF86,  0xFF86,  0xFF86, },
{	 0xFF87,  0xFF86,  0xFF86,  0xFF86, },
{	 0x0006,  0xFF86,  0xFF86,  0xFF86, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0004, },
{	 0x0006,  0x0006,  0x0004,  0x0004, },
{	 0x0006,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0084,  0x0084,  0x0004,  0x0004, },
{	 0x0084,  0x0084,  0x0084,  0x0002, },
{	 0x0084,  0x0083,  0x0082,  0x0082, },
{	 0x0083,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0102,  0x0082,  0x0082,  0x0082, },
{	 0x0102,  0x0102,  0x0081,  0x0080, },
{	 0x0102,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0180,  0x0100,  0x00FF,  0x00FF, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017E,  0x017E,  0x017E,  0x00FE, },
{	 0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FD,  0x017D,  0x017D,  0x017D, },
{	 0x01FC,  0x017C,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x017C,  0x017C, },
},{{	 0xFF86,  0xFF86,  0xFF86,  0xFF85, },
{	 0xFF86,  0xFF86,  0xFF86,  0xFF84, },
{	 0xFF86,  0xFF86,  0xFF84,  0xFF84, },
{	 0xFF86,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0x0004,  0x0004,  0xFF84,  0xFF84, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0003,  0x0002, },
{	 0x0004,  0x0003,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0082,  0x0082,  0x0002,  0x0002, },
{	 0x0082,  0x0082,  0x0082,  0x0002, },
{	 0x0082,  0x0082,  0x0081,  0x0080, },
{	 0x0081,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0100,  0x0080,  0x0080,  0x0080, },
{	 0x0100,  0x0100,  0x0080,  0x0080, },
{	 0x0100,  0x00FF,  0x00FF,  0x007E, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x017E,  0x00FE,  0x00FE,  0x00FE, },
{	 0x017D,  0x017D,  0x00FD,  0x00FD, },
{	 0x017C,  0x017C,  0x00FC,  0x00FC, },
{	 0x017C,  0x017C,  0x017C,  0x00FC, },
},{{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF83, },
{	 0xFF84,  0xFF84,  0xFF83,  0xFF82, },
{	 0x0004,  0xFF82,  0xFF82,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0001,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x007F,  0x007F,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x00FE,  0x007E, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
},{{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF83, },
{	 0xFF84,  0xFF84,  0xFF83,  0xFF82, },
{	 0xFF84,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0x0002,  0x0002,  0xFF82,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0001, },
{	 0x0002,  0x0002,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x007F,  0x007F,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x00FE,  0x007E,  0x007E,  0x007E, },
{	 0x00FC,  0x00FC,  0x007C,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
},{{	 0xFF83,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF81, },
{	 0x0002,  0xFF81,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFFFF, },
{	 0xFFFF,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
},{{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF81, },
{	 0xFF82,  0xFF81,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFFFF, },
{	 0xFFFF,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007D, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
},{{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF81,  0xFF80, },
{	 0xFF82,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFFFF,  0xFFFF, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007D,  0x007D,  0x007D,  0xFFFD, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
},};
