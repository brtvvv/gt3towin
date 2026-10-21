#define DEF_func_001F7460
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001F7460(s32 arg0) {
    void *temp_a0;

    temp_a0 = arg0 + 0xC;
    M2C_FIELD(temp_a0, f32 *, 0x6C) = 0.5f;
    M2C_FIELD(temp_a0, f32 *, 4) = (f32) (M2C_FIELD(temp_a0, f32 *, 4) * 0.8f);
}
