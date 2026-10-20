#define DEF_func_002369A0
#include "m2c.h"
#include "funcs.h"
extern s32 D_002F27A4 __attribute__((section(".data")));

extern "C" s32 func_002369A0(s32 arg0) {
    if (func_002363F8(arg0) == 0x58) {
        return D_002F27A4;
    }
    return func_00236830(func_002363F8(arg0));
}
