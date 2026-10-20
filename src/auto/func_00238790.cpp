#include "m2c.h"
extern "C" s32 func_00235400();                                /* extern */

extern "C" s32 func_00238790(void) {
    return func_00235400() & 1;
}
