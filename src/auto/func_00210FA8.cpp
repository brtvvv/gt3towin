#define DEF_func_00210FA8
#include "m2c.h"
#include "funcs.h"
struct VC_0_1_0 { virtual void d0(); virtual void v1(); };
extern "C" void func_00210FA8(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_lo;

    if (arg1 == 0) {
        ((VC_0_1_0 *)(arg0))->v1();
        return;
    }
    temp_a0 = arg1 - 1;
    temp_hi = temp_a0 % arg2;
    temp_lo = temp_a0 / arg2;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x24);
    temp_f0 = (f32) arg2;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x30);
    temp_f12 = (M2C_FIELD(arg0, f32 *, 0x28) - temp_f2) / temp_f0;
    temp_f14 = (temp_f1 - M2C_FIELD(arg0, f32 *, 0x2C)) / temp_f0;
    func_002566C8(temp_f2 + (temp_f12 * (f32) temp_hi), temp_f2 + (temp_f12 * (f32) (temp_hi + 1)), temp_f1 - (temp_f14 * (f32) (temp_lo + 1)), temp_f1 - (temp_f14 * (f32) temp_lo), M2C_FIELD(arg0, f32 *, 0x34), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C));
}
