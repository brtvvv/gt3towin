#include "m2c.h"
extern "C" void *func_00235998();                              /* extern */

extern "C" u8 func_00237E30(void) {
    return M2C_FIELD(func_00235998(), u8 *, 0x18);
}
