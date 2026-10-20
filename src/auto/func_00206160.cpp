#include "m2c.h"
extern "C" s32 func_00206160(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x142) > 0) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x141) != 0) && (M2C_FIELD(arg0, u8 *, 0x140) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x142) = (s8) ((u8) M2C_FIELD(arg0, s8 *, 0x142) + 1);
        return 1;
    }
    return 0;
}
