#include "m2c.h"
extern "C" M2C_UNK func_001B7510(s32);                         /* extern */
extern "C" M2C_UNK func_0022AEF8(s32);                         /* extern */

extern "C" void func_0013A5A0(s32 arg0) {
    func_001B7510(arg0 + 0x28C);
    func_0022AEF8(arg0 + 0xDE8);
}
