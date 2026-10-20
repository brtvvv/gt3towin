#include "m2c.h"
extern "C" M2C_UNK func_0022B010(s32);                         /* extern */

extern "C" void func_0018C2A0(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s8 *, 0) = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x208);
    if (temp_v0 != 0) {
        func_0022B010(temp_v0);
    }
}
