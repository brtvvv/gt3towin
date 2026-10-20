#define DEF_func_00224E48
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003428D8 __attribute__((section(".data")));

extern "C" void func_00224E48(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_003428D8;
    func_00226D78((s32) arg0, arg1);
}
