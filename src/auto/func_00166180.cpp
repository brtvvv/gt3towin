#define DEF_func_00166180
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00166180(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x540);
    if (temp_a0 != 0) {
        if (M2C_FIELD(func_002359F8(temp_a0 + 0x10), u8 *, 0x11) != 0) {
            M2C_FIELD(arg0, s32 *, 0xF44) = arg1;
        }
    }
    return 1;
}
