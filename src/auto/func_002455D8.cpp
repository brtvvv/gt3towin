#define DEF_func_002455D8
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002455D8(s32 arg0, s32 arg1, s32 arg2) {
    func_00245620(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    func_00245E38(arg0);
    return arg0;
}
