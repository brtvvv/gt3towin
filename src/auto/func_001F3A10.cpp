#include "m2c.h"
extern "C" void func_001F3A10(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0xB7AC) == 2) {
        M2C_FIELD(arg0, s16 *, 0xB7AE) = (s16) ((arg1 * 0x32) + 1);
    }
}
