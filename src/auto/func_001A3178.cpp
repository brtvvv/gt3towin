#define DEF_func_001A3178
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002C1A70 __attribute__((section(".data")));

extern "C" void func_001A3178(void *arg0) {
    M2C_FIELD(&D_002C1A70, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(&D_002C1A70, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(&D_002C1A70, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
}
