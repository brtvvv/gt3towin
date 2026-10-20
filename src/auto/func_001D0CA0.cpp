#include "m2c.h"
extern "C" void func_001D0CA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
}
