#define DEF_func_001CE858
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338AB8 __attribute__((section(".data")));

extern "C" s32 func_001CE858(s32 arg0) {
    func_001BC400(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00338AB8;
    return arg0;
}
