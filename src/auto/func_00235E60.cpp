#include "m2c.h"
extern "C" void *func_00235E10();                              /* extern */

extern "C" u8 func_00235E60(void) {
    return M2C_FIELD(func_00235E10(), u8 *, 0x10);
}
