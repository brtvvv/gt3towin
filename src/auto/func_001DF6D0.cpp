#define DEF_func_001DF6D0
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001DF6D0(void *arg0, void *arg1) {
    f32 temp_f0;

    M2C_FIELD(arg0, f32 *, 0x78) = (f32) ((f32) M2C_FIELD(arg1, u8 *, 0x20) * 0.01f);
    temp_f0 = (f32) M2C_FIELD(arg1, u8 *, 0x21) * 0.2777778f;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (temp_f0 / 50.000004f);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) (((f32) M2C_FIELD(arg1, u8 *, 0x22) * 0.01f * 50.000004f) / (27.777779f - temp_f0));
}
