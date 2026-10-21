#define DEF_func_001D3610
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F2F98 __attribute__((section(".data")));
extern M2C_UNK D_003540B8 __attribute__((section(".data")));
extern s32 D_003540C0;

extern "C" void func_001D3610(void) {
    if (D_003540C0 != 0) {
        func_002540B0(0);
        func_00254258(1);
        func_0023DFD8((s32) &D_002F2F98, 0x20, 0x60);
        func_0023DC50((s32) &D_002F2F98, (s32) &D_003540B8);
        func_0023E130((s32) &D_002F2F98, 0x80808080);
        func_0023DE20((s32) &D_002F2F98, 0);
        func_0023E6E0((s32) &D_002F2F98, D_003540C0);
    }
}
