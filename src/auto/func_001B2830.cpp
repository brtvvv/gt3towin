#define DEF_func_001B2830
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00353D78 __attribute__((section(".data")));

extern "C" void func_001B2830(void *arg0) {
    func_001BAE10(M2C_FIELD(arg0, s32 *, 0x44), (s32) &D_00353D78);
}
