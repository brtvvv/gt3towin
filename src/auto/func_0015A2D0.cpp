#define DEF_func_0015A2D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003214C8 __attribute__((section(".data")));
extern M2C_UNK D_003214E0 __attribute__((section(".data")));

extern "C" void func_0015A2D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003214C8;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003214E0;
    func_00151848((s32) arg0, 0);
    if (arg1 & 1) {
        func_00150F60((s32) arg0);
    }
}
