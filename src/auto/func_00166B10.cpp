#define DEF_func_00166B10
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00166B10(void *arg0, s32 arg1) {
    s32 var_s0;
    void *var_s1;

    var_s1 = arg0;
    var_s0 = arg1;
    if (M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x540) != 0) {
        M2C_FIELD(var_s1, s32 *, 0xF60) = var_s0;
    }
    return 1;
}
