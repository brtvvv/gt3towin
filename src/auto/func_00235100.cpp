#define DEF_func_00235100
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00235100(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00235850(arg0, 0xC);
    if (temp_v0 == 0) {
        return 0;
    }
    return M2C_FIELD(func_00232658(arg0 + 0x1D0, 0xC, temp_v0), u8 *, 0x11) != 0;
}
