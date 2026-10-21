#define DEF_func_00126010
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00126010(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0x30000;
    var_s0 = 0x307C8;
    var_s1 = M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x538);
    func_0021A2C8(func_00219680(), var_s1);
    M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x58C) = 0;
}
