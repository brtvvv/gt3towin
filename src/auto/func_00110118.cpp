#include "m2c.h"
extern "C" s32 func_00110078();                                /* extern */

extern "C" void func_00110118(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AC4) = func_00110078();
}
