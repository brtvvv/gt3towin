#define DEF_func_0017F9F8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003299E8 __attribute__((section(".data")));

extern "C" void func_0017F9F8(void *arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(*M2C_FIELD(temp_a1, void ***, 0x38), s32 *, 8) == 0) {
        func_0017A100((s32) (temp_a1 + 0x84), 0x17, (s32) &D_003299E8, 0);
    }
    func_001AF670((s32) (arg0 + 0xBCD0), arg1);
}
