#include "m2c.h"
extern "C" M2C_UNK func_0019CDF0(s32, f32, f32, f32, f32, f32, f32, f32); /* extern */

extern "C" void func_001A9A88(void *arg0, s32 arg1) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0xE6C);
    func_0019CDF0(arg1, M2C_FIELD(arg0, f32 *, 0xE60) * temp_f0, M2C_FIELD(arg0, f32 *, 0xE64) * temp_f0, M2C_FIELD(arg0, f32 *, 0xE68) * temp_f0, M2C_FIELD(arg0, f32 *, 0xE70), M2C_FIELD(arg0, f32 *, 0xE74), M2C_FIELD(arg0, f32 *, 0xE78), M2C_FIELD(arg0, f32 *, 0xE7C));
}
