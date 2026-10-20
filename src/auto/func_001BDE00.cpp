#include "m2c.h"
extern "C" s32 func_001BDE00(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0x8C) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    M2C_FIELD(arg2, f32 *, 0x90) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg2, f32 *, 0x94) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg2, f32 *, 0x98) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    return M2C_FIELD(arg1, s32 *, 0x2C);
}
