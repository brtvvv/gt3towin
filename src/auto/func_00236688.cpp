#include "m2c.h"
extern "C" void *func_00235A58();                              /* extern */

extern "C" u16 func_00236688(void) {
    return M2C_FIELD(func_00235A58(), u16 *, 0x36);
}
