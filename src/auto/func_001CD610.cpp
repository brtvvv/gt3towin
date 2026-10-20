#define DEF_func_001CD610
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003389F8 __attribute__((section(".data")));

extern "C" void func_001CD610(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_003389F8;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
