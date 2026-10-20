#include "m2c.h"
extern "C" void func_001C1030(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + fparg0);
}
