#define DEF_func_0018E1B0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032EB10 __attribute__((section(".data")));

extern "C" void func_0018E1B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032EB10;
    func_0017A630((s32) arg0, arg1);
}
