#include "m2c.h"
extern "C" M2C_UNK func_001B26A8(void *, s32, M2C_UNK, s32);   /* extern */

extern "C" void func_001B3138(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x908) == 0) {
        if (arg1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x8D8) = arg2;
        }
        func_001B26A8(arg0 + ((arg1 * 0xF0) + 0x240), arg2, 0, arg1);
    }
}
