#include "m2c.h"
extern "C" void func_00216040(s32 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if ((temp_v1 == -1) || (arg1 < temp_v1)) {
        *arg0 = arg1;
    }
}
