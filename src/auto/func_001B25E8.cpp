#define DEF_func_001B25E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00353D80 __attribute__((section(".data")));

extern "C" void func_001B25E8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    if (arg1 != 0) {
        temp_s0 = arg0 + 0x70;
        func_0027FDBC(temp_s0, arg1);
        if (arg2 != 0) {
            func_0027F9CC(temp_s0, (s32) &D_00353D80);
            func_0027F9CC(temp_s0, arg2);
        }
        func_001BAE10(M2C_FIELD(arg0, s32 *, 0x40), temp_s0);
    }
}
