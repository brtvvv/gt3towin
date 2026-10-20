#include "m2c.h"
extern "C" void func_001B3930(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    if (arg1 != arg2) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        if (temp_v1 < arg1) {
            M2C_FIELD(arg0, s32 *, 0) = arg1;
            return;
        }
        if (temp_v1 >= arg2) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (arg2 - 1);
        }
    }
}
