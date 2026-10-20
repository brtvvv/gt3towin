#define DEF_func_0019F240
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FBA0 __attribute__((section(".data")));

extern "C" s32 func_0019F240(s32 arg0) {
    func_00197398(arg0);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0032FBA0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
