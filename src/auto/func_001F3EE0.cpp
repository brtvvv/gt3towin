#include "m2c.h"
extern "C" s32 func_001F3E90();                                /* extern */

extern "C" s32 func_001F3EE0(void) {
    return func_001F3E90() == 1;
}
