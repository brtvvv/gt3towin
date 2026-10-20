#define DEF_func_002709C0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002709C0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x74) == 0) {
        return -1;
    }
    return M2C_INDEX(arg0, s32, 0x5C, arg1);
}
