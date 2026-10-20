#define DEF_func_001C0218
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00335EC0 __attribute__((section(".data")));
extern M2C_UNK D_00335EE0 __attribute__((section(".data")));

extern "C" void func_001C0218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x108) = &D_00335EC0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00335EE0;
    func_001BAB98((s32) (arg0 + 0x270), 2);
    func_001BAB98((s32) (arg0 + 0x170), 2);
    func_001B4D68((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
