#include "m2c.h"
extern "C" void *func_00235DE0();                              /* extern */

extern "C" u8 func_00235E40(void) {
    return M2C_FIELD(func_00235DE0(), u8 *, 0x10);
}
