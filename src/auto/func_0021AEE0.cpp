#include "m2c.h"
extern "C" s32 func_00212A70();                                /* extern */

extern "C" void func_0021AEE0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = func_00212A70();
}
