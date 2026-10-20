#include "m2c.h"
extern "C" void func_00145F68(void *arg0, s32 arg1) {
    if ((arg1 == 0x47) || (arg1 == 0)) {
        M2C_FIELD(arg0, s32 *, 0x60) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}
