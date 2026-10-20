#include "m2c.h"
extern "C" M2C_UNK func_001C33B0(s32);                         /* extern */
extern "C" M2C_UNK func_001C81C8(s32);                         /* extern */

extern "C" void func_001B7510(s32 arg0) {
    func_001C33B0(arg0 + 0x158);
    func_001C33B0(arg0 + 0xD4);
    func_001C81C8(arg0 + 8);
}
