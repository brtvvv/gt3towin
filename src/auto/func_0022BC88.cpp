#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */
extern s32 D_00354498;

extern "C" void func_0022BC88(void) {
    s32 temp_a0;

    temp_a0 = D_00354498;
    if (temp_a0 != 0) {
        D_00354498 = 0;
        func_0026D5B8(temp_a0);
    }
}
