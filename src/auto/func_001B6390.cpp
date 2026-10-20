#define DEF_func_001B6390
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003346C8 __attribute__((section(".data")));
extern M2C_UNK D_003346E0 __attribute__((section(".data")));

extern "C" void func_001B6390(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xB8) = &D_003346C8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_003346E0;
    func_001C9CB0((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
