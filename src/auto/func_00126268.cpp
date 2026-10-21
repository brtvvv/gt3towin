#define DEF_func_00126268
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00126268(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = arg0;
    var_s1 = 0x30000;
    var_s1 = 0x307C8;
    var_s2 = func_00219F60(func_00219680());
    var_s0 = ({ s32 _g = func_00219680() + 0x307C8; _g; });
    var_s0 += 0x548;
    M2C_FIELD(var_s2, s64 *, 0xF8) = func_00232210(var_s0);
    func_001B3800(var_s3 + 0x290, 0xC, 0x19);
    func_001B9960(M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x53C), var_s0);
}
