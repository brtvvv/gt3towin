#define DEF_func_00167A60
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00167A60(s32 arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x540);
    if (temp_a1 != 0) {
        func_0023C140(arg0 + 0xE40, temp_a1);
    }
}
