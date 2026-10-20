#define DEF_func_001C80C8
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_001C80C8(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x800);
    if (M2C_FIELD(arg0, s32 *, 0x818) != temp_v1) {
        return arg0 + (temp_v1 << 6);
    }
    return NULL;
}
