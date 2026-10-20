#define DEF_func_001AF270
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002C54C0 __attribute__((section(".data")));
extern M2C_UNK D_002C54D0 __attribute__((section(".data")));
extern M2C_UNK D_002C54E0 __attribute__((section(".data")));
extern M2C_UNK D_002C54F0 __attribute__((section(".data")));

extern "C" void func_001AF270(void) {
    func_00256908(0x66, 0, (s32) &D_002C54D0);
    func_00256908(0x66, 1, (s32) &D_002C54E0);
    func_00256908(0x66, 4, (s32) &D_002C54F0);
    func_00256908(0x66, 0xD, (s32) &D_002C54C0);
    func_00252790(0x65);
    func_00252500(0x66);
    func_00252790(0x67);
    func_00252790(0x68);
}
