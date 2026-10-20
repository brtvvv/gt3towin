#include "m2c.h"
extern "C" void *func_00235B10();                              /* extern */

extern "C" u8 func_002383D0(void) {
    return M2C_FIELD(func_00235B10(), u8 *, 0x12);
}
