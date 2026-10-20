#define DEF_func_002224C0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_002224C0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x964) != arg1) {
        func_00222888((s32) arg0);
        M2C_FIELD(arg0, s32 *, 0x964) = arg1;
    }
}
