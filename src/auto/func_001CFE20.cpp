#define DEF_func_001CFE20
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001CFE20(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        func_001D1380((s32) arg0);
        temp_v0 = func_00256880(1);
        func_001D10C8((s32) arg0, temp_v0);
        if ((M2C_FIELD(arg0, f32 *, 0x80) > 0.0f) || (M2C_FIELD(arg0, f32 *, 0x84) > 0.0f)) {
            func_001D0D50((s32) arg0, temp_v0, 0);
        } else {
            temp_v0_2 = func_00256880(3);
            func_001D0F38((s32) arg0, temp_v0_2, M2C_FIELD(arg0, f32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x34), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C));
            func_002512B0(temp_v0_2, 0, temp_v0, 0, 4);
        }
        func_001CFF00((s32) arg0);
    }
}
