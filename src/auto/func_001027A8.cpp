#define DEF_func_001027A8
#include "m2c.h"
#include "funcs.h"
extern f32 D_00351384;

extern "C" void func_001027A8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_v0 - 1);
        return;
    }
    func_00102178((s32) arg0, arg1);
    func_00252500(6);
    func_00253908(0x42, 1.0f);
    func_0025B248(D_00351384, D_00351384, D_00351384, 0.5f);
    func_00256DB0(0, 0, 0x280, 0x200);
    func_00102250((s32) arg0, arg1);
}
