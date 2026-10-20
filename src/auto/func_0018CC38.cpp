#define DEF_func_0018CC38
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032D038 __attribute__((section(".data")));

extern "C" void func_0018CC38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0032D038;
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
