#define DEF_func_001D8D20
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001D8D20(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_001D8C08(arg0);
    if (temp_v0 == 0) {
        return 0;
    }
    return func_0027FC78(arg1, temp_v0) == 0;
}
