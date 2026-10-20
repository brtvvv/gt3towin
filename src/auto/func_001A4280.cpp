#define DEF_func_001A4280
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001A4280(s32 arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = arg0 + 0xC;
    if (M2C_FIELD(temp_a0, s32 *, 0x1F0) == 0) {
        func_001B1720(arg0 + 0x2C8, arg1, 1);
        return;
    }
    func_001B07A0((s32) temp_a0, arg1);
}
