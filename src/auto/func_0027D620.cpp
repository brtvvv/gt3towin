#define DEF_func_0027D620
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349DA8 __attribute__((section(".data")));

extern "C" void func_0027D620(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = arg2;
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00349DA8;
    }
}
