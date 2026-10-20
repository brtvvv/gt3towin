#include "m2c.h"
extern "C" s32 func_00214DD0(s32 *arg0, s32 arg1) {
    if (arg1 < *arg0) {
        *arg0 = arg1;
        return 1;
    }
    return 0;
}
