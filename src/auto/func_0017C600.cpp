#include "m2c.h"
extern s32 D_00353B80;

extern "C" void func_0017C600(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9788) = arg1;
    D_00353B80 = arg1;
}
