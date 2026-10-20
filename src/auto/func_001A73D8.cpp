#define DEF_func_001A73D8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332260 __attribute__((section(".data")));

extern "C" void func_001A73D8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00332260;
    func_0022CFF0((s32) arg0, arg1);
}
