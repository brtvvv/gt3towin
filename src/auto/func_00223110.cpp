#define DEF_func_00223110
#include "m2c.h"
#include "funcs.h"

extern "C" void func_00223110(void *arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1, f32 fparg2) {
    M2C_FIELD(arg0, s32 *, 0x178) = (s32) (arg1 - 1);
    M2C_FIELD(arg0, s32 *, 0x17C) = (s32) (arg2 - 2);
    M2C_FIELD(arg0, f32 *, 0x180) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x184) = fparg1;
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) (fparg2 * 0.017453292f);
}
