#define DEF_func_001A8650
#include "m2c.h"
#include "funcs.h"
extern f32 D_00353B78;
extern f32 D_00353B7C;
extern s32 D_00353B80;

extern "C" void func_001A8650(s32 arg0) {
    if (D_00353B80 == 0) {
        func_0022D6D8(arg0, 0x40, -1, D_00353B78 * D_00353B7C);
    }
}
