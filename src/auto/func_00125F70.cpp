#define DEF_func_00125F70
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00125F70(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;

    var_s4 = arg0;
    var_s0 = 0x30000;
    var_s0 = 0x307C8;
    var_s2 = M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x538);
    var_s3 = M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x588);
    var_s1 = func_00219680();
    func_0021A270(var_s1, func_0023C040(var_s2), var_s3);
    M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x58C) = 0;
    func_001B3800(var_s4 + 0x290, 0, 0x19);
}
