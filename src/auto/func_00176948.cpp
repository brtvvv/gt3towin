#include "m2c.h"
extern "C" void func_00176948(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    if (arg1 == 2) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}
