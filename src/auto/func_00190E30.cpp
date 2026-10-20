#define DEF_func_00190E30
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F670 __attribute__((section(".data")));

extern "C" void func_00190E30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_0032F670;
    func_0022D9E0((s32) arg0, arg1);
}
