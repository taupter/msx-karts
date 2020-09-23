#include "angles_common.h"
const uint16_t angle_12C_single[4][4][8][8] = {
{{{	 0x1F4F,  0xF90D,  0xFA86,  0xFC84,  0xFD82,  0xFE02,  0xFF01,  0xFE80, },
{	 0x16E2,  0xF88B,  0xFB04,  0xFC85,  0xFD82,  0xFE01,  0xFE81,  0xFF00, },
{	 0x16E6,  0xF888,  0xFA86,  0xFC83,  0xFD81,  0xFE81,  0xFE80,  0xFF01, },
{	 0x16EA,  0xF807,  0xFA84,  0xFC83,  0xFE01,  0xFE00,  0xFF00,  0xFE81, },
{	 0x176E,  0xF785,  0xFA84,  0xFD01,  0xFD81,  0xFE80,  0xFE80,  0xFF00, },
{	 0x1773,  0xF704,  0xFB02,  0xFC81,  0xFE00,  0xFE00,  0xFF00,  0xFEFF, },
{	 0x16F7,  0xF703,  0xFB01,  0xFD01,  0xFD7F,  0xFE80,  0xFE80,  0xFEFF, },
{	 0x16F9,  0xF704,  0xFB00,  0xFCFF,  0xFE00,  0xFE7E,  0xFE81,  0xFEFF, },
},{{	 0x1D7F,  0xF77F,  0xFB7F,  0xFCFE,  0xFD80,  0xFE7F,  0xFEFF,  0xFEFF, },
{	 0x1585,  0xF77D,  0xFB7E,  0xFCFF,  0xFDFE,  0xFE7F,  0xFE7F,  0xFEFF, },
{	 0x1587,  0xF7FC,  0xFAFF,  0xFCFD,  0xFDFF,  0xFE7E,  0xFEFF,  0xFEFE, },
{	 0x150C,  0xF7FB,  0xFB7D,  0xFCFD,  0xFDFE,  0xFE7E,  0xFEFE,  0xFEFF, },
{	 0x1411,  0xF878,  0xFB7C,  0xFCFD,  0xFDFD,  0xFE7F,  0xFEFD,  0xFEFF, },
{	 0x1415,  0xF877,  0xFB7A,  0xFD7D,  0xFDFD,  0xFE7D,  0xFEFE,  0xFEFE, },
{	 0x1399,  0xF876,  0xFBF9,  0xFCFC,  0xFDFD,  0xFEFD,  0xFE7E,  0xFF7E, },
{	 0x131D,  0xF875,  0xFBF8,  0xFD7B,  0xFDFC,  0xFE7D,  0xFEFE,  0xFEFD, },
},{{	 0x192C,  0xF874,  0xFBF7,  0xFD7B,  0xFDFC,  0xFEFC,  0xFEFE,  0xFEFD, },
{	 0x1226,  0xF8F1,  0xFC76,  0xFCFB,  0xFE7B,  0xFE7C,  0xFEFD,  0xFF7E, },
{	 0x11AA,  0xF96E,  0xFBF7,  0xFD79,  0xFDFB,  0xFEFC,  0xFEFD,  0xFEFD, },
{	 0x11AF,  0xF96D,  0xFBF5,  0xFD79,  0xFE7A,  0xFE7D,  0xFF7C,  0xFEFC, },
{	 0x1134,  0xF96B,  0xFBF5,  0xFDF8,  0xFE79,  0xFE7C,  0xFEFC,  0xFF7D, },
{	 0x1038,  0xF9EA,  0xFC73,  0xFD77,  0xFE7A,  0xFEFB,  0xFEFC,  0xFEFD, },
{	 0x103C,  0xF9E8,  0xFC72,  0xFDF7,  0xFE79,  0xFE7B,  0xFF7C,  0xFEFD, },
{	 0x0FC0,  0xF9E7,  0xFC71,  0xFDF6,  0xFE79,  0xFEFA,  0xFEFC,  0xFF7C, },
},{{	 0x145C,  0xF9E6,  0xFCF0,  0xFDF5,  0xFE79,  0xFE7B,  0xFF7B,  0xFF7B, },
{	 0x0E4B,  0xFA62,  0xFCEF,  0xFDF5,  0xFE78,  0xFEFA,  0xFEFC,  0xFF7B, },
{	 0x0E4E,  0xFA61,  0xFCEF,  0xFDF4,  0xFEF7,  0xFEFA,  0xFEFB,  0xFF7C, },
{	 0x0DD2,  0xFADF,  0xFCEE,  0xFDF4,  0xFE77,  0xFEF9,  0xFF7B,  0xFEFC, },
{	 0x0DD4,  0xFADF,  0xFCED,  0xFDF3,  0xFEF7,  0xFEF9,  0xFEFA,  0xFF7C, },
{	 0x0D59,  0xFADD,  0xFCED,  0xFE72,  0xFE77,  0xFEF8,  0xFF7A,  0xFF7B, },
{	 0x0CDD,  0xFADD,  0xFD6B,  0xFDF2,  0xFEF6,  0xFEF8,  0xFF7A,  0xFF7B, },
{	 0x0BDB,  0xFB62,  0xFD69,  0xFE72,  0xFE75,  0xFF78,  0xFEFA,  0xFF7B, },
},},{{{	 0x07F4,  0xFEFF,  0xFF81,  0xFF7F,  0xFF80,  0xFF80,  0xFF7F,  0xFFFF, },
{	 0x02FC,  0xFF80,  0xFF80,  0xFF80,  0xFF7F,  0xFF7F,  0xFF80,  0x0000, },
{	 0x02FB,  0xFF81,  0xFEFF,  0xFF7F,  0xFF80,  0x0000,  0xFF7F,  0xFF7F, },
{	 0x037D,  0xFEFF,  0xFF81,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF80, },
{	 0x02FE,  0xFF7F,  0xFF7F,  0xFF80,  0xFF7F,  0xFF80,  0xFFFF,  0xFF7F, },
{	 0x02FE,  0xFF80,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x02FF,  0xFEFF,  0xFF80,  0xFF7F,  0x0000,  0xFF7F,  0xFF7F,  0xFFFF, },
{	 0x02FF,  0xFEFF,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFF7F, },
},{{	 0x067F,  0xFF80,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F, },
{	 0x02FF,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F, },
{	 0x0301,  0xFEFF,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFF7F,  0xFFFE, },
{	 0x0282,  0xFF7E,  0xFF7F,  0xFF7E,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0282,  0xFF7E,  0xFF7F,  0xFF7F,  0xFF7F,  0xFFFF,  0xFF7E,  0xFFFE, },
{	 0x0283,  0xFF7F,  0xFF7F,  0xFF7E,  0xFF7E,  0xFF7F,  0xFFFF,  0xFF7F, },
{	 0x0283,  0xFF7E,  0xFF7E,  0xFFFF,  0xFF7F,  0xFF7F,  0xFFFE,  0xFF7E, },
{	 0x0285,  0xFF7D,  0xFF7F,  0xFF7E,  0xFFFE,  0xFF7F,  0xFF7F,  0xFFFF, },
},{{	 0x058B,  0xFF7E,  0xFF7E,  0xFF7E,  0xFF7F,  0xFFFE,  0xFF7E,  0xFFFF, },
{	 0x0285,  0xFEFF,  0xFFFD,  0xFF7F,  0xFF7D,  0xFFFF,  0xFF7F,  0xFFFE, },
{	 0x0206,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7F,  0xFF7E,  0xFFFE,  0xFF7F, },
{	 0x0286,  0xFF7E,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7F,  0xFFFF,  0xFF7E, },
{	 0x0286,  0xFF7E,  0xFF7E,  0xFF7D,  0xFFFF,  0xFF7E,  0xFFFE,  0xFF7F, },
{	 0x0207,  0xFF7D,  0xFFFE,  0xFF7E,  0xFF7E,  0xFFFE,  0xFF7F,  0xFFFD, },
{	 0x0209,  0xFF7D,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFE,  0xFF7E,  0xFFFF, },
{	 0x0208,  0xFF7D,  0xFF7E,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFE,  0xFFFE, },
},{{	 0x0416,  0xFFFD,  0xFF7D,  0xFF7F,  0xFFFD,  0xFF7E,  0xFFFE,  0xFF7F, },
{	 0x0209,  0xFF7D,  0xFFFD,  0xFF7D,  0xFF7F,  0xFFFD,  0xFFFE,  0xFF7E, },
{	 0x020A,  0xFF7D,  0xFF7D,  0xFFFE,  0xFF7D,  0xFFFE,  0xFF7E,  0xFFFE, },
{	 0x020A,  0xFF7D,  0xFF7D,  0xFFFD,  0xFF7E,  0xFFFE,  0xFF7D,  0xFFFF, },
{	 0x018B,  0xFF7D,  0xFFFD,  0xFF7D,  0xFFFD,  0xFF7E,  0xFFFE,  0xFFFD, },
{	 0x018D,  0xFF7C,  0xFFFC,  0xFF7E,  0xFFFE,  0xFF7D,  0xFFFD,  0xFFFF, },
{	 0x018C,  0xFF7C,  0xFF7D,  0xFFFD,  0xFF7D,  0xFFFE,  0xFFFE,  0xFF7D, },
{	 0x018D,  0xFFFD,  0xFF7C,  0xFFFD,  0xFF7E,  0xFFFD,  0xFF7D,  0xFFFF, },
},},{{{	 0x03F8,  0x0001,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0x0000,  0xFF80, },
{	 0x017D,  0xFF7F,  0x0000,  0xFF80,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x00FF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF80,  0xFFFF, },
{	 0x00FF,  0xFFFF,  0xFF80,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x00FF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x00FF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x0380,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x017F,  0xFF7F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0100,  0xFFFF,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x00FF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFF7E,  0xFFFF,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0101,  0xFF7F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFE, },
{	 0x0101,  0xFF7E,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x0286,  0xFFFF,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0101,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7E, },
{	 0x0103,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0101,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0103,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF, },
{	 0x0103,  0xFF7F,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF, },
},{{	 0x020C,  0xFFFF,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7E, },
{	 0x0104,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0103,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7E,  0xFFFF, },
{	 0x0104,  0xFF7E,  0xFFFF,  0xFFFD,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFD, },
{	 0x0085,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0083,  0xFFFF,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0085,  0xFFFD,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFE,  0xFFFE, },
{	 0x0085,  0xFFFF,  0xFF7D,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFE, },
},},{{{	 0x027A,  0x0000,  0x0000,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFF7F,  0xFFFF,  0x0000,  0xFFFF,  0x0000,  0xFF7F, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x00FF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0x0000,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
},{{	 0x0200,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x007F,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFF,  0xFFFE,  0xFF7F,  0xFFFF, },
},{{	 0x0184,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE, },
{	 0x0080,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFE,  0xFFFE,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFF7E,  0xFFFE,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFE,  0xFFFE, },
{	 0x0081,  0xFFFF,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0001,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF, },
},{{	 0x0108,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE,  0xFF7E, },
{	 0x0083,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F, },
{	 0x0081,  0xFFFF,  0xFFFE,  0xFFFE,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFD,  0xFF7F,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFFFF,  0xFFFF,  0xFFFF,  0xFF7F,  0xFFFE,  0xFFFE,  0xFFFF, },
{	 0x0083,  0xFFFE,  0xFFFE,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFE, },
{	 0x0082,  0xFFFF,  0xFF7F,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF,  0xFFFF, },
{	 0x0081,  0xFF7F,  0xFFFF,  0xFFFF,  0xFFFD,  0xFFFF,  0xFFFF,  0xFFFF, },
},},};
const uint16_t angle_12C_double[8][4][8][4] = {
{{{	 0x017C,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0001,  0x0001,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0081,  0x0000,  0xFF80,  0x0001, },
},{{	 0x0180,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0102,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFF7F, },
{	 0x0082,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0081,  0xFF7F,  0x0000,  0x0000, },
{	 0x0082,  0xFF80,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
},{{	 0x0086,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFE, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0xFF80, },
{	 0x0082,  0xFFFE,  0xFF80,  0x0000, },
},},{{{	 0x017C,  0xFF80,  0x0000,  0x0001, },
{	 0x0000,  0x0001,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
},{{	 0x0100,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0082,  0xFF80,  0x0000,  0xFFFF, },
{	 0x0081,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0082,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0086,  0xFFFE,  0x0000,  0xFF80, },
{	 0x0082,  0x0000,  0xFFFF,  0xFF7F, },
{	 0x0082,  0x0000,  0xFF80,  0xFFFF, },
{	 0x0081,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
},},{{{	 0x00FE,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0082,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0081,  0xFFFF,  0xFF80,  0x0000, },
{	 0x0082,  0xFF80,  0x0000,  0xFFFE, },
{	 0x0082,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0004,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFE,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
},{{	 0x0080,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0081,  0x0000,  0xFFFF,  0xFF80, },
{	 0x0082,  0x0000,  0xFF80,  0x0000, },
},{{	 0x0082,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
},{{	 0x0004,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0x0001,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
},{{	 0x0080,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0xFFFF,  0x0000,  0xFFFF, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0004,  0xFFFF,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
},},{{{	 0x007E,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0xFFFF,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFE,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0xFFFE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0001,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0xFFFF, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},},{{{	 0xFFFE,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
},{{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0x0000,  0xFFFF,  0x0000, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0xFF80, },
{	 0x0080,  0x0000,  0xFF80,  0x0000, },
{	 0x0080,  0xFF80,  0x0000,  0x0000, },
},{{	 0xFF82,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0000,  0x0000,  0x0000,  0x0000, },
{	 0x0001,  0xFFFF,  0x0000,  0x0000, },
{	 0x0002,  0x0000,  0xFFFF,  0xFFFF, },
{	 0x0002,  0x0000,  0x0000,  0x0000, },
},},};
