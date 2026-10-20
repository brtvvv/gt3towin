#define DEF_func_00182B78
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032A808 __attribute__((section(".data")));

extern "C" void func_00182B78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032A808;
    func_001822B8((s32) arg0, arg1);
}
