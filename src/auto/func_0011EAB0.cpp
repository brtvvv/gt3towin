#define DEF_func_0011EAB0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0011EAB0(s32 unused0, s32 arg1) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = arg1;
    var_s0 = 0x30000;
    var_s0 = 0x307C8;
    temp_a0 = M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x53C);
    if (temp_a0 != 0) {
        func_001B9A28(temp_a0, var_s1);
    }
    M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x588) = var_s1;
}
