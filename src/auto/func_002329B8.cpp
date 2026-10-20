#include "m2c.h"
extern "C" void *func_002325C8();                              /* extern */

extern "C" u16 func_002329B8(void) {
    return M2C_FIELD(func_002325C8(), u16 *, 8);
}
