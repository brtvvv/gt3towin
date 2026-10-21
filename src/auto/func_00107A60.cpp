#define DEF_func_00107A60
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00107A60(s32 arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 ^ 2;
    func_001B9A28(*(s32 *)((temp_a1 != 0) ? (arg0 + 0x3ADC) : (arg0 + 0x3B48)), *(s32 *)((temp_a1 != 0) ? (arg0 + 0x3914) : (arg0 + 0x39AC)));
}
