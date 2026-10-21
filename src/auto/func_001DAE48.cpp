#define DEF_func_001DAE48
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001DAE48(void *arg0, f32 fparg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0xC) + fparg0;
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f0;
    if (0.8f < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) 0.8f;
    }
}
