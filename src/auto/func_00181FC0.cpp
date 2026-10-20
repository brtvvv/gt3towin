#define DEF_func_00181FC0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F16F0 __attribute__((section(".data")));

extern "C" void func_00181FC0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC88C) = func_0023A6D0((s32) &D_002F16F0, arg1);
}
