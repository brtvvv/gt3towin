#define DEF_func_00125AA8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00311990 __attribute__((section(".data")));

extern "C" void func_00125AA8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00311990;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
