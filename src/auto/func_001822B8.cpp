#define DEF_func_001822B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A2A8 __attribute__((section(".data")));

extern "C" void func_001822B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032A2A8;
    func_00232BB8((s32) (arg0 + 0x70), 2);
    func_0017A630((s32) arg0, arg1);
}
