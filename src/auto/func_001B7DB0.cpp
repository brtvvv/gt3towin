#define DEF_func_001B7DB0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001B7DB0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xB18);
    if (temp_a0 != 0) {
        if (M2C_FIELD(arg1, s8 *, 0xC0) != 0) {
            temp_v0 = func_001B8DF0(temp_a0, M2C_FIELD(arg0, s32 *, 0xB1C), (s32) (arg1 + 0xC0));
            if (temp_v0 != 0) {
                M2C_FIELD(temp_v0, M2C_UNK (**)(s32, void *, s32, s32), 4)(M2C_FIELD(arg0, s32 *, 0xB20), arg1, arg2, M2C_FIELD(arg0, s32 *, 0x1DC));
            }
        }
    }
}
