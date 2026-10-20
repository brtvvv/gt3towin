#define DEF_func_0017BF00
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003292B0 __attribute__((section(".data")));

extern "C" void func_0017BF00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xFB4) = &D_003292B0;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
