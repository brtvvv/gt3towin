#define DEF_func_0015A760
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031F960 __attribute__((section(".data")));

extern "C" void func_0015A760(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031F960;
    func_0023D140((s32) arg0, 0);
    if (arg1 & 1) {
        func_00150F60((s32) arg0);
    }
}
