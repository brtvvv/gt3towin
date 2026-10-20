#include "m2c.h"
extern "C" void func_001BA2C0(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x40) & 0x80000) {
        M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) | 3);
    }
}
