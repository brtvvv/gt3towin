#define DEF_func_0010A568
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0010A568(s32 unused0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v0;

    if ((u32) (arg2 - 5) < 2U) {
        temp_s0 = M2C_FIELD(func_001C53F0(arg1), s32 *, 0xC);
        func_001CD840(arg3, temp_s0, temp_s0 + 1);
        func_001CD868(arg3, temp_s0);
        return;
    }
    temp_v0 = func_001C5290();
    if (temp_v0 == 0) {
        func_001CD840(arg3, 0, 1);
    } else {
        func_001CD840(arg3, 0, temp_v0);
    }
    func_001CD868(arg3, 0);
}
