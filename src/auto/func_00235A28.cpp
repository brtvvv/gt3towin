#include "m2c.h"
extern "C" s32 func_00232658(void *, M2C_UNK, s64);            /* extern */

extern "C" s32 func_00235A28(void *arg0) {
    s64 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s64 *, 0x38);
    if (temp_a2 == 0) {
        return 0;
    }
    return func_00232658(arg0 + 0x1D0, 0xD, temp_a2);
}
