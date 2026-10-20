#define DEF_func_001A4C90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00331A80 __attribute__((section(".data")));

extern "C" void func_001A4C90(void *arg0, s32 arg1) {
    func_001B1128(arg0 + 0x54, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_00331A80;
    func_001B1580((s32) arg0, arg1);
}
