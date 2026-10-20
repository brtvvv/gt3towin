#include "m2c.h"
extern "C" s32 func_002609A8(s32);                             /* extern */
extern s32 D_00354AB4;
extern s32 D_00354ABC;

extern "C" s32 func_0025FD78(void *arg0) {
    if (D_00354ABC == 0) {
        if (D_00354AB4 != 0) {
            return func_002609A8(M2C_FIELD(arg0, s32 *, 0x12C));
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
