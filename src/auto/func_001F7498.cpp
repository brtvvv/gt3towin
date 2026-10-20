#include "m2c.h"
extern "C" void func_001F7498(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) ((M2C_FIELD(arg1, f32 *, 0xE64) + M2C_FIELD(arg1, f32 *, 0xE68)) / M2C_FIELD(arg1, f32 *, 0xE50));
}
