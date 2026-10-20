#include "m2c.h"
extern "C" s32 func_001BBF38(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0xCC);
    }
    return M2C_FIELD(arg0, s32 *, 0xD4);
}
