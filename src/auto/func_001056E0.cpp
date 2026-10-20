#define DEF_func_001056E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030B418 __attribute__((section(".data")));

extern "C" void func_001056E0(void *arg0) {
    func_001BC578(M2C_FIELD(arg0, s32 *, 0x3A5C), (s32) &D_0030B418);
    M2C_FIELD(arg0, s32 *, 0x3A5C) = 0;
}
