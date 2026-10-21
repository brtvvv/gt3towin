#define DEF_func_00190DB8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00190DB8(void *arg0) {
    s32 temp_a2;
    s32 temp_a4;
    s32 var_a1;
    u32 temp_a2_2;
    u32 var_a0;
    u32 var_a5;
    u32 var_v1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0);
    var_a5 = 0;
    var_v1 = (temp_a2 + 0x3F) & ~0x3F;
    temp_a4 = (M2C_FIELD(arg0, s32 *, 8) + 0x3F) & ~0x3F;
    temp_a2_2 = temp_a2 + M2C_FIELD(arg0, s32 *, 4);
    var_a0 = var_v1 + temp_a4;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    if (temp_a2_2 >= var_a0) {
        var_a1 = 0;
        do {
            *(s32 *)var_v1 = var_a5;
            var_a1 += 1;
            var_a5 = var_v1;
            var_v1 = var_a0;
            var_a0 += temp_a4;
        } while (temp_a2_2 >= var_a0);
        M2C_FIELD(arg0, s32 *, 0x14) = var_a1;
    }
    M2C_FIELD(arg0, u32 *, 0xC) = var_a5;
}
