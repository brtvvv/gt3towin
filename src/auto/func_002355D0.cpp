#include "m2c.h"
extern "C" void *func_00232658(void *, M2C_UNK, s64);          /* extern */

extern "C" u8 func_002355D0(void *arg0) {
    return M2C_FIELD(func_00232658(arg0 + 0x1D0, 0x11, M2C_FIELD(arg0, s64 *, 0x40)), u8 *, 0x11);
}
