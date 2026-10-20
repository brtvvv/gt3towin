#include "m2c.h"
extern "C" s32 func_00110078();                                /* extern */

extern "C" void func_001100F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AA4) = func_00110078();
}
