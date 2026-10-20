#include "m2c.h"
extern "C" void func_001F9580(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg1 + 0xBBA8);
}
