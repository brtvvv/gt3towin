#include "m2c.h"
extern "C" s32 func_001BBF20(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0xC8);
    }
    return M2C_FIELD(arg0, s32 *, 0xD0);
}
