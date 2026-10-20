#define DEF_func_00269A98
#include "m2c.h"
#include "funcs.h"
extern u16 D_00300FEE __attribute__((section(".data")));

extern "C" void func_00269A98(void *arg0) {
    s32 temp_v1;
    s32 var_a2;
    void *var_a1;

    var_a1 = arg0 + 0x28;
    var_a2 = 0xF;
    temp_v1 = (s32) (D_00300FEE * M2C_FIELD(arg0, u16 *, 4)) >> 0xE;
    M2C_FIELD(arg0, s16 *, 6) = (s16) temp_v1;
    do {
        var_a2 -= 1;
        M2C_FIELD(var_a1, s16 *, 0xA) = (s16) ((u32) (temp_v1 * M2C_FIELD(var_a1, u16 *, 8)) >> 0xE);
        var_a1 += 0x28;
    } while (var_a2 >= 0);
}
