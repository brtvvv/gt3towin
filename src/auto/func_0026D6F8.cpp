#define DEF_func_0026D6F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349020 __attribute__((section(".data")));

extern "C" s32 func_0026D6F8(s32 arg0, s32 arg1, s32 arg2) {
    func_0026C400(arg0);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg2 - 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00349020;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}
