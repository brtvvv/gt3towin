#include "m2c.h"
extern "C" void func_001D1608(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) (M2C_FIELD(arg0, f32 *, 0x90) + fparg0);
}
