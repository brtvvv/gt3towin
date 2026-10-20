#include "m2c.h"
extern "C" void func_001B3970(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    if (temp_v1 == temp_a2) {
        M2C_FIELD(arg0, s32 *, 0) = temp_a2;
        return;
    }
    if (arg1 < temp_v1) {
        M2C_FIELD(arg0, s32 *, 0) = temp_v1;
        return;
    }
    if (arg1 >= temp_a2) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a2 - 1);
    }
}
