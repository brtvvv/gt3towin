#include "m2c.h"
extern "C" s32 func_001CD888(s32);                             /* extern */

extern "C" s32 func_001C7B30(s32 arg0) {
    return func_001CD888(arg0 + 0x48C) >= 2;
}
