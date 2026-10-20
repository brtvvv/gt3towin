#include "m2c.h"
extern "C" s32 func_001C80C8(s32);                             /* extern */
extern "C" M2C_UNK func_0027FDBC(s32, s32);                    /* extern */

extern "C" void func_001B7820(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_001C80C8(arg0 + 0x1E4);
    if (temp_v0 == 0) {
        func_0027FDBC(arg1, arg0 + 0xA20);
        return;
    }
    func_0027FDBC(arg1, temp_v0);
}
