#include "m2c.h"
extern "C" void func_00217B38(u32 *arg0, u32 arg1) {
    u32 temp_v1;

    temp_v1 = *arg0;
    if ((temp_v1 == 0x157529FF) || (arg1 < temp_v1)) {
        *arg0 = arg1;
    }
}
