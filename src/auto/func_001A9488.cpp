#include "m2c.h"
extern "C" f32 func_001A9488(void *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0xAB8);
    return ((fparg0 * (M2C_FIELD(arg0, f32 *, 0xAB0) - temp_f2)) + temp_f2) * fparg1;
}
