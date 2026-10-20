#define DEF_func_00116DD0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F7C8 __attribute__((section(".data")));
extern M2C_UNK D_0030F7E0 __attribute__((section(".data")));

extern "C" void func_00116DD0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xB8) = &D_0030F7C8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0030F7E0;
    func_001C9CB0((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
