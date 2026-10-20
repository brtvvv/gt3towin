#define DEF_func_00185360
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C178 __attribute__((section(".data")));

extern "C" void func_00185360(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032C178;
    func_00187000((s32) arg0, arg1);
}
