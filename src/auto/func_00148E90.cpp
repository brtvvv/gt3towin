#include "m2c.h"
extern "C" void func_00148E90(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 4) == 0) || (M2C_FIELD(arg0, s32 *, 0xFB6C) != arg1)) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 0xFB6C) = arg1;
    }
}
