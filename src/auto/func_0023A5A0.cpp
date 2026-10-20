#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */

extern "C" void func_0023A5A0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        func_0026D5B8(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0_2 != 0) {
        func_0026D5B8(temp_a0_2);
    }
}
