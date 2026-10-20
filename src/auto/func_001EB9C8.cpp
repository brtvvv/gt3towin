#define DEF_func_001EB9C8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001EB9C8(s32 arg0, s32 arg1, s32 arg2) {
    func_0027ED70(arg0, 0, 0x16DC);
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    func_001F9598(arg0 + 0xEC8, arg1, arg0);
}
