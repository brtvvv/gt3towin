#define DEF_func_00102AC8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A4C8 __attribute__((section(".data")));

extern "C" s32 func_00102AC8(s32 arg0) {
    func_0025EB20(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x4020) = &D_0030A4C8;
    return arg0;
}
