#include "m2c.h"
extern "C" s32 func_002285D8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s16 *, 4) - 2;
    if (arg1 < 0) {
        return 0;
    }
    return (temp_v0 >= arg1) ? arg1 : temp_v0;
}
