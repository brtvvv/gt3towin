#define DEF_func_001CD518
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338A08 __attribute__((section(".data")));

extern "C" void func_001CD518(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &D_00338A08;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
