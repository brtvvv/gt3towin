#define DEF_func_00234C68
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00234C68(s32 unused0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, u16 *, 0x6C) = (u16) ((s32) (M2C_FIELD(arg1, u16 *, 0x6C) * M2C_FIELD(arg2, u8 *, 0x11)) / 100);
    M2C_FIELD(arg1, u16 *, 0x6A) = (u16) ((s32) (M2C_FIELD(arg1, u16 *, 0x6A) * M2C_FIELD(arg2, u8 *, 0x12)) / 100);
    M2C_FIELD(arg1, s16 *, 0xD2) = (s16) ((s32) (M2C_FIELD(arg1, s16 *, 0xD2) * M2C_FIELD(arg2, u8 *, 0x13)) / 100);
    M2C_FIELD(arg1, s16 *, 0xD4) = (s16) ((s32) (M2C_FIELD(arg1, s16 *, 0xD4) * M2C_FIELD(arg2, u8 *, 0x14)) / 100);
}
