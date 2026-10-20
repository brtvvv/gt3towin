#define DEF_func_00234710
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00234710(s32 unused0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, s16 *, 0x2A) = (s16) ((s32) (M2C_FIELD(arg1, s16 *, 0x2A) * M2C_FIELD(arg2, u16 *, 0x12)) / 1000);
    M2C_FIELD(arg1, u8 *, 0x2E) = (u8) ((s32) (M2C_FIELD(arg1, u8 *, 0x2E) * M2C_FIELD(arg2, u8 *, 0x11)) / 100);
}
