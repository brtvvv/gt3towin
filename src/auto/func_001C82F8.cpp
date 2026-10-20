#include "m2c.h"
extern "C" void *func_001C82F8(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x88) == 0) {
        return M2C_FIELD(arg0, s32 *, 4) + 0x44;
    }
    return arg0 + 0x88;
}
