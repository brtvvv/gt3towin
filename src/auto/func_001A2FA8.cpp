#define DEF_func_001A2FA8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001A2FA8(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = func_001A3088(arg0);
    if (temp_v0 == 0) {
        return 0;
    }
    func_001A0EC0(temp_v0, arg1);
    temp_a1 = *(s32 *)arg1;
    if (M2C_FIELD(arg0, s32 *, 0x10) < temp_a1) {
        M2C_FIELD(arg0, s32 *, 0x10) = temp_a1;
    }
    return 1;
}
