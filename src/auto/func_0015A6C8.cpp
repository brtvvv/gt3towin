#define DEF_func_0015A6C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003216D8 __attribute__((section(".data")));

extern "C" s32 func_0015A6C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_001514F0(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x20) = arg4;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003216D8;
    return arg0;
}
