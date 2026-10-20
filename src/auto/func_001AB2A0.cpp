#define DEF_func_001AB2A0
#include "m2c.h"
#include "funcs.h"
extern f32 D_003518D0;

extern "C" void func_001AB2A0(void *arg0, f32 fparg0) {
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x6AC);
    temp_f22 = D_003518D0;
    temp_f23 = func_001EC340(temp_s0, fparg0);
    temp_f21 = func_001EC3A0(temp_s0, fparg0);
    func_00258FD4(temp_f23, temp_f21, func_001EC3D0(temp_s0, fparg0));
    func_002590C0(func_001EC460(temp_s0, fparg0) * temp_f22);
    func_00259080(func_001EC400(temp_s0, fparg0) * temp_f22);
    func_00259100(-(func_001EC430(temp_s0, fparg0) * temp_f22));
}
