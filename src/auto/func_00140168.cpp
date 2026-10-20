#include "m2c.h"
extern "C" void func_00140168(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xE44) - 1;
    M2C_FIELD(arg0, s32 *, 0xE44) = temp_v0;
    if (temp_v0 <= 0) {
        M2C_FIELD(arg0, s32 *, 0xE40) = 0;
    }
}
