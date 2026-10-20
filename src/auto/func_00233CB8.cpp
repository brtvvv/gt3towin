#define DEF_func_00233CB8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00233CB8(s32 unused0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, u8 *, 0x2C) = (u8) M2C_FIELD(arg2, u8 *, 0x10);
    M2C_FIELD(arg1, s8 *, 0x36) = (s8) (M2C_FIELD(arg2, u8 *, 0x12) + 0x7C);
    M2C_FIELD(arg1, s8 *, 0x37) = (s8) (M2C_FIELD(arg2, u8 *, 0x1E) + 0x7C);
    M2C_FIELD(arg1, u16 *, 0x24) = (u16) M2C_FIELD(arg2, u16 *, 0x18);
    M2C_FIELD(arg1, u16 *, 0x2A) = (u16) M2C_FIELD(arg2, u16 *, 0x1A);
    M2C_FIELD(arg1, u8 *, 0x2E) = (u8) M2C_FIELD(arg2, u8 *, 0x1C);
    M2C_FIELD(arg1, u8 *, 0x31) = (u8) M2C_FIELD(arg2, u8 *, 0x1D);
    M2C_FIELD(arg1, u16 *, 0x1A) = (u16) M2C_FIELD(arg2, u16 *, 0x14);
}
