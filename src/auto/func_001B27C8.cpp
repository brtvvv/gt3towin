#define DEF_func_001B27C8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001B27C8(void *arg0, f32 fparg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x50;
    func_0023CA88(temp_s0, fparg0);
    func_001BAE10(M2C_FIELD(arg0, s32 *, 0x44), temp_s0);
}
