#include "m2c.h"
extern "C" s32 func_001B0B28(s32, s32);                        /* extern */

extern "C" s32 func_001B1628(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        return func_001B0B28(arg1, temp_v0);
    }
    return 0;
}
