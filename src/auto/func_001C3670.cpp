#define DEF_func_001C3670
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C3670(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_001C34E8(arg0);
    if (temp_v0 != 0) {
        return func_001C3538(arg1, temp_v0);
    }
    return 0;
}
