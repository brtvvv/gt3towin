#define DEF_func_00151B40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031F7C0 __attribute__((section(".data")));

extern "C" s32 func_00151B40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001514F0(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031F7C0;
    return arg0;
}
