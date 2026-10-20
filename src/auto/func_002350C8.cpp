#include "m2c.h"
extern "C" void *func_00232658(void *, M2C_UNK, s64);          /* extern */

extern "C" s32 func_002350C8(void *arg0) {
    s64 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s64 *, 0xA8);
    if (temp_a2 == 0) {
        return 0;
    }
    return M2C_FIELD(func_00232658(arg0 + 0x1D0, 0xC, temp_a2), u8 *, 0x11) != 0;
}
