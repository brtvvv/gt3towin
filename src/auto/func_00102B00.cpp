#define DEF_func_00102B00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A4C8 __attribute__((section(".data")));

extern "C" void func_00102B00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x4020) = &D_0030A4C8;
    func_0025EB50((s32) arg0, arg1);
}
