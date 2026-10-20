#define DEF_func_00232438
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003435F8 __attribute__((section(".data")));

extern "C" void func_00232438(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        func_0026D5B8(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 8) = func_00232480((s32) arg0, (s32) &D_003435F8);
}
