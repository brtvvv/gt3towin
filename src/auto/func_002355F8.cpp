#include "m2c.h"
extern "C" void *func_00232658(void *, M2C_UNK, s64);          /* extern */

extern "C" s32 func_002355F8(void *arg0) {
    return M2C_FIELD(func_00232658(arg0 + 0x1D0, 5, M2C_FIELD(arg0, s64 *, 0x78)), u8 *, 0x10) != 0;
}
