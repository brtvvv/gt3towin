#define DEF_func_002050F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00340190 __attribute__((section(".data")));

extern "C" void func_002050F8(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_00340190;
    func_001FF748((s32) arg0, arg1);
}
