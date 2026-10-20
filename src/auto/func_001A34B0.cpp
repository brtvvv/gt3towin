#define DEF_func_001A34B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003318E8 __attribute__((section(".data")));

extern "C" void func_001A34B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003318E8;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
