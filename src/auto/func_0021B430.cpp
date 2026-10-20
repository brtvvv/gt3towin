#define DEF_func_0021B430
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0021B430(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x10) = func_0021A468((s32) arg0);
    M2C_FIELD(arg1, s32 *, 0x14) = func_00216730((s32) (arg0 + 0x1F550));
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (func_0021A938((s32) arg0) * 100.0f);
}
