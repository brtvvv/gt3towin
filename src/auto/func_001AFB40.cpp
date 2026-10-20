#define DEF_func_001AFB40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332DC0 __attribute__((section(".data")));

extern "C" void func_001AFB40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_00332DC0;
    func_001C0888((s32) (arg0 + 4));
    func_001B1128((s32) (arg0 + 0x34), 2);
    func_001B1580((s32) arg0, arg1);
}
