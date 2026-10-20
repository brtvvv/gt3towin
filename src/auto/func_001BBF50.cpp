#include "m2c.h"
extern "C" s32 func_001BBF50(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0xC8) != 0) || (M2C_FIELD(arg0, s32 *, 0xCC) != 0) || (M2C_FIELD(arg0, s32 *, 0xD0) != 0) || (M2C_FIELD(arg0, s32 *, 0xD4) != 0) || (M2C_FIELD(arg0, s32 *, 0xE8) != 0) || (M2C_FIELD(arg0, s32 *, 0xEC) != 0)) {
        var_v1 = 1;
    }
    return var_v1;
}
