#define DEF_func_00187548
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032C860 __attribute__((section(".data")));

extern "C" void func_00187548(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032C860;
    func_00232BB8((s32) (arg0 + 0x70), 2);
    func_0017A630((s32) arg0, arg1);
}
