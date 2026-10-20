#define DEF_func_0027E240
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349F28 __attribute__((section(".data")));

extern "C" void func_0027E240(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00349F28;
    }
}
