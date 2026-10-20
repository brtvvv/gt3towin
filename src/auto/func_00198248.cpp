#define DEF_func_00198248
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00353A48 __attribute__((section(".data")));

extern "C" void func_00198248(void *arg0, s32 arg1, s32 unused2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0026D950(arg0 + 0x20, (s32) &D_00353A48, arg1, arg3, arg4, arg5, arg6, arg7);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
