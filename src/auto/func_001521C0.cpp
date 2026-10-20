#include "m2c.h"
extern "C" void func_001521C0(void *arg0, f32 fparg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x30768);
    M2C_FIELD(arg0, f32 *, 0x30768) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x30764) = temp_f0;
}
