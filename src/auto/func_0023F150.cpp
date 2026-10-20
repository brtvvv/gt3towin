#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */

extern "C" void func_0023F150(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_a0 != 0) {
        func_0026D5B8(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
