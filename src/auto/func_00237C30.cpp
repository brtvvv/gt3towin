#include "m2c.h"
extern "C" void *func_00235AB0();                              /* extern */

extern "C" u8 func_00237C30(void) {
    return M2C_FIELD(func_00235AB0(), u8 *, 0x1A);
}
