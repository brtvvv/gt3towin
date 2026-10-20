#include "m2c.h"
extern f32 D_00351AC4;

extern "C" void func_001DAE28(void *arg0, f32 fparg0) {
    if (D_00351AC4 < fparg0) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) D_00351AC4;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xC) = fparg0;
}
