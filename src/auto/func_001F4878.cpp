#include "m2c.h"
extern "C" M2C_UNK func_001E9670();                            /* extern */
extern "C" M2C_UNK func_001E9768(void *);                      /* extern */
extern "C" M2C_UNK func_001FBC00(void *, s32);                 /* extern */

extern "C" void func_001F4878(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_s0;

    var_s0 = arg1;
    func_001E9670();
    if (var_s0 < M2C_FIELD(arg0, s32 *, 0xE384)) {
        var_a1 = var_s0;
        do {
            func_001FBC00(arg0 + 0xBBB4, var_a1);
            var_s0 += 1;
            var_a1 = var_s0;
        } while (var_s0 < M2C_FIELD(arg0, s32 *, 0xE384));
    }
    func_001E9768(arg0);
}
