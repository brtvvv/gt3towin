#define DEF_func_001FF748
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033F858 __attribute__((section(".data")));

extern "C" void func_001FF748(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_0033F858;
    func_0020FDB8((s32) arg0, arg1);
}
