#define DEF_func_001053D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030B298 __attribute__((section(".data")));

extern "C" void func_001053D0(void *arg0) {
    func_001BC578(M2C_FIELD(arg0, s32 *, 0x3A54), (s32) &D_0030B298);
    M2C_FIELD(arg0, s32 *, 0x3A54) = 0;
}
