#define DEF_func_00154D60
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003203D0 __attribute__((section(".data")));
extern M2C_UNK D_003203E8 __attribute__((section(".data")));

extern "C" void func_00154D60(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_003203D0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003203E8;
    func_00151848((s32) arg0, 0);
    if (arg1 & 1) {
        func_00150F60((s32) arg0);
    }
}
