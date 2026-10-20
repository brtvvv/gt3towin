#include "m2c.h"
extern "C" void func_00207A28(void *arg0, f32 fparg0, f32 fparg1) {
    M2C_FIELD(arg0, f32 *, 8) = fparg1;
    M2C_FIELD(arg0, f32 *, 4) = fparg0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
