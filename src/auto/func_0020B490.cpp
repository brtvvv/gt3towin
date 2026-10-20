#define DEF_func_0020B490
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003409A0 __attribute__((section(".data")));

extern "C" void func_0020B490(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x98) = &D_003409A0;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
