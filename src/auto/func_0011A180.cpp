#define DEF_func_0011A180
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00310EE8 __attribute__((section(".data")));
extern M2C_UNK D_003529E0 __attribute__((section(".data")));

extern "C" void func_0011A180(s32 arg0) {
    func_001199A8(arg0);
    func_001199F0(arg0);
    func_002433A0(0);
    func_00119B98(arg0, (s32) &D_00310EE8);
    func_00218DB8(func_00219680() + 0x307C8, (s32) &D_003529E0, 2);
    func_00243408();
    func_00119B58(arg0);
    func_001199D0(arg0);
}
