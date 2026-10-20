#define DEF_func_00270770
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349130 __attribute__((section(".data")));

extern "C" void *func_00270770(void *arg0, u32 arg1) {
    s32 var_a2;
    s8 *temp_v0;
    u32 var_a1;

    var_a1 = arg1;
    var_a2 = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0xC0) = &D_00349130;
    do {
        temp_v0 = arg0 + var_a2;
        var_a1 = var_a1 >> (var_a2 * 8);
        var_a2 += 1;
        *temp_v0 = (s8) var_a1;
    } while (var_a2 < 4);
    return arg0;
}
