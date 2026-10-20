#include "m2c.h"
extern "C" void func_001749B8(void *arg0, f32 fparg0, f32 fparg1) {
    M2C_FIELD(arg0, f32 *, 0x100) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) - fparg0);
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) - fparg1);
}
