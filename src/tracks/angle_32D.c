#include "angles_common.h"
const uint16_t angle_32D_single[4][32][8] = {
{{	 0x0FFE,  0x0AFC,  0x0861,  0x06CF,  0x05C2,  0x04B9,  0x0432,  0x03AD, },
{	 0x107E,  0x0BF7,  0x08DD,  0x074B,  0x05C0,  0x0537,  0x0430,  0x03AB, },
{	 0x117E,  0x0C72,  0x095A,  0x07C8,  0x063D,  0x0534,  0x04AE,  0x0429, },
{	 0x127E,  0x0CEE,  0x09D6,  0x0845,  0x06BA,  0x05B2,  0x04AC,  0x0427, },
{	 0x137E,  0x0DE7,  0x0AD0,  0x0842,  0x0737,  0x0630,  0x052A,  0x04A5, },
{	 0x147E,  0x0E63,  0x0B4C,  0x08BE,  0x0735,  0x062D,  0x05A8,  0x04A3, },
{	 0x157E,  0x0F5D,  0x0BC8,  0x093B,  0x07B2,  0x06AB,  0x05A6,  0x0522, },
{	 0x167B,  0x0FD9,  0x0C44,  0x09B8,  0x082F,  0x0728,  0x0624,  0x0520, },
{	 0x1774,  0x1053,  0x0CC1,  0x0A35,  0x08AC,  0x0726,  0x0621,  0x059E, },
{	 0x17EE,  0x10D0,  0x0D3D,  0x0AB1,  0x08AA,  0x07A4,  0x069F,  0x059C, },
{	 0x18E8,  0x11C9,  0x0DB9,  0x0B2E,  0x0927,  0x07A2,  0x069E,  0x061A, },
{	 0x19DF,  0x1245,  0x0E35,  0x0BAB,  0x09A4,  0x081F,  0x071B,  0x0618, },
{	 0x1AD9,  0x133F,  0x0EB1,  0x0BA8,  0x0A21,  0x089C,  0x0799,  0x0696, },
{	 0x1BD1,  0x13BA,  0x0F2D,  0x0C24,  0x0A1E,  0x089A,  0x0797,  0x0694, },
{	 0x1CC9,  0x1436,  0x0FA9,  0x0CA1,  0x0A9C,  0x0918,  0x0815,  0x0712, },
{	 0x1DC3,  0x152F,  0x1025,  0x0D1E,  0x0B19,  0x0995,  0x0812,  0x0710, },
{	 0x1EBB,  0x15AB,  0x10A1,  0x0D9B,  0x0B96,  0x0993,  0x0890,  0x078E, },
{	 0x1F36,  0x1626,  0x111D,  0x0E17,  0x0B94,  0x0A11,  0x088E,  0x078C, },
{	 0x1FAD,  0x1720,  0x1199,  0x0E94,  0x0C11,  0x0A8E,  0x090C,  0x080B, },
{	 0x1FA7,  0x179C,  0x1216,  0x0F11,  0x0C8E,  0x0A8C,  0x090A,  0x0809, },
{	 0x1F9F,  0x1818,  0x1292,  0x0F0E,  0x0C8C,  0x0B09,  0x0988,  0x0887, },
{	 0x1F99,  0x1911,  0x138D,  0x0F8A,  0x0D08,  0x0B08,  0x0A06,  0x0885, },
{	 0x1F91,  0x198D,  0x1409,  0x1007,  0x0D86,  0x0B85,  0x0A04,  0x0903, },
{	 0x1F8B,  0x1A87,  0x1485,  0x1084,  0x0E03,  0x0C02,  0x0A82,  0x0902, },
{	 0x1F83,  0x1B03,  0x1501,  0x1101,  0x0E00,  0x0C00,  0x0A80,  0x097F, },
{	 0x1F7D,  0x1B7D,  0x157D,  0x117D,  0x0E7D,  0x0C7D,  0x0AFE,  0x097E, },
{	 0x1F75,  0x1BFA,  0x15F9,  0x11FA,  0x0EFB,  0x0CFB,  0x0AFC,  0x09FC, },
{	 0x1F6F,  0x1CF3,  0x1675,  0x11F8,  0x0F78,  0x0CF9,  0x0B79,  0x09FA, },
{	 0x1F67,  0x1D6E,  0x16F1,  0x1274,  0x0F75,  0x0D76,  0x0BF7,  0x0A78, },
{	 0x1F61,  0x1E69,  0x176D,  0x12F0,  0x0FF2,  0x0DF4,  0x0BF5,  0x0A76, },
{	 0x1F5B,  0x1EE4,  0x17E9,  0x136D,  0x1070,  0x0DF1,  0x0C73,  0x0AF4, },
{	 0x1F53,  0x1F5F,  0x1866,  0x13EA,  0x10EC,  0x0E6F,  0x0C71,  0x0AF2, },
},{{	 0x0328,  0x02A4,  0x02A2,  0x021F,  0x021C,  0x019A,  0x0199,  0x0198, },
{	 0x0326,  0x0323,  0x02A0,  0x021E,  0x021C,  0x021A,  0x0198,  0x0196, },
{	 0x03A5,  0x0322,  0x029E,  0x029C,  0x021A,  0x0218,  0x0216,  0x0196, },
{	 0x03A3,  0x0320,  0x031D,  0x029B,  0x0299,  0x0217,  0x0216,  0x0214, },
{	 0x0422,  0x039E,  0x031C,  0x031A,  0x0298,  0x0296,  0x0214,  0x0214, },
{	 0x0420,  0x039D,  0x039A,  0x0318,  0x0296,  0x0295,  0x0214,  0x0212, },
{	 0x049E,  0x041B,  0x0399,  0x0317,  0x0315,  0x0294,  0x0292,  0x0211, },
{	 0x049C,  0x041A,  0x0398,  0x0396,  0x0314,  0x0292,  0x0292,  0x0290, },
{	 0x051A,  0x0498,  0x0416,  0x0394,  0x0312,  0x0312,  0x0290,  0x028F, },
{	 0x0519,  0x0496,  0x0414,  0x0393,  0x0392,  0x0310,  0x030F,  0x028E, },
{	 0x0518,  0x0495,  0x0414,  0x0412,  0x0390,  0x030F,  0x030E,  0x028D, },
{	 0x0596,  0x0514,  0x0492,  0x0410,  0x038F,  0x038E,  0x030D,  0x030C, },
{	 0x0594,  0x0512,  0x0490,  0x040F,  0x040E,  0x038C,  0x038C,  0x030B, },
{	 0x0612,  0x0590,  0x050F,  0x048E,  0x040C,  0x038C,  0x038A,  0x030A, },
{	 0x0610,  0x058F,  0x050E,  0x048C,  0x040B,  0x040A,  0x038A,  0x0388, },
{	 0x068E,  0x058E,  0x050C,  0x048C,  0x048A,  0x0409,  0x0388,  0x0388, },
{	 0x068D,  0x060C,  0x058A,  0x050A,  0x0488,  0x0408,  0x0408,  0x0387, },
{	 0x070B,  0x060A,  0x0589,  0x0508,  0x0488,  0x0487,  0x0406,  0x0386, },
{	 0x070A,  0x0688,  0x0608,  0x0586,  0x0506,  0x0486,  0x0405,  0x0404, },
{	 0x0788,  0x0687,  0x0606,  0x0586,  0x0505,  0x0484,  0x0484,  0x0404, },
{	 0x0786,  0x0706,  0x0604,  0x0584,  0x0504,  0x0504,  0x0483,  0x0402, },
{	 0x0804,  0x0704,  0x0683,  0x0603,  0x0582,  0x0502,  0x0482,  0x0402, },
{	 0x0802,  0x0702,  0x0682,  0x0602,  0x0581,  0x0501,  0x0480,  0x0480, },
{	 0x0801,  0x0780,  0x0680,  0x0600,  0x0580,  0x0500,  0x0500,  0x0480, },
{	 0x087F,  0x077F,  0x06FF,  0x067F,  0x05FE,  0x057E,  0x04FE,  0x047E, },
{	 0x087E,  0x07FE,  0x06FE,  0x067E,  0x05FE,  0x057E,  0x04FE,  0x04FE, },
{	 0x08FC,  0x07FC,  0x077C,  0x067C,  0x05FC,  0x057C,  0x057C,  0x04FC, },
{	 0x08FA,  0x087A,  0x077A,  0x06FB,  0x067B,  0x05FB,  0x057C,  0x04FC, },
{	 0x0978,  0x0879,  0x077A,  0x06FA,  0x067A,  0x05FA,  0x057A,  0x04FA, },
{	 0x0976,  0x0877,  0x07F8,  0x06F8,  0x0678,  0x05F9,  0x057A,  0x057A, },
{	 0x09F5,  0x08F6,  0x07F6,  0x0777,  0x06F8,  0x0678,  0x05F8,  0x0578, },
{	 0x09F3,  0x08F4,  0x0874,  0x0776,  0x06F6,  0x0676,  0x05F7,  0x0578, },
},{{	 0x0116,  0x0114,  0x0114,  0x0112,  0x0112,  0x0090,  0x0090,  0x0090, },
{	 0x0195,  0x0114,  0x0112,  0x0112,  0x0110,  0x0110,  0x0110,  0x008E, },
{	 0x0194,  0x0193,  0x0112,  0x0111,  0x0110,  0x0110,  0x010E,  0x010E, },
{	 0x0193,  0x0192,  0x0191,  0x0110,  0x0110,  0x010E,  0x010E,  0x010E, },
{	 0x0192,  0x0191,  0x0190,  0x0190,  0x010E,  0x010E,  0x010D,  0x010C, },
{	 0x0211,  0x0190,  0x0190,  0x018E,  0x018E,  0x018C,  0x010C,  0x010C, },
{	 0x0210,  0x020F,  0x018E,  0x018E,  0x018C,  0x018C,  0x018C,  0x010B, },
{	 0x020F,  0x020E,  0x020E,  0x018C,  0x018C,  0x018C,  0x018A,  0x018A, },
{	 0x028E,  0x020E,  0x020C,  0x020C,  0x018C,  0x018A,  0x018A,  0x018A, },
{	 0x028D,  0x020C,  0x020C,  0x020B,  0x020A,  0x018A,  0x018A,  0x0189, },
{	 0x028C,  0x028C,  0x020A,  0x020A,  0x020A,  0x0209,  0x0188,  0x0188, },
{	 0x028C,  0x028A,  0x028A,  0x020A,  0x0208,  0x0208,  0x0208,  0x0188, },
{	 0x030A,  0x028A,  0x0289,  0x0288,  0x0208,  0x0208,  0x0208,  0x0186, },
{	 0x030A,  0x0288,  0x0288,  0x0288,  0x0208,  0x0206,  0x0206,  0x0206, },
{	 0x0308,  0x0308,  0x0288,  0x0286,  0x0286,  0x0206,  0x0206,  0x0206, },
{	 0x0308,  0x0306,  0x0306,  0x0286,  0x0286,  0x0286,  0x0205,  0x0204, },
{	 0x0386,  0x0306,  0x0306,  0x0285,  0x0284,  0x0284,  0x0204,  0x0204, },
{	 0x0386,  0x0305,  0x0304,  0x0304,  0x0284,  0x0284,  0x0284,  0x0204, },
{	 0x0384,  0x0384,  0x0304,  0x0304,  0x0284,  0x0283,  0x0282,  0x0282, },
{	 0x0384,  0x0383,  0x0302,  0x0302,  0x0302,  0x0282,  0x0282,  0x0282, },
{	 0x0402,  0x0382,  0x0382,  0x0302,  0x0302,  0x0302,  0x0282,  0x0281, },
{	 0x0402,  0x0382,  0x0381,  0x0380,  0x0300,  0x0300,  0x0280,  0x0280, },
{	 0x0400,  0x0400,  0x0380,  0x0380,  0x0300,  0x0300,  0x0300,  0x0280, },
{	 0x0400,  0x0400,  0x0380,  0x0380,  0x037F,  0x02FF,  0x02FF,  0x02FF, },
{	 0x047E,  0x03FE,  0x03FE,  0x037E,  0x037E,  0x02FE,  0x02FE,  0x02FE, },
{	 0x047E,  0x03FE,  0x03FE,  0x037E,  0x037E,  0x037E,  0x02FE,  0x02FE, },
{	 0x047C,  0x047C,  0x03FC,  0x03FC,  0x037C,  0x037C,  0x02FC,  0x02FC, },
{	 0x047C,  0x047C,  0x03FC,  0x03FC,  0x037C,  0x037C,  0x037C,  0x02FC, },
{	 0x04FA,  0x047A,  0x047B,  0x03FB,  0x03FB,  0x037C,  0x037C,  0x037C, },
{	 0x04FA,  0x047A,  0x047A,  0x03FA,  0x03FA,  0x037A,  0x037A,  0x037A, },
{	 0x04F8,  0x04F9,  0x0479,  0x047A,  0x03FA,  0x03FA,  0x037A,  0x037A, },
{	 0x0578,  0x04F8,  0x0478,  0x0478,  0x03F8,  0x03F9,  0x037A,  0x037A, },
},{{	 0x008E,  0x008E,  0x008E,  0x008D,  0x008C,  0x008C,  0x000C,  0x000B, },
{	 0x008E,  0x008E,  0x008C,  0x008C,  0x008C,  0x008C,  0x008B,  0x008A, },
{	 0x008E,  0x008C,  0x008C,  0x008C,  0x008C,  0x008A,  0x008A,  0x008A, },
{	 0x010C,  0x008C,  0x008C,  0x008B,  0x008A,  0x008A,  0x008A,  0x008A, },
{	 0x010C,  0x010C,  0x010A,  0x008A,  0x008A,  0x008A,  0x008A,  0x0089, },
{	 0x010C,  0x010A,  0x010A,  0x010A,  0x008A,  0x0089,  0x0088,  0x0088, },
{	 0x010A,  0x010A,  0x010A,  0x010A,  0x0108,  0x0088,  0x0088,  0x0088, },
{	 0x010A,  0x010A,  0x0109,  0x0108,  0x0108,  0x0108,  0x0108,  0x0088, },
{	 0x018A,  0x0108,  0x0108,  0x0108,  0x0108,  0x0108,  0x0107,  0x0106, },
{	 0x0188,  0x0188,  0x0108,  0x0108,  0x0107,  0x0106,  0x0106,  0x0106, },
{	 0x0188,  0x0188,  0x0187,  0x0106,  0x0106,  0x0106,  0x0106,  0x0106, },
{	 0x0187,  0x0186,  0x0186,  0x0186,  0x0106,  0x0106,  0x0106,  0x0106, },
{	 0x0186,  0x0186,  0x0186,  0x0186,  0x0186,  0x0105,  0x0104,  0x0104, },
{	 0x0186,  0x0186,  0x0186,  0x0185,  0x0184,  0x0184,  0x0104,  0x0104, },
{	 0x0205,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0104, },
{	 0x0204,  0x0204,  0x0184,  0x0184,  0x0184,  0x0184,  0x0184,  0x0183, },
{	 0x0204,  0x0204,  0x0204,  0x0183,  0x0183,  0x0182,  0x0182,  0x0182, },
{	 0x0203,  0x0202,  0x0202,  0x0202,  0x0182,  0x0182,  0x0182,  0x0182, },
{	 0x0202,  0x0202,  0x0202,  0x0202,  0x0202,  0x0182,  0x0182,  0x0182, },
{	 0x0282,  0x0202,  0x0202,  0x0202,  0x0202,  0x0182,  0x0181,  0x0180, },
{	 0x0281,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200,  0x0180,  0x0180, },
{	 0x0280,  0x0280,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200,  0x0180, },
{	 0x0280,  0x0280,  0x0280,  0x0200,  0x0200,  0x0200,  0x0200,  0x0200, },
{	 0x027F,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE,  0x01FE,  0x01FE, },
{	 0x027E,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE,  0x01FE,  0x01FE, },
{	 0x02FE,  0x027E,  0x027E,  0x027E,  0x027E,  0x01FE,  0x01FE,  0x01FE, },
{	 0x02FC,  0x02FC,  0x027D,  0x027D,  0x027D,  0x027D,  0x01FD,  0x01FD, },
{	 0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x027C,  0x027C,  0x01FC, },
{	 0x02FC,  0x02FC,  0x02FC,  0x027C,  0x027C,  0x027C,  0x027C,  0x01FC, },
{	 0x02FA,  0x02FB,  0x02FB,  0x02FB,  0x027C,  0x027C,  0x027C,  0x027C, },
{	 0x037A,  0x02FA,  0x02FA,  0x02FA,  0x027A,  0x027A,  0x027A,  0x027A, },
{	 0x037A,  0x02FA,  0x02FA,  0x02FA,  0x02FA,  0x027A,  0x027A,  0x027A, },
},};
const uint16_t angle_32D_double[8][32][4] = {
{{	 0x000A,  0x000A,  0x000A,  0x0008, },
{	 0x000A,  0x000A,  0x0008,  0x0008, },
{	 0x008A,  0x0008,  0x0008,  0x0008, },
{	 0x0089,  0x0088,  0x0008,  0x0008, },
{	 0x0088,  0x0088,  0x0088,  0x0006, },
{	 0x0088,  0x0088,  0x0086,  0x0086, },
{	 0x0088,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0086,  0x0086, },
{	 0x0086,  0x0086,  0x0086,  0x0085, },
{	 0x0106,  0x0086,  0x0085,  0x0084, },
{	 0x0106,  0x0105,  0x0084,  0x0084, },
{	 0x0104,  0x0104,  0x0084,  0x0084, },
{	 0x0104,  0x0104,  0x0104,  0x0084, },
{	 0x0104,  0x0104,  0x0104,  0x0082, },
{	 0x0104,  0x0103,  0x0102,  0x0102, },
{	 0x0102,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0102,  0x0102,  0x0102, },
{	 0x0182,  0x0181,  0x0100,  0x0100, },
{	 0x0180,  0x0180,  0x0100,  0x0100, },
{	 0x0180,  0x0180,  0x0180,  0x0100, },
{	 0x0180,  0x0180,  0x0180,  0x0100, },
{	 0x017F,  0x017F,  0x017F,  0x017E, },
{	 0x017E,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x017E,  0x017E,  0x017E, },
{	 0x01FE,  0x017E,  0x017E,  0x017E, },
{	 0x01FD,  0x01FD,  0x017D,  0x017E, },
{	 0x01FC,  0x01FC,  0x017C,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x017C, },
{	 0x01FC,  0x01FC,  0x01FC,  0x017C, },
{	 0x01FB,  0x01FB,  0x01FC,  0x017C, },
{	 0x027A,  0x01FA,  0x01FA,  0x01FB, },
},{{	 0x0008,  0x0008,  0x0008,  0x0006, },
{	 0x0008,  0x0008,  0x0006,  0x0006, },
{	 0x0008,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0006, },
{	 0x0006,  0x0006,  0x0006,  0x0005, },
{	 0x0086,  0x0006,  0x0004,  0x0004, },
{	 0x0086,  0x0084,  0x0004,  0x0004, },
{	 0x0084,  0x0084,  0x0084,  0x0004, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0084,  0x0084, },
{	 0x0084,  0x0084,  0x0083,  0x0082, },
{	 0x0083,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0102,  0x0082,  0x0082,  0x0082, },
{	 0x0102,  0x0082,  0x0081,  0x0080, },
{	 0x0101,  0x0100,  0x0080,  0x0080, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0100,  0x0080, },
{	 0x0100,  0x0100,  0x0100,  0x0100, },
{	 0x0100,  0x0100,  0x0100,  0x00FF, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x017E,  0x00FE,  0x00FE,  0x00FE, },
{	 0x017E,  0x00FE,  0x00FE,  0x00FE, },
{	 0x017E,  0x017E,  0x00FE,  0x00FE, },
{	 0x017C,  0x017C,  0x00FC,  0x00FC, },
{	 0x017C,  0x017C,  0x017C,  0x00FC, },
{	 0x017C,  0x017C,  0x017C,  0x00FC, },
{	 0x017C,  0x017C,  0x017C,  0x017C, },
{	 0x017B,  0x017C,  0x017C,  0x017C, },
},{{	 0x0006,  0xFF86,  0xFF86,  0xFF86, },
{	 0x0006,  0x0006,  0x0006,  0xFF86, },
{	 0x0006,  0x0006,  0x0006,  0x0004, },
{	 0x0006,  0x0006,  0x0004,  0x0004, },
{	 0x0005,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0004,  0x0003, },
{	 0x0004,  0x0003,  0x0002,  0x0002, },
{	 0x0083,  0x0002,  0x0002,  0x0002, },
{	 0x0082,  0x0002,  0x0002,  0x0002, },
{	 0x0082,  0x0082,  0x0002,  0x0002, },
{	 0x0082,  0x0082,  0x0082,  0x0002, },
{	 0x0082,  0x0082,  0x0082,  0x0082, },
{	 0x0082,  0x0081,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x00FF,  0x007F,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x007E,  0x007E, },
{	 0x00FE,  0x00FE,  0x00FE,  0x007E, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FE,  0x00FE,  0x00FE,  0x00FE, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FD, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
},{{	 0xFF86,  0xFF85,  0xFF84,  0xFF84, },
{	 0xFF85,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0x0004,  0x0004,  0xFF84,  0xFF84, },
{	 0x0004,  0x0004,  0x0004,  0xFF84, },
{	 0x0004,  0x0004,  0x0004,  0x0004, },
{	 0x0004,  0x0004,  0x0003,  0x0002, },
{	 0x0004,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0001,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0000,  0x0000, },
{	 0x0080,  0x0080,  0x0080,  0x0000, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x0080,  0x0080,  0x0080, },
{	 0x0080,  0x007F,  0x007F,  0x007F, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x00FD,  0x007D,  0x007D,  0x007D, },
{	 0x00FC,  0x00FC,  0x007C,  0x007C, },
{	 0x00FC,  0x00FC,  0x007C,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x007C, },
{	 0x00FC,  0x00FC,  0x00FC,  0x00FC, },
},{{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF83, },
{	 0xFF84,  0xFF84,  0xFF83,  0xFF82, },
{	 0x0003,  0xFF82,  0xFF82,  0xFF82, },
{	 0x0002,  0x0002,  0xFF82,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0002,  0x0002,  0x0002, },
{	 0x0002,  0x0001,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007D,  0x007D,  0x007E,  0x007E, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
},{{	 0xFF84,  0xFF84,  0xFF84,  0xFF84, },
{	 0xFF84,  0xFF84,  0xFF84,  0xFF83, },
{	 0xFF84,  0xFF83,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0x0002,  0xFF82,  0xFF82,  0xFF82, },
{	 0x0002,  0x0002,  0x0002,  0xFF82, },
{	 0x0002,  0x0002,  0x0001,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0xFFFE,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0xFFFE, },
{	 0x007E,  0x007E,  0x007E,  0x007E, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
},{{	 0xFF84,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF81,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
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
{	 0x007C,  0xFFFD,  0xFFFC,  0xFFFD, },
{	 0x007C,  0x007C,  0xFFFC,  0xFFFC, },
{	 0x007C,  0x007C,  0x007C,  0xFFFC, },
{	 0x007C,  0x007C,  0x007C,  0x007C, },
},{{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF82,  0xFF82, },
{	 0xFF82,  0xFF82,  0xFF81,  0xFF80, },
{	 0xFF81,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0xFF80,  0xFF80,  0xFF80,  0xFF80, },
{	 0x0000,  0xFF80,  0xFF80,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0xFFFF,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFE,  0xFFFE,  0xFFFE,  0xFFFE, },
{	 0xFFFD,  0xFFFD,  0xFFFD,  0xFFFD, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
{	 0xFFFC,  0xFFFC,  0xFFFC,  0xFFFC, },
},};
