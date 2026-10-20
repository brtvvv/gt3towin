#include "m2c.h"
extern "C" void func_00155CE8(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0x30764) = (f32) M2C_FIELD(arg0, f32 *, 0x30768);
    M2C_FIELD(arg0, f32 *, 0x30768) = (f32) (fparg0 * 0.5f);
}
