#define DEF_func_00220638
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00220638(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 & 8) {
        return -1;
    }
    if (!(!(temp_v1 & 2))) {
        return arg2 & 1;
    }
    return arg1;
}
