#include "m2c.h"
extern "C" void func_00211CB0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & 0xFE);
    if (!(arg1 & 0x100)) {
        if (arg1 & 0x200) {
            M2C_FIELD(arg0, s16 *, 4) = -2;
            return;
        }
        M2C_FIELD(arg0, s16 *, 4) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 4) = 2;
}
