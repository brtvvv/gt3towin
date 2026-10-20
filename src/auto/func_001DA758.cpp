#include "m2c.h"
extern "C" void func_001DA758(s32 arg0, s32 arg1, s8 arg2) {
    M2C_FIELD((arg0 + (arg1 >> 1)), s8 *, 0x62) = arg2;
}
