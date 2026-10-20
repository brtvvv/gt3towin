#include "m2c.h"
extern "C" f32 func_001EC370(void *arg0, f32 fparg0) {
    f32 temp_f12;

    temp_f12 = fparg0 + M2C_FIELD(arg0, f32 *, 0xEC4);
    return (M2C_FIELD(arg0, f32 *, 0x16A0) * temp_f12) + (M2C_FIELD(arg0, f32 *, 0x1368) * (1.0f - temp_f12));
}
