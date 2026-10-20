#define DEF_func_001A7388
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332260 __attribute__((section(".data")));

extern "C" s32 func_001A7388(s32 arg0) {
    func_0022CFC0(arg0);
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00332260;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg0 + 0x24);
    M2C_FIELD(arg0, s32 *, 0xC) = 0x100;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}
