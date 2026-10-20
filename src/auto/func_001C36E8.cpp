#define DEF_func_001C36E8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C36E8(s32 unused0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x40) & 4) {
        return M2C_FIELD(arg1, s32 *, 0x68);
    }
    return 0;
}
