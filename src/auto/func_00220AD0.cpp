#include "m2c.h"
extern "C" s32 func_00220590(s32, s32);                        /* extern */

extern "C" s32 func_00220AD0(void *arg0) {
    return func_00220590(M2C_FIELD(arg0, s32 *, 0x88), M2C_FIELD(arg0, s32 *, 0)) * 3;
}
