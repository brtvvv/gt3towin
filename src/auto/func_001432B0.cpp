#include "m2c.h"
extern "C" void func_001432B0(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}
