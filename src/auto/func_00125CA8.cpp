#define DEF_func_00125CA8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00125CA8(s32 unused0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = arg1;
    var_s0 = 0x30000;
    var_s0 = 0x307C8;
    func_00218F60(({ s32 _g = func_00219680() + 0x307C8; _g; }), var_s1);
    M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0xC8) = 4;
}
