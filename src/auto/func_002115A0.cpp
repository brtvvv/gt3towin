#include "m2c.h"
extern "C" void func_002115A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x130) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (arg1 != 0);
}
