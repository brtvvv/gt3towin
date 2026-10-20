#include "m2c.h"
extern "C" M2C_UNK func_001BA3B8(void *, s32);                 /* extern */
extern "C" s32 func_001C3670(s32);                             /* extern */

extern "C" void func_001D8950(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_001C3670(M2C_FIELD(arg0, s32 *, 0x100));
    if (temp_v0 != 0) {
        func_001BA3B8(arg0, temp_v0);
    }
}
