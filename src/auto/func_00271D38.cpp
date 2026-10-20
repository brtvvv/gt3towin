#define DEF_func_00271D38
#include "m2c.h"
#include "funcs.h"
extern s32 D_00305A7C __attribute__((section(".data")));
extern s32 D_004ACF44 __attribute__((section(".data")));
extern s32 D_004ACF48 __attribute__((section(".data")));

extern "C" s32 func_00271D38(s32 arg0, s32 arg1) {
    s32 temp_s0;

    if (D_00305A7C < 0) {
        func_00271DE8();
    }
    func_0028E8E0();
    temp_s0 = D_004ACF44;
    D_004ACF48 = arg1;
    D_004ACF44 = arg0;
    func_0028E928();
    return temp_s0;
}
