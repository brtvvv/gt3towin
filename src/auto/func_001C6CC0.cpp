#define DEF_func_001C6CC0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00337EF0 __attribute__((section(".data")));

extern "C" s32 func_001C6CC0(s32 arg0, s32 arg1) {
    func_001C0298(arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00337EF0;
    return arg0;
}
