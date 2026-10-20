#define DEF_func_001CFF80
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338D68 __attribute__((section(".data")));

extern "C" s32 func_001CFF80(s32 arg0) {
    func_001BC400(arg0);
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00338D68;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    return arg0;
}
