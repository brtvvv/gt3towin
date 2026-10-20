#include "m2c.h"
extern "C" M2C_UNK func_001A55C8(s32);                         /* extern */

extern "C" void func_00190D00(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_001A55C8(temp_a0);
    }
}
