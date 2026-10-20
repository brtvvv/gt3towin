#include "m2c.h"
extern "C" void func_00245A68(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    if ((arg1 == 0) || (arg1 == 9)) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
}
