#define DEF_func_00203A48
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033FE60 __attribute__((section(".data")));

extern "C" void func_00203A48(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_0033FE60;
    func_001FF748((s32) arg0, arg1);
}
