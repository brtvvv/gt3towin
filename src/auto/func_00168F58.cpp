#define DEF_func_00168F58
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00168F58(void) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x540);
    if (temp_a0 == 0) {
        return 0;
    }
    return func_00238C20(temp_a0 + 0x10, 0x2F) != 0;
}
