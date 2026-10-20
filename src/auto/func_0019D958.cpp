#define DEF_func_0019D958
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330C30 __attribute__((section(".data")));

extern "C" void func_0019D958(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00330C30;
    func_0019D3A0((s32) arg0, arg1);
}
