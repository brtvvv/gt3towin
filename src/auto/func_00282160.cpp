#define DEF_func_00282160
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00282160(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_s2 = arg1 * 0x58;
    temp_v0 = func_00283218(arg0, temp_s2 + 0xC);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 + 0xC;
        M2C_FIELD(temp_v0, s32 *, 4) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = temp_v0_2;
        func_0027ED70(temp_v0_2, 0, temp_s2);
        var_v0 = temp_v0;
    }
    return var_v0;
}
