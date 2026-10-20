#define DEF_func_00233E48
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00233E48(s32 unused0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, u8 *, 0xB4) = (u8) M2C_FIELD(arg2, u8 *, 0x13);
    M2C_FIELD(arg1, u8 *, 0xB2) = (u8) M2C_FIELD(arg2, u8 *, 0x14);
    M2C_FIELD(arg1, u8 *, 0xB3) = (u8) M2C_FIELD(arg2, u8 *, 0x15);
    M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg2, u16 *, 0x16);
    M2C_FIELD(arg1, u16 *, 0xD2) = (u16) M2C_FIELD(arg2, u16 *, 0x18);
    M2C_FIELD(arg1, u16 *, 0xD4) = (u16) M2C_FIELD(arg2, u16 *, 0x1A);
    M2C_FIELD(arg1, u16 *, 0xCE) = (u16) M2C_FIELD(arg2, u16 *, 0x1C);
    M2C_FIELD(arg1, u16 *, 0xD0) = (u16) M2C_FIELD(arg2, u16 *, 0x1E);
    M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg2, u16 *, 0x20);
}
