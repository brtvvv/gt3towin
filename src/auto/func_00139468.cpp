#include "m2c.h"
extern "C" f32 func_00139468(void *arg0, f32 fparg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 4);
    if (fparg0 > 0.0f) {
        return temp_f0 + fparg0;
    }
    return temp_f0 + 0.0f;
}
