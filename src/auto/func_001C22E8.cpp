#define DEF_func_001C22E8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003367B0 __attribute__((section(".data")));
extern M2C_UNK D_003367C8 __attribute__((section(".data")));

extern "C" void func_001C22E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xB8) = &D_003367B0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_003367C8;
    func_001BAB98((s32) (arg0 + 0x128), 2);
    func_001C9CB0((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
