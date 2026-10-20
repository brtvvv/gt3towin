#include "m2c.h"
extern "C" s32 func_001ED420(s32);                             /* extern */

extern "C" void func_00177E00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x11F4) = func_001ED420(M2C_FIELD(arg0, s32 *, 0x18));
}
