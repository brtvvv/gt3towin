#include "m2c.h"
extern "C" M2C_UNK func_001C0888(s32);                         /* extern */
extern "C" M2C_UNK func_001C08E0(s32);                         /* extern */

extern "C" void func_001B17B8(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 4;
    func_001C0888(temp_s0);
    func_001C08E0(temp_s0);
}
