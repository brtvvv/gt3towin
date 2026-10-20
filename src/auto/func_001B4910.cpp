#include "m2c.h"
extern "C" s32 func_001B4908();                                /* extern */

extern "C" u32 func_001B4910(void) {
    return (u32) ~func_001B4908() >> 0x1F;
}
