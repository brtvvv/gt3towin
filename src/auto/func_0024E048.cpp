#define DEF_func_0024E048
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354A50;
extern s32 D_00354A54;
extern s32 D_00354A58;
extern s32 D_00354A5C;
extern s32 D_00354C8C;
extern s32 D_00354C90;
extern s32 D_00354C94;
extern s32 D_00354C98;

extern "C" void func_0024E048(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = (arg0 >> 9) & 0x7F;
    var_s0 = arg0 & 0x1FF;
    if (var_s0 == 0x1FF) {
        var_s0 = D_00354A58 + 0x1FF;
    }
    if ((var_s0 != 0) && (var_s0 != D_00354A50)) {
        if (var_s0 >= 0x1FF) {
            if (D_00354C94 != 0) {
                func_0024DE50((D_00354A58 * 0x28) + D_00354C94);
            }
        } else if (D_00354C8C != 0) {
            func_0024DE50(((var_s0 * 0x28) + D_00354C8C) - 0x28);
        }
        D_00354A50 = var_s0;
    }
    if (var_s1 == 0x1FF) {
        var_s1 = D_00354A5C + 0x1FF;
    }
    if ((var_s1 != 0) && (var_s1 != D_00354A54)) {
        if (var_s1 >= 0x7F) {
            if (D_00354C98 != 0) {
                func_0024DDC8((D_00354A5C * 0x50) + D_00354C98);
            }
        } else if (D_00354C90 != 0) {
            func_0024DDC8(((var_s1 * 0x50) + D_00354C90) - 0x50);
        }
        D_00354A54 = var_s1;
    }
}
