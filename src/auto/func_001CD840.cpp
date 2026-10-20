#define DEF_func_001CD840
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001CD840(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    func_001CD800((s32) arg0);
}
