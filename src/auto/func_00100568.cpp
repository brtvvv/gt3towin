#define DEF_func_00100568
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00100568(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0xCC) = 2;
    func_00133870(var_s0);
}
