#include "m2c.h"
extern "C" s32 func_00232658(s32, M2C_UNK, s32);               /* extern */
extern "C" s32 func_00232CD0(s32, s32);                        /* extern */
extern "C" M2C_UNK func_002351D0(s32, s32);                    /* extern */

extern "C" s32 func_00232FE0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00232658(arg0 + 0x1D0, 0x23, arg1);
    if ((temp_v0 == 0) || (func_00232CD0(arg0, temp_v0) == 0)) {
        return 0;
    }
    func_002351D0(arg0, temp_v0);
    return 1;
}
