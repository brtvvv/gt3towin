#define DEF_func_001BF980
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001BF980(void **arg0, void **arg1) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = M2C_FIELD(*arg0, s32 *, 0x3B4);
    temp_v1 = M2C_FIELD(*arg1, s32 *, 0x3B4);
    if (!(temp_v1 >= temp_a0)) {
        return -1;
    }
    return temp_a0 < temp_v1;
}
