#include "m2c.h"
extern void *D_00354290;

extern "C" void *func_001D9130(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) D_00354290;
    D_00354290 = arg0;
    return arg0;
}
