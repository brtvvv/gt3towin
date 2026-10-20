#include "m2c.h"
extern "C" s32 func_0027FAE8(s32, s8);                         /* extern */
extern s32 D_003530DC;

extern "C" s32 func_00145120(s8 arg0) {
    s32 temp_v0;

    if ((arg0 == 0) || (temp_v0 = func_0027FAE8(D_003530DC, arg0), (temp_v0 == 0))) {
        return -1;
    }
    return temp_v0 - D_003530DC;
}
