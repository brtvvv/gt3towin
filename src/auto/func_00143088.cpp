#include "m2c.h"
extern "C" void func_00143088(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 >= 0) {
        *arg0 = -0x400 - temp_v1;
    }
}
