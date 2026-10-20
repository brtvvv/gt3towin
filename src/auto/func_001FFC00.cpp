#include "m2c.h"
extern "C" void func_001FFC00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) + 1);
}
