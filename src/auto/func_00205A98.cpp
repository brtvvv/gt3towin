#define DEF_func_00205A98
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003403C0 __attribute__((section(".data")));

extern "C" void func_00205A98(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_003403C0;
    func_002050F8((s32) arg0, arg1);
}
