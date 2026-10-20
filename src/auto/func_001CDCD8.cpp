#include "m2c.h"
extern "C" M2C_UNK func_0025FAA8(s32);                         /* extern */

extern "C" void func_001CDCD8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_a0 != 0) {
        func_0025FAA8(temp_a0);
    }
}
