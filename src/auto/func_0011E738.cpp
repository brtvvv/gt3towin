#define DEF_func_0011E738
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0011E738(s32 unused0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;

    var_s4 = arg4;
    var_s3 = arg3;
    var_s2 = arg2;
    var_s1 = arg1;
    var_s0 = func_00219F60(func_00219680());
    if (var_s0 == 0) {
        M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x53C) = 0;
        return 0;
    }
    func_00218FC0(({ s32 _g = func_00219680() + 0x307C8; _g; }), var_s0);
    func_001C51B8(func_001C5450(), var_s0 + 0x10);
    return func_0011E530(var_s0, var_s1, var_s2, var_s3, var_s4);
}
