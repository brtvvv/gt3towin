#define DEF_func_0019EF00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FBF8 __attribute__((section(".data")));

extern "C" void func_0019EF00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0032FBF8;
    func_0019D958((s32) arg0, arg1);
}
