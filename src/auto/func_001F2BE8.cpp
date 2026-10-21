#define DEF_func_001F2BE8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F2BE8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_s2;

    temp_v0 = func_001F3A90(arg0, arg1);
    temp_s2 = temp_v0 + 0xF84;
    if (M2C_FIELD(temp_s2, s8 *, 0x3E9) == 0) {
        func_001E4B30(temp_v0);
        func_0017A100(*(s32 *)arg0 + 0x84, 4, arg1, 0);
    }
    M2C_FIELD(temp_s2, s32 *, 0x530) = arg2;
}
