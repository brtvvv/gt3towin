#include "m2c.h"
extern "C" void *func_002359F8();                              /* extern */

extern "C" u16 func_00237FF0(void) {
    return M2C_FIELD(func_002359F8(), u16 *, 0x24);
}
