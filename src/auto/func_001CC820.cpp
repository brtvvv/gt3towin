#include "m2c.h"
extern "C" void func_001CC820(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (arg2 != 0);
}
