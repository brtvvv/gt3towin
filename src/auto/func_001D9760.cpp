#define DEF_func_001D9760
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D9760(s32 arg0, s32 arg1, f32 fparg0) {
    f32 temp_f21;
    f32 temp_f22;

    temp_f22 = func_001EC340(arg1, fparg0);
    temp_f21 = func_001EC3A0(arg1, fparg0);
    func_001D96A8(arg0, temp_f22, temp_f21, func_001EC3D0(arg1, fparg0));
}
