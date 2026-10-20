#include "m2c.h"
extern "C" M2C_UNK func_001AB0B0(s32, s32);                    /* extern */
extern "C" s32 func_002370B8(s32);                             /* extern */
extern "C" s32 func_002370C8(s32);                             /* extern */

extern "C" void func_00178198(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x20;
    if (func_002370B8(temp_s0) == 0) {
        func_001AB0B0(arg0 + 0x11F8, func_002370C8(temp_s0));
    }
}
