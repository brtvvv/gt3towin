#define DEF_func_0023C6F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F2898 __attribute__((section(".data")));
extern M2C_UNK D_002F28D0 __attribute__((section(".data")));
extern M2C_UNK D_00345348 __attribute__((section(".data")));
extern M2C_UNK D_00345360 __attribute__((section(".data")));

extern "C" s32 func_0023C6F8(s32 arg0) {
    func_00246830(arg0, (s32) &D_00345348, (s32) &D_002F2898, (s32) &D_002F28D0, 0xE);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00345360;
    return arg0;
}
