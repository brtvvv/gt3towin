#include "m2c.h"
extern "C" M2C_UNK func_0026D350(s32);                         /* extern */
extern "C" f32 func_0026D3B0(s32);                             /* extern */
extern f32 D_0035211C;

extern "C" void func_00204F88(void *arg0, s32 arg1) {
    func_0026D350(arg1);
    if (func_0026D3B0(arg1) < D_0035211C) {
        func_0026D350(arg1);
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((func_0026D3B0(arg1) * 256.0f) - 128.0f);
    }
}
