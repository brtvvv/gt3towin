#define DEF_func_0014F8F8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0014F8F8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_0014F838(arg0, arg1);
    if (!(temp_v0 != 0)) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x60);
}
