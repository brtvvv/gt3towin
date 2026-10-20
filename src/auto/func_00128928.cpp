#define DEF_func_00128928
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00314B00 __attribute__((section(".data")));

extern "C" void func_00128928(s32 arg0, s32 arg1) {
    func_001C2A90(arg0 + 0x2E4, (s32) &D_00314B00, func_00219680() + 0x78, arg1, 0xF, 0, 0);
    func_0027FDBC(func_00219680() + 0x78, arg1);
}
