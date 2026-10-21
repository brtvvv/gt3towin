#define DEF_func_00203F10
#include "m2c.h"
#include "funcs.h"
extern void *D_0035392C;

extern "C" void func_00203F10(s32 arg0, s32 arg1, s32 arg2) {
    func_00203AA0(arg0, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0xF4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x100) = (s32) M2C_FIELD(D_0035392C, s32 *, 0x28);
    }
    M2C_FIELD(arg0, f32 *, 0x80) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) 1.428148f;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
}
