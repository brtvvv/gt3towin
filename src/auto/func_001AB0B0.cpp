#define DEF_func_001AB0B0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001AB0B0(void *arg0, s32 arg1, s32 unused2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_s0;

    if (M2C_FIELD(arg0, s32 *, 0x6B8) == 0) {
        temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x10);
        func_00220688(temp_s0, arg1, 0, arg3, arg4, arg5, arg6, arg7);
        func_00242CF8(temp_s0, temp_s0, 0, (s32) func_001AAAD0, (s32) arg0, 0);
    }
}
