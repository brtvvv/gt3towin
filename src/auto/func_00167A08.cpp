#define DEF_func_00167A08
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354048;

extern "C" void func_00167A08(void *arg0) {
    s32 temp_a0;
    void *var_s0;

    var_s0 = arg0;
    temp_a0 = M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x540);
    if (temp_a0 != 0) {
        func_0023C140(temp_a0, var_s0 + 0xE40);
        M2C_FIELD(var_s0, s32 *, 0x10C0) = 1;
    }
    D_00354048 = 1;
}
