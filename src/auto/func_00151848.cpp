#define DEF_func_00151848
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031F818 __attribute__((section(".data")));
extern M2C_UNK D_0031F830 __attribute__((section(".data")));

extern "C" void func_00151848(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0031F818;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031F830;
    func_001C05F8(M2C_FIELD(arg0, s32 *, 0x2C), 0);
    func_00151010((s32) arg0, 0);
    if (arg1 & 1) {
        func_00150F60((s32) arg0);
    }
}
