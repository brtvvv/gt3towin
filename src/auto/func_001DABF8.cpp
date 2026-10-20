#define DEF_func_001DABF8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002D40C0 __attribute__((section(".data")));

extern "C" void func_001DABF8(void *arg0) {
    M2C_FIELD(arg0, f32 *, 4) = func_001DBB58((s32) &D_002D40C0);
}
