#include "m2c.h"
extern "C" s32 func_001F3EB8();                                /* extern */

extern "C" s32 func_001F2E28(void) {
    return (func_001F3EB8() != 0) ? 0 : 3;
}
