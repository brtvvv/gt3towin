#define DEF_func_001F1930
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F1930(s32 arg0) {
    s32 temp_v0;

    func_001F5200();
    temp_v0 = func_001F15A0(arg0);
    if (temp_v0 < 3) {
        if (temp_v0 > 0) {
            func_001F0DF8(arg0);
        }
    }
}
