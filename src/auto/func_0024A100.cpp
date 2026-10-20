#include "m2c.h"
extern "C" void func_0024A100(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    M2C_FIELD(arg0, s8 *, 0x1E) = 1;
    M2C_FIELD(arg0, f32 *, 0x18) = 1.0f;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 6) != 0);
    if (*M2C_FIELD(arg0, f32 **, 0xC) < M2C_FIELD(arg0, f32 *, 0x14)) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 1;
    }
}
