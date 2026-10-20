#include "m2c.h"
extern "C" void *func_00235A58();                              /* extern */

extern "C" u8 func_00237EF0(void) {
    return M2C_FIELD(func_00235A58(), u8 *, 0x3B);
}
