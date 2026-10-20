#include "m2c.h"
extern "C" void func_00193030(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}
