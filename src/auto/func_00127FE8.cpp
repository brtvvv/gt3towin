#define DEF_func_00127FE8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003142A0 __attribute__((section(".data")));
extern M2C_UNK D_00352C88 __attribute__((section(".data")));

extern "C" M2C_UNK *func_00127FE8(void) {
    M2C_UNK *var_v0;
    s32 temp_s0;

    var_v0 = NULL;
    if (M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x540) != 0) {
        temp_s0 = ({ s32 _g = func_00219680() + 0x307C8; _g; }) + 0x44;
        var_v0 = NULL;
        if (func_0027FC78(temp_s0, (s32) &D_00352C88) != 0) {
            if (func_0023B898(temp_s0) == 0) {
                return NULL;
            }
            func_001C5E88(4);
            var_v0 = &D_003142A0;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
