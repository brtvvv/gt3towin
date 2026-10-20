#define DEF_func_001B2808
#include "m2c.h"
#include "funcs.h"
extern s32 D_002C72D8 __attribute__((section(".data")));

extern "C" void func_001B2808(void *arg0) {
    func_001BAE10(M2C_FIELD(arg0, s32 *, 0x44), D_002C72D8);
}
