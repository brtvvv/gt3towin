#include "m2c.h"
extern f32 D_00351A34;

extern "C" void *func_001D29C8(void *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f0 + ((fparg0 - temp_f0) * (fparg1 * D_00351A34)));
    return arg0;
}
