#define DEF_func_001CDCB0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001CDCB0(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_a0 != 0) {
        func_0025F880(temp_a0, arg1, 0x500000);
    }
}
