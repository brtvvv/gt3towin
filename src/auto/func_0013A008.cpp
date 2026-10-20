#define DEF_func_0013A008
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003198B8 __attribute__((section(".data")));

extern "C" s32 func_0013A008(s32 arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1) {
    func_001396B8(arg0, arg1, arg2, fparg0, fparg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_003198B8;
    return arg0;
}
