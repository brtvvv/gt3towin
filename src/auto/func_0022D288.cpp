#include "m2c.h"
extern s32 D_00354524;

extern "C" s32 func_0022D288(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_00354524;
    D_00354524 = arg0;
    return temp_v0;
}
