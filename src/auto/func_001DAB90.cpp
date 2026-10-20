#define DEF_func_001DAB90
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002D40C0 __attribute__((section(".data")));

extern "C" void func_001DAB90(void *arg0, f32 fparg0) {
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + fparg0);
    if (func_001DBB80((s32) &D_002D40C0) < M2C_FIELD(arg0, f32 *, 4)) {
        M2C_FIELD(arg0, f32 *, 4) = func_001DBB80((s32) &D_002D40C0);
    }
}
