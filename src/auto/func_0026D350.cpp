#include "m2c.h"
extern "C" s32 func_0026D350(u32 *arg0) {
    u32 temp_v0;

    temp_v0 = (*arg0 * 0x11) + 0x11;
    *arg0 = temp_v0;
    return temp_v0 ^ ((temp_v0 << 0x10) | (temp_v0 >> 0x10));
}
