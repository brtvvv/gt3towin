#define DEF_func_002323F0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003435E0 __attribute__((section(".data")));

extern "C" void func_002323F0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_0026D5B8(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 4) = func_00232480((s32) arg0, (s32) &D_003435E0);
}
