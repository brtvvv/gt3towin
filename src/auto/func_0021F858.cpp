#define DEF_func_0021F858
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0021F858(u64 *arg0, u64 *arg1) {
    u64 temp_a0;
    u64 temp_a1;

    temp_a0 = *arg0;
    temp_a1 = *arg1;
    if (!(temp_a0 >= temp_a1)) {
        return -1;
    }
    return temp_a1 < temp_a0;
}
