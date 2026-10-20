#define DEF_func_00144A90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D538 __attribute__((section(".data")));

extern "C" s32 func_00144A90(s32 arg0, s32 arg1) {
    void *temp_a0;

    func_001430F8(arg0, arg1);
    temp_a0 = arg0 + 0x10;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D538;
    M2C_FIELD(temp_a0, u16 *, 0x1C) = (u16) (M2C_FIELD(temp_a0, u16 *, 0x1C) | 8);
    return arg0;
}
