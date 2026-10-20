#include "m2c.h"
extern void *D_003540F0;

extern "C" f32 func_001D27A0(void *arg0) {
    return (M2C_FIELD(arg0, f32 *, 0x28) - 0.0f) * ((f32) M2C_FIELD(D_003540F0, s32 *, 8) / 640.0f);
}
