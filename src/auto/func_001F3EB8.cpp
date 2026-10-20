#include "m2c.h"
extern "C" s32 func_001F3E90();                                /* extern */

extern "C" s32 func_001F3EB8(void) {
    return func_001F3E90() == 2;
}
