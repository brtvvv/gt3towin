#include "m2c.h"
extern "C" void func_001C0768(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
    }
}
