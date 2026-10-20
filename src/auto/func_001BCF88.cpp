#include "m2c.h"
extern "C" s32 func_001BCF88(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    M2C_FIELD(arg2, f32 *, 0x38) = (f32) (M2C_FIELD(arg2, f32 *, 0x38) * M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg2, f32 *, 0x3C) = (f32) (M2C_FIELD(arg2, f32 *, 0x3C) * M2C_FIELD(arg1, f32 *, 0x14));
    return M2C_FIELD(arg1, s32 *, 0x2C);
}
