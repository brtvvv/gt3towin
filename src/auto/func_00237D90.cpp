#include "m2c.h"
extern "C" void *func_00235998();                              /* extern */

extern "C" u16 func_00237D90(void) {
    return M2C_FIELD(func_00235998(), u16 *, 0x56);
}
