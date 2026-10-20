#include "m2c.h"
extern "C" s32 func_00220590(void *arg0, u32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
        return (s32) (arg1 + (arg1 >> 0x1F)) >> 1;
    }
    return 0;
}
