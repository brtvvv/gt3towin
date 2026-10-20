#define DEF_func_00237008
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00354730;

extern "C" s32 func_00237008(void *arg0, s32 arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    temp_v0 = func_0023A2A8((s32) &D_00354730, func_002350A0((s32) arg0), arg1);
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    return ~temp_v0 != 0;
}
