#include "m2c.h"
extern "C" void func_00140150(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE40) = arg1;
    M2C_FIELD(arg0, s32 *, 0xE44) = (s32) (M2C_FIELD(arg0, s32 *, 0xE44) + 1);
}
