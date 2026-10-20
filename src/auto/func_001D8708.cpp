#include "m2c.h"
extern "C" s32 func_001C3670(s32);                             /* extern */
extern "C" M2C_UNK func_001D8748(void *, M2C_UNK, M2C_UNK);    /* extern */

extern "C" void func_001D8708(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_001C3670(M2C_FIELD(arg0, s32 *, 0x100));
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x10C) = temp_v0;
        func_001D8748(arg0, 0, 0);
    }
}
