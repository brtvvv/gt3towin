#define DEF_func_0017A630
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00328D88 __attribute__((section(".data")));

extern "C" void func_0017A630(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_00328D88;
    func_00239488((s32) arg0, 2);
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
