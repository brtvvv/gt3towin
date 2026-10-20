#define DEF_func_00116E88
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030F850 __attribute__((section(".data")));
extern M2C_UNK D_0030F870 __attribute__((section(".data")));

extern "C" void func_00116E88(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x108) = &D_0030F850;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_0030F870;
    func_001B4D68((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
