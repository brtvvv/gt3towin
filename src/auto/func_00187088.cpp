#define DEF_func_00187088
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00187088(void *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1078);
    M2C_INDEX(arg0, s32, 0x1058, temp_v1) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1078) = (s32) (temp_v1 + 1);
}
