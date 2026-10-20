#include "m2c.h"
extern "C" void *func_00235A88();                              /* extern */

extern "C" u16 func_00236518(void) {
    return M2C_FIELD(func_00235A88(), u16 *, 0x18);
}
