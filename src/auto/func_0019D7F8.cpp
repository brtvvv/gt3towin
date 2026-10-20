#include "m2c.h"
extern "C" void func_0019D7F8(void *arg0, f32 fparg0, f32 fparg1) {
    M2C_FIELD(arg0, f32 *, 0x34) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (fparg0 * fparg1);
}
