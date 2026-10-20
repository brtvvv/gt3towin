#include "m2c.h"
extern "C" M2C_UNK func_001C03B0(void *, s32);                 /* extern */
extern "C" M2C_UNK func_001C0480(void *, s32);                 /* extern */

extern "C" void *func_001B0BC8(s32 arg0, void *arg1, s32 arg2) {
    if (arg2 != 0) {
        func_001C0480(arg1, arg0);
    } else {
        func_001C03B0(arg1, arg0);
    }
    M2C_FIELD(arg1, s32 *, 0x9C) = arg0;
    M2C_FIELD(arg1, s32 *, 0xA0) = 3;
    return arg1;
}
