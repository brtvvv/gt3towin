#define DEF_func_002223C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342820 __attribute__((section(".data")));

extern "C" void func_002223C8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x98C) = &D_00342820;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
