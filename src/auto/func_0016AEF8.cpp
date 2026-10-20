#include "m2c.h"
extern "C" M2C_UNK func_001D4F78(s32, s32);                    /* extern */
extern "C" M2C_UNK func_001D5750();                            /* extern */
extern "C" s32 func_001D5BD0(void *, M2C_UNK);                 /* extern */
extern "C" s32 func_001D5C08(void *, s32);                     /* extern */

extern "C" void func_0016AEF8(void *arg0) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    func_001D5750();
    temp_s2 = func_001D5BD0(arg0, 0);
    if (M2C_FIELD(arg0, s32 *, 0x214) > 0) {
        do {
            temp_v0 = func_001D5C08(arg0, var_s0);
            if (temp_v0 != 0) {
                func_001D4F78(temp_v0, var_s0 == temp_s2);
            }
            var_s0 += 1;
        } while (var_s0 < M2C_FIELD(arg0, s32 *, 0x214));
    }
}
