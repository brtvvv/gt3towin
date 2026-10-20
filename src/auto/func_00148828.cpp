#include "m2c.h"
extern "C" s32 func_00240048(s32);                             /* extern */

extern "C" s32 func_00148828(void *arg0) {
    return func_00240048(M2C_FIELD(arg0, s32 *, 0xFB60)) == 2;
}
