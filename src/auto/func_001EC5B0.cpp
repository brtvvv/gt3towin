#include "m2c.h"
extern "C" f32 func_001EC3A0(f32);                             /* extern */
extern "C" f32 func_001EC4C0(void *, f32);                     /* extern */

extern "C" f32 func_001EC5B0(void *arg0, f32 fparg0) {
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f0;

    temp_f20 = fparg0 + M2C_FIELD(arg0, f32 *, 0xEC4);
    temp_f21 = func_001EC3A0(temp_f20);
    var_f0 = temp_f21 - func_001EC4C0(arg0, temp_f20);
    if (var_f0 < 0.0f) {
        var_f0 = 0.0f;
    }
    return var_f0;
}
