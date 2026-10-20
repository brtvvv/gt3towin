#define DEF_func_001B2500
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003337C8 __attribute__((section(".data")));
extern M2C_UNK D_00353D78 __attribute__((section(".data")));

extern "C" void func_001B2500(s32 arg0) {
    func_001B1A78(arg0, -1000.0f);
    func_001B18B0(arg0);
    func_001B1828(arg0, (s32) &D_003337C8);
    func_001B25E8(arg0, (s32) &D_00353D78, 0);
    func_001B2808(arg0);
}
