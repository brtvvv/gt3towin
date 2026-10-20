#define DEF_func_001EC690
#include "m2c.h"
#include "funcs.h"
extern "C" f32 func_001EC690(void *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f12;

    temp_f12 = fparg0 + M2C_FIELD(arg0, f32 *, 0xEC4);
    return M2C_FIELD((((arg1 >> 1) * 0x44) + arg0), f32 *, 0x2D4) - ((M2C_INDEX(arg0, f32, 0x15D4, arg1) * temp_f12) + (M2C_FIELD(((arg1 * 0xA4) + arg0), f32 *, 0xFFC) * (1.0f - temp_f12)));
}
