#define DEF_func_002302A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00343328 __attribute__((section(".data")));

extern "C" void func_002302A8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00343328;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
