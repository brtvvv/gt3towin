#define DEF_func_001AE988
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332570 __attribute__((section(".data")));

extern "C" s32 func_001AE988(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00101A98(arg0);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00332570;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return arg0;
}
