#define DEF_func_001B2368
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003336F8 __attribute__((section(".data")));
extern M2C_UNK D_00353D50 __attribute__((section(".data")));

extern "C" void func_001B2368(s32 arg0, s32 arg1) {
    func_001B18E8(arg0, arg1, (s32) &D_003336F8, (s32) &D_00353D50);
}
