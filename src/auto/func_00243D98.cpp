#define DEF_func_00243D98
#include "m2c.h"
#include "funcs.h"
extern s32 D_002F554C __attribute__((section(".data")));

extern "C" s32 func_00243D98(void) {
    return (func_0026ACA0(D_002F554C) + 0x50) & ~0x3F;
}
