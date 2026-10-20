#define DEF_func_001F42C0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001F42C0(s32 arg0, s32 unused1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (func_001F41F8(arg0) < 0) {
        if (func_001F4208(arg0) > 0) {
            *arg2 = 2;
            *arg3 = func_001F41F8(arg0);
            *arg4 = func_001F4208(arg0);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
