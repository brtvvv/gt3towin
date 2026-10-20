#define DEF_func_001AB470
#include "m2c.h"
#include "funcs.h"
extern f32 D_003518D8;

extern "C" void func_001AB470(void *arg0, f32 fparg0) {
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x6AC);
    temp_f22 = D_003518D8;
    temp_f23 = func_001EC490(temp_s0, fparg0);
    temp_f21 = func_001EC4C0(temp_s0, fparg0);
    func_00258FD4(temp_f23, temp_f21, func_001EC4F0(temp_s0, fparg0));
    func_002590C0(func_001EC580(temp_s0, fparg0) * temp_f22);
    func_00259080(func_001EC520(temp_s0, fparg0) * temp_f22);
    func_00259100(-(func_001EC550(temp_s0, fparg0) * temp_f22));
}
