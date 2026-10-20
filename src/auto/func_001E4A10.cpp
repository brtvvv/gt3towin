#define DEF_func_001E4A10
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001E4A10(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0xEF8;
    func_001E4290(arg0, temp_s1);
    func_001E3F98(arg0, temp_s1, 1);
}
