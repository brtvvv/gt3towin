#include "m2c.h"
extern "C" void func_00140188(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE48) = arg1;
    M2C_FIELD(arg0, s32 *, 0xE4C) = (s32) (M2C_FIELD(arg0, s32 *, 0xE4C) + 1);
}
