#define DEF_func_00176550
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F2F98 __attribute__((section(".data")));

extern "C" void func_00176550(s32 unused0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_0023E130((s32) &D_002F2F98, arg7);
    func_0023DFD8((s32) &D_002F2F98, arg2 + arg4, arg3 + arg5);
    func_0023E6E0((s32) &D_002F2F98, arg1);
    func_0023E130((s32) &D_002F2F98, arg6);
    func_0023DFD8((s32) &D_002F2F98, arg2, arg3);
    func_0023E6E0((s32) &D_002F2F98, arg1);
}
