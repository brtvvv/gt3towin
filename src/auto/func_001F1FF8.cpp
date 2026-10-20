#include "m2c.h"
extern "C" s32 func_001F3EB8();                                /* extern */

extern "C" s32 func_001F1FF8(void) {
    return func_001F3EB8() == 0;
}
