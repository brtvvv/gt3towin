#define DEF_func_001F1D68
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F1D68(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;
    void *temp_s1;

    temp_s2 = func_001F3A90(arg0, arg1);
    temp_s1 = temp_s2 + 0xF84;
    if (func_001F1AD0(arg0 + 0xE340) != 0) {
        M2C_FIELD(temp_s1, s32 *, 0x530) = arg2;
        func_001E4B30(temp_s2);
        if (arg1 == 0) {
            func_0017A100(*(s32 *)arg0 + 0x84, 4, 0, 0);
        }
    }
}
