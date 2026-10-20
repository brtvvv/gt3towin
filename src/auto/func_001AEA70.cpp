#include "m2c.h"
extern "C" M2C_UNK func_001AEA40();                            /* extern */

extern "C" void func_001AEA70(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_v1 + 1);
        if (temp_v1 >= 2) {
            func_001AEA40();
        }
    }
}
