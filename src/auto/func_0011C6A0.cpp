#define DEF_func_0011C6A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003117D0 __attribute__((section(".data")));

extern "C" M2C_UNK *func_0011C6A0(void) {
    s32 var_s0;

    if (func_00219F60(func_00219680()) != 0) {
        func_001C5E88(7);
        return &D_003117D0;
    }
    var_s0 = M2C_FIELD(({ s32 _g = ({ s32 _g = func_00219680() + 0x307C8; _g; }); _g; }), s32 *, 0x58C);
    func_00219F28(func_00219680(), var_s0);
    return NULL;
}
