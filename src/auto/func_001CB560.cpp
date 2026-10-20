#define DEF_func_001CB560
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001CB560(s32 unused0, void *arg1, void *arg2, s32 arg3) {
    s32 temp_v1;
    void *var_a2;

    var_a2 = arg2;
    M2C_FIELD(arg1, s32 *, 0x28) = arg3;
    if (var_a2 != NULL) {
        temp_v1 = var_a2 + 0x320;
        do {
            M2C_FIELD(var_a2, s32 *, 0x8C) = arg3;
            var_a2 += 0xC8;
        } while ((s32) var_a2 < temp_v1);
    }
}
