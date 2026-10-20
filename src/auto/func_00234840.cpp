#define DEF_func_00234840
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00234840(s32 unused0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, u16 *, 0xA4) = (u16) ((s32) (M2C_FIELD(arg1, u16 *, 0xA4) * M2C_FIELD(arg2, u8 *, 0x11)) / 100);
    M2C_FIELD(arg1, u8 *, 0xA6) = (u8) ((s32) (M2C_FIELD(arg1, u8 *, 0xA6) * M2C_FIELD(arg2, u8 *, 0x12)) / 100);
}
