#include "m2c.h"
extern "C" void func_0025A290(void *arg0) {
    s32 *temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 **, 4);
    *temp_v1 |= 0x8000;
}
