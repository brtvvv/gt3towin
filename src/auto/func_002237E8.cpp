#define DEF_func_002237E8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_002237E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 fparg0) {
    func_00220C50(arg0, arg1, arg2, arg3, arg5, arg4, fparg0);
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = arg5;
    M2C_FIELD(arg0, s32 *, 0x48) = arg6;
    if (arg6 == 2) {
        M2C_FIELD(arg0, s32 *, 0x34) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
