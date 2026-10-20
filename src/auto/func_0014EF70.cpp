#define DEF_func_0014EF70
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031EDD8 __attribute__((section(".data")));
extern M2C_UNK D_00353198 __attribute__((section(".data")));

extern "C" void func_0014EF70(void) {
    M2C_FIELD(&D_00353198, M2C_UNK **, 0) = &D_0031EDD8;
    M2C_FIELD(&D_00353198, s32 (**)(s32, s32, s32, s32), 4) = func_001C4FF8;
}
