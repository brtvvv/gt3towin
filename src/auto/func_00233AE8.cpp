#define DEF_func_00233AE8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00233AE8(s32 unused0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, u8 *, 0xDE) = (u8) M2C_FIELD(arg2, u8 *, 0x11);
    M2C_FIELD(arg1, u8 *, 0xDF) = (u8) M2C_FIELD(arg2, u8 *, 0x12);
    M2C_FIELD(arg1, u8 *, 0xE0) = (u8) M2C_FIELD(arg2, u8 *, 0x13);
}
