#define DEF_func_001F3738
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F3738(void **arg0, s32 arg1, s32 *arg2, s32 arg3, s32 *arg4) {
    if (M2C_FIELD(*arg0, s32 *, 0x54) == 3) {
        if (arg1 == 0) {
            *arg2 = 8;
        }
        *arg4 = 0x50;
        return;
    }
    func_001F4268((s32) arg0, arg1, (s32) arg2, arg3, (s32) arg4);
}
