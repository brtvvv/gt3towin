#include "m2c.h"
extern f32 D_003522C0;

extern "C" s32 func_0021FD88(void *arg0, f32 fparg0) {
    f32 temp_f1;
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (var_v0 < 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
        var_v0 = 0;
        if (!(temp_f1 < fparg0)) {
            var_v0 = 2;
            if ((temp_f1 * D_003522C0) < fparg0) {
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
