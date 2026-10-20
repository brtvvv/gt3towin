#include "m2c.h"
extern "C" void *func_00235A28();                              /* extern */

extern "C" u8 func_002384F0(void) {
    return M2C_FIELD(func_00235A28(), u8 *, 0x12);
}
