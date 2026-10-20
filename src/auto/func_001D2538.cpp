#include "m2c.h"
extern "C" void func_001D2538(s32 arg0, s32 arg1, f32 fparg0) {
    M2C_FIELD(((arg1 * 0x10) + arg0), f32 *, 0x4C) = fparg0;
}
