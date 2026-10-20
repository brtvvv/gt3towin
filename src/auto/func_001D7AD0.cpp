#include "m2c.h"
extern "C" void func_001D7AD0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x160) = arg1;
    }
}
