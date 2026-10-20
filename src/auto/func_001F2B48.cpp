#define DEF_func_001F2B48
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F2B48(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 unused4, s32 arg5, s32 arg6) {
    s32 temp_s2;

    temp_s2 = func_001F3A90(arg0, arg1);
    func_001ED6A8(arg0, arg1, arg3, arg6);
    func_001ED458(arg0, arg1, arg2 - 1, arg3, arg5, arg6, (s32) M2C_FIELD(temp_s2, u8 *, 0x14A2));
}
