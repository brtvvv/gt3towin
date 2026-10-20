#define DEF_func_00238658
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00238658(s32 arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0xA8) = func_00235850(arg0, 0xC);
    func_00233228(arg0);
    M2C_FIELD(arg0, s64 *, 0xA0) = arg1;
}
