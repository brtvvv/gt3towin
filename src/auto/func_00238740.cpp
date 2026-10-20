#include "m2c.h"
extern "C" s32 func_00235400();                                /* extern */

extern "C" s32 func_00238740(void) {
    return (func_00235400() >> 2) & 1;
}
