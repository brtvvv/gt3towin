#define DEF_func_0015A440
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00321680 __attribute__((section(".data")));
extern M2C_UNK D_00321698 __attribute__((section(".data")));

extern "C" void func_0015A440(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00321680;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00321698;
    func_00151848((s32) arg0, 0);
    if (arg1 & 1) {
        func_00150F60((s32) arg0);
    }
}
