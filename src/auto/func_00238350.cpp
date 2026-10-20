#include "m2c.h"
extern "C" void *func_00235AE0();                              /* extern */

extern "C" u8 func_00238350(void) {
    return M2C_FIELD(func_00235AE0(), u8 *, 0x23);
}
