#include "m2c.h"
extern "C" s32 func_00261798(s32);                             /* extern */
extern s32 D_00354CC8;

extern "C" s32 func_002609A8(void *arg0) {
    if (D_00354CC8 == 0) {
        return 0;
    }
    return func_00261798(M2C_FIELD(arg0, s32 *, 0xC));
}
