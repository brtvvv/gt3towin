#include "m2c.h"
extern "C" M2C_UNK func_0026D5B8(s32);                         /* extern */

extern "C" void func_001C33B0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        func_0026D5B8(temp_v0);
    }
}
