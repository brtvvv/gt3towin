#define DEF_func_001DC448
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001DC448(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 fparg0) {
    *arg0 = (f32) (arg4 & 0xFF) * 0.01f;
    *arg1 = (f32) (arg5 & 0xFF) * 5.0f * 9.8f;
    *arg2 = (f32) (arg6 & 0xFF) * 0.01f;
    *arg3 = (f32) (arg7 & 0xFF) * 5.0f * 9.8f;
    *arg0 *= fparg0;
    *arg2 *= fparg0;
}
