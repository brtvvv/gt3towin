#include "m2c.h"
extern "C" void func_00218AE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD((arg0 + ((arg1 << 5) + ((arg2 - 2) << 6))), s32 *, 0x190) = arg3;
}
