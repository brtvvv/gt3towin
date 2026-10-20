#define DEF_func_001D4F28
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D4F28(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if ((temp_a1 != 0) && (M2C_FIELD(arg0, s32 *, 0x200) != 0) && (arg1 == 0)) {
        func_001D8840((s32) arg0, temp_a1, 0, 0);
        return;
    }
    func_001D77C0((s32) arg0, arg1);
}
