#define DEF_func_00126CA0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003135B0 __attribute__((section(".data")));

extern "C" void func_00126CA0(void *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xE70);
    if (temp_a0 != 0) {
        func_001170F0(temp_a0);
    }
    temp_s0 = func_0021ED00(func_0021EE60(), (s32) &D_003135B0);
    temp_v0 = func_00219680();
    M2C_FIELD(temp_v0, s64 *, 0x18) = (s64) (-temp_s0 + M2C_FIELD(temp_v0, s64 *, 0x18));
    func_001DAE90(M2C_FIELD(({ s32 _g = func_00219680() + 0x307C8; _g; }), s32 *, 0x538) + 0x204);
}
