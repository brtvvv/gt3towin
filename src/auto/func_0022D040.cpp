#include "m2c.h"
extern s32 D_00354524;

extern "C" s32 func_0022D040(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    return D_00354524;
}
