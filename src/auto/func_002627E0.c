#define DEF_func_002627E0
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354AE8;
extern s32 D_00354AEC;

void func_002627E0(void) {
    D_00354AE8 = func_002652A8(0xC);
    D_00354AEC = func_002652A8(0xC);
    func_002652A8(4);
    func_002652A8(4);
    func_002652A8(0x12);
    func_002653B8(1);
    func_002652A8(0xA);
    func_002652A8(1);
    if (func_002652A8(1) != 0) {
        func_00265608();
    }
    if (func_002652A8(1) != 0) {
        func_002656B8();
    }
    func_00262980();
}
