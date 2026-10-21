#define DEF_func_001758F8
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001758F8(void *arg0, s32 arg1, s32 arg2) {
    if (func_001B32C8(arg0 + 0xC) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x940) != 0) {
            M2C_FIELD(arg0, f32 *, 0x944) = (f32) (M2C_FIELD(arg0, f32 *, 0x944) - 0.02f);
        }
        if ((arg2 != 0) || (M2C_FIELD(arg0, f32 *, 0x944) < 0.0f)) {
            func_0017A100(arg1 + 0x84, 1, 0, 0);
        }
    }
}
