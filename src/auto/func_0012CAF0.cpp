#include "m2c.h"
extern "C" M2C_UNK func_001B7340(s32);                         /* extern */
extern "C" M2C_UNK func_001B7510(s32);                         /* extern */

extern "C" void func_0012CAF0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x2F0;
    func_001B7340(temp_s0);
    func_001B7510(temp_s0);
}
