#include "m2c.h"
extern void *D_00354958;

extern "C" void *func_00243C90(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) D_00354958;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    D_00354958 = arg0;
    return arg0;
}
