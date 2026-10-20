#include "m2c.h"
extern "C" s32 func_00219680();                                /* extern */
extern "C" s32 func_00219F60(s32);                             /* extern */

extern "C" s32 func_00123350(void) {
    return func_00219F60(func_00219680()) != 0;
}
