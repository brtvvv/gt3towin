#define DEF_func_0019FDF8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F49E0 __attribute__((section(".data")));
extern M2C_UNK D_00331770 __attribute__((section(".data")));
extern M2C_UNK D_00331788 __attribute__((section(".data")));

extern "C" void *func_0019FDF8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &D_00331788;
    temp_v0 = func_0027D510(0x2A00);
    var_v1 = temp_v0;
    var_a0 = 0x7F;
    do {
        *(s32 *)var_v1 = 0;
        var_a0 -= 1;
        var_v1 += 0x54;
    } while (var_a0 != -1);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    temp_v0_2 = func_002428C8((s32) &D_00331770, 0, 0, 1, (s32) &D_002F49E0);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0_2;
    func_00249EB0(temp_v0_2);
    func_0019FEF8((s32) arg0);
    return arg0;
}
