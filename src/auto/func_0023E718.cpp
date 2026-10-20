#define DEF_func_0023E718
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0023E718(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    if (M2C_FIELD(arg0, s32 *, 0x244) != 0) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x258);
        if (temp_s1 == 0) {
            func_0023E570((s32) arg0);
        }
        func_0024C1E0(arg1, arg2);
        if (temp_s1 == 0) {
            func_0023E668((s32) arg0);
        }
    }
}
