#define DEF_func_001D8390
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001D8390(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_v0;

    temp_v0 = func_001D8D98(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    if (temp_v0 != 0) {
        func_001C0428(temp_v0, arg0);
        func_001D7FF0(temp_v0, arg0);
    }
    return temp_v0;
}
