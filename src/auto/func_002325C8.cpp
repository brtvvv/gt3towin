#define DEF_func_002325C8
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_002325C8(void **arg0, s32 arg1) {
    void *temp_a2;

    temp_a2 = *arg0;
    return temp_a2 + ((M2C_INDEX(temp_a2, s32, 0x10, arg1) & ~M2C_FIELD(temp_a2, s32 *, 0xC)) + M2C_FIELD(temp_a2, s32 *, 8));
}
