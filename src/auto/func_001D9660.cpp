#define DEF_func_001D9660
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033DB80 __attribute__((section(".data")));

extern "C" void *func_001D9660(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0033DB80;
    M2C_FIELD(arg0, f32 *, 0x50) = 15.0f;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) 0.8f;
    return arg0;
}
