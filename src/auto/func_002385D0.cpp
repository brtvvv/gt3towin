#define DEF_func_002385D0
#include "m2c.h"
#include "funcs.h"
extern "C" void func_002385D0(s32 arg0, s64 arg1) {
    s32 temp_v0;

    temp_v0 = func_00235850(arg0, 0xB);
    M2C_FIELD(arg0, s64 *, 0xA8) = arg1;
    M2C_FIELD(arg0, s64 *, 0xA0) = (s64) temp_v0;
    func_00233228(arg0);
}
