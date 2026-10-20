#define DEF_func_00159B20
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321348 __attribute__((section(".data")));
extern M2C_UNK D_00321358 __attribute__((section(".data")));
extern M2C_UNK D_00321520 __attribute__((section(".data")));
extern M2C_UNK D_00321538 __attribute__((section(".data")));

extern "C" s32 func_00159B20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00159678(arg0, arg1, arg2, arg3, (s32) &D_00321348, (s32) &D_00321358);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00321520;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00321538;
    return arg0;
}
