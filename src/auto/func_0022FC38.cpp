#include "m2c.h"
extern "C" s32 func_0022FC38(s32 arg0, u32 arg1) {
    if (arg1 < 8U) {
        return M2C_FIELD((arg0 + (arg1 * 0x3C)), s32 *, 4);
    }
    if ((u32) (arg1 - 0xA) < 2U) {
        return M2C_FIELD((arg0 + (arg1 * 0x74)), s32 *, -0x2A4);
    }
    if ((u32) (arg1 - 0xC) < 8U) {
        return M2C_FIELD((arg0 + (arg1 * 0xD0)), s32 *, -0x6D4);
    }
    return 0;
}
