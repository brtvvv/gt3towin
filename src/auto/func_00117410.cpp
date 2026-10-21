#define DEF_func_00117410
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00352970 __attribute__((section(".data")));

extern "C" u32 func_00117410(void) {
    s32 temp_s0;
    u32 temp_s1;

    temp_s0 = ({ s32 _g = func_00219680() + 0x307C8; _g; }) + 0x44;
    temp_s1 = M2C_FIELD((func_0026ACA0(temp_s0) + temp_s0), s8 *, -1) - 0x31;
    func_00218F60(({ s32 _g = func_00219680() + 0x307C8; _g; }), (s32) &D_00352970);
    return (temp_s1 <= 7U) ? temp_s1 : 0U;
}
