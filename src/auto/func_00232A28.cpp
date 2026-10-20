#include "m2c.h"
extern "C" s32 func_002327D8();                                /* extern */

extern "C" s32 func_00232A28(void *arg0) {
    return func_002327D8() / (s32) M2C_FIELD(arg0, u16 *, 8);
}
