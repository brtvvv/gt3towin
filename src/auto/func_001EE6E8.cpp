#include "m2c.h"
extern "C" u32 func_001EE6E8(void *arg0, s32 arg1) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0xE380) + arg1) / 3U;
}
