#define DEF_func_0017AEF0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002BCB90 __attribute__((section(".data")));

extern "C" M2C_UNK *func_0017AEF0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_a0 != 0) {
        func_00190808(temp_a0);
    }
    return &D_002BCB90;
}
