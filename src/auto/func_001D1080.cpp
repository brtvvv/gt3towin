#define DEF_func_001D1080
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D1080(s32 arg0, s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    func_001D0F38(arg0, arg1, fparg0, fparg1, fparg2, fparg3);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (M2C_FIELD(arg1, f32 *, 0x1C) * 0.875f);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) (M2C_FIELD(arg1, f32 *, 0x28) * 0.875f);
}
