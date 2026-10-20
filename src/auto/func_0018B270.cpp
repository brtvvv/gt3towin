#include "m2c.h"
extern "C" M2C_UNK func_0022AA20(s32, void *);                 /* extern */

extern "C" void func_0018B270(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x8D) == 1) {
            func_0022AA20(temp_a0, arg0 + 4);
        }
    }
}
