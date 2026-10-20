#define DEF_func_00179EE0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328D28 __attribute__((section(".data")));

extern "C" void func_00179EE0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x81C) = &D_00328D28;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
