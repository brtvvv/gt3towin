#define DEF_func_0022B3C0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342DA0 __attribute__((section(".data")));

extern "C" void func_0022B3C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x84) = &D_00342DA0;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
