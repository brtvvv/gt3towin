#include "m2c.h"
extern "C" void *func_00235968();                              /* extern */

extern "C" s32 func_00236F48(void) {
    return M2C_FIELD(func_00235968(), u8 *, 0x45) * 0x64;
}
