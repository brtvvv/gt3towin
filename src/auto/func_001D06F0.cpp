#define DEF_func_001D06F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338EA0 __attribute__((section(".data")));

extern "C" s32 func_001D06F0(s32 arg0) {
    func_001BC400(arg0);
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00338EA0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    return arg0;
}
