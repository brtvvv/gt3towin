#define DEF_func_0021FEC8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0021FEC8(s32 arg0, u32 arg1, f32 fparg0) {
    if (arg1 < 4U) {
        M2C_INDEX(arg0, f32, 0x10, arg1) = fparg0;
    }
}
