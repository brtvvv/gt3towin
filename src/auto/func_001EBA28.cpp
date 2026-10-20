#include "m2c.h"
extern "C" s32 func_001F3AC0(s32);                             /* extern */

extern "C" s32 func_001EBA28(void *arg0) {
    return func_001F3AC0(M2C_FIELD(arg0, s32 *, 4)) > 0;
}
