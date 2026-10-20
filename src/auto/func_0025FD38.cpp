#define DEF_func_0025FD38
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0025FD38(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (M2C_FIELD(arg0, s32 *, 0x124) == -1) {
        func_0025FC28((s32) arg0, arg1, arg2, arg3);
        return 0;
    }
    return func_0025FAD8((s32) arg0, arg4, arg1);
}
