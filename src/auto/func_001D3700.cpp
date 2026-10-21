#define DEF_func_001D3700
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001D3700(s32 arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(({ s32 _g = func_00219680() + 0x2FF38; _g; }), s32 *, 4) != 0) {
        func_0022C8E0(arg0, arg1, arg2, 0.8f);
    }
}
