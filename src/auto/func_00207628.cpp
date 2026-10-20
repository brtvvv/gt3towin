#define DEF_func_00207628
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340718 __attribute__((section(".data")));

extern "C" void func_00207628(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x44C) = &D_00340718;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
