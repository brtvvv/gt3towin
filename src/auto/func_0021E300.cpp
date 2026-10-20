#include "m2c.h"
extern "C" s32 *func_0021E1B8(s32);                            /* extern */

extern "C" s32 func_0021E300(void *arg0) {
    return *func_0021E1B8(M2C_FIELD(arg0, s32 *, 0xC));
}
