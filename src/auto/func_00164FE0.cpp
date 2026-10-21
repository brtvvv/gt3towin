#define DEF_func_00164FE0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00164FE0(void *arg0, s32 arg1) {
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    void *var_s0;

    var_s1 = arg1;
    var_s0 = arg0;
    var_s2 = 0;
    var_v0 = 0;
    if (M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x540) != 0) {
        M2C_FIELD(var_s0, s32 *, 0xFA0) = var_s1;
        var_s2 = func_00168210((s32) (var_s0 + 0xE40));
        var_v0 = var_s2;
    }
    return var_v0;
}
