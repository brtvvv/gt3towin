#define DEF_func_002432A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00345548 __attribute__((section(".data")));

extern "C" s32 func_002432A0(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s1 = arg0 + 0x10;
    temp_v0_2 = func_00243308(temp_s1, M2C_FIELD(arg0, s32 *, 8), arg1);
    if (temp_v0_2 != 0) {
        return M2C_FIELD(temp_v0_2, s32 *, 0x3C);
    }
    temp_v0 = func_00243308(temp_s1, M2C_FIELD(arg0, s32 *, 8), (s32) &D_00345548);
    if (!(temp_v0 != 0)) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x3C);
}
