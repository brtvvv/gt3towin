#include "m2c.h"
extern "C" M2C_UNK func_001A5530(void *);                      /* extern */
extern "C" s32 func_0026D660(M2C_UNK, M2C_UNK);                /* extern */

extern "C" void *func_001A54A8(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_0026D660(0x40, 0x4000);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    func_001A5530(arg0);
    return arg0;
}
