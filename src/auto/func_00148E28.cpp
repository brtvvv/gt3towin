#include "m2c.h"
extern "C" void func_00148E28(void *arg0, s32 arg1) {
    if (arg1 != M2C_FIELD(arg0, s32 *, 0xFB74)) {
        M2C_FIELD(arg0, s32 *, 0xFB74) = arg1;
        M2C_FIELD(arg0, s32 *, 0xFB68) = -1;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}
