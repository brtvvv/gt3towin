#define DEF_func_00126150
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00126150(s32 arg0) {
    s32 temp_s1;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), void **, 0x538);
    temp_s1 = M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x590);
    temp_v0 = func_0021A558(func_00219680(), temp_s1);
    if (M2C_FIELD(temp_v0, s8 *, 0x10) == 0) {
        M2C_FIELD(temp_s2, s64 *, 0xF8) = 0;
    } else {
        M2C_FIELD(temp_s2, s64 *, 0xF8) = func_0023C468((s32) temp_v0);
    }
    func_001B3800(arg0 + 0x290, 0xC, 0x19);
}
