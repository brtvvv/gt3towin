#include "m2c.h"
extern "C" void func_001DE4D8(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0x16A8) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x16D8) = fparg0;
    if (M2C_FIELD(arg0, f32 *, 0x16AC) < fparg0) {
        M2C_FIELD(arg0, f32 *, 0x16AC) = fparg0;
    }
}
