#define DEF_func_00198D98
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00198D98(void *arg0, s32 arg1, f32 fparg0, f32 fparg1) {
    if (fparg0 > 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x1C) = fparg0;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) -fparg1;
    }
    if (arg1 != 0) {
        func_0019B9D8((s32) (arg0 + 0x48), arg1, 0x40);
    }
    M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
}
