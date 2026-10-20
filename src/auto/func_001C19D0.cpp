#include "m2c.h"
extern "C" void func_001C19D0(void *arg0) {
    f32 temp_f6;

    temp_f6 = M2C_FIELD(arg0, f32 *, 0x108);
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) (((M2C_FIELD(arg0, f32 *, 0x28) + ((320.0f / temp_f6) - M2C_FIELD(arg0, f32 *, 0x10C))) * temp_f6) + (M2C_FIELD(arg0, f32 *, 0x38) * 0.5f));
    M2C_FIELD(arg0, f32 *, 0x118) = (f32) (((M2C_FIELD(arg0, f32 *, 0x34) + ((224.0f / temp_f6) - M2C_FIELD(arg0, f32 *, 0x110))) * temp_f6) + (M2C_FIELD(arg0, f32 *, 0x3C) * 0.5f));
}
