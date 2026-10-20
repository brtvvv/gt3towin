#define DEF_func_0020FA80
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0020FA80(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;
    void *temp_v0;

    temp_v0 = func_00219680() + 0x2FF38;
    temp_a3 = M2C_FIELD(temp_v0, s32 *, 0xD0);
    func_0020FAE8(arg0, arg1, arg2, temp_a3, M2C_INDEX(temp_v0, s32, 0xD4, temp_a3));
}
